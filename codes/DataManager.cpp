void DataManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct DataManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C26DAE & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26DAE = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0;
  static_fields->updateData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->updateData, 0, v1, v2);
  v4 = DataManager_TypeInfo->static_fields;
  v4->webViewData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->webViewData, 0, v5, v6);
  v7 = StringLiteral_1/*""*/;
  v8 = DataManager_TypeInfo->static_fields;
  v8->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->serverHash, v7, v9, v10);
}


void DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C26DAD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4C26DAD = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v6, v7, v8);
  v9 = (Il2CppObject *)sub_1C2D6DC(object_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields.lockCountObj = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float v4; // s2

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v4 = realtimeSinceStartup - this->fields.lastFrameTime;
  if ( v4 > 0.1 )
    this->fields.lastFrameTime = realtimeSinceStartup;
  return v4 > 0.1;
}


void DataManager__ClearCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C26D8B & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D8B = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(CachePath, v3);
}


// positive sp value has been detected, the output may be wrong!
void DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4C26D8C & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D8C = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0) )
    System_IO_Directory__Delete(cachePath, 1, 0);
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
}


void DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C26D8A & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D8A = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v3);
}


void DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v9; // w2
  int v10; // w9

  if ( (byte_4C26DA4 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4C26DA4 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v7 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1C2D6EC(v3, method);
  v9 = saveDataMapList->fields._size;
  v10 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v9, 0);
}


DataMasterBase_array *DataManager__CreateMasterData(const MethodInfo *method)
{
  DataMasterBase_array *v1; // x19
  ServantMaster_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v8; // x20
  const MethodInfo *v9; // x3
  ServantCommentMaster_o *v10; // x20
  const MethodInfo *v11; // x3
  ServantProfileMaster_o *v12; // x20
  const MethodInfo *v13; // x3
  WarMaster_o *v14; // x20
  const MethodInfo *v15; // x3
  UserMaster_o *v16; // x20
  const MethodInfo *v17; // x3
  UserGameMaster_o *v18; // x20
  const MethodInfo *v19; // x3
  TblUserMaster_o *v20; // x20
  const MethodInfo *v21; // x3
  UserItemMaster_o *v22; // x20
  const MethodInfo *v23; // x3
  UserServantMaster_o *v24; // x20
  const MethodInfo *v25; // x3
  UserServantStorageMaster_o *v26; // x20
  const MethodInfo *v27; // x3
  UserAccessaryMaster_o *v28; // x20
  const MethodInfo *v29; // x3
  UserQuestMaster_o *v30; // x20
  const MethodInfo *v31; // x3
  BattleMaster_o *v32; // x20
  const MethodInfo *v33; // x3
  OtherUserGameMaster_o *v34; // x20
  const MethodInfo *v35; // x3
  TblFriendMaster_o *v36; // x20
  const MethodInfo *v37; // x3
  AreaMaster_o *v38; // x20
  const MethodInfo *v39; // x3
  ServantCardMaster_o *v40; // x20
  const MethodInfo *v41; // x3
  EventMaster_o *v42; // x20
  const MethodInfo *v43; // x3
  ItemMaster_o *v44; // x20
  const MethodInfo *v45; // x3
  QuestMaster_o *v46; // x20
  const MethodInfo *v47; // x3
  QuestAddMaster_o *v48; // x20
  const MethodInfo *v49; // x3
  QuestReleaseMaster_o *v50; // x20
  const MethodInfo *v51; // x3
  QuestDateRangeMaster_o *v52; // x20
  const MethodInfo *v53; // x3
  QuestPhaseMaster_o *v54; // x20
  const MethodInfo *v55; // x3
  QuestPhaseDetailMaster_o *v56; // x20
  const MethodInfo *v57; // x3
  QuestGroupMaster_o *v58; // x20
  const MethodInfo *v59; // x3
  QuestRandomGroupMaster_o *v60; // x20
  const MethodInfo *v61; // x3
  QuestConsumeItemMaster_o *v62; // x20
  const MethodInfo *v63; // x3
  QuestMessageMaster_o *v64; // x20
  const MethodInfo *v65; // x3
  UserQuestInfoMaster_o *v66; // x20
  const MethodInfo *v67; // x3
  UserQuestRecordMaster_o *v68; // x20
  const MethodInfo *v69; // x3
  ViewQuestInfoMaster_o *v70; // x20
  const MethodInfo *v71; // x3
  ViewEnemyMaster_o *v72; // x20
  const MethodInfo *v73; // x3
  ViewQuestEnemyInfoMaster_o *v74; // x20
  const MethodInfo *v75; // x3
  BlankEarthSpotMaster_o *v76; // x20
  const MethodInfo *v77; // x3
  BlankEarthSpotAddMaster_o *v78; // x20
  const MethodInfo *v79; // x3
  SpotMaster_o *v80; // x20
  const MethodInfo *v81; // x3
  SpotImageMaster_o *v82; // x20
  const MethodInfo *v83; // x3
  SpotRoadMaster_o *v84; // x20
  const MethodInfo *v85; // x3
  SpotPathMaster_o *v86; // x20
  const MethodInfo *v87; // x3
  SpotAddMaster_o *v88; // x20
  const MethodInfo *v89; // x3
  MapGimmickMaster_o *v90; // x20
  const MethodInfo *v91; // x3
  GiftMaster_o *v92; // x20
  const MethodInfo *v93; // x3
  GiftAddMaster_o *v94; // x20
  const MethodInfo *v95; // x3
  ShopMaster_o *v96; // x20
  const MethodInfo *v97; // x3
  StoneShopMaster_o *v98; // x20
  const MethodInfo *v99; // x3
  BankShopMaster_o *v100; // x20
  const MethodInfo *v101; // x3
  ShopScriptMaster_o *v102; // x20
  const MethodInfo *v103; // x3
  StageMaster_o *v104; // x20
  const MethodInfo *v105; // x3
  ServantGroupMaster_o *v106; // x20
  const MethodInfo *v107; // x3
  ServantLimitMaster_o *v108; // x20
  const MethodInfo *v109; // x3
  ServantLimitAddMaster_o *v110; // x20
  const MethodInfo *v111; // x3
  ServantSkillMaster_o *v112; // x20
  const MethodInfo *v113; // x3
  ServantPassiveSkillMaster_o *v114; // x20
  const MethodInfo *v115; // x3
  BgmMaster_o *v116; // x20
  const MethodInfo *v117; // x3
  ServantScriptMaster_o *v118; // x20
  const MethodInfo *v119; // x3
  NewsMaster_o *v120; // x20
  const MethodInfo *v121; // x3
  TelopMaster_o *v122; // x20
  const MethodInfo *v123; // x3
  UserExpMaster_o *v124; // x20
  const MethodInfo *v125; // x3
  TreasureDvcMaster_o *v126; // x20
  const MethodInfo *v127; // x3
  ServantTreasureDvcMaster_o *v128; // x20
  const MethodInfo *v129; // x3
  SkillMaster_o *v130; // x20
  const MethodInfo *v131; // x3
  SkillLvMaster_o *v132; // x20
  const MethodInfo *v133; // x3
  SkillDetailMaster_o *v134; // x20
  const MethodInfo *v135; // x3
  CommandSpellMaster_o *v136; // x20
  const MethodInfo *v137; // x3
  EquipMaster_o *v138; // x20
  const MethodInfo *v139; // x3
  EquipExpMaster_o *v140; // x20
  const MethodInfo *v141; // x3
  EquipSkillMaster_o *v142; // x20
  const MethodInfo *v143; // x3
  SubEquipMaster_o *v144; // x20
  const MethodInfo *v145; // x3
  AccessaryMaster_o *v146; // x20
  const MethodInfo *v147; // x3
  UserPresentBoxMaster_o *v148; // x20
  const MethodInfo *v149; // x3
  UserDeckMaster_o *v150; // x20
  const MethodInfo *v151; // x3
  UserSubEquipMaster_o *v152; // x20
  const MethodInfo *v153; // x3
  GachaMaster_o *v154; // x20
  const MethodInfo *v155; // x3
  GachaImageMaster_o *v156; // x20
  const MethodInfo *v157; // x3
  UserGachaMaster_o *v158; // x20
  const MethodInfo *v159; // x3
  UserEquipMaster_o *v160; // x20
  const MethodInfo *v161; // x3
  UserServantCollectionMaster_o *v162; // x20
  const MethodInfo *v163; // x3
  FriendshipMaster_o *v164; // x20
  const MethodInfo *v165; // x3
  GachaTicketMaster_o *v166; // x20
  const MethodInfo *v167; // x3
  UserFormationMaster_o *v168; // x20
  const MethodInfo *v169; // x3
  FunctionMaster_o *v170; // x20
  const MethodInfo *v171; // x3
  BuffMaster_o *v172; // x20
  const MethodInfo *v173; // x3
  GachaReleaseMaster_o *v174; // x20
  const MethodInfo *v175; // x3
  CombineQpMaster_o *v176; // x20
  const MethodInfo *v177; // x3
  CombineMaterialMaster_o *v178; // x20
  const MethodInfo *v179; // x3
  EventCombineMaster_o *v180; // x20
  const MethodInfo *v181; // x3
  ServantExpMaster_o *v182; // x20
  const MethodInfo *v183; // x3
  CombineSkillMaster_o *v184; // x20
  const MethodInfo *v185; // x3
  CombineTdMaster_o *v186; // x20
  const MethodInfo *v187; // x3
  EventQuestMaster_o *v188; // x20
  const MethodInfo *v189; // x3
  EventCampaignMaster_o *v190; // x20
  const MethodInfo *v191; // x3
  IllustratorMaster_o *v192; // x20
  const MethodInfo *v193; // x3
  CvMaster_o *v194; // x20
  const MethodInfo *v195; // x3
  TreasureDvcLvMaster_o *v196; // x20
  const MethodInfo *v197; // x3
  TreasureDvcDetailMaster_o *v198; // x20
  const MethodInfo *v199; // x3
  UserFollowerMaster_o *v200; // x20
  const MethodInfo *v201; // x3
  NpcFollowerMaster_o *v202; // x20
  const MethodInfo *v203; // x3
  NpcServantFollowerMaster_o *v204; // x20
  const MethodInfo *v205; // x3
  UserEventMaster_o *v206; // x20
  const MethodInfo *v207; // x3
  UserShopMaster_o *v208; // x20
  const MethodInfo *v209; // x3
  UserContinueMaster_o *v210; // x20
  const MethodInfo *v211; // x3
  ConstantMaster_o *v212; // x20
  const MethodInfo *v213; // x3
  ConstantLongMaster_o *v214; // x20
  const MethodInfo *v215; // x3
  ConstantStrMaster_o *v216; // x20
  const MethodInfo *v217; // x3
  AiMaster_o *v218; // x20
  const MethodInfo *v219; // x3
  AiActMaster_o *v220; // x20
  const MethodInfo *v221; // x3
  AttriRelationMaster_o *v222; // x20
  const MethodInfo *v223; // x3
  ClassRelationMaster_o *v224; // x20
  const MethodInfo *v225; // x3
  EffectMaster_o *v226; // x20
  const MethodInfo *v227; // x3
  EquipImageMaster_o *v228; // x20
  const MethodInfo *v229; // x3
  ServantVoiceMaster_o *v230; // x20
  const MethodInfo *v231; // x3
  CombineLimitMaster_o *v232; // x20
  const MethodInfo *v233; // x3
  CardMaster_o *v234; // x20
  const MethodInfo *v235; // x3
  CombineQpSvtEquipMaster_o *v236; // x20
  const MethodInfo *v237; // x3
  ServantRarityMaster_o *v238; // x20
  const MethodInfo *v239; // x3
  SetItemMaster_o *v240; // x20
  const MethodInfo *v241; // x3
  RecoverMaster_o *v242; // x20
  const MethodInfo *v243; // x3
  BannerMaster_o *v244; // x20
  const MethodInfo *v245; // x3
  ShopReleaseMaster_o *v246; // x20
  const MethodInfo *v247; // x3
  EventRewardMaster_o *v248; // x20
  const MethodInfo *v249; // x3
  EventDetailMaster_o *v250; // x20
  const MethodInfo *v251; // x3
  EventServantMaster_o *v252; // x20
  const MethodInfo *v253; // x3
  BoxGachaMaster_o *v254; // x20
  const MethodInfo *v255; // x3
  BoxGachaBaseMaster_o *v256; // x20
  const MethodInfo *v257; // x3
  BoxGachaTalkMaster_o *v258; // x20
  const MethodInfo *v259; // x3
  UserBoxGachaMaster_o *v260; // x20
  const MethodInfo *v261; // x3
  BoxGachaHistoryMaster_o *v262; // x20
  const MethodInfo *v263; // x3
  BattleBgMaster_o *v264; // x20
  const MethodInfo *v265; // x3
  TipsBattleMaster_o *v266; // x20
  const MethodInfo *v267; // x3
  UserLoginMaster_o *v268; // x20
  const MethodInfo *v269; // x3
  VoiceMaster_o *v270; // x20
  const MethodInfo *v271; // x3
  EventRewardExtraMaster_o *v272; // x20
  const MethodInfo *v273; // x3
  EventMissionMaster_o *v274; // x20
  const MethodInfo *v275; // x3
  EventMissionActionMaster_o *v276; // x20
  const MethodInfo *v277; // x3
  EventMissionActionAddMaster_o *v278; // x20
  const MethodInfo *v279; // x3
  EventMissionConditionMaster_o *v280; // x20
  const MethodInfo *v281; // x3
  EventMissionCondDetailMaster_o *v282; // x20
  const MethodInfo *v283; // x3
  EventMissionAddMaster_o *v284; // x20
  const MethodInfo *v285; // x3
  CompleteMissionMaster_o *v286; // x20
  const MethodInfo *v287; // x3
  EventRewardSetMaster_o *v288; // x20
  const MethodInfo *v289; // x3
  UserEventMissionMaster_o *v290; // x20
  const MethodInfo *v291; // x3
  UserEventMissionCondDetailMaster_o *v292; // x20
  const MethodInfo *v293; // x3
  BoxGachaBaseDetailMaster_o *v294; // x20
  const MethodInfo *v295; // x3
  UserServantLeaderMaster_o *v296; // x20
  const MethodInfo *v297; // x3
  ClosedMessageMaster_o *v298; // x20
  const MethodInfo *v299; // x3
  FunctionGroupMaster_o *v300; // x20
  const MethodInfo *v301; // x3
  EventRaidMaster_o *v302; // x20
  const MethodInfo *v303; // x3
  TotalEventRaidMaster_o *v304; // x20
  const MethodInfo *v305; // x3
  UserEventRaidMaster_o *v306; // x20
  const MethodInfo *v307; // x3
  EventPointMaster_o *v308; // x20
  const MethodInfo *v309; // x3
  EventPointGroupMaster_o *v310; // x20
  const MethodInfo *v311; // x3
  TotalEventPointMaster_o *v312; // x20
  const MethodInfo *v313; // x3
  UserEventPointMaster_o *v314; // x20
  const MethodInfo *v315; // x3
  EventPointUpperMaster_o *v316; // x20
  const MethodInfo *v317; // x3
  EventPointUpperReleaseMaster_o *v318; // x20
  const MethodInfo *v319; // x3
  EventRaceMaster_o *v320; // x20
  const MethodInfo *v321; // x3
  EventRaceResultMaster_o *v322; // x20
  const MethodInfo *v323; // x3
  QuestRacePointMaster_o *v324; // x20
  const MethodInfo *v325; // x3
  UserEventRaceMaster_o *v326; // x20
  const MethodInfo *v327; // x3
  EventScriptMaster_o *v328; // x20
  const MethodInfo *v329; // x3
  EventScriptReleaseMaster_o *v330; // x20
  const MethodInfo *v331; // x3
  UserPresentHistoryMaster_o *v332; // x20
  const MethodInfo *v333; // x3
  MstMissionMaster_o *v334; // x20
  const MethodInfo *v335; // x3
  ServantExceedMaster_o *v336; // x20
  const MethodInfo *v337; // x3
  PartialMaintenanceMaster_o *v338; // x20
  const MethodInfo *v339; // x3
  GuideMaster_o *v340; // x20
  const MethodInfo *v341; // x3
  MstMissionDisplayInfoMaster_o *v342; // x20
  const MethodInfo *v343; // x3
  GachaGroupMaster_o *v344; // x20
  const MethodInfo *v345; // x3
  QuestResetMaster_o *v346; // x20
  const MethodInfo *v347; // x3
  WarAddMaster_o *v348; // x20
  const MethodInfo *v349; // x3
  EventItemDisplayMaster_o *v350; // x20
  const MethodInfo *v351; // x3
  EventItemDisplayGroupMaster_o *v352; // x20
  const MethodInfo *v353; // x3
  EventItemDisplayReleaseMaster_o *v354; // x20
  const MethodInfo *v355; // x3
  EventTutorialMaster_o *v356; // x20
  const MethodInfo *v357; // x3
  EventTutorialCondMaster_o *v358; // x20
  const MethodInfo *v359; // x3
  VoiceReleaseMaster_o *v360; // x20
  const MethodInfo *v361; // x3
  EventSuperBossMaster_o *v362; // x20
  const MethodInfo *v363; // x3
  UserSuperBossMaster_o *v364; // x20
  const MethodInfo *v365; // x3
  QuestScriptMaster_o *v366; // x20
  const MethodInfo *v367; // x3
  QuestScriptReleaseMaster_o *v368; // x20
  const MethodInfo *v369; // x3
  MaterialFolderMaster_o *v370; // x20
  const MethodInfo *v371; // x3
  RestrictionMaster_o *v372; // x20
  const MethodInfo *v373; // x3
  QuestRestrictionMaster_o *v374; // x20
  const MethodInfo *v375; // x3
  ServantVoiceRelationMaster_o *v376; // x20
  const MethodInfo *v377; // x3
  ShopDetailMaster_o *v378; // x20
  const MethodInfo *v379; // x3
  ServantScriptAddMaster_o *v380; // x20
  const MethodInfo *v381; // x3
  CombineMaster_o *v382; // x20
  const MethodInfo *v383; // x3
  AiFieldMaster_o *v384; // x20
  const MethodInfo *v385; // x3
  ServantCommentAddMaster_o *v386; // x20
  const MethodInfo *v387; // x3
  EventFilterMaster_o *v388; // x20
  const MethodInfo *v389; // x3
  UserSupportDeckMaster_o *v390; // x20
  const MethodInfo *v391; // x3
  EventRewardSceneMaster_o *v392; // x20
  const MethodInfo *v393; // x3
  EventVoicePlayMaster_o *v394; // x20
  const MethodInfo *v395; // x3
  GachaSubMaster_o *v396; // x20
  const MethodInfo *v397; // x3
  GachaDetailMaster_o *v398; // x20
  const MethodInfo *v399; // x3
  GachaBaseCollateralMaster_o *v400; // x20
  const MethodInfo *v401; // x3
  GachaAdjustAddMaster_o *v402; // x20
  const MethodInfo *v403; // x3
  GachaBonusSelectMaster_o *v404; // x20
  const MethodInfo *v405; // x3
  GachaBonusSelectLineupMaster_o *v406; // x20
  const MethodInfo *v407; // x3
  ServantChangeMaster_o *v408; // x20
  const MethodInfo *v409; // x3
  VoiceCondMaster_o *v410; // x20
  const MethodInfo *v411; // x3
  BgmReleaseMaster_o *v412; // x20
  const MethodInfo *v413; // x3
  MyRoomAddMaster_o *v414; // x20
  const MethodInfo *v415; // x3
  ShopActionMaster_o *v416; // x20
  const MethodInfo *v417; // x3
  EventRewardSceneReleaseMaster_o *v418; // x20
  const MethodInfo *v419; // x3
  QuestBehaviorMaster_o *v420; // x20
  const MethodInfo *v421; // x3
  MapMaster_o *v422; // x20
  const MethodInfo *v423; // x3
  MapCondMaster_o *v424; // x20
  const MethodInfo *v425; // x3
  MapButtonMaster_o *v426; // x20
  const MethodInfo *v427; // x3
  BannerAddMaster_o *v428; // x20
  const MethodInfo *v429; // x3
  EventAddMaster_o *v430; // x20
  const MethodInfo *v431; // x3
  TotalLoginMaster_o *v432; // x20
  const MethodInfo *v433; // x3
  ServantFilterMaster_o *v434; // x20
  const MethodInfo *v435; // x3
  CombineCostumeMaster_o *v436; // x20
  const MethodInfo *v437; // x3
  ServantCostumeMaster_o *v438; // x20
  const MethodInfo *v439; // x3
  ServantCostumeReleaseMaster_o *v440; // x20
  const MethodInfo *v441; // x3
  StaffPhotoMaster_o *v442; // x20
  const MethodInfo *v443; // x3
  StaffPhotoCostumeMaster_o *v444; // x20
  const MethodInfo *v445; // x3
  UserFriendRequestHistoryMaster_o *v446; // x20
  const MethodInfo *v447; // x3
  UserBlacklistMaster_o *v448; // x20
  const MethodInfo *v449; // x3
  ItemSelectMaster_o *v450; // x20
  const MethodInfo *v451; // x3
  TotalEventRaceMaster_o *v452; // x20
  const MethodInfo *v453; // x3
  EventPointGroupAddMaster_o *v454; // x20
  const MethodInfo *v455; // x3
  VoicePlayGroupMaster_o *v456; // x20
  const MethodInfo *v457; // x3
  VoicePlayCondMaster_o *v458; // x20
  const MethodInfo *v459; // x3
  GachaStoryAdjustMaster_o *v460; // x20
  const MethodInfo *v461; // x3
  ServantFlagMaster_o *v462; // x20
  const MethodInfo *v463; // x3
  ServantFlagReleaseMaster_o *v464; // x20
  const MethodInfo *v465; // x3
  EventLocationCampaignMaster_o *v466; // x20
  const MethodInfo *v467; // x3
  CampaignInfoMaster_o *v468; // x20
  const MethodInfo *v469; // x3
  DialogMessageMaster_o *v470; // x20
  const MethodInfo *v471; // x3
  ServantIndividualityMaster_o *v472; // x20
  const MethodInfo *v473; // x3
  BoardMessageMaster_o *v474; // x20
  const MethodInfo *v475; // x3
  BoardMessageReleaseMaster_o *v476; // x20
  const MethodInfo *v477; // x3
  EventServantFatigueMaster_o *v478; // x20
  const MethodInfo *v479; // x3
  UserEventDeckMaster_o *v480; // x20
  const MethodInfo *v481; // x3
  EventTowerMaster_o *v482; // x20
  const MethodInfo *v483; // x3
  EventTowerRewardMaster_o *v484; // x20
  const MethodInfo *v485; // x3
  EventBulletinBoardMaster_o *v486; // x20
  const MethodInfo *v487; // x3
  EventBulletinBoardReleaseMaster_o *v488; // x20
  const MethodInfo *v489; // x3
  EventFactoryMaster_o *v490; // x20
  const MethodInfo *v491; // x3
  ShopGroupMaster_o *v492; // x20
  const MethodInfo *v493; // x3
  AuraEffectMaster_o *v494; // x20
  const MethodInfo *v495; // x3
  AuraEffectPosOverwriteMaster_o *v496; // x20
  const MethodInfo *v497; // x3
  UserEventMissionFixMaster_o *v498; // x20
  const MethodInfo *v499; // x3
  NotEndEventMissionFixMaster_o *v500; // x20
  const MethodInfo *v501; // x3
  EnemyMstMaster_o *v502; // x20
  const MethodInfo *v503; // x3
  EnemyMstBattleMaster_o *v504; // x20
  const MethodInfo *v505; // x3
  ServantSkillReleaseMaster_o *v506; // x20
  const MethodInfo *v507; // x3
  ServantPassiveSkillReleaseMaster_o *v508; // x20
  const MethodInfo *v509; // x3
  ServantTreasureDeviceReleaseMaster_o *v510; // x20
  const MethodInfo *v511; // x3
  MapGimmickReleaseMaster_o *v512; // x20
  const MethodInfo *v513; // x3
  CommandCodeMaster_o *v514; // x20
  const MethodInfo *v515; // x3
  ServantCommandCodeUnlockMaster_o *v516; // x20
  const MethodInfo *v517; // x3
  UserCommandCodeMaster_o *v518; // x20
  const MethodInfo *v519; // x3
  UserCommandCodeCollectionMaster_o *v520; // x20
  const MethodInfo *v521; // x3
  UserServantCommandCodeMaster_o *v522; // x20
  const MethodInfo *v523; // x3
  UserServantCommandCardMaster_o *v524; // x20
  const MethodInfo *v525; // x3
  CommandCardRankParamMaster_o *v526; // x20
  const MethodInfo *v527; // x3
  CommandCodeSkillMaster_o *v528; // x20
  const MethodInfo *v529; // x3
  CommandCodeSkillReleaseMaster_o *v530; // x20
  const MethodInfo *v531; // x3
  CommandCodeCommentMaster_o *v532; // x20
  const MethodInfo *v533; // x3
  EventStatusMaster_o *v534; // x20
  const MethodInfo *v535; // x3
  EventStatusQuestMaster_o *v536; // x20
  const MethodInfo *v537; // x3
  CommonRestrictionMaster_o *v538; // x20
  const MethodInfo *v539; // x3
  EventPointBuffMaster_o *v540; // x20
  const MethodInfo *v541; // x3
  UserFollowMaster_o *v542; // x20
  const MethodInfo *v543; // x3
  EventRewardGuideReleaseMaster_o *v544; // x20
  const MethodInfo *v545; // x3
  NpcServantEquipMaster_o *v546; // x20
  const MethodInfo *v547; // x3
  EventCampaignReleaseMaster_o *v548; // x20
  const MethodInfo *v549; // x3
  ServantMaterialFolderMaster_o *v550; // x20
  const MethodInfo *v551; // x3
  EventEquipSkillReleaseMaster_o *v552; // x20
  const MethodInfo *v553; // x3
  EventPointActivityMaster_o *v554; // x20
  const MethodInfo *v555; // x3
  FunctionCategoryMaster_o *v556; // x20
  const MethodInfo *v557; // x3
  QuestPickupMaster_o *v558; // x20
  const MethodInfo *v559; // x3
  EventUiMaster_o *v560; // x20
  const MethodInfo *v561; // x3
  EventUiReleaseMaster_o *v562; // x20
  const MethodInfo *v563; // x3
  EventUiValueMaster_o *v564; // x20
  const MethodInfo *v565; // x3
  EventConquestRewardMaster_o *v566; // x20
  const MethodInfo *v567; // x3
  NpcFollowerReleaseMaster_o *v568; // x20
  const MethodInfo *v569; // x3
  EventBonusFilterMaster_o *v570; // x20
  const MethodInfo *v571; // x3
  EventBonusFilterGroupInfoMaster_o *v572; // x20
  const MethodInfo *v573; // x3
  EventBonusFilterGroupMemberMaster_o *v574; // x20
  const MethodInfo *v575; // x3
  UserGachaExtraCountMaster_o *v576; // x20
  const MethodInfo *v577; // x3
  PrivilegeMaster_o *v578; // x20
  const MethodInfo *v579; // x3
  UserPrivilegeMaster_o *v580; // x20
  const MethodInfo *v581; // x3
  UserQuestRouteMaster_o *v582; // x20
  const MethodInfo *v583; // x3
  EventBossStatusUiMaster_o *v584; // x20
  const MethodInfo *v585; // x3
  CommonReleaseMaster_o *v586; // x20
  const MethodInfo *v587; // x3
  QuestSpotReleaseMaster_o *v588; // x20
  const MethodInfo *v589; // x3
  VoiceMaterialCondMaster_o *v590; // x20
  const MethodInfo *v591; // x3
  ClassRelationOverwriteMaster_o *v592; // x20
  const MethodInfo *v593; // x3
  EventGroupMaster_o *v594; // x20
  const MethodInfo *v595; // x3
  TotalBoxGachaMaster_o *v596; // x20
  const MethodInfo *v597; // x3
  ServantTreasureDeviceDamageMaster_o *v598; // x20
  const MethodInfo *v599; // x3
  UserEventServantFatigueMaster_o *v600; // x20
  const MethodInfo *v601; // x3
  EventRewardBgMaster_o *v602; // x20
  const MethodInfo *v603; // x3
  EventFatigueRecoveryMaster_o *v604; // x20
  const MethodInfo *v605; // x3
  EventBoostItemUsedMaster_o *v606; // x20
  const MethodInfo *v607; // x3
  StatusEffectPosOverwriteMaster_o *v608; // x20
  const MethodInfo *v609; // x3
  QuestPhaseDetailAddMaster_o *v610; // x20
  const MethodInfo *v611; // x3
  VoiceClosedMessageMaster_o *v612; // x20
  const MethodInfo *v613; // x3
  ReprintStageMaster_o *v614; // x20
  const MethodInfo *v615; // x3
  UserCombineExpMaster_o *v616; // x20
  const MethodInfo *v617; // x3
  EventBoardGameCellMaster_o *v618; // x20
  const MethodInfo *v619; // x3
  EventBoardGameTokenMaster_o *v620; // x20
  const MethodInfo *v621; // x3
  EventBoardGameTokenRewardMaster_o *v622; // x20
  const MethodInfo *v623; // x3
  UserEventBoardGameTokenMaster_o *v624; // x20
  const MethodInfo *v625; // x3
  ServantAnimationOverwriteMaster_o *v626; // x20
  const MethodInfo *v627; // x3
  OpeningMovieMaster_o *v628; // x20
  const MethodInfo *v629; // x3
  ServantLimitSpoilerProtectionMaster_o *v630; // x20
  const MethodInfo *v631; // x3
  PickupUserFollowerMaster_o *v632; // x20
  const MethodInfo *v633; // x3
  ServantCollectionMaster_o *v634; // x20
  const MethodInfo *v635; // x3
  GachaBehaviorMaster_o *v636; // x20
  const MethodInfo *v637; // x3
  EventQuestCooltimeMaster_o *v638; // x20
  const MethodInfo *v639; // x3
  UserEventQuestCooltimeMaster_o *v640; // x20
  const MethodInfo *v641; // x3
  BoostMaster_o *v642; // x20
  const MethodInfo *v643; // x3
  WarBoardMaster_o *v644; // x20
  const MethodInfo *v645; // x3
  WarBoardSquareMaster_o *v646; // x20
  const MethodInfo *v647; // x3
  WarBoardRoadMaster_o *v648; // x20
  const MethodInfo *v649; // x3
  WarBoardStageMaster_o *v650; // x20
  const MethodInfo *v651; // x3
  WarBoardActionPointMaster_o *v652; // x20
  const MethodInfo *v653; // x3
  WarBoardActionTrendMaster_o *v654; // x20
  const MethodInfo *v655; // x3
  WarBoardTacticalTrendMaster_o *v656; // x20
  const MethodInfo *v657; // x3
  WarBoardStageLayoutMaster_o *v658; // x20
  const MethodInfo *v659; // x3
  WarBoardStageNpcMaster_o *v660; // x20
  const MethodInfo *v661; // x3
  WarBoardStageWallMaster_o *v662; // x20
  const MethodInfo *v663; // x3
  WarBoardAIMaster_o *v664; // x20
  const MethodInfo *v665; // x3
  WarBoardRatingBaseMaster_o *v666; // x20
  const MethodInfo *v667; // x3
  WarBoardRatingOffsetMaster_o *v668; // x20
  const MethodInfo *v669; // x3
  WarBoardItemMaster_o *v670; // x20
  const MethodInfo *v671; // x3
  WarBoardTreasureMaster_o *v672; // x20
  const MethodInfo *v673; // x3
  WarBoardQuestMaster_o *v674; // x20
  const MethodInfo *v675; // x3
  WarBoardDataMaster_o *v676; // x20
  const MethodInfo *v677; // x3
  WarBoardIndividualityClassMaster_o *v678; // x20
  const MethodInfo *v679; // x3
  WarBoardActionTrendConditionMaster_o *v680; // x20
  const MethodInfo *v681; // x3
  WarBoardActionPointClassMaster_o *v682; // x20
  const MethodInfo *v683; // x3
  EventPanelMapMaster_o *v684; // x20
  const MethodInfo *v685; // x3
  EventPanelMapDetailMaster_o *v686; // x20
  const MethodInfo *v687; // x3
  EventPanelSpotMaster_o *v688; // x20
  const MethodInfo *v689; // x3
  EventPanelScanMaster_o *v690; // x20
  const MethodInfo *v691; // x3
  CommonConsumeMaster_o *v692; // x20
  const MethodInfo *v693; // x3
  UserEventMapMaster_o *v694; // x20
  const MethodInfo *v695; // x3
  UserEventSpotMaster_o *v696; // x20
  const MethodInfo *v697; // x3
  WarGroupMaster_o *v698; // x20
  const MethodInfo *v699; // x3
  ServantLimitImageMaster_o *v700; // x20
  const MethodInfo *v701; // x3
  FriendshipQuestDialogInfoMaster_o *v702; // x20
  const MethodInfo *v703; // x3
  QuestRestrictionInfoMaster_o *v704; // x20
  const MethodInfo *v705; // x3
  AssistMaster_o *v706; // x20
  const MethodInfo *v707; // x3
  WarBoardEffectMaster_o *v708; // x20
  const MethodInfo *v709; // x3
  WarBoardOnboardSkillMaster_o *v710; // x20
  const MethodInfo *v711; // x3
  BeforeBirthDayMaster_o *v712; // x20
  const MethodInfo *v713; // x3
  LoginQuestMaster_o *v714; // x20
  const MethodInfo *v715; // x3
  EventCombineCostumeMaster_o *v716; // x20
  const MethodInfo *v717; // x3
  WarBoardStagePieceDetailMaster_o *v718; // x20
  const MethodInfo *v719; // x3
  ServantTreasureDeviceAddMaster_o *v720; // x20
  const MethodInfo *v721; // x3
  SkillAddMaster_o *v722; // x20
  const MethodInfo *v723; // x3
  ServantLvDetailMaster_o *v724; // x20
  const MethodInfo *v725; // x3
  GachaAppendMaster_o *v726; // x20
  const MethodInfo *v727; // x3
  UserGachaDrawLogMaster_o *v728; // x20
  const MethodInfo *v729; // x3
  ServantAppendPassiveSkillMaster_o *v730; // x20
  const MethodInfo *v731; // x3
  UserServantAppendPassiveSkillMaster_o *v732; // x20
  const MethodInfo *v733; // x3
  UserServantAppendPassiveSkillLvMaster_o *v734; // x20
  const MethodInfo *v735; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v736; // x20
  const MethodInfo *v737; // x3
  CombineAppendPassiveSkillMaster_o *v738; // x20
  const MethodInfo *v739; // x3
  SvtCoinMaster_o *v740; // x20
  const MethodInfo *v741; // x3
  UserSvtCoinMaster_o *v742; // x20
  const MethodInfo *v743; // x3
  ServantAddMaster_o *v744; // x20
  const MethodInfo *v745; // x3
  TreasureBoxMaster_o *v746; // x20
  const MethodInfo *v747; // x3
  TreasureBoxGiftMaster_o *v748; // x20
  const MethodInfo *v749; // x3
  TreasureBoxTalkMaster_o *v750; // x20
  const MethodInfo *v751; // x3
  UserEventExpeditionMaster_o *v752; // x20
  const MethodInfo *v753; // x3
  EventExpeditionMaster_o *v754; // x20
  const MethodInfo *v755; // x3
  EventExpeditionPieceMaster_o *v756; // x20
  const MethodInfo *v757; // x3
  EventRecipeMaster_o *v758; // x20
  const MethodInfo *v759; // x3
  EventRecipeGiftMaster_o *v760; // x20
  const MethodInfo *v761; // x3
  UserEventFortificationMaster_o *v762; // x20
  const MethodInfo *v763; // x3
  EventFortificationMaster_o *v764; // x20
  const MethodInfo *v765; // x3
  EventFortificationDetailMaster_o *v766; // x20
  const MethodInfo *v767; // x3
  EventFortificationSvtMaster_o *v768; // x20
  const MethodInfo *v769; // x3
  UserServantVoicePlayedMaster_o *v770; // x20
  const MethodInfo *v771; // x3
  UpdateProfileDialogInfoMaster_o *v772; // x20
  const MethodInfo *v773; // x3
  SvtMaterialTdMaster_o *v774; // x20
  const MethodInfo *v775; // x3
  BattleMasterImageMaster_o *v776; // x20
  const MethodInfo *v777; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v778; // x20
  const MethodInfo *v779; // x3
  UserEventRandomMissionMaster_o *v780; // x20
  const MethodInfo *v781; // x3
  EventProgressValueMaster_o *v782; // x20
  const MethodInfo *v783; // x3
  SvtMultiPortraitMaster_o *v784; // x20
  const MethodInfo *v785; // x3
  EventRandomMissionMaster_o *v786; // x20
  const MethodInfo *v787; // x3
  UserGachaHistoryMaster_o *v788; // x20
  const MethodInfo *v789; // x3
  UserCoinRoomMaster_o *v790; // x20
  const MethodInfo *v791; // x3
  EventBuddyPointMaster_o *v792; // x20
  const MethodInfo *v793; // x3
  EventServantPointRankMaster_o *v794; // x20
  const MethodInfo *v795; // x3
  UserEventServantPointMaster_o *v796; // x20
  const MethodInfo *v797; // x3
  FieldMotionMaster_o *v798; // x20
  const MethodInfo *v799; // x3
  UserDeleteReservationMaster_o *v800; // x20
  const MethodInfo *v801; // x3
  ServantScriptMultipleMaster_o *v802; // x20
  const MethodInfo *v803; // x3
  EquipAddMaster_o *v804; // x20
  const MethodInfo *v805; // x3
  QuestReleaseOverwriteMaster_o *v806; // x20
  const MethodInfo *v807; // x3
  UserEventAlloutBattleMaster_o *v808; // x20
  const MethodInfo *v809; // x3
  QuestScriptMaterialNextMaster_o *v810; // x20
  const MethodInfo *v811; // x3
  EventDiggingMaster_o *v812; // x20
  const MethodInfo *v813; // x3
  EventDiggingBlockMaster_o *v814; // x20
  const MethodInfo *v815; // x3
  EventDiggingRewardMaster_o *v816; // x20
  const MethodInfo *v817; // x3
  UserEventDiggingMaster_o *v818; // x20
  const MethodInfo *v819; // x3
  BattleMessageMaster_o *v820; // x20
  const MethodInfo *v821; // x3
  BattleMessageGroupMaster_o *v822; // x20
  const MethodInfo *v823; // x3
  UserNpcSvtRecordMaster_o *v824; // x20
  const MethodInfo *v825; // x3
  BuffTypeDetailMaster_o *v826; // x20
  const MethodInfo *v827; // x3
  WarBoardMessageMaster_o *v828; // x20
  const MethodInfo *v829; // x3
  WarBoardPartySkillMaster_o *v830; // x20
  const MethodInfo *v831; // x3
  WarBoardMessageScriptMaster_o *v832; // x20
  const MethodInfo *v833; // x3
  WarQuestSelectionMaster_o *v834; // x20
  const MethodInfo *v835; // x3
  WarBoardStageDetailMaster_o *v836; // x20
  const MethodInfo *v837; // x3
  QuestScriptMaterialOverwriteMaster_o *v838; // x20
  const MethodInfo *v839; // x3
  QuestScriptBranchMaterialMaster_o *v840; // x20
  const MethodInfo *v841; // x3
  AdCheckPointMaster_o *v842; // x20
  const MethodInfo *v843; // x3
  GiftDetailMaster_o *v844; // x20
  const MethodInfo *v845; // x3
  CombineLimitGiftMaster_o *v846; // x20
  const MethodInfo *v847; // x3
  EventCooltimeRewardMaster_o *v848; // x20
  const MethodInfo *v849; // x3
  UserEventCooltimeRewardMaster_o *v850; // x20
  const MethodInfo *v851; // x3
  ClassBoardBaseMaster_o *v852; // x20
  const MethodInfo *v853; // x3
  ClassBoardLockMaster_o *v854; // x20
  const MethodInfo *v855; // x3
  ClassBoardSquareMaster_o *v856; // x20
  const MethodInfo *v857; // x3
  ClassBoardLineMaster_o *v858; // x20
  const MethodInfo *v859; // x3
  UserClassBoardSquareMaster_o *v860; // x20
  const MethodInfo *v861; // x3
  ServantCardAddMaster_o *v862; // x20
  const MethodInfo *v863; // x3
  MapLayerMaster_o *v864; // x20
  const MethodInfo *v865; // x3
  SpotLayerMaster_o *v866; // x20
  const MethodInfo *v867; // x3
  MapGimmickLayerMaster_o *v868; // x20
  const MethodInfo *v869; // x3
  EventDataLostBattleMaster_o *v870; // x20
  const MethodInfo *v871; // x3
  EventDataLostBattleResetMaster_o *v872; // x20
  const MethodInfo *v873; // x3
  UserEventDataLostMaster_o *v874; // x20
  const MethodInfo *v875; // x3
  QuestHintMaster_o *v876; // x20
  const MethodInfo *v877; // x3
  FuncTypeDetailMaster_o *v878; // x20
  const MethodInfo *v879; // x3
  BuffConvertMaster_o *v880; // x20
  const MethodInfo *v881; // x3
  SkillGroupMaster_o *v882; // x20
  const MethodInfo *v883; // x3
  SkillGroupOverwriteMaster_o *v884; // x20
  const MethodInfo *v885; // x3
  SkillIndividualityMaster_o *v886; // x20
  const MethodInfo *v887; // x3
  RestrictionBaseMaster_o *v888; // x20
  const MethodInfo *v889; // x3
  RestrictionSlotMaster_o *v890; // x20
  const MethodInfo *v891; // x3
  RestrictionSlotDetailMaster_o *v892; // x20
  const MethodInfo *v893; // x3
  RestrictionMessageMaster_o *v894; // x20
  const MethodInfo *v895; // x3
  RestrictionWholeMaster_o *v896; // x20
  const MethodInfo *v897; // x3
  FuncDispMaster_o *v898; // x20
  const MethodInfo *v899; // x3
  ClassBoardCommandSpellMaster_o *v900; // x20
  const MethodInfo *v901; // x3
  ClassBoardClassMaster_o *v902; // x20
  const MethodInfo *v903; // x3
  EventCommandAssistMaster_o *v904; // x20
  const MethodInfo *v905; // x3
  EventMissionGroupMaster_o *v906; // x20
  const MethodInfo *v907; // x3
  CombineLimitReleaseMaster_o *v908; // x20
  const MethodInfo *v909; // x3
  HeelPortraitMaster_o *v910; // x20
  const MethodInfo *v911; // x3
  UserHeelPortraitMaster_o *v912; // x20
  const MethodInfo *v913; // x3
  TreasureDeviceSequenceWeightMaster_o *v914; // x20
  const MethodInfo *v915; // x3
  NpcServantFollowerIndividualityMaster_o *v916; // x20
  const MethodInfo *v917; // x3
  GachaExtraGiftMaster_o *v918; // x20
  const MethodInfo *v919; // x3
  EventMuralMaster_o *v920; // x20
  const MethodInfo *v921; // x3
  ViewWaveEnemyMaster_o *v922; // x20
  const MethodInfo *v923; // x3
  BlankEarthSpotNavimenuMaster_o *v924; // x20
  const MethodInfo *v925; // x3
  BlankEarthGimmickMaster_o *v926; // x20
  const MethodInfo *v927; // x3
  TerminalOverwriteMaster_o *v928; // x20
  const MethodInfo *v929; // x3
  UserExchangeSvtMaster_o *v930; // x20
  const MethodInfo *v931; // x3
  WarBoardCommonReleaseMaster_o *v932; // x20
  const MethodInfo *v933; // x3
  WarBoardEventMaster_o *v934; // x20
  const MethodInfo *v935; // x3
  WarBoardEventScriptMaster_o *v936; // x20
  const MethodInfo *v937; // x3
  WarBoardStageBossMaster_o *v938; // x20
  const MethodInfo *v939; // x3
  WarBoardSquareIndexGroupMaster_o *v940; // x20
  const MethodInfo *v941; // x3
  WarBoardActionTrendGroupMaster_o *v942; // x20
  const MethodInfo *v943; // x3
  WarBoardRatingOffsetGroupMaster_o *v944; // x20
  const MethodInfo *v945; // x3
  WarBoardReinforcementsMaster_o *v946; // x20
  const MethodInfo *v947; // x3
  WarBoardStageReinforcementsMaster_o *v948; // x20
  const MethodInfo *v949; // x3
  WarBoardFutureActionTrendMaster_o *v950; // x20
  const MethodInfo *v951; // x3
  ServantProfilePushMaster_o *v952; // x20
  const MethodInfo *v953; // x3
  MapGimmickPathMaster_o *v954; // x20
  const MethodInfo *v955; // x3
  MapGimmickPathReleaseMaster_o *v956; // x20
  const MethodInfo *v957; // x3
  ServantOverwriteMaster_o *v958; // x20
  const MethodInfo *v959; // x3
  IndividualityPolicyMaster_o *v960; // x20
  const MethodInfo *v961; // x3
  IndividualityPersonalityMaster_o *v962; // x20
  const MethodInfo *v963; // x3
  AttriMaster_o *v964; // x20
  const MethodInfo *v965; // x3
  ServantVoicePatternMaster_o *v966; // x20
  const MethodInfo *v967; // x3
  UserGameCommonMaster_o *v968; // x20
  const MethodInfo *v969; // x3
  ServantPhotoMaster_o *v970; // x20
  const MethodInfo *v971; // x3
  MasterPhotoMaster_o *v972; // x20
  const MethodInfo *v973; // x3
  PhotoFrameMaster_o *v974; // x20
  const MethodInfo *v975; // x3
  WarMessageMaster_o *v976; // x20
  const MethodInfo *v977; // x3
  QuestAutoOrganizationAdjustMaster_o *v978; // x20
  const MethodInfo *v979; // x3
  ExcludeMotionMaster_o *v980; // x20
  const MethodInfo *v981; // x3
  UserInterruptionQuestMaster_o *v982; // x20
  const MethodInfo *v983; // x3
  ServantTransformMaster_o *v984; // x20
  const MethodInfo *v985; // x3
  MapUpdateScheduleMaster_o *v986; // x20
  const MethodInfo *v987; // x3
  QuestPhasePresentMaster_o *v988; // x20
  const MethodInfo *v989; // x3
  UserAccountLinkageMaster_o *v990; // x20
  const MethodInfo *v991; // x3
  MissionNaviTransitionMaster_o *v992; // x20
  const MethodInfo *v993; // x3
  MissionNaviQuestMaster_o *v994; // x20
  const MethodInfo *v995; // x3
  EventTradeGoodsMaster_o *v996; // x20
  const MethodInfo *v997; // x3
  EventTradeStoreMaster_o *v998; // x20
  const MethodInfo *v999; // x3
  EventTradePickupMaster_o *v1000; // x20
  const MethodInfo *v1001; // x3
  UserEventTradeMaster_o *v1002; // x20
  const MethodInfo *v1003; // x3
  PaymentHistoryMaster_o *v1004; // x20
  const MethodInfo *v1005; // x3
  UserExternalPaymentStoneMaster_o *v1006; // x20
  const MethodInfo *v1007; // x3
  QuestPhaseIndividualityMaster_o *v1008; // x20
  const MethodInfo *v1009; // x3
  ViewGachaFeaturedServantMaster_o *v1010; // x20
  const MethodInfo *v1011; // x3
  UserGachaPickupCollateralMaster_o *v1012; // x20
  const MethodInfo *v1013; // x3
  GachaPickupCollateralMaster_o *v1014; // x20
  const MethodInfo *v1015; // x3
  GachaPickupCollateralGroupMaster_o *v1016; // x20
  const MethodInfo *v1017; // x3
  BattlePointMaster_o *v1018; // x20
  const MethodInfo *v1019; // x3
  BattlePointPhaseMaster_o *v1020; // x20
  const MethodInfo *v1021; // x3
  ServantBattlePointMaster_o *v1022; // x20
  const MethodInfo *v1023; // x3
  EffectMovieMaster_o *v1024; // x20
  const MethodInfo *v1025; // x3
  PaymentLimitMaster_o *v1026; // x20
  const MethodInfo *v1027; // x3
  UserPaymentLimitMaster_o *v1028; // x20
  const MethodInfo *v1029; // x3
  RoadmapMaster_o *v1030; // x20
  const MethodInfo *v1031; // x3
  UserRecommendSupportMaster_o *v1032; // x20
  const MethodInfo *v1033; // x3
  RecommendSupportQuestMaster_o *v1034; // x20
  const MethodInfo *v1035; // x3
  RecommendAdviceMessageMaster_o *v1036; // x20
  const MethodInfo *v1037; // x3
  UserRecommendFollowerMaster_o *v1038; // x20
  const MethodInfo *v1039; // x3
  ItemDropEfficiencyMaster_o *v1040; // x20
  const MethodInfo *v1041; // x3
  BlankEarthGimmickAddMaster_o *v1042; // x20
  const MethodInfo *v1043; // x3
  WarReleaseMaster_o *v1044; // x20
  const MethodInfo *v1045; // x3
  SelectBonusBaseMaster_o *v1046; // x20
  const MethodInfo *v1047; // x3
  SelectBonusMaster_o *v1048; // x20
  const MethodInfo *v1049; // x3
  MyroomServantSpecialImageMaster_o *v1050; // x20
  const MethodInfo *v1051; // x3
  ShopResetMaster_o *v1052; // x20
  const MethodInfo *v1053; // x3
  NpcServantDisplayTypeDetailMaster_o *v1054; // x20
  const MethodInfo *v1055; // x3
  FriendshipServantMaster_o *v1056; // x20
  const MethodInfo *v1057; // x3
  ExchangeSvtCoinGivenNumMaster_o *v1058; // x20
  const MethodInfo *v1059; // x3
  ChaldeaGatePickupMaster_o *v1060; // x20
  const MethodInfo *v1061; // x3
  WarGroupIgnoreMaster_o *v1062; // x20
  const MethodInfo *v1063; // x3
  ImagePartsGroupMaster_o *v1064; // x20
  const MethodInfo *v1065; // x3
  UserImagePartsGroupMaster_o *v1066; // x20
  const MethodInfo *v1067; // x3
  MissionItemDisplayMaster_o *v1068; // x20
  const MethodInfo *v1069; // x3
  QuestUseItemGroupMaster_o *v1070; // x20
  const MethodInfo *v1071; // x3
  QuestUseItemPickupMaster_o *v1072; // x20
  const MethodInfo *v1073; // x3
  UserEventItemLinkSvtMaster_o *v1074; // x20
  const MethodInfo *v1075; // x3
  QuestHintOverwriteMaster_o *v1076; // x20
  const MethodInfo *v1077; // x3
  ReachedWaveInfoMaster_o *v1078; // x20
  const MethodInfo *v1079; // x3
  GalleryMaster_o *v1080; // x20
  const MethodInfo *v1081; // x3
  GalleryResourceMaster_o *v1082; // x20
  const MethodInfo *v1083; // x3
  ServantSkillAddMaster_o *v1084; // x20
  const MethodInfo *v1085; // x3
  GalleryFolderReleaseMaster_o *v1086; // x20
  const MethodInfo *v1087; // x3
  UserSvtFirstGetTimeMaster_o *v1088; // x20
  const MethodInfo *v1089; // x3
  QuestExtensionMaster_o *v1090; // x20
  const MethodInfo *v1091; // x3
  UserServantGrandMaster_o *v1092; // x20
  const MethodInfo *v1093; // x3
  GrandGraphMaster_o *v1094; // x20
  const MethodInfo *v1095; // x3
  GrandGraphDetailMaster_o *v1096; // x20
  const MethodInfo *v1097; // x3
  UserClassStatisticsMaster_o *v1098; // x20
  const MethodInfo *v1099; // x3
  EventEquipSkillPartsMaster_o *v1100; // x20
  const MethodInfo *v1101; // x3
  MasterIndividualitySelectMaster_o *v1102; // x20
  const MethodInfo *v1103; // x3
  __int64 v1105; // x0

  if ( (byte_4C26DAC & 1) == 0 )
  {
    sub_1C2D490(&AccessaryMaster_TypeInfo);
    sub_1C2D490(&AdCheckPointMaster_TypeInfo);
    sub_1C2D490(&AiActMaster_TypeInfo);
    sub_1C2D490(&AiFieldMaster_TypeInfo);
    sub_1C2D490(&AiMaster_TypeInfo);
    sub_1C2D490(&AreaMaster_TypeInfo);
    sub_1C2D490(&AssistMaster_TypeInfo);
    sub_1C2D490(&AttriMaster_TypeInfo);
    sub_1C2D490(&AttriRelationMaster_TypeInfo);
    sub_1C2D490(&AuraEffectMaster_TypeInfo);
    sub_1C2D490(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C2D490(&BankShopMaster_TypeInfo);
    sub_1C2D490(&BannerAddMaster_TypeInfo);
    sub_1C2D490(&BannerMaster_TypeInfo);
    sub_1C2D490(&BattleBgMaster_TypeInfo);
    sub_1C2D490(&BattleMasterImageMaster_TypeInfo);
    sub_1C2D490(&BattleMaster_TypeInfo);
    sub_1C2D490(&BattleMessageGroupMaster_TypeInfo);
    sub_1C2D490(&BattleMessageMaster_TypeInfo);
    sub_1C2D490(&BattlePointMaster_TypeInfo);
    sub_1C2D490(&BattlePointPhaseMaster_TypeInfo);
    sub_1C2D490(&BeforeBirthDayMaster_TypeInfo);
    sub_1C2D490(&BgmMaster_TypeInfo);
    sub_1C2D490(&BgmReleaseMaster_TypeInfo);
    sub_1C2D490(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1C2D490(&BlankEarthGimmickMaster_TypeInfo);
    sub_1C2D490(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1C2D490(&BlankEarthSpotMaster_TypeInfo);
    sub_1C2D490(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1C2D490(&BoardMessageMaster_TypeInfo);
    sub_1C2D490(&BoardMessageReleaseMaster_TypeInfo);
    sub_1C2D490(&BoostMaster_TypeInfo);
    sub_1C2D490(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1C2D490(&BoxGachaBaseMaster_TypeInfo);
    sub_1C2D490(&BoxGachaHistoryMaster_TypeInfo);
    sub_1C2D490(&BoxGachaMaster_TypeInfo);
    sub_1C2D490(&BoxGachaTalkMaster_TypeInfo);
    sub_1C2D490(&BuffConvertMaster_TypeInfo);
    sub_1C2D490(&BuffMaster_TypeInfo);
    sub_1C2D490(&BuffTypeDetailMaster_TypeInfo);
    sub_1C2D490(&CampaignInfoMaster_TypeInfo);
    sub_1C2D490(&CardMaster_TypeInfo);
    sub_1C2D490(&ChaldeaGatePickupMaster_TypeInfo);
    sub_1C2D490(&ClassBoardBaseMaster_TypeInfo);
    sub_1C2D490(&ClassBoardClassMaster_TypeInfo);
    sub_1C2D490(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1C2D490(&ClassBoardLineMaster_TypeInfo);
    sub_1C2D490(&ClassBoardLockMaster_TypeInfo);
    sub_1C2D490(&ClassBoardSquareMaster_TypeInfo);
    sub_1C2D490(&ClassRelationMaster_TypeInfo);
    sub_1C2D490(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1C2D490(&ClosedMessageMaster_TypeInfo);
    sub_1C2D490(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1C2D490(&CombineCostumeMaster_TypeInfo);
    sub_1C2D490(&CombineLimitGiftMaster_TypeInfo);
    sub_1C2D490(&CombineLimitMaster_TypeInfo);
    sub_1C2D490(&CombineLimitReleaseMaster_TypeInfo);
    sub_1C2D490(&CombineMaster_TypeInfo);
    sub_1C2D490(&CombineMaterialMaster_TypeInfo);
    sub_1C2D490(&CombineQpMaster_TypeInfo);
    sub_1C2D490(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1C2D490(&CombineSkillMaster_TypeInfo);
    sub_1C2D490(&CombineTdMaster_TypeInfo);
    sub_1C2D490(&CommandCardRankParamMaster_TypeInfo);
    sub_1C2D490(&CommandCodeCommentMaster_TypeInfo);
    sub_1C2D490(&CommandCodeMaster_TypeInfo);
    sub_1C2D490(&CommandCodeSkillMaster_TypeInfo);
    sub_1C2D490(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1C2D490(&CommandSpellMaster_TypeInfo);
    sub_1C2D490(&CommonConsumeMaster_TypeInfo);
    sub_1C2D490(&CommonReleaseMaster_TypeInfo);
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    sub_1C2D490(&CompleteMissionMaster_TypeInfo);
    sub_1C2D490(&ConstantLongMaster_TypeInfo);
    sub_1C2D490(&ConstantMaster_TypeInfo);
    sub_1C2D490(&ConstantStrMaster_TypeInfo);
    sub_1C2D490(&CvMaster_TypeInfo);
    sub_1C2D490(&DataMasterBase___TypeInfo);
    sub_1C2D490(&DialogMessageMaster_TypeInfo);
    sub_1C2D490(&EffectMaster_TypeInfo);
    sub_1C2D490(&EffectMovieMaster_TypeInfo);
    sub_1C2D490(&EnemyMstBattleMaster_TypeInfo);
    sub_1C2D490(&EnemyMstMaster_TypeInfo);
    sub_1C2D490(&EquipAddMaster_TypeInfo);
    sub_1C2D490(&EquipExpMaster_TypeInfo);
    sub_1C2D490(&EquipImageMaster_TypeInfo);
    sub_1C2D490(&EquipMaster_TypeInfo);
    sub_1C2D490(&EquipSkillMaster_TypeInfo);
    sub_1C2D490(&EventAddMaster_TypeInfo);
    sub_1C2D490(&EventBoardGameCellMaster_TypeInfo);
    sub_1C2D490(&EventBoardGameTokenMaster_TypeInfo);
    sub_1C2D490(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1C2D490(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1C2D490(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1C2D490(&EventBonusFilterMaster_TypeInfo);
    sub_1C2D490(&EventBoostItemUsedMaster_TypeInfo);
    sub_1C2D490(&EventBossStatusUiMaster_TypeInfo);
    sub_1C2D490(&EventBuddyPointMaster_TypeInfo);
    sub_1C2D490(&EventBulletinBoardMaster_TypeInfo);
    sub_1C2D490(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1C2D490(&EventCampaignMaster_TypeInfo);
    sub_1C2D490(&EventCampaignReleaseMaster_TypeInfo);
    sub_1C2D490(&EventCombineCostumeMaster_TypeInfo);
    sub_1C2D490(&EventCombineMaster_TypeInfo);
    sub_1C2D490(&EventCommandAssistMaster_TypeInfo);
    sub_1C2D490(&EventConquestRewardMaster_TypeInfo);
    sub_1C2D490(&EventCooltimeRewardMaster_TypeInfo);
    sub_1C2D490(&EventDataLostBattleMaster_TypeInfo);
    sub_1C2D490(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1C2D490(&EventDetailMaster_TypeInfo);
    sub_1C2D490(&EventDiggingBlockMaster_TypeInfo);
    sub_1C2D490(&EventDiggingMaster_TypeInfo);
    sub_1C2D490(&EventDiggingRewardMaster_TypeInfo);
    sub_1C2D490(&EventEquipSkillPartsMaster_TypeInfo);
    sub_1C2D490(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1C2D490(&EventExpeditionMaster_TypeInfo);
    sub_1C2D490(&EventExpeditionPieceMaster_TypeInfo);
    sub_1C2D490(&EventFactoryMaster_TypeInfo);
    sub_1C2D490(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1C2D490(&EventFilterMaster_TypeInfo);
    sub_1C2D490(&EventFortificationDetailMaster_TypeInfo);
    sub_1C2D490(&EventFortificationMaster_TypeInfo);
    sub_1C2D490(&EventFortificationSvtMaster_TypeInfo);
    sub_1C2D490(&EventGroupMaster_TypeInfo);
    sub_1C2D490(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1C2D490(&EventItemDisplayMaster_TypeInfo);
    sub_1C2D490(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1C2D490(&EventLocationCampaignMaster_TypeInfo);
    sub_1C2D490(&EventMaster_TypeInfo);
    sub_1C2D490(&EventMissionActionAddMaster_TypeInfo);
    sub_1C2D490(&EventMissionActionMaster_TypeInfo);
    sub_1C2D490(&EventMissionAddMaster_TypeInfo);
    sub_1C2D490(&EventMissionCondDetailMaster_TypeInfo);
    sub_1C2D490(&EventMissionConditionMaster_TypeInfo);
    sub_1C2D490(&EventMissionGroupMaster_TypeInfo);
    sub_1C2D490(&EventMissionMaster_TypeInfo);
    sub_1C2D490(&EventMuralMaster_TypeInfo);
    sub_1C2D490(&EventPanelMapDetailMaster_TypeInfo);
    sub_1C2D490(&EventPanelMapMaster_TypeInfo);
    sub_1C2D490(&EventPanelScanMaster_TypeInfo);
    sub_1C2D490(&EventPanelSpotMaster_TypeInfo);
    sub_1C2D490(&EventPointActivityMaster_TypeInfo);
    sub_1C2D490(&EventPointBuffMaster_TypeInfo);
    sub_1C2D490(&EventPointGroupAddMaster_TypeInfo);
    sub_1C2D490(&EventPointGroupMaster_TypeInfo);
    sub_1C2D490(&EventPointMaster_TypeInfo);
    sub_1C2D490(&EventPointUpperMaster_TypeInfo);
    sub_1C2D490(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1C2D490(&EventProgressValueMaster_TypeInfo);
    sub_1C2D490(&EventQuestCooltimeMaster_TypeInfo);
    sub_1C2D490(&EventQuestMaster_TypeInfo);
    sub_1C2D490(&EventRaceMaster_TypeInfo);
    sub_1C2D490(&EventRaceResultMaster_TypeInfo);
    sub_1C2D490(&EventRaidMaster_TypeInfo);
    sub_1C2D490(&EventRandomMissionMaster_TypeInfo);
    sub_1C2D490(&EventRecipeGiftMaster_TypeInfo);
    sub_1C2D490(&EventRecipeMaster_TypeInfo);
    sub_1C2D490(&EventRewardBgMaster_TypeInfo);
    sub_1C2D490(&EventRewardExtraMaster_TypeInfo);
    sub_1C2D490(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1C2D490(&EventRewardMaster_TypeInfo);
    sub_1C2D490(&EventRewardSceneMaster_TypeInfo);
    sub_1C2D490(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1C2D490(&EventRewardSetMaster_TypeInfo);
    sub_1C2D490(&EventScriptMaster_TypeInfo);
    sub_1C2D490(&EventScriptReleaseMaster_TypeInfo);
    sub_1C2D490(&EventServantFatigueMaster_TypeInfo);
    sub_1C2D490(&EventServantMaster_TypeInfo);
    sub_1C2D490(&EventServantPointRankMaster_TypeInfo);
    sub_1C2D490(&EventStatusMaster_TypeInfo);
    sub_1C2D490(&EventStatusQuestMaster_TypeInfo);
    sub_1C2D490(&EventSuperBossMaster_TypeInfo);
    sub_1C2D490(&EventTowerMaster_TypeInfo);
    sub_1C2D490(&EventTowerRewardMaster_TypeInfo);
    sub_1C2D490(&EventTradeGoodsMaster_TypeInfo);
    sub_1C2D490(&EventTradePickupMaster_TypeInfo);
    sub_1C2D490(&EventTradeStoreMaster_TypeInfo);
    sub_1C2D490(&EventTutorialCondMaster_TypeInfo);
    sub_1C2D490(&EventTutorialMaster_TypeInfo);
    sub_1C2D490(&EventUiMaster_TypeInfo);
    sub_1C2D490(&EventUiReleaseMaster_TypeInfo);
    sub_1C2D490(&EventUiValueMaster_TypeInfo);
    sub_1C2D490(&EventVoicePlayMaster_TypeInfo);
    sub_1C2D490(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_1C2D490(&ExcludeMotionMaster_TypeInfo);
    sub_1C2D490(&FieldMotionMaster_TypeInfo);
    sub_1C2D490(&FriendshipMaster_TypeInfo);
    sub_1C2D490(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1C2D490(&FriendshipServantMaster_TypeInfo);
    sub_1C2D490(&FuncDispMaster_TypeInfo);
    sub_1C2D490(&FuncTypeDetailMaster_TypeInfo);
    sub_1C2D490(&FunctionCategoryMaster_TypeInfo);
    sub_1C2D490(&FunctionGroupMaster_TypeInfo);
    sub_1C2D490(&FunctionMaster_TypeInfo);
    sub_1C2D490(&GachaAdjustAddMaster_TypeInfo);
    sub_1C2D490(&GachaAppendMaster_TypeInfo);
    sub_1C2D490(&GachaBaseCollateralMaster_TypeInfo);
    sub_1C2D490(&GachaBehaviorMaster_TypeInfo);
    sub_1C2D490(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1C2D490(&GachaBonusSelectMaster_TypeInfo);
    sub_1C2D490(&GachaDetailMaster_TypeInfo);
    sub_1C2D490(&GachaExtraGiftMaster_TypeInfo);
    sub_1C2D490(&GachaGroupMaster_TypeInfo);
    sub_1C2D490(&GachaImageMaster_TypeInfo);
    sub_1C2D490(&GachaMaster_TypeInfo);
    sub_1C2D490(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1C2D490(&GachaPickupCollateralMaster_TypeInfo);
    sub_1C2D490(&GachaReleaseMaster_TypeInfo);
    sub_1C2D490(&GachaStoryAdjustMaster_TypeInfo);
    sub_1C2D490(&GachaSubMaster_TypeInfo);
    sub_1C2D490(&GachaTicketMaster_TypeInfo);
    sub_1C2D490(&GalleryFolderReleaseMaster_TypeInfo);
    sub_1C2D490(&GalleryMaster_TypeInfo);
    sub_1C2D490(&GalleryResourceMaster_TypeInfo);
    sub_1C2D490(&GiftAddMaster_TypeInfo);
    sub_1C2D490(&GiftDetailMaster_TypeInfo);
    sub_1C2D490(&GiftMaster_TypeInfo);
    sub_1C2D490(&GrandGraphDetailMaster_TypeInfo);
    sub_1C2D490(&GrandGraphMaster_TypeInfo);
    sub_1C2D490(&GuideMaster_TypeInfo);
    sub_1C2D490(&HeelPortraitMaster_TypeInfo);
    sub_1C2D490(&IllustratorMaster_TypeInfo);
    sub_1C2D490(&ImagePartsGroupMaster_TypeInfo);
    sub_1C2D490(&IndividualityPersonalityMaster_TypeInfo);
    sub_1C2D490(&IndividualityPolicyMaster_TypeInfo);
    sub_1C2D490(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1C2D490(&ItemMaster_TypeInfo);
    sub_1C2D490(&ItemSelectMaster_TypeInfo);
    sub_1C2D490(&LoginQuestMaster_TypeInfo);
    sub_1C2D490(&MapButtonMaster_TypeInfo);
    sub_1C2D490(&MapCondMaster_TypeInfo);
    sub_1C2D490(&MapGimmickLayerMaster_TypeInfo);
    sub_1C2D490(&MapGimmickMaster_TypeInfo);
    sub_1C2D490(&MapGimmickPathMaster_TypeInfo);
    sub_1C2D490(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1C2D490(&MapGimmickReleaseMaster_TypeInfo);
    sub_1C2D490(&MapLayerMaster_TypeInfo);
    sub_1C2D490(&MapMaster_TypeInfo);
    sub_1C2D490(&MapUpdateScheduleMaster_TypeInfo);
    sub_1C2D490(&MasterIndividualitySelectMaster_TypeInfo);
    sub_1C2D490(&MasterPhotoMaster_TypeInfo);
    sub_1C2D490(&MaterialFolderMaster_TypeInfo);
    sub_1C2D490(&MissionItemDisplayMaster_TypeInfo);
    sub_1C2D490(&MissionNaviQuestMaster_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionMaster_TypeInfo);
    sub_1C2D490(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1C2D490(&MstMissionMaster_TypeInfo);
    sub_1C2D490(&MyRoomAddMaster_TypeInfo);
    sub_1C2D490(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1C2D490(&NewsMaster_TypeInfo);
    sub_1C2D490(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1C2D490(&NpcFollowerMaster_TypeInfo);
    sub_1C2D490(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1C2D490(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_1C2D490(&NpcServantEquipMaster_TypeInfo);
    sub_1C2D490(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1C2D490(&NpcServantFollowerMaster_TypeInfo);
    sub_1C2D490(&OpeningMovieMaster_TypeInfo);
    sub_1C2D490(&OtherUserGameMaster_TypeInfo);
    sub_1C2D490(&PartialMaintenanceMaster_TypeInfo);
    sub_1C2D490(&PaymentHistoryMaster_TypeInfo);
    sub_1C2D490(&PaymentLimitMaster_TypeInfo);
    sub_1C2D490(&PhotoFrameMaster_TypeInfo);
    sub_1C2D490(&PickupUserFollowerMaster_TypeInfo);
    sub_1C2D490(&PrivilegeMaster_TypeInfo);
    sub_1C2D490(&QuestAddMaster_TypeInfo);
    sub_1C2D490(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1C2D490(&QuestBehaviorMaster_TypeInfo);
    sub_1C2D490(&QuestConsumeItemMaster_TypeInfo);
    sub_1C2D490(&QuestDateRangeMaster_TypeInfo);
    sub_1C2D490(&QuestExtensionMaster_TypeInfo);
    sub_1C2D490(&QuestGroupMaster_TypeInfo);
    sub_1C2D490(&QuestHintMaster_TypeInfo);
    sub_1C2D490(&QuestHintOverwriteMaster_TypeInfo);
    sub_1C2D490(&QuestMaster_TypeInfo);
    sub_1C2D490(&QuestMessageMaster_TypeInfo);
    sub_1C2D490(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1C2D490(&QuestPhaseDetailMaster_TypeInfo);
    sub_1C2D490(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1C2D490(&QuestPhaseMaster_TypeInfo);
    sub_1C2D490(&QuestPhasePresentMaster_TypeInfo);
    sub_1C2D490(&QuestPickupMaster_TypeInfo);
    sub_1C2D490(&QuestRacePointMaster_TypeInfo);
    sub_1C2D490(&QuestRandomGroupMaster_TypeInfo);
    sub_1C2D490(&QuestReleaseMaster_TypeInfo);
    sub_1C2D490(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1C2D490(&QuestResetMaster_TypeInfo);
    sub_1C2D490(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1C2D490(&QuestRestrictionMaster_TypeInfo);
    sub_1C2D490(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1C2D490(&QuestScriptMaster_TypeInfo);
    sub_1C2D490(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1C2D490(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1C2D490(&QuestScriptReleaseMaster_TypeInfo);
    sub_1C2D490(&QuestSpotReleaseMaster_TypeInfo);
    sub_1C2D490(&QuestUseItemGroupMaster_TypeInfo);
    sub_1C2D490(&QuestUseItemPickupMaster_TypeInfo);
    sub_1C2D490(&ReachedWaveInfoMaster_TypeInfo);
    sub_1C2D490(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1C2D490(&RecommendSupportQuestMaster_TypeInfo);
    sub_1C2D490(&RecoverMaster_TypeInfo);
    sub_1C2D490(&ReprintStageMaster_TypeInfo);
    sub_1C2D490(&RestrictionBaseMaster_TypeInfo);
    sub_1C2D490(&RestrictionMaster_TypeInfo);
    sub_1C2D490(&RestrictionMessageMaster_TypeInfo);
    sub_1C2D490(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1C2D490(&RestrictionSlotMaster_TypeInfo);
    sub_1C2D490(&RestrictionWholeMaster_TypeInfo);
    sub_1C2D490(&RoadmapMaster_TypeInfo);
    sub_1C2D490(&SelectBonusBaseMaster_TypeInfo);
    sub_1C2D490(&SelectBonusMaster_TypeInfo);
    sub_1C2D490(&ServantAddMaster_TypeInfo);
    sub_1C2D490(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1C2D490(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C2D490(&ServantBattlePointMaster_TypeInfo);
    sub_1C2D490(&ServantCardAddMaster_TypeInfo);
    sub_1C2D490(&ServantCardMaster_TypeInfo);
    sub_1C2D490(&ServantChangeMaster_TypeInfo);
    sub_1C2D490(&ServantClassMaster_TypeInfo);
    sub_1C2D490(&ServantCollectionMaster_TypeInfo);
    sub_1C2D490(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1C2D490(&ServantCommentAddMaster_TypeInfo);
    sub_1C2D490(&ServantCommentMaster_TypeInfo);
    sub_1C2D490(&ServantCostumeMaster_TypeInfo);
    sub_1C2D490(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1C2D490(&ServantExceedMaster_TypeInfo);
    sub_1C2D490(&ServantExpMaster_TypeInfo);
    sub_1C2D490(&ServantFilterMaster_TypeInfo);
    sub_1C2D490(&ServantFlagMaster_TypeInfo);
    sub_1C2D490(&ServantFlagReleaseMaster_TypeInfo);
    sub_1C2D490(&ServantGroupMaster_TypeInfo);
    sub_1C2D490(&ServantIndividualityMaster_TypeInfo);
    sub_1C2D490(&ServantLimitAddMaster_TypeInfo);
    sub_1C2D490(&ServantLimitImageMaster_TypeInfo);
    sub_1C2D490(&ServantLimitMaster_TypeInfo);
    sub_1C2D490(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1C2D490(&ServantLvDetailMaster_TypeInfo);
    sub_1C2D490(&ServantMaster_TypeInfo);
    sub_1C2D490(&ServantMaterialFolderMaster_TypeInfo);
    sub_1C2D490(&ServantOverwriteMaster_TypeInfo);
    sub_1C2D490(&ServantPassiveSkillMaster_TypeInfo);
    sub_1C2D490(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1C2D490(&ServantPhotoMaster_TypeInfo);
    sub_1C2D490(&ServantProfileMaster_TypeInfo);
    sub_1C2D490(&ServantProfilePushMaster_TypeInfo);
    sub_1C2D490(&ServantRarityMaster_TypeInfo);
    sub_1C2D490(&ServantScriptAddMaster_TypeInfo);
    sub_1C2D490(&ServantScriptMaster_TypeInfo);
    sub_1C2D490(&ServantScriptMultipleMaster_TypeInfo);
    sub_1C2D490(&ServantSkillAddMaster_TypeInfo);
    sub_1C2D490(&ServantSkillMaster_TypeInfo);
    sub_1C2D490(&ServantSkillReleaseMaster_TypeInfo);
    sub_1C2D490(&ServantTransformMaster_TypeInfo);
    sub_1C2D490(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1C2D490(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1C2D490(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1C2D490(&ServantTreasureDvcMaster_TypeInfo);
    sub_1C2D490(&ServantVoiceMaster_TypeInfo);
    sub_1C2D490(&ServantVoicePatternMaster_TypeInfo);
    sub_1C2D490(&ServantVoiceRelationMaster_TypeInfo);
    sub_1C2D490(&SetItemMaster_TypeInfo);
    sub_1C2D490(&ShopActionMaster_TypeInfo);
    sub_1C2D490(&ShopDetailMaster_TypeInfo);
    sub_1C2D490(&ShopGroupMaster_TypeInfo);
    sub_1C2D490(&ShopMaster_TypeInfo);
    sub_1C2D490(&ShopReleaseMaster_TypeInfo);
    sub_1C2D490(&ShopResetMaster_TypeInfo);
    sub_1C2D490(&ShopScriptMaster_TypeInfo);
    sub_1C2D490(&SkillAddMaster_TypeInfo);
    sub_1C2D490(&SkillDetailMaster_TypeInfo);
    sub_1C2D490(&SkillGroupMaster_TypeInfo);
    sub_1C2D490(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1C2D490(&SkillIndividualityMaster_TypeInfo);
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    sub_1C2D490(&SkillMaster_TypeInfo);
    sub_1C2D490(&SpotAddMaster_TypeInfo);
    sub_1C2D490(&SpotImageMaster_TypeInfo);
    sub_1C2D490(&SpotLayerMaster_TypeInfo);
    sub_1C2D490(&SpotMaster_TypeInfo);
    sub_1C2D490(&SpotPathMaster_TypeInfo);
    sub_1C2D490(&SpotRoadMaster_TypeInfo);
    sub_1C2D490(&StaffPhotoCostumeMaster_TypeInfo);
    sub_1C2D490(&StaffPhotoMaster_TypeInfo);
    sub_1C2D490(&StageMaster_TypeInfo);
    sub_1C2D490(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1C2D490(&StoneShopMaster_TypeInfo);
    sub_1C2D490(&SubEquipMaster_TypeInfo);
    sub_1C2D490(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1C2D490(&SvtCoinMaster_TypeInfo);
    sub_1C2D490(&SvtMaterialTdMaster_TypeInfo);
    sub_1C2D490(&SvtMultiPortraitMaster_TypeInfo);
    sub_1C2D490(&TblFriendMaster_TypeInfo);
    sub_1C2D490(&TblUserMaster_TypeInfo);
    sub_1C2D490(&TelopMaster_TypeInfo);
    sub_1C2D490(&TerminalOverwriteMaster_TypeInfo);
    sub_1C2D490(&TipsBattleMaster_TypeInfo);
    sub_1C2D490(&TotalBoxGachaMaster_TypeInfo);
    sub_1C2D490(&TotalEventPointMaster_TypeInfo);
    sub_1C2D490(&TotalEventRaceMaster_TypeInfo);
    sub_1C2D490(&TotalEventRaidMaster_TypeInfo);
    sub_1C2D490(&TotalLoginMaster_TypeInfo);
    sub_1C2D490(&TreasureBoxGiftMaster_TypeInfo);
    sub_1C2D490(&TreasureBoxMaster_TypeInfo);
    sub_1C2D490(&TreasureBoxTalkMaster_TypeInfo);
    sub_1C2D490(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1C2D490(&TreasureDvcDetailMaster_TypeInfo);
    sub_1C2D490(&TreasureDvcLvMaster_TypeInfo);
    sub_1C2D490(&TreasureDvcMaster_TypeInfo);
    sub_1C2D490(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1C2D490(&UserAccessaryMaster_TypeInfo);
    sub_1C2D490(&UserAccountLinkageMaster_TypeInfo);
    sub_1C2D490(&UserBlacklistMaster_TypeInfo);
    sub_1C2D490(&UserBoxGachaMaster_TypeInfo);
    sub_1C2D490(&UserClassBoardSquareMaster_TypeInfo);
    sub_1C2D490(&UserClassStatisticsMaster_TypeInfo);
    sub_1C2D490(&UserCoinRoomMaster_TypeInfo);
    sub_1C2D490(&UserCombineExpMaster_TypeInfo);
    sub_1C2D490(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1C2D490(&UserCommandCodeMaster_TypeInfo);
    sub_1C2D490(&UserContinueMaster_TypeInfo);
    sub_1C2D490(&UserDeckMaster_TypeInfo);
    sub_1C2D490(&UserDeleteReservationMaster_TypeInfo);
    sub_1C2D490(&UserEquipMaster_TypeInfo);
    sub_1C2D490(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1C2D490(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1C2D490(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1C2D490(&UserEventDataLostMaster_TypeInfo);
    sub_1C2D490(&UserEventDeckMaster_TypeInfo);
    sub_1C2D490(&UserEventDiggingMaster_TypeInfo);
    sub_1C2D490(&UserEventExpeditionMaster_TypeInfo);
    sub_1C2D490(&UserEventFortificationMaster_TypeInfo);
    sub_1C2D490(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_1C2D490(&UserEventMapMaster_TypeInfo);
    sub_1C2D490(&UserEventMaster_TypeInfo);
    sub_1C2D490(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1C2D490(&UserEventMissionFixMaster_TypeInfo);
    sub_1C2D490(&UserEventMissionMaster_TypeInfo);
    sub_1C2D490(&UserEventPointMaster_TypeInfo);
    sub_1C2D490(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1C2D490(&UserEventRaceMaster_TypeInfo);
    sub_1C2D490(&UserEventRaidMaster_TypeInfo);
    sub_1C2D490(&UserEventRandomMissionMaster_TypeInfo);
    sub_1C2D490(&UserEventServantFatigueMaster_TypeInfo);
    sub_1C2D490(&UserEventServantPointMaster_TypeInfo);
    sub_1C2D490(&UserEventSpotMaster_TypeInfo);
    sub_1C2D490(&UserEventTradeMaster_TypeInfo);
    sub_1C2D490(&UserExchangeSvtMaster_TypeInfo);
    sub_1C2D490(&UserExpMaster_TypeInfo);
    sub_1C2D490(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1C2D490(&UserFollowMaster_TypeInfo);
    sub_1C2D490(&UserFollowerMaster_TypeInfo);
    sub_1C2D490(&UserFormationMaster_TypeInfo);
    sub_1C2D490(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1C2D490(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1C2D490(&UserGachaDrawLogMaster_TypeInfo);
    sub_1C2D490(&UserGachaExtraCountMaster_TypeInfo);
    sub_1C2D490(&UserGachaHistoryMaster_TypeInfo);
    sub_1C2D490(&UserGachaMaster_TypeInfo);
    sub_1C2D490(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1C2D490(&UserGameCommonMaster_TypeInfo);
    sub_1C2D490(&UserGameMaster_TypeInfo);
    sub_1C2D490(&UserHeelPortraitMaster_TypeInfo);
    sub_1C2D490(&UserImagePartsGroupMaster_TypeInfo);
    sub_1C2D490(&UserInterruptionQuestMaster_TypeInfo);
    sub_1C2D490(&UserItemMaster_TypeInfo);
    sub_1C2D490(&UserLoginMaster_TypeInfo);
    sub_1C2D490(&UserMaster_TypeInfo);
    sub_1C2D490(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1C2D490(&UserPaymentLimitMaster_TypeInfo);
    sub_1C2D490(&UserPresentBoxMaster_TypeInfo);
    sub_1C2D490(&UserPresentHistoryMaster_TypeInfo);
    sub_1C2D490(&UserPrivilegeMaster_TypeInfo);
    sub_1C2D490(&UserQuestInfoMaster_TypeInfo);
    sub_1C2D490(&UserQuestMaster_TypeInfo);
    sub_1C2D490(&UserQuestRecordMaster_TypeInfo);
    sub_1C2D490(&UserQuestRouteMaster_TypeInfo);
    sub_1C2D490(&UserRecommendFollowerMaster_TypeInfo);
    sub_1C2D490(&UserRecommendSupportMaster_TypeInfo);
    sub_1C2D490(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1C2D490(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C2D490(&UserServantCollectionMaster_TypeInfo);
    sub_1C2D490(&UserServantCommandCardMaster_TypeInfo);
    sub_1C2D490(&UserServantCommandCodeMaster_TypeInfo);
    sub_1C2D490(&UserServantGrandMaster_TypeInfo);
    sub_1C2D490(&UserServantLeaderMaster_TypeInfo);
    sub_1C2D490(&UserServantMaster_TypeInfo);
    sub_1C2D490(&UserServantStorageMaster_TypeInfo);
    sub_1C2D490(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1C2D490(&UserShopMaster_TypeInfo);
    sub_1C2D490(&UserSubEquipMaster_TypeInfo);
    sub_1C2D490(&UserSuperBossMaster_TypeInfo);
    sub_1C2D490(&UserSupportDeckMaster_TypeInfo);
    sub_1C2D490(&UserSvtCoinMaster_TypeInfo);
    sub_1C2D490(&UserSvtFirstGetTimeMaster_TypeInfo);
    sub_1C2D490(&ViewEnemyMaster_TypeInfo);
    sub_1C2D490(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1C2D490(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1C2D490(&ViewQuestInfoMaster_TypeInfo);
    sub_1C2D490(&ViewWaveEnemyMaster_TypeInfo);
    sub_1C2D490(&VoiceClosedMessageMaster_TypeInfo);
    sub_1C2D490(&VoiceCondMaster_TypeInfo);
    sub_1C2D490(&VoiceMaster_TypeInfo);
    sub_1C2D490(&VoiceMaterialCondMaster_TypeInfo);
    sub_1C2D490(&VoicePlayCondMaster_TypeInfo);
    sub_1C2D490(&VoicePlayGroupMaster_TypeInfo);
    sub_1C2D490(&VoiceReleaseMaster_TypeInfo);
    sub_1C2D490(&WarAddMaster_TypeInfo);
    sub_1C2D490(&WarBoardAIMaster_TypeInfo);
    sub_1C2D490(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1C2D490(&WarBoardActionPointMaster_TypeInfo);
    sub_1C2D490(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1C2D490(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1C2D490(&WarBoardActionTrendMaster_TypeInfo);
    sub_1C2D490(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1C2D490(&WarBoardDataMaster_TypeInfo);
    sub_1C2D490(&WarBoardEffectMaster_TypeInfo);
    sub_1C2D490(&WarBoardEventMaster_TypeInfo);
    sub_1C2D490(&WarBoardEventScriptMaster_TypeInfo);
    sub_1C2D490(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1C2D490(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1C2D490(&WarBoardItemMaster_TypeInfo);
    sub_1C2D490(&WarBoardMaster_TypeInfo);
    sub_1C2D490(&WarBoardMessageMaster_TypeInfo);
    sub_1C2D490(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1C2D490(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1C2D490(&WarBoardPartySkillMaster_TypeInfo);
    sub_1C2D490(&WarBoardQuestMaster_TypeInfo);
    sub_1C2D490(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1C2D490(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1C2D490(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1C2D490(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1C2D490(&WarBoardRoadMaster_TypeInfo);
    sub_1C2D490(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1C2D490(&WarBoardSquareMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageBossMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageDetailMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageNpcMaster_TypeInfo);
    sub_1C2D490(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1C2D490(&WarBoardStageWallMaster_TypeInfo);
    sub_1C2D490(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1C2D490(&WarBoardTreasureMaster_TypeInfo);
    sub_1C2D490(&WarGroupIgnoreMaster_TypeInfo);
    sub_1C2D490(&WarGroupMaster_TypeInfo);
    sub_1C2D490(&WarMaster_TypeInfo);
    sub_1C2D490(&WarMessageMaster_TypeInfo);
    sub_1C2D490(&WarQuestSelectionMaster_TypeInfo);
    sub_1C2D490(&WarReleaseMaster_TypeInfo);
    byte_4C26DAC = 1;
  }
  v1 = (DataMasterBase_array *)sub_1C2D538(DataMasterBase___TypeInfo, 549);
  v2 = (ServantMaster_o *)sub_1C2D6DC(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0);
  if ( !v1 )
    sub_1C2D6EC(v3, v4);
  if ( v2 )
  {
    v3 = sub_1C2D5CC(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  p_max_length = &v1->max_length;
  if ( !LODWORD(v1->max_length) )
    goto LABEL_1652;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1C2D434((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v5, v6);
  v8 = (ServantClassMaster_o *)sub_1C2D6DC(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v8, 0);
  if ( v8 )
  {
    v3 = sub_1C2D5CC(v8, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_1652;
  v1->m_Items[1] = (DataMasterBase_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v8, v5, v9);
  v10 = (ServantCommentMaster_o *)sub_1C2D6DC(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v10, 0);
  if ( v10 )
  {
    v3 = sub_1C2D5CC(v10, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_1652;
  v1->m_Items[2] = (DataMasterBase_o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v10, v5, v11);
  v12 = (ServantProfileMaster_o *)sub_1C2D6DC(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v12, 0);
  if ( v12 )
  {
    v3 = sub_1C2D5CC(v12, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_1652;
  v1->m_Items[3] = (DataMasterBase_o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v12, v5, v13);
  v14 = (WarMaster_o *)sub_1C2D6DC(WarMaster_TypeInfo);
  WarMaster___ctor(v14, 0);
  if ( v14 )
  {
    v3 = sub_1C2D5CC(v14, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_1652;
  v1->m_Items[4] = (DataMasterBase_o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v14, v5, v15);
  v16 = (UserMaster_o *)sub_1C2D6DC(UserMaster_TypeInfo);
  UserMaster___ctor(v16, 0);
  if ( v16 )
  {
    v3 = sub_1C2D5CC(v16, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_1652;
  v1->m_Items[5] = (DataMasterBase_o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v16, v5, v17);
  v18 = (UserGameMaster_o *)sub_1C2D6DC(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v18, 0);
  if ( v18 )
  {
    v3 = sub_1C2D5CC(v18, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_1652;
  v1->m_Items[6] = (DataMasterBase_o *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v18, v5, v19);
  v20 = (TblUserMaster_o *)sub_1C2D6DC(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v20, 0);
  if ( v20 )
  {
    v3 = sub_1C2D5CC(v20, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_1652;
  v1->m_Items[7] = (DataMasterBase_o *)v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v20, v5, v21);
  v22 = (UserItemMaster_o *)sub_1C2D6DC(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v22, 0);
  if ( v22 )
  {
    v3 = sub_1C2D5CC(v22, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_1652;
  v1->m_Items[8] = (DataMasterBase_o *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v22, v5, v23);
  v24 = (UserServantMaster_o *)sub_1C2D6DC(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v24, 0);
  if ( v24 )
  {
    v3 = sub_1C2D5CC(v24, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_1652;
  v1->m_Items[9] = (DataMasterBase_o *)v24;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v24, v5, v25);
  v26 = (UserServantStorageMaster_o *)sub_1C2D6DC(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v26, 0);
  if ( v26 )
  {
    v3 = sub_1C2D5CC(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_1652;
  v1->m_Items[10] = (DataMasterBase_o *)v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v26, v5, v27);
  v28 = (UserAccessaryMaster_o *)sub_1C2D6DC(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v28, 0);
  if ( v28 )
  {
    v3 = sub_1C2D5CC(v28, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_1652;
  v1->m_Items[11] = (DataMasterBase_o *)v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v28, v5, v29);
  v30 = (UserQuestMaster_o *)sub_1C2D6DC(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v30, 0);
  if ( v30 )
  {
    v3 = sub_1C2D5CC(v30, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_1652;
  v1->m_Items[12] = (DataMasterBase_o *)v30;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v30, v5, v31);
  v32 = (BattleMaster_o *)sub_1C2D6DC(BattleMaster_TypeInfo);
  BattleMaster___ctor(v32, 0);
  if ( v32 )
  {
    v3 = sub_1C2D5CC(v32, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_1652;
  v1->m_Items[13] = (DataMasterBase_o *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v32, v5, v33);
  v34 = (OtherUserGameMaster_o *)sub_1C2D6DC(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v34, 0);
  if ( v34 )
  {
    v3 = sub_1C2D5CC(v34, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_1652;
  v1->m_Items[14] = (DataMasterBase_o *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v34, v5, v35);
  v36 = (TblFriendMaster_o *)sub_1C2D6DC(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v36, 0);
  if ( v36 )
  {
    v3 = sub_1C2D5CC(v36, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_1652;
  v1->m_Items[15] = (DataMasterBase_o *)v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[15], (int32_t)v36, v5, v37);
  v38 = (AreaMaster_o *)sub_1C2D6DC(AreaMaster_TypeInfo);
  AreaMaster___ctor(v38, 0);
  if ( v38 )
  {
    v3 = sub_1C2D5CC(v38, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_1652;
  v1->m_Items[16] = (DataMasterBase_o *)v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[16], (int32_t)v38, v5, v39);
  v40 = (ServantCardMaster_o *)sub_1C2D6DC(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v40, 0);
  if ( v40 )
  {
    v3 = sub_1C2D5CC(v40, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_1652;
  v1->m_Items[17] = (DataMasterBase_o *)v40;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[17], (int32_t)v40, v5, v41);
  v42 = (EventMaster_o *)sub_1C2D6DC(EventMaster_TypeInfo);
  EventMaster___ctor(v42, 0);
  if ( v42 )
  {
    v3 = sub_1C2D5CC(v42, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_1652;
  v1->m_Items[18] = (DataMasterBase_o *)v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[18], (int32_t)v42, v5, v43);
  v44 = (ItemMaster_o *)sub_1C2D6DC(ItemMaster_TypeInfo);
  ItemMaster___ctor(v44, 0);
  if ( v44 )
  {
    v3 = sub_1C2D5CC(v44, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_1652;
  v1->m_Items[19] = (DataMasterBase_o *)v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[19], (int32_t)v44, v5, v45);
  v46 = (QuestMaster_o *)sub_1C2D6DC(QuestMaster_TypeInfo);
  QuestMaster___ctor(v46, 0);
  if ( v46 )
  {
    v3 = sub_1C2D5CC(v46, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
    goto LABEL_1652;
  v1->m_Items[20] = (DataMasterBase_o *)v46;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[20], (int32_t)v46, v5, v47);
  v48 = (QuestAddMaster_o *)sub_1C2D6DC(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v48, 0);
  if ( v48 )
  {
    v3 = sub_1C2D5CC(v48, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15u )
    goto LABEL_1652;
  v1->m_Items[21] = (DataMasterBase_o *)v48;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[21], (int32_t)v48, v5, v49);
  v50 = (QuestReleaseMaster_o *)sub_1C2D6DC(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v50, 0);
  if ( v50 )
  {
    v3 = sub_1C2D5CC(v50, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16u )
    goto LABEL_1652;
  v1->m_Items[22] = (DataMasterBase_o *)v50;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[22], (int32_t)v50, v5, v51);
  v52 = (QuestDateRangeMaster_o *)sub_1C2D6DC(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v52, 0);
  if ( v52 )
  {
    v3 = sub_1C2D5CC(v52, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17u )
    goto LABEL_1652;
  v1->m_Items[23] = (DataMasterBase_o *)v52;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[23], (int32_t)v52, v5, v53);
  v54 = (QuestPhaseMaster_o *)sub_1C2D6DC(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v54, 0);
  if ( v54 )
  {
    v3 = sub_1C2D5CC(v54, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18u )
    goto LABEL_1652;
  v1->m_Items[24] = (DataMasterBase_o *)v54;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[24], (int32_t)v54, v5, v55);
  v56 = (QuestPhaseDetailMaster_o *)sub_1C2D6DC(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v56, 0);
  if ( v56 )
  {
    v3 = sub_1C2D5CC(v56, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19u )
    goto LABEL_1652;
  v1->m_Items[25] = (DataMasterBase_o *)v56;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[25], (int32_t)v56, v5, v57);
  v58 = (QuestGroupMaster_o *)sub_1C2D6DC(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v58, 0);
  if ( v58 )
  {
    v3 = sub_1C2D5CC(v58, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Au )
    goto LABEL_1652;
  v1->m_Items[26] = (DataMasterBase_o *)v58;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[26], (int32_t)v58, v5, v59);
  v60 = (QuestRandomGroupMaster_o *)sub_1C2D6DC(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v60, 0);
  if ( v60 )
  {
    v3 = sub_1C2D5CC(v60, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Bu )
    goto LABEL_1652;
  v1->m_Items[27] = (DataMasterBase_o *)v60;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[27], (int32_t)v60, v5, v61);
  v62 = (QuestConsumeItemMaster_o *)sub_1C2D6DC(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v62, 0);
  if ( v62 )
  {
    v3 = sub_1C2D5CC(v62, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Cu )
    goto LABEL_1652;
  v1->m_Items[28] = (DataMasterBase_o *)v62;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[28], (int32_t)v62, v5, v63);
  v64 = (QuestMessageMaster_o *)sub_1C2D6DC(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v64, 0);
  if ( v64 )
  {
    v3 = sub_1C2D5CC(v64, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Du )
    goto LABEL_1652;
  v1->m_Items[29] = (DataMasterBase_o *)v64;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[29], (int32_t)v64, v5, v65);
  v66 = (UserQuestInfoMaster_o *)sub_1C2D6DC(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v66, 0);
  if ( v66 )
  {
    v3 = sub_1C2D5CC(v66, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Eu )
    goto LABEL_1652;
  v1->m_Items[30] = (DataMasterBase_o *)v66;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[30], (int32_t)v66, v5, v67);
  v68 = (UserQuestRecordMaster_o *)sub_1C2D6DC(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v68, 0);
  if ( v68 )
  {
    v3 = sub_1C2D5CC(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Fu )
    goto LABEL_1652;
  v1->m_Items[31] = (DataMasterBase_o *)v68;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[31], (int32_t)v68, v5, v69);
  v70 = (ViewQuestInfoMaster_o *)sub_1C2D6DC(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v70, 0);
  if ( v70 )
  {
    v3 = sub_1C2D5CC(v70, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20u )
    goto LABEL_1652;
  v1->m_Items[32] = (DataMasterBase_o *)v70;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[32], (int32_t)v70, v5, v71);
  v72 = (ViewEnemyMaster_o *)sub_1C2D6DC(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v72, 0);
  if ( v72 )
  {
    v3 = sub_1C2D5CC(v72, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21u )
    goto LABEL_1652;
  v1->m_Items[33] = (DataMasterBase_o *)v72;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[33], (int32_t)v72, v5, v73);
  v74 = (ViewQuestEnemyInfoMaster_o *)sub_1C2D6DC(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v74, 0);
  if ( v74 )
  {
    v3 = sub_1C2D5CC(v74, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x22u )
    goto LABEL_1652;
  v1->m_Items[34] = (DataMasterBase_o *)v74;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[34], (int32_t)v74, v5, v75);
  v76 = (BlankEarthSpotMaster_o *)sub_1C2D6DC(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v76, 0);
  if ( v76 )
  {
    v3 = sub_1C2D5CC(v76, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x23u )
    goto LABEL_1652;
  v1->m_Items[35] = (DataMasterBase_o *)v76;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[35], (int32_t)v76, v5, v77);
  v78 = (BlankEarthSpotAddMaster_o *)sub_1C2D6DC(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v78, 0);
  if ( v78 )
  {
    v3 = sub_1C2D5CC(v78, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x24u )
    goto LABEL_1652;
  v1->m_Items[36] = (DataMasterBase_o *)v78;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[36], (int32_t)v78, v5, v79);
  v80 = (SpotMaster_o *)sub_1C2D6DC(SpotMaster_TypeInfo);
  SpotMaster___ctor(v80, 0);
  if ( v80 )
  {
    v3 = sub_1C2D5CC(v80, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x25u )
    goto LABEL_1652;
  v1->m_Items[37] = (DataMasterBase_o *)v80;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[37], (int32_t)v80, v5, v81);
  v82 = (SpotImageMaster_o *)sub_1C2D6DC(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v82, 0);
  if ( v82 )
  {
    v3 = sub_1C2D5CC(v82, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x26u )
    goto LABEL_1652;
  v1->m_Items[38] = (DataMasterBase_o *)v82;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[38], (int32_t)v82, v5, v83);
  v84 = (SpotRoadMaster_o *)sub_1C2D6DC(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v84, 0);
  if ( v84 )
  {
    v3 = sub_1C2D5CC(v84, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x27u )
    goto LABEL_1652;
  v1->m_Items[39] = (DataMasterBase_o *)v84;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[39], (int32_t)v84, v5, v85);
  v86 = (SpotPathMaster_o *)sub_1C2D6DC(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v86, 0);
  if ( v86 )
  {
    v3 = sub_1C2D5CC(v86, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x28u )
    goto LABEL_1652;
  v1->m_Items[40] = (DataMasterBase_o *)v86;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[40], (int32_t)v86, v5, v87);
  v88 = (SpotAddMaster_o *)sub_1C2D6DC(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v88, 0);
  if ( v88 )
  {
    v3 = sub_1C2D5CC(v88, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x29u )
    goto LABEL_1652;
  v1->m_Items[41] = (DataMasterBase_o *)v88;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[41], (int32_t)v88, v5, v89);
  v90 = (MapGimmickMaster_o *)sub_1C2D6DC(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v90, 0);
  if ( v90 )
  {
    v3 = sub_1C2D5CC(v90, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Au )
    goto LABEL_1652;
  v1->m_Items[42] = (DataMasterBase_o *)v90;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[42], (int32_t)v90, v5, v91);
  v92 = (GiftMaster_o *)sub_1C2D6DC(GiftMaster_TypeInfo);
  GiftMaster___ctor(v92, 0);
  if ( v92 )
  {
    v3 = sub_1C2D5CC(v92, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Bu )
    goto LABEL_1652;
  v1->m_Items[43] = (DataMasterBase_o *)v92;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[43], (int32_t)v92, v5, v93);
  v94 = (GiftAddMaster_o *)sub_1C2D6DC(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v94, 0);
  if ( v94 )
  {
    v3 = sub_1C2D5CC(v94, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Cu )
    goto LABEL_1652;
  v1->m_Items[44] = (DataMasterBase_o *)v94;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[44], (int32_t)v94, v5, v95);
  v96 = (ShopMaster_o *)sub_1C2D6DC(ShopMaster_TypeInfo);
  ShopMaster___ctor(v96, 0);
  if ( v96 )
  {
    v3 = sub_1C2D5CC(v96, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Du )
    goto LABEL_1652;
  v1->m_Items[45] = (DataMasterBase_o *)v96;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[45], (int32_t)v96, v5, v97);
  v98 = (StoneShopMaster_o *)sub_1C2D6DC(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v98, 0);
  if ( v98 )
  {
    v3 = sub_1C2D5CC(v98, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Eu )
    goto LABEL_1652;
  v1->m_Items[46] = (DataMasterBase_o *)v98;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[46], (int32_t)v98, v5, v99);
  v100 = (BankShopMaster_o *)sub_1C2D6DC(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v100, 0);
  if ( v100 )
  {
    v3 = sub_1C2D5CC(v100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Fu )
    goto LABEL_1652;
  v1->m_Items[47] = (DataMasterBase_o *)v100;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[47], (int32_t)v100, v5, v101);
  v102 = (ShopScriptMaster_o *)sub_1C2D6DC(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v102, 0);
  if ( v102 )
  {
    v3 = sub_1C2D5CC(v102, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x30u )
    goto LABEL_1652;
  v1->m_Items[48] = (DataMasterBase_o *)v102;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[48], (int32_t)v102, v5, v103);
  v104 = (StageMaster_o *)sub_1C2D6DC(StageMaster_TypeInfo);
  StageMaster___ctor(v104, 0);
  if ( v104 )
  {
    v3 = sub_1C2D5CC(v104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x31u )
    goto LABEL_1652;
  v1->m_Items[49] = (DataMasterBase_o *)v104;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[49], (int32_t)v104, v5, v105);
  v106 = (ServantGroupMaster_o *)sub_1C2D6DC(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v106, 0);
  if ( v106 )
  {
    v3 = sub_1C2D5CC(v106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x32u )
    goto LABEL_1652;
  v1->m_Items[50] = (DataMasterBase_o *)v106;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[50], (int32_t)v106, v5, v107);
  v108 = (ServantLimitMaster_o *)sub_1C2D6DC(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v108, 0);
  if ( v108 )
  {
    v3 = sub_1C2D5CC(v108, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x33u )
    goto LABEL_1652;
  v1->m_Items[51] = (DataMasterBase_o *)v108;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[51], (int32_t)v108, v5, v109);
  v110 = (ServantLimitAddMaster_o *)sub_1C2D6DC(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v110, 0);
  if ( v110 )
  {
    v3 = sub_1C2D5CC(v110, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x34u )
    goto LABEL_1652;
  v1->m_Items[52] = (DataMasterBase_o *)v110;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[52], (int32_t)v110, v5, v111);
  v112 = (ServantSkillMaster_o *)sub_1C2D6DC(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v112, 0);
  if ( v112 )
  {
    v3 = sub_1C2D5CC(v112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x35u )
    goto LABEL_1652;
  v1->m_Items[53] = (DataMasterBase_o *)v112;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[53], (int32_t)v112, v5, v113);
  v114 = (ServantPassiveSkillMaster_o *)sub_1C2D6DC(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v114, 0);
  if ( v114 )
  {
    v3 = sub_1C2D5CC(v114, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x36u )
    goto LABEL_1652;
  v1->m_Items[54] = (DataMasterBase_o *)v114;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[54], (int32_t)v114, v5, v115);
  v116 = (BgmMaster_o *)sub_1C2D6DC(BgmMaster_TypeInfo);
  BgmMaster___ctor(v116, 0);
  if ( v116 )
  {
    v3 = sub_1C2D5CC(v116, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x37u )
    goto LABEL_1652;
  v1->m_Items[55] = (DataMasterBase_o *)v116;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[55], (int32_t)v116, v5, v117);
  v118 = (ServantScriptMaster_o *)sub_1C2D6DC(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v118, 0);
  if ( v118 )
  {
    v3 = sub_1C2D5CC(v118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x38u )
    goto LABEL_1652;
  v1->m_Items[56] = (DataMasterBase_o *)v118;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[56], (int32_t)v118, v5, v119);
  v120 = (NewsMaster_o *)sub_1C2D6DC(NewsMaster_TypeInfo);
  NewsMaster___ctor(v120, 0);
  if ( v120 )
  {
    v3 = sub_1C2D5CC(v120, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x39u )
    goto LABEL_1652;
  v1->m_Items[57] = (DataMasterBase_o *)v120;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[57], (int32_t)v120, v5, v121);
  v122 = (TelopMaster_o *)sub_1C2D6DC(TelopMaster_TypeInfo);
  TelopMaster___ctor(v122, 0);
  if ( v122 )
  {
    v3 = sub_1C2D5CC(v122, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Au )
    goto LABEL_1652;
  v1->m_Items[58] = (DataMasterBase_o *)v122;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[58], (int32_t)v122, v5, v123);
  v124 = (UserExpMaster_o *)sub_1C2D6DC(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v124, 0);
  if ( v124 )
  {
    v3 = sub_1C2D5CC(v124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Bu )
    goto LABEL_1652;
  v1->m_Items[59] = (DataMasterBase_o *)v124;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[59], (int32_t)v124, v5, v125);
  v126 = (TreasureDvcMaster_o *)sub_1C2D6DC(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v126, 0);
  if ( v126 )
  {
    v3 = sub_1C2D5CC(v126, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Cu )
    goto LABEL_1652;
  v1->m_Items[60] = (DataMasterBase_o *)v126;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[60], (int32_t)v126, v5, v127);
  v128 = (ServantTreasureDvcMaster_o *)sub_1C2D6DC(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v128, 0);
  if ( v128 )
  {
    v3 = sub_1C2D5CC(v128, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Du )
    goto LABEL_1652;
  v1->m_Items[61] = (DataMasterBase_o *)v128;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[61], (int32_t)v128, v5, v129);
  v130 = (SkillMaster_o *)sub_1C2D6DC(SkillMaster_TypeInfo);
  SkillMaster___ctor(v130, 0);
  if ( v130 )
  {
    v3 = sub_1C2D5CC(v130, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Eu )
    goto LABEL_1652;
  v1->m_Items[62] = (DataMasterBase_o *)v130;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[62], (int32_t)v130, v5, v131);
  v132 = (SkillLvMaster_o *)sub_1C2D6DC(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v132, 0);
  if ( v132 )
  {
    v3 = sub_1C2D5CC(v132, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Fu )
    goto LABEL_1652;
  v1->m_Items[63] = (DataMasterBase_o *)v132;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[63], (int32_t)v132, v5, v133);
  v134 = (SkillDetailMaster_o *)sub_1C2D6DC(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v134, 0);
  if ( v134 )
  {
    v3 = sub_1C2D5CC(v134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x40u )
    goto LABEL_1652;
  v1->m_Items[64] = (DataMasterBase_o *)v134;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[64], (int32_t)v134, v5, v135);
  v136 = (CommandSpellMaster_o *)sub_1C2D6DC(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v136, 0);
  if ( v136 )
  {
    v3 = sub_1C2D5CC(v136, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x41u )
    goto LABEL_1652;
  v1->m_Items[65] = (DataMasterBase_o *)v136;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[65], (int32_t)v136, v5, v137);
  v138 = (EquipMaster_o *)sub_1C2D6DC(EquipMaster_TypeInfo);
  EquipMaster___ctor(v138, 0);
  if ( v138 )
  {
    v3 = sub_1C2D5CC(v138, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x42u )
    goto LABEL_1652;
  v1->m_Items[66] = (DataMasterBase_o *)v138;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[66], (int32_t)v138, v5, v139);
  v140 = (EquipExpMaster_o *)sub_1C2D6DC(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v140, 0);
  if ( v140 )
  {
    v3 = sub_1C2D5CC(v140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x43u )
    goto LABEL_1652;
  v1->m_Items[67] = (DataMasterBase_o *)v140;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[67], (int32_t)v140, v5, v141);
  v142 = (EquipSkillMaster_o *)sub_1C2D6DC(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v142, 0);
  if ( v142 )
  {
    v3 = sub_1C2D5CC(v142, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x44u )
    goto LABEL_1652;
  v1->m_Items[68] = (DataMasterBase_o *)v142;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[68], (int32_t)v142, v5, v143);
  v144 = (SubEquipMaster_o *)sub_1C2D6DC(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v144, 0);
  if ( v144 )
  {
    v3 = sub_1C2D5CC(v144, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x45u )
    goto LABEL_1652;
  v1->m_Items[69] = (DataMasterBase_o *)v144;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[69], (int32_t)v144, v5, v145);
  v146 = (AccessaryMaster_o *)sub_1C2D6DC(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v146, 0);
  if ( v146 )
  {
    v3 = sub_1C2D5CC(v146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x46u )
    goto LABEL_1652;
  v1->m_Items[70] = (DataMasterBase_o *)v146;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[70], (int32_t)v146, v5, v147);
  v148 = (UserPresentBoxMaster_o *)sub_1C2D6DC(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v148, 0);
  if ( v148 )
  {
    v3 = sub_1C2D5CC(v148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x47u )
    goto LABEL_1652;
  v1->m_Items[71] = (DataMasterBase_o *)v148;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[71], (int32_t)v148, v5, v149);
  v150 = (UserDeckMaster_o *)sub_1C2D6DC(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v150, 0);
  if ( v150 )
  {
    v3 = sub_1C2D5CC(v150, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x48u )
    goto LABEL_1652;
  v1->m_Items[72] = (DataMasterBase_o *)v150;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[72], (int32_t)v150, v5, v151);
  v152 = (UserSubEquipMaster_o *)sub_1C2D6DC(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v152, 0);
  if ( v152 )
  {
    v3 = sub_1C2D5CC(v152, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x49u )
    goto LABEL_1652;
  v1->m_Items[73] = (DataMasterBase_o *)v152;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[73], (int32_t)v152, v5, v153);
  v154 = (GachaMaster_o *)sub_1C2D6DC(GachaMaster_TypeInfo);
  GachaMaster___ctor(v154, 0);
  if ( v154 )
  {
    v3 = sub_1C2D5CC(v154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Au )
    goto LABEL_1652;
  v1->m_Items[74] = (DataMasterBase_o *)v154;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[74], (int32_t)v154, v5, v155);
  v156 = (GachaImageMaster_o *)sub_1C2D6DC(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v156, 0);
  if ( v156 )
  {
    v3 = sub_1C2D5CC(v156, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Bu )
    goto LABEL_1652;
  v1->m_Items[75] = (DataMasterBase_o *)v156;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[75], (int32_t)v156, v5, v157);
  v158 = (UserGachaMaster_o *)sub_1C2D6DC(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v158, 0);
  if ( v158 )
  {
    v3 = sub_1C2D5CC(v158, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Cu )
    goto LABEL_1652;
  v1->m_Items[76] = (DataMasterBase_o *)v158;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[76], (int32_t)v158, v5, v159);
  v160 = (UserEquipMaster_o *)sub_1C2D6DC(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v160, 0);
  if ( v160 )
  {
    v3 = sub_1C2D5CC(v160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Du )
    goto LABEL_1652;
  v1->m_Items[77] = (DataMasterBase_o *)v160;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[77], (int32_t)v160, v5, v161);
  v162 = (UserServantCollectionMaster_o *)sub_1C2D6DC(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v162, 0);
  if ( v162 )
  {
    v3 = sub_1C2D5CC(v162, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Eu )
    goto LABEL_1652;
  v1->m_Items[78] = (DataMasterBase_o *)v162;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[78], (int32_t)v162, v5, v163);
  v164 = (FriendshipMaster_o *)sub_1C2D6DC(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v164, 0);
  if ( v164 )
  {
    v3 = sub_1C2D5CC(v164, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Fu )
    goto LABEL_1652;
  v1->m_Items[79] = (DataMasterBase_o *)v164;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[79], (int32_t)v164, v5, v165);
  v166 = (GachaTicketMaster_o *)sub_1C2D6DC(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v166, 0);
  if ( v166 )
  {
    v3 = sub_1C2D5CC(v166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x50u )
    goto LABEL_1652;
  v1->m_Items[80] = (DataMasterBase_o *)v166;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[80], (int32_t)v166, v5, v167);
  v168 = (UserFormationMaster_o *)sub_1C2D6DC(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v168, 0);
  if ( v168 )
  {
    v3 = sub_1C2D5CC(v168, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x51u )
    goto LABEL_1652;
  v1->m_Items[81] = (DataMasterBase_o *)v168;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[81], (int32_t)v168, v5, v169);
  v170 = (FunctionMaster_o *)sub_1C2D6DC(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v170, 0);
  if ( v170 )
  {
    v3 = sub_1C2D5CC(v170, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x52u )
    goto LABEL_1652;
  v1->m_Items[82] = (DataMasterBase_o *)v170;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[82], (int32_t)v170, v5, v171);
  v172 = (BuffMaster_o *)sub_1C2D6DC(BuffMaster_TypeInfo);
  BuffMaster___ctor(v172, 0);
  if ( v172 )
  {
    v3 = sub_1C2D5CC(v172, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x53u )
    goto LABEL_1652;
  v1->m_Items[83] = (DataMasterBase_o *)v172;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[83], (int32_t)v172, v5, v173);
  v174 = (GachaReleaseMaster_o *)sub_1C2D6DC(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v174, 0);
  if ( v174 )
  {
    v3 = sub_1C2D5CC(v174, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x54u )
    goto LABEL_1652;
  v1->m_Items[84] = (DataMasterBase_o *)v174;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[84], (int32_t)v174, v5, v175);
  v176 = (CombineQpMaster_o *)sub_1C2D6DC(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v176, 0);
  if ( v176 )
  {
    v3 = sub_1C2D5CC(v176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x55u )
    goto LABEL_1652;
  v1->m_Items[85] = (DataMasterBase_o *)v176;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[85], (int32_t)v176, v5, v177);
  v178 = (CombineMaterialMaster_o *)sub_1C2D6DC(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v178, 0);
  if ( v178 )
  {
    v3 = sub_1C2D5CC(v178, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x56u )
    goto LABEL_1652;
  v1->m_Items[86] = (DataMasterBase_o *)v178;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[86], (int32_t)v178, v5, v179);
  v180 = (EventCombineMaster_o *)sub_1C2D6DC(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v180, 0);
  if ( v180 )
  {
    v3 = sub_1C2D5CC(v180, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x57u )
    goto LABEL_1652;
  v1->m_Items[87] = (DataMasterBase_o *)v180;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[87], (int32_t)v180, v5, v181);
  v182 = (ServantExpMaster_o *)sub_1C2D6DC(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v182, 0);
  if ( v182 )
  {
    v3 = sub_1C2D5CC(v182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x58u )
    goto LABEL_1652;
  v1->m_Items[88] = (DataMasterBase_o *)v182;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[88], (int32_t)v182, v5, v183);
  v184 = (CombineSkillMaster_o *)sub_1C2D6DC(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v184, 0);
  if ( v184 )
  {
    v3 = sub_1C2D5CC(v184, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x59u )
    goto LABEL_1652;
  v1->m_Items[89] = (DataMasterBase_o *)v184;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[89], (int32_t)v184, v5, v185);
  v186 = (CombineTdMaster_o *)sub_1C2D6DC(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v186, 0);
  if ( v186 )
  {
    v3 = sub_1C2D5CC(v186, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Au )
    goto LABEL_1652;
  v1->m_Items[90] = (DataMasterBase_o *)v186;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[90], (int32_t)v186, v5, v187);
  v188 = (EventQuestMaster_o *)sub_1C2D6DC(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v188, 0);
  if ( v188 )
  {
    v3 = sub_1C2D5CC(v188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Bu )
    goto LABEL_1652;
  v1->m_Items[91] = (DataMasterBase_o *)v188;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[91], (int32_t)v188, v5, v189);
  v190 = (EventCampaignMaster_o *)sub_1C2D6DC(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v190, 0);
  if ( v190 )
  {
    v3 = sub_1C2D5CC(v190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Cu )
    goto LABEL_1652;
  v1->m_Items[92] = (DataMasterBase_o *)v190;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[92], (int32_t)v190, v5, v191);
  v192 = (IllustratorMaster_o *)sub_1C2D6DC(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v192, 0);
  if ( v192 )
  {
    v3 = sub_1C2D5CC(v192, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Du )
    goto LABEL_1652;
  v1->m_Items[93] = (DataMasterBase_o *)v192;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[93], (int32_t)v192, v5, v193);
  v194 = (CvMaster_o *)sub_1C2D6DC(CvMaster_TypeInfo);
  CvMaster___ctor(v194, 0);
  if ( v194 )
  {
    v3 = sub_1C2D5CC(v194, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Eu )
    goto LABEL_1652;
  v1->m_Items[94] = (DataMasterBase_o *)v194;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[94], (int32_t)v194, v5, v195);
  v196 = (TreasureDvcLvMaster_o *)sub_1C2D6DC(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v196, 0);
  if ( v196 )
  {
    v3 = sub_1C2D5CC(v196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Fu )
    goto LABEL_1652;
  v1->m_Items[95] = (DataMasterBase_o *)v196;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[95], (int32_t)v196, v5, v197);
  v198 = (TreasureDvcDetailMaster_o *)sub_1C2D6DC(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v198, 0);
  if ( v198 )
  {
    v3 = sub_1C2D5CC(v198, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x60u )
    goto LABEL_1652;
  v1->m_Items[96] = (DataMasterBase_o *)v198;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[96], (int32_t)v198, v5, v199);
  v200 = (UserFollowerMaster_o *)sub_1C2D6DC(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v200, 0);
  if ( v200 )
  {
    v3 = sub_1C2D5CC(v200, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x61u )
    goto LABEL_1652;
  v1->m_Items[97] = (DataMasterBase_o *)v200;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[97], (int32_t)v200, v5, v201);
  v202 = (NpcFollowerMaster_o *)sub_1C2D6DC(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v202, 0);
  if ( v202 )
  {
    v3 = sub_1C2D5CC(v202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x62u )
    goto LABEL_1652;
  v1->m_Items[98] = (DataMasterBase_o *)v202;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[98], (int32_t)v202, v5, v203);
  v204 = (NpcServantFollowerMaster_o *)sub_1C2D6DC(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v204, 0);
  if ( v204 )
  {
    v3 = sub_1C2D5CC(v204, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x63u )
    goto LABEL_1652;
  v1->m_Items[99] = (DataMasterBase_o *)v204;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[99], (int32_t)v204, v5, v205);
  v206 = (UserEventMaster_o *)sub_1C2D6DC(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v206, 0);
  if ( v206 )
  {
    v3 = sub_1C2D5CC(v206, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x64u )
    goto LABEL_1652;
  v1->m_Items[100] = (DataMasterBase_o *)v206;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[100], (int32_t)v206, v5, v207);
  v208 = (UserShopMaster_o *)sub_1C2D6DC(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v208, 0);
  if ( v208 )
  {
    v3 = sub_1C2D5CC(v208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x65u )
    goto LABEL_1652;
  v1->m_Items[101] = (DataMasterBase_o *)v208;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[101], (int32_t)v208, v5, v209);
  v210 = (UserContinueMaster_o *)sub_1C2D6DC(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v210, 0);
  if ( v210 )
  {
    v3 = sub_1C2D5CC(v210, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x66u )
    goto LABEL_1652;
  v1->m_Items[102] = (DataMasterBase_o *)v210;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[102], (int32_t)v210, v5, v211);
  v212 = (ConstantMaster_o *)sub_1C2D6DC(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v212, 0);
  if ( v212 )
  {
    v3 = sub_1C2D5CC(v212, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x67u )
    goto LABEL_1652;
  v1->m_Items[103] = (DataMasterBase_o *)v212;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[103], (int32_t)v212, v5, v213);
  v214 = (ConstantLongMaster_o *)sub_1C2D6DC(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v214, 0);
  if ( v214 )
  {
    v3 = sub_1C2D5CC(v214, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x68u )
    goto LABEL_1652;
  v1->m_Items[104] = (DataMasterBase_o *)v214;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[104], (int32_t)v214, v5, v215);
  v216 = (ConstantStrMaster_o *)sub_1C2D6DC(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v216, 0);
  if ( v216 )
  {
    v3 = sub_1C2D5CC(v216, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x69u )
    goto LABEL_1652;
  v1->m_Items[105] = (DataMasterBase_o *)v216;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[105], (int32_t)v216, v5, v217);
  v218 = (AiMaster_o *)sub_1C2D6DC(AiMaster_TypeInfo);
  AiMaster___ctor(v218, 0);
  if ( v218 )
  {
    v3 = sub_1C2D5CC(v218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Au )
    goto LABEL_1652;
  v1->m_Items[106] = (DataMasterBase_o *)v218;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[106], (int32_t)v218, v5, v219);
  v220 = (AiActMaster_o *)sub_1C2D6DC(AiActMaster_TypeInfo);
  AiActMaster___ctor(v220, 0);
  if ( v220 )
  {
    v3 = sub_1C2D5CC(v220, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Bu )
    goto LABEL_1652;
  v1->m_Items[107] = (DataMasterBase_o *)v220;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[107], (int32_t)v220, v5, v221);
  v222 = (AttriRelationMaster_o *)sub_1C2D6DC(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v222, 0);
  if ( v222 )
  {
    v3 = sub_1C2D5CC(v222, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Cu )
    goto LABEL_1652;
  v1->m_Items[108] = (DataMasterBase_o *)v222;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[108], (int32_t)v222, v5, v223);
  v224 = (ClassRelationMaster_o *)sub_1C2D6DC(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v224, 0);
  if ( v224 )
  {
    v3 = sub_1C2D5CC(v224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Du )
    goto LABEL_1652;
  v1->m_Items[109] = (DataMasterBase_o *)v224;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[109], (int32_t)v224, v5, v225);
  v226 = (EffectMaster_o *)sub_1C2D6DC(EffectMaster_TypeInfo);
  EffectMaster___ctor(v226, 0);
  if ( v226 )
  {
    v3 = sub_1C2D5CC(v226, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Eu )
    goto LABEL_1652;
  v1->m_Items[110] = (DataMasterBase_o *)v226;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[110], (int32_t)v226, v5, v227);
  v228 = (EquipImageMaster_o *)sub_1C2D6DC(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v228, 0);
  if ( v228 )
  {
    v3 = sub_1C2D5CC(v228, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Fu )
    goto LABEL_1652;
  v1->m_Items[111] = (DataMasterBase_o *)v228;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[111], (int32_t)v228, v5, v229);
  v230 = (ServantVoiceMaster_o *)sub_1C2D6DC(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v230, 0);
  if ( v230 )
  {
    v3 = sub_1C2D5CC(v230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x70u )
    goto LABEL_1652;
  v1->m_Items[112] = (DataMasterBase_o *)v230;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[112], (int32_t)v230, v5, v231);
  v232 = (CombineLimitMaster_o *)sub_1C2D6DC(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v232, 0);
  if ( v232 )
  {
    v3 = sub_1C2D5CC(v232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x71u )
    goto LABEL_1652;
  v1->m_Items[113] = (DataMasterBase_o *)v232;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[113], (int32_t)v232, v5, v233);
  v234 = (CardMaster_o *)sub_1C2D6DC(CardMaster_TypeInfo);
  CardMaster___ctor(v234, 0);
  if ( v234 )
  {
    v3 = sub_1C2D5CC(v234, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x72u )
    goto LABEL_1652;
  v1->m_Items[114] = (DataMasterBase_o *)v234;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[114], (int32_t)v234, v5, v235);
  v236 = (CombineQpSvtEquipMaster_o *)sub_1C2D6DC(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v236, 0);
  if ( v236 )
  {
    v3 = sub_1C2D5CC(v236, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x73u )
    goto LABEL_1652;
  v1->m_Items[115] = (DataMasterBase_o *)v236;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[115], (int32_t)v236, v5, v237);
  v238 = (ServantRarityMaster_o *)sub_1C2D6DC(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v238, 0);
  if ( v238 )
  {
    v3 = sub_1C2D5CC(v238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x74u )
    goto LABEL_1652;
  v1->m_Items[116] = (DataMasterBase_o *)v238;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[116], (int32_t)v238, v5, v239);
  v240 = (SetItemMaster_o *)sub_1C2D6DC(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v240, 0);
  if ( v240 )
  {
    v3 = sub_1C2D5CC(v240, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x75u )
    goto LABEL_1652;
  v1->m_Items[117] = (DataMasterBase_o *)v240;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[117], (int32_t)v240, v5, v241);
  v242 = (RecoverMaster_o *)sub_1C2D6DC(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v242, 0);
  if ( v242 )
  {
    v3 = sub_1C2D5CC(v242, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x76u )
    goto LABEL_1652;
  v1->m_Items[118] = (DataMasterBase_o *)v242;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[118], (int32_t)v242, v5, v243);
  v244 = (BannerMaster_o *)sub_1C2D6DC(BannerMaster_TypeInfo);
  BannerMaster___ctor(v244, 0);
  if ( v244 )
  {
    v3 = sub_1C2D5CC(v244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x77u )
    goto LABEL_1652;
  v1->m_Items[119] = (DataMasterBase_o *)v244;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[119], (int32_t)v244, v5, v245);
  v246 = (ShopReleaseMaster_o *)sub_1C2D6DC(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v246, 0);
  if ( v246 )
  {
    v3 = sub_1C2D5CC(v246, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x78u )
    goto LABEL_1652;
  v1->m_Items[120] = (DataMasterBase_o *)v246;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[120], (int32_t)v246, v5, v247);
  v248 = (EventRewardMaster_o *)sub_1C2D6DC(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v248, 0);
  if ( v248 )
  {
    v3 = sub_1C2D5CC(v248, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x79u )
    goto LABEL_1652;
  v1->m_Items[121] = (DataMasterBase_o *)v248;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[121], (int32_t)v248, v5, v249);
  v250 = (EventDetailMaster_o *)sub_1C2D6DC(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v250, 0);
  if ( v250 )
  {
    v3 = sub_1C2D5CC(v250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Au )
    goto LABEL_1652;
  v1->m_Items[122] = (DataMasterBase_o *)v250;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[122], (int32_t)v250, v5, v251);
  v252 = (EventServantMaster_o *)sub_1C2D6DC(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v252, 0);
  if ( v252 )
  {
    v3 = sub_1C2D5CC(v252, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Bu )
    goto LABEL_1652;
  v1->m_Items[123] = (DataMasterBase_o *)v252;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[123], (int32_t)v252, v5, v253);
  v254 = (BoxGachaMaster_o *)sub_1C2D6DC(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v254, 0);
  if ( v254 )
  {
    v3 = sub_1C2D5CC(v254, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Cu )
    goto LABEL_1652;
  v1->m_Items[124] = (DataMasterBase_o *)v254;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[124], (int32_t)v254, v5, v255);
  v256 = (BoxGachaBaseMaster_o *)sub_1C2D6DC(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v256, 0);
  if ( v256 )
  {
    v3 = sub_1C2D5CC(v256, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Du )
    goto LABEL_1652;
  v1->m_Items[125] = (DataMasterBase_o *)v256;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[125], (int32_t)v256, v5, v257);
  v258 = (BoxGachaTalkMaster_o *)sub_1C2D6DC(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v258, 0);
  if ( v258 )
  {
    v3 = sub_1C2D5CC(v258, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Eu )
    goto LABEL_1652;
  v1->m_Items[126] = (DataMasterBase_o *)v258;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[126], (int32_t)v258, v5, v259);
  v260 = (UserBoxGachaMaster_o *)sub_1C2D6DC(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v260, 0);
  if ( v260 )
  {
    v3 = sub_1C2D5CC(v260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Fu )
    goto LABEL_1652;
  v1->m_Items[127] = (DataMasterBase_o *)v260;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[127], (int32_t)v260, v5, v261);
  v262 = (BoxGachaHistoryMaster_o *)sub_1C2D6DC(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v262, 0);
  if ( v262 )
  {
    v3 = sub_1C2D5CC(v262, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x80u )
    goto LABEL_1652;
  v1->m_Items[128] = (DataMasterBase_o *)v262;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[128], (int32_t)v262, v5, v263);
  v264 = (BattleBgMaster_o *)sub_1C2D6DC(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v264, 0);
  if ( v264 )
  {
    v3 = sub_1C2D5CC(v264, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x81u )
    goto LABEL_1652;
  v1->m_Items[129] = (DataMasterBase_o *)v264;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[129], (int32_t)v264, v5, v265);
  v266 = (TipsBattleMaster_o *)sub_1C2D6DC(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v266, 0);
  if ( v266 )
  {
    v3 = sub_1C2D5CC(v266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x82u )
    goto LABEL_1652;
  v1->m_Items[130] = (DataMasterBase_o *)v266;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[130], (int32_t)v266, v5, v267);
  v268 = (UserLoginMaster_o *)sub_1C2D6DC(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v268, 0);
  if ( v268 )
  {
    v3 = sub_1C2D5CC(v268, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x83u )
    goto LABEL_1652;
  v1->m_Items[131] = (DataMasterBase_o *)v268;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[131], (int32_t)v268, v5, v269);
  v270 = (VoiceMaster_o *)sub_1C2D6DC(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v270, 0);
  if ( v270 )
  {
    v3 = sub_1C2D5CC(v270, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x84u )
    goto LABEL_1652;
  v1->m_Items[132] = (DataMasterBase_o *)v270;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[132], (int32_t)v270, v5, v271);
  v272 = (EventRewardExtraMaster_o *)sub_1C2D6DC(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v272, 0);
  if ( v272 )
  {
    v3 = sub_1C2D5CC(v272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x85u )
    goto LABEL_1652;
  v1->m_Items[133] = (DataMasterBase_o *)v272;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[133], (int32_t)v272, v5, v273);
  v274 = (EventMissionMaster_o *)sub_1C2D6DC(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v274, 0);
  if ( v274 )
  {
    v3 = sub_1C2D5CC(v274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x86u )
    goto LABEL_1652;
  v1->m_Items[134] = (DataMasterBase_o *)v274;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[134], (int32_t)v274, v5, v275);
  v276 = (EventMissionActionMaster_o *)sub_1C2D6DC(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v276, 0);
  if ( v276 )
  {
    v3 = sub_1C2D5CC(v276, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x87u )
    goto LABEL_1652;
  v1->m_Items[135] = (DataMasterBase_o *)v276;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[135], (int32_t)v276, v5, v277);
  v278 = (EventMissionActionAddMaster_o *)sub_1C2D6DC(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v278, 0);
  if ( v278 )
  {
    v3 = sub_1C2D5CC(v278, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x88u )
    goto LABEL_1652;
  v1->m_Items[136] = (DataMasterBase_o *)v278;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[136], (int32_t)v278, v5, v279);
  v280 = (EventMissionConditionMaster_o *)sub_1C2D6DC(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v280, 0);
  if ( v280 )
  {
    v3 = sub_1C2D5CC(v280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x89u )
    goto LABEL_1652;
  v1->m_Items[137] = (DataMasterBase_o *)v280;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[137], (int32_t)v280, v5, v281);
  v282 = (EventMissionCondDetailMaster_o *)sub_1C2D6DC(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v282, 0);
  if ( v282 )
  {
    v3 = sub_1C2D5CC(v282, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Au )
    goto LABEL_1652;
  v1->m_Items[138] = (DataMasterBase_o *)v282;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[138], (int32_t)v282, v5, v283);
  v284 = (EventMissionAddMaster_o *)sub_1C2D6DC(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v284, 0);
  if ( v284 )
  {
    v3 = sub_1C2D5CC(v284, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Bu )
    goto LABEL_1652;
  v1->m_Items[139] = (DataMasterBase_o *)v284;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[139], (int32_t)v284, v5, v285);
  v286 = (CompleteMissionMaster_o *)sub_1C2D6DC(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v286, 0);
  if ( v286 )
  {
    v3 = sub_1C2D5CC(v286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Cu )
    goto LABEL_1652;
  v1->m_Items[140] = (DataMasterBase_o *)v286;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[140], (int32_t)v286, v5, v287);
  v288 = (EventRewardSetMaster_o *)sub_1C2D6DC(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v288, 0);
  if ( v288 )
  {
    v3 = sub_1C2D5CC(v288, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Du )
    goto LABEL_1652;
  v1->m_Items[141] = (DataMasterBase_o *)v288;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[141], (int32_t)v288, v5, v289);
  v290 = (UserEventMissionMaster_o *)sub_1C2D6DC(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v290, 0);
  if ( v290 )
  {
    v3 = sub_1C2D5CC(v290, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Eu )
    goto LABEL_1652;
  v1->m_Items[142] = (DataMasterBase_o *)v290;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[142], (int32_t)v290, v5, v291);
  v292 = (UserEventMissionCondDetailMaster_o *)sub_1C2D6DC(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v292, 0);
  if ( v292 )
  {
    v3 = sub_1C2D5CC(v292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Fu )
    goto LABEL_1652;
  v1->m_Items[143] = (DataMasterBase_o *)v292;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[143], (int32_t)v292, v5, v293);
  v294 = (BoxGachaBaseDetailMaster_o *)sub_1C2D6DC(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v294, 0);
  if ( v294 )
  {
    v3 = sub_1C2D5CC(v294, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x90u )
    goto LABEL_1652;
  v1->m_Items[144] = (DataMasterBase_o *)v294;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[144], (int32_t)v294, v5, v295);
  v296 = (UserServantLeaderMaster_o *)sub_1C2D6DC(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v296, 0);
  if ( v296 )
  {
    v3 = sub_1C2D5CC(v296, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x91u )
    goto LABEL_1652;
  v1->m_Items[145] = (DataMasterBase_o *)v296;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[145], (int32_t)v296, v5, v297);
  v298 = (ClosedMessageMaster_o *)sub_1C2D6DC(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v298, 0);
  if ( v298 )
  {
    v3 = sub_1C2D5CC(v298, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x92u )
    goto LABEL_1652;
  v1->m_Items[146] = (DataMasterBase_o *)v298;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[146], (int32_t)v298, v5, v299);
  v300 = (FunctionGroupMaster_o *)sub_1C2D6DC(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v300, 0);
  if ( v300 )
  {
    v3 = sub_1C2D5CC(v300, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x93u )
    goto LABEL_1652;
  v1->m_Items[147] = (DataMasterBase_o *)v300;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[147], (int32_t)v300, v5, v301);
  v302 = (EventRaidMaster_o *)sub_1C2D6DC(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v302, 0);
  if ( v302 )
  {
    v3 = sub_1C2D5CC(v302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x94u )
    goto LABEL_1652;
  v1->m_Items[148] = (DataMasterBase_o *)v302;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[148], (int32_t)v302, v5, v303);
  v304 = (TotalEventRaidMaster_o *)sub_1C2D6DC(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v304, 0);
  if ( v304 )
  {
    v3 = sub_1C2D5CC(v304, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x95u )
    goto LABEL_1652;
  v1->m_Items[149] = (DataMasterBase_o *)v304;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[149], (int32_t)v304, v5, v305);
  v306 = (UserEventRaidMaster_o *)sub_1C2D6DC(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v306, 0);
  if ( v306 )
  {
    v3 = sub_1C2D5CC(v306, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x96u )
    goto LABEL_1652;
  v1->m_Items[150] = (DataMasterBase_o *)v306;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[150], (int32_t)v306, v5, v307);
  v308 = (EventPointMaster_o *)sub_1C2D6DC(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v308, 0);
  if ( v308 )
  {
    v3 = sub_1C2D5CC(v308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x97u )
    goto LABEL_1652;
  v1->m_Items[151] = (DataMasterBase_o *)v308;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[151], (int32_t)v308, v5, v309);
  v310 = (EventPointGroupMaster_o *)sub_1C2D6DC(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v310, 0);
  if ( v310 )
  {
    v3 = sub_1C2D5CC(v310, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x98u )
    goto LABEL_1652;
  v1->m_Items[152] = (DataMasterBase_o *)v310;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[152], (int32_t)v310, v5, v311);
  v312 = (TotalEventPointMaster_o *)sub_1C2D6DC(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v312, 0);
  if ( v312 )
  {
    v3 = sub_1C2D5CC(v312, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x99u )
    goto LABEL_1652;
  v1->m_Items[153] = (DataMasterBase_o *)v312;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[153], (int32_t)v312, v5, v313);
  v314 = (UserEventPointMaster_o *)sub_1C2D6DC(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v314, 0);
  if ( v314 )
  {
    v3 = sub_1C2D5CC(v314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Au )
    goto LABEL_1652;
  v1->m_Items[154] = (DataMasterBase_o *)v314;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[154], (int32_t)v314, v5, v315);
  v316 = (EventPointUpperMaster_o *)sub_1C2D6DC(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v316, 0);
  if ( v316 )
  {
    v3 = sub_1C2D5CC(v316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Bu )
    goto LABEL_1652;
  v1->m_Items[155] = (DataMasterBase_o *)v316;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[155], (int32_t)v316, v5, v317);
  v318 = (EventPointUpperReleaseMaster_o *)sub_1C2D6DC(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v318, 0);
  if ( v318 )
  {
    v3 = sub_1C2D5CC(v318, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Cu )
    goto LABEL_1652;
  v1->m_Items[156] = (DataMasterBase_o *)v318;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[156], (int32_t)v318, v5, v319);
  v320 = (EventRaceMaster_o *)sub_1C2D6DC(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v320, 0);
  if ( v320 )
  {
    v3 = sub_1C2D5CC(v320, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Du )
    goto LABEL_1652;
  v1->m_Items[157] = (DataMasterBase_o *)v320;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[157], (int32_t)v320, v5, v321);
  v322 = (EventRaceResultMaster_o *)sub_1C2D6DC(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v322, 0);
  if ( v322 )
  {
    v3 = sub_1C2D5CC(v322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Eu )
    goto LABEL_1652;
  v1->m_Items[158] = (DataMasterBase_o *)v322;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[158], (int32_t)v322, v5, v323);
  v324 = (QuestRacePointMaster_o *)sub_1C2D6DC(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v324, 0);
  if ( v324 )
  {
    v3 = sub_1C2D5CC(v324, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Fu )
    goto LABEL_1652;
  v1->m_Items[159] = (DataMasterBase_o *)v324;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[159], (int32_t)v324, v5, v325);
  v326 = (UserEventRaceMaster_o *)sub_1C2D6DC(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v326, 0);
  if ( v326 )
  {
    v3 = sub_1C2D5CC(v326, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA0u )
    goto LABEL_1652;
  v1->m_Items[160] = (DataMasterBase_o *)v326;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[160], (int32_t)v326, v5, v327);
  v328 = (EventScriptMaster_o *)sub_1C2D6DC(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v328, 0);
  if ( v328 )
  {
    v3 = sub_1C2D5CC(v328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA1u )
    goto LABEL_1652;
  v1->m_Items[161] = (DataMasterBase_o *)v328;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[161], (int32_t)v328, v5, v329);
  v330 = (EventScriptReleaseMaster_o *)sub_1C2D6DC(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v330, 0);
  if ( v330 )
  {
    v3 = sub_1C2D5CC(v330, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA2u )
    goto LABEL_1652;
  v1->m_Items[162] = (DataMasterBase_o *)v330;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[162], (int32_t)v330, v5, v331);
  v332 = (UserPresentHistoryMaster_o *)sub_1C2D6DC(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v332, 0);
  if ( v332 )
  {
    v3 = sub_1C2D5CC(v332, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA3u )
    goto LABEL_1652;
  v1->m_Items[163] = (DataMasterBase_o *)v332;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[163], (int32_t)v332, v5, v333);
  v334 = (MstMissionMaster_o *)sub_1C2D6DC(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v334, 0);
  if ( v334 )
  {
    v3 = sub_1C2D5CC(v334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA4u )
    goto LABEL_1652;
  v1->m_Items[164] = (DataMasterBase_o *)v334;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[164], (int32_t)v334, v5, v335);
  v336 = (ServantExceedMaster_o *)sub_1C2D6DC(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v336, 0);
  if ( v336 )
  {
    v3 = sub_1C2D5CC(v336, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA5u )
    goto LABEL_1652;
  v1->m_Items[165] = (DataMasterBase_o *)v336;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[165], (int32_t)v336, v5, v337);
  v338 = (PartialMaintenanceMaster_o *)sub_1C2D6DC(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v338, 0);
  if ( v338 )
  {
    v3 = sub_1C2D5CC(v338, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA6u )
    goto LABEL_1652;
  v1->m_Items[166] = (DataMasterBase_o *)v338;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[166], (int32_t)v338, v5, v339);
  v340 = (GuideMaster_o *)sub_1C2D6DC(GuideMaster_TypeInfo);
  GuideMaster___ctor(v340, 0);
  if ( v340 )
  {
    v3 = sub_1C2D5CC(v340, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA7u )
    goto LABEL_1652;
  v1->m_Items[167] = (DataMasterBase_o *)v340;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[167], (int32_t)v340, v5, v341);
  v342 = (MstMissionDisplayInfoMaster_o *)sub_1C2D6DC(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v342, 0);
  if ( v342 )
  {
    v3 = sub_1C2D5CC(v342, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA8u )
    goto LABEL_1652;
  v1->m_Items[168] = (DataMasterBase_o *)v342;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[168], (int32_t)v342, v5, v343);
  v344 = (GachaGroupMaster_o *)sub_1C2D6DC(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v344, 0);
  if ( v344 )
  {
    v3 = sub_1C2D5CC(v344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xA9u )
    goto LABEL_1652;
  v1->m_Items[169] = (DataMasterBase_o *)v344;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[169], (int32_t)v344, v5, v345);
  v346 = (QuestResetMaster_o *)sub_1C2D6DC(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v346, 0);
  if ( v346 )
  {
    v3 = sub_1C2D5CC(v346, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xAAu )
    goto LABEL_1652;
  v1->m_Items[170] = (DataMasterBase_o *)v346;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[170], (int32_t)v346, v5, v347);
  v348 = (WarAddMaster_o *)sub_1C2D6DC(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v348, 0);
  if ( v348 )
  {
    v3 = sub_1C2D5CC(v348, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xABu )
    goto LABEL_1652;
  v1->m_Items[171] = (DataMasterBase_o *)v348;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[171], (int32_t)v348, v5, v349);
  v350 = (EventItemDisplayMaster_o *)sub_1C2D6DC(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v350, 0);
  if ( v350 )
  {
    v3 = sub_1C2D5CC(v350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xACu )
    goto LABEL_1652;
  v1->m_Items[172] = (DataMasterBase_o *)v350;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[172], (int32_t)v350, v5, v351);
  v352 = (EventItemDisplayGroupMaster_o *)sub_1C2D6DC(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v352, 0);
  if ( v352 )
  {
    v3 = sub_1C2D5CC(v352, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xADu )
    goto LABEL_1652;
  v1->m_Items[173] = (DataMasterBase_o *)v352;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[173], (int32_t)v352, v5, v353);
  v354 = (EventItemDisplayReleaseMaster_o *)sub_1C2D6DC(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v354, 0);
  if ( v354 )
  {
    v3 = sub_1C2D5CC(v354, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xAEu )
    goto LABEL_1652;
  v1->m_Items[174] = (DataMasterBase_o *)v354;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[174], (int32_t)v354, v5, v355);
  v356 = (EventTutorialMaster_o *)sub_1C2D6DC(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v356, 0);
  if ( v356 )
  {
    v3 = sub_1C2D5CC(v356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xAFu )
    goto LABEL_1652;
  v1->m_Items[175] = (DataMasterBase_o *)v356;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[175], (int32_t)v356, v5, v357);
  v358 = (EventTutorialCondMaster_o *)sub_1C2D6DC(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v358, 0);
  if ( v358 )
  {
    v3 = sub_1C2D5CC(v358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB0u )
    goto LABEL_1652;
  v1->m_Items[176] = (DataMasterBase_o *)v358;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[176], (int32_t)v358, v5, v359);
  v360 = (VoiceReleaseMaster_o *)sub_1C2D6DC(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v360, 0);
  if ( v360 )
  {
    v3 = sub_1C2D5CC(v360, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB1u )
    goto LABEL_1652;
  v1->m_Items[177] = (DataMasterBase_o *)v360;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[177], (int32_t)v360, v5, v361);
  v362 = (EventSuperBossMaster_o *)sub_1C2D6DC(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v362, 0);
  if ( v362 )
  {
    v3 = sub_1C2D5CC(v362, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB2u )
    goto LABEL_1652;
  v1->m_Items[178] = (DataMasterBase_o *)v362;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[178], (int32_t)v362, v5, v363);
  v364 = (UserSuperBossMaster_o *)sub_1C2D6DC(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v364, 0);
  if ( v364 )
  {
    v3 = sub_1C2D5CC(v364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB3u )
    goto LABEL_1652;
  v1->m_Items[179] = (DataMasterBase_o *)v364;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[179], (int32_t)v364, v5, v365);
  v366 = (QuestScriptMaster_o *)sub_1C2D6DC(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v366, 0);
  if ( v366 )
  {
    v3 = sub_1C2D5CC(v366, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB4u )
    goto LABEL_1652;
  v1->m_Items[180] = (DataMasterBase_o *)v366;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[180], (int32_t)v366, v5, v367);
  v368 = (QuestScriptReleaseMaster_o *)sub_1C2D6DC(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v368, 0);
  if ( v368 )
  {
    v3 = sub_1C2D5CC(v368, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB5u )
    goto LABEL_1652;
  v1->m_Items[181] = (DataMasterBase_o *)v368;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[181], (int32_t)v368, v5, v369);
  v370 = (MaterialFolderMaster_o *)sub_1C2D6DC(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v370, 0);
  if ( v370 )
  {
    v3 = sub_1C2D5CC(v370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB6u )
    goto LABEL_1652;
  v1->m_Items[182] = (DataMasterBase_o *)v370;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[182], (int32_t)v370, v5, v371);
  v372 = (RestrictionMaster_o *)sub_1C2D6DC(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v372, 0);
  if ( v372 )
  {
    v3 = sub_1C2D5CC(v372, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB7u )
    goto LABEL_1652;
  v1->m_Items[183] = (DataMasterBase_o *)v372;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[183], (int32_t)v372, v5, v373);
  v374 = (QuestRestrictionMaster_o *)sub_1C2D6DC(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v374, 0);
  if ( v374 )
  {
    v3 = sub_1C2D5CC(v374, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB8u )
    goto LABEL_1652;
  v1->m_Items[184] = (DataMasterBase_o *)v374;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[184], (int32_t)v374, v5, v375);
  v376 = (ServantVoiceRelationMaster_o *)sub_1C2D6DC(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v376, 0);
  if ( v376 )
  {
    v3 = sub_1C2D5CC(v376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xB9u )
    goto LABEL_1652;
  v1->m_Items[185] = (DataMasterBase_o *)v376;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[185], (int32_t)v376, v5, v377);
  v378 = (ShopDetailMaster_o *)sub_1C2D6DC(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v378, 0);
  if ( v378 )
  {
    v3 = sub_1C2D5CC(v378, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBAu )
    goto LABEL_1652;
  v1->m_Items[186] = (DataMasterBase_o *)v378;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[186], (int32_t)v378, v5, v379);
  v380 = (ServantScriptAddMaster_o *)sub_1C2D6DC(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v380, 0);
  if ( v380 )
  {
    v3 = sub_1C2D5CC(v380, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBBu )
    goto LABEL_1652;
  v1->m_Items[187] = (DataMasterBase_o *)v380;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[187], (int32_t)v380, v5, v381);
  v382 = (CombineMaster_o *)sub_1C2D6DC(CombineMaster_TypeInfo);
  CombineMaster___ctor(v382, 0);
  if ( v382 )
  {
    v3 = sub_1C2D5CC(v382, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBCu )
    goto LABEL_1652;
  v1->m_Items[188] = (DataMasterBase_o *)v382;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[188], (int32_t)v382, v5, v383);
  v384 = (AiFieldMaster_o *)sub_1C2D6DC(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v384, 0);
  if ( v384 )
  {
    v3 = sub_1C2D5CC(v384, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBDu )
    goto LABEL_1652;
  v1->m_Items[189] = (DataMasterBase_o *)v384;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[189], (int32_t)v384, v5, v385);
  v386 = (ServantCommentAddMaster_o *)sub_1C2D6DC(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v386, 0);
  if ( v386 )
  {
    v3 = sub_1C2D5CC(v386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBEu )
    goto LABEL_1652;
  v1->m_Items[190] = (DataMasterBase_o *)v386;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[190], (int32_t)v386, v5, v387);
  v388 = (EventFilterMaster_o *)sub_1C2D6DC(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v388, 0);
  if ( v388 )
  {
    v3 = sub_1C2D5CC(v388, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xBFu )
    goto LABEL_1652;
  v1->m_Items[191] = (DataMasterBase_o *)v388;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[191], (int32_t)v388, v5, v389);
  v390 = (UserSupportDeckMaster_o *)sub_1C2D6DC(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v390, 0);
  if ( v390 )
  {
    v3 = sub_1C2D5CC(v390, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC0u )
    goto LABEL_1652;
  v1->m_Items[192] = (DataMasterBase_o *)v390;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[192], (int32_t)v390, v5, v391);
  v392 = (EventRewardSceneMaster_o *)sub_1C2D6DC(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v392, 0);
  if ( v392 )
  {
    v3 = sub_1C2D5CC(v392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC1u )
    goto LABEL_1652;
  v1->m_Items[193] = (DataMasterBase_o *)v392;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[193], (int32_t)v392, v5, v393);
  v394 = (EventVoicePlayMaster_o *)sub_1C2D6DC(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v394, 0);
  if ( v394 )
  {
    v3 = sub_1C2D5CC(v394, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC2u )
    goto LABEL_1652;
  v1->m_Items[194] = (DataMasterBase_o *)v394;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[194], (int32_t)v394, v5, v395);
  v396 = (GachaSubMaster_o *)sub_1C2D6DC(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v396, 0);
  if ( v396 )
  {
    v3 = sub_1C2D5CC(v396, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC3u )
    goto LABEL_1652;
  v1->m_Items[195] = (DataMasterBase_o *)v396;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[195], (int32_t)v396, v5, v397);
  v398 = (GachaDetailMaster_o *)sub_1C2D6DC(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v398, 0);
  if ( v398 )
  {
    v3 = sub_1C2D5CC(v398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC4u )
    goto LABEL_1652;
  v1->m_Items[196] = (DataMasterBase_o *)v398;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[196], (int32_t)v398, v5, v399);
  v400 = (GachaBaseCollateralMaster_o *)sub_1C2D6DC(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v400, 0);
  if ( v400 )
  {
    v3 = sub_1C2D5CC(v400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC5u )
    goto LABEL_1652;
  v1->m_Items[197] = (DataMasterBase_o *)v400;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[197], (int32_t)v400, v5, v401);
  v402 = (GachaAdjustAddMaster_o *)sub_1C2D6DC(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v402, 0);
  if ( v402 )
  {
    v3 = sub_1C2D5CC(v402, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC6u )
    goto LABEL_1652;
  v1->m_Items[198] = (DataMasterBase_o *)v402;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[198], (int32_t)v402, v5, v403);
  v404 = (GachaBonusSelectMaster_o *)sub_1C2D6DC(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v404, 0);
  if ( v404 )
  {
    v3 = sub_1C2D5CC(v404, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC7u )
    goto LABEL_1652;
  v1->m_Items[199] = (DataMasterBase_o *)v404;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[199], (int32_t)v404, v5, v405);
  v406 = (GachaBonusSelectLineupMaster_o *)sub_1C2D6DC(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v406, 0);
  if ( v406 )
  {
    v3 = sub_1C2D5CC(v406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC8u )
    goto LABEL_1652;
  v1->m_Items[200] = (DataMasterBase_o *)v406;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[200], (int32_t)v406, v5, v407);
  v408 = (ServantChangeMaster_o *)sub_1C2D6DC(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v408, 0);
  if ( v408 )
  {
    v3 = sub_1C2D5CC(v408, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xC9u )
    goto LABEL_1652;
  v1->m_Items[201] = (DataMasterBase_o *)v408;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[201], (int32_t)v408, v5, v409);
  v410 = (VoiceCondMaster_o *)sub_1C2D6DC(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v410, 0);
  if ( v410 )
  {
    v3 = sub_1C2D5CC(v410, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCAu )
    goto LABEL_1652;
  v1->m_Items[202] = (DataMasterBase_o *)v410;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[202], (int32_t)v410, v5, v411);
  v412 = (BgmReleaseMaster_o *)sub_1C2D6DC(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v412, 0);
  if ( v412 )
  {
    v3 = sub_1C2D5CC(v412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCBu )
    goto LABEL_1652;
  v1->m_Items[203] = (DataMasterBase_o *)v412;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[203], (int32_t)v412, v5, v413);
  v414 = (MyRoomAddMaster_o *)sub_1C2D6DC(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v414, 0);
  if ( v414 )
  {
    v3 = sub_1C2D5CC(v414, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCCu )
    goto LABEL_1652;
  v1->m_Items[204] = (DataMasterBase_o *)v414;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[204], (int32_t)v414, v5, v415);
  v416 = (ShopActionMaster_o *)sub_1C2D6DC(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v416, 0);
  if ( v416 )
  {
    v3 = sub_1C2D5CC(v416, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCDu )
    goto LABEL_1652;
  v1->m_Items[205] = (DataMasterBase_o *)v416;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[205], (int32_t)v416, v5, v417);
  v418 = (EventRewardSceneReleaseMaster_o *)sub_1C2D6DC(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v418, 0);
  if ( v418 )
  {
    v3 = sub_1C2D5CC(v418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCEu )
    goto LABEL_1652;
  v1->m_Items[206] = (DataMasterBase_o *)v418;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[206], (int32_t)v418, v5, v419);
  v420 = (QuestBehaviorMaster_o *)sub_1C2D6DC(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v420, 0);
  if ( v420 )
  {
    v3 = sub_1C2D5CC(v420, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xCFu )
    goto LABEL_1652;
  v1->m_Items[207] = (DataMasterBase_o *)v420;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[207], (int32_t)v420, v5, v421);
  v422 = (MapMaster_o *)sub_1C2D6DC(MapMaster_TypeInfo);
  MapMaster___ctor(v422, 0);
  if ( v422 )
  {
    v3 = sub_1C2D5CC(v422, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD0u )
    goto LABEL_1652;
  v1->m_Items[208] = (DataMasterBase_o *)v422;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[208], (int32_t)v422, v5, v423);
  v424 = (MapCondMaster_o *)sub_1C2D6DC(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v424, 0);
  if ( v424 )
  {
    v3 = sub_1C2D5CC(v424, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD1u )
    goto LABEL_1652;
  v1->m_Items[209] = (DataMasterBase_o *)v424;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[209], (int32_t)v424, v5, v425);
  v426 = (MapButtonMaster_o *)sub_1C2D6DC(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v426, 0);
  if ( v426 )
  {
    v3 = sub_1C2D5CC(v426, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD2u )
    goto LABEL_1652;
  v1->m_Items[210] = (DataMasterBase_o *)v426;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[210], (int32_t)v426, v5, v427);
  v428 = (BannerAddMaster_o *)sub_1C2D6DC(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v428, 0);
  if ( v428 )
  {
    v3 = sub_1C2D5CC(v428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD3u )
    goto LABEL_1652;
  v1->m_Items[211] = (DataMasterBase_o *)v428;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[211], (int32_t)v428, v5, v429);
  v430 = (EventAddMaster_o *)sub_1C2D6DC(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v430, 0);
  if ( v430 )
  {
    v3 = sub_1C2D5CC(v430, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD4u )
    goto LABEL_1652;
  v1->m_Items[212] = (DataMasterBase_o *)v430;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[212], (int32_t)v430, v5, v431);
  v432 = (TotalLoginMaster_o *)sub_1C2D6DC(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v432, 0);
  if ( v432 )
  {
    v3 = sub_1C2D5CC(v432, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD5u )
    goto LABEL_1652;
  v1->m_Items[213] = (DataMasterBase_o *)v432;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[213], (int32_t)v432, v5, v433);
  v434 = (ServantFilterMaster_o *)sub_1C2D6DC(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v434, 0);
  if ( v434 )
  {
    v3 = sub_1C2D5CC(v434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD6u )
    goto LABEL_1652;
  v1->m_Items[214] = (DataMasterBase_o *)v434;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[214], (int32_t)v434, v5, v435);
  v436 = (CombineCostumeMaster_o *)sub_1C2D6DC(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v436, 0);
  if ( v436 )
  {
    v3 = sub_1C2D5CC(v436, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD7u )
    goto LABEL_1652;
  v1->m_Items[215] = (DataMasterBase_o *)v436;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[215], (int32_t)v436, v5, v437);
  v438 = (ServantCostumeMaster_o *)sub_1C2D6DC(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v438, 0);
  if ( v438 )
  {
    v3 = sub_1C2D5CC(v438, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD8u )
    goto LABEL_1652;
  v1->m_Items[216] = (DataMasterBase_o *)v438;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[216], (int32_t)v438, v5, v439);
  v440 = (ServantCostumeReleaseMaster_o *)sub_1C2D6DC(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v440, 0);
  if ( v440 )
  {
    v3 = sub_1C2D5CC(v440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xD9u )
    goto LABEL_1652;
  v1->m_Items[217] = (DataMasterBase_o *)v440;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[217], (int32_t)v440, v5, v441);
  v442 = (StaffPhotoMaster_o *)sub_1C2D6DC(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v442, 0);
  if ( v442 )
  {
    v3 = sub_1C2D5CC(v442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDAu )
    goto LABEL_1652;
  v1->m_Items[218] = (DataMasterBase_o *)v442;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[218], (int32_t)v442, v5, v443);
  v444 = (StaffPhotoCostumeMaster_o *)sub_1C2D6DC(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v444, 0);
  if ( v444 )
  {
    v3 = sub_1C2D5CC(v444, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDBu )
    goto LABEL_1652;
  v1->m_Items[219] = (DataMasterBase_o *)v444;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[219], (int32_t)v444, v5, v445);
  v446 = (UserFriendRequestHistoryMaster_o *)sub_1C2D6DC(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v446, 0);
  if ( v446 )
  {
    v3 = sub_1C2D5CC(v446, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDCu )
    goto LABEL_1652;
  v1->m_Items[220] = (DataMasterBase_o *)v446;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[220], (int32_t)v446, v5, v447);
  v448 = (UserBlacklistMaster_o *)sub_1C2D6DC(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v448, 0);
  if ( v448 )
  {
    v3 = sub_1C2D5CC(v448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDDu )
    goto LABEL_1652;
  v1->m_Items[221] = (DataMasterBase_o *)v448;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[221], (int32_t)v448, v5, v449);
  v450 = (ItemSelectMaster_o *)sub_1C2D6DC(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v450, 0);
  if ( v450 )
  {
    v3 = sub_1C2D5CC(v450, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDEu )
    goto LABEL_1652;
  v1->m_Items[222] = (DataMasterBase_o *)v450;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[222], (int32_t)v450, v5, v451);
  v452 = (TotalEventRaceMaster_o *)sub_1C2D6DC(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v452, 0);
  if ( v452 )
  {
    v3 = sub_1C2D5CC(v452, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xDFu )
    goto LABEL_1652;
  v1->m_Items[223] = (DataMasterBase_o *)v452;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[223], (int32_t)v452, v5, v453);
  v454 = (EventPointGroupAddMaster_o *)sub_1C2D6DC(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v454, 0);
  if ( v454 )
  {
    v3 = sub_1C2D5CC(v454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE0u )
    goto LABEL_1652;
  v1->m_Items[224] = (DataMasterBase_o *)v454;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[224], (int32_t)v454, v5, v455);
  v456 = (VoicePlayGroupMaster_o *)sub_1C2D6DC(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v456, 0);
  if ( v456 )
  {
    v3 = sub_1C2D5CC(v456, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE1u )
    goto LABEL_1652;
  v1->m_Items[225] = (DataMasterBase_o *)v456;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[225], (int32_t)v456, v5, v457);
  v458 = (VoicePlayCondMaster_o *)sub_1C2D6DC(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v458, 0);
  if ( v458 )
  {
    v3 = sub_1C2D5CC(v458, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE2u )
    goto LABEL_1652;
  v1->m_Items[226] = (DataMasterBase_o *)v458;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[226], (int32_t)v458, v5, v459);
  v460 = (GachaStoryAdjustMaster_o *)sub_1C2D6DC(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v460, 0);
  if ( v460 )
  {
    v3 = sub_1C2D5CC(v460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE3u )
    goto LABEL_1652;
  v1->m_Items[227] = (DataMasterBase_o *)v460;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[227], (int32_t)v460, v5, v461);
  v462 = (ServantFlagMaster_o *)sub_1C2D6DC(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v462, 0);
  if ( v462 )
  {
    v3 = sub_1C2D5CC(v462, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE4u )
    goto LABEL_1652;
  v1->m_Items[228] = (DataMasterBase_o *)v462;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[228], (int32_t)v462, v5, v463);
  v464 = (ServantFlagReleaseMaster_o *)sub_1C2D6DC(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v464, 0);
  if ( v464 )
  {
    v3 = sub_1C2D5CC(v464, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE5u )
    goto LABEL_1652;
  v1->m_Items[229] = (DataMasterBase_o *)v464;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[229], (int32_t)v464, v5, v465);
  v466 = (EventLocationCampaignMaster_o *)sub_1C2D6DC(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v466, 0);
  if ( v466 )
  {
    v3 = sub_1C2D5CC(v466, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE6u )
    goto LABEL_1652;
  v1->m_Items[230] = (DataMasterBase_o *)v466;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[230], (int32_t)v466, v5, v467);
  v468 = (CampaignInfoMaster_o *)sub_1C2D6DC(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v468, 0);
  if ( v468 )
  {
    v3 = sub_1C2D5CC(v468, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE7u )
    goto LABEL_1652;
  v1->m_Items[231] = (DataMasterBase_o *)v468;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[231], (int32_t)v468, v5, v469);
  v470 = (DialogMessageMaster_o *)sub_1C2D6DC(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v470, 0);
  if ( v470 )
  {
    v3 = sub_1C2D5CC(v470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE8u )
    goto LABEL_1652;
  v1->m_Items[232] = (DataMasterBase_o *)v470;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[232], (int32_t)v470, v5, v471);
  v472 = (ServantIndividualityMaster_o *)sub_1C2D6DC(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v472, 0);
  if ( v472 )
  {
    v3 = sub_1C2D5CC(v472, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xE9u )
    goto LABEL_1652;
  v1->m_Items[233] = (DataMasterBase_o *)v472;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[233], (int32_t)v472, v5, v473);
  v474 = (BoardMessageMaster_o *)sub_1C2D6DC(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v474, 0);
  if ( v474 )
  {
    v3 = sub_1C2D5CC(v474, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEAu )
    goto LABEL_1652;
  v1->m_Items[234] = (DataMasterBase_o *)v474;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[234], (int32_t)v474, v5, v475);
  v476 = (BoardMessageReleaseMaster_o *)sub_1C2D6DC(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v476, 0);
  if ( v476 )
  {
    v3 = sub_1C2D5CC(v476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEBu )
    goto LABEL_1652;
  v1->m_Items[235] = (DataMasterBase_o *)v476;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[235], (int32_t)v476, v5, v477);
  v478 = (EventServantFatigueMaster_o *)sub_1C2D6DC(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v478, 0);
  if ( v478 )
  {
    v3 = sub_1C2D5CC(v478, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xECu )
    goto LABEL_1652;
  v1->m_Items[236] = (DataMasterBase_o *)v478;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[236], (int32_t)v478, v5, v479);
  v480 = (UserEventDeckMaster_o *)sub_1C2D6DC(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v480, 0);
  if ( v480 )
  {
    v3 = sub_1C2D5CC(v480, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEDu )
    goto LABEL_1652;
  v1->m_Items[237] = (DataMasterBase_o *)v480;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[237], (int32_t)v480, v5, v481);
  v482 = (EventTowerMaster_o *)sub_1C2D6DC(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v482, 0);
  if ( v482 )
  {
    v3 = sub_1C2D5CC(v482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEEu )
    goto LABEL_1652;
  v1->m_Items[238] = (DataMasterBase_o *)v482;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[238], (int32_t)v482, v5, v483);
  v484 = (EventTowerRewardMaster_o *)sub_1C2D6DC(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v484, 0);
  if ( v484 )
  {
    v3 = sub_1C2D5CC(v484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xEFu )
    goto LABEL_1652;
  v1->m_Items[239] = (DataMasterBase_o *)v484;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[239], (int32_t)v484, v5, v485);
  v486 = (EventBulletinBoardMaster_o *)sub_1C2D6DC(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v486, 0);
  if ( v486 )
  {
    v3 = sub_1C2D5CC(v486, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF0u )
    goto LABEL_1652;
  v1->m_Items[240] = (DataMasterBase_o *)v486;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[240], (int32_t)v486, v5, v487);
  v488 = (EventBulletinBoardReleaseMaster_o *)sub_1C2D6DC(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v488, 0);
  if ( v488 )
  {
    v3 = sub_1C2D5CC(v488, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF1u )
    goto LABEL_1652;
  v1->m_Items[241] = (DataMasterBase_o *)v488;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[241], (int32_t)v488, v5, v489);
  v490 = (EventFactoryMaster_o *)sub_1C2D6DC(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v490, 0);
  if ( v490 )
  {
    v3 = sub_1C2D5CC(v490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF2u )
    goto LABEL_1652;
  v1->m_Items[242] = (DataMasterBase_o *)v490;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[242], (int32_t)v490, v5, v491);
  v492 = (ShopGroupMaster_o *)sub_1C2D6DC(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v492, 0);
  if ( v492 )
  {
    v3 = sub_1C2D5CC(v492, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF3u )
    goto LABEL_1652;
  v1->m_Items[243] = (DataMasterBase_o *)v492;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[243], (int32_t)v492, v5, v493);
  v494 = (AuraEffectMaster_o *)sub_1C2D6DC(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v494, 0);
  if ( v494 )
  {
    v3 = sub_1C2D5CC(v494, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF4u )
    goto LABEL_1652;
  v1->m_Items[244] = (DataMasterBase_o *)v494;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[244], (int32_t)v494, v5, v495);
  v496 = (AuraEffectPosOverwriteMaster_o *)sub_1C2D6DC(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v496, 0);
  if ( v496 )
  {
    v3 = sub_1C2D5CC(v496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF5u )
    goto LABEL_1652;
  v1->m_Items[245] = (DataMasterBase_o *)v496;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[245], (int32_t)v496, v5, v497);
  v498 = (UserEventMissionFixMaster_o *)sub_1C2D6DC(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v498, 0);
  if ( v498 )
  {
    v3 = sub_1C2D5CC(v498, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF6u )
    goto LABEL_1652;
  v1->m_Items[246] = (DataMasterBase_o *)v498;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[246], (int32_t)v498, v5, v499);
  v500 = (NotEndEventMissionFixMaster_o *)sub_1C2D6DC(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v500, 0);
  if ( v500 )
  {
    v3 = sub_1C2D5CC(v500, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF7u )
    goto LABEL_1652;
  v1->m_Items[247] = (DataMasterBase_o *)v500;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[247], (int32_t)v500, v5, v501);
  v502 = (EnemyMstMaster_o *)sub_1C2D6DC(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v502, 0);
  if ( v502 )
  {
    v3 = sub_1C2D5CC(v502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF8u )
    goto LABEL_1652;
  v1->m_Items[248] = (DataMasterBase_o *)v502;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[248], (int32_t)v502, v5, v503);
  v504 = (EnemyMstBattleMaster_o *)sub_1C2D6DC(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v504, 0);
  if ( v504 )
  {
    v3 = sub_1C2D5CC(v504, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xF9u )
    goto LABEL_1652;
  v1->m_Items[249] = (DataMasterBase_o *)v504;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[249], (int32_t)v504, v5, v505);
  v506 = (ServantSkillReleaseMaster_o *)sub_1C2D6DC(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v506, 0);
  if ( v506 )
  {
    v3 = sub_1C2D5CC(v506, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFAu )
    goto LABEL_1652;
  v1->m_Items[250] = (DataMasterBase_o *)v506;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[250], (int32_t)v506, v5, v507);
  v508 = (ServantPassiveSkillReleaseMaster_o *)sub_1C2D6DC(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v508, 0);
  if ( v508 )
  {
    v3 = sub_1C2D5CC(v508, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFBu )
    goto LABEL_1652;
  v1->m_Items[251] = (DataMasterBase_o *)v508;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[251], (int32_t)v508, v5, v509);
  v510 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C2D6DC(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v510, 0);
  if ( v510 )
  {
    v3 = sub_1C2D5CC(v510, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFCu )
    goto LABEL_1652;
  v1->m_Items[252] = (DataMasterBase_o *)v510;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[252], (int32_t)v510, v5, v511);
  v512 = (MapGimmickReleaseMaster_o *)sub_1C2D6DC(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v512, 0);
  if ( v512 )
  {
    v3 = sub_1C2D5CC(v512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFDu )
    goto LABEL_1652;
  v1->m_Items[253] = (DataMasterBase_o *)v512;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[253], (int32_t)v512, v5, v513);
  v514 = (CommandCodeMaster_o *)sub_1C2D6DC(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v514, 0);
  if ( v514 )
  {
    v3 = sub_1C2D5CC(v514, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFEu )
    goto LABEL_1652;
  v1->m_Items[254] = (DataMasterBase_o *)v514;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[254], (int32_t)v514, v5, v515);
  v516 = (ServantCommandCodeUnlockMaster_o *)sub_1C2D6DC(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v516, 0);
  if ( v516 )
  {
    v3 = sub_1C2D5CC(v516, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0xFFu )
    goto LABEL_1652;
  v1->m_Items[255] = (DataMasterBase_o *)v516;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[255], (int32_t)v516, v5, v517);
  v518 = (UserCommandCodeMaster_o *)sub_1C2D6DC(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v518, 0);
  if ( v518 )
  {
    v3 = sub_1C2D5CC(v518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x100u )
    goto LABEL_1652;
  v1->m_Items[256] = (DataMasterBase_o *)v518;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[256], (int32_t)v518, v5, v519);
  v520 = (UserCommandCodeCollectionMaster_o *)sub_1C2D6DC(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v520, 0);
  if ( v520 )
  {
    v3 = sub_1C2D5CC(v520, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x101u )
    goto LABEL_1652;
  v1->m_Items[257] = (DataMasterBase_o *)v520;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[257], (int32_t)v520, v5, v521);
  v522 = (UserServantCommandCodeMaster_o *)sub_1C2D6DC(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v522, 0);
  if ( v522 )
  {
    v3 = sub_1C2D5CC(v522, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x102u )
    goto LABEL_1652;
  v1->m_Items[258] = (DataMasterBase_o *)v522;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[258], (int32_t)v522, v5, v523);
  v524 = (UserServantCommandCardMaster_o *)sub_1C2D6DC(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v524, 0);
  if ( v524 )
  {
    v3 = sub_1C2D5CC(v524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x103u )
    goto LABEL_1652;
  v1->m_Items[259] = (DataMasterBase_o *)v524;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[259], (int32_t)v524, v5, v525);
  v526 = (CommandCardRankParamMaster_o *)sub_1C2D6DC(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v526, 0);
  if ( v526 )
  {
    v3 = sub_1C2D5CC(v526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x104u )
    goto LABEL_1652;
  v1->m_Items[260] = (DataMasterBase_o *)v526;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[260], (int32_t)v526, v5, v527);
  v528 = (CommandCodeSkillMaster_o *)sub_1C2D6DC(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v528, 0);
  if ( v528 )
  {
    v3 = sub_1C2D5CC(v528, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x105u )
    goto LABEL_1652;
  v1->m_Items[261] = (DataMasterBase_o *)v528;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[261], (int32_t)v528, v5, v529);
  v530 = (CommandCodeSkillReleaseMaster_o *)sub_1C2D6DC(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v530, 0);
  if ( v530 )
  {
    v3 = sub_1C2D5CC(v530, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x106u )
    goto LABEL_1652;
  v1->m_Items[262] = (DataMasterBase_o *)v530;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[262], (int32_t)v530, v5, v531);
  v532 = (CommandCodeCommentMaster_o *)sub_1C2D6DC(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v532, 0);
  if ( v532 )
  {
    v3 = sub_1C2D5CC(v532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x107u )
    goto LABEL_1652;
  v1->m_Items[263] = (DataMasterBase_o *)v532;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[263], (int32_t)v532, v5, v533);
  v534 = (EventStatusMaster_o *)sub_1C2D6DC(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v534, 0);
  if ( v534 )
  {
    v3 = sub_1C2D5CC(v534, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x108u )
    goto LABEL_1652;
  v1->m_Items[264] = (DataMasterBase_o *)v534;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[264], (int32_t)v534, v5, v535);
  v536 = (EventStatusQuestMaster_o *)sub_1C2D6DC(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v536, 0);
  if ( v536 )
  {
    v3 = sub_1C2D5CC(v536, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x109u )
    goto LABEL_1652;
  v1->m_Items[265] = (DataMasterBase_o *)v536;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[265], (int32_t)v536, v5, v537);
  v538 = (CommonRestrictionMaster_o *)sub_1C2D6DC(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v538, 0);
  if ( v538 )
  {
    v3 = sub_1C2D5CC(v538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Au )
    goto LABEL_1652;
  v1->m_Items[266] = (DataMasterBase_o *)v538;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[266], (int32_t)v538, v5, v539);
  v540 = (EventPointBuffMaster_o *)sub_1C2D6DC(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v540, 0);
  if ( v540 )
  {
    v3 = sub_1C2D5CC(v540, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Bu )
    goto LABEL_1652;
  v1->m_Items[267] = (DataMasterBase_o *)v540;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[267], (int32_t)v540, v5, v541);
  v542 = (UserFollowMaster_o *)sub_1C2D6DC(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v542, 0);
  if ( v542 )
  {
    v3 = sub_1C2D5CC(v542, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Cu )
    goto LABEL_1652;
  v1->m_Items[268] = (DataMasterBase_o *)v542;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[268], (int32_t)v542, v5, v543);
  v544 = (EventRewardGuideReleaseMaster_o *)sub_1C2D6DC(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v544, 0);
  if ( v544 )
  {
    v3 = sub_1C2D5CC(v544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Du )
    goto LABEL_1652;
  v1->m_Items[269] = (DataMasterBase_o *)v544;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[269], (int32_t)v544, v5, v545);
  v546 = (NpcServantEquipMaster_o *)sub_1C2D6DC(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v546, 0);
  if ( v546 )
  {
    v3 = sub_1C2D5CC(v546, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Eu )
    goto LABEL_1652;
  v1->m_Items[270] = (DataMasterBase_o *)v546;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[270], (int32_t)v546, v5, v547);
  v548 = (EventCampaignReleaseMaster_o *)sub_1C2D6DC(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v548, 0);
  if ( v548 )
  {
    v3 = sub_1C2D5CC(v548, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Fu )
    goto LABEL_1652;
  v1->m_Items[271] = (DataMasterBase_o *)v548;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[271], (int32_t)v548, v5, v549);
  v550 = (ServantMaterialFolderMaster_o *)sub_1C2D6DC(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v550, 0);
  if ( v550 )
  {
    v3 = sub_1C2D5CC(v550, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x110u )
    goto LABEL_1652;
  v1->m_Items[272] = (DataMasterBase_o *)v550;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[272], (int32_t)v550, v5, v551);
  v552 = (EventEquipSkillReleaseMaster_o *)sub_1C2D6DC(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v552, 0);
  if ( v552 )
  {
    v3 = sub_1C2D5CC(v552, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x111u )
    goto LABEL_1652;
  v1->m_Items[273] = (DataMasterBase_o *)v552;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[273], (int32_t)v552, v5, v553);
  v554 = (EventPointActivityMaster_o *)sub_1C2D6DC(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v554, 0);
  if ( v554 )
  {
    v3 = sub_1C2D5CC(v554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x112u )
    goto LABEL_1652;
  v1->m_Items[274] = (DataMasterBase_o *)v554;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[274], (int32_t)v554, v5, v555);
  v556 = (FunctionCategoryMaster_o *)sub_1C2D6DC(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v556, 0);
  if ( v556 )
  {
    v3 = sub_1C2D5CC(v556, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x113u )
    goto LABEL_1652;
  v1->m_Items[275] = (DataMasterBase_o *)v556;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[275], (int32_t)v556, v5, v557);
  v558 = (QuestPickupMaster_o *)sub_1C2D6DC(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v558, 0);
  if ( v558 )
  {
    v3 = sub_1C2D5CC(v558, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x114u )
    goto LABEL_1652;
  v1->m_Items[276] = (DataMasterBase_o *)v558;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[276], (int32_t)v558, v5, v559);
  v560 = (EventUiMaster_o *)sub_1C2D6DC(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v560, 0);
  if ( v560 )
  {
    v3 = sub_1C2D5CC(v560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x115u )
    goto LABEL_1652;
  v1->m_Items[277] = (DataMasterBase_o *)v560;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[277], (int32_t)v560, v5, v561);
  v562 = (EventUiReleaseMaster_o *)sub_1C2D6DC(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v562, 0);
  if ( v562 )
  {
    v3 = sub_1C2D5CC(v562, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x116u )
    goto LABEL_1652;
  v1->m_Items[278] = (DataMasterBase_o *)v562;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[278], (int32_t)v562, v5, v563);
  v564 = (EventUiValueMaster_o *)sub_1C2D6DC(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v564, 0);
  if ( v564 )
  {
    v3 = sub_1C2D5CC(v564, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x117u )
    goto LABEL_1652;
  v1->m_Items[279] = (DataMasterBase_o *)v564;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[279], (int32_t)v564, v5, v565);
  v566 = (EventConquestRewardMaster_o *)sub_1C2D6DC(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v566, 0);
  if ( v566 )
  {
    v3 = sub_1C2D5CC(v566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x118u )
    goto LABEL_1652;
  v1->m_Items[280] = (DataMasterBase_o *)v566;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[280], (int32_t)v566, v5, v567);
  v568 = (NpcFollowerReleaseMaster_o *)sub_1C2D6DC(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v568, 0);
  if ( v568 )
  {
    v3 = sub_1C2D5CC(v568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x119u )
    goto LABEL_1652;
  v1->m_Items[281] = (DataMasterBase_o *)v568;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[281], (int32_t)v568, v5, v569);
  v570 = (EventBonusFilterMaster_o *)sub_1C2D6DC(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v570, 0);
  if ( v570 )
  {
    v3 = sub_1C2D5CC(v570, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Au )
    goto LABEL_1652;
  v1->m_Items[282] = (DataMasterBase_o *)v570;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[282], (int32_t)v570, v5, v571);
  v572 = (EventBonusFilterGroupInfoMaster_o *)sub_1C2D6DC(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v572, 0);
  if ( v572 )
  {
    v3 = sub_1C2D5CC(v572, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Bu )
    goto LABEL_1652;
  v1->m_Items[283] = (DataMasterBase_o *)v572;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[283], (int32_t)v572, v5, v573);
  v574 = (EventBonusFilterGroupMemberMaster_o *)sub_1C2D6DC(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v574, 0);
  if ( v574 )
  {
    v3 = sub_1C2D5CC(v574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Cu )
    goto LABEL_1652;
  v1->m_Items[284] = (DataMasterBase_o *)v574;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[284], (int32_t)v574, v5, v575);
  v576 = (UserGachaExtraCountMaster_o *)sub_1C2D6DC(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v576, 0);
  if ( v576 )
  {
    v3 = sub_1C2D5CC(v576, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Du )
    goto LABEL_1652;
  v1->m_Items[285] = (DataMasterBase_o *)v576;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[285], (int32_t)v576, v5, v577);
  v578 = (PrivilegeMaster_o *)sub_1C2D6DC(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v578, 0);
  if ( v578 )
  {
    v3 = sub_1C2D5CC(v578, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Eu )
    goto LABEL_1652;
  v1->m_Items[286] = (DataMasterBase_o *)v578;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[286], (int32_t)v578, v5, v579);
  v580 = (UserPrivilegeMaster_o *)sub_1C2D6DC(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v580, 0);
  if ( v580 )
  {
    v3 = sub_1C2D5CC(v580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Fu )
    goto LABEL_1652;
  v1->m_Items[287] = (DataMasterBase_o *)v580;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[287], (int32_t)v580, v5, v581);
  v582 = (UserQuestRouteMaster_o *)sub_1C2D6DC(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v582, 0);
  if ( v582 )
  {
    v3 = sub_1C2D5CC(v582, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x120u )
    goto LABEL_1652;
  v1->m_Items[288] = (DataMasterBase_o *)v582;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[288], (int32_t)v582, v5, v583);
  v584 = (EventBossStatusUiMaster_o *)sub_1C2D6DC(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v584, 0);
  if ( v584 )
  {
    v3 = sub_1C2D5CC(v584, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x121u )
    goto LABEL_1652;
  v1->m_Items[289] = (DataMasterBase_o *)v584;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[289], (int32_t)v584, v5, v585);
  v586 = (CommonReleaseMaster_o *)sub_1C2D6DC(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v586, 0);
  if ( v586 )
  {
    v3 = sub_1C2D5CC(v586, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x122u )
    goto LABEL_1652;
  v1->m_Items[290] = (DataMasterBase_o *)v586;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[290], (int32_t)v586, v5, v587);
  v588 = (QuestSpotReleaseMaster_o *)sub_1C2D6DC(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v588, 0);
  if ( v588 )
  {
    v3 = sub_1C2D5CC(v588, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x123u )
    goto LABEL_1652;
  v1->m_Items[291] = (DataMasterBase_o *)v588;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[291], (int32_t)v588, v5, v589);
  v590 = (VoiceMaterialCondMaster_o *)sub_1C2D6DC(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v590, 0);
  if ( v590 )
  {
    v3 = sub_1C2D5CC(v590, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x124u )
    goto LABEL_1652;
  v1->m_Items[292] = (DataMasterBase_o *)v590;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[292], (int32_t)v590, v5, v591);
  v592 = (ClassRelationOverwriteMaster_o *)sub_1C2D6DC(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v592, 0);
  if ( v592 )
  {
    v3 = sub_1C2D5CC(v592, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x125u )
    goto LABEL_1652;
  v1->m_Items[293] = (DataMasterBase_o *)v592;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[293], (int32_t)v592, v5, v593);
  v594 = (EventGroupMaster_o *)sub_1C2D6DC(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v594, 0);
  if ( v594 )
  {
    v3 = sub_1C2D5CC(v594, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x126u )
    goto LABEL_1652;
  v1->m_Items[294] = (DataMasterBase_o *)v594;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[294], (int32_t)v594, v5, v595);
  v596 = (TotalBoxGachaMaster_o *)sub_1C2D6DC(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v596, 0);
  if ( v596 )
  {
    v3 = sub_1C2D5CC(v596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x127u )
    goto LABEL_1652;
  v1->m_Items[295] = (DataMasterBase_o *)v596;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[295], (int32_t)v596, v5, v597);
  v598 = (ServantTreasureDeviceDamageMaster_o *)sub_1C2D6DC(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v598, 0);
  if ( v598 )
  {
    v3 = sub_1C2D5CC(v598, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x128u )
    goto LABEL_1652;
  v1->m_Items[296] = (DataMasterBase_o *)v598;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[296], (int32_t)v598, v5, v599);
  v600 = (UserEventServantFatigueMaster_o *)sub_1C2D6DC(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v600, 0);
  if ( v600 )
  {
    v3 = sub_1C2D5CC(v600, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x129u )
    goto LABEL_1652;
  v1->m_Items[297] = (DataMasterBase_o *)v600;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[297], (int32_t)v600, v5, v601);
  v602 = (EventRewardBgMaster_o *)sub_1C2D6DC(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v602, 0);
  if ( v602 )
  {
    v3 = sub_1C2D5CC(v602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Au )
    goto LABEL_1652;
  v1->m_Items[298] = (DataMasterBase_o *)v602;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[298], (int32_t)v602, v5, v603);
  v604 = (EventFatigueRecoveryMaster_o *)sub_1C2D6DC(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v604, 0);
  if ( v604 )
  {
    v3 = sub_1C2D5CC(v604, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Bu )
    goto LABEL_1652;
  v1->m_Items[299] = (DataMasterBase_o *)v604;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[299], (int32_t)v604, v5, v605);
  v606 = (EventBoostItemUsedMaster_o *)sub_1C2D6DC(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v606, 0);
  if ( v606 )
  {
    v3 = sub_1C2D5CC(v606, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Cu )
    goto LABEL_1652;
  v1->m_Items[300] = (DataMasterBase_o *)v606;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[300], (int32_t)v606, v5, v607);
  v608 = (StatusEffectPosOverwriteMaster_o *)sub_1C2D6DC(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v608, 0);
  if ( v608 )
  {
    v3 = sub_1C2D5CC(v608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Du )
    goto LABEL_1652;
  v1->m_Items[301] = (DataMasterBase_o *)v608;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[301], (int32_t)v608, v5, v609);
  v610 = (QuestPhaseDetailAddMaster_o *)sub_1C2D6DC(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v610, 0);
  if ( v610 )
  {
    v3 = sub_1C2D5CC(v610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Eu )
    goto LABEL_1652;
  v1->m_Items[302] = (DataMasterBase_o *)v610;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[302], (int32_t)v610, v5, v611);
  v612 = (VoiceClosedMessageMaster_o *)sub_1C2D6DC(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v612, 0);
  if ( v612 )
  {
    v3 = sub_1C2D5CC(v612, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Fu )
    goto LABEL_1652;
  v1->m_Items[303] = (DataMasterBase_o *)v612;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[303], (int32_t)v612, v5, v613);
  v614 = (ReprintStageMaster_o *)sub_1C2D6DC(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v614, 0);
  if ( v614 )
  {
    v3 = sub_1C2D5CC(v614, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x130u )
    goto LABEL_1652;
  v1->m_Items[304] = (DataMasterBase_o *)v614;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[304], (int32_t)v614, v5, v615);
  v616 = (UserCombineExpMaster_o *)sub_1C2D6DC(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v616, 0);
  if ( v616 )
  {
    v3 = sub_1C2D5CC(v616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x131u )
    goto LABEL_1652;
  v1->m_Items[305] = (DataMasterBase_o *)v616;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[305], (int32_t)v616, v5, v617);
  v618 = (EventBoardGameCellMaster_o *)sub_1C2D6DC(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v618, 0);
  if ( v618 )
  {
    v3 = sub_1C2D5CC(v618, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x132u )
    goto LABEL_1652;
  v1->m_Items[306] = (DataMasterBase_o *)v618;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[306], (int32_t)v618, v5, v619);
  v620 = (EventBoardGameTokenMaster_o *)sub_1C2D6DC(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v620, 0);
  if ( v620 )
  {
    v3 = sub_1C2D5CC(v620, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x133u )
    goto LABEL_1652;
  v1->m_Items[307] = (DataMasterBase_o *)v620;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[307], (int32_t)v620, v5, v621);
  v622 = (EventBoardGameTokenRewardMaster_o *)sub_1C2D6DC(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v622, 0);
  if ( v622 )
  {
    v3 = sub_1C2D5CC(v622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x134u )
    goto LABEL_1652;
  v1->m_Items[308] = (DataMasterBase_o *)v622;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[308], (int32_t)v622, v5, v623);
  v624 = (UserEventBoardGameTokenMaster_o *)sub_1C2D6DC(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v624, 0);
  if ( v624 )
  {
    v3 = sub_1C2D5CC(v624, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x135u )
    goto LABEL_1652;
  v1->m_Items[309] = (DataMasterBase_o *)v624;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[309], (int32_t)v624, v5, v625);
  v626 = (ServantAnimationOverwriteMaster_o *)sub_1C2D6DC(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v626, 0);
  if ( v626 )
  {
    v3 = sub_1C2D5CC(v626, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x136u )
    goto LABEL_1652;
  v1->m_Items[310] = (DataMasterBase_o *)v626;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[310], (int32_t)v626, v5, v627);
  v628 = (OpeningMovieMaster_o *)sub_1C2D6DC(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v628, 0);
  if ( v628 )
  {
    v3 = sub_1C2D5CC(v628, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x137u )
    goto LABEL_1652;
  v1->m_Items[311] = (DataMasterBase_o *)v628;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[311], (int32_t)v628, v5, v629);
  v630 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C2D6DC(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v630, 0);
  if ( v630 )
  {
    v3 = sub_1C2D5CC(v630, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x138u )
    goto LABEL_1652;
  v1->m_Items[312] = (DataMasterBase_o *)v630;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[312], (int32_t)v630, v5, v631);
  v632 = (PickupUserFollowerMaster_o *)sub_1C2D6DC(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v632, 0);
  if ( v632 )
  {
    v3 = sub_1C2D5CC(v632, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x139u )
    goto LABEL_1652;
  v1->m_Items[313] = (DataMasterBase_o *)v632;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[313], (int32_t)v632, v5, v633);
  v634 = (ServantCollectionMaster_o *)sub_1C2D6DC(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v634, 0);
  if ( v634 )
  {
    v3 = sub_1C2D5CC(v634, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Au )
    goto LABEL_1652;
  v1->m_Items[314] = (DataMasterBase_o *)v634;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[314], (int32_t)v634, v5, v635);
  v636 = (GachaBehaviorMaster_o *)sub_1C2D6DC(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v636, 0);
  if ( v636 )
  {
    v3 = sub_1C2D5CC(v636, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Bu )
    goto LABEL_1652;
  v1->m_Items[315] = (DataMasterBase_o *)v636;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[315], (int32_t)v636, v5, v637);
  v638 = (EventQuestCooltimeMaster_o *)sub_1C2D6DC(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v638, 0);
  if ( v638 )
  {
    v3 = sub_1C2D5CC(v638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Cu )
    goto LABEL_1652;
  v1->m_Items[316] = (DataMasterBase_o *)v638;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[316], (int32_t)v638, v5, v639);
  v640 = (UserEventQuestCooltimeMaster_o *)sub_1C2D6DC(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v640, 0);
  if ( v640 )
  {
    v3 = sub_1C2D5CC(v640, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Du )
    goto LABEL_1652;
  v1->m_Items[317] = (DataMasterBase_o *)v640;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[317], (int32_t)v640, v5, v641);
  v642 = (BoostMaster_o *)sub_1C2D6DC(BoostMaster_TypeInfo);
  BoostMaster___ctor(v642, 0);
  if ( v642 )
  {
    v3 = sub_1C2D5CC(v642, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Eu )
    goto LABEL_1652;
  v1->m_Items[318] = (DataMasterBase_o *)v642;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[318], (int32_t)v642, v5, v643);
  v644 = (WarBoardMaster_o *)sub_1C2D6DC(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v644, 0);
  if ( v644 )
  {
    v3 = sub_1C2D5CC(v644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Fu )
    goto LABEL_1652;
  v1->m_Items[319] = (DataMasterBase_o *)v644;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[319], (int32_t)v644, v5, v645);
  v646 = (WarBoardSquareMaster_o *)sub_1C2D6DC(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v646, 0);
  if ( v646 )
  {
    v3 = sub_1C2D5CC(v646, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x140u )
    goto LABEL_1652;
  v1->m_Items[320] = (DataMasterBase_o *)v646;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[320], (int32_t)v646, v5, v647);
  v648 = (WarBoardRoadMaster_o *)sub_1C2D6DC(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v648, 0);
  if ( v648 )
  {
    v3 = sub_1C2D5CC(v648, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x141u )
    goto LABEL_1652;
  v1->m_Items[321] = (DataMasterBase_o *)v648;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[321], (int32_t)v648, v5, v649);
  v650 = (WarBoardStageMaster_o *)sub_1C2D6DC(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v650, 0);
  if ( v650 )
  {
    v3 = sub_1C2D5CC(v650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x142u )
    goto LABEL_1652;
  v1->m_Items[322] = (DataMasterBase_o *)v650;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[322], (int32_t)v650, v5, v651);
  v652 = (WarBoardActionPointMaster_o *)sub_1C2D6DC(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v652, 0);
  if ( v652 )
  {
    v3 = sub_1C2D5CC(v652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x143u )
    goto LABEL_1652;
  v1->m_Items[323] = (DataMasterBase_o *)v652;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[323], (int32_t)v652, v5, v653);
  v654 = (WarBoardActionTrendMaster_o *)sub_1C2D6DC(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v654, 0);
  if ( v654 )
  {
    v3 = sub_1C2D5CC(v654, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x144u )
    goto LABEL_1652;
  v1->m_Items[324] = (DataMasterBase_o *)v654;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[324], (int32_t)v654, v5, v655);
  v656 = (WarBoardTacticalTrendMaster_o *)sub_1C2D6DC(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v656, 0);
  if ( v656 )
  {
    v3 = sub_1C2D5CC(v656, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x145u )
    goto LABEL_1652;
  v1->m_Items[325] = (DataMasterBase_o *)v656;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[325], (int32_t)v656, v5, v657);
  v658 = (WarBoardStageLayoutMaster_o *)sub_1C2D6DC(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v658, 0);
  if ( v658 )
  {
    v3 = sub_1C2D5CC(v658, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x146u )
    goto LABEL_1652;
  v1->m_Items[326] = (DataMasterBase_o *)v658;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[326], (int32_t)v658, v5, v659);
  v660 = (WarBoardStageNpcMaster_o *)sub_1C2D6DC(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v660, 0);
  if ( v660 )
  {
    v3 = sub_1C2D5CC(v660, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x147u )
    goto LABEL_1652;
  v1->m_Items[327] = (DataMasterBase_o *)v660;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[327], (int32_t)v660, v5, v661);
  v662 = (WarBoardStageWallMaster_o *)sub_1C2D6DC(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v662, 0);
  if ( v662 )
  {
    v3 = sub_1C2D5CC(v662, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x148u )
    goto LABEL_1652;
  v1->m_Items[328] = (DataMasterBase_o *)v662;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[328], (int32_t)v662, v5, v663);
  v664 = (WarBoardAIMaster_o *)sub_1C2D6DC(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v664, 0);
  if ( v664 )
  {
    v3 = sub_1C2D5CC(v664, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x149u )
    goto LABEL_1652;
  v1->m_Items[329] = (DataMasterBase_o *)v664;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[329], (int32_t)v664, v5, v665);
  v666 = (WarBoardRatingBaseMaster_o *)sub_1C2D6DC(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v666, 0);
  if ( v666 )
  {
    v3 = sub_1C2D5CC(v666, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Au )
    goto LABEL_1652;
  v1->m_Items[330] = (DataMasterBase_o *)v666;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[330], (int32_t)v666, v5, v667);
  v668 = (WarBoardRatingOffsetMaster_o *)sub_1C2D6DC(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v668, 0);
  if ( v668 )
  {
    v3 = sub_1C2D5CC(v668, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Bu )
    goto LABEL_1652;
  v1->m_Items[331] = (DataMasterBase_o *)v668;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[331], (int32_t)v668, v5, v669);
  v670 = (WarBoardItemMaster_o *)sub_1C2D6DC(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v670, 0);
  if ( v670 )
  {
    v3 = sub_1C2D5CC(v670, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Cu )
    goto LABEL_1652;
  v1->m_Items[332] = (DataMasterBase_o *)v670;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[332], (int32_t)v670, v5, v671);
  v672 = (WarBoardTreasureMaster_o *)sub_1C2D6DC(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v672, 0);
  if ( v672 )
  {
    v3 = sub_1C2D5CC(v672, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Du )
    goto LABEL_1652;
  v1->m_Items[333] = (DataMasterBase_o *)v672;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[333], (int32_t)v672, v5, v673);
  v674 = (WarBoardQuestMaster_o *)sub_1C2D6DC(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v674, 0);
  if ( v674 )
  {
    v3 = sub_1C2D5CC(v674, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Eu )
    goto LABEL_1652;
  v1->m_Items[334] = (DataMasterBase_o *)v674;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[334], (int32_t)v674, v5, v675);
  v676 = (WarBoardDataMaster_o *)sub_1C2D6DC(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v676, 0);
  if ( v676 )
  {
    v3 = sub_1C2D5CC(v676, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Fu )
    goto LABEL_1652;
  v1->m_Items[335] = (DataMasterBase_o *)v676;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[335], (int32_t)v676, v5, v677);
  v678 = (WarBoardIndividualityClassMaster_o *)sub_1C2D6DC(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v678, 0);
  if ( v678 )
  {
    v3 = sub_1C2D5CC(v678, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x150u )
    goto LABEL_1652;
  v1->m_Items[336] = (DataMasterBase_o *)v678;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[336], (int32_t)v678, v5, v679);
  v680 = (WarBoardActionTrendConditionMaster_o *)sub_1C2D6DC(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v680, 0);
  if ( v680 )
  {
    v3 = sub_1C2D5CC(v680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x151u )
    goto LABEL_1652;
  v1->m_Items[337] = (DataMasterBase_o *)v680;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[337], (int32_t)v680, v5, v681);
  v682 = (WarBoardActionPointClassMaster_o *)sub_1C2D6DC(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v682, 0);
  if ( v682 )
  {
    v3 = sub_1C2D5CC(v682, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x152u )
    goto LABEL_1652;
  v1->m_Items[338] = (DataMasterBase_o *)v682;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[338], (int32_t)v682, v5, v683);
  v684 = (EventPanelMapMaster_o *)sub_1C2D6DC(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v684, 0);
  if ( v684 )
  {
    v3 = sub_1C2D5CC(v684, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x153u )
    goto LABEL_1652;
  v1->m_Items[339] = (DataMasterBase_o *)v684;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[339], (int32_t)v684, v5, v685);
  v686 = (EventPanelMapDetailMaster_o *)sub_1C2D6DC(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v686, 0);
  if ( v686 )
  {
    v3 = sub_1C2D5CC(v686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x154u )
    goto LABEL_1652;
  v1->m_Items[340] = (DataMasterBase_o *)v686;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[340], (int32_t)v686, v5, v687);
  v688 = (EventPanelSpotMaster_o *)sub_1C2D6DC(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v688, 0);
  if ( v688 )
  {
    v3 = sub_1C2D5CC(v688, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x155u )
    goto LABEL_1652;
  v1->m_Items[341] = (DataMasterBase_o *)v688;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[341], (int32_t)v688, v5, v689);
  v690 = (EventPanelScanMaster_o *)sub_1C2D6DC(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v690, 0);
  if ( v690 )
  {
    v3 = sub_1C2D5CC(v690, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x156u )
    goto LABEL_1652;
  v1->m_Items[342] = (DataMasterBase_o *)v690;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[342], (int32_t)v690, v5, v691);
  v692 = (CommonConsumeMaster_o *)sub_1C2D6DC(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v692, 0);
  if ( v692 )
  {
    v3 = sub_1C2D5CC(v692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x157u )
    goto LABEL_1652;
  v1->m_Items[343] = (DataMasterBase_o *)v692;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[343], (int32_t)v692, v5, v693);
  v694 = (UserEventMapMaster_o *)sub_1C2D6DC(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v694, 0);
  if ( v694 )
  {
    v3 = sub_1C2D5CC(v694, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x158u )
    goto LABEL_1652;
  v1->m_Items[344] = (DataMasterBase_o *)v694;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[344], (int32_t)v694, v5, v695);
  v696 = (UserEventSpotMaster_o *)sub_1C2D6DC(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v696, 0);
  if ( v696 )
  {
    v3 = sub_1C2D5CC(v696, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x159u )
    goto LABEL_1652;
  v1->m_Items[345] = (DataMasterBase_o *)v696;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[345], (int32_t)v696, v5, v697);
  v698 = (WarGroupMaster_o *)sub_1C2D6DC(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v698, 0);
  if ( v698 )
  {
    v3 = sub_1C2D5CC(v698, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Au )
    goto LABEL_1652;
  v1->m_Items[346] = (DataMasterBase_o *)v698;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[346], (int32_t)v698, v5, v699);
  v700 = (ServantLimitImageMaster_o *)sub_1C2D6DC(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v700, 0);
  if ( v700 )
  {
    v3 = sub_1C2D5CC(v700, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Bu )
    goto LABEL_1652;
  v1->m_Items[347] = (DataMasterBase_o *)v700;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[347], (int32_t)v700, v5, v701);
  v702 = (FriendshipQuestDialogInfoMaster_o *)sub_1C2D6DC(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v702, 0);
  if ( v702 )
  {
    v3 = sub_1C2D5CC(v702, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Cu )
    goto LABEL_1652;
  v1->m_Items[348] = (DataMasterBase_o *)v702;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[348], (int32_t)v702, v5, v703);
  v704 = (QuestRestrictionInfoMaster_o *)sub_1C2D6DC(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v704, 0);
  if ( v704 )
  {
    v3 = sub_1C2D5CC(v704, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Du )
    goto LABEL_1652;
  v1->m_Items[349] = (DataMasterBase_o *)v704;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[349], (int32_t)v704, v5, v705);
  v706 = (AssistMaster_o *)sub_1C2D6DC(AssistMaster_TypeInfo);
  AssistMaster___ctor(v706, 0);
  if ( v706 )
  {
    v3 = sub_1C2D5CC(v706, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Eu )
    goto LABEL_1652;
  v1->m_Items[350] = (DataMasterBase_o *)v706;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[350], (int32_t)v706, v5, v707);
  v708 = (WarBoardEffectMaster_o *)sub_1C2D6DC(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v708, 0);
  if ( v708 )
  {
    v3 = sub_1C2D5CC(v708, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Fu )
    goto LABEL_1652;
  v1->m_Items[351] = (DataMasterBase_o *)v708;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[351], (int32_t)v708, v5, v709);
  v710 = (WarBoardOnboardSkillMaster_o *)sub_1C2D6DC(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v710, 0);
  if ( v710 )
  {
    v3 = sub_1C2D5CC(v710, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x160u )
    goto LABEL_1652;
  v1->m_Items[352] = (DataMasterBase_o *)v710;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[352], (int32_t)v710, v5, v711);
  v712 = (BeforeBirthDayMaster_o *)sub_1C2D6DC(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v712, 0);
  if ( v712 )
  {
    v3 = sub_1C2D5CC(v712, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x161u )
    goto LABEL_1652;
  v1->m_Items[353] = (DataMasterBase_o *)v712;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[353], (int32_t)v712, v5, v713);
  v714 = (LoginQuestMaster_o *)sub_1C2D6DC(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v714, 0);
  if ( v714 )
  {
    v3 = sub_1C2D5CC(v714, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x162u )
    goto LABEL_1652;
  v1->m_Items[354] = (DataMasterBase_o *)v714;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[354], (int32_t)v714, v5, v715);
  v716 = (EventCombineCostumeMaster_o *)sub_1C2D6DC(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v716, 0);
  if ( v716 )
  {
    v3 = sub_1C2D5CC(v716, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x163u )
    goto LABEL_1652;
  v1->m_Items[355] = (DataMasterBase_o *)v716;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[355], (int32_t)v716, v5, v717);
  v718 = (WarBoardStagePieceDetailMaster_o *)sub_1C2D6DC(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v718, 0);
  if ( v718 )
  {
    v3 = sub_1C2D5CC(v718, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x164u )
    goto LABEL_1652;
  v1->m_Items[356] = (DataMasterBase_o *)v718;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[356], (int32_t)v718, v5, v719);
  v720 = (ServantTreasureDeviceAddMaster_o *)sub_1C2D6DC(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v720, 0);
  if ( v720 )
  {
    v3 = sub_1C2D5CC(v720, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x165u )
    goto LABEL_1652;
  v1->m_Items[357] = (DataMasterBase_o *)v720;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[357], (int32_t)v720, v5, v721);
  v722 = (SkillAddMaster_o *)sub_1C2D6DC(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v722, 0);
  if ( v722 )
  {
    v3 = sub_1C2D5CC(v722, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x166u )
    goto LABEL_1652;
  v1->m_Items[358] = (DataMasterBase_o *)v722;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[358], (int32_t)v722, v5, v723);
  v724 = (ServantLvDetailMaster_o *)sub_1C2D6DC(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v724, 0);
  if ( v724 )
  {
    v3 = sub_1C2D5CC(v724, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x167u )
    goto LABEL_1652;
  v1->m_Items[359] = (DataMasterBase_o *)v724;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[359], (int32_t)v724, v5, v725);
  v726 = (GachaAppendMaster_o *)sub_1C2D6DC(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v726, 0);
  if ( v726 )
  {
    v3 = sub_1C2D5CC(v726, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x168u )
    goto LABEL_1652;
  v1->m_Items[360] = (DataMasterBase_o *)v726;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[360], (int32_t)v726, v5, v727);
  v728 = (UserGachaDrawLogMaster_o *)sub_1C2D6DC(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v728, 0);
  if ( v728 )
  {
    v3 = sub_1C2D5CC(v728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x169u )
    goto LABEL_1652;
  v1->m_Items[361] = (DataMasterBase_o *)v728;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[361], (int32_t)v728, v5, v729);
  v730 = (ServantAppendPassiveSkillMaster_o *)sub_1C2D6DC(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v730, 0);
  if ( v730 )
  {
    v3 = sub_1C2D5CC(v730, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Au )
    goto LABEL_1652;
  v1->m_Items[362] = (DataMasterBase_o *)v730;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[362], (int32_t)v730, v5, v731);
  v732 = (UserServantAppendPassiveSkillMaster_o *)sub_1C2D6DC(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v732, 0);
  if ( v732 )
  {
    v3 = sub_1C2D5CC(v732, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Bu )
    goto LABEL_1652;
  v1->m_Items[363] = (DataMasterBase_o *)v732;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[363], (int32_t)v732, v5, v733);
  v734 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C2D6DC(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v734, 0);
  if ( v734 )
  {
    v3 = sub_1C2D5CC(v734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Cu )
    goto LABEL_1652;
  v1->m_Items[364] = (DataMasterBase_o *)v734;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[364], (int32_t)v734, v5, v735);
  v736 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C2D6DC(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v736, 0);
  if ( v736 )
  {
    v3 = sub_1C2D5CC(v736, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Du )
    goto LABEL_1652;
  v1->m_Items[365] = (DataMasterBase_o *)v736;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[365], (int32_t)v736, v5, v737);
  v738 = (CombineAppendPassiveSkillMaster_o *)sub_1C2D6DC(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v738, 0);
  if ( v738 )
  {
    v3 = sub_1C2D5CC(v738, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Eu )
    goto LABEL_1652;
  v1->m_Items[366] = (DataMasterBase_o *)v738;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[366], (int32_t)v738, v5, v739);
  v740 = (SvtCoinMaster_o *)sub_1C2D6DC(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v740, 0);
  if ( v740 )
  {
    v3 = sub_1C2D5CC(v740, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Fu )
    goto LABEL_1652;
  v1->m_Items[367] = (DataMasterBase_o *)v740;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[367], (int32_t)v740, v5, v741);
  v742 = (UserSvtCoinMaster_o *)sub_1C2D6DC(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v742, 0);
  if ( v742 )
  {
    v3 = sub_1C2D5CC(v742, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x170u )
    goto LABEL_1652;
  v1->m_Items[368] = (DataMasterBase_o *)v742;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[368], (int32_t)v742, v5, v743);
  v744 = (ServantAddMaster_o *)sub_1C2D6DC(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v744, 0);
  if ( v744 )
  {
    v3 = sub_1C2D5CC(v744, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x171u )
    goto LABEL_1652;
  v1->m_Items[369] = (DataMasterBase_o *)v744;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[369], (int32_t)v744, v5, v745);
  v746 = (TreasureBoxMaster_o *)sub_1C2D6DC(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v746, 0);
  if ( v746 )
  {
    v3 = sub_1C2D5CC(v746, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x172u )
    goto LABEL_1652;
  v1->m_Items[370] = (DataMasterBase_o *)v746;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[370], (int32_t)v746, v5, v747);
  v748 = (TreasureBoxGiftMaster_o *)sub_1C2D6DC(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v748, 0);
  if ( v748 )
  {
    v3 = sub_1C2D5CC(v748, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x173u )
    goto LABEL_1652;
  v1->m_Items[371] = (DataMasterBase_o *)v748;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[371], (int32_t)v748, v5, v749);
  v750 = (TreasureBoxTalkMaster_o *)sub_1C2D6DC(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v750, 0);
  if ( v750 )
  {
    v3 = sub_1C2D5CC(v750, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x174u )
    goto LABEL_1652;
  v1->m_Items[372] = (DataMasterBase_o *)v750;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[372], (int32_t)v750, v5, v751);
  v752 = (UserEventExpeditionMaster_o *)sub_1C2D6DC(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v752, 0);
  if ( v752 )
  {
    v3 = sub_1C2D5CC(v752, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x175u )
    goto LABEL_1652;
  v1->m_Items[373] = (DataMasterBase_o *)v752;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[373], (int32_t)v752, v5, v753);
  v754 = (EventExpeditionMaster_o *)sub_1C2D6DC(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v754, 0);
  if ( v754 )
  {
    v3 = sub_1C2D5CC(v754, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x176u )
    goto LABEL_1652;
  v1->m_Items[374] = (DataMasterBase_o *)v754;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[374], (int32_t)v754, v5, v755);
  v756 = (EventExpeditionPieceMaster_o *)sub_1C2D6DC(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v756, 0);
  if ( v756 )
  {
    v3 = sub_1C2D5CC(v756, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x177u )
    goto LABEL_1652;
  v1->m_Items[375] = (DataMasterBase_o *)v756;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[375], (int32_t)v756, v5, v757);
  v758 = (EventRecipeMaster_o *)sub_1C2D6DC(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v758, 0);
  if ( v758 )
  {
    v3 = sub_1C2D5CC(v758, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x178u )
    goto LABEL_1652;
  v1->m_Items[376] = (DataMasterBase_o *)v758;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[376], (int32_t)v758, v5, v759);
  v760 = (EventRecipeGiftMaster_o *)sub_1C2D6DC(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v760, 0);
  if ( v760 )
  {
    v3 = sub_1C2D5CC(v760, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x179u )
    goto LABEL_1652;
  v1->m_Items[377] = (DataMasterBase_o *)v760;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[377], (int32_t)v760, v5, v761);
  v762 = (UserEventFortificationMaster_o *)sub_1C2D6DC(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v762, 0);
  if ( v762 )
  {
    v3 = sub_1C2D5CC(v762, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Au )
    goto LABEL_1652;
  v1->m_Items[378] = (DataMasterBase_o *)v762;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[378], (int32_t)v762, v5, v763);
  v764 = (EventFortificationMaster_o *)sub_1C2D6DC(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v764, 0);
  if ( v764 )
  {
    v3 = sub_1C2D5CC(v764, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Bu )
    goto LABEL_1652;
  v1->m_Items[379] = (DataMasterBase_o *)v764;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[379], (int32_t)v764, v5, v765);
  v766 = (EventFortificationDetailMaster_o *)sub_1C2D6DC(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v766, 0);
  if ( v766 )
  {
    v3 = sub_1C2D5CC(v766, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Cu )
    goto LABEL_1652;
  v1->m_Items[380] = (DataMasterBase_o *)v766;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[380], (int32_t)v766, v5, v767);
  v768 = (EventFortificationSvtMaster_o *)sub_1C2D6DC(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v768, 0);
  if ( v768 )
  {
    v3 = sub_1C2D5CC(v768, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Du )
    goto LABEL_1652;
  v1->m_Items[381] = (DataMasterBase_o *)v768;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[381], (int32_t)v768, v5, v769);
  v770 = (UserServantVoicePlayedMaster_o *)sub_1C2D6DC(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v770, 0);
  if ( v770 )
  {
    v3 = sub_1C2D5CC(v770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Eu )
    goto LABEL_1652;
  v1->m_Items[382] = (DataMasterBase_o *)v770;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[382], (int32_t)v770, v5, v771);
  v772 = (UpdateProfileDialogInfoMaster_o *)sub_1C2D6DC(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v772, 0);
  if ( v772 )
  {
    v3 = sub_1C2D5CC(v772, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Fu )
    goto LABEL_1652;
  v1->m_Items[383] = (DataMasterBase_o *)v772;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[383], (int32_t)v772, v5, v773);
  v774 = (SvtMaterialTdMaster_o *)sub_1C2D6DC(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v774, 0);
  if ( v774 )
  {
    v3 = sub_1C2D5CC(v774, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x180u )
    goto LABEL_1652;
  v1->m_Items[384] = (DataMasterBase_o *)v774;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[384], (int32_t)v774, v5, v775);
  v776 = (BattleMasterImageMaster_o *)sub_1C2D6DC(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v776, 0);
  if ( v776 )
  {
    v3 = sub_1C2D5CC(v776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x181u )
    goto LABEL_1652;
  v1->m_Items[385] = (DataMasterBase_o *)v776;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[385], (int32_t)v776, v5, v777);
  v778 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C2D6DC(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v778, 0);
  if ( v778 )
  {
    v3 = sub_1C2D5CC(v778, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x182u )
    goto LABEL_1652;
  v1->m_Items[386] = (DataMasterBase_o *)v778;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[386], (int32_t)v778, v5, v779);
  v780 = (UserEventRandomMissionMaster_o *)sub_1C2D6DC(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v780, 0);
  if ( v780 )
  {
    v3 = sub_1C2D5CC(v780, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x183u )
    goto LABEL_1652;
  v1->m_Items[387] = (DataMasterBase_o *)v780;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[387], (int32_t)v780, v5, v781);
  v782 = (EventProgressValueMaster_o *)sub_1C2D6DC(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v782, 0);
  if ( v782 )
  {
    v3 = sub_1C2D5CC(v782, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x184u )
    goto LABEL_1652;
  v1->m_Items[388] = (DataMasterBase_o *)v782;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[388], (int32_t)v782, v5, v783);
  v784 = (SvtMultiPortraitMaster_o *)sub_1C2D6DC(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v784, 0);
  if ( v784 )
  {
    v3 = sub_1C2D5CC(v784, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x185u )
    goto LABEL_1652;
  v1->m_Items[389] = (DataMasterBase_o *)v784;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[389], (int32_t)v784, v5, v785);
  v786 = (EventRandomMissionMaster_o *)sub_1C2D6DC(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v786, 0);
  if ( v786 )
  {
    v3 = sub_1C2D5CC(v786, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x186u )
    goto LABEL_1652;
  v1->m_Items[390] = (DataMasterBase_o *)v786;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[390], (int32_t)v786, v5, v787);
  v788 = (UserGachaHistoryMaster_o *)sub_1C2D6DC(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v788, 0);
  if ( v788 )
  {
    v3 = sub_1C2D5CC(v788, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x187u )
    goto LABEL_1652;
  v1->m_Items[391] = (DataMasterBase_o *)v788;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[391], (int32_t)v788, v5, v789);
  v790 = (UserCoinRoomMaster_o *)sub_1C2D6DC(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v790, 0);
  if ( v790 )
  {
    v3 = sub_1C2D5CC(v790, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x188u )
    goto LABEL_1652;
  v1->m_Items[392] = (DataMasterBase_o *)v790;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[392], (int32_t)v790, v5, v791);
  v792 = (EventBuddyPointMaster_o *)sub_1C2D6DC(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v792, 0);
  if ( v792 )
  {
    v3 = sub_1C2D5CC(v792, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x189u )
    goto LABEL_1652;
  v1->m_Items[393] = (DataMasterBase_o *)v792;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[393], (int32_t)v792, v5, v793);
  v794 = (EventServantPointRankMaster_o *)sub_1C2D6DC(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v794, 0);
  if ( v794 )
  {
    v3 = sub_1C2D5CC(v794, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Au )
    goto LABEL_1652;
  v1->m_Items[394] = (DataMasterBase_o *)v794;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[394], (int32_t)v794, v5, v795);
  v796 = (UserEventServantPointMaster_o *)sub_1C2D6DC(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v796, 0);
  if ( v796 )
  {
    v3 = sub_1C2D5CC(v796, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Bu )
    goto LABEL_1652;
  v1->m_Items[395] = (DataMasterBase_o *)v796;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[395], (int32_t)v796, v5, v797);
  v798 = (FieldMotionMaster_o *)sub_1C2D6DC(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v798, 0);
  if ( v798 )
  {
    v3 = sub_1C2D5CC(v798, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Cu )
    goto LABEL_1652;
  v1->m_Items[396] = (DataMasterBase_o *)v798;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[396], (int32_t)v798, v5, v799);
  v800 = (UserDeleteReservationMaster_o *)sub_1C2D6DC(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v800, 0);
  if ( v800 )
  {
    v3 = sub_1C2D5CC(v800, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Du )
    goto LABEL_1652;
  v1->m_Items[397] = (DataMasterBase_o *)v800;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[397], (int32_t)v800, v5, v801);
  v802 = (ServantScriptMultipleMaster_o *)sub_1C2D6DC(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v802, 0);
  if ( v802 )
  {
    v3 = sub_1C2D5CC(v802, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Eu )
    goto LABEL_1652;
  v1->m_Items[398] = (DataMasterBase_o *)v802;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[398], (int32_t)v802, v5, v803);
  v804 = (EquipAddMaster_o *)sub_1C2D6DC(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v804, 0);
  if ( v804 )
  {
    v3 = sub_1C2D5CC(v804, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Fu )
    goto LABEL_1652;
  v1->m_Items[399] = (DataMasterBase_o *)v804;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[399], (int32_t)v804, v5, v805);
  v806 = (QuestReleaseOverwriteMaster_o *)sub_1C2D6DC(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v806, 0);
  if ( v806 )
  {
    v3 = sub_1C2D5CC(v806, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x190u )
    goto LABEL_1652;
  v1->m_Items[400] = (DataMasterBase_o *)v806;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[400], (int32_t)v806, v5, v807);
  v808 = (UserEventAlloutBattleMaster_o *)sub_1C2D6DC(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v808, 0);
  if ( v808 )
  {
    v3 = sub_1C2D5CC(v808, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x191u )
    goto LABEL_1652;
  v1->m_Items[401] = (DataMasterBase_o *)v808;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[401], (int32_t)v808, v5, v809);
  v810 = (QuestScriptMaterialNextMaster_o *)sub_1C2D6DC(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v810, 0);
  if ( v810 )
  {
    v3 = sub_1C2D5CC(v810, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x192u )
    goto LABEL_1652;
  v1->m_Items[402] = (DataMasterBase_o *)v810;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[402], (int32_t)v810, v5, v811);
  v812 = (EventDiggingMaster_o *)sub_1C2D6DC(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v812, 0);
  if ( v812 )
  {
    v3 = sub_1C2D5CC(v812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x193u )
    goto LABEL_1652;
  v1->m_Items[403] = (DataMasterBase_o *)v812;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[403], (int32_t)v812, v5, v813);
  v814 = (EventDiggingBlockMaster_o *)sub_1C2D6DC(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v814, 0);
  if ( v814 )
  {
    v3 = sub_1C2D5CC(v814, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x194u )
    goto LABEL_1652;
  v1->m_Items[404] = (DataMasterBase_o *)v814;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[404], (int32_t)v814, v5, v815);
  v816 = (EventDiggingRewardMaster_o *)sub_1C2D6DC(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v816, 0);
  if ( v816 )
  {
    v3 = sub_1C2D5CC(v816, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x195u )
    goto LABEL_1652;
  v1->m_Items[405] = (DataMasterBase_o *)v816;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[405], (int32_t)v816, v5, v817);
  v818 = (UserEventDiggingMaster_o *)sub_1C2D6DC(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v818, 0);
  if ( v818 )
  {
    v3 = sub_1C2D5CC(v818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x196u )
    goto LABEL_1652;
  v1->m_Items[406] = (DataMasterBase_o *)v818;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[406], (int32_t)v818, v5, v819);
  v820 = (BattleMessageMaster_o *)sub_1C2D6DC(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v820, 0);
  if ( v820 )
  {
    v3 = sub_1C2D5CC(v820, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x197u )
    goto LABEL_1652;
  v1->m_Items[407] = (DataMasterBase_o *)v820;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[407], (int32_t)v820, v5, v821);
  v822 = (BattleMessageGroupMaster_o *)sub_1C2D6DC(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v822, 0);
  if ( v822 )
  {
    v3 = sub_1C2D5CC(v822, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x198u )
    goto LABEL_1652;
  v1->m_Items[408] = (DataMasterBase_o *)v822;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[408], (int32_t)v822, v5, v823);
  v824 = (UserNpcSvtRecordMaster_o *)sub_1C2D6DC(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v824, 0);
  if ( v824 )
  {
    v3 = sub_1C2D5CC(v824, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x199u )
    goto LABEL_1652;
  v1->m_Items[409] = (DataMasterBase_o *)v824;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[409], (int32_t)v824, v5, v825);
  v826 = (BuffTypeDetailMaster_o *)sub_1C2D6DC(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v826, 0);
  if ( v826 )
  {
    v3 = sub_1C2D5CC(v826, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Au )
    goto LABEL_1652;
  v1->m_Items[410] = (DataMasterBase_o *)v826;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[410], (int32_t)v826, v5, v827);
  v828 = (WarBoardMessageMaster_o *)sub_1C2D6DC(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v828, 0);
  if ( v828 )
  {
    v3 = sub_1C2D5CC(v828, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Bu )
    goto LABEL_1652;
  v1->m_Items[411] = (DataMasterBase_o *)v828;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[411], (int32_t)v828, v5, v829);
  v830 = (WarBoardPartySkillMaster_o *)sub_1C2D6DC(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v830, 0);
  if ( v830 )
  {
    v3 = sub_1C2D5CC(v830, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Cu )
    goto LABEL_1652;
  v1->m_Items[412] = (DataMasterBase_o *)v830;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[412], (int32_t)v830, v5, v831);
  v832 = (WarBoardMessageScriptMaster_o *)sub_1C2D6DC(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v832, 0);
  if ( v832 )
  {
    v3 = sub_1C2D5CC(v832, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Du )
    goto LABEL_1652;
  v1->m_Items[413] = (DataMasterBase_o *)v832;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[413], (int32_t)v832, v5, v833);
  v834 = (WarQuestSelectionMaster_o *)sub_1C2D6DC(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v834, 0);
  if ( v834 )
  {
    v3 = sub_1C2D5CC(v834, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Eu )
    goto LABEL_1652;
  v1->m_Items[414] = (DataMasterBase_o *)v834;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[414], (int32_t)v834, v5, v835);
  v836 = (WarBoardStageDetailMaster_o *)sub_1C2D6DC(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v836, 0);
  if ( v836 )
  {
    v3 = sub_1C2D5CC(v836, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Fu )
    goto LABEL_1652;
  v1->m_Items[415] = (DataMasterBase_o *)v836;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[415], (int32_t)v836, v5, v837);
  v838 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C2D6DC(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v838, 0);
  if ( v838 )
  {
    v3 = sub_1C2D5CC(v838, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A0u )
    goto LABEL_1652;
  v1->m_Items[416] = (DataMasterBase_o *)v838;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[416], (int32_t)v838, v5, v839);
  v840 = (QuestScriptBranchMaterialMaster_o *)sub_1C2D6DC(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v840, 0);
  if ( v840 )
  {
    v3 = sub_1C2D5CC(v840, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A1u )
    goto LABEL_1652;
  v1->m_Items[417] = (DataMasterBase_o *)v840;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[417], (int32_t)v840, v5, v841);
  v842 = (AdCheckPointMaster_o *)sub_1C2D6DC(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v842, 0);
  if ( v842 )
  {
    v3 = sub_1C2D5CC(v842, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A2u )
    goto LABEL_1652;
  v1->m_Items[418] = (DataMasterBase_o *)v842;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[418], (int32_t)v842, v5, v843);
  v844 = (GiftDetailMaster_o *)sub_1C2D6DC(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v844, 0);
  if ( v844 )
  {
    v3 = sub_1C2D5CC(v844, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A3u )
    goto LABEL_1652;
  v1->m_Items[419] = (DataMasterBase_o *)v844;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[419], (int32_t)v844, v5, v845);
  v846 = (CombineLimitGiftMaster_o *)sub_1C2D6DC(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v846, 0);
  if ( v846 )
  {
    v3 = sub_1C2D5CC(v846, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A4u )
    goto LABEL_1652;
  v1->m_Items[420] = (DataMasterBase_o *)v846;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[420], (int32_t)v846, v5, v847);
  v848 = (EventCooltimeRewardMaster_o *)sub_1C2D6DC(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v848, 0);
  if ( v848 )
  {
    v3 = sub_1C2D5CC(v848, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A5u )
    goto LABEL_1652;
  v1->m_Items[421] = (DataMasterBase_o *)v848;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[421], (int32_t)v848, v5, v849);
  v850 = (UserEventCooltimeRewardMaster_o *)sub_1C2D6DC(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v850, 0);
  if ( v850 )
  {
    v3 = sub_1C2D5CC(v850, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A6u )
    goto LABEL_1652;
  v1->m_Items[422] = (DataMasterBase_o *)v850;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[422], (int32_t)v850, v5, v851);
  v852 = (ClassBoardBaseMaster_o *)sub_1C2D6DC(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v852, 0);
  if ( v852 )
  {
    v3 = sub_1C2D5CC(v852, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A7u )
    goto LABEL_1652;
  v1->m_Items[423] = (DataMasterBase_o *)v852;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[423], (int32_t)v852, v5, v853);
  v854 = (ClassBoardLockMaster_o *)sub_1C2D6DC(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v854, 0);
  if ( v854 )
  {
    v3 = sub_1C2D5CC(v854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A8u )
    goto LABEL_1652;
  v1->m_Items[424] = (DataMasterBase_o *)v854;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[424], (int32_t)v854, v5, v855);
  v856 = (ClassBoardSquareMaster_o *)sub_1C2D6DC(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v856, 0);
  if ( v856 )
  {
    v3 = sub_1C2D5CC(v856, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A9u )
    goto LABEL_1652;
  v1->m_Items[425] = (DataMasterBase_o *)v856;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[425], (int32_t)v856, v5, v857);
  v858 = (ClassBoardLineMaster_o *)sub_1C2D6DC(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v858, 0);
  if ( v858 )
  {
    v3 = sub_1C2D5CC(v858, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AAu )
    goto LABEL_1652;
  v1->m_Items[426] = (DataMasterBase_o *)v858;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[426], (int32_t)v858, v5, v859);
  v860 = (UserClassBoardSquareMaster_o *)sub_1C2D6DC(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v860, 0);
  if ( v860 )
  {
    v3 = sub_1C2D5CC(v860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ABu )
    goto LABEL_1652;
  v1->m_Items[427] = (DataMasterBase_o *)v860;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[427], (int32_t)v860, v5, v861);
  v862 = (ServantCardAddMaster_o *)sub_1C2D6DC(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v862, 0);
  if ( v862 )
  {
    v3 = sub_1C2D5CC(v862, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ACu )
    goto LABEL_1652;
  v1->m_Items[428] = (DataMasterBase_o *)v862;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[428], (int32_t)v862, v5, v863);
  v864 = (MapLayerMaster_o *)sub_1C2D6DC(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v864, 0);
  if ( v864 )
  {
    v3 = sub_1C2D5CC(v864, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ADu )
    goto LABEL_1652;
  v1->m_Items[429] = (DataMasterBase_o *)v864;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[429], (int32_t)v864, v5, v865);
  v866 = (SpotLayerMaster_o *)sub_1C2D6DC(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v866, 0);
  if ( v866 )
  {
    v3 = sub_1C2D5CC(v866, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AEu )
    goto LABEL_1652;
  v1->m_Items[430] = (DataMasterBase_o *)v866;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[430], (int32_t)v866, v5, v867);
  v868 = (MapGimmickLayerMaster_o *)sub_1C2D6DC(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v868, 0);
  if ( v868 )
  {
    v3 = sub_1C2D5CC(v868, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AFu )
    goto LABEL_1652;
  v1->m_Items[431] = (DataMasterBase_o *)v868;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[431], (int32_t)v868, v5, v869);
  v870 = (EventDataLostBattleMaster_o *)sub_1C2D6DC(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v870, 0);
  if ( v870 )
  {
    v3 = sub_1C2D5CC(v870, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B0u )
    goto LABEL_1652;
  v1->m_Items[432] = (DataMasterBase_o *)v870;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[432], (int32_t)v870, v5, v871);
  v872 = (EventDataLostBattleResetMaster_o *)sub_1C2D6DC(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v872, 0);
  if ( v872 )
  {
    v3 = sub_1C2D5CC(v872, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B1u )
    goto LABEL_1652;
  v1->m_Items[433] = (DataMasterBase_o *)v872;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[433], (int32_t)v872, v5, v873);
  v874 = (UserEventDataLostMaster_o *)sub_1C2D6DC(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v874, 0);
  if ( v874 )
  {
    v3 = sub_1C2D5CC(v874, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B2u )
    goto LABEL_1652;
  v1->m_Items[434] = (DataMasterBase_o *)v874;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[434], (int32_t)v874, v5, v875);
  v876 = (QuestHintMaster_o *)sub_1C2D6DC(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v876, 0);
  if ( v876 )
  {
    v3 = sub_1C2D5CC(v876, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B3u )
    goto LABEL_1652;
  v1->m_Items[435] = (DataMasterBase_o *)v876;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[435], (int32_t)v876, v5, v877);
  v878 = (FuncTypeDetailMaster_o *)sub_1C2D6DC(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v878, 0);
  if ( v878 )
  {
    v3 = sub_1C2D5CC(v878, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B4u )
    goto LABEL_1652;
  v1->m_Items[436] = (DataMasterBase_o *)v878;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[436], (int32_t)v878, v5, v879);
  v880 = (BuffConvertMaster_o *)sub_1C2D6DC(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v880, 0);
  if ( v880 )
  {
    v3 = sub_1C2D5CC(v880, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B5u )
    goto LABEL_1652;
  v1->m_Items[437] = (DataMasterBase_o *)v880;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[437], (int32_t)v880, v5, v881);
  v882 = (SkillGroupMaster_o *)sub_1C2D6DC(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v882, 0);
  if ( v882 )
  {
    v3 = sub_1C2D5CC(v882, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B6u )
    goto LABEL_1652;
  v1->m_Items[438] = (DataMasterBase_o *)v882;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[438], (int32_t)v882, v5, v883);
  v884 = (SkillGroupOverwriteMaster_o *)sub_1C2D6DC(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v884, 0);
  if ( v884 )
  {
    v3 = sub_1C2D5CC(v884, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B7u )
    goto LABEL_1652;
  v1->m_Items[439] = (DataMasterBase_o *)v884;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[439], (int32_t)v884, v5, v885);
  v886 = (SkillIndividualityMaster_o *)sub_1C2D6DC(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v886, 0);
  if ( v886 )
  {
    v3 = sub_1C2D5CC(v886, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B8u )
    goto LABEL_1652;
  v1->m_Items[440] = (DataMasterBase_o *)v886;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[440], (int32_t)v886, v5, v887);
  v888 = (RestrictionBaseMaster_o *)sub_1C2D6DC(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v888, 0);
  if ( v888 )
  {
    v3 = sub_1C2D5CC(v888, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B9u )
    goto LABEL_1652;
  v1->m_Items[441] = (DataMasterBase_o *)v888;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[441], (int32_t)v888, v5, v889);
  v890 = (RestrictionSlotMaster_o *)sub_1C2D6DC(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v890, 0);
  if ( v890 )
  {
    v3 = sub_1C2D5CC(v890, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BAu )
    goto LABEL_1652;
  v1->m_Items[442] = (DataMasterBase_o *)v890;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[442], (int32_t)v890, v5, v891);
  v892 = (RestrictionSlotDetailMaster_o *)sub_1C2D6DC(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v892, 0);
  if ( v892 )
  {
    v3 = sub_1C2D5CC(v892, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BBu )
    goto LABEL_1652;
  v1->m_Items[443] = (DataMasterBase_o *)v892;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[443], (int32_t)v892, v5, v893);
  v894 = (RestrictionMessageMaster_o *)sub_1C2D6DC(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v894, 0);
  if ( v894 )
  {
    v3 = sub_1C2D5CC(v894, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BCu )
    goto LABEL_1652;
  v1->m_Items[444] = (DataMasterBase_o *)v894;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[444], (int32_t)v894, v5, v895);
  v896 = (RestrictionWholeMaster_o *)sub_1C2D6DC(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v896, 0);
  if ( v896 )
  {
    v3 = sub_1C2D5CC(v896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BDu )
    goto LABEL_1652;
  v1->m_Items[445] = (DataMasterBase_o *)v896;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[445], (int32_t)v896, v5, v897);
  v898 = (FuncDispMaster_o *)sub_1C2D6DC(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v898, 0);
  if ( v898 )
  {
    v3 = sub_1C2D5CC(v898, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BEu )
    goto LABEL_1652;
  v1->m_Items[446] = (DataMasterBase_o *)v898;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[446], (int32_t)v898, v5, v899);
  v900 = (ClassBoardCommandSpellMaster_o *)sub_1C2D6DC(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v900, 0);
  if ( v900 )
  {
    v3 = sub_1C2D5CC(v900, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BFu )
    goto LABEL_1652;
  v1->m_Items[447] = (DataMasterBase_o *)v900;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[447], (int32_t)v900, v5, v901);
  v902 = (ClassBoardClassMaster_o *)sub_1C2D6DC(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v902, 0);
  if ( v902 )
  {
    v3 = sub_1C2D5CC(v902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C0u )
    goto LABEL_1652;
  v1->m_Items[448] = (DataMasterBase_o *)v902;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[448], (int32_t)v902, v5, v903);
  v904 = (EventCommandAssistMaster_o *)sub_1C2D6DC(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v904, 0);
  if ( v904 )
  {
    v3 = sub_1C2D5CC(v904, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C1u )
    goto LABEL_1652;
  v1->m_Items[449] = (DataMasterBase_o *)v904;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[449], (int32_t)v904, v5, v905);
  v906 = (EventMissionGroupMaster_o *)sub_1C2D6DC(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v906, 0);
  if ( v906 )
  {
    v3 = sub_1C2D5CC(v906, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C2u )
    goto LABEL_1652;
  v1->m_Items[450] = (DataMasterBase_o *)v906;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[450], (int32_t)v906, v5, v907);
  v908 = (CombineLimitReleaseMaster_o *)sub_1C2D6DC(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v908, 0);
  if ( v908 )
  {
    v3 = sub_1C2D5CC(v908, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C3u )
    goto LABEL_1652;
  v1->m_Items[451] = (DataMasterBase_o *)v908;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[451], (int32_t)v908, v5, v909);
  v910 = (HeelPortraitMaster_o *)sub_1C2D6DC(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v910, 0);
  if ( v910 )
  {
    v3 = sub_1C2D5CC(v910, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C4u )
    goto LABEL_1652;
  v1->m_Items[452] = (DataMasterBase_o *)v910;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[452], (int32_t)v910, v5, v911);
  v912 = (UserHeelPortraitMaster_o *)sub_1C2D6DC(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v912, 0);
  if ( v912 )
  {
    v3 = sub_1C2D5CC(v912, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C5u )
    goto LABEL_1652;
  v1->m_Items[453] = (DataMasterBase_o *)v912;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[453], (int32_t)v912, v5, v913);
  v914 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C2D6DC(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v914, 0);
  if ( v914 )
  {
    v3 = sub_1C2D5CC(v914, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C6u )
    goto LABEL_1652;
  v1->m_Items[454] = (DataMasterBase_o *)v914;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[454], (int32_t)v914, v5, v915);
  v916 = (NpcServantFollowerIndividualityMaster_o *)sub_1C2D6DC(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v916, 0);
  if ( v916 )
  {
    v3 = sub_1C2D5CC(v916, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C7u )
    goto LABEL_1652;
  v1->m_Items[455] = (DataMasterBase_o *)v916;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[455], (int32_t)v916, v5, v917);
  v918 = (GachaExtraGiftMaster_o *)sub_1C2D6DC(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v918, 0);
  if ( v918 )
  {
    v3 = sub_1C2D5CC(v918, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C8u )
    goto LABEL_1652;
  v1->m_Items[456] = (DataMasterBase_o *)v918;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[456], (int32_t)v918, v5, v919);
  v920 = (EventMuralMaster_o *)sub_1C2D6DC(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v920, 0);
  if ( v920 )
  {
    v3 = sub_1C2D5CC(v920, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C9u )
    goto LABEL_1652;
  v1->m_Items[457] = (DataMasterBase_o *)v920;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[457], (int32_t)v920, v5, v921);
  v922 = (ViewWaveEnemyMaster_o *)sub_1C2D6DC(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v922, 0);
  if ( v922 )
  {
    v3 = sub_1C2D5CC(v922, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CAu )
    goto LABEL_1652;
  v1->m_Items[458] = (DataMasterBase_o *)v922;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[458], (int32_t)v922, v5, v923);
  v924 = (BlankEarthSpotNavimenuMaster_o *)sub_1C2D6DC(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v924, 0);
  if ( v924 )
  {
    v3 = sub_1C2D5CC(v924, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CBu )
    goto LABEL_1652;
  v1->m_Items[459] = (DataMasterBase_o *)v924;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[459], (int32_t)v924, v5, v925);
  v926 = (BlankEarthGimmickMaster_o *)sub_1C2D6DC(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v926, 0);
  if ( v926 )
  {
    v3 = sub_1C2D5CC(v926, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CCu )
    goto LABEL_1652;
  v1->m_Items[460] = (DataMasterBase_o *)v926;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[460], (int32_t)v926, v5, v927);
  v928 = (TerminalOverwriteMaster_o *)sub_1C2D6DC(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v928, 0);
  if ( v928 )
  {
    v3 = sub_1C2D5CC(v928, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CDu )
    goto LABEL_1652;
  v1->m_Items[461] = (DataMasterBase_o *)v928;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[461], (int32_t)v928, v5, v929);
  v930 = (UserExchangeSvtMaster_o *)sub_1C2D6DC(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v930, 0);
  if ( v930 )
  {
    v3 = sub_1C2D5CC(v930, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CEu )
    goto LABEL_1652;
  v1->m_Items[462] = (DataMasterBase_o *)v930;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[462], (int32_t)v930, v5, v931);
  v932 = (WarBoardCommonReleaseMaster_o *)sub_1C2D6DC(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v932, 0);
  if ( v932 )
  {
    v3 = sub_1C2D5CC(v932, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CFu )
    goto LABEL_1652;
  v1->m_Items[463] = (DataMasterBase_o *)v932;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[463], (int32_t)v932, v5, v933);
  v934 = (WarBoardEventMaster_o *)sub_1C2D6DC(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v934, 0);
  if ( v934 )
  {
    v3 = sub_1C2D5CC(v934, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D0u )
    goto LABEL_1652;
  v1->m_Items[464] = (DataMasterBase_o *)v934;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[464], (int32_t)v934, v5, v935);
  v936 = (WarBoardEventScriptMaster_o *)sub_1C2D6DC(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v936, 0);
  if ( v936 )
  {
    v3 = sub_1C2D5CC(v936, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D1u )
    goto LABEL_1652;
  v1->m_Items[465] = (DataMasterBase_o *)v936;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[465], (int32_t)v936, v5, v937);
  v938 = (WarBoardStageBossMaster_o *)sub_1C2D6DC(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v938, 0);
  if ( v938 )
  {
    v3 = sub_1C2D5CC(v938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D2u )
    goto LABEL_1652;
  v1->m_Items[466] = (DataMasterBase_o *)v938;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[466], (int32_t)v938, v5, v939);
  v940 = (WarBoardSquareIndexGroupMaster_o *)sub_1C2D6DC(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v940, 0);
  if ( v940 )
  {
    v3 = sub_1C2D5CC(v940, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D3u )
    goto LABEL_1652;
  v1->m_Items[467] = (DataMasterBase_o *)v940;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[467], (int32_t)v940, v5, v941);
  v942 = (WarBoardActionTrendGroupMaster_o *)sub_1C2D6DC(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v942, 0);
  if ( v942 )
  {
    v3 = sub_1C2D5CC(v942, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D4u )
    goto LABEL_1652;
  v1->m_Items[468] = (DataMasterBase_o *)v942;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[468], (int32_t)v942, v5, v943);
  v944 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C2D6DC(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v944, 0);
  if ( v944 )
  {
    v3 = sub_1C2D5CC(v944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D5u )
    goto LABEL_1652;
  v1->m_Items[469] = (DataMasterBase_o *)v944;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[469], (int32_t)v944, v5, v945);
  v946 = (WarBoardReinforcementsMaster_o *)sub_1C2D6DC(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v946, 0);
  if ( v946 )
  {
    v3 = sub_1C2D5CC(v946, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D6u )
    goto LABEL_1652;
  v1->m_Items[470] = (DataMasterBase_o *)v946;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[470], (int32_t)v946, v5, v947);
  v948 = (WarBoardStageReinforcementsMaster_o *)sub_1C2D6DC(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v948, 0);
  if ( v948 )
  {
    v3 = sub_1C2D5CC(v948, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D7u )
    goto LABEL_1652;
  v1->m_Items[471] = (DataMasterBase_o *)v948;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[471], (int32_t)v948, v5, v949);
  v950 = (WarBoardFutureActionTrendMaster_o *)sub_1C2D6DC(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v950, 0);
  if ( v950 )
  {
    v3 = sub_1C2D5CC(v950, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D8u )
    goto LABEL_1652;
  v1->m_Items[472] = (DataMasterBase_o *)v950;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[472], (int32_t)v950, v5, v951);
  v952 = (ServantProfilePushMaster_o *)sub_1C2D6DC(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v952, 0);
  if ( v952 )
  {
    v3 = sub_1C2D5CC(v952, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D9u )
    goto LABEL_1652;
  v1->m_Items[473] = (DataMasterBase_o *)v952;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[473], (int32_t)v952, v5, v953);
  v954 = (MapGimmickPathMaster_o *)sub_1C2D6DC(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v954, 0);
  if ( v954 )
  {
    v3 = sub_1C2D5CC(v954, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DAu )
    goto LABEL_1652;
  v1->m_Items[474] = (DataMasterBase_o *)v954;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[474], (int32_t)v954, v5, v955);
  v956 = (MapGimmickPathReleaseMaster_o *)sub_1C2D6DC(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v956, 0);
  if ( v956 )
  {
    v3 = sub_1C2D5CC(v956, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DBu )
    goto LABEL_1652;
  v1->m_Items[475] = (DataMasterBase_o *)v956;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[475], (int32_t)v956, v5, v957);
  v958 = (ServantOverwriteMaster_o *)sub_1C2D6DC(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v958, 0);
  if ( v958 )
  {
    v3 = sub_1C2D5CC(v958, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DCu )
    goto LABEL_1652;
  v1->m_Items[476] = (DataMasterBase_o *)v958;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[476], (int32_t)v958, v5, v959);
  v960 = (IndividualityPolicyMaster_o *)sub_1C2D6DC(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v960, 0);
  if ( v960 )
  {
    v3 = sub_1C2D5CC(v960, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DDu )
    goto LABEL_1652;
  v1->m_Items[477] = (DataMasterBase_o *)v960;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[477], (int32_t)v960, v5, v961);
  v962 = (IndividualityPersonalityMaster_o *)sub_1C2D6DC(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v962, 0);
  if ( v962 )
  {
    v3 = sub_1C2D5CC(v962, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DEu )
    goto LABEL_1652;
  v1->m_Items[478] = (DataMasterBase_o *)v962;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[478], (int32_t)v962, v5, v963);
  v964 = (AttriMaster_o *)sub_1C2D6DC(AttriMaster_TypeInfo);
  AttriMaster___ctor(v964, 0);
  if ( v964 )
  {
    v3 = sub_1C2D5CC(v964, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DFu )
    goto LABEL_1652;
  v1->m_Items[479] = (DataMasterBase_o *)v964;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[479], (int32_t)v964, v5, v965);
  v966 = (ServantVoicePatternMaster_o *)sub_1C2D6DC(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v966, 0);
  if ( v966 )
  {
    v3 = sub_1C2D5CC(v966, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E0u )
    goto LABEL_1652;
  v1->m_Items[480] = (DataMasterBase_o *)v966;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[480], (int32_t)v966, v5, v967);
  v968 = (UserGameCommonMaster_o *)sub_1C2D6DC(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v968, 0);
  if ( v968 )
  {
    v3 = sub_1C2D5CC(v968, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E1u )
    goto LABEL_1652;
  v1->m_Items[481] = (DataMasterBase_o *)v968;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[481], (int32_t)v968, v5, v969);
  v970 = (ServantPhotoMaster_o *)sub_1C2D6DC(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v970, 0);
  if ( v970 )
  {
    v3 = sub_1C2D5CC(v970, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E2u )
    goto LABEL_1652;
  v1->m_Items[482] = (DataMasterBase_o *)v970;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[482], (int32_t)v970, v5, v971);
  v972 = (MasterPhotoMaster_o *)sub_1C2D6DC(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v972, 0);
  if ( v972 )
  {
    v3 = sub_1C2D5CC(v972, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E3u )
    goto LABEL_1652;
  v1->m_Items[483] = (DataMasterBase_o *)v972;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[483], (int32_t)v972, v5, v973);
  v974 = (PhotoFrameMaster_o *)sub_1C2D6DC(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v974, 0);
  if ( v974 )
  {
    v3 = sub_1C2D5CC(v974, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E4u )
    goto LABEL_1652;
  v1->m_Items[484] = (DataMasterBase_o *)v974;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[484], (int32_t)v974, v5, v975);
  v976 = (WarMessageMaster_o *)sub_1C2D6DC(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v976, 0);
  if ( v976 )
  {
    v3 = sub_1C2D5CC(v976, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E5u )
    goto LABEL_1652;
  v1->m_Items[485] = (DataMasterBase_o *)v976;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[485], (int32_t)v976, v5, v977);
  v978 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C2D6DC(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v978, 0);
  if ( v978 )
  {
    v3 = sub_1C2D5CC(v978, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E6u )
    goto LABEL_1652;
  v1->m_Items[486] = (DataMasterBase_o *)v978;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[486], (int32_t)v978, v5, v979);
  v980 = (ExcludeMotionMaster_o *)sub_1C2D6DC(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v980, 0);
  if ( v980 )
  {
    v3 = sub_1C2D5CC(v980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E7u )
    goto LABEL_1652;
  v1->m_Items[487] = (DataMasterBase_o *)v980;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[487], (int32_t)v980, v5, v981);
  v982 = (UserInterruptionQuestMaster_o *)sub_1C2D6DC(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v982, 0);
  if ( v982 )
  {
    v3 = sub_1C2D5CC(v982, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E8u )
    goto LABEL_1652;
  v1->m_Items[488] = (DataMasterBase_o *)v982;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[488], (int32_t)v982, v5, v983);
  v984 = (ServantTransformMaster_o *)sub_1C2D6DC(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v984, 0);
  if ( v984 )
  {
    v3 = sub_1C2D5CC(v984, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E9u )
    goto LABEL_1652;
  v1->m_Items[489] = (DataMasterBase_o *)v984;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[489], (int32_t)v984, v5, v985);
  v986 = (MapUpdateScheduleMaster_o *)sub_1C2D6DC(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v986, 0);
  if ( v986 )
  {
    v3 = sub_1C2D5CC(v986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EAu )
    goto LABEL_1652;
  v1->m_Items[490] = (DataMasterBase_o *)v986;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[490], (int32_t)v986, v5, v987);
  v988 = (QuestPhasePresentMaster_o *)sub_1C2D6DC(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v988, 0);
  if ( v988 )
  {
    v3 = sub_1C2D5CC(v988, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EBu )
    goto LABEL_1652;
  v1->m_Items[491] = (DataMasterBase_o *)v988;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[491], (int32_t)v988, v5, v989);
  v990 = (UserAccountLinkageMaster_o *)sub_1C2D6DC(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v990, 0);
  if ( v990 )
  {
    v3 = sub_1C2D5CC(v990, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ECu )
    goto LABEL_1652;
  v1->m_Items[492] = (DataMasterBase_o *)v990;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[492], (int32_t)v990, v5, v991);
  v992 = (MissionNaviTransitionMaster_o *)sub_1C2D6DC(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v992, 0);
  if ( v992 )
  {
    v3 = sub_1C2D5CC(v992, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EDu )
    goto LABEL_1652;
  v1->m_Items[493] = (DataMasterBase_o *)v992;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[493], (int32_t)v992, v5, v993);
  v994 = (MissionNaviQuestMaster_o *)sub_1C2D6DC(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v994, 0);
  if ( v994 )
  {
    v3 = sub_1C2D5CC(v994, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EEu )
    goto LABEL_1652;
  v1->m_Items[494] = (DataMasterBase_o *)v994;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[494], (int32_t)v994, v5, v995);
  v996 = (EventTradeGoodsMaster_o *)sub_1C2D6DC(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v996, 0);
  if ( v996 )
  {
    v3 = sub_1C2D5CC(v996, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EFu )
    goto LABEL_1652;
  v1->m_Items[495] = (DataMasterBase_o *)v996;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[495], (int32_t)v996, v5, v997);
  v998 = (EventTradeStoreMaster_o *)sub_1C2D6DC(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v998, 0);
  if ( v998 )
  {
    v3 = sub_1C2D5CC(v998, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F0u )
    goto LABEL_1652;
  v1->m_Items[496] = (DataMasterBase_o *)v998;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[496], (int32_t)v998, v5, v999);
  v1000 = (EventTradePickupMaster_o *)sub_1C2D6DC(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1000, 0);
  if ( v1000 )
  {
    v3 = sub_1C2D5CC(v1000, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F1u )
    goto LABEL_1652;
  v1->m_Items[497] = (DataMasterBase_o *)v1000;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[497], (int32_t)v1000, v5, v1001);
  v1002 = (UserEventTradeMaster_o *)sub_1C2D6DC(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1002, 0);
  if ( v1002 )
  {
    v3 = sub_1C2D5CC(v1002, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F2u )
    goto LABEL_1652;
  v1->m_Items[498] = (DataMasterBase_o *)v1002;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[498], (int32_t)v1002, v5, v1003);
  v1004 = (PaymentHistoryMaster_o *)sub_1C2D6DC(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1004, 0);
  if ( v1004 )
  {
    v3 = sub_1C2D5CC(v1004, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F3u )
    goto LABEL_1652;
  v1->m_Items[499] = (DataMasterBase_o *)v1004;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[499], (int32_t)v1004, v5, v1005);
  v1006 = (UserExternalPaymentStoneMaster_o *)sub_1C2D6DC(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1006, 0);
  if ( v1006 )
  {
    v3 = sub_1C2D5CC(v1006, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F4u )
    goto LABEL_1652;
  v1->m_Items[500] = (DataMasterBase_o *)v1006;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[500], (int32_t)v1006, v5, v1007);
  v1008 = (QuestPhaseIndividualityMaster_o *)sub_1C2D6DC(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1008, 0);
  if ( v1008 )
  {
    v3 = sub_1C2D5CC(v1008, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F5u )
    goto LABEL_1652;
  v1->m_Items[501] = (DataMasterBase_o *)v1008;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[501], (int32_t)v1008, v5, v1009);
  v1010 = (ViewGachaFeaturedServantMaster_o *)sub_1C2D6DC(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1010, 0);
  if ( v1010 )
  {
    v3 = sub_1C2D5CC(v1010, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F6u )
    goto LABEL_1652;
  v1->m_Items[502] = (DataMasterBase_o *)v1010;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[502], (int32_t)v1010, v5, v1011);
  v1012 = (UserGachaPickupCollateralMaster_o *)sub_1C2D6DC(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1012, 0);
  if ( v1012 )
  {
    v3 = sub_1C2D5CC(v1012, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F7u )
    goto LABEL_1652;
  v1->m_Items[503] = (DataMasterBase_o *)v1012;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[503], (int32_t)v1012, v5, v1013);
  v1014 = (GachaPickupCollateralMaster_o *)sub_1C2D6DC(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1014, 0);
  if ( v1014 )
  {
    v3 = sub_1C2D5CC(v1014, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F8u )
    goto LABEL_1652;
  v1->m_Items[504] = (DataMasterBase_o *)v1014;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[504], (int32_t)v1014, v5, v1015);
  v1016 = (GachaPickupCollateralGroupMaster_o *)sub_1C2D6DC(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1016, 0);
  if ( v1016 )
  {
    v3 = sub_1C2D5CC(v1016, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F9u )
    goto LABEL_1652;
  v1->m_Items[505] = (DataMasterBase_o *)v1016;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[505], (int32_t)v1016, v5, v1017);
  v1018 = (BattlePointMaster_o *)sub_1C2D6DC(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1018, 0);
  if ( v1018 )
  {
    v3 = sub_1C2D5CC(v1018, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FAu )
    goto LABEL_1652;
  v1->m_Items[506] = (DataMasterBase_o *)v1018;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[506], (int32_t)v1018, v5, v1019);
  v1020 = (BattlePointPhaseMaster_o *)sub_1C2D6DC(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1020, 0);
  if ( v1020 )
  {
    v3 = sub_1C2D5CC(v1020, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FBu )
    goto LABEL_1652;
  v1->m_Items[507] = (DataMasterBase_o *)v1020;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[507], (int32_t)v1020, v5, v1021);
  v1022 = (ServantBattlePointMaster_o *)sub_1C2D6DC(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1022, 0);
  if ( v1022 )
  {
    v3 = sub_1C2D5CC(v1022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FCu )
    goto LABEL_1652;
  v1->m_Items[508] = (DataMasterBase_o *)v1022;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[508], (int32_t)v1022, v5, v1023);
  v1024 = (EffectMovieMaster_o *)sub_1C2D6DC(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1024, 0);
  if ( v1024 )
  {
    v3 = sub_1C2D5CC(v1024, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FDu )
    goto LABEL_1652;
  v1->m_Items[509] = (DataMasterBase_o *)v1024;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[509], (int32_t)v1024, v5, v1025);
  v1026 = (PaymentLimitMaster_o *)sub_1C2D6DC(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1026, 0);
  if ( v1026 )
  {
    v3 = sub_1C2D5CC(v1026, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FEu )
    goto LABEL_1652;
  v1->m_Items[510] = (DataMasterBase_o *)v1026;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[510], (int32_t)v1026, v5, v1027);
  v1028 = (UserPaymentLimitMaster_o *)sub_1C2D6DC(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1028, 0);
  if ( v1028 )
  {
    v3 = sub_1C2D5CC(v1028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FFu )
    goto LABEL_1652;
  v1->m_Items[511] = (DataMasterBase_o *)v1028;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[511], (int32_t)v1028, v5, v1029);
  v1030 = (RoadmapMaster_o *)sub_1C2D6DC(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1030, 0);
  if ( v1030 )
  {
    v3 = sub_1C2D5CC(v1030, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x200u )
    goto LABEL_1652;
  v1->m_Items[512] = (DataMasterBase_o *)v1030;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[512], (int32_t)v1030, v5, v1031);
  v1032 = (UserRecommendSupportMaster_o *)sub_1C2D6DC(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1032, 0);
  if ( v1032 )
  {
    v3 = sub_1C2D5CC(v1032, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x201u )
    goto LABEL_1652;
  v1->m_Items[513] = (DataMasterBase_o *)v1032;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[513], (int32_t)v1032, v5, v1033);
  v1034 = (RecommendSupportQuestMaster_o *)sub_1C2D6DC(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1034, 0);
  if ( v1034 )
  {
    v3 = sub_1C2D5CC(v1034, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x202u )
    goto LABEL_1652;
  v1->m_Items[514] = (DataMasterBase_o *)v1034;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[514], (int32_t)v1034, v5, v1035);
  v1036 = (RecommendAdviceMessageMaster_o *)sub_1C2D6DC(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1036, 0);
  if ( v1036 )
  {
    v3 = sub_1C2D5CC(v1036, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x203u )
    goto LABEL_1652;
  v1->m_Items[515] = (DataMasterBase_o *)v1036;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[515], (int32_t)v1036, v5, v1037);
  v1038 = (UserRecommendFollowerMaster_o *)sub_1C2D6DC(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1038, 0);
  if ( v1038 )
  {
    v3 = sub_1C2D5CC(v1038, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x204u )
    goto LABEL_1652;
  v1->m_Items[516] = (DataMasterBase_o *)v1038;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[516], (int32_t)v1038, v5, v1039);
  v1040 = (ItemDropEfficiencyMaster_o *)sub_1C2D6DC(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1040, 0);
  if ( v1040 )
  {
    v3 = sub_1C2D5CC(v1040, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x205u )
    goto LABEL_1652;
  v1->m_Items[517] = (DataMasterBase_o *)v1040;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[517], (int32_t)v1040, v5, v1041);
  v1042 = (BlankEarthGimmickAddMaster_o *)sub_1C2D6DC(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1042, 0);
  if ( v1042 )
  {
    v3 = sub_1C2D5CC(v1042, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x206u )
    goto LABEL_1652;
  v1->m_Items[518] = (DataMasterBase_o *)v1042;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[518], (int32_t)v1042, v5, v1043);
  v1044 = (WarReleaseMaster_o *)sub_1C2D6DC(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1044, 0);
  if ( v1044 )
  {
    v3 = sub_1C2D5CC(v1044, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x207u )
    goto LABEL_1652;
  v1->m_Items[519] = (DataMasterBase_o *)v1044;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[519], (int32_t)v1044, v5, v1045);
  v1046 = (SelectBonusBaseMaster_o *)sub_1C2D6DC(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1046, 0);
  if ( v1046 )
  {
    v3 = sub_1C2D5CC(v1046, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x208u )
    goto LABEL_1652;
  v1->m_Items[520] = (DataMasterBase_o *)v1046;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[520], (int32_t)v1046, v5, v1047);
  v1048 = (SelectBonusMaster_o *)sub_1C2D6DC(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1048, 0);
  if ( v1048 )
  {
    v3 = sub_1C2D5CC(v1048, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x209u )
    goto LABEL_1652;
  v1->m_Items[521] = (DataMasterBase_o *)v1048;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[521], (int32_t)v1048, v5, v1049);
  v1050 = (MyroomServantSpecialImageMaster_o *)sub_1C2D6DC(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1050, 0);
  if ( v1050 )
  {
    v3 = sub_1C2D5CC(v1050, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Au )
    goto LABEL_1652;
  v1->m_Items[522] = (DataMasterBase_o *)v1050;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[522], (int32_t)v1050, v5, v1051);
  v1052 = (ShopResetMaster_o *)sub_1C2D6DC(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v1052, 0);
  if ( v1052 )
  {
    v3 = sub_1C2D5CC(v1052, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Bu )
    goto LABEL_1652;
  v1->m_Items[523] = (DataMasterBase_o *)v1052;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[523], (int32_t)v1052, v5, v1053);
  v1054 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C2D6DC(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v1054, 0);
  if ( v1054 )
  {
    v3 = sub_1C2D5CC(v1054, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Cu )
    goto LABEL_1652;
  v1->m_Items[524] = (DataMasterBase_o *)v1054;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[524], (int32_t)v1054, v5, v1055);
  v1056 = (FriendshipServantMaster_o *)sub_1C2D6DC(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v1056, 0);
  if ( v1056 )
  {
    v3 = sub_1C2D5CC(v1056, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Du )
    goto LABEL_1652;
  v1->m_Items[525] = (DataMasterBase_o *)v1056;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[525], (int32_t)v1056, v5, v1057);
  v1058 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C2D6DC(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v1058, 0);
  if ( v1058 )
  {
    v3 = sub_1C2D5CC(v1058, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Eu )
    goto LABEL_1652;
  v1->m_Items[526] = (DataMasterBase_o *)v1058;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[526], (int32_t)v1058, v5, v1059);
  v1060 = (ChaldeaGatePickupMaster_o *)sub_1C2D6DC(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v1060, 0);
  if ( v1060 )
  {
    v3 = sub_1C2D5CC(v1060, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Fu )
    goto LABEL_1652;
  v1->m_Items[527] = (DataMasterBase_o *)v1060;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[527], (int32_t)v1060, v5, v1061);
  v1062 = (WarGroupIgnoreMaster_o *)sub_1C2D6DC(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v1062, 0);
  if ( v1062 )
  {
    v3 = sub_1C2D5CC(v1062, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x210u )
    goto LABEL_1652;
  v1->m_Items[528] = (DataMasterBase_o *)v1062;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[528], (int32_t)v1062, v5, v1063);
  v1064 = (ImagePartsGroupMaster_o *)sub_1C2D6DC(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v1064, 0);
  if ( v1064 )
  {
    v3 = sub_1C2D5CC(v1064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x211u )
    goto LABEL_1652;
  v1->m_Items[529] = (DataMasterBase_o *)v1064;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[529], (int32_t)v1064, v5, v1065);
  v1066 = (UserImagePartsGroupMaster_o *)sub_1C2D6DC(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v1066, 0);
  if ( v1066 )
  {
    v3 = sub_1C2D5CC(v1066, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x212u )
    goto LABEL_1652;
  v1->m_Items[530] = (DataMasterBase_o *)v1066;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[530], (int32_t)v1066, v5, v1067);
  v1068 = (MissionItemDisplayMaster_o *)sub_1C2D6DC(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v1068, 0);
  if ( v1068 )
  {
    v3 = sub_1C2D5CC(v1068, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x213u )
    goto LABEL_1652;
  v1->m_Items[531] = (DataMasterBase_o *)v1068;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[531], (int32_t)v1068, v5, v1069);
  v1070 = (QuestUseItemGroupMaster_o *)sub_1C2D6DC(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v1070, 0);
  if ( v1070 )
  {
    v3 = sub_1C2D5CC(v1070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x214u )
    goto LABEL_1652;
  v1->m_Items[532] = (DataMasterBase_o *)v1070;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[532], (int32_t)v1070, v5, v1071);
  v1072 = (QuestUseItemPickupMaster_o *)sub_1C2D6DC(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v1072, 0);
  if ( v1072 )
  {
    v3 = sub_1C2D5CC(v1072, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x215u )
    goto LABEL_1652;
  v1->m_Items[533] = (DataMasterBase_o *)v1072;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[533], (int32_t)v1072, v5, v1073);
  v1074 = (UserEventItemLinkSvtMaster_o *)sub_1C2D6DC(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v1074, 0);
  if ( v1074 )
  {
    v3 = sub_1C2D5CC(v1074, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x216u )
    goto LABEL_1652;
  v1->m_Items[534] = (DataMasterBase_o *)v1074;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[534], (int32_t)v1074, v5, v1075);
  v1076 = (QuestHintOverwriteMaster_o *)sub_1C2D6DC(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v1076, 0);
  if ( v1076 )
  {
    v3 = sub_1C2D5CC(v1076, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x217u )
    goto LABEL_1652;
  v1->m_Items[535] = (DataMasterBase_o *)v1076;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[535], (int32_t)v1076, v5, v1077);
  v1078 = (ReachedWaveInfoMaster_o *)sub_1C2D6DC(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v1078, 0);
  if ( v1078 )
  {
    v3 = sub_1C2D5CC(v1078, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x218u )
    goto LABEL_1652;
  v1->m_Items[536] = (DataMasterBase_o *)v1078;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[536], (int32_t)v1078, v5, v1079);
  v1080 = (GalleryMaster_o *)sub_1C2D6DC(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v1080, 0);
  if ( v1080 )
  {
    v3 = sub_1C2D5CC(v1080, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x219u )
    goto LABEL_1652;
  v1->m_Items[537] = (DataMasterBase_o *)v1080;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[537], (int32_t)v1080, v5, v1081);
  v1082 = (GalleryResourceMaster_o *)sub_1C2D6DC(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v1082, 0);
  if ( v1082 )
  {
    v3 = sub_1C2D5CC(v1082, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Au )
    goto LABEL_1652;
  v1->m_Items[538] = (DataMasterBase_o *)v1082;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[538], (int32_t)v1082, v5, v1083);
  v1084 = (ServantSkillAddMaster_o *)sub_1C2D6DC(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v1084, 0);
  if ( v1084 )
  {
    v3 = sub_1C2D5CC(v1084, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Bu )
    goto LABEL_1652;
  v1->m_Items[539] = (DataMasterBase_o *)v1084;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[539], (int32_t)v1084, v5, v1085);
  v1086 = (GalleryFolderReleaseMaster_o *)sub_1C2D6DC(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v1086, 0);
  if ( v1086 )
  {
    v3 = sub_1C2D5CC(v1086, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Cu )
    goto LABEL_1652;
  v1->m_Items[540] = (DataMasterBase_o *)v1086;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[540], (int32_t)v1086, v5, v1087);
  v1088 = (UserSvtFirstGetTimeMaster_o *)sub_1C2D6DC(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v1088, 0);
  if ( v1088 )
  {
    v3 = sub_1C2D5CC(v1088, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Du )
    goto LABEL_1652;
  v1->m_Items[541] = (DataMasterBase_o *)v1088;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[541], (int32_t)v1088, v5, v1089);
  v1090 = (QuestExtensionMaster_o *)sub_1C2D6DC(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v1090, 0);
  if ( v1090 )
  {
    v3 = sub_1C2D5CC(v1090, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Eu )
    goto LABEL_1652;
  v1->m_Items[542] = (DataMasterBase_o *)v1090;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[542], (int32_t)v1090, v5, v1091);
  v1092 = (UserServantGrandMaster_o *)sub_1C2D6DC(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v1092, 0);
  if ( v1092 )
  {
    v3 = sub_1C2D5CC(v1092, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Fu )
    goto LABEL_1652;
  v1->m_Items[543] = (DataMasterBase_o *)v1092;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[543], (int32_t)v1092, v5, v1093);
  v1094 = (GrandGraphMaster_o *)sub_1C2D6DC(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v1094, 0);
  if ( v1094 )
  {
    v3 = sub_1C2D5CC(v1094, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x220u )
    goto LABEL_1652;
  v1->m_Items[544] = (DataMasterBase_o *)v1094;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[544], (int32_t)v1094, v5, v1095);
  v1096 = (GrandGraphDetailMaster_o *)sub_1C2D6DC(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v1096, 0);
  if ( v1096 )
  {
    v3 = sub_1C2D5CC(v1096, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x221u )
    goto LABEL_1652;
  v1->m_Items[545] = (DataMasterBase_o *)v1096;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[545], (int32_t)v1096, v5, v1097);
  v1098 = (UserClassStatisticsMaster_o *)sub_1C2D6DC(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v1098, 0);
  if ( v1098 )
  {
    v3 = sub_1C2D5CC(v1098, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x222u )
    goto LABEL_1652;
  v1->m_Items[546] = (DataMasterBase_o *)v1098;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[546], (int32_t)v1098, v5, v1099);
  v1100 = (EventEquipSkillPartsMaster_o *)sub_1C2D6DC(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v1100, 0);
  if ( v1100 )
  {
    v3 = sub_1C2D5CC(v1100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1653;
  }
  if ( *(_DWORD *)p_max_length <= 0x223u )
    goto LABEL_1652;
  v1->m_Items[547] = (DataMasterBase_o *)v1100;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[547], (int32_t)v1100, v5, v1101);
  v1102 = (MasterIndividualitySelectMaster_o *)sub_1C2D6DC(MasterIndividualitySelectMaster_TypeInfo);
  MasterIndividualitySelectMaster___ctor(v1102, 0);
  if ( v1102 )
  {
    v3 = sub_1C2D5CC(v1102, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1653:
      v1105 = sub_1C2D710(v3);
      sub_1C2D5B8(v1105, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x224u )
LABEL_1652:
    sub_1C2D6F4(v3, v4, v5);
  v1->m_Items[548] = (DataMasterBase_o *)v1102;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[548], (int32_t)v1102, v5, v1103);
  return v1;
}


void DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v5; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v7; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4C26DA5 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C26DA5 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    if ( System_IO_File__Exists(CacheVersionFileName, 0) )
      System_IO_File__Delete(CacheVersionFileName, 0);
    v5 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
    if ( System_IO_File__Exists(CacheListFileName, 0) )
      System_IO_File__Delete(CacheListFileName, 0);
    v7 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v7);
    if ( System_IO_File__Exists(CacheFileName, 0) )
      System_IO_File__Delete(CacheFileName, 0);
  }
}


void DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int v10; // w26
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x20
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C26DA2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8541/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4C26DA2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C2D434((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v3, v5, v6);
  v10 = 1;
  do
  {
    v22 = v10;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v7, v8, v9);
    v12 = System_String__Format((System_String_o *)StringLiteral_8541/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v11, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get(v12, 0);
    if ( System_String__op_Equality(v13, v12, 0) )
      break;
    v17 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v17->fields._items;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++v17->fields._version;
      if ( items )
        continue;
    }
    sub_1C2D6EC(v17, v14);
    size = v17->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v13,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v13;
      sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v15, v16);
    }
    ++v10;
  }
  while ( v10 != 999 );
}


Il2CppObject *DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_30CE950 *method)
{
  long double v2; // q0
  const MethodInfo_30CE950_RGCTXs *rgctx_data; // x8
  const MethodInfo_30CE950 *_1_TMaster; // x19
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v7; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v10; // x20
  long double v11; // q0
  Il2CppObject *result; // x0
  intptr_t _2_TMaster; // x19
  System_RuntimeTypeHandle_o v14; // x0
  Il2CppObject *v15; // x19
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x19
  System_Enum_o v22; // [xsp+8h] [xbp-48h] BYREF
  int v23; // [xsp+18h] [xbp-38h]
  int v24; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&DataNameKind_Kind_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&StringLiteral_21450/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C7DC00();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_1C7DC00();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (rgctxDataDummy[12].fields._impl.fields.value & 0x10000000000LL) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C7DBA4(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v10) = *(_DWORD *)rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v10,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v10 = value;
    _1_TMaster = (const MethodInfo_30CE950 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_30CE950 *)sub_1C7DBA4(v11);
    if ( !v10 )
      return 0;
    result = (Il2CppObject *)sub_1C2D5CC(v10, _1_TMaster);
    if ( result )
      return result;
    sub_1C2D9AC(v10);
  }
  _2_TMaster = (intptr_t)_1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = _2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v14, 0);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C2D6EC(rgctxDataDummy, method);
  v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))rgctxDataDummy->klass->vtable._3_ToString.methodPtr)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._3_ToString.method);
  v24 = (int)v10;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v16, v17, v18);
  v23 = (int)v10;
  v22.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v22.monitor = (void *)-1LL;
  v20 = (Il2CppObject *)System_Enum__ToString(&v22, 0);
  v21 = (Il2CppObject *)System_String__Format_63499224((System_String_o *)StringLiteral_21450/*"master[{0}] is null[{1}:{2}]"*/, v15, v19, v20, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v21, 0);
  return 0;
}


Il2CppObject *DataManager__GetMaster_object_(const MethodInfo_30CE8FC *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1C7DC00();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30CE950 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C26D8D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_CreateMasterData__);
    sub_1C2D490(&System_Func_DataMasterBase____TypeInfo);
    byte_4C26D8D = 1;
  }
  v3 = (System_Func_object__o *)sub_1C2D6DC(System_Func_DataMasterBase____TypeInfo);
  System_Func_object____ctor(v3, 0, Method_DataManager_CreateMasterData__, 0);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v3, v4);
}


void DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v7; // x19
  __int64 v8; // x21
  System_Collections_Generic_Dictionary_int__object__o *v9; // x22
  const MethodInfo *v10; // x3
  int v11; // w8
  unsigned int v12; // w23
  __int64 v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_4C26D8E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1C2D490(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4C26D8E = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( (unsigned int)v7 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v7];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, const MethodInfo *))this->klass[1]._1.byval_arg.data)(
                                  this,
                                  *(_QWORD *)&this->klass[1]._1.byval_arg.bits,
                                  method);
        max_length = datalist->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v8 = ((__int64 (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))createMasterDataMethod->fields.invoke_impl)(
                 createMasterDataMethod->fields.method_code,
                 createMasterDataMethod->fields.method,
                 method),
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1C2D6EC(this, createMasterDataMethod);
    }
    v11 = *(_DWORD *)(v8 + 24);
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( v12 < v11 )
      {
        v13 = *(_QWORD *)(v8 + 8LL * (int)v12 + 32);
        if ( !v13 || !v9 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          *(_DWORD *)(v13 + 16),
          (Il2CppObject *)v13,
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v11 = *(_DWORD *)(v8 + 24);
        if ( (int)++v12 >= v11 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C2D6F4(this, createMasterDataMethod, method);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.datalist, v8, (int32_t)method, v10);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v9, v14, v15);
  }
}


void DataManager__LoadMasterDataThread(DataManager_o *this, Il2CppObject *indexList, const MethodInfo *method)
{
  void *v3; // x25
  DataManager_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v8; // x26
  unsigned __int64 i; // x27
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v15; // w23
  Il2CppObject *Item; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v21; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v23; // x25
  __int64 Index_object; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo_38AFA90 *v27; // x3
  struct DataMasterBase_array *v28; // x8
  DataMasterBase_o *v29; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo_38AFA90 *v35; // x3
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppObject *lockCountObj; // x22
  int v39; // w1
  _QWORD **v40; // x20
  __int64 v41; // x0
  Il2CppObject *v42; // x20
  __int64 v43; // x0
  struct System_Threading_SynchronizationContext_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  System_Threading_SendOrPostCallback_o *v48; // x21
  __int64 v49; // x0
  Il2CppObject *v50; // x23
  __int64 v51; // x0
  intptr_t v52; // x0
  __int64 v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  _QWORD *exception; // x0
  __int64 v57; // [xsp+10h] [xbp-90h]
  __int64 v58; // [xsp+18h] [xbp-88h] BYREF
  __int64 v59; // [xsp+20h] [xbp-80h]
  __int64 v60; // [xsp+28h] [xbp-78h] BYREF
  __int64 v61; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v63; // 0:x0.16
  System_Nullable_long__o v64; // 0:x0.16

  v5 = this;
  if ( (byte_4C26D9F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C2D490(&Method_System_Nullable_long___ctor__);
    sub_1C2D490(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1C2D490(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1C2D490(&DataManager___c__DisplayClass58_0_TypeInfo);
    byte_4C26D9F = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C2D6EC(this, indexList);
  v6 = sub_1C2D5CC(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v57 = sub_1C2D538(byte___TypeInfo, 2000);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = sub_1C2D6DC(DataManager___c__DisplayClass58_0_TypeInfo);
        DataManager___c__DisplayClass58_0___ctor((DataManager___c__DisplayClass58_0_o *)v10, 0);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1C2D6F4(v11, v12, v13);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C2D6EC(0, v12);
        v15 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v15,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1C2D6EC(Item, Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Item, v17, v18);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C2D6EC(0, v19);
        v21 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v15,
                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v23 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v23,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v23,
                           (const MethodInfo_31D46A4 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v28 = v5->fields.datalist;
            if ( !v28 )
              sub_1C2D6EC(Index_object, v25);
            if ( (unsigned int)Index_object >= LODWORD(v28->max_length) )
              sub_1C2D6F4(Index_object, v25, v26);
            if ( !v21 )
              sub_1C2D6EC(Index_object, v25);
            if ( !LODWORD(v21[1].monitor) )
              sub_1C2D6F4(Index_object, v25, v26);
            v29 = v28->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v63.fields.value = (int64_t)v21[2].klass;
            v60 = 0;
            v61 = 0;
            *(_QWORD *)&v63.fields.hasValue = &v60;
            System_Nullable_long____ctor(v63, Method_System_Nullable_long___ctor__, v27);
            if ( LODWORD(v21[1].monitor) <= 1 )
              sub_1C2D6F4(v32, v33, v34);
            v64.fields.value = (int64_t)v21[2].monitor;
            v58 = 0;
            v59 = 0;
            *(_QWORD *)&v64.fields.hasValue = &v58;
            System_Nullable_long____ctor(v64, Method_System_Nullable_long___ctor__, v35);
            if ( !v29 )
              sub_1C2D6EC(v36, v37);
            ((void (__fastcall *)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, _QWORD))v29->klass[1]._1.byval_arg.data)(
              v29,
              masterDataBytes,
              context,
              v60,
              v61,
              v58,
              v59,
              v57,
              *(_QWORD *)&v29->klass[1]._1.byval_arg.bits);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_65388012(lockCountObj, lockTaken, 0);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0);
      }
    }
  }
  else
  {
    sub_1C2D9AC(indexList);
    if ( v39 != 1 )
      sub_1D165C4();
    v40 = (_QWORD **)__cxa_begin_catch(v3);
    v41 = sub_1C2D4A4(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v41, **v40) & 1) != 0 )
    {
      __cxa_end_catch();
      v42 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65388012(v42, lockTaken, 0);
    }
    else
    {
      v43 = sub_1C2D4A4(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v43, **v40) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v40;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0);
      }
      __cxa_end_catch();
      v44 = v5->fields.context;
      v45 = sub_1C2D4A4(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v45 + 224) )
        j_il2cpp_runtime_class_init_0(v45);
      v46 = sub_1C2D4A4(&DataManager___c_TypeInfo);
      v48 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v46 + 184) + 8LL);
      if ( !v48 )
      {
        v49 = sub_1C2D4A4(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v49 + 224) )
          j_il2cpp_runtime_class_init_0(v49);
        v50 = **(Il2CppObject ***)(sub_1C2D4A4(&DataManager___c_TypeInfo) + 184);
        v51 = sub_1C2D4A4(&System_Threading_SendOrPostCallback_TypeInfo);
        v48 = (System_Threading_SendOrPostCallback_o *)sub_1C2D6DC(v51);
        v52 = sub_1C2D4A4(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v48, v50, v52, 0);
        *(_QWORD *)(*(_QWORD *)(sub_1C2D4A4(&DataManager___c_TypeInfo) + 184) + 8LL) = v48;
        v53 = sub_1C2D4A4(&DataManager___c_TypeInfo);
        sub_1C2D434((CGThumbnailListItem_o *)(*(_QWORD *)(v53 + 184) + 8LL), (int32_t)v48, v54, v55);
      }
      if ( !v44 )
        sub_1C2D6EC(v46, v47);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, const MethodInfo *))v44->klass->vtable._5_Post.methodPtr)(
        v44,
        v48,
        0,
        v44->klass->vtable._5_Post.method);
      v42 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65388012(v42, lockTaken, 0);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v42, 0);
  }
}


void DataManager__OnDestroy(DataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DataManager__StopWriteLocalFile(this, method);
  DataManager__StopMasterLoadThread(this, v3);
}


void DataManager__StartMasterLoadThread(
        DataManager_o *this,
        int32_t maxIndex,
        System_Collections_Generic_List_int__o *loadedIndices,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_int__o *v21; // x0
  System_Int32_array *v22; // x21
  System_Comparison_int__o *v23; // x22
  __int64 v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Threading_ParameterizedThreadStart_o *v27; // x24
  System_Threading_Thread_o *v28; // x23
  System_Func_int__bool__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  int v38; // w8
  bool v39; // nf

  if ( (byte_4C26D9D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Sort_int____77992992);
    sub_1C2D490(&System_Comparison_int__TypeInfo);
    sub_1C2D490(&Method_DataManager_LoadMasterDataThread__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1C2D490(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C2D490(&System_Threading_Thread_TypeInfo);
    sub_1C2D490(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__);
    sub_1C2D490(&DataManager___c__DisplayClass56_0_TypeInfo);
    sub_1C2D490(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__);
    sub_1C2D490(&DataManager___c__DisplayClass56_1_TypeInfo);
    byte_4C26D9D = 1;
  }
  v7 = sub_1C2D6DC(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)loadedIndices, v12, v13);
  Current = System_Threading_SynchronizationContext__get_Current(0);
  this->fields.context = Current;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v17;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v17, v19, v20);
  v21 = System_Linq_Enumerable__Range(0, maxIndex, 0);
  v22 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v23 = (System_Comparison_int__o *)sub_1C2D6DC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0);
  System_Array__Sort_int__50966292(
    v22,
    (System_Comparison_T__o *)v23,
    (const MethodInfo_309AF14 *)Method_System_Array_Sort_int____77992992);
  v24 = sub_1C2D6DC(DataManager___c__DisplayClass56_1_TypeInfo);
  DataManager___c__DisplayClass56_1___ctor((DataManager___c__DisplayClass56_1_o *)v24, 0);
  if ( !v24 )
LABEL_14:
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v24 + 24) = v7;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 24), v7, v25, v26);
  *(_DWORD *)(v24 + 16) = 0;
  do
  {
    v27 = (System_Threading_ParameterizedThreadStart_o *)sub_1C2D6DC(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v27,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0);
    v28 = (System_Threading_Thread_o *)sub_1C2D6DC(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_65423516(v28, v27, 0);
    if ( !v28 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v28, 1, 0);
    v29 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v29,
      (Il2CppObject *)v24,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0);
    v30 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
    v31 = System_Linq_Enumerable__ToArray_int_(
            v30,
            (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_65424096(v28, &v31->obj, 0);
    v8 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v8->fields._items;
    v35 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v28,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v28;
      sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v28, v32, v33);
    }
    v38 = *(_DWORD *)(v24 + 16) + 1;
    v39 = *(_DWORD *)(v24 + 16) - 4 < 0;
    *(_DWORD *)(v24 + 16) = v38;
  }
  while ( v39 != __OFSUB__(v38, 5) );
}


void DataManager__StartWriteLocalFile(DataManager_o *this, System_String_o *fileName, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Threading_ParameterizedThreadStart_o *v6; // x21
  System_Threading_Thread_o *v7; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1

  if ( (byte_4C26DA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_WriteLocalFileThread__);
    sub_1C2D490(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C2D490(&System_Threading_Thread_TypeInfo);
    byte_4C26DA0 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v6 = (System_Threading_ParameterizedThreadStart_o *)sub_1C2D6DC(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0);
  v7 = (System_Threading_Thread_o *)sub_1C2D6DC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_65423516(v7, v6, 0);
  this->fields.writeMasterDataThread = v7;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C2D434((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v7, v9, v10);
  if ( !*p_writeMasterDataThread )
    sub_1C2D6EC(0, v11);
  System_Threading_Thread__Start_65424096(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0);
}


void DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  CGThumbnailListItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C26D9E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4C26D9E = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (CGThumbnailListItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C2D6EC(Item, v7);
      v8 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0) )
        System_Threading_Thread__Abort(v8, 0);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0;
    sub_1C2D434(p_masterLoadThreads, 0, v9, v10);
  }
}


void DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1C2D6EC(0, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0);
    }
    *p_writeMasterDataThread = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v5, v6);
  }
}


void DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_Stream_o *v7; // x22
  System_IO_BinaryWriter_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v15; // w22
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppClass *klass; // x24
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x0
  __int64 v30; // x1
  System_IO_BinaryWriter_c *v31; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_IO_Stream_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4C26DA1 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryWriter_TypeInfo);
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C26DA1 = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v5 = param;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v5, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v7 = CatAndMouseGame__CatGameZ(v6, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C2D6DC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64369912(v8, v7, 0);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C2D6EC(v9, v10);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v8 )
      goto LABEL_34;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v15,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C2D6EC(0, v17);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C2D6F4(Item, v17, v18);
      if ( !v8 )
        sub_1C2D6EC(Item, v17);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._17_Write.method);
      v20 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v20 )
        sub_1C2D6EC(0, v19);
      masterDataBytes = this->fields.masterDataBytes;
      v22 = System_Collections_Generic_List_object___get_Item(
              v20,
              v15,
              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v22 )
        sub_1C2D6EC(0, v23);
      if ( !LODWORD(v22[1].monitor) )
        sub_1C2D6F4(v22, v23, v24);
      if ( !this->fields.saveDataMapList )
        sub_1C2D6EC(v22, v23);
      klass = v22[2].klass;
      v26 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v15,
              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v26 )
        sub_1C2D6EC(0, v27);
      if ( LODWORD(v26[1].monitor) <= 1 )
        sub_1C2D6F4(v26, v27, v28);
      v29 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._11_Write.methodPtr)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v26[2].monitor),
              v8->klass->vtable._11_Write.method);
      if ( size == ++v15 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C2D6EC(v29, v30);
    }
  }
  v31 = v8->klass;
  v32 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_31;
    }
    v34 = (__int64)&v31->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_31:
    v34 = sub_1C7DCA8(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v8, *(_QWORD *)(v34 + 8));
LABEL_34:
  if ( v6 )
  {
    v35 = v6->klass;
    v36 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = (__int64)&v35->vtable + 16 * *v37;
    }
    else
    {
LABEL_39:
      v38 = sub_1C7DCA8(v6, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v38)(v6, *(_QWORD *)(v38 + 8));
  }
  this->fields.writeMasterDataThread = 0;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C2D434((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v11, v12);
}


bool DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C26D88 & 1) == 0 )
  {
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C26D88 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0);
  return System_String__Concat_63496112(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C26D87 & 1) == 0 )
  {
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C26D87 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0);
  return System_String__Concat_63496112(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4C26D85 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&CacheFolderName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C26D85 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FolderName, 0);
}


System_String_o *DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C26D86 & 1) == 0 )
  {
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C26D86 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0);
  return System_String__Concat_63496112(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


int32_t DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D93 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D93 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D94 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D94 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dateVersion;
}


uint32_t DataManager__getMdk(DataManager_o *this, System_String_o *name, int32_t version, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x20
  uint32_t v9; // w0
  int32_t v10; // w11
  unsigned __int8 v11; // w13
  unsigned int v12; // w14
  uint32_t v13; // w11
  unsigned __int8 v14; // w9
  unsigned __int8 v15; // w12
  unsigned __int8 v16; // w8
  int v17; // w10

  if ( (byte_4C26DA3 & 1) == 0 )
  {
    sub_1C2D490(&Crc32_TypeInfo);
    byte_4C26DA3 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C2D6EC(0, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._18_GetBytes.method);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v9 = Crc32__Compute(v8, 0);
  v10 = version + 3;
  if ( version >= 0 )
    v10 = version;
  v11 = 3 * version + 1;
  v12 = version - (v10 & 0xFFFFFFFC);
  v13 = HIBYTE(v9);
  switch ( v12 )
  {
    case 1u:
      v16 = v9 - v11;
      v15 = BYTE2(v9) + v11;
      v14 = BYTE1(v9) * (v11 & 0xF);
      v17 = v13 ^ v11;
      break;
    case 2u:
      v16 = v9 ^ v11;
      v14 = BYTE1(v9) + v11;
      v15 = BYTE2(v9) * (v11 & 0xF);
      v17 = v13 - v11;
      break;
    case 3u:
      v14 = BYTE1(v9) - v11;
      v15 = BYTE2(v9) ^ v11;
      v16 = v9 * (v11 & 0xF);
      v17 = v13 + v11;
      break;
    default:
      v16 = v9 + v11;
      v14 = BYTE1(v9) ^ v11;
      v15 = BYTE2(v9) - v11;
      v17 = v13 * (v11 & 0xF);
      break;
  }
  return (v17 << 24) | (v15 << 16) | (v14 << 8) | (v16 << 8);
}


System_String_o *DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4C26D89 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&CacheFolderName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C26D89 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0);
  return System_String__Concat_63496112(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1048/*"/"*/,
           FolderNameNotConverted,
           0);
}


int32_t DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D98 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D98 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D97 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D97 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
{
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v4; // w10
  DataMasterBase_o *v5; // x11

  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_8;
  max_length = datalist->max_length;
  if ( max_length >= 1 )
  {
    this = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = datalist->m_Items[v4];
      if ( !v5 )
        break;
      ++v4;
      this = (DataManager_o *)(unsigned int)(v5->fields.revision + (_DWORD)this);
      if ( max_length == v4 )
        return (int)this;
    }
LABEL_8:
    sub_1C2D6EC(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D90 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D90 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C26D9B & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D9B = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->updateMasterDataResult;
}


bool DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


System_Collections_IEnumerator_o *DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C26D9A & 1) == 0 )
  {
    sub_1C2D490(&DataManager__readMasterData_d__47_TypeInfo);
    byte_4C26D9A = 1;
  }
  v3 = sub_1C2D6DC(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  DataManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v7; // w2
  int v8; // w9
  ManagerConfig_c *v9; // x0
  DataManager_c *v10; // x0
  System_String_o *CacheListFileName; // x21
  System_String_o *AllText; // x20
  System_String_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x2
  System_String_o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x2
  int v19; // w8
  int v20; // w22
  __int64 *v21; // x8
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x21
  System_String_o *v25; // x21
  System_String_o *v26; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v28; // x1
  System_Byte_array *v29; // x22
  uint32_t v30; // w22
  __int64 v31; // x0
  __int64 v32; // x2
  int v33; // w8
  __int64 v34; // x2
  DataManager_o *v35; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v37; // x21
  DataManager_o *v38; // x21
  System_String_o *v39; // x0
  ManagerConfig_c *v40; // x8
  System_String_o *v41; // x22
  const MethodInfo *v42; // x3
  DataManager_o *v43; // x20
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  const MethodInfo *v48; // x3
  struct System_Byte_array *v49; // x1
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  CGThumbnailListItem_o *p_saveNameList; // x0
  int v54; // w22
  int64_t v55; // x0
  DataManager_c *v56; // x8
  int64_t v57; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v59; // x22
  unsigned int v60; // w23
  System_String_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  DataManager_o *v64; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v66; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v68; // x8
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  DataManager_c *v72; // x0
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  int32_t v75; // w1
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  const MethodInfo *v82; // x3
  int64_t v83; // [xsp+8h] [xbp-58h] BYREF
  int v84; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4C26DA8 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&char___TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_5074/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1C2D490(&StringLiteral_5077/*"DataManager version load error : list file parameter error"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_25237/*"~"*/);
    sub_1C2D490(&StringLiteral_768/*") -> ("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_21426/*"master versiton different ("*/);
    sub_1C2D490(&StringLiteral_5078/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C2D490(&StringLiteral_5079/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1C2D490(&StringLiteral_5076/*"DataManager version load error : list file break"*/);
    byte_4C26DA8 = 1;
  }
  v84 = 0;
  v83 = 0;
  saveNameList = v2->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v5 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v7 = saveDataMapList->fields._size;
  v8 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v7, 0);
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v10 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(CacheListFileName, 0) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v13 = CatAndMouseGame__MouseGame3(AllText, 0);
  if ( v13 )
  {
    v14 = sub_1C2D538(char___TypeInfo, 1);
    if ( !v14 )
      sub_1C2D6EC(0, 0);
    if ( !*(_DWORD *)(v14 + 24) )
      sub_1C2D6F4(v14, v14, v15);
    *(_WORD *)(v14 + 32) = -257;
    v16 = System_String__Trim_63514412(v13, (System_Char_array *)v14, 0);
    v17 = sub_1C2D538(char___TypeInfo, 2);
    if ( !v17 )
      sub_1C2D6EC(0, 0);
    v19 = *(_DWORD *)(v17 + 24);
    if ( !v19 )
      sub_1C2D6F4(v17, v17, v18);
    *(_WORD *)(v17 + 32) = 13;
    if ( v19 == 1 )
      sub_1C2D6F4(v17, v17, v18);
    *(_WORD *)(v17 + 34) = 10;
    if ( !v16 )
      sub_1C2D6EC(v17, v17);
    v20 = System_String__IndexOfAny(v16, (System_Char_array *)v17, 0);
    if ( v20 < 2 )
    {
      v21 = &StringLiteral_5078/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v22 = System_String__Substring_63503788(v16, 0, v20, 0);
    v24 = v22;
    if ( !v22 )
      sub_1C2D6EC(0, v23);
    if ( System_String__StartsWith(v22, (System_String_o *)StringLiteral_25237/*"~"*/, 0) )
    {
      v25 = System_String__Substring(v24, 1, 0);
      v26 = System_String__Substring(v16, v20 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C2D6EC(0, v28);
      v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v26,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v30 = Crc32__Compute(v29, 0);
      if ( System_UInt32__Parse(v25, 0) == v30 )
      {
        v31 = sub_1C2D538(char___TypeInfo, 2);
        if ( !v31 )
          sub_1C2D6EC(0, 0);
        v33 = *(_DWORD *)(v31 + 24);
        if ( !v33 )
          sub_1C2D6F4(v31, v31, v32);
        *(_WORD *)(v31 + 32) = 13;
        if ( v33 == 1 )
          sub_1C2D6F4(v31, v31, v32);
        *(_WORD *)(v31 + 34) = 10;
        if ( !v26 )
          sub_1C2D6EC(v31, v31);
        this = (DataManager_o *)System_String__Split_63507056(v26, (System_Char_array *)v31, 1, 0);
        v35 = this;
        if ( !this )
          return 1;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        if ( !m_CancellationTokenSource )
          goto LABEL_62;
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_113;
        this = *(DataManager_o **)&this->fields._DispLog;
        if ( !this )
          goto LABEL_119;
        this = (DataManager_o *)System_String__StartsWith(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_1768/*"@"*/,
                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v35->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v37 = *(System_String_o **)&v35->fields._DispLog;
          this = (DataManager_o *)sub_1C2D538(char___TypeInfo, 1);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v37 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_63506940(v37, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_119;
          v38 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v39 = System_String__Substring((System_String_o *)this, 1, 0);
          v40 = ManagerConfig_TypeInfo;
          v41 = v39;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v40 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v40->static_fields->MasterDataCacheVer, v41, 0) )
          {
            this = (DataManager_o *)sub_1C2D538(string___TypeInfo, 5);
            if ( this )
            {
              v43 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v44 = StringLiteral_21426/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21426/*"master versiton different ("*/;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields._DispLog, v44, v34, v42);
                if ( LODWORD(v43->fields.m_CancellationTokenSource) > 1 )
                {
                  v43->fields.datalist = (struct DataMasterBase_array *)v41;
                  sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.datalist, (int32_t)v41, v34, v45);
                  if ( LODWORD(v43->fields.m_CancellationTokenSource) > 2 )
                  {
                    v47 = StringLiteral_768/*") -> ("*/;
                    v43->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_768/*") -> ("*/;
                    sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.lookup, v47, v34, v46);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v43->fields.m_CancellationTokenSource) > 3 )
                    {
                      v49 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v43->fields.masterDataBytes = v49;
                      sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.masterDataBytes, (int32_t)v49, v34, v48);
                      if ( LODWORD(v43->fields.m_CancellationTokenSource) > 4 )
                      {
                        v51 = StringLiteral_759/*")"*/;
                        v43->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_759/*")"*/;
                        p_saveNameList = (CGThumbnailListItem_o *)&v43->fields.saveNameList;
                        goto LABEL_104;
                      }
                    }
                  }
                }
              }
              goto LABEL_113;
            }
            goto LABEL_119;
          }
          if ( LODWORD(v38->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v38->fields.datalist, 0);
            v84 = (int)this;
            if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v54 = (int)this;
            v55 = System_Int64__Parse((System_String_o *)v38->fields.lookup, 0);
            v56 = DataManager_TypeInfo;
            v83 = v55;
            v57 = v55;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v56 = DataManager_TypeInfo;
            }
            static_fields = v56->static_fields;
            if ( static_fields->readDataVersion != v54 )
              goto LABEL_91;
            if ( !v56->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v56);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v57 )
            {
              v59 = v35->fields.m_CancellationTokenSource;
              if ( (int)v59 < 2 )
                return 1;
              v60 = 2;
              while ( 1 )
              {
                v61 = (System_String_o *)*((_QWORD *)&v35->fields._DispLog + (int)(v60 - 1));
                this = (DataManager_o *)sub_1C2D538(char___TypeInfo, 1);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v61 )
                  break;
                this = (DataManager_o *)System_String__Split_63506940(v61, (System_Char_array *)this, 0);
                if ( !this )
                  break;
                v64 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v64->fields._DispLog;
                m_CachedPtr = this->fields.m_CachedPtr;
                v66 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !m_CachedPtr )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                }
                else
                {
                  v68 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v68 + 32) = method;
                  sub_1C2D434((CGThumbnailListItem_o *)(v68 + 32), (int32_t)method, v62, v63);
                }
                if ( (_DWORD)v59 == v60 )
                  return 1;
                if ( v60++ >= LODWORD(v35->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1C2D538(string___TypeInfo, 9);
              if ( this )
              {
                v43 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v71 = StringLiteral_21426/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21426/*"master versiton different ("*/;
                  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._DispLog, v71, v34, v70);
                  v72 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v72 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v72->static_fields, 0);
                  if ( LODWORD(v43->fields.m_CancellationTokenSource) > 1 )
                  {
                    v43->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.datalist, (int32_t)this, v34, v73);
                    if ( LODWORD(v43->fields.m_CancellationTokenSource) > 2 )
                    {
                      v75 = (int)StringLiteral_113/*" "*/;
                      v43->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_113/*" "*/;
                      sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.lookup, v75, v34, v74);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0);
                      if ( LODWORD(v43->fields.m_CancellationTokenSource) > 3 )
                      {
                        v43->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.masterDataBytes, (int32_t)this, v34, v76);
                        if ( LODWORD(v43->fields.m_CancellationTokenSource) > 4 )
                        {
                          v78 = StringLiteral_768/*") -> ("*/;
                          v43->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_768/*") -> ("*/;
                          sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.saveNameList, v78, v34, v77);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v84, 0);
                          if ( LODWORD(v43->fields.m_CancellationTokenSource) > 5 )
                          {
                            v43->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.saveDataMapList, (int32_t)this, v34, v79);
                            if ( LODWORD(v43->fields.m_CancellationTokenSource) > 6 )
                            {
                              v81 = (int)StringLiteral_113/*" "*/;
                              *(_QWORD *)&v43->fields.lastFrameTime = StringLiteral_113/*" "*/;
                              sub_1C2D434((CGThumbnailListItem_o *)&v43->fields.lastFrameTime, v81, v34, v80);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v83, 0);
                              if ( LODWORD(v43->fields.m_CancellationTokenSource) > 7 )
                              {
                                v43->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C2D434(
                                  (CGThumbnailListItem_o *)&v43->fields.masterCheckName,
                                  (int32_t)this,
                                  v34,
                                  v82);
                                if ( LODWORD(v43->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v51 = StringLiteral_759/*")"*/;
                                  v43->fields.lockCountObj = (Il2CppObject *)StringLiteral_759/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v43->fields.lockCountObj;
LABEL_104:
                                  sub_1C2D434(p_saveNameList, v51, v34, v50);
                                  if ( System_String__Concat_63498380((System_String_array *)v43, 0) )
                                    goto LABEL_64;
                                  return 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_113:
                sub_1C2D6F4(this, method, v34);
              }
            }
LABEL_119:
            sub_1C2D6EC(this, method);
          }
          v21 = &StringLiteral_5077/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v21 = &StringLiteral_5076/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v21 = &StringLiteral_5074/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v21 = &StringLiteral_5079/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v21 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *DataManager__readMasterVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C26D99 & 1) == 0 )
  {
    sub_1C2D490(&DataManager__readMasterVersion_d__46_TypeInfo);
    byte_4C26D99 = 1;
  }
  v3 = sub_1C2D6DC(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v6; // x1
  System_String_o *AllText; // x20
  System_String_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x2
  System_String_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x2
  int v14; // w8
  int v15; // w22
  __int64 *v16; // x8
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  System_String_o *v20; // x21
  System_String_o *v21; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v23; // x1
  System_Byte_array *v24; // x22
  uint32_t v25; // w22
  __int64 v26; // x0
  __int64 v27; // x2
  int v28; // w8
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x20
  __int64 v32; // x8
  System_String_o *v33; // x20
  __int64 v34; // x20
  System_String_o *v35; // x0
  ManagerConfig_c *v36; // x8
  System_String_o *v37; // x21
  const MethodInfo *v38; // x3
  __int64 v39; // x20
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  System_String_o *v48; // x8
  DataManager_c *v49; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v52; // x8
  int32_t v53; // w19
  struct DataManager_StaticFields *v54; // x8
  int64_t v55; // x0
  struct DataManager_StaticFields *v56; // x8

  if ( (byte_4C26DA6 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&char___TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_5073/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C2D490(&StringLiteral_5070/*"DataManager boot load error : list file break"*/);
    sub_1C2D490(&StringLiteral_5072/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C2D490(&StringLiteral_5068/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1C2D490(&StringLiteral_25237/*"~"*/);
    sub_1C2D490(&StringLiteral_21425/*"master data versiton different ("*/);
    sub_1C2D490(&StringLiteral_768/*") -> ("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_5071/*"DataManager boot load error : list file parameter error"*/);
    byte_4C26DA6 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(CacheVersionFileName, 0) )
  {
LABEL_59:
    v49 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v49 = DataManager_TypeInfo;
    }
    static_fields = v49->static_fields;
    static_fields->dataVersion = 0;
    static_fields->dateVersion = 0;
    DataManager__ClearSaveDataList(this, v6);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v8 = CatAndMouseGame__MouseGame1(AllText, 0, 0);
  if ( v8 )
  {
    v9 = sub_1C2D538(char___TypeInfo, 1);
    if ( !v9 )
      sub_1C2D6EC(0, 0);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C2D6F4(v9, v9, v10);
    *(_WORD *)(v9 + 32) = -257;
    v11 = System_String__Trim_63514412(v8, (System_Char_array *)v9, 0);
    v12 = sub_1C2D538(char___TypeInfo, 2);
    if ( !v12 )
      sub_1C2D6EC(0, 0);
    v14 = *(_DWORD *)(v12 + 24);
    if ( !v14 )
      sub_1C2D6F4(v12, v12, v13);
    *(_WORD *)(v12 + 32) = 13;
    if ( v14 == 1 )
      sub_1C2D6F4(v12, v12, v13);
    *(_WORD *)(v12 + 34) = 10;
    if ( !v11 )
      sub_1C2D6EC(v12, v12);
    v15 = System_String__IndexOfAny(v11, (System_Char_array *)v12, 0);
    if ( v15 < 2 )
    {
      v16 = &StringLiteral_5072/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v48 = (System_String_o *)*v16;
LABEL_58:
      if ( v48 )
        goto LABEL_59;
      return 1;
    }
    v17 = System_String__Substring_63503788(v11, 0, v15, 0);
    v19 = v17;
    if ( !v17 )
      sub_1C2D6EC(0, v18);
    if ( !System_String__StartsWith(v17, (System_String_o *)StringLiteral_25237/*"~"*/, 0) )
    {
      v16 = &StringLiteral_5073/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v20 = System_String__Substring(v19, 1, 0);
    v21 = System_String__Substring(v11, v15 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_1C2D6EC(0, v23);
    v24 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v21,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v25 = Crc32__Compute(v24, 0);
    if ( System_UInt32__Parse(v20, 0) != v25 )
    {
      v16 = &StringLiteral_5068/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v26 = sub_1C2D538(char___TypeInfo, 2);
    if ( !v26 )
      sub_1C2D6EC(0, 0);
    v28 = *(_DWORD *)(v26 + 24);
    if ( !v28 )
      sub_1C2D6F4(v26, v26, v27);
    *(_WORD *)(v26 + 32) = 13;
    if ( v28 == 1 )
      sub_1C2D6F4(v26, v26, v27);
    *(_WORD *)(v26 + 34) = 10;
    if ( !v21 )
      sub_1C2D6EC(v26, v26);
    v29 = (__int64)System_String__Split_63507056(v21, (System_Char_array *)v26, 1, 0);
    v31 = v29;
    if ( !v29 )
      return 1;
    v32 = *(_QWORD *)(v29 + 24);
    if ( v32 )
    {
      if ( !(_DWORD)v32 )
        goto LABEL_78;
      v29 = *(_QWORD *)(v29 + 32);
      if ( !v29 )
        goto LABEL_83;
      v29 = System_String__StartsWith((System_String_o *)v29, (System_String_o *)StringLiteral_1768/*"@"*/, 0);
      if ( (v29 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v31 + 24) )
          goto LABEL_78;
        v33 = *(System_String_o **)(v31 + 32);
        v29 = sub_1C2D538(char___TypeInfo, 1);
        if ( v29 )
        {
          v6 = (const MethodInfo *)v29;
          if ( !*(_DWORD *)(v29 + 24) )
            goto LABEL_78;
          *(_WORD *)(v29 + 32) = 44;
          if ( v33 )
          {
            v29 = (__int64)System_String__Split_63506940(v33, (System_Char_array *)v29, 0);
            if ( v29 )
            {
              v34 = v29;
              if ( !*(_DWORD *)(v29 + 24) )
                goto LABEL_78;
              v29 = *(_QWORD *)(v29 + 32);
              if ( v29 )
              {
                v35 = System_String__Substring((System_String_o *)v29, 1, 0);
                v36 = ManagerConfig_TypeInfo;
                v37 = v35;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v36 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v36->static_fields->MasterDataCacheVer, v37, 0) )
                {
                  if ( *(_DWORD *)(v34 + 24) != 3 )
                  {
                    v16 = &StringLiteral_5071/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v29 = System_Int32__Parse(*(System_String_o **)(v34 + 40), 0);
                  v52 = DataManager_TypeInfo;
                  v53 = v29;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v52 = DataManager_TypeInfo;
                  }
                  v54 = v52->static_fields;
                  v54->dataVersion = v53;
                  v54->readDataVersion = v53;
                  if ( *(_DWORD *)(v34 + 24) > 2u )
                  {
                    v55 = System_Int64__Parse(*(System_String_o **)(v34 + 48), 0);
                    v56 = DataManager_TypeInfo->static_fields;
                    v56->dateVersion = v55;
                    v56->readDateVersion = v55;
                    return 1;
                  }
LABEL_78:
                  sub_1C2D6F4(v29, v6, v30);
                }
                v29 = sub_1C2D538(string___TypeInfo, 5);
                if ( v29 )
                {
                  v39 = v29;
                  if ( *(_DWORD *)(v29 + 24) )
                  {
                    v40 = StringLiteral_21425/*"master data versiton different ("*/;
                    *(_QWORD *)(v29 + 32) = StringLiteral_21425/*"master data versiton different ("*/;
                    sub_1C2D434((CGThumbnailListItem_o *)(v29 + 32), v40, v30, v38);
                    if ( *(_DWORD *)(v39 + 24) > 1u )
                    {
                      *(_QWORD *)(v39 + 40) = v37;
                      sub_1C2D434((CGThumbnailListItem_o *)(v39 + 40), (int32_t)v37, v30, v41);
                      if ( *(_DWORD *)(v39 + 24) > 2u )
                      {
                        v43 = StringLiteral_768/*") -> ("*/;
                        *(_QWORD *)(v39 + 48) = StringLiteral_768/*") -> ("*/;
                        sub_1C2D434((CGThumbnailListItem_o *)(v39 + 48), v43, v30, v42);
                        v29 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v29 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v39 + 24) > 3u )
                        {
                          v45 = *(_QWORD *)(*(_QWORD *)(v29 + 184) + 32LL);
                          *(_QWORD *)(v39 + 56) = v45;
                          sub_1C2D434((CGThumbnailListItem_o *)(v39 + 56), v45, v30, v44);
                          if ( *(_DWORD *)(v39 + 24) > 4u )
                          {
                            v47 = StringLiteral_759/*")"*/;
                            *(_QWORD *)(v39 + 64) = StringLiteral_759/*")"*/;
                            sub_1C2D434((CGThumbnailListItem_o *)(v39 + 64), v47, v30, v46);
                            v48 = System_String__Concat_63498380((System_String_array *)v39, 0);
                            goto LABEL_58;
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_78;
                }
              }
            }
          }
        }
LABEL_83:
        sub_1C2D6EC(v29, v6);
      }
    }
    v16 = &StringLiteral_5070/*"DataManager boot load error : list file break"*/;
    goto LABEL_57;
  }
  return 1;
}


void DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  DataManager_c *v8; // x0
  struct DataManager_StaticFields *static_fields; // x8
  CGThumbnailListItem_o *p_updateData; // x0
  int32_t v11; // w1
  struct DataManager_StaticFields *v12; // x0

  if ( (byte_4C26D96 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D96 = 1;
  }
  v8 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v8 = DataManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_18;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = DataManager_TypeInfo->static_fields;
    }
    static_fields->updateData = 0;
    p_updateData = (CGThumbnailListItem_o *)&static_fields->updateData;
    v11 = 0;
  }
  else
  {
LABEL_18:
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = DataManager_TypeInfo;
    }
    v12 = v8->static_fields;
    v11 = (int)obj;
    v12->updateData = obj;
    p_updateData = (CGThumbnailListItem_o *)&v12->updateData;
    p_updateData[-1].fields._Type_k__BackingField = dataVer;
    p_updateData[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)dateVer;
  }
  sub_1C2D434(p_updateData, v11, dateVer, (const MethodInfo *)obj);
}


void DataManager__setMasterDataVersion(DataManager_o *this, int32_t dataVer, int64_t dateVer, const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4C26D95 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D95 = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->dataVersion = dataVer;
  static_fields->dateVersion = dateVer;
}


void DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  int32_t v6; // w1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  DataManager_c *v15; // x8
  struct DataManager_StaticFields *v16; // x0
  DataManager_c *v17; // x0

  if ( (byte_4C26D8F & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26D8F = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  v6 = StringLiteral_1/*""*/;
  static_fields = v5->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->serverHash, v6, (int32_t)method, v3);
  if ( obj )
  {
    v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                              obj,
                              obj->klass->vtable[3].method);
    v9 = System_String__op_Equality(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v9 )
    {
      if ( !v8 )
        sub_1C2D6EC(v9, v10);
      v11 = System_String__Substring(v8, v8->fields._stringLength - 1, 0);
      if ( System_String__op_Equality(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
      {
        v14 = System_String__Substring_63503788(v8, 0, v8->fields._stringLength - 1, 0);
        v15 = DataManager_TypeInfo;
        v8 = v14;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v15 = DataManager_TypeInfo;
        }
        v16 = v15->static_fields;
      }
      else
      {
        v17 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v17 = DataManager_TypeInfo;
        }
        v16 = v17->static_fields;
      }
      v16->serverHash = v8;
      sub_1C2D434((CGThumbnailListItem_o *)&v16->serverHash, (int32_t)v8, v12, v13);
    }
  }
}


void DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4C26D91 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26D91 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4C26DAA & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4C26DAA = 1;
  }
  if ( obj
    && ((naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
         obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C2D9AC(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_41386460(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void DataManager__updateJsonData_41386460(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  __int64 v5; // x2
  DataManager_o *v6; // x21
  __int64 naturalAligment; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v10; // w26
  unsigned int v11; // w9
  __int64 v12; // x27
  DataMasterBase_o *v13; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v15; // x8
  DataMasterBase_o *v16; // x23
  __int64 v17; // x9
  struct DataMasterBase_array *v18; // x8
  int v19; // w9
  int v20; // w26
  unsigned int v21; // w9
  __int64 v22; // x27
  DataMasterBase_o *v23; // x8
  Il2CppObject *v24; // x22
  struct DataMasterBase_array *v25; // x8
  DataMasterBase_o *v26; // x23
  __int64 v27; // x9
  struct DataMasterBase_array *v28; // x8
  int v29; // w9
  int v30; // w25
  unsigned int v31; // w9
  __int64 v32; // x26
  DataMasterBase_o *v33; // x8
  Il2CppObject *v34; // x21
  struct DataMasterBase_array *v35; // x8
  DataMasterBase_o *v36; // x22
  DataManager_o *v37; // x0
  const MethodInfo *v38; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4C26DAB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&StringLiteral_24425/*"updated"*/);
    sub_1C2D490(&StringLiteral_18558/*"deleted"*/);
    this = (DataManager_o *)sub_1C2D490(&StringLiteral_23028/*"replaced"*/);
    byte_4C26DAB = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1C2D6EC(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18558/*"deleted"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18558/*"deleted"*/,
                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v6 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_60;
      }
    }
    datalist = v4->fields.datalist;
    if ( !datalist )
      goto LABEL_57;
    max_length = datalist->max_length;
    v10 = max_length - 1;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( v11 < LODWORD(datalist->max_length) )
      {
        v12 = (int)v11;
        v13 = datalist->m_Items[v11];
        if ( !v13 || !v6 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v13->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = v4->fields.datalist;
          if ( !v15 )
            goto LABEL_57;
          if ( (unsigned int)v12 >= LODWORD(v15->max_length) )
            break;
          v16 = v15->m_Items[v12];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v16 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v16->klass[1]._1.element_class)(
                                    v16,
                                    this,
                                    v16->klass[1]._1.castClass);
        }
        if ( v10 == (_DWORD)v12 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v11 = v12 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1C2D6F4(this, data, v5);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24425/*"updated"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24425/*"updated"*/,
                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v6 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v17 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v17
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C2D9AC(v6);
      goto LABEL_61;
    }
  }
  v18 = v4->fields.datalist;
  if ( !v18 )
    goto LABEL_57;
  v19 = v18->max_length;
  v20 = v19 - 1;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < LODWORD(v18->max_length) )
    {
      v22 = (int)v21;
      v23 = v18->m_Items[v21];
      if ( !v23 || !v6 )
        goto LABEL_57;
      v24 = (Il2CppObject *)v23->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                v24,
                                (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = v4->fields.datalist;
        if ( !v25 )
          goto LABEL_57;
        if ( (unsigned int)v22 >= LODWORD(v25->max_length) )
          goto LABEL_59;
        v26 = v25->m_Items[v22];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                  v24,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v26 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD))v26->klass[1]._1.this_arg.data)(
                                  v26,
                                  this,
                                  *(_QWORD *)&v26->klass[1]._1.this_arg.bits);
      }
      if ( v20 == (_DWORD)v22 )
        goto LABEL_40;
      v18 = v4->fields.datalist;
      v21 = v22 + 1;
      if ( !v18 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23028/*"replaced"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23028/*"replaced"*/,
                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v27 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v27
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v27 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C2D9AC(v3);
      DataManager__getRevisionTotal(v37, v38);
      return;
    }
  }
  v28 = v4->fields.datalist;
  if ( !v28 )
    goto LABEL_57;
  v29 = v28->max_length;
  v30 = v29 - 1;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < LODWORD(v28->max_length) )
    {
      v32 = (int)v31;
      v33 = v28->m_Items[v31];
      if ( !v33 || !v3 )
        goto LABEL_57;
      v34 = (Il2CppObject *)v33->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v34,
                                (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v35 = v4->fields.datalist;
        if ( !v35 )
          goto LABEL_57;
        if ( (unsigned int)v32 >= LODWORD(v35->max_length) )
          goto LABEL_59;
        v36 = v35->m_Items[v32];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v34,
                                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v36 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, const char *))v36->klass[1]._1.name)(
                                  v36,
                                  this,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v36->klass[1]._1.namespaze);
      }
      if ( v30 == (_DWORD)v32 )
        return;
      v28 = v4->fields.datalist;
      v31 = v32 + 1;
      if ( !v28 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
}


System_Collections_IEnumerator_o *DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C26D9C & 1) == 0 )
  {
    sub_1C2D490(&DataManager__updateMasterData_d__49_TypeInfo);
    byte_4C26D9C = 1;
  }
  v5 = sub_1C2D6DC(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DataManager__updateWebViewData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C26D92 & 1) == 0 )
  {
    sub_1C2D490(&DataManager__updateWebViewData_d__38_TypeInfo);
    byte_4C26D92 = 1;
  }
  v3 = sub_1C2D6DC(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v9; // x20
  System_Text_StringBuilder_o *v10; // x21
  ManagerConfig_c *v11; // x0
  int v12; // w8
  int v13; // w24
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x19
  System_Byte_array *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x19
  System_String_o *v23; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  uint32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C26DA9 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&System_IO_StreamWriter_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&uint_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_25240/*"~{0}\n{1}"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C26DA9 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = (System_Collections_Generic_List_object__o *)DataManager__getCacheListFileName((const MethodInfo *)v4);
    saveNameList = this->fields.saveNameList;
    if ( !saveNameList )
      goto LABEL_17;
    size = saveNameList->fields._size;
    v9 = (System_String_o *)CacheListFileName;
    v10 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63536280(v10, (size << 7) + 128, 0);
    if ( !v10 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)StringLiteral_1768/*"@"*/, 0);
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_63542928(v10, v11->static_fields->MasterDataCacheVer, 0);
    System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63545424(v10, DataManager_TypeInfo->static_fields->dataVersion, 0);
    System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63545512(v10, DataManager_TypeInfo->static_fields->dateVersion, 0);
    System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v12 = CacheListFileName->fields._size;
    v13 = v12 - 1;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v14,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)Item, 0);
        System_Text_StringBuilder__Append_63542928(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        if ( v13 == v14 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v14;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                            v10,
                            v10->klass->vtable._3_ToString.method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0);
    if ( !CacheListFileName )
LABEL_17:
      sub_1C2D6EC(CacheListFileName, v6);
    v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, const MethodInfo *))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.methodPtr)(
                                 CacheListFileName,
                                 v16,
                                 CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v32 = Crc32__Compute(v17, 0);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v32, v18, v19, v20);
    v22 = System_String__Format_63499156((System_String_o *)StringLiteral_25240/*"~{0}\n{1}"*/, v21, v16, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v23 = CatAndMouseGame__CatGame3(v22, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    v25 = (System_IO_StreamWriter_o *)sub_1C2D6DC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64304644(v25, v9, 0, UTF8, 0);
    if ( !v25 )
      sub_1C2D6EC(v26, v27);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v25->klass->vtable._16_Write.methodPtr)(
      v25,
      v23,
      v25->klass->vtable._16_Write.method);
    klass = v25->klass;
    v29 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v31 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
  }
}


void DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  char *v9; // x20
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  System_String_o *v21; // x20
  System_Byte_array *v22; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x20
  System_Text_Encoding_o *v26; // x22
  System_IO_StreamWriter_o *v27; // x21
  uint32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C26DA7 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&System_IO_StreamWriter_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_25237/*"~"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C26DA7 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    UTF8 = (char *)sub_1C2D538(string___TypeInfo, 7);
    if ( !UTF8 )
      goto LABEL_27;
    v9 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v10 = StringLiteral_1768/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1768/*"@"*/;
    sub_1C2D434((CGThumbnailListItem_o *)(UTF8 + 32), v10, v7, v8);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v9 + 6) <= 1u )
      goto LABEL_26;
    v12 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v9 + 5) = v12;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), v12, v7, v11);
    if ( *((_DWORD *)v9 + 6) <= 2u )
      goto LABEL_26;
    v14 = StringLiteral_811/*","*/;
    *((_QWORD *)v9 + 6) = StringLiteral_811/*","*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 48), v14, v7, v13);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0);
    if ( *((_DWORD *)v9 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v9 + 7) = UTF8;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), (int32_t)UTF8, v7, v15);
    if ( *((_DWORD *)v9 + 6) <= 4u
      || (v17 = StringLiteral_811/*","*/,
          *((_QWORD *)v9 + 8) = StringLiteral_811/*","*/,
          sub_1C2D434((CGThumbnailListItem_o *)(v9 + 64), v17, v7, v16),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0),
          *((_DWORD *)v9 + 6) <= 5u)
      || (*((_QWORD *)v9 + 9) = UTF8,
          sub_1C2D434((CGThumbnailListItem_o *)(v9 + 72), (int32_t)UTF8, v7, v18),
          *((_DWORD *)v9 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C2D6F4(UTF8, v6, v7);
    }
    v20 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v9 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 80), v20, v7, v19);
    v21 = System_String__Concat_63498380((System_String_array *)v9, 0);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_27;
    v22 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v21,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v28 = Crc32__Compute(v22, 0);
    v23 = System_UInt32__ToString((uint32_t)&v28, 0);
    v24 = System_String__Concat_63498116(
            (System_String_o *)StringLiteral_25237/*"~"*/,
            v23,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v21,
            0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v25 = CatAndMouseGame__CatGame1(v24, 0, 0);
    v26 = System_Text_Encoding__get_UTF8(0);
    v27 = (System_IO_StreamWriter_o *)sub_1C2D6DC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64304644(v27, CacheVersionFileName, 0, v26, 0);
    if ( !v27 )
LABEL_27:
      sub_1C2D6EC(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v27->klass->vtable._16_Write.methodPtr)(
      v27,
      v25,
      v27->klass->vtable._16_Write.method);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v27->klass->vtable._8_Close.methodPtr)(
      v27,
      v27->klass->vtable._8_Close.method);
  }
}


void DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C26DAF & 1) == 0 )
  {
    sub_1C2D490(&DataManager___c_TypeInfo);
    byte_4C26DAF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataManager___c___LoadMasterDataThread_b__58_1(DataManager___c_o *this, Il2CppObject *_, const MethodInfo *method)
{
  ;
}


void DataManager___c__DisplayClass49_0___ctor(DataManager___c__DisplayClass49_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass49_0___updateMasterData_b__1(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


bool DataManager___c__DisplayClass49_0___updateMasterData_b__2(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass49_1___ctor(DataManager___c__DisplayClass49_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass49_1___updateMasterData_b__3(
        DataManager___c__DisplayClass49_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass56_0___ctor(DataManager___c__DisplayClass56_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t DataManager___c__DisplayClass56_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass56_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  __int64 v8; // x2
  struct DataManager_o *v9; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4C26DB0 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4C26DB0 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass56_0_o *)_4__this->fields.saveDataMapList;
  if ( !this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  b,
                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v9 = v6->fields.__4__this;
  if ( !v9
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v9->fields.saveDataMapList) == 0
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C2D6F4(this, *(_QWORD *)&a, v8);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void DataManager___c__DisplayClass56_1___ctor(DataManager___c__DisplayClass56_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DataManager___c__DisplayClass56_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass56_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_1_o *v4; // x20
  struct DataManager___c__DisplayClass56_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4C26DB1 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C26DB1 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0 )
      sub_1C2D6EC(this, *(_QWORD *)&x);
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void DataManager___c__DisplayClass58_0___ctor(DataManager___c__DisplayClass58_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass58_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass58_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0);
}


void DataManager__readMasterData_d__47___ctor(
        DataManager__readMasterData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterData_d__47__MoveNext(DataManager__readMasterData_d__47_o *this, const MethodInfo *method)
{
  DataManager__readMasterData_d__47_o *v2; // x20
  struct DataManager_o *_4__this; // x19
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char v8; // w8
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v11; // w10
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v13; // x21
  System_IO_Stream_o *v14; // x24
  System_IO_Stream_o *v15; // x25
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  UnityEngine_WaitForEndOfFrame_o *v21; // x19
  CGThumbnailListItem_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int v25; // w8
  DataManager_c *v26; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  System_IO_Stream_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_IO_MemoryStream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v45; // x21
  System_IO_BinaryReader_o *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v51; // x0
  __int64 v52; // x1
  int v53; // w22
  __int64 v54; // x23
  __int64 v55; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v57; // x0
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  int v61; // w8
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  System_IO_BinaryReader_c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  System_IO_MemoryStream_c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  UnityEngine_WaitForEndOfFrame_o *v74; // x19
  int32_t v75; // w2
  const MethodInfo *v76; // x3

  v2 = this;
  if ( (byte_4C26DB2 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryReader_TypeInfo);
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__47_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C26DB2 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_96;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
        v2->fields.__2__current = (Il2CppObject *)v4;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v4, v6, v7);
        v8 = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return v8 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName(0);
        if ( System_IO_File__Exists(CacheFileName, 0) )
        {
          v13 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v13, 0);
          v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v15 = CatAndMouseGame__MouseGameZ(v14, 0);
          v16 = sub_1C2D538(byte___TypeInfo, 0x4000);
          v18 = v16;
          if ( !v16 )
            sub_1C2D6EC(0, v17);
          if ( !v15 )
            sub_1C2D6EC(v16, v17);
          while ( 1 )
          {
            v19 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._31_unknown.methodPtr)(
                    v15,
                    v18,
                    0,
                    *(unsigned int *)(v18 + 24),
                    v15->klass->vtable._31_unknown.method);
            if ( (int)v19 <= 0 )
              break;
            if ( !v13 )
              sub_1C2D6EC(v19, v20);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._34_Write.methodPtr)(
              v13,
              v18,
              0,
              (unsigned int)v19,
              v13->klass->vtable._34_Write.method);
          }
          klass = v15->klass;
          v28 = *(unsigned __int16 *)&v15->klass->_2.rank;
          if ( *(_WORD *)&v15->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v28;
              p_offset += 4;
              if ( !v28 )
                goto LABEL_37;
            }
            v30 = (__int64)&klass->vtable + 16 * *p_offset;
          }
          else
          {
LABEL_37:
            v30 = sub_1C7DCA8(v15, System_IDisposable_TypeInfo, 0);
          }
          v31 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v30)(v15, *(_QWORD *)(v30 + 8));
          if ( v14 )
          {
            v33 = v14->klass;
            v34 = *(unsigned __int16 *)&v14->klass->_2.rank;
            if ( *(_WORD *)&v14->klass->_2.rank )
            {
              v35 = &v33->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
              {
                --v34;
                v35 += 4;
                if ( !v34 )
                  goto LABEL_44;
              }
              v36 = (__int64)&v33->vtable + 16 * *v35;
            }
            else
            {
LABEL_44:
              v36 = sub_1C7DCA8(v14, System_IDisposable_TypeInfo, 0);
            }
            v31 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v36)(v14, *(_QWORD *)(v36 + 8));
          }
          if ( !v13 )
            sub_1C2D6EC(v31, v32);
          v37 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._40_ToArray.methodPtr)(
                  v13,
                  v13->klass->vtable._40_ToArray.method);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v37;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v37, v38, v39);
          v40 = v13->klass;
          v41 = *(unsigned __int16 *)&v13->klass->_2.rank;
          if ( *(_WORD *)&v13->klass->_2.rank )
          {
            v42 = &v40->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_52;
            }
            v43 = (__int64)&v40->vtable + 16 * *v42;
          }
          else
          {
LABEL_52:
            v43 = sub_1C7DCA8(v13, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v45 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_64281084(v45, masterDataBytes, 0);
          v46 = (System_IO_BinaryReader_o *)sub_1C2D6DC(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v46, (System_IO_Stream_o *)v45, 0);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C2D6EC(v47, v48);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v46 )
            {
LABEL_76:
              if ( v45 )
              {
                v70 = v45->klass;
                v71 = *(unsigned __int16 *)&v45->klass->_2.rank;
                if ( *(_WORD *)&v45->klass->_2.rank )
                {
                  v72 = &v70->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v71;
                    v72 += 4;
                    if ( !v71 )
                      goto LABEL_81;
                  }
                  v73 = (__int64)&v70->vtable + 16 * *v72;
                }
                else
                {
LABEL_81:
                  v73 = sub_1C7DCA8(v45, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v73)(v45, *(_QWORD *)(v73 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v74 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v74, 0);
              v2->fields.__2__current = (Il2CppObject *)v74;
              v22 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C2D434(v22, (int32_t)v74, v75, v76);
              v25 = 2;
LABEL_87:
              LODWORD(v22[-1].fields._ThumbnailSpritePath_k__BackingField) = v25;
              v8 = 1;
              return v8 & 1;
            }
          }
          else
          {
            if ( !v46 )
              sub_1C2D6EC(v47, v48);
            do
            {
              v51 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._15_ReadInt32.methodPtr)(
                      v46,
                      v46->klass->vtable._15_ReadInt32.method);
              if ( !v45 )
                sub_1C2D6EC(v51, v52);
              v53 = v51;
              v54 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v45->klass->vtable._12_get_Position.methodPtr)(
                      v45,
                      v45->klass->vtable._12_get_Position.method);
              v55 = v53;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, const MethodInfo *))v45->klass->vtable._29_Seek.methodPtr)(
                v45,
                v53,
                1,
                v45->klass->vtable._29_Seek.method);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v57 = sub_1C2D538(long___TypeInfo, 2);
              v60 = v57;
              if ( !v57 )
                sub_1C2D6EC(0, 0);
              v61 = *(_DWORD *)(v57 + 24);
              if ( !v61 )
                sub_1C2D6F4(v57, v57, v58);
              *(_QWORD *)(v57 + 32) = v54;
              if ( v61 == 1 )
                sub_1C2D6F4(v57, v57, v58);
              *(_QWORD *)(v57 + 40) = v55;
              if ( !saveDataMapList )
                sub_1C2D6EC(v57, v57);
              items = saveDataMapList->fields._items;
              v63 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C2D6EC(v57, v57);
              v64 = saveDataMapList->fields._size;
              if ( (unsigned int)v64 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v57,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
              }
              else
              {
                v65 = &items->obj.klass + v64;
                saveDataMapList->fields._size = v64 + 1;
                v65[4] = (Il2CppClass *)v60;
                sub_1C2D434((CGThumbnailListItem_o *)(v65 + 4), v60, v58, v59);
              }
              --size;
            }
            while ( size );
          }
          v66 = v46->klass;
          v67 = *(unsigned __int16 *)&v46->klass->_2.rank;
          if ( *(_WORD *)&v46->klass->_2.rank )
          {
            v68 = &v66->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_73;
            }
            v69 = (__int64)&v66->vtable + 16 * *v68;
          }
          else
          {
LABEL_73:
            v69 = sub_1C7DCA8(v46, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v69)(v46, *(_QWORD *)(v69 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v21, 0);
        v2->fields.__2__current = (Il2CppObject *)v21;
        v22 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v22, (int32_t)v21, v23, v24);
        v25 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, 0);
      v26 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v26 = DataManager_TypeInfo;
      }
      static_fields = v26->static_fields;
      v8 = 0;
      v11 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v11;
      return v8 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v9 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v9 = DataManager_TypeInfo;
      }
      static_fields = v9->static_fields;
      v8 = 0;
      v11 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1C2D6EC(this, method);
      goto LABEL_28;
    default:
      v8 = 0;
      return v8 & 1;
  }
}


Il2CppObject *DataManager__readMasterData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterData_d__47__System_Collections_IEnumerator_Reset(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *DataManager__readMasterData_d__47__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterData_d__47__System_IDisposable_Dispose(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__readMasterVersion_d__46___ctor(
        DataManager__readMasterVersion_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterVersion_d__46__MoveNext(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterVersion_d__46_o *v2; // x19
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v11; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v13; // w9

  v2 = this;
  if ( (byte_4C26DB3 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C26DB3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C2D6EC(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0);
  v11 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v13 = 1;
  else
    v13 = 5;
  static_fields->readMasterVersionResult = v13;
  return result;
}


Il2CppObject *DataManager__readMasterVersion_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_Reset(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterVersion_d__46__System_IDisposable_Dispose(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateMasterData_d__49___ctor(
        DataManager__updateMasterData_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateMasterData_d__49__MoveNext(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  DataManager__updateMasterData_d__49_o *v4; // x19
  struct DataManager_o *_4__this; // x20
  DataManager_c *v6; // x0
  int v7; // w8
  MasterDataUnpakcer_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_WaitForEndOfFrame_o *v14; // x20
  CGThumbnailListItem_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v20; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v22; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  DataManager_c *v33; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v35; // x21
  System_Byte_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  DataManager_c *v41; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Func_bool__o *v57; // x21
  UnityEngine_WaitUntil_o *v58; // x20
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  CGThumbnailListItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_WaitForEndOfFrame_o *v66; // x20
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int v69; // w8
  DataManager_c *v70; // x8
  struct DataManager_StaticFields *v71; // x8
  int v72; // w9
  DataManager___c__DisplayClass49_0_o *v73; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  struct DataMasterBase_array *v78; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v80; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x0
  __int64 v86; // x1
  struct DataManager___c__DisplayClass49_0_o *v87; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct DataManager___c__DisplayClass49_0_o *v92; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v95; // x24
  System_Predicate_object__o *v96; // x23
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_Collections_Generic_List_object__o *v101; // x22
  DataManager__updateMasterData_d__49_o *v102; // x24
  System_Predicate_object__o *v103; // x23
  int32_t Index; // w0
  int32_t v105; // w22
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 _2__current_low; // x10
  __int64 v111; // x8
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  UnityEngine_WaitForEndOfFrame_o *v118; // x20
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  ManagerConfig_c *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_Collections_Generic_List_string__o *v126; // x8
  System_Collections_Generic_List_int__o *v127; // x22
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  ManagerConfig_c *v130; // x0
  __int64 v131; // x22
  const MethodInfo *v132; // x3
  DataManager__updateMasterData_d__49_o *v133; // x23
  const MethodInfo *v134; // x3
  DataManager__updateMasterData_d__49_o *v135; // x23
  const MethodInfo *v136; // x3
  DataManager__updateMasterData_d__49_o *v137; // x23
  const MethodInfo *v138; // x3
  DataManager__updateMasterData_d__49_o *v139; // x23
  const MethodInfo *v140; // x3
  DataManager__updateMasterData_d__49_o *v141; // x23
  const MethodInfo *v142; // x3
  DataManager__updateMasterData_d__49_o *v143; // x23
  const MethodInfo *v144; // x3
  DataManager__updateMasterData_d__49_o *v145; // x23
  const MethodInfo *v146; // x3
  DataManager__updateMasterData_d__49_o *v147; // x23
  const MethodInfo *v148; // x3
  DataManager__updateMasterData_d__49_o *v149; // x23
  __int64 v150; // x8
  __int64 v151; // x29
  _QWORD *v152; // x23
  __int64 v153; // x24
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  __int64 v156; // x1
  System_Collections_Generic_List_object__o *v157; // x25
  System_Predicate_object__o *v158; // x26
  int32_t v159; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_38AFA90 *v161; // x3
  const MethodInfo_38AFA90 *v162; // x3
  __int64 v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  UnityEngine_WaitForEndOfFrame_o *v166; // x20
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  ManagerConfig_c *v169; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v171; // x0
  int v172; // w21
  DataManager_c *v173; // x8
  UnityEngine_WaitForEndOfFrame_o *v174; // x20
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  const MethodInfo *v177; // x3
  struct System_Collections_Generic_List_string__o *v178; // x8
  int32_t size; // w2
  int v180; // w9
  struct System_Collections_Generic_List_long____o *v181; // x8
  int32_t v182; // w2
  int v183; // w9
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  UnityEngine_WaitForEndOfFrame_o *v187; // x20
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  UnityEngine_WaitForEndOfFrame_o *v190; // x20
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  __int64 v193; // x0
  struct DataMasterBase_array *v194; // x9
  EventRandomMissionClearManager_c *v195; // x0
  DataManager_c *v196; // x8
  UnityEngine_WaitForEndOfFrame_o *v197; // x20
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  __int64 v201; // [xsp+8h] [xbp-98h] BYREF
  __int64 v202; // [xsp+10h] [xbp-90h]
  __int64 v203; // [xsp+18h] [xbp-88h] BYREF
  __int64 v204; // [xsp+20h] [xbp-80h]
  int v205; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v207; // 0:x0.16
  System_Nullable_long__o v208; // 0:x0.16

  v4 = this;
  if ( (byte_4C26DB4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1C2D490(&Method_DataManager__updateMasterData_b__49_0__);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&DataMasterBase___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C2D490(&EventRandomMissionClearManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&LogoMain_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&MasterDataUnpakcer_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    sub_1C2D490(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C2D490(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_long___ctor__);
    sub_1C2D490(&OtherUserNewManager_TypeInfo);
    sub_1C2D490(&System_Predicate_string__TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C2D490(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__);
    sub_1C2D490(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__);
    sub_1C2D490(&DataManager___c__DisplayClass49_0_TypeInfo);
    sub_1C2D490(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__);
    sub_1C2D490(&DataManager___c__DisplayClass49_1_TypeInfo);
    sub_1C2D490(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C2D490(&UserCommandCodeNewManager_TypeInfo);
    sub_1C2D490(&UserEquipNewManager_TypeInfo);
    sub_1C2D490(&UserMissionProgressManager_TypeInfo);
    sub_1C2D490(&UserServantCollectionManager_TypeInfo);
    sub_1C2D490(&UserServantLockManager_TypeInfo);
    sub_1C2D490(&UserServantNewManager_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C2D490(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__49_o *)sub_1C2D490(&StringLiteral_11474/*"SCRIPT"*/);
    byte_4C26DB4 = 1;
  }
  lockTaken = 0;
  v205 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields._values) = 0;
      if ( !_4__this )
        goto LABEL_291;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_291;
      v4->fields._dataListCount_5__2 = datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_291;
      v4->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath(0);
      if ( !System_IO_Directory__Exists(CachePath, 0) )
        System_IO_Directory__CreateDirectory(CachePath, 0);
      v4->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_134;
      v4->fields._dataMapDict_5__6 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v26, v27);
      v4->fields._dataMapObject_5__7 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v28, v29);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v30, v31);
      v33 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v33 = DataManager_TypeInfo;
      }
      updateData = v33->static_fields->updateData;
      if ( !updateData )
        sub_1C2D6EC(0, v32);
      v35 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))updateData->klass->vtable[3].methodPtr)(
                                 updateData,
                                 updateData->klass->vtable[3].method);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v36 = System_Convert__FromBase64String(v35, 0);
      v4->fields._cryptBytes_5__8 = v36;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v36, v37, v38);
      v41 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v41 = DataManager_TypeInfo;
      }
      static_fields = v41->static_fields;
      static_fields->updateData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->updateData, 0, v39, v40);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
      v4->fields.__2__current = (Il2CppObject *)v43;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v43, v45, v46);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v49 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0);
      if ( !_4__this )
        sub_1C2D6EC(v49, v49);
      _4__this->fields.masterDataBytes = v49;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v49, v50, v51);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v52, v53);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v54, 0);
      v4->fields.__2__current = (Il2CppObject *)v54;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v15, (int32_t)v54, v55, v56);
      v18 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v8 = (MasterDataUnpakcer_o *)sub_1C2D6DC(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v8, 0);
      if ( !_4__this )
        sub_1C2D6EC(v9, v10);
      if ( !v8 )
        sub_1C2D6EC(v9, v10);
      v11 = MasterDataUnpakcer__Unpack_40740144(v8, _4__this->fields.masterDataBytes, 0);
      v4->fields._dataMapObject_5__7 = v11;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v11, v12, v13);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v14, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v15, (int32_t)v14, v16, v17);
      v18 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v4->fields._dataMapObject_5__7;
      v4->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v20 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        naturalAligment = System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.naturalAligment;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v22 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v22 = 0;
        }
        else
        {
          v22 = 0;
        }
        v4->fields._dataMapDict_5__6 = v22;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == v20 )
            v61 = (int)dataMapObject_5__7;
          else
            v61 = 0;
        }
        else
        {
          v61 = 0;
        }
      }
      else
      {
        v61 = 0;
        v4->fields._dataMapDict_5__6 = 0;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1C2D434(p_dataMapDict_5__6, v61, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v66 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v66, 0);
        v4->fields.__2__current = (Il2CppObject *)v66;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v15, (int32_t)v66, v67, v68);
        v18 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v69 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v69 < v4->fields._dataListCount_5__2 )
        {
          v73 = (DataManager___c__DisplayClass49_0_o *)sub_1C2D6DC(DataManager___c__DisplayClass49_0_TypeInfo);
          DataManager___c__DisplayClass49_0___ctor(v73, 0);
          v4->fields.__8__1 = v73;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v73, v75, v76);
          v78 = _4__this->fields.datalist;
          if ( !v78 )
            goto LABEL_291;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v78->max_length) )
            goto LABEL_292;
          v80 = v78->m_Items[i_5__9];
          if ( !v80 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v80->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v2, v77);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v83, v84);
            v87 = v4->fields.__8__1;
            if ( !v87 )
              sub_1C2D6EC(v85, v86);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C2D6EC(0, v86);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v87->fields.masterName,
                     (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v90, v91);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v190 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v190, 0);
              v4->fields.__2__current = (Il2CppObject *)v190;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434(v15, (int32_t)v190, v191, v192);
              v18 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v92 = v4->fields.__8__1;
            if ( !v92 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v92->fields.masterName,
                                                              (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( SLODWORD(dataMap_5__10->max_length) < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v173 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v173 = DataManager_TypeInfo;
                }
                v71 = v173->static_fields;
                result = 0;
                v72 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v95 = *p__8__1;
            v96 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v96,
              (Il2CppObject *)v95,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v96,
                                                              (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v108 = *(_QWORD *)&this->fields.__1__state;
              v109 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v108 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v108 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
              }
              else
              {
                v111 = v108 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v111 + 32) = method;
                sub_1C2D434((CGThumbnailListItem_o *)(v111 + 32), (int32_t)method, v97, v98);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
              v114 = *(_QWORD *)&this->fields.__1__state;
              v115 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v114 )
                goto LABEL_291;
              v116 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
              }
              else
              {
                v117 = v114 + 8 * v116;
                LODWORD(this->fields.__2__current) = v116 + 1;
                *(_QWORD *)(v117 + 32) = method;
                sub_1C2D434((CGThumbnailListItem_o *)(v117 + 32), (int32_t)method, v112, v113);
              }
              ++v4->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0;
            v4->fields._isAdd_5__4 = 1;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v99, v100);
          }
          else
          {
            v101 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v102 = *p__8__1;
            v103 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v103,
              (Il2CppObject *)v102,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0);
            if ( !v101 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v101,
                      (System_Predicate_T__o *)v103,
                      (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( Index < 0 )
              goto LABEL_125;
            v105 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v105,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v105,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)p__8__1, 0, v106, v107);
LABEL_125:
          v69 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v69;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0) )
      {
LABEL_129:
        if ( !v4->fields._isAdd_5__4 )
        {
          v121 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v121 = ManagerConfig_TypeInfo;
          }
          if ( !v121->static_fields->UseMock )
            goto LABEL_83;
        }
        v4->fields._dataMapDict_5__6 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v122, v123);
        v4->fields._cryptBytes_5__8 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v124, v125);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v126 = _4__this->fields.saveNameList;
        if ( !v126 )
LABEL_291:
          sub_1C2D6EC(this, method);
        if ( v126->fields._size <= 0 )
        {
LABEL_83:
          v70 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v70 = DataManager_TypeInfo;
          }
          v71 = v70->static_fields;
          result = 0;
          v72 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v127 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v127,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v127;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v127, v128, v129);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v130 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v130 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v130->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11474/*"SCRIPT"*/,
                 0) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0) )
            {
              v131 = sub_1C2D538(DataMasterBase___TypeInfo, 9);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v131 )
                goto LABEL_291;
              v133 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v131 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v131 + 32) = v133;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 32), (int32_t)v133, v2, v132);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
              v135 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 40) = v135;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 40), (int32_t)v135, v2, v134);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v137 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 48) = v137;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 48), (int32_t)v137, v2, v136);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v139 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 56) = v139;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 56), (int32_t)v139, v2, v138);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v141 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 64) = v141;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 64), (int32_t)v141, v2, v140);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantMaster___);
              v143 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 72) = v143;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 72), (int32_t)v143, v2, v142);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v145 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 80) = v145;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 80), (int32_t)v145, v2, v144);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v147 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v131 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v131 + 88) = v147;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 88), (int32_t)v147, v2, v146);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantAddMaster___);
              v149 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v193 = sub_1C2D710(this);
                  sub_1C2D5B8(v193, 0);
                }
              }
              if ( *(_DWORD *)(v131 + 24) <= 8u )
LABEL_292:
                sub_1C2D6F4(this, method, v2);
              *(_QWORD *)(v131 + 96) = v149;
              sub_1C2D434((CGThumbnailListItem_o *)(v131 + 96), (int32_t)v149, v2, v148);
              v150 = *(_QWORD *)(v131 + 24);
              if ( (int)v150 >= 1 )
              {
                v151 = 0;
                while ( (unsigned int)v151 < (unsigned int)v150 )
                {
                  v152 = *(_QWORD **)(v131 + 32 + 8 * v151);
                  v153 = sub_1C2D6DC(DataManager___c__DisplayClass49_1_TypeInfo);
                  DataManager___c__DisplayClass49_1___ctor((DataManager___c__DisplayClass49_1_o *)v153, 0);
                  if ( !v152 )
                    goto LABEL_291;
                  if ( !v153 )
                    goto LABEL_291;
                  v156 = v152[3];
                  *(_QWORD *)(v153 + 16) = v156;
                  sub_1C2D434((CGThumbnailListItem_o *)(v153 + 16), v156, v154, v155);
                  v157 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v158 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v158,
                    (Il2CppObject *)v153,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0);
                  if ( !v157 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v157,
                                                                    (System_Predicate_T__o *)v158,
                                                                    (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v159 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v159,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v207.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v207.fields.hasValue = &v203;
                    v203 = 0;
                    v204 = 0;
                    System_Nullable_long____ctor(v207, Method_System_Nullable_long___ctor__, v161);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v159,
                                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v208.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v208.fields.hasValue = &v201;
                    v201 = 0;
                    v202 = 0;
                    System_Nullable_long____ctor(v208, Method_System_Nullable_long___ctor__, v162);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v152 + 424LL))(
                      v152,
                      masterDataBytes,
                      v203,
                      v204,
                      v201,
                      v202,
                      *(_QWORD *)(*v152 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v163 = *(_QWORD *)&this->fields.__1__state;
                    v164 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v163 )
                      goto LABEL_291;
                    v165 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v165 >= *(_DWORD *)(v163 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v159,
                        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v165 + 1;
                      *(_DWORD *)(v163 + 4 * v165 + 32) = v159;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v150 = *(_QWORD *)(v131 + 24);
                  if ( (int)++v151 >= (int)v150 )
                    goto LABEL_192;
                }
                goto LABEL_292;
              }
LABEL_192:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_291;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0) >= 1 )
              {
                if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
                ServantProfileLimitCountManager__Initialize(0);
                if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
                ServantProfileEventJoinManager__Initialize(0);
                if ( !LogoMain_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
                if ( LogoMain__IsPLayLogo(0) )
                  goto LABEL_204;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0);
                  v166 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v166, 0);
                  v4->fields.__2__current = (Il2CppObject *)v166;
                  v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1C2D434(v15, (int32_t)v166, v167, v168);
                  v18 = 7;
                  goto LABEL_82;
                }
                goto LABEL_291;
              }
            }
          }
        }
LABEL_205:
        DataManager__StartMasterLoadThread(_4__this, v4->fields._saveDataCount_5__3, v4->fields._loadedIndices_5__5, 0);
        if ( v4->fields._isAdd_5__4 )
        {
          v169 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v169 = ManagerConfig_TypeInfo;
          }
          if ( !v169->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v187 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v187, 0);
              v4->fields.__2__current = (Il2CppObject *)v187;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434(v15, (int32_t)v187, v188, v189);
              v18 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName(0);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0);
              v57 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(v57, (Il2CppObject *)_4__this, Method_DataManager__updateMasterData_b__49_0__, 0);
              v58 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v58, v57, 0);
              v4->fields.__2__current = (Il2CppObject *)v58;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434(v15, (int32_t)v58, v59, v60);
              v18 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_65388012(lockCountObj, &lockTaken, 0);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v172 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v171 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v171 = DataManager_TypeInfo;
          }
          v171->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0);
          v172 = 20;
        }
        else
        {
          v172 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0);
        if ( v172 == 62 )
        {
          v174 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v174, 0);
          v4->fields.__2__current = (Il2CppObject *)v174;
          v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(v15, (int32_t)v174, v175, v176);
          v18 = 11;
          goto LABEL_82;
        }
        if ( v172 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0);
          v178 = _4__this->fields.saveNameList;
          if ( v178 )
          {
            size = v178->fields._size;
            v180 = v178->fields._version + 1;
            v178->fields._size = 0;
            v178->fields._version = v180;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v178->fields._items, 0, size, 0);
            v181 = _4__this->fields.saveDataMapList;
            if ( v181 )
            {
              v182 = v181->fields._size;
              v183 = v181->fields._version + 1;
              v181->fields._size = 0;
              v181->fields._version = v183;
              if ( v182 >= 1 )
                System_Array__Clear((System_Array_o *)v181->fields._items, 0, v182, 0);
              _4__this->fields.masterDataBytes = 0;
              sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v182, v177);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v184, 0);
              v4->fields.__2__current = (Il2CppObject *)v184;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434(v15, (int32_t)v184, v185, v186);
              v18 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v118 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v118, 0);
      v4->fields.__2__current = (Il2CppObject *)v118;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v15, (int32_t)v118, v119, v120);
      v18 = 6;
LABEL_82:
      LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_75;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_96;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_129;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_205;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v6 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v6 = DataManager_TypeInfo;
        }
        v6->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, 0);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, 0);
      DataManager__writeMasterVersionFile(_4__this, 0);
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v63, 0);
        v4->fields.__2__current = (Il2CppObject *)v63;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v15, (int32_t)v63, v64, v65);
        v18 = 10;
        goto LABEL_82;
      }
      goto LABEL_209;
    case 0xA:
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_209;
    case 0xC:
      v7 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__9 = 0;
      goto LABEL_249;
    case 0xD:
      v4->fields.__1__state = -1;
      while ( 1 )
      {
        v7 = v4->fields._i_5__9 + 1;
        v4->fields._i_5__9 = v7;
LABEL_249:
        if ( v7 >= v4->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_291;
        v194 = _4__this->fields.datalist;
        if ( !v194 )
          goto LABEL_291;
        if ( (unsigned int)v7 >= LODWORD(v194->max_length) )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__49_o *)v194->m_Items[v7];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__49_o *)DataManager__CheckWaitforFrame(_4__this, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v197, 0);
            v4->fields.__2__current = (Il2CppObject *)v197;
            v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(v15, (int32_t)v197, v198, v199);
            v18 = 13;
            goto LABEL_82;
          }
        }
      }
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      BalanceConfig__Initialize(0);
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__Initialize(0);
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__Initialize(0);
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__Initialize(0);
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__Initialize(0);
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      OtherUserNewManager__Initialize(0);
      if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      UserCommandCodeNewManager__Initialize(0);
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      UserCommandCodeCollectionManager__Initialize(0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__Initialize(0);
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__Initialize(0);
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      UserMissionProgressManager__Initialize(0);
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__Initialize(0);
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize(0);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0);
      v195 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v195);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0);
      v196 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v196 = DataManager_TypeInfo;
      }
      v71 = v196->static_fields;
      result = 0;
      v72 = 1;
LABEL_289:
      v71->updateMasterDataResult = v72;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *DataManager__updateMasterData_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateMasterData_d__49__System_Collections_IEnumerator_Reset(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *DataManager__updateMasterData_d__49__System_Collections_IEnumerator_get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateMasterData_d__49__System_IDisposable_Dispose(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateWebViewData_d__38___ctor(
        DataManager__updateWebViewData_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateWebViewData_d__38__MoveNext(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  DataManager_o *_4__this; // x20
  DataManager_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  DataManager_c *v12; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  DataManager_c *v19; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  UnityEngine_WaitForEndOfFrame_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v29; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_WaitForEndOfFrame_o *v33; // x20
  Il2CppObject **v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int v37; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_40714692; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  System_Collections_Generic_Dictionary_string__object__o *v50; // x23
  __int64 naturalAligment; // x9
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4C26DB5 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C2D490(&StringLiteral_18222/*"contactURL"*/);
    sub_1C2D490(&StringLiteral_19429/*"filePass"*/);
    sub_1C2D490(&StringLiteral_17040/*"baseURL"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26DB5 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v6 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v6 = DataManager_TypeInfo;
      }
      if ( !v6->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v7, v8);
      this->fields._dataObject_5__4 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v9, v10);
      v12 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager_TypeInfo;
      }
      webViewData = v12->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v14 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))webViewData->klass->vtable[3].methodPtr)(
                                        webViewData,
                                        webViewData->klass->vtable[3].method);
      this->fields._cryptString_5__3 = v14;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v14, v15, v16);
      v19 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v19 = DataManager_TypeInfo;
      }
      static_fields = v19->static_fields;
      static_fields->webViewData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v17, v18);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v23, 0);
        this->fields.__2__current = (Il2CppObject *)v23;
        p__2__current = &this->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v23, v25, v26);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v29 = System_Convert__FromBase64String(cryptString_5__3, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v30 = CatAndMouseGame__MouseGame2MsgPack(v29, 0, 0);
      this->fields._dataObject_5__4 = v30;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v30, v31, v32);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v33 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v33, 0);
        this->fields.__2__current = (Il2CppObject *)v33;
        v34 = &this->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)v34, (int32_t)v33, v35, v36);
        v37 = 2;
LABEL_30:
        *((_DWORD *)v34 - 2) = v37;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_40714692 = JsonManager__getDictionary_40714692(dataObject_5__4, 0);
      this->fields._data_5__2 = Dictionary_40714692;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_40714692, v40, v41);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v42, 0);
        this->fields.__2__current = (Il2CppObject *)v42;
        v34 = &this->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)v34, (int32_t)v42, v43, v44);
        v37 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v47 = (System_String_o *)StringLiteral_1/*""*/;
      v48 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17040/*"baseURL"*/,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17040/*"baseURL"*/,
               (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v48 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18222/*"contactURL"*/,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18222/*"contactURL"*/,
               (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v47 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19429/*"filePass"*/,
             (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C2D6EC(Item, v22);
        v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19429/*"filePass"*/,
                (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v50 = (System_Collections_Generic_Dictionary_string__object__o *)v49;
        if ( v49 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v49->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (System_Collections_Generic_Dictionary_string__object__c *)v49->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C2D9AC(v49);
LABEL_54:
            sub_1C2D6EC(webViewData, v11);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v48, v47, v50, 0);
      }
LABEL_50:
      this->fields._data_5__2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v52, v53);
      this->fields._dataObject_5__4 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v54, v55);
      return 0;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 3:
      this->fields.__1__state = -1;
      goto LABEL_31;
    default:
      return 0;
  }
}


Il2CppObject *DataManager__updateWebViewData_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_Reset(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateWebViewData_d__38__System_IDisposable_Dispose(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  ;
}