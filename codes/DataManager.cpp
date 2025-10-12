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

  if ( (byte_4C37487 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37487 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0;
  static_fields->updateData = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->updateData, 0, v1, v2);
  v4 = DataManager_TypeInfo->static_fields;
  v4->webViewData = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->webViewData, 0, v5, v6);
  v7 = StringLiteral_1/*""*/;
  v8 = DataManager_TypeInfo->static_fields;
  v8->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->serverHash, v7, v9, v10);
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

  if ( (byte_4C37486 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4C37486 = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v6, v7, v8);
  v9 = (Il2CppObject *)sub_1C32E6C(object_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields.lockCountObj = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4C37463 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37463 = 1;
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

  if ( (byte_4C37464 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37464 = 1;
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

  if ( (byte_4C37462 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37462 = 1;
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

  if ( (byte_4C3747D & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4C3747D = 1;
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
    sub_1C32E7C(v3);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ServantCommentMaster_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantProfileMaster_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  WarMaster_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UserMaster_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserGameMaster_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  TblUserMaster_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UserItemMaster_o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UserServantMaster_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UserServantStorageMaster_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UserAccessaryMaster_o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UserQuestMaster_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleMaster_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  OtherUserGameMaster_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  TblFriendMaster_o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  AreaMaster_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ServantCardMaster_o *v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  EventMaster_o *v58; // x20
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ItemMaster_o *v61; // x20
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  QuestMaster_o *v64; // x20
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  QuestAddMaster_o *v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  QuestReleaseMaster_o *v70; // x20
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  QuestDateRangeMaster_o *v73; // x20
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  QuestPhaseMaster_o *v76; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  QuestPhaseDetailMaster_o *v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  QuestGroupMaster_o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  QuestRandomGroupMaster_o *v85; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  QuestConsumeItemMaster_o *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  QuestMessageMaster_o *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  UserQuestInfoMaster_o *v94; // x20
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UserQuestRecordMaster_o *v97; // x20
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  ViewQuestInfoMaster_o *v100; // x20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  ViewEnemyMaster_o *v103; // x20
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  ViewQuestEnemyInfoMaster_o *v106; // x20
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  BlankEarthSpotMaster_o *v109; // x20
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  BlankEarthSpotAddMaster_o *v112; // x20
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  SpotMaster_o *v115; // x20
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  SpotImageMaster_o *v118; // x20
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  SpotRoadMaster_o *v121; // x20
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  SpotPathMaster_o *v124; // x20
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  SpotAddMaster_o *v127; // x20
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  MapGimmickMaster_o *v130; // x20
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  GiftMaster_o *v133; // x20
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  GiftAddMaster_o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  ShopMaster_o *v139; // x20
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  StoneShopMaster_o *v142; // x20
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  BankShopMaster_o *v145; // x20
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  ShopScriptMaster_o *v148; // x20
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  StageMaster_o *v151; // x20
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  ServantGroupMaster_o *v154; // x20
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  ServantLimitMaster_o *v157; // x20
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  ServantLimitAddMaster_o *v160; // x20
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  ServantSkillMaster_o *v163; // x20
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  ServantPassiveSkillMaster_o *v166; // x20
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  BgmMaster_o *v169; // x20
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  ServantScriptMaster_o *v172; // x20
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  NewsMaster_o *v175; // x20
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  TelopMaster_o *v178; // x20
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  UserExpMaster_o *v181; // x20
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  TreasureDvcMaster_o *v184; // x20
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  ServantTreasureDvcMaster_o *v187; // x20
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  SkillMaster_o *v190; // x20
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  SkillLvMaster_o *v193; // x20
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  SkillDetailMaster_o *v196; // x20
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  CommandSpellMaster_o *v199; // x20
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  EquipMaster_o *v202; // x20
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  EquipExpMaster_o *v205; // x20
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  EquipSkillMaster_o *v208; // x20
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  SubEquipMaster_o *v211; // x20
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  AccessaryMaster_o *v214; // x20
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  UserPresentBoxMaster_o *v217; // x20
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  UserDeckMaster_o *v220; // x20
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  UserSubEquipMaster_o *v223; // x20
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  GachaMaster_o *v226; // x20
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  GachaImageMaster_o *v229; // x20
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  UserGachaMaster_o *v232; // x20
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  UserEquipMaster_o *v235; // x20
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  UserServantCollectionMaster_o *v238; // x20
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  FriendshipMaster_o *v241; // x20
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  GachaTicketMaster_o *v244; // x20
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  UserFormationMaster_o *v247; // x20
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  FunctionMaster_o *v250; // x20
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  BuffMaster_o *v253; // x20
  int32_t v254; // w2
  const MethodInfo *v255; // x3
  GachaReleaseMaster_o *v256; // x20
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  CombineQpMaster_o *v259; // x20
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  CombineMaterialMaster_o *v262; // x20
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  EventCombineMaster_o *v265; // x20
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  ServantExpMaster_o *v268; // x20
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  CombineSkillMaster_o *v271; // x20
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  CombineTdMaster_o *v274; // x20
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  EventQuestMaster_o *v277; // x20
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  EventCampaignMaster_o *v280; // x20
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  IllustratorMaster_o *v283; // x20
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  CvMaster_o *v286; // x20
  int32_t v287; // w2
  const MethodInfo *v288; // x3
  TreasureDvcLvMaster_o *v289; // x20
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  TreasureDvcDetailMaster_o *v292; // x20
  int32_t v293; // w2
  const MethodInfo *v294; // x3
  UserFollowerMaster_o *v295; // x20
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  NpcFollowerMaster_o *v298; // x20
  int32_t v299; // w2
  const MethodInfo *v300; // x3
  NpcServantFollowerMaster_o *v301; // x20
  int32_t v302; // w2
  const MethodInfo *v303; // x3
  UserEventMaster_o *v304; // x20
  int32_t v305; // w2
  const MethodInfo *v306; // x3
  UserShopMaster_o *v307; // x20
  int32_t v308; // w2
  const MethodInfo *v309; // x3
  UserContinueMaster_o *v310; // x20
  int32_t v311; // w2
  const MethodInfo *v312; // x3
  ConstantMaster_o *v313; // x20
  int32_t v314; // w2
  const MethodInfo *v315; // x3
  ConstantLongMaster_o *v316; // x20
  int32_t v317; // w2
  const MethodInfo *v318; // x3
  ConstantStrMaster_o *v319; // x20
  int32_t v320; // w2
  const MethodInfo *v321; // x3
  AiMaster_o *v322; // x20
  int32_t v323; // w2
  const MethodInfo *v324; // x3
  AiActMaster_o *v325; // x20
  int32_t v326; // w2
  const MethodInfo *v327; // x3
  AttriRelationMaster_o *v328; // x20
  int32_t v329; // w2
  const MethodInfo *v330; // x3
  ClassRelationMaster_o *v331; // x20
  int32_t v332; // w2
  const MethodInfo *v333; // x3
  EffectMaster_o *v334; // x20
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  EquipImageMaster_o *v337; // x20
  int32_t v338; // w2
  const MethodInfo *v339; // x3
  ServantVoiceMaster_o *v340; // x20
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  CombineLimitMaster_o *v343; // x20
  int32_t v344; // w2
  const MethodInfo *v345; // x3
  CardMaster_o *v346; // x20
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  CombineQpSvtEquipMaster_o *v349; // x20
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  ServantRarityMaster_o *v352; // x20
  int32_t v353; // w2
  const MethodInfo *v354; // x3
  SetItemMaster_o *v355; // x20
  int32_t v356; // w2
  const MethodInfo *v357; // x3
  RecoverMaster_o *v358; // x20
  int32_t v359; // w2
  const MethodInfo *v360; // x3
  BannerMaster_o *v361; // x20
  int32_t v362; // w2
  const MethodInfo *v363; // x3
  ShopReleaseMaster_o *v364; // x20
  int32_t v365; // w2
  const MethodInfo *v366; // x3
  EventRewardMaster_o *v367; // x20
  int32_t v368; // w2
  const MethodInfo *v369; // x3
  EventDetailMaster_o *v370; // x20
  int32_t v371; // w2
  const MethodInfo *v372; // x3
  EventServantMaster_o *v373; // x20
  int32_t v374; // w2
  const MethodInfo *v375; // x3
  BoxGachaMaster_o *v376; // x20
  int32_t v377; // w2
  const MethodInfo *v378; // x3
  BoxGachaBaseMaster_o *v379; // x20
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  BoxGachaTalkMaster_o *v382; // x20
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  UserBoxGachaMaster_o *v385; // x20
  int32_t v386; // w2
  const MethodInfo *v387; // x3
  BoxGachaHistoryMaster_o *v388; // x20
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  BattleBgMaster_o *v391; // x20
  int32_t v392; // w2
  const MethodInfo *v393; // x3
  TipsBattleMaster_o *v394; // x20
  int32_t v395; // w2
  const MethodInfo *v396; // x3
  UserLoginMaster_o *v397; // x20
  int32_t v398; // w2
  const MethodInfo *v399; // x3
  VoiceMaster_o *v400; // x20
  int32_t v401; // w2
  const MethodInfo *v402; // x3
  EventRewardExtraMaster_o *v403; // x20
  int32_t v404; // w2
  const MethodInfo *v405; // x3
  EventMissionMaster_o *v406; // x20
  int32_t v407; // w2
  const MethodInfo *v408; // x3
  EventMissionActionMaster_o *v409; // x20
  int32_t v410; // w2
  const MethodInfo *v411; // x3
  EventMissionActionAddMaster_o *v412; // x20
  int32_t v413; // w2
  const MethodInfo *v414; // x3
  EventMissionConditionMaster_o *v415; // x20
  int32_t v416; // w2
  const MethodInfo *v417; // x3
  EventMissionCondDetailMaster_o *v418; // x20
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  EventMissionAddMaster_o *v421; // x20
  int32_t v422; // w2
  const MethodInfo *v423; // x3
  CompleteMissionMaster_o *v424; // x20
  int32_t v425; // w2
  const MethodInfo *v426; // x3
  EventRewardSetMaster_o *v427; // x20
  int32_t v428; // w2
  const MethodInfo *v429; // x3
  UserEventMissionMaster_o *v430; // x20
  int32_t v431; // w2
  const MethodInfo *v432; // x3
  UserEventMissionCondDetailMaster_o *v433; // x20
  int32_t v434; // w2
  const MethodInfo *v435; // x3
  BoxGachaBaseDetailMaster_o *v436; // x20
  int32_t v437; // w2
  const MethodInfo *v438; // x3
  UserServantLeaderMaster_o *v439; // x20
  int32_t v440; // w2
  const MethodInfo *v441; // x3
  ClosedMessageMaster_o *v442; // x20
  int32_t v443; // w2
  const MethodInfo *v444; // x3
  FunctionGroupMaster_o *v445; // x20
  int32_t v446; // w2
  const MethodInfo *v447; // x3
  EventRaidMaster_o *v448; // x20
  int32_t v449; // w2
  const MethodInfo *v450; // x3
  TotalEventRaidMaster_o *v451; // x20
  int32_t v452; // w2
  const MethodInfo *v453; // x3
  UserEventRaidMaster_o *v454; // x20
  int32_t v455; // w2
  const MethodInfo *v456; // x3
  EventPointMaster_o *v457; // x20
  int32_t v458; // w2
  const MethodInfo *v459; // x3
  EventPointGroupMaster_o *v460; // x20
  int32_t v461; // w2
  const MethodInfo *v462; // x3
  TotalEventPointMaster_o *v463; // x20
  int32_t v464; // w2
  const MethodInfo *v465; // x3
  UserEventPointMaster_o *v466; // x20
  int32_t v467; // w2
  const MethodInfo *v468; // x3
  EventPointUpperMaster_o *v469; // x20
  int32_t v470; // w2
  const MethodInfo *v471; // x3
  EventPointUpperReleaseMaster_o *v472; // x20
  int32_t v473; // w2
  const MethodInfo *v474; // x3
  EventRaceMaster_o *v475; // x20
  int32_t v476; // w2
  const MethodInfo *v477; // x3
  EventRaceResultMaster_o *v478; // x20
  int32_t v479; // w2
  const MethodInfo *v480; // x3
  QuestRacePointMaster_o *v481; // x20
  int32_t v482; // w2
  const MethodInfo *v483; // x3
  UserEventRaceMaster_o *v484; // x20
  int32_t v485; // w2
  const MethodInfo *v486; // x3
  EventScriptMaster_o *v487; // x20
  int32_t v488; // w2
  const MethodInfo *v489; // x3
  EventScriptReleaseMaster_o *v490; // x20
  int32_t v491; // w2
  const MethodInfo *v492; // x3
  UserPresentHistoryMaster_o *v493; // x20
  int32_t v494; // w2
  const MethodInfo *v495; // x3
  MstMissionMaster_o *v496; // x20
  int32_t v497; // w2
  const MethodInfo *v498; // x3
  ServantExceedMaster_o *v499; // x20
  int32_t v500; // w2
  const MethodInfo *v501; // x3
  PartialMaintenanceMaster_o *v502; // x20
  int32_t v503; // w2
  const MethodInfo *v504; // x3
  GuideMaster_o *v505; // x20
  int32_t v506; // w2
  const MethodInfo *v507; // x3
  MstMissionDisplayInfoMaster_o *v508; // x20
  int32_t v509; // w2
  const MethodInfo *v510; // x3
  GachaGroupMaster_o *v511; // x20
  int32_t v512; // w2
  const MethodInfo *v513; // x3
  QuestResetMaster_o *v514; // x20
  int32_t v515; // w2
  const MethodInfo *v516; // x3
  WarAddMaster_o *v517; // x20
  int32_t v518; // w2
  const MethodInfo *v519; // x3
  EventItemDisplayMaster_o *v520; // x20
  int32_t v521; // w2
  const MethodInfo *v522; // x3
  EventItemDisplayGroupMaster_o *v523; // x20
  int32_t v524; // w2
  const MethodInfo *v525; // x3
  EventItemDisplayReleaseMaster_o *v526; // x20
  int32_t v527; // w2
  const MethodInfo *v528; // x3
  EventTutorialMaster_o *v529; // x20
  int32_t v530; // w2
  const MethodInfo *v531; // x3
  EventTutorialCondMaster_o *v532; // x20
  int32_t v533; // w2
  const MethodInfo *v534; // x3
  VoiceReleaseMaster_o *v535; // x20
  int32_t v536; // w2
  const MethodInfo *v537; // x3
  EventSuperBossMaster_o *v538; // x20
  int32_t v539; // w2
  const MethodInfo *v540; // x3
  UserSuperBossMaster_o *v541; // x20
  int32_t v542; // w2
  const MethodInfo *v543; // x3
  QuestScriptMaster_o *v544; // x20
  int32_t v545; // w2
  const MethodInfo *v546; // x3
  QuestScriptReleaseMaster_o *v547; // x20
  int32_t v548; // w2
  const MethodInfo *v549; // x3
  MaterialFolderMaster_o *v550; // x20
  int32_t v551; // w2
  const MethodInfo *v552; // x3
  RestrictionMaster_o *v553; // x20
  int32_t v554; // w2
  const MethodInfo *v555; // x3
  QuestRestrictionMaster_o *v556; // x20
  int32_t v557; // w2
  const MethodInfo *v558; // x3
  ServantVoiceRelationMaster_o *v559; // x20
  int32_t v560; // w2
  const MethodInfo *v561; // x3
  ShopDetailMaster_o *v562; // x20
  int32_t v563; // w2
  const MethodInfo *v564; // x3
  ServantScriptAddMaster_o *v565; // x20
  int32_t v566; // w2
  const MethodInfo *v567; // x3
  CombineMaster_o *v568; // x20
  int32_t v569; // w2
  const MethodInfo *v570; // x3
  AiFieldMaster_o *v571; // x20
  int32_t v572; // w2
  const MethodInfo *v573; // x3
  ServantCommentAddMaster_o *v574; // x20
  int32_t v575; // w2
  const MethodInfo *v576; // x3
  EventFilterMaster_o *v577; // x20
  int32_t v578; // w2
  const MethodInfo *v579; // x3
  UserSupportDeckMaster_o *v580; // x20
  int32_t v581; // w2
  const MethodInfo *v582; // x3
  EventRewardSceneMaster_o *v583; // x20
  int32_t v584; // w2
  const MethodInfo *v585; // x3
  EventVoicePlayMaster_o *v586; // x20
  int32_t v587; // w2
  const MethodInfo *v588; // x3
  GachaSubMaster_o *v589; // x20
  int32_t v590; // w2
  const MethodInfo *v591; // x3
  GachaDetailMaster_o *v592; // x20
  int32_t v593; // w2
  const MethodInfo *v594; // x3
  GachaBaseCollateralMaster_o *v595; // x20
  int32_t v596; // w2
  const MethodInfo *v597; // x3
  GachaAdjustAddMaster_o *v598; // x20
  int32_t v599; // w2
  const MethodInfo *v600; // x3
  GachaBonusSelectMaster_o *v601; // x20
  int32_t v602; // w2
  const MethodInfo *v603; // x3
  GachaBonusSelectLineupMaster_o *v604; // x20
  int32_t v605; // w2
  const MethodInfo *v606; // x3
  ServantChangeMaster_o *v607; // x20
  int32_t v608; // w2
  const MethodInfo *v609; // x3
  VoiceCondMaster_o *v610; // x20
  int32_t v611; // w2
  const MethodInfo *v612; // x3
  BgmReleaseMaster_o *v613; // x20
  int32_t v614; // w2
  const MethodInfo *v615; // x3
  MyRoomAddMaster_o *v616; // x20
  int32_t v617; // w2
  const MethodInfo *v618; // x3
  ShopActionMaster_o *v619; // x20
  int32_t v620; // w2
  const MethodInfo *v621; // x3
  EventRewardSceneReleaseMaster_o *v622; // x20
  int32_t v623; // w2
  const MethodInfo *v624; // x3
  QuestBehaviorMaster_o *v625; // x20
  int32_t v626; // w2
  const MethodInfo *v627; // x3
  MapMaster_o *v628; // x20
  int32_t v629; // w2
  const MethodInfo *v630; // x3
  MapCondMaster_o *v631; // x20
  int32_t v632; // w2
  const MethodInfo *v633; // x3
  MapButtonMaster_o *v634; // x20
  int32_t v635; // w2
  const MethodInfo *v636; // x3
  BannerAddMaster_o *v637; // x20
  int32_t v638; // w2
  const MethodInfo *v639; // x3
  EventAddMaster_o *v640; // x20
  int32_t v641; // w2
  const MethodInfo *v642; // x3
  TotalLoginMaster_o *v643; // x20
  int32_t v644; // w2
  const MethodInfo *v645; // x3
  ServantFilterMaster_o *v646; // x20
  int32_t v647; // w2
  const MethodInfo *v648; // x3
  CombineCostumeMaster_o *v649; // x20
  int32_t v650; // w2
  const MethodInfo *v651; // x3
  ServantCostumeMaster_o *v652; // x20
  int32_t v653; // w2
  const MethodInfo *v654; // x3
  ServantCostumeReleaseMaster_o *v655; // x20
  int32_t v656; // w2
  const MethodInfo *v657; // x3
  StaffPhotoMaster_o *v658; // x20
  int32_t v659; // w2
  const MethodInfo *v660; // x3
  StaffPhotoCostumeMaster_o *v661; // x20
  int32_t v662; // w2
  const MethodInfo *v663; // x3
  UserFriendRequestHistoryMaster_o *v664; // x20
  int32_t v665; // w2
  const MethodInfo *v666; // x3
  UserBlacklistMaster_o *v667; // x20
  int32_t v668; // w2
  const MethodInfo *v669; // x3
  ItemSelectMaster_o *v670; // x20
  int32_t v671; // w2
  const MethodInfo *v672; // x3
  TotalEventRaceMaster_o *v673; // x20
  int32_t v674; // w2
  const MethodInfo *v675; // x3
  EventPointGroupAddMaster_o *v676; // x20
  int32_t v677; // w2
  const MethodInfo *v678; // x3
  VoicePlayGroupMaster_o *v679; // x20
  int32_t v680; // w2
  const MethodInfo *v681; // x3
  VoicePlayCondMaster_o *v682; // x20
  int32_t v683; // w2
  const MethodInfo *v684; // x3
  GachaStoryAdjustMaster_o *v685; // x20
  int32_t v686; // w2
  const MethodInfo *v687; // x3
  ServantFlagMaster_o *v688; // x20
  int32_t v689; // w2
  const MethodInfo *v690; // x3
  ServantFlagReleaseMaster_o *v691; // x20
  int32_t v692; // w2
  const MethodInfo *v693; // x3
  EventLocationCampaignMaster_o *v694; // x20
  int32_t v695; // w2
  const MethodInfo *v696; // x3
  CampaignInfoMaster_o *v697; // x20
  int32_t v698; // w2
  const MethodInfo *v699; // x3
  DialogMessageMaster_o *v700; // x20
  int32_t v701; // w2
  const MethodInfo *v702; // x3
  ServantIndividualityMaster_o *v703; // x20
  int32_t v704; // w2
  const MethodInfo *v705; // x3
  BoardMessageMaster_o *v706; // x20
  int32_t v707; // w2
  const MethodInfo *v708; // x3
  BoardMessageReleaseMaster_o *v709; // x20
  int32_t v710; // w2
  const MethodInfo *v711; // x3
  EventServantFatigueMaster_o *v712; // x20
  int32_t v713; // w2
  const MethodInfo *v714; // x3
  UserEventDeckMaster_o *v715; // x20
  int32_t v716; // w2
  const MethodInfo *v717; // x3
  EventTowerMaster_o *v718; // x20
  int32_t v719; // w2
  const MethodInfo *v720; // x3
  EventTowerRewardMaster_o *v721; // x20
  int32_t v722; // w2
  const MethodInfo *v723; // x3
  EventBulletinBoardMaster_o *v724; // x20
  int32_t v725; // w2
  const MethodInfo *v726; // x3
  EventBulletinBoardReleaseMaster_o *v727; // x20
  int32_t v728; // w2
  const MethodInfo *v729; // x3
  EventFactoryMaster_o *v730; // x20
  int32_t v731; // w2
  const MethodInfo *v732; // x3
  ShopGroupMaster_o *v733; // x20
  int32_t v734; // w2
  const MethodInfo *v735; // x3
  AuraEffectMaster_o *v736; // x20
  int32_t v737; // w2
  const MethodInfo *v738; // x3
  AuraEffectPosOverwriteMaster_o *v739; // x20
  int32_t v740; // w2
  const MethodInfo *v741; // x3
  UserEventMissionFixMaster_o *v742; // x20
  int32_t v743; // w2
  const MethodInfo *v744; // x3
  NotEndEventMissionFixMaster_o *v745; // x20
  int32_t v746; // w2
  const MethodInfo *v747; // x3
  EnemyMstMaster_o *v748; // x20
  int32_t v749; // w2
  const MethodInfo *v750; // x3
  EnemyMstBattleMaster_o *v751; // x20
  int32_t v752; // w2
  const MethodInfo *v753; // x3
  ServantSkillReleaseMaster_o *v754; // x20
  int32_t v755; // w2
  const MethodInfo *v756; // x3
  ServantPassiveSkillReleaseMaster_o *v757; // x20
  int32_t v758; // w2
  const MethodInfo *v759; // x3
  ServantTreasureDeviceReleaseMaster_o *v760; // x20
  int32_t v761; // w2
  const MethodInfo *v762; // x3
  MapGimmickReleaseMaster_o *v763; // x20
  int32_t v764; // w2
  const MethodInfo *v765; // x3
  CommandCodeMaster_o *v766; // x20
  int32_t v767; // w2
  const MethodInfo *v768; // x3
  ServantCommandCodeUnlockMaster_o *v769; // x20
  int32_t v770; // w2
  const MethodInfo *v771; // x3
  UserCommandCodeMaster_o *v772; // x20
  int32_t v773; // w2
  const MethodInfo *v774; // x3
  UserCommandCodeCollectionMaster_o *v775; // x20
  int32_t v776; // w2
  const MethodInfo *v777; // x3
  UserServantCommandCodeMaster_o *v778; // x20
  int32_t v779; // w2
  const MethodInfo *v780; // x3
  UserServantCommandCardMaster_o *v781; // x20
  int32_t v782; // w2
  const MethodInfo *v783; // x3
  CommandCardRankParamMaster_o *v784; // x20
  int32_t v785; // w2
  const MethodInfo *v786; // x3
  CommandCodeSkillMaster_o *v787; // x20
  int32_t v788; // w2
  const MethodInfo *v789; // x3
  CommandCodeSkillReleaseMaster_o *v790; // x20
  int32_t v791; // w2
  const MethodInfo *v792; // x3
  CommandCodeCommentMaster_o *v793; // x20
  int32_t v794; // w2
  const MethodInfo *v795; // x3
  EventStatusMaster_o *v796; // x20
  int32_t v797; // w2
  const MethodInfo *v798; // x3
  EventStatusQuestMaster_o *v799; // x20
  int32_t v800; // w2
  const MethodInfo *v801; // x3
  CommonRestrictionMaster_o *v802; // x20
  int32_t v803; // w2
  const MethodInfo *v804; // x3
  EventPointBuffMaster_o *v805; // x20
  int32_t v806; // w2
  const MethodInfo *v807; // x3
  UserFollowMaster_o *v808; // x20
  int32_t v809; // w2
  const MethodInfo *v810; // x3
  EventRewardGuideReleaseMaster_o *v811; // x20
  int32_t v812; // w2
  const MethodInfo *v813; // x3
  NpcServantEquipMaster_o *v814; // x20
  int32_t v815; // w2
  const MethodInfo *v816; // x3
  EventCampaignReleaseMaster_o *v817; // x20
  int32_t v818; // w2
  const MethodInfo *v819; // x3
  ServantMaterialFolderMaster_o *v820; // x20
  int32_t v821; // w2
  const MethodInfo *v822; // x3
  EventEquipSkillReleaseMaster_o *v823; // x20
  int32_t v824; // w2
  const MethodInfo *v825; // x3
  EventPointActivityMaster_o *v826; // x20
  int32_t v827; // w2
  const MethodInfo *v828; // x3
  FunctionCategoryMaster_o *v829; // x20
  int32_t v830; // w2
  const MethodInfo *v831; // x3
  QuestPickupMaster_o *v832; // x20
  int32_t v833; // w2
  const MethodInfo *v834; // x3
  EventUiMaster_o *v835; // x20
  int32_t v836; // w2
  const MethodInfo *v837; // x3
  EventUiReleaseMaster_o *v838; // x20
  int32_t v839; // w2
  const MethodInfo *v840; // x3
  EventUiValueMaster_o *v841; // x20
  int32_t v842; // w2
  const MethodInfo *v843; // x3
  EventConquestRewardMaster_o *v844; // x20
  int32_t v845; // w2
  const MethodInfo *v846; // x3
  NpcFollowerReleaseMaster_o *v847; // x20
  int32_t v848; // w2
  const MethodInfo *v849; // x3
  EventBonusFilterMaster_o *v850; // x20
  int32_t v851; // w2
  const MethodInfo *v852; // x3
  EventBonusFilterGroupInfoMaster_o *v853; // x20
  int32_t v854; // w2
  const MethodInfo *v855; // x3
  EventBonusFilterGroupMemberMaster_o *v856; // x20
  int32_t v857; // w2
  const MethodInfo *v858; // x3
  UserGachaExtraCountMaster_o *v859; // x20
  int32_t v860; // w2
  const MethodInfo *v861; // x3
  PrivilegeMaster_o *v862; // x20
  int32_t v863; // w2
  const MethodInfo *v864; // x3
  UserPrivilegeMaster_o *v865; // x20
  int32_t v866; // w2
  const MethodInfo *v867; // x3
  UserQuestRouteMaster_o *v868; // x20
  int32_t v869; // w2
  const MethodInfo *v870; // x3
  EventBossStatusUiMaster_o *v871; // x20
  int32_t v872; // w2
  const MethodInfo *v873; // x3
  CommonReleaseMaster_o *v874; // x20
  int32_t v875; // w2
  const MethodInfo *v876; // x3
  QuestSpotReleaseMaster_o *v877; // x20
  int32_t v878; // w2
  const MethodInfo *v879; // x3
  VoiceMaterialCondMaster_o *v880; // x20
  int32_t v881; // w2
  const MethodInfo *v882; // x3
  ClassRelationOverwriteMaster_o *v883; // x20
  int32_t v884; // w2
  const MethodInfo *v885; // x3
  EventGroupMaster_o *v886; // x20
  int32_t v887; // w2
  const MethodInfo *v888; // x3
  TotalBoxGachaMaster_o *v889; // x20
  int32_t v890; // w2
  const MethodInfo *v891; // x3
  ServantTreasureDeviceDamageMaster_o *v892; // x20
  int32_t v893; // w2
  const MethodInfo *v894; // x3
  UserEventServantFatigueMaster_o *v895; // x20
  int32_t v896; // w2
  const MethodInfo *v897; // x3
  EventRewardBgMaster_o *v898; // x20
  int32_t v899; // w2
  const MethodInfo *v900; // x3
  EventFatigueRecoveryMaster_o *v901; // x20
  int32_t v902; // w2
  const MethodInfo *v903; // x3
  EventBoostItemUsedMaster_o *v904; // x20
  int32_t v905; // w2
  const MethodInfo *v906; // x3
  StatusEffectPosOverwriteMaster_o *v907; // x20
  int32_t v908; // w2
  const MethodInfo *v909; // x3
  QuestPhaseDetailAddMaster_o *v910; // x20
  int32_t v911; // w2
  const MethodInfo *v912; // x3
  VoiceClosedMessageMaster_o *v913; // x20
  int32_t v914; // w2
  const MethodInfo *v915; // x3
  ReprintStageMaster_o *v916; // x20
  int32_t v917; // w2
  const MethodInfo *v918; // x3
  UserCombineExpMaster_o *v919; // x20
  int32_t v920; // w2
  const MethodInfo *v921; // x3
  EventBoardGameCellMaster_o *v922; // x20
  int32_t v923; // w2
  const MethodInfo *v924; // x3
  EventBoardGameTokenMaster_o *v925; // x20
  int32_t v926; // w2
  const MethodInfo *v927; // x3
  EventBoardGameTokenRewardMaster_o *v928; // x20
  int32_t v929; // w2
  const MethodInfo *v930; // x3
  UserEventBoardGameTokenMaster_o *v931; // x20
  int32_t v932; // w2
  const MethodInfo *v933; // x3
  ServantAnimationOverwriteMaster_o *v934; // x20
  int32_t v935; // w2
  const MethodInfo *v936; // x3
  OpeningMovieMaster_o *v937; // x20
  int32_t v938; // w2
  const MethodInfo *v939; // x3
  ServantLimitSpoilerProtectionMaster_o *v940; // x20
  int32_t v941; // w2
  const MethodInfo *v942; // x3
  PickupUserFollowerMaster_o *v943; // x20
  int32_t v944; // w2
  const MethodInfo *v945; // x3
  ServantCollectionMaster_o *v946; // x20
  int32_t v947; // w2
  const MethodInfo *v948; // x3
  GachaBehaviorMaster_o *v949; // x20
  int32_t v950; // w2
  const MethodInfo *v951; // x3
  EventQuestCooltimeMaster_o *v952; // x20
  int32_t v953; // w2
  const MethodInfo *v954; // x3
  UserEventQuestCooltimeMaster_o *v955; // x20
  int32_t v956; // w2
  const MethodInfo *v957; // x3
  BoostMaster_o *v958; // x20
  int32_t v959; // w2
  const MethodInfo *v960; // x3
  WarBoardMaster_o *v961; // x20
  int32_t v962; // w2
  const MethodInfo *v963; // x3
  WarBoardSquareMaster_o *v964; // x20
  int32_t v965; // w2
  const MethodInfo *v966; // x3
  WarBoardRoadMaster_o *v967; // x20
  int32_t v968; // w2
  const MethodInfo *v969; // x3
  WarBoardStageMaster_o *v970; // x20
  int32_t v971; // w2
  const MethodInfo *v972; // x3
  WarBoardActionPointMaster_o *v973; // x20
  int32_t v974; // w2
  const MethodInfo *v975; // x3
  WarBoardActionTrendMaster_o *v976; // x20
  int32_t v977; // w2
  const MethodInfo *v978; // x3
  WarBoardTacticalTrendMaster_o *v979; // x20
  int32_t v980; // w2
  const MethodInfo *v981; // x3
  WarBoardStageLayoutMaster_o *v982; // x20
  int32_t v983; // w2
  const MethodInfo *v984; // x3
  WarBoardStageNpcMaster_o *v985; // x20
  int32_t v986; // w2
  const MethodInfo *v987; // x3
  WarBoardStageWallMaster_o *v988; // x20
  int32_t v989; // w2
  const MethodInfo *v990; // x3
  WarBoardAIMaster_o *v991; // x20
  int32_t v992; // w2
  const MethodInfo *v993; // x3
  WarBoardRatingBaseMaster_o *v994; // x20
  int32_t v995; // w2
  const MethodInfo *v996; // x3
  WarBoardRatingOffsetMaster_o *v997; // x20
  int32_t v998; // w2
  const MethodInfo *v999; // x3
  WarBoardItemMaster_o *v1000; // x20
  int32_t v1001; // w2
  const MethodInfo *v1002; // x3
  WarBoardTreasureMaster_o *v1003; // x20
  int32_t v1004; // w2
  const MethodInfo *v1005; // x3
  WarBoardQuestMaster_o *v1006; // x20
  int32_t v1007; // w2
  const MethodInfo *v1008; // x3
  WarBoardDataMaster_o *v1009; // x20
  int32_t v1010; // w2
  const MethodInfo *v1011; // x3
  WarBoardIndividualityClassMaster_o *v1012; // x20
  int32_t v1013; // w2
  const MethodInfo *v1014; // x3
  WarBoardActionTrendConditionMaster_o *v1015; // x20
  int32_t v1016; // w2
  const MethodInfo *v1017; // x3
  WarBoardActionPointClassMaster_o *v1018; // x20
  int32_t v1019; // w2
  const MethodInfo *v1020; // x3
  EventPanelMapMaster_o *v1021; // x20
  int32_t v1022; // w2
  const MethodInfo *v1023; // x3
  EventPanelMapDetailMaster_o *v1024; // x20
  int32_t v1025; // w2
  const MethodInfo *v1026; // x3
  EventPanelSpotMaster_o *v1027; // x20
  int32_t v1028; // w2
  const MethodInfo *v1029; // x3
  EventPanelScanMaster_o *v1030; // x20
  int32_t v1031; // w2
  const MethodInfo *v1032; // x3
  CommonConsumeMaster_o *v1033; // x20
  int32_t v1034; // w2
  const MethodInfo *v1035; // x3
  UserEventMapMaster_o *v1036; // x20
  int32_t v1037; // w2
  const MethodInfo *v1038; // x3
  UserEventSpotMaster_o *v1039; // x20
  int32_t v1040; // w2
  const MethodInfo *v1041; // x3
  WarGroupMaster_o *v1042; // x20
  int32_t v1043; // w2
  const MethodInfo *v1044; // x3
  ServantLimitImageMaster_o *v1045; // x20
  int32_t v1046; // w2
  const MethodInfo *v1047; // x3
  FriendshipQuestDialogInfoMaster_o *v1048; // x20
  int32_t v1049; // w2
  const MethodInfo *v1050; // x3
  QuestRestrictionInfoMaster_o *v1051; // x20
  int32_t v1052; // w2
  const MethodInfo *v1053; // x3
  AssistMaster_o *v1054; // x20
  int32_t v1055; // w2
  const MethodInfo *v1056; // x3
  WarBoardEffectMaster_o *v1057; // x20
  int32_t v1058; // w2
  const MethodInfo *v1059; // x3
  WarBoardOnboardSkillMaster_o *v1060; // x20
  int32_t v1061; // w2
  const MethodInfo *v1062; // x3
  BeforeBirthDayMaster_o *v1063; // x20
  int32_t v1064; // w2
  const MethodInfo *v1065; // x3
  LoginQuestMaster_o *v1066; // x20
  int32_t v1067; // w2
  const MethodInfo *v1068; // x3
  EventCombineCostumeMaster_o *v1069; // x20
  int32_t v1070; // w2
  const MethodInfo *v1071; // x3
  WarBoardStagePieceDetailMaster_o *v1072; // x20
  int32_t v1073; // w2
  const MethodInfo *v1074; // x3
  ServantTreasureDeviceAddMaster_o *v1075; // x20
  int32_t v1076; // w2
  const MethodInfo *v1077; // x3
  SkillAddMaster_o *v1078; // x20
  int32_t v1079; // w2
  const MethodInfo *v1080; // x3
  ServantLvDetailMaster_o *v1081; // x20
  int32_t v1082; // w2
  const MethodInfo *v1083; // x3
  GachaAppendMaster_o *v1084; // x20
  int32_t v1085; // w2
  const MethodInfo *v1086; // x3
  UserGachaDrawLogMaster_o *v1087; // x20
  int32_t v1088; // w2
  const MethodInfo *v1089; // x3
  ServantAppendPassiveSkillMaster_o *v1090; // x20
  int32_t v1091; // w2
  const MethodInfo *v1092; // x3
  UserServantAppendPassiveSkillMaster_o *v1093; // x20
  int32_t v1094; // w2
  const MethodInfo *v1095; // x3
  UserServantAppendPassiveSkillLvMaster_o *v1096; // x20
  int32_t v1097; // w2
  const MethodInfo *v1098; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v1099; // x20
  int32_t v1100; // w2
  const MethodInfo *v1101; // x3
  CombineAppendPassiveSkillMaster_o *v1102; // x20
  int32_t v1103; // w2
  const MethodInfo *v1104; // x3
  SvtCoinMaster_o *v1105; // x20
  int32_t v1106; // w2
  const MethodInfo *v1107; // x3
  UserSvtCoinMaster_o *v1108; // x20
  int32_t v1109; // w2
  const MethodInfo *v1110; // x3
  ServantAddMaster_o *v1111; // x20
  int32_t v1112; // w2
  const MethodInfo *v1113; // x3
  TreasureBoxMaster_o *v1114; // x20
  int32_t v1115; // w2
  const MethodInfo *v1116; // x3
  TreasureBoxGiftMaster_o *v1117; // x20
  int32_t v1118; // w2
  const MethodInfo *v1119; // x3
  TreasureBoxTalkMaster_o *v1120; // x20
  int32_t v1121; // w2
  const MethodInfo *v1122; // x3
  UserEventExpeditionMaster_o *v1123; // x20
  int32_t v1124; // w2
  const MethodInfo *v1125; // x3
  EventExpeditionMaster_o *v1126; // x20
  int32_t v1127; // w2
  const MethodInfo *v1128; // x3
  EventExpeditionPieceMaster_o *v1129; // x20
  int32_t v1130; // w2
  const MethodInfo *v1131; // x3
  EventRecipeMaster_o *v1132; // x20
  int32_t v1133; // w2
  const MethodInfo *v1134; // x3
  EventRecipeGiftMaster_o *v1135; // x20
  int32_t v1136; // w2
  const MethodInfo *v1137; // x3
  UserEventFortificationMaster_o *v1138; // x20
  int32_t v1139; // w2
  const MethodInfo *v1140; // x3
  EventFortificationMaster_o *v1141; // x20
  int32_t v1142; // w2
  const MethodInfo *v1143; // x3
  EventFortificationDetailMaster_o *v1144; // x20
  int32_t v1145; // w2
  const MethodInfo *v1146; // x3
  EventFortificationSvtMaster_o *v1147; // x20
  int32_t v1148; // w2
  const MethodInfo *v1149; // x3
  UserServantVoicePlayedMaster_o *v1150; // x20
  int32_t v1151; // w2
  const MethodInfo *v1152; // x3
  UpdateProfileDialogInfoMaster_o *v1153; // x20
  int32_t v1154; // w2
  const MethodInfo *v1155; // x3
  SvtMaterialTdMaster_o *v1156; // x20
  int32_t v1157; // w2
  const MethodInfo *v1158; // x3
  BattleMasterImageMaster_o *v1159; // x20
  int32_t v1160; // w2
  const MethodInfo *v1161; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1162; // x20
  int32_t v1163; // w2
  const MethodInfo *v1164; // x3
  UserEventRandomMissionMaster_o *v1165; // x20
  int32_t v1166; // w2
  const MethodInfo *v1167; // x3
  EventProgressValueMaster_o *v1168; // x20
  int32_t v1169; // w2
  const MethodInfo *v1170; // x3
  SvtMultiPortraitMaster_o *v1171; // x20
  int32_t v1172; // w2
  const MethodInfo *v1173; // x3
  EventRandomMissionMaster_o *v1174; // x20
  int32_t v1175; // w2
  const MethodInfo *v1176; // x3
  UserGachaHistoryMaster_o *v1177; // x20
  int32_t v1178; // w2
  const MethodInfo *v1179; // x3
  UserCoinRoomMaster_o *v1180; // x20
  int32_t v1181; // w2
  const MethodInfo *v1182; // x3
  EventBuddyPointMaster_o *v1183; // x20
  int32_t v1184; // w2
  const MethodInfo *v1185; // x3
  EventServantPointRankMaster_o *v1186; // x20
  int32_t v1187; // w2
  const MethodInfo *v1188; // x3
  UserEventServantPointMaster_o *v1189; // x20
  int32_t v1190; // w2
  const MethodInfo *v1191; // x3
  FieldMotionMaster_o *v1192; // x20
  int32_t v1193; // w2
  const MethodInfo *v1194; // x3
  UserDeleteReservationMaster_o *v1195; // x20
  int32_t v1196; // w2
  const MethodInfo *v1197; // x3
  ServantScriptMultipleMaster_o *v1198; // x20
  int32_t v1199; // w2
  const MethodInfo *v1200; // x3
  EquipAddMaster_o *v1201; // x20
  int32_t v1202; // w2
  const MethodInfo *v1203; // x3
  QuestReleaseOverwriteMaster_o *v1204; // x20
  int32_t v1205; // w2
  const MethodInfo *v1206; // x3
  UserEventAlloutBattleMaster_o *v1207; // x20
  int32_t v1208; // w2
  const MethodInfo *v1209; // x3
  QuestScriptMaterialNextMaster_o *v1210; // x20
  int32_t v1211; // w2
  const MethodInfo *v1212; // x3
  EventDiggingMaster_o *v1213; // x20
  int32_t v1214; // w2
  const MethodInfo *v1215; // x3
  EventDiggingBlockMaster_o *v1216; // x20
  int32_t v1217; // w2
  const MethodInfo *v1218; // x3
  EventDiggingRewardMaster_o *v1219; // x20
  int32_t v1220; // w2
  const MethodInfo *v1221; // x3
  UserEventDiggingMaster_o *v1222; // x20
  int32_t v1223; // w2
  const MethodInfo *v1224; // x3
  BattleMessageMaster_o *v1225; // x20
  int32_t v1226; // w2
  const MethodInfo *v1227; // x3
  BattleMessageGroupMaster_o *v1228; // x20
  int32_t v1229; // w2
  const MethodInfo *v1230; // x3
  UserNpcSvtRecordMaster_o *v1231; // x20
  int32_t v1232; // w2
  const MethodInfo *v1233; // x3
  BuffTypeDetailMaster_o *v1234; // x20
  int32_t v1235; // w2
  const MethodInfo *v1236; // x3
  WarBoardMessageMaster_o *v1237; // x20
  int32_t v1238; // w2
  const MethodInfo *v1239; // x3
  WarBoardPartySkillMaster_o *v1240; // x20
  int32_t v1241; // w2
  const MethodInfo *v1242; // x3
  WarBoardMessageScriptMaster_o *v1243; // x20
  int32_t v1244; // w2
  const MethodInfo *v1245; // x3
  WarQuestSelectionMaster_o *v1246; // x20
  int32_t v1247; // w2
  const MethodInfo *v1248; // x3
  WarBoardStageDetailMaster_o *v1249; // x20
  int32_t v1250; // w2
  const MethodInfo *v1251; // x3
  QuestScriptMaterialOverwriteMaster_o *v1252; // x20
  int32_t v1253; // w2
  const MethodInfo *v1254; // x3
  QuestScriptBranchMaterialMaster_o *v1255; // x20
  int32_t v1256; // w2
  const MethodInfo *v1257; // x3
  AdCheckPointMaster_o *v1258; // x20
  int32_t v1259; // w2
  const MethodInfo *v1260; // x3
  GiftDetailMaster_o *v1261; // x20
  int32_t v1262; // w2
  const MethodInfo *v1263; // x3
  CombineLimitGiftMaster_o *v1264; // x20
  int32_t v1265; // w2
  const MethodInfo *v1266; // x3
  EventCooltimeRewardMaster_o *v1267; // x20
  int32_t v1268; // w2
  const MethodInfo *v1269; // x3
  UserEventCooltimeRewardMaster_o *v1270; // x20
  int32_t v1271; // w2
  const MethodInfo *v1272; // x3
  ClassBoardBaseMaster_o *v1273; // x20
  int32_t v1274; // w2
  const MethodInfo *v1275; // x3
  ClassBoardLockMaster_o *v1276; // x20
  int32_t v1277; // w2
  const MethodInfo *v1278; // x3
  ClassBoardSquareMaster_o *v1279; // x20
  int32_t v1280; // w2
  const MethodInfo *v1281; // x3
  ClassBoardLineMaster_o *v1282; // x20
  int32_t v1283; // w2
  const MethodInfo *v1284; // x3
  UserClassBoardSquareMaster_o *v1285; // x20
  int32_t v1286; // w2
  const MethodInfo *v1287; // x3
  ServantCardAddMaster_o *v1288; // x20
  int32_t v1289; // w2
  const MethodInfo *v1290; // x3
  MapLayerMaster_o *v1291; // x20
  int32_t v1292; // w2
  const MethodInfo *v1293; // x3
  SpotLayerMaster_o *v1294; // x20
  int32_t v1295; // w2
  const MethodInfo *v1296; // x3
  MapGimmickLayerMaster_o *v1297; // x20
  int32_t v1298; // w2
  const MethodInfo *v1299; // x3
  EventDataLostBattleMaster_o *v1300; // x20
  int32_t v1301; // w2
  const MethodInfo *v1302; // x3
  EventDataLostBattleResetMaster_o *v1303; // x20
  int32_t v1304; // w2
  const MethodInfo *v1305; // x3
  UserEventDataLostMaster_o *v1306; // x20
  int32_t v1307; // w2
  const MethodInfo *v1308; // x3
  QuestHintMaster_o *v1309; // x20
  int32_t v1310; // w2
  const MethodInfo *v1311; // x3
  FuncTypeDetailMaster_o *v1312; // x20
  int32_t v1313; // w2
  const MethodInfo *v1314; // x3
  BuffConvertMaster_o *v1315; // x20
  int32_t v1316; // w2
  const MethodInfo *v1317; // x3
  SkillGroupMaster_o *v1318; // x20
  int32_t v1319; // w2
  const MethodInfo *v1320; // x3
  SkillGroupOverwriteMaster_o *v1321; // x20
  int32_t v1322; // w2
  const MethodInfo *v1323; // x3
  SkillIndividualityMaster_o *v1324; // x20
  int32_t v1325; // w2
  const MethodInfo *v1326; // x3
  RestrictionBaseMaster_o *v1327; // x20
  int32_t v1328; // w2
  const MethodInfo *v1329; // x3
  RestrictionSlotMaster_o *v1330; // x20
  int32_t v1331; // w2
  const MethodInfo *v1332; // x3
  RestrictionSlotDetailMaster_o *v1333; // x20
  int32_t v1334; // w2
  const MethodInfo *v1335; // x3
  RestrictionMessageMaster_o *v1336; // x20
  int32_t v1337; // w2
  const MethodInfo *v1338; // x3
  RestrictionWholeMaster_o *v1339; // x20
  int32_t v1340; // w2
  const MethodInfo *v1341; // x3
  FuncDispMaster_o *v1342; // x20
  int32_t v1343; // w2
  const MethodInfo *v1344; // x3
  ClassBoardCommandSpellMaster_o *v1345; // x20
  int32_t v1346; // w2
  const MethodInfo *v1347; // x3
  ClassBoardClassMaster_o *v1348; // x20
  int32_t v1349; // w2
  const MethodInfo *v1350; // x3
  EventCommandAssistMaster_o *v1351; // x20
  int32_t v1352; // w2
  const MethodInfo *v1353; // x3
  EventMissionGroupMaster_o *v1354; // x20
  int32_t v1355; // w2
  const MethodInfo *v1356; // x3
  CombineLimitReleaseMaster_o *v1357; // x20
  int32_t v1358; // w2
  const MethodInfo *v1359; // x3
  HeelPortraitMaster_o *v1360; // x20
  int32_t v1361; // w2
  const MethodInfo *v1362; // x3
  UserHeelPortraitMaster_o *v1363; // x20
  int32_t v1364; // w2
  const MethodInfo *v1365; // x3
  TreasureDeviceSequenceWeightMaster_o *v1366; // x20
  int32_t v1367; // w2
  const MethodInfo *v1368; // x3
  NpcServantFollowerIndividualityMaster_o *v1369; // x20
  int32_t v1370; // w2
  const MethodInfo *v1371; // x3
  GachaExtraGiftMaster_o *v1372; // x20
  int32_t v1373; // w2
  const MethodInfo *v1374; // x3
  EventMuralMaster_o *v1375; // x20
  int32_t v1376; // w2
  const MethodInfo *v1377; // x3
  ViewWaveEnemyMaster_o *v1378; // x20
  int32_t v1379; // w2
  const MethodInfo *v1380; // x3
  BlankEarthSpotNavimenuMaster_o *v1381; // x20
  int32_t v1382; // w2
  const MethodInfo *v1383; // x3
  BlankEarthGimmickMaster_o *v1384; // x20
  int32_t v1385; // w2
  const MethodInfo *v1386; // x3
  TerminalOverwriteMaster_o *v1387; // x20
  int32_t v1388; // w2
  const MethodInfo *v1389; // x3
  UserExchangeSvtMaster_o *v1390; // x20
  int32_t v1391; // w2
  const MethodInfo *v1392; // x3
  WarBoardCommonReleaseMaster_o *v1393; // x20
  int32_t v1394; // w2
  const MethodInfo *v1395; // x3
  WarBoardEventMaster_o *v1396; // x20
  int32_t v1397; // w2
  const MethodInfo *v1398; // x3
  WarBoardEventScriptMaster_o *v1399; // x20
  int32_t v1400; // w2
  const MethodInfo *v1401; // x3
  WarBoardStageBossMaster_o *v1402; // x20
  int32_t v1403; // w2
  const MethodInfo *v1404; // x3
  WarBoardSquareIndexGroupMaster_o *v1405; // x20
  int32_t v1406; // w2
  const MethodInfo *v1407; // x3
  WarBoardActionTrendGroupMaster_o *v1408; // x20
  int32_t v1409; // w2
  const MethodInfo *v1410; // x3
  WarBoardRatingOffsetGroupMaster_o *v1411; // x20
  int32_t v1412; // w2
  const MethodInfo *v1413; // x3
  WarBoardReinforcementsMaster_o *v1414; // x20
  int32_t v1415; // w2
  const MethodInfo *v1416; // x3
  WarBoardStageReinforcementsMaster_o *v1417; // x20
  int32_t v1418; // w2
  const MethodInfo *v1419; // x3
  WarBoardFutureActionTrendMaster_o *v1420; // x20
  int32_t v1421; // w2
  const MethodInfo *v1422; // x3
  ServantProfilePushMaster_o *v1423; // x20
  int32_t v1424; // w2
  const MethodInfo *v1425; // x3
  MapGimmickPathMaster_o *v1426; // x20
  int32_t v1427; // w2
  const MethodInfo *v1428; // x3
  MapGimmickPathReleaseMaster_o *v1429; // x20
  int32_t v1430; // w2
  const MethodInfo *v1431; // x3
  ServantOverwriteMaster_o *v1432; // x20
  int32_t v1433; // w2
  const MethodInfo *v1434; // x3
  IndividualityPolicyMaster_o *v1435; // x20
  int32_t v1436; // w2
  const MethodInfo *v1437; // x3
  IndividualityPersonalityMaster_o *v1438; // x20
  int32_t v1439; // w2
  const MethodInfo *v1440; // x3
  AttriMaster_o *v1441; // x20
  int32_t v1442; // w2
  const MethodInfo *v1443; // x3
  ServantVoicePatternMaster_o *v1444; // x20
  int32_t v1445; // w2
  const MethodInfo *v1446; // x3
  UserGameCommonMaster_o *v1447; // x20
  int32_t v1448; // w2
  const MethodInfo *v1449; // x3
  ServantPhotoMaster_o *v1450; // x20
  int32_t v1451; // w2
  const MethodInfo *v1452; // x3
  MasterPhotoMaster_o *v1453; // x20
  int32_t v1454; // w2
  const MethodInfo *v1455; // x3
  PhotoFrameMaster_o *v1456; // x20
  int32_t v1457; // w2
  const MethodInfo *v1458; // x3
  WarMessageMaster_o *v1459; // x20
  int32_t v1460; // w2
  const MethodInfo *v1461; // x3
  QuestAutoOrganizationAdjustMaster_o *v1462; // x20
  int32_t v1463; // w2
  const MethodInfo *v1464; // x3
  ExcludeMotionMaster_o *v1465; // x20
  int32_t v1466; // w2
  const MethodInfo *v1467; // x3
  UserInterruptionQuestMaster_o *v1468; // x20
  int32_t v1469; // w2
  const MethodInfo *v1470; // x3
  ServantTransformMaster_o *v1471; // x20
  int32_t v1472; // w2
  const MethodInfo *v1473; // x3
  MapUpdateScheduleMaster_o *v1474; // x20
  int32_t v1475; // w2
  const MethodInfo *v1476; // x3
  QuestPhasePresentMaster_o *v1477; // x20
  int32_t v1478; // w2
  const MethodInfo *v1479; // x3
  UserAccountLinkageMaster_o *v1480; // x20
  int32_t v1481; // w2
  const MethodInfo *v1482; // x3
  MissionNaviTransitionMaster_o *v1483; // x20
  int32_t v1484; // w2
  const MethodInfo *v1485; // x3
  MissionNaviQuestMaster_o *v1486; // x20
  int32_t v1487; // w2
  const MethodInfo *v1488; // x3
  EventTradeGoodsMaster_o *v1489; // x20
  int32_t v1490; // w2
  const MethodInfo *v1491; // x3
  EventTradeStoreMaster_o *v1492; // x20
  int32_t v1493; // w2
  const MethodInfo *v1494; // x3
  EventTradePickupMaster_o *v1495; // x20
  int32_t v1496; // w2
  const MethodInfo *v1497; // x3
  UserEventTradeMaster_o *v1498; // x20
  int32_t v1499; // w2
  const MethodInfo *v1500; // x3
  PaymentHistoryMaster_o *v1501; // x20
  int32_t v1502; // w2
  const MethodInfo *v1503; // x3
  UserExternalPaymentStoneMaster_o *v1504; // x20
  int32_t v1505; // w2
  const MethodInfo *v1506; // x3
  QuestPhaseIndividualityMaster_o *v1507; // x20
  int32_t v1508; // w2
  const MethodInfo *v1509; // x3
  ViewGachaFeaturedServantMaster_o *v1510; // x20
  int32_t v1511; // w2
  const MethodInfo *v1512; // x3
  UserGachaPickupCollateralMaster_o *v1513; // x20
  int32_t v1514; // w2
  const MethodInfo *v1515; // x3
  GachaPickupCollateralMaster_o *v1516; // x20
  int32_t v1517; // w2
  const MethodInfo *v1518; // x3
  GachaPickupCollateralGroupMaster_o *v1519; // x20
  int32_t v1520; // w2
  const MethodInfo *v1521; // x3
  BattlePointMaster_o *v1522; // x20
  int32_t v1523; // w2
  const MethodInfo *v1524; // x3
  BattlePointPhaseMaster_o *v1525; // x20
  int32_t v1526; // w2
  const MethodInfo *v1527; // x3
  ServantBattlePointMaster_o *v1528; // x20
  int32_t v1529; // w2
  const MethodInfo *v1530; // x3
  EffectMovieMaster_o *v1531; // x20
  int32_t v1532; // w2
  const MethodInfo *v1533; // x3
  PaymentLimitMaster_o *v1534; // x20
  int32_t v1535; // w2
  const MethodInfo *v1536; // x3
  UserPaymentLimitMaster_o *v1537; // x20
  int32_t v1538; // w2
  const MethodInfo *v1539; // x3
  RoadmapMaster_o *v1540; // x20
  int32_t v1541; // w2
  const MethodInfo *v1542; // x3
  UserRecommendSupportMaster_o *v1543; // x20
  int32_t v1544; // w2
  const MethodInfo *v1545; // x3
  RecommendSupportQuestMaster_o *v1546; // x20
  int32_t v1547; // w2
  const MethodInfo *v1548; // x3
  RecommendAdviceMessageMaster_o *v1549; // x20
  int32_t v1550; // w2
  const MethodInfo *v1551; // x3
  UserRecommendFollowerMaster_o *v1552; // x20
  int32_t v1553; // w2
  const MethodInfo *v1554; // x3
  ItemDropEfficiencyMaster_o *v1555; // x20
  int32_t v1556; // w2
  const MethodInfo *v1557; // x3
  BlankEarthGimmickAddMaster_o *v1558; // x20
  int32_t v1559; // w2
  const MethodInfo *v1560; // x3
  WarReleaseMaster_o *v1561; // x20
  int32_t v1562; // w2
  const MethodInfo *v1563; // x3
  SelectBonusBaseMaster_o *v1564; // x20
  int32_t v1565; // w2
  const MethodInfo *v1566; // x3
  SelectBonusMaster_o *v1567; // x20
  int32_t v1568; // w2
  const MethodInfo *v1569; // x3
  MyroomServantSpecialImageMaster_o *v1570; // x20
  int32_t v1571; // w2
  const MethodInfo *v1572; // x3
  ShopResetMaster_o *v1573; // x20
  int32_t v1574; // w2
  const MethodInfo *v1575; // x3
  NpcServantDisplayTypeDetailMaster_o *v1576; // x20
  int32_t v1577; // w2
  const MethodInfo *v1578; // x3
  FriendshipServantMaster_o *v1579; // x20
  int32_t v1580; // w2
  const MethodInfo *v1581; // x3
  ExchangeSvtCoinGivenNumMaster_o *v1582; // x20
  int32_t v1583; // w2
  const MethodInfo *v1584; // x3
  ChaldeaGatePickupMaster_o *v1585; // x20
  int32_t v1586; // w2
  const MethodInfo *v1587; // x3
  WarGroupIgnoreMaster_o *v1588; // x20
  int32_t v1589; // w2
  const MethodInfo *v1590; // x3
  ImagePartsGroupMaster_o *v1591; // x20
  int32_t v1592; // w2
  const MethodInfo *v1593; // x3
  UserImagePartsGroupMaster_o *v1594; // x20
  int32_t v1595; // w2
  const MethodInfo *v1596; // x3
  MissionItemDisplayMaster_o *v1597; // x20
  int32_t v1598; // w2
  const MethodInfo *v1599; // x3
  QuestUseItemGroupMaster_o *v1600; // x20
  int32_t v1601; // w2
  const MethodInfo *v1602; // x3
  QuestUseItemPickupMaster_o *v1603; // x20
  int32_t v1604; // w2
  const MethodInfo *v1605; // x3
  UserEventItemLinkSvtMaster_o *v1606; // x20
  int32_t v1607; // w2
  const MethodInfo *v1608; // x3
  QuestHintOverwriteMaster_o *v1609; // x20
  int32_t v1610; // w2
  const MethodInfo *v1611; // x3
  ReachedWaveInfoMaster_o *v1612; // x20
  int32_t v1613; // w2
  const MethodInfo *v1614; // x3
  GalleryMaster_o *v1615; // x20
  int32_t v1616; // w2
  const MethodInfo *v1617; // x3
  GalleryResourceMaster_o *v1618; // x20
  int32_t v1619; // w2
  const MethodInfo *v1620; // x3
  ServantSkillAddMaster_o *v1621; // x20
  int32_t v1622; // w2
  const MethodInfo *v1623; // x3
  GalleryFolderReleaseMaster_o *v1624; // x20
  int32_t v1625; // w2
  const MethodInfo *v1626; // x3
  UserSvtFirstGetTimeMaster_o *v1627; // x20
  int32_t v1628; // w2
  const MethodInfo *v1629; // x3
  QuestExtensionMaster_o *v1630; // x20
  int32_t v1631; // w2
  const MethodInfo *v1632; // x3
  UserServantGrandMaster_o *v1633; // x20
  int32_t v1634; // w2
  const MethodInfo *v1635; // x3
  GrandGraphMaster_o *v1636; // x20
  int32_t v1637; // w2
  const MethodInfo *v1638; // x3
  GrandGraphDetailMaster_o *v1639; // x20
  int32_t v1640; // w2
  const MethodInfo *v1641; // x3
  UserClassStatisticsMaster_o *v1642; // x20
  int32_t v1643; // w2
  const MethodInfo *v1644; // x3
  EventEquipSkillPartsMaster_o *v1645; // x20
  int32_t v1646; // w2
  const MethodInfo *v1647; // x3
  MasterIndividualitySelectMaster_o *v1648; // x20
  int32_t v1649; // w2
  const MethodInfo *v1650; // x3
  MyroomAddBgDiffMaster_o *v1651; // x20
  int32_t v1652; // w2
  const MethodInfo *v1653; // x3
  BattleScriptMaster_o *v1654; // x20
  int32_t v1655; // w2
  const MethodInfo *v1656; // x3
  __int64 v1658; // x0

  if ( (byte_4C37485 & 1) == 0 )
  {
    sub_1C32C20(&AccessaryMaster_TypeInfo);
    sub_1C32C20(&AdCheckPointMaster_TypeInfo);
    sub_1C32C20(&AiActMaster_TypeInfo);
    sub_1C32C20(&AiFieldMaster_TypeInfo);
    sub_1C32C20(&AiMaster_TypeInfo);
    sub_1C32C20(&AreaMaster_TypeInfo);
    sub_1C32C20(&AssistMaster_TypeInfo);
    sub_1C32C20(&AttriMaster_TypeInfo);
    sub_1C32C20(&AttriRelationMaster_TypeInfo);
    sub_1C32C20(&AuraEffectMaster_TypeInfo);
    sub_1C32C20(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C32C20(&BankShopMaster_TypeInfo);
    sub_1C32C20(&BannerAddMaster_TypeInfo);
    sub_1C32C20(&BannerMaster_TypeInfo);
    sub_1C32C20(&BattleBgMaster_TypeInfo);
    sub_1C32C20(&BattleMasterImageMaster_TypeInfo);
    sub_1C32C20(&BattleMaster_TypeInfo);
    sub_1C32C20(&BattleMessageGroupMaster_TypeInfo);
    sub_1C32C20(&BattleMessageMaster_TypeInfo);
    sub_1C32C20(&BattlePointMaster_TypeInfo);
    sub_1C32C20(&BattlePointPhaseMaster_TypeInfo);
    sub_1C32C20(&BattleScriptMaster_TypeInfo);
    sub_1C32C20(&BeforeBirthDayMaster_TypeInfo);
    sub_1C32C20(&BgmMaster_TypeInfo);
    sub_1C32C20(&BgmReleaseMaster_TypeInfo);
    sub_1C32C20(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1C32C20(&BlankEarthGimmickMaster_TypeInfo);
    sub_1C32C20(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1C32C20(&BlankEarthSpotMaster_TypeInfo);
    sub_1C32C20(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1C32C20(&BoardMessageMaster_TypeInfo);
    sub_1C32C20(&BoardMessageReleaseMaster_TypeInfo);
    sub_1C32C20(&BoostMaster_TypeInfo);
    sub_1C32C20(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1C32C20(&BoxGachaBaseMaster_TypeInfo);
    sub_1C32C20(&BoxGachaHistoryMaster_TypeInfo);
    sub_1C32C20(&BoxGachaMaster_TypeInfo);
    sub_1C32C20(&BoxGachaTalkMaster_TypeInfo);
    sub_1C32C20(&BuffConvertMaster_TypeInfo);
    sub_1C32C20(&BuffMaster_TypeInfo);
    sub_1C32C20(&BuffTypeDetailMaster_TypeInfo);
    sub_1C32C20(&CampaignInfoMaster_TypeInfo);
    sub_1C32C20(&CardMaster_TypeInfo);
    sub_1C32C20(&ChaldeaGatePickupMaster_TypeInfo);
    sub_1C32C20(&ClassBoardBaseMaster_TypeInfo);
    sub_1C32C20(&ClassBoardClassMaster_TypeInfo);
    sub_1C32C20(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1C32C20(&ClassBoardLineMaster_TypeInfo);
    sub_1C32C20(&ClassBoardLockMaster_TypeInfo);
    sub_1C32C20(&ClassBoardSquareMaster_TypeInfo);
    sub_1C32C20(&ClassRelationMaster_TypeInfo);
    sub_1C32C20(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1C32C20(&ClosedMessageMaster_TypeInfo);
    sub_1C32C20(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1C32C20(&CombineCostumeMaster_TypeInfo);
    sub_1C32C20(&CombineLimitGiftMaster_TypeInfo);
    sub_1C32C20(&CombineLimitMaster_TypeInfo);
    sub_1C32C20(&CombineLimitReleaseMaster_TypeInfo);
    sub_1C32C20(&CombineMaster_TypeInfo);
    sub_1C32C20(&CombineMaterialMaster_TypeInfo);
    sub_1C32C20(&CombineQpMaster_TypeInfo);
    sub_1C32C20(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1C32C20(&CombineSkillMaster_TypeInfo);
    sub_1C32C20(&CombineTdMaster_TypeInfo);
    sub_1C32C20(&CommandCardRankParamMaster_TypeInfo);
    sub_1C32C20(&CommandCodeCommentMaster_TypeInfo);
    sub_1C32C20(&CommandCodeMaster_TypeInfo);
    sub_1C32C20(&CommandCodeSkillMaster_TypeInfo);
    sub_1C32C20(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1C32C20(&CommandSpellMaster_TypeInfo);
    sub_1C32C20(&CommonConsumeMaster_TypeInfo);
    sub_1C32C20(&CommonReleaseMaster_TypeInfo);
    sub_1C32C20(&CommonRestrictionMaster_TypeInfo);
    sub_1C32C20(&CompleteMissionMaster_TypeInfo);
    sub_1C32C20(&ConstantLongMaster_TypeInfo);
    sub_1C32C20(&ConstantMaster_TypeInfo);
    sub_1C32C20(&ConstantStrMaster_TypeInfo);
    sub_1C32C20(&CvMaster_TypeInfo);
    sub_1C32C20(&DataMasterBase___TypeInfo);
    sub_1C32C20(&DialogMessageMaster_TypeInfo);
    sub_1C32C20(&EffectMaster_TypeInfo);
    sub_1C32C20(&EffectMovieMaster_TypeInfo);
    sub_1C32C20(&EnemyMstBattleMaster_TypeInfo);
    sub_1C32C20(&EnemyMstMaster_TypeInfo);
    sub_1C32C20(&EquipAddMaster_TypeInfo);
    sub_1C32C20(&EquipExpMaster_TypeInfo);
    sub_1C32C20(&EquipImageMaster_TypeInfo);
    sub_1C32C20(&EquipMaster_TypeInfo);
    sub_1C32C20(&EquipSkillMaster_TypeInfo);
    sub_1C32C20(&EventAddMaster_TypeInfo);
    sub_1C32C20(&EventBoardGameCellMaster_TypeInfo);
    sub_1C32C20(&EventBoardGameTokenMaster_TypeInfo);
    sub_1C32C20(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1C32C20(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1C32C20(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1C32C20(&EventBonusFilterMaster_TypeInfo);
    sub_1C32C20(&EventBoostItemUsedMaster_TypeInfo);
    sub_1C32C20(&EventBossStatusUiMaster_TypeInfo);
    sub_1C32C20(&EventBuddyPointMaster_TypeInfo);
    sub_1C32C20(&EventBulletinBoardMaster_TypeInfo);
    sub_1C32C20(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1C32C20(&EventCampaignMaster_TypeInfo);
    sub_1C32C20(&EventCampaignReleaseMaster_TypeInfo);
    sub_1C32C20(&EventCombineCostumeMaster_TypeInfo);
    sub_1C32C20(&EventCombineMaster_TypeInfo);
    sub_1C32C20(&EventCommandAssistMaster_TypeInfo);
    sub_1C32C20(&EventConquestRewardMaster_TypeInfo);
    sub_1C32C20(&EventCooltimeRewardMaster_TypeInfo);
    sub_1C32C20(&EventDataLostBattleMaster_TypeInfo);
    sub_1C32C20(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1C32C20(&EventDetailMaster_TypeInfo);
    sub_1C32C20(&EventDiggingBlockMaster_TypeInfo);
    sub_1C32C20(&EventDiggingMaster_TypeInfo);
    sub_1C32C20(&EventDiggingRewardMaster_TypeInfo);
    sub_1C32C20(&EventEquipSkillPartsMaster_TypeInfo);
    sub_1C32C20(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1C32C20(&EventExpeditionMaster_TypeInfo);
    sub_1C32C20(&EventExpeditionPieceMaster_TypeInfo);
    sub_1C32C20(&EventFactoryMaster_TypeInfo);
    sub_1C32C20(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1C32C20(&EventFilterMaster_TypeInfo);
    sub_1C32C20(&EventFortificationDetailMaster_TypeInfo);
    sub_1C32C20(&EventFortificationMaster_TypeInfo);
    sub_1C32C20(&EventFortificationSvtMaster_TypeInfo);
    sub_1C32C20(&EventGroupMaster_TypeInfo);
    sub_1C32C20(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1C32C20(&EventItemDisplayMaster_TypeInfo);
    sub_1C32C20(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1C32C20(&EventLocationCampaignMaster_TypeInfo);
    sub_1C32C20(&EventMaster_TypeInfo);
    sub_1C32C20(&EventMissionActionAddMaster_TypeInfo);
    sub_1C32C20(&EventMissionActionMaster_TypeInfo);
    sub_1C32C20(&EventMissionAddMaster_TypeInfo);
    sub_1C32C20(&EventMissionCondDetailMaster_TypeInfo);
    sub_1C32C20(&EventMissionConditionMaster_TypeInfo);
    sub_1C32C20(&EventMissionGroupMaster_TypeInfo);
    sub_1C32C20(&EventMissionMaster_TypeInfo);
    sub_1C32C20(&EventMuralMaster_TypeInfo);
    sub_1C32C20(&EventPanelMapDetailMaster_TypeInfo);
    sub_1C32C20(&EventPanelMapMaster_TypeInfo);
    sub_1C32C20(&EventPanelScanMaster_TypeInfo);
    sub_1C32C20(&EventPanelSpotMaster_TypeInfo);
    sub_1C32C20(&EventPointActivityMaster_TypeInfo);
    sub_1C32C20(&EventPointBuffMaster_TypeInfo);
    sub_1C32C20(&EventPointGroupAddMaster_TypeInfo);
    sub_1C32C20(&EventPointGroupMaster_TypeInfo);
    sub_1C32C20(&EventPointMaster_TypeInfo);
    sub_1C32C20(&EventPointUpperMaster_TypeInfo);
    sub_1C32C20(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1C32C20(&EventProgressValueMaster_TypeInfo);
    sub_1C32C20(&EventQuestCooltimeMaster_TypeInfo);
    sub_1C32C20(&EventQuestMaster_TypeInfo);
    sub_1C32C20(&EventRaceMaster_TypeInfo);
    sub_1C32C20(&EventRaceResultMaster_TypeInfo);
    sub_1C32C20(&EventRaidMaster_TypeInfo);
    sub_1C32C20(&EventRandomMissionMaster_TypeInfo);
    sub_1C32C20(&EventRecipeGiftMaster_TypeInfo);
    sub_1C32C20(&EventRecipeMaster_TypeInfo);
    sub_1C32C20(&EventRewardBgMaster_TypeInfo);
    sub_1C32C20(&EventRewardExtraMaster_TypeInfo);
    sub_1C32C20(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1C32C20(&EventRewardMaster_TypeInfo);
    sub_1C32C20(&EventRewardSceneMaster_TypeInfo);
    sub_1C32C20(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1C32C20(&EventRewardSetMaster_TypeInfo);
    sub_1C32C20(&EventScriptMaster_TypeInfo);
    sub_1C32C20(&EventScriptReleaseMaster_TypeInfo);
    sub_1C32C20(&EventServantFatigueMaster_TypeInfo);
    sub_1C32C20(&EventServantMaster_TypeInfo);
    sub_1C32C20(&EventServantPointRankMaster_TypeInfo);
    sub_1C32C20(&EventStatusMaster_TypeInfo);
    sub_1C32C20(&EventStatusQuestMaster_TypeInfo);
    sub_1C32C20(&EventSuperBossMaster_TypeInfo);
    sub_1C32C20(&EventTowerMaster_TypeInfo);
    sub_1C32C20(&EventTowerRewardMaster_TypeInfo);
    sub_1C32C20(&EventTradeGoodsMaster_TypeInfo);
    sub_1C32C20(&EventTradePickupMaster_TypeInfo);
    sub_1C32C20(&EventTradeStoreMaster_TypeInfo);
    sub_1C32C20(&EventTutorialCondMaster_TypeInfo);
    sub_1C32C20(&EventTutorialMaster_TypeInfo);
    sub_1C32C20(&EventUiMaster_TypeInfo);
    sub_1C32C20(&EventUiReleaseMaster_TypeInfo);
    sub_1C32C20(&EventUiValueMaster_TypeInfo);
    sub_1C32C20(&EventVoicePlayMaster_TypeInfo);
    sub_1C32C20(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_1C32C20(&ExcludeMotionMaster_TypeInfo);
    sub_1C32C20(&FieldMotionMaster_TypeInfo);
    sub_1C32C20(&FriendshipMaster_TypeInfo);
    sub_1C32C20(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1C32C20(&FriendshipServantMaster_TypeInfo);
    sub_1C32C20(&FuncDispMaster_TypeInfo);
    sub_1C32C20(&FuncTypeDetailMaster_TypeInfo);
    sub_1C32C20(&FunctionCategoryMaster_TypeInfo);
    sub_1C32C20(&FunctionGroupMaster_TypeInfo);
    sub_1C32C20(&FunctionMaster_TypeInfo);
    sub_1C32C20(&GachaAdjustAddMaster_TypeInfo);
    sub_1C32C20(&GachaAppendMaster_TypeInfo);
    sub_1C32C20(&GachaBaseCollateralMaster_TypeInfo);
    sub_1C32C20(&GachaBehaviorMaster_TypeInfo);
    sub_1C32C20(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1C32C20(&GachaBonusSelectMaster_TypeInfo);
    sub_1C32C20(&GachaDetailMaster_TypeInfo);
    sub_1C32C20(&GachaExtraGiftMaster_TypeInfo);
    sub_1C32C20(&GachaGroupMaster_TypeInfo);
    sub_1C32C20(&GachaImageMaster_TypeInfo);
    sub_1C32C20(&GachaMaster_TypeInfo);
    sub_1C32C20(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1C32C20(&GachaPickupCollateralMaster_TypeInfo);
    sub_1C32C20(&GachaReleaseMaster_TypeInfo);
    sub_1C32C20(&GachaStoryAdjustMaster_TypeInfo);
    sub_1C32C20(&GachaSubMaster_TypeInfo);
    sub_1C32C20(&GachaTicketMaster_TypeInfo);
    sub_1C32C20(&GalleryFolderReleaseMaster_TypeInfo);
    sub_1C32C20(&GalleryMaster_TypeInfo);
    sub_1C32C20(&GalleryResourceMaster_TypeInfo);
    sub_1C32C20(&GiftAddMaster_TypeInfo);
    sub_1C32C20(&GiftDetailMaster_TypeInfo);
    sub_1C32C20(&GiftMaster_TypeInfo);
    sub_1C32C20(&GrandGraphDetailMaster_TypeInfo);
    sub_1C32C20(&GrandGraphMaster_TypeInfo);
    sub_1C32C20(&GuideMaster_TypeInfo);
    sub_1C32C20(&HeelPortraitMaster_TypeInfo);
    sub_1C32C20(&IllustratorMaster_TypeInfo);
    sub_1C32C20(&ImagePartsGroupMaster_TypeInfo);
    sub_1C32C20(&IndividualityPersonalityMaster_TypeInfo);
    sub_1C32C20(&IndividualityPolicyMaster_TypeInfo);
    sub_1C32C20(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1C32C20(&ItemMaster_TypeInfo);
    sub_1C32C20(&ItemSelectMaster_TypeInfo);
    sub_1C32C20(&LoginQuestMaster_TypeInfo);
    sub_1C32C20(&MapButtonMaster_TypeInfo);
    sub_1C32C20(&MapCondMaster_TypeInfo);
    sub_1C32C20(&MapGimmickLayerMaster_TypeInfo);
    sub_1C32C20(&MapGimmickMaster_TypeInfo);
    sub_1C32C20(&MapGimmickPathMaster_TypeInfo);
    sub_1C32C20(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1C32C20(&MapGimmickReleaseMaster_TypeInfo);
    sub_1C32C20(&MapLayerMaster_TypeInfo);
    sub_1C32C20(&MapMaster_TypeInfo);
    sub_1C32C20(&MapUpdateScheduleMaster_TypeInfo);
    sub_1C32C20(&MasterIndividualitySelectMaster_TypeInfo);
    sub_1C32C20(&MasterPhotoMaster_TypeInfo);
    sub_1C32C20(&MaterialFolderMaster_TypeInfo);
    sub_1C32C20(&MissionItemDisplayMaster_TypeInfo);
    sub_1C32C20(&MissionNaviQuestMaster_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionMaster_TypeInfo);
    sub_1C32C20(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1C32C20(&MstMissionMaster_TypeInfo);
    sub_1C32C20(&MyRoomAddMaster_TypeInfo);
    sub_1C32C20(&MyroomAddBgDiffMaster_TypeInfo);
    sub_1C32C20(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1C32C20(&NewsMaster_TypeInfo);
    sub_1C32C20(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1C32C20(&NpcFollowerMaster_TypeInfo);
    sub_1C32C20(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1C32C20(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_1C32C20(&NpcServantEquipMaster_TypeInfo);
    sub_1C32C20(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1C32C20(&NpcServantFollowerMaster_TypeInfo);
    sub_1C32C20(&OpeningMovieMaster_TypeInfo);
    sub_1C32C20(&OtherUserGameMaster_TypeInfo);
    sub_1C32C20(&PartialMaintenanceMaster_TypeInfo);
    sub_1C32C20(&PaymentHistoryMaster_TypeInfo);
    sub_1C32C20(&PaymentLimitMaster_TypeInfo);
    sub_1C32C20(&PhotoFrameMaster_TypeInfo);
    sub_1C32C20(&PickupUserFollowerMaster_TypeInfo);
    sub_1C32C20(&PrivilegeMaster_TypeInfo);
    sub_1C32C20(&QuestAddMaster_TypeInfo);
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1C32C20(&QuestBehaviorMaster_TypeInfo);
    sub_1C32C20(&QuestConsumeItemMaster_TypeInfo);
    sub_1C32C20(&QuestDateRangeMaster_TypeInfo);
    sub_1C32C20(&QuestExtensionMaster_TypeInfo);
    sub_1C32C20(&QuestGroupMaster_TypeInfo);
    sub_1C32C20(&QuestHintMaster_TypeInfo);
    sub_1C32C20(&QuestHintOverwriteMaster_TypeInfo);
    sub_1C32C20(&QuestMaster_TypeInfo);
    sub_1C32C20(&QuestMessageMaster_TypeInfo);
    sub_1C32C20(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1C32C20(&QuestPhaseDetailMaster_TypeInfo);
    sub_1C32C20(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1C32C20(&QuestPhaseMaster_TypeInfo);
    sub_1C32C20(&QuestPhasePresentMaster_TypeInfo);
    sub_1C32C20(&QuestPickupMaster_TypeInfo);
    sub_1C32C20(&QuestRacePointMaster_TypeInfo);
    sub_1C32C20(&QuestRandomGroupMaster_TypeInfo);
    sub_1C32C20(&QuestReleaseMaster_TypeInfo);
    sub_1C32C20(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1C32C20(&QuestResetMaster_TypeInfo);
    sub_1C32C20(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1C32C20(&QuestRestrictionMaster_TypeInfo);
    sub_1C32C20(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1C32C20(&QuestScriptMaster_TypeInfo);
    sub_1C32C20(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1C32C20(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1C32C20(&QuestScriptReleaseMaster_TypeInfo);
    sub_1C32C20(&QuestSpotReleaseMaster_TypeInfo);
    sub_1C32C20(&QuestUseItemGroupMaster_TypeInfo);
    sub_1C32C20(&QuestUseItemPickupMaster_TypeInfo);
    sub_1C32C20(&ReachedWaveInfoMaster_TypeInfo);
    sub_1C32C20(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestMaster_TypeInfo);
    sub_1C32C20(&RecoverMaster_TypeInfo);
    sub_1C32C20(&ReprintStageMaster_TypeInfo);
    sub_1C32C20(&RestrictionBaseMaster_TypeInfo);
    sub_1C32C20(&RestrictionMaster_TypeInfo);
    sub_1C32C20(&RestrictionMessageMaster_TypeInfo);
    sub_1C32C20(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1C32C20(&RestrictionSlotMaster_TypeInfo);
    sub_1C32C20(&RestrictionWholeMaster_TypeInfo);
    sub_1C32C20(&RoadmapMaster_TypeInfo);
    sub_1C32C20(&SelectBonusBaseMaster_TypeInfo);
    sub_1C32C20(&SelectBonusMaster_TypeInfo);
    sub_1C32C20(&ServantAddMaster_TypeInfo);
    sub_1C32C20(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1C32C20(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C32C20(&ServantBattlePointMaster_TypeInfo);
    sub_1C32C20(&ServantCardAddMaster_TypeInfo);
    sub_1C32C20(&ServantCardMaster_TypeInfo);
    sub_1C32C20(&ServantChangeMaster_TypeInfo);
    sub_1C32C20(&ServantClassMaster_TypeInfo);
    sub_1C32C20(&ServantCollectionMaster_TypeInfo);
    sub_1C32C20(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1C32C20(&ServantCommentAddMaster_TypeInfo);
    sub_1C32C20(&ServantCommentMaster_TypeInfo);
    sub_1C32C20(&ServantCostumeMaster_TypeInfo);
    sub_1C32C20(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1C32C20(&ServantExceedMaster_TypeInfo);
    sub_1C32C20(&ServantExpMaster_TypeInfo);
    sub_1C32C20(&ServantFilterMaster_TypeInfo);
    sub_1C32C20(&ServantFlagMaster_TypeInfo);
    sub_1C32C20(&ServantFlagReleaseMaster_TypeInfo);
    sub_1C32C20(&ServantGroupMaster_TypeInfo);
    sub_1C32C20(&ServantIndividualityMaster_TypeInfo);
    sub_1C32C20(&ServantLimitAddMaster_TypeInfo);
    sub_1C32C20(&ServantLimitImageMaster_TypeInfo);
    sub_1C32C20(&ServantLimitMaster_TypeInfo);
    sub_1C32C20(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1C32C20(&ServantLvDetailMaster_TypeInfo);
    sub_1C32C20(&ServantMaster_TypeInfo);
    sub_1C32C20(&ServantMaterialFolderMaster_TypeInfo);
    sub_1C32C20(&ServantOverwriteMaster_TypeInfo);
    sub_1C32C20(&ServantPassiveSkillMaster_TypeInfo);
    sub_1C32C20(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1C32C20(&ServantPhotoMaster_TypeInfo);
    sub_1C32C20(&ServantProfileMaster_TypeInfo);
    sub_1C32C20(&ServantProfilePushMaster_TypeInfo);
    sub_1C32C20(&ServantRarityMaster_TypeInfo);
    sub_1C32C20(&ServantScriptAddMaster_TypeInfo);
    sub_1C32C20(&ServantScriptMaster_TypeInfo);
    sub_1C32C20(&ServantScriptMultipleMaster_TypeInfo);
    sub_1C32C20(&ServantSkillAddMaster_TypeInfo);
    sub_1C32C20(&ServantSkillMaster_TypeInfo);
    sub_1C32C20(&ServantSkillReleaseMaster_TypeInfo);
    sub_1C32C20(&ServantTransformMaster_TypeInfo);
    sub_1C32C20(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1C32C20(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1C32C20(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1C32C20(&ServantTreasureDvcMaster_TypeInfo);
    sub_1C32C20(&ServantVoiceMaster_TypeInfo);
    sub_1C32C20(&ServantVoicePatternMaster_TypeInfo);
    sub_1C32C20(&ServantVoiceRelationMaster_TypeInfo);
    sub_1C32C20(&SetItemMaster_TypeInfo);
    sub_1C32C20(&ShopActionMaster_TypeInfo);
    sub_1C32C20(&ShopDetailMaster_TypeInfo);
    sub_1C32C20(&ShopGroupMaster_TypeInfo);
    sub_1C32C20(&ShopMaster_TypeInfo);
    sub_1C32C20(&ShopReleaseMaster_TypeInfo);
    sub_1C32C20(&ShopResetMaster_TypeInfo);
    sub_1C32C20(&ShopScriptMaster_TypeInfo);
    sub_1C32C20(&SkillAddMaster_TypeInfo);
    sub_1C32C20(&SkillDetailMaster_TypeInfo);
    sub_1C32C20(&SkillGroupMaster_TypeInfo);
    sub_1C32C20(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1C32C20(&SkillIndividualityMaster_TypeInfo);
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    sub_1C32C20(&SkillMaster_TypeInfo);
    sub_1C32C20(&SpotAddMaster_TypeInfo);
    sub_1C32C20(&SpotImageMaster_TypeInfo);
    sub_1C32C20(&SpotLayerMaster_TypeInfo);
    sub_1C32C20(&SpotMaster_TypeInfo);
    sub_1C32C20(&SpotPathMaster_TypeInfo);
    sub_1C32C20(&SpotRoadMaster_TypeInfo);
    sub_1C32C20(&StaffPhotoCostumeMaster_TypeInfo);
    sub_1C32C20(&StaffPhotoMaster_TypeInfo);
    sub_1C32C20(&StageMaster_TypeInfo);
    sub_1C32C20(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1C32C20(&StoneShopMaster_TypeInfo);
    sub_1C32C20(&SubEquipMaster_TypeInfo);
    sub_1C32C20(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1C32C20(&SvtCoinMaster_TypeInfo);
    sub_1C32C20(&SvtMaterialTdMaster_TypeInfo);
    sub_1C32C20(&SvtMultiPortraitMaster_TypeInfo);
    sub_1C32C20(&TblFriendMaster_TypeInfo);
    sub_1C32C20(&TblUserMaster_TypeInfo);
    sub_1C32C20(&TelopMaster_TypeInfo);
    sub_1C32C20(&TerminalOverwriteMaster_TypeInfo);
    sub_1C32C20(&TipsBattleMaster_TypeInfo);
    sub_1C32C20(&TotalBoxGachaMaster_TypeInfo);
    sub_1C32C20(&TotalEventPointMaster_TypeInfo);
    sub_1C32C20(&TotalEventRaceMaster_TypeInfo);
    sub_1C32C20(&TotalEventRaidMaster_TypeInfo);
    sub_1C32C20(&TotalLoginMaster_TypeInfo);
    sub_1C32C20(&TreasureBoxGiftMaster_TypeInfo);
    sub_1C32C20(&TreasureBoxMaster_TypeInfo);
    sub_1C32C20(&TreasureBoxTalkMaster_TypeInfo);
    sub_1C32C20(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1C32C20(&TreasureDvcDetailMaster_TypeInfo);
    sub_1C32C20(&TreasureDvcLvMaster_TypeInfo);
    sub_1C32C20(&TreasureDvcMaster_TypeInfo);
    sub_1C32C20(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1C32C20(&UserAccessaryMaster_TypeInfo);
    sub_1C32C20(&UserAccountLinkageMaster_TypeInfo);
    sub_1C32C20(&UserBlacklistMaster_TypeInfo);
    sub_1C32C20(&UserBoxGachaMaster_TypeInfo);
    sub_1C32C20(&UserClassBoardSquareMaster_TypeInfo);
    sub_1C32C20(&UserClassStatisticsMaster_TypeInfo);
    sub_1C32C20(&UserCoinRoomMaster_TypeInfo);
    sub_1C32C20(&UserCombineExpMaster_TypeInfo);
    sub_1C32C20(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1C32C20(&UserCommandCodeMaster_TypeInfo);
    sub_1C32C20(&UserContinueMaster_TypeInfo);
    sub_1C32C20(&UserDeckMaster_TypeInfo);
    sub_1C32C20(&UserDeleteReservationMaster_TypeInfo);
    sub_1C32C20(&UserEquipMaster_TypeInfo);
    sub_1C32C20(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1C32C20(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1C32C20(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1C32C20(&UserEventDataLostMaster_TypeInfo);
    sub_1C32C20(&UserEventDeckMaster_TypeInfo);
    sub_1C32C20(&UserEventDiggingMaster_TypeInfo);
    sub_1C32C20(&UserEventExpeditionMaster_TypeInfo);
    sub_1C32C20(&UserEventFortificationMaster_TypeInfo);
    sub_1C32C20(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_1C32C20(&UserEventMapMaster_TypeInfo);
    sub_1C32C20(&UserEventMaster_TypeInfo);
    sub_1C32C20(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1C32C20(&UserEventMissionFixMaster_TypeInfo);
    sub_1C32C20(&UserEventMissionMaster_TypeInfo);
    sub_1C32C20(&UserEventPointMaster_TypeInfo);
    sub_1C32C20(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1C32C20(&UserEventRaceMaster_TypeInfo);
    sub_1C32C20(&UserEventRaidMaster_TypeInfo);
    sub_1C32C20(&UserEventRandomMissionMaster_TypeInfo);
    sub_1C32C20(&UserEventServantFatigueMaster_TypeInfo);
    sub_1C32C20(&UserEventServantPointMaster_TypeInfo);
    sub_1C32C20(&UserEventSpotMaster_TypeInfo);
    sub_1C32C20(&UserEventTradeMaster_TypeInfo);
    sub_1C32C20(&UserExchangeSvtMaster_TypeInfo);
    sub_1C32C20(&UserExpMaster_TypeInfo);
    sub_1C32C20(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1C32C20(&UserFollowMaster_TypeInfo);
    sub_1C32C20(&UserFollowerMaster_TypeInfo);
    sub_1C32C20(&UserFormationMaster_TypeInfo);
    sub_1C32C20(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1C32C20(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1C32C20(&UserGachaDrawLogMaster_TypeInfo);
    sub_1C32C20(&UserGachaExtraCountMaster_TypeInfo);
    sub_1C32C20(&UserGachaHistoryMaster_TypeInfo);
    sub_1C32C20(&UserGachaMaster_TypeInfo);
    sub_1C32C20(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1C32C20(&UserGameCommonMaster_TypeInfo);
    sub_1C32C20(&UserGameMaster_TypeInfo);
    sub_1C32C20(&UserHeelPortraitMaster_TypeInfo);
    sub_1C32C20(&UserImagePartsGroupMaster_TypeInfo);
    sub_1C32C20(&UserInterruptionQuestMaster_TypeInfo);
    sub_1C32C20(&UserItemMaster_TypeInfo);
    sub_1C32C20(&UserLoginMaster_TypeInfo);
    sub_1C32C20(&UserMaster_TypeInfo);
    sub_1C32C20(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1C32C20(&UserPaymentLimitMaster_TypeInfo);
    sub_1C32C20(&UserPresentBoxMaster_TypeInfo);
    sub_1C32C20(&UserPresentHistoryMaster_TypeInfo);
    sub_1C32C20(&UserPrivilegeMaster_TypeInfo);
    sub_1C32C20(&UserQuestInfoMaster_TypeInfo);
    sub_1C32C20(&UserQuestMaster_TypeInfo);
    sub_1C32C20(&UserQuestRecordMaster_TypeInfo);
    sub_1C32C20(&UserQuestRouteMaster_TypeInfo);
    sub_1C32C20(&UserRecommendFollowerMaster_TypeInfo);
    sub_1C32C20(&UserRecommendSupportMaster_TypeInfo);
    sub_1C32C20(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1C32C20(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C32C20(&UserServantCollectionMaster_TypeInfo);
    sub_1C32C20(&UserServantCommandCardMaster_TypeInfo);
    sub_1C32C20(&UserServantCommandCodeMaster_TypeInfo);
    sub_1C32C20(&UserServantGrandMaster_TypeInfo);
    sub_1C32C20(&UserServantLeaderMaster_TypeInfo);
    sub_1C32C20(&UserServantMaster_TypeInfo);
    sub_1C32C20(&UserServantStorageMaster_TypeInfo);
    sub_1C32C20(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1C32C20(&UserShopMaster_TypeInfo);
    sub_1C32C20(&UserSubEquipMaster_TypeInfo);
    sub_1C32C20(&UserSuperBossMaster_TypeInfo);
    sub_1C32C20(&UserSupportDeckMaster_TypeInfo);
    sub_1C32C20(&UserSvtCoinMaster_TypeInfo);
    sub_1C32C20(&UserSvtFirstGetTimeMaster_TypeInfo);
    sub_1C32C20(&ViewEnemyMaster_TypeInfo);
    sub_1C32C20(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1C32C20(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1C32C20(&ViewQuestInfoMaster_TypeInfo);
    sub_1C32C20(&ViewWaveEnemyMaster_TypeInfo);
    sub_1C32C20(&VoiceClosedMessageMaster_TypeInfo);
    sub_1C32C20(&VoiceCondMaster_TypeInfo);
    sub_1C32C20(&VoiceMaster_TypeInfo);
    sub_1C32C20(&VoiceMaterialCondMaster_TypeInfo);
    sub_1C32C20(&VoicePlayCondMaster_TypeInfo);
    sub_1C32C20(&VoicePlayGroupMaster_TypeInfo);
    sub_1C32C20(&VoiceReleaseMaster_TypeInfo);
    sub_1C32C20(&WarAddMaster_TypeInfo);
    sub_1C32C20(&WarBoardAIMaster_TypeInfo);
    sub_1C32C20(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1C32C20(&WarBoardActionPointMaster_TypeInfo);
    sub_1C32C20(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1C32C20(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1C32C20(&WarBoardActionTrendMaster_TypeInfo);
    sub_1C32C20(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1C32C20(&WarBoardDataMaster_TypeInfo);
    sub_1C32C20(&WarBoardEffectMaster_TypeInfo);
    sub_1C32C20(&WarBoardEventMaster_TypeInfo);
    sub_1C32C20(&WarBoardEventScriptMaster_TypeInfo);
    sub_1C32C20(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1C32C20(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1C32C20(&WarBoardItemMaster_TypeInfo);
    sub_1C32C20(&WarBoardMaster_TypeInfo);
    sub_1C32C20(&WarBoardMessageMaster_TypeInfo);
    sub_1C32C20(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1C32C20(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1C32C20(&WarBoardPartySkillMaster_TypeInfo);
    sub_1C32C20(&WarBoardQuestMaster_TypeInfo);
    sub_1C32C20(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1C32C20(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1C32C20(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1C32C20(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1C32C20(&WarBoardRoadMaster_TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1C32C20(&WarBoardSquareMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageBossMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageDetailMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageNpcMaster_TypeInfo);
    sub_1C32C20(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1C32C20(&WarBoardStageWallMaster_TypeInfo);
    sub_1C32C20(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1C32C20(&WarBoardTreasureMaster_TypeInfo);
    sub_1C32C20(&WarGroupIgnoreMaster_TypeInfo);
    sub_1C32C20(&WarGroupMaster_TypeInfo);
    sub_1C32C20(&WarMaster_TypeInfo);
    sub_1C32C20(&WarMessageMaster_TypeInfo);
    sub_1C32C20(&WarQuestSelectionMaster_TypeInfo);
    sub_1C32C20(&WarReleaseMaster_TypeInfo);
    byte_4C37485 = 1;
  }
  v1 = (DataMasterBase_array *)sub_1C32CC8(DataMasterBase___TypeInfo, 551);
  v2 = (ServantMaster_o *)sub_1C32E6C(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0);
  if ( !v1 )
    sub_1C32E7C(v3);
  if ( v2 )
  {
    v3 = sub_1C32D5C(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  p_max_length = &v1->max_length;
  if ( !LODWORD(v1->max_length) )
    goto LABEL_1658;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1C32BC4((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v4, v5);
  v7 = (ServantClassMaster_o *)sub_1C32E6C(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v7, 0);
  if ( v7 )
  {
    v3 = sub_1C32D5C(v7, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_1658;
  v1->m_Items[1] = (DataMasterBase_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v7, v8, v9);
  v10 = (ServantCommentMaster_o *)sub_1C32E6C(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v10, 0);
  if ( v10 )
  {
    v3 = sub_1C32D5C(v10, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_1658;
  v1->m_Items[2] = (DataMasterBase_o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v10, v11, v12);
  v13 = (ServantProfileMaster_o *)sub_1C32E6C(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v13, 0);
  if ( v13 )
  {
    v3 = sub_1C32D5C(v13, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_1658;
  v1->m_Items[3] = (DataMasterBase_o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v13, v14, v15);
  v16 = (WarMaster_o *)sub_1C32E6C(WarMaster_TypeInfo);
  WarMaster___ctor(v16, 0);
  if ( v16 )
  {
    v3 = sub_1C32D5C(v16, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_1658;
  v1->m_Items[4] = (DataMasterBase_o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v16, v17, v18);
  v19 = (UserMaster_o *)sub_1C32E6C(UserMaster_TypeInfo);
  UserMaster___ctor(v19, 0);
  if ( v19 )
  {
    v3 = sub_1C32D5C(v19, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_1658;
  v1->m_Items[5] = (DataMasterBase_o *)v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v19, v20, v21);
  v22 = (UserGameMaster_o *)sub_1C32E6C(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v22, 0);
  if ( v22 )
  {
    v3 = sub_1C32D5C(v22, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_1658;
  v1->m_Items[6] = (DataMasterBase_o *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v22, v23, v24);
  v25 = (TblUserMaster_o *)sub_1C32E6C(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v25, 0);
  if ( v25 )
  {
    v3 = sub_1C32D5C(v25, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_1658;
  v1->m_Items[7] = (DataMasterBase_o *)v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v25, v26, v27);
  v28 = (UserItemMaster_o *)sub_1C32E6C(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v28, 0);
  if ( v28 )
  {
    v3 = sub_1C32D5C(v28, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_1658;
  v1->m_Items[8] = (DataMasterBase_o *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v28, v29, v30);
  v31 = (UserServantMaster_o *)sub_1C32E6C(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v31, 0);
  if ( v31 )
  {
    v3 = sub_1C32D5C(v31, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_1658;
  v1->m_Items[9] = (DataMasterBase_o *)v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v31, v32, v33);
  v34 = (UserServantStorageMaster_o *)sub_1C32E6C(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v34, 0);
  if ( v34 )
  {
    v3 = sub_1C32D5C(v34, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_1658;
  v1->m_Items[10] = (DataMasterBase_o *)v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v34, v35, v36);
  v37 = (UserAccessaryMaster_o *)sub_1C32E6C(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v37, 0);
  if ( v37 )
  {
    v3 = sub_1C32D5C(v37, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_1658;
  v1->m_Items[11] = (DataMasterBase_o *)v37;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v37, v38, v39);
  v40 = (UserQuestMaster_o *)sub_1C32E6C(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v40, 0);
  if ( v40 )
  {
    v3 = sub_1C32D5C(v40, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_1658;
  v1->m_Items[12] = (DataMasterBase_o *)v40;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v40, v41, v42);
  v43 = (BattleMaster_o *)sub_1C32E6C(BattleMaster_TypeInfo);
  BattleMaster___ctor(v43, 0);
  if ( v43 )
  {
    v3 = sub_1C32D5C(v43, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_1658;
  v1->m_Items[13] = (DataMasterBase_o *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v43, v44, v45);
  v46 = (OtherUserGameMaster_o *)sub_1C32E6C(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v46, 0);
  if ( v46 )
  {
    v3 = sub_1C32D5C(v46, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_1658;
  v1->m_Items[14] = (DataMasterBase_o *)v46;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v46, v47, v48);
  v49 = (TblFriendMaster_o *)sub_1C32E6C(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v49, 0);
  if ( v49 )
  {
    v3 = sub_1C32D5C(v49, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_1658;
  v1->m_Items[15] = (DataMasterBase_o *)v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[15], (int32_t)v49, v50, v51);
  v52 = (AreaMaster_o *)sub_1C32E6C(AreaMaster_TypeInfo);
  AreaMaster___ctor(v52, 0);
  if ( v52 )
  {
    v3 = sub_1C32D5C(v52, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_1658;
  v1->m_Items[16] = (DataMasterBase_o *)v52;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[16], (int32_t)v52, v53, v54);
  v55 = (ServantCardMaster_o *)sub_1C32E6C(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v55, 0);
  if ( v55 )
  {
    v3 = sub_1C32D5C(v55, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_1658;
  v1->m_Items[17] = (DataMasterBase_o *)v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[17], (int32_t)v55, v56, v57);
  v58 = (EventMaster_o *)sub_1C32E6C(EventMaster_TypeInfo);
  EventMaster___ctor(v58, 0);
  if ( v58 )
  {
    v3 = sub_1C32D5C(v58, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_1658;
  v1->m_Items[18] = (DataMasterBase_o *)v58;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[18], (int32_t)v58, v59, v60);
  v61 = (ItemMaster_o *)sub_1C32E6C(ItemMaster_TypeInfo);
  ItemMaster___ctor(v61, 0);
  if ( v61 )
  {
    v3 = sub_1C32D5C(v61, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_1658;
  v1->m_Items[19] = (DataMasterBase_o *)v61;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[19], (int32_t)v61, v62, v63);
  v64 = (QuestMaster_o *)sub_1C32E6C(QuestMaster_TypeInfo);
  QuestMaster___ctor(v64, 0);
  if ( v64 )
  {
    v3 = sub_1C32D5C(v64, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
    goto LABEL_1658;
  v1->m_Items[20] = (DataMasterBase_o *)v64;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[20], (int32_t)v64, v65, v66);
  v67 = (QuestAddMaster_o *)sub_1C32E6C(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v67, 0);
  if ( v67 )
  {
    v3 = sub_1C32D5C(v67, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15u )
    goto LABEL_1658;
  v1->m_Items[21] = (DataMasterBase_o *)v67;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[21], (int32_t)v67, v68, v69);
  v70 = (QuestReleaseMaster_o *)sub_1C32E6C(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v70, 0);
  if ( v70 )
  {
    v3 = sub_1C32D5C(v70, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16u )
    goto LABEL_1658;
  v1->m_Items[22] = (DataMasterBase_o *)v70;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[22], (int32_t)v70, v71, v72);
  v73 = (QuestDateRangeMaster_o *)sub_1C32E6C(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v73, 0);
  if ( v73 )
  {
    v3 = sub_1C32D5C(v73, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17u )
    goto LABEL_1658;
  v1->m_Items[23] = (DataMasterBase_o *)v73;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[23], (int32_t)v73, v74, v75);
  v76 = (QuestPhaseMaster_o *)sub_1C32E6C(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v76, 0);
  if ( v76 )
  {
    v3 = sub_1C32D5C(v76, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18u )
    goto LABEL_1658;
  v1->m_Items[24] = (DataMasterBase_o *)v76;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[24], (int32_t)v76, v77, v78);
  v79 = (QuestPhaseDetailMaster_o *)sub_1C32E6C(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v79, 0);
  if ( v79 )
  {
    v3 = sub_1C32D5C(v79, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19u )
    goto LABEL_1658;
  v1->m_Items[25] = (DataMasterBase_o *)v79;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[25], (int32_t)v79, v80, v81);
  v82 = (QuestGroupMaster_o *)sub_1C32E6C(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v82, 0);
  if ( v82 )
  {
    v3 = sub_1C32D5C(v82, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Au )
    goto LABEL_1658;
  v1->m_Items[26] = (DataMasterBase_o *)v82;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[26], (int32_t)v82, v83, v84);
  v85 = (QuestRandomGroupMaster_o *)sub_1C32E6C(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v85, 0);
  if ( v85 )
  {
    v3 = sub_1C32D5C(v85, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Bu )
    goto LABEL_1658;
  v1->m_Items[27] = (DataMasterBase_o *)v85;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[27], (int32_t)v85, v86, v87);
  v88 = (QuestConsumeItemMaster_o *)sub_1C32E6C(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v88, 0);
  if ( v88 )
  {
    v3 = sub_1C32D5C(v88, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Cu )
    goto LABEL_1658;
  v1->m_Items[28] = (DataMasterBase_o *)v88;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[28], (int32_t)v88, v89, v90);
  v91 = (QuestMessageMaster_o *)sub_1C32E6C(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v91, 0);
  if ( v91 )
  {
    v3 = sub_1C32D5C(v91, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Du )
    goto LABEL_1658;
  v1->m_Items[29] = (DataMasterBase_o *)v91;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[29], (int32_t)v91, v92, v93);
  v94 = (UserQuestInfoMaster_o *)sub_1C32E6C(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v94, 0);
  if ( v94 )
  {
    v3 = sub_1C32D5C(v94, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Eu )
    goto LABEL_1658;
  v1->m_Items[30] = (DataMasterBase_o *)v94;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[30], (int32_t)v94, v95, v96);
  v97 = (UserQuestRecordMaster_o *)sub_1C32E6C(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v97, 0);
  if ( v97 )
  {
    v3 = sub_1C32D5C(v97, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Fu )
    goto LABEL_1658;
  v1->m_Items[31] = (DataMasterBase_o *)v97;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[31], (int32_t)v97, v98, v99);
  v100 = (ViewQuestInfoMaster_o *)sub_1C32E6C(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v100, 0);
  if ( v100 )
  {
    v3 = sub_1C32D5C(v100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20u )
    goto LABEL_1658;
  v1->m_Items[32] = (DataMasterBase_o *)v100;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[32], (int32_t)v100, v101, v102);
  v103 = (ViewEnemyMaster_o *)sub_1C32E6C(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v103, 0);
  if ( v103 )
  {
    v3 = sub_1C32D5C(v103, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21u )
    goto LABEL_1658;
  v1->m_Items[33] = (DataMasterBase_o *)v103;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[33], (int32_t)v103, v104, v105);
  v106 = (ViewQuestEnemyInfoMaster_o *)sub_1C32E6C(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v106, 0);
  if ( v106 )
  {
    v3 = sub_1C32D5C(v106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x22u )
    goto LABEL_1658;
  v1->m_Items[34] = (DataMasterBase_o *)v106;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[34], (int32_t)v106, v107, v108);
  v109 = (BlankEarthSpotMaster_o *)sub_1C32E6C(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v109, 0);
  if ( v109 )
  {
    v3 = sub_1C32D5C(v109, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x23u )
    goto LABEL_1658;
  v1->m_Items[35] = (DataMasterBase_o *)v109;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[35], (int32_t)v109, v110, v111);
  v112 = (BlankEarthSpotAddMaster_o *)sub_1C32E6C(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v112, 0);
  if ( v112 )
  {
    v3 = sub_1C32D5C(v112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x24u )
    goto LABEL_1658;
  v1->m_Items[36] = (DataMasterBase_o *)v112;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[36], (int32_t)v112, v113, v114);
  v115 = (SpotMaster_o *)sub_1C32E6C(SpotMaster_TypeInfo);
  SpotMaster___ctor(v115, 0);
  if ( v115 )
  {
    v3 = sub_1C32D5C(v115, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x25u )
    goto LABEL_1658;
  v1->m_Items[37] = (DataMasterBase_o *)v115;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[37], (int32_t)v115, v116, v117);
  v118 = (SpotImageMaster_o *)sub_1C32E6C(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v118, 0);
  if ( v118 )
  {
    v3 = sub_1C32D5C(v118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x26u )
    goto LABEL_1658;
  v1->m_Items[38] = (DataMasterBase_o *)v118;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[38], (int32_t)v118, v119, v120);
  v121 = (SpotRoadMaster_o *)sub_1C32E6C(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v121, 0);
  if ( v121 )
  {
    v3 = sub_1C32D5C(v121, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x27u )
    goto LABEL_1658;
  v1->m_Items[39] = (DataMasterBase_o *)v121;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[39], (int32_t)v121, v122, v123);
  v124 = (SpotPathMaster_o *)sub_1C32E6C(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v124, 0);
  if ( v124 )
  {
    v3 = sub_1C32D5C(v124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x28u )
    goto LABEL_1658;
  v1->m_Items[40] = (DataMasterBase_o *)v124;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[40], (int32_t)v124, v125, v126);
  v127 = (SpotAddMaster_o *)sub_1C32E6C(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v127, 0);
  if ( v127 )
  {
    v3 = sub_1C32D5C(v127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x29u )
    goto LABEL_1658;
  v1->m_Items[41] = (DataMasterBase_o *)v127;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[41], (int32_t)v127, v128, v129);
  v130 = (MapGimmickMaster_o *)sub_1C32E6C(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v130, 0);
  if ( v130 )
  {
    v3 = sub_1C32D5C(v130, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Au )
    goto LABEL_1658;
  v1->m_Items[42] = (DataMasterBase_o *)v130;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[42], (int32_t)v130, v131, v132);
  v133 = (GiftMaster_o *)sub_1C32E6C(GiftMaster_TypeInfo);
  GiftMaster___ctor(v133, 0);
  if ( v133 )
  {
    v3 = sub_1C32D5C(v133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Bu )
    goto LABEL_1658;
  v1->m_Items[43] = (DataMasterBase_o *)v133;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[43], (int32_t)v133, v134, v135);
  v136 = (GiftAddMaster_o *)sub_1C32E6C(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v136, 0);
  if ( v136 )
  {
    v3 = sub_1C32D5C(v136, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Cu )
    goto LABEL_1658;
  v1->m_Items[44] = (DataMasterBase_o *)v136;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[44], (int32_t)v136, v137, v138);
  v139 = (ShopMaster_o *)sub_1C32E6C(ShopMaster_TypeInfo);
  ShopMaster___ctor(v139, 0);
  if ( v139 )
  {
    v3 = sub_1C32D5C(v139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Du )
    goto LABEL_1658;
  v1->m_Items[45] = (DataMasterBase_o *)v139;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[45], (int32_t)v139, v140, v141);
  v142 = (StoneShopMaster_o *)sub_1C32E6C(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v142, 0);
  if ( v142 )
  {
    v3 = sub_1C32D5C(v142, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Eu )
    goto LABEL_1658;
  v1->m_Items[46] = (DataMasterBase_o *)v142;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[46], (int32_t)v142, v143, v144);
  v145 = (BankShopMaster_o *)sub_1C32E6C(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v145, 0);
  if ( v145 )
  {
    v3 = sub_1C32D5C(v145, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Fu )
    goto LABEL_1658;
  v1->m_Items[47] = (DataMasterBase_o *)v145;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[47], (int32_t)v145, v146, v147);
  v148 = (ShopScriptMaster_o *)sub_1C32E6C(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v148, 0);
  if ( v148 )
  {
    v3 = sub_1C32D5C(v148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x30u )
    goto LABEL_1658;
  v1->m_Items[48] = (DataMasterBase_o *)v148;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[48], (int32_t)v148, v149, v150);
  v151 = (StageMaster_o *)sub_1C32E6C(StageMaster_TypeInfo);
  StageMaster___ctor(v151, 0);
  if ( v151 )
  {
    v3 = sub_1C32D5C(v151, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x31u )
    goto LABEL_1658;
  v1->m_Items[49] = (DataMasterBase_o *)v151;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[49], (int32_t)v151, v152, v153);
  v154 = (ServantGroupMaster_o *)sub_1C32E6C(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v154, 0);
  if ( v154 )
  {
    v3 = sub_1C32D5C(v154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x32u )
    goto LABEL_1658;
  v1->m_Items[50] = (DataMasterBase_o *)v154;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[50], (int32_t)v154, v155, v156);
  v157 = (ServantLimitMaster_o *)sub_1C32E6C(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v157, 0);
  if ( v157 )
  {
    v3 = sub_1C32D5C(v157, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x33u )
    goto LABEL_1658;
  v1->m_Items[51] = (DataMasterBase_o *)v157;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[51], (int32_t)v157, v158, v159);
  v160 = (ServantLimitAddMaster_o *)sub_1C32E6C(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v160, 0);
  if ( v160 )
  {
    v3 = sub_1C32D5C(v160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x34u )
    goto LABEL_1658;
  v1->m_Items[52] = (DataMasterBase_o *)v160;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[52], (int32_t)v160, v161, v162);
  v163 = (ServantSkillMaster_o *)sub_1C32E6C(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v163, 0);
  if ( v163 )
  {
    v3 = sub_1C32D5C(v163, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x35u )
    goto LABEL_1658;
  v1->m_Items[53] = (DataMasterBase_o *)v163;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[53], (int32_t)v163, v164, v165);
  v166 = (ServantPassiveSkillMaster_o *)sub_1C32E6C(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v166, 0);
  if ( v166 )
  {
    v3 = sub_1C32D5C(v166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x36u )
    goto LABEL_1658;
  v1->m_Items[54] = (DataMasterBase_o *)v166;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[54], (int32_t)v166, v167, v168);
  v169 = (BgmMaster_o *)sub_1C32E6C(BgmMaster_TypeInfo);
  BgmMaster___ctor(v169, 0);
  if ( v169 )
  {
    v3 = sub_1C32D5C(v169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x37u )
    goto LABEL_1658;
  v1->m_Items[55] = (DataMasterBase_o *)v169;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[55], (int32_t)v169, v170, v171);
  v172 = (ServantScriptMaster_o *)sub_1C32E6C(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v172, 0);
  if ( v172 )
  {
    v3 = sub_1C32D5C(v172, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x38u )
    goto LABEL_1658;
  v1->m_Items[56] = (DataMasterBase_o *)v172;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[56], (int32_t)v172, v173, v174);
  v175 = (NewsMaster_o *)sub_1C32E6C(NewsMaster_TypeInfo);
  NewsMaster___ctor(v175, 0);
  if ( v175 )
  {
    v3 = sub_1C32D5C(v175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x39u )
    goto LABEL_1658;
  v1->m_Items[57] = (DataMasterBase_o *)v175;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[57], (int32_t)v175, v176, v177);
  v178 = (TelopMaster_o *)sub_1C32E6C(TelopMaster_TypeInfo);
  TelopMaster___ctor(v178, 0);
  if ( v178 )
  {
    v3 = sub_1C32D5C(v178, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Au )
    goto LABEL_1658;
  v1->m_Items[58] = (DataMasterBase_o *)v178;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[58], (int32_t)v178, v179, v180);
  v181 = (UserExpMaster_o *)sub_1C32E6C(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v181, 0);
  if ( v181 )
  {
    v3 = sub_1C32D5C(v181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Bu )
    goto LABEL_1658;
  v1->m_Items[59] = (DataMasterBase_o *)v181;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[59], (int32_t)v181, v182, v183);
  v184 = (TreasureDvcMaster_o *)sub_1C32E6C(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v184, 0);
  if ( v184 )
  {
    v3 = sub_1C32D5C(v184, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Cu )
    goto LABEL_1658;
  v1->m_Items[60] = (DataMasterBase_o *)v184;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[60], (int32_t)v184, v185, v186);
  v187 = (ServantTreasureDvcMaster_o *)sub_1C32E6C(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v187, 0);
  if ( v187 )
  {
    v3 = sub_1C32D5C(v187, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Du )
    goto LABEL_1658;
  v1->m_Items[61] = (DataMasterBase_o *)v187;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[61], (int32_t)v187, v188, v189);
  v190 = (SkillMaster_o *)sub_1C32E6C(SkillMaster_TypeInfo);
  SkillMaster___ctor(v190, 0);
  if ( v190 )
  {
    v3 = sub_1C32D5C(v190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Eu )
    goto LABEL_1658;
  v1->m_Items[62] = (DataMasterBase_o *)v190;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[62], (int32_t)v190, v191, v192);
  v193 = (SkillLvMaster_o *)sub_1C32E6C(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v193, 0);
  if ( v193 )
  {
    v3 = sub_1C32D5C(v193, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Fu )
    goto LABEL_1658;
  v1->m_Items[63] = (DataMasterBase_o *)v193;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[63], (int32_t)v193, v194, v195);
  v196 = (SkillDetailMaster_o *)sub_1C32E6C(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v196, 0);
  if ( v196 )
  {
    v3 = sub_1C32D5C(v196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x40u )
    goto LABEL_1658;
  v1->m_Items[64] = (DataMasterBase_o *)v196;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[64], (int32_t)v196, v197, v198);
  v199 = (CommandSpellMaster_o *)sub_1C32E6C(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v199, 0);
  if ( v199 )
  {
    v3 = sub_1C32D5C(v199, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x41u )
    goto LABEL_1658;
  v1->m_Items[65] = (DataMasterBase_o *)v199;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[65], (int32_t)v199, v200, v201);
  v202 = (EquipMaster_o *)sub_1C32E6C(EquipMaster_TypeInfo);
  EquipMaster___ctor(v202, 0);
  if ( v202 )
  {
    v3 = sub_1C32D5C(v202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x42u )
    goto LABEL_1658;
  v1->m_Items[66] = (DataMasterBase_o *)v202;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[66], (int32_t)v202, v203, v204);
  v205 = (EquipExpMaster_o *)sub_1C32E6C(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v205, 0);
  if ( v205 )
  {
    v3 = sub_1C32D5C(v205, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x43u )
    goto LABEL_1658;
  v1->m_Items[67] = (DataMasterBase_o *)v205;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[67], (int32_t)v205, v206, v207);
  v208 = (EquipSkillMaster_o *)sub_1C32E6C(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v208, 0);
  if ( v208 )
  {
    v3 = sub_1C32D5C(v208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x44u )
    goto LABEL_1658;
  v1->m_Items[68] = (DataMasterBase_o *)v208;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[68], (int32_t)v208, v209, v210);
  v211 = (SubEquipMaster_o *)sub_1C32E6C(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v211, 0);
  if ( v211 )
  {
    v3 = sub_1C32D5C(v211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x45u )
    goto LABEL_1658;
  v1->m_Items[69] = (DataMasterBase_o *)v211;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[69], (int32_t)v211, v212, v213);
  v214 = (AccessaryMaster_o *)sub_1C32E6C(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v214, 0);
  if ( v214 )
  {
    v3 = sub_1C32D5C(v214, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x46u )
    goto LABEL_1658;
  v1->m_Items[70] = (DataMasterBase_o *)v214;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[70], (int32_t)v214, v215, v216);
  v217 = (UserPresentBoxMaster_o *)sub_1C32E6C(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v217, 0);
  if ( v217 )
  {
    v3 = sub_1C32D5C(v217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x47u )
    goto LABEL_1658;
  v1->m_Items[71] = (DataMasterBase_o *)v217;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[71], (int32_t)v217, v218, v219);
  v220 = (UserDeckMaster_o *)sub_1C32E6C(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v220, 0);
  if ( v220 )
  {
    v3 = sub_1C32D5C(v220, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x48u )
    goto LABEL_1658;
  v1->m_Items[72] = (DataMasterBase_o *)v220;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[72], (int32_t)v220, v221, v222);
  v223 = (UserSubEquipMaster_o *)sub_1C32E6C(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v223, 0);
  if ( v223 )
  {
    v3 = sub_1C32D5C(v223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x49u )
    goto LABEL_1658;
  v1->m_Items[73] = (DataMasterBase_o *)v223;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[73], (int32_t)v223, v224, v225);
  v226 = (GachaMaster_o *)sub_1C32E6C(GachaMaster_TypeInfo);
  GachaMaster___ctor(v226, 0);
  if ( v226 )
  {
    v3 = sub_1C32D5C(v226, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Au )
    goto LABEL_1658;
  v1->m_Items[74] = (DataMasterBase_o *)v226;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[74], (int32_t)v226, v227, v228);
  v229 = (GachaImageMaster_o *)sub_1C32E6C(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v229, 0);
  if ( v229 )
  {
    v3 = sub_1C32D5C(v229, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Bu )
    goto LABEL_1658;
  v1->m_Items[75] = (DataMasterBase_o *)v229;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[75], (int32_t)v229, v230, v231);
  v232 = (UserGachaMaster_o *)sub_1C32E6C(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v232, 0);
  if ( v232 )
  {
    v3 = sub_1C32D5C(v232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Cu )
    goto LABEL_1658;
  v1->m_Items[76] = (DataMasterBase_o *)v232;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[76], (int32_t)v232, v233, v234);
  v235 = (UserEquipMaster_o *)sub_1C32E6C(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v235, 0);
  if ( v235 )
  {
    v3 = sub_1C32D5C(v235, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Du )
    goto LABEL_1658;
  v1->m_Items[77] = (DataMasterBase_o *)v235;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[77], (int32_t)v235, v236, v237);
  v238 = (UserServantCollectionMaster_o *)sub_1C32E6C(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v238, 0);
  if ( v238 )
  {
    v3 = sub_1C32D5C(v238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Eu )
    goto LABEL_1658;
  v1->m_Items[78] = (DataMasterBase_o *)v238;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[78], (int32_t)v238, v239, v240);
  v241 = (FriendshipMaster_o *)sub_1C32E6C(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v241, 0);
  if ( v241 )
  {
    v3 = sub_1C32D5C(v241, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Fu )
    goto LABEL_1658;
  v1->m_Items[79] = (DataMasterBase_o *)v241;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[79], (int32_t)v241, v242, v243);
  v244 = (GachaTicketMaster_o *)sub_1C32E6C(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v244, 0);
  if ( v244 )
  {
    v3 = sub_1C32D5C(v244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x50u )
    goto LABEL_1658;
  v1->m_Items[80] = (DataMasterBase_o *)v244;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[80], (int32_t)v244, v245, v246);
  v247 = (UserFormationMaster_o *)sub_1C32E6C(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v247, 0);
  if ( v247 )
  {
    v3 = sub_1C32D5C(v247, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x51u )
    goto LABEL_1658;
  v1->m_Items[81] = (DataMasterBase_o *)v247;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[81], (int32_t)v247, v248, v249);
  v250 = (FunctionMaster_o *)sub_1C32E6C(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v250, 0);
  if ( v250 )
  {
    v3 = sub_1C32D5C(v250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x52u )
    goto LABEL_1658;
  v1->m_Items[82] = (DataMasterBase_o *)v250;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[82], (int32_t)v250, v251, v252);
  v253 = (BuffMaster_o *)sub_1C32E6C(BuffMaster_TypeInfo);
  BuffMaster___ctor(v253, 0);
  if ( v253 )
  {
    v3 = sub_1C32D5C(v253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x53u )
    goto LABEL_1658;
  v1->m_Items[83] = (DataMasterBase_o *)v253;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[83], (int32_t)v253, v254, v255);
  v256 = (GachaReleaseMaster_o *)sub_1C32E6C(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v256, 0);
  if ( v256 )
  {
    v3 = sub_1C32D5C(v256, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x54u )
    goto LABEL_1658;
  v1->m_Items[84] = (DataMasterBase_o *)v256;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[84], (int32_t)v256, v257, v258);
  v259 = (CombineQpMaster_o *)sub_1C32E6C(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v259, 0);
  if ( v259 )
  {
    v3 = sub_1C32D5C(v259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x55u )
    goto LABEL_1658;
  v1->m_Items[85] = (DataMasterBase_o *)v259;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[85], (int32_t)v259, v260, v261);
  v262 = (CombineMaterialMaster_o *)sub_1C32E6C(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v262, 0);
  if ( v262 )
  {
    v3 = sub_1C32D5C(v262, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x56u )
    goto LABEL_1658;
  v1->m_Items[86] = (DataMasterBase_o *)v262;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[86], (int32_t)v262, v263, v264);
  v265 = (EventCombineMaster_o *)sub_1C32E6C(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v265, 0);
  if ( v265 )
  {
    v3 = sub_1C32D5C(v265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x57u )
    goto LABEL_1658;
  v1->m_Items[87] = (DataMasterBase_o *)v265;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[87], (int32_t)v265, v266, v267);
  v268 = (ServantExpMaster_o *)sub_1C32E6C(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v268, 0);
  if ( v268 )
  {
    v3 = sub_1C32D5C(v268, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x58u )
    goto LABEL_1658;
  v1->m_Items[88] = (DataMasterBase_o *)v268;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[88], (int32_t)v268, v269, v270);
  v271 = (CombineSkillMaster_o *)sub_1C32E6C(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v271, 0);
  if ( v271 )
  {
    v3 = sub_1C32D5C(v271, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x59u )
    goto LABEL_1658;
  v1->m_Items[89] = (DataMasterBase_o *)v271;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[89], (int32_t)v271, v272, v273);
  v274 = (CombineTdMaster_o *)sub_1C32E6C(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v274, 0);
  if ( v274 )
  {
    v3 = sub_1C32D5C(v274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Au )
    goto LABEL_1658;
  v1->m_Items[90] = (DataMasterBase_o *)v274;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[90], (int32_t)v274, v275, v276);
  v277 = (EventQuestMaster_o *)sub_1C32E6C(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v277, 0);
  if ( v277 )
  {
    v3 = sub_1C32D5C(v277, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Bu )
    goto LABEL_1658;
  v1->m_Items[91] = (DataMasterBase_o *)v277;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[91], (int32_t)v277, v278, v279);
  v280 = (EventCampaignMaster_o *)sub_1C32E6C(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v280, 0);
  if ( v280 )
  {
    v3 = sub_1C32D5C(v280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Cu )
    goto LABEL_1658;
  v1->m_Items[92] = (DataMasterBase_o *)v280;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[92], (int32_t)v280, v281, v282);
  v283 = (IllustratorMaster_o *)sub_1C32E6C(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v283, 0);
  if ( v283 )
  {
    v3 = sub_1C32D5C(v283, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Du )
    goto LABEL_1658;
  v1->m_Items[93] = (DataMasterBase_o *)v283;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[93], (int32_t)v283, v284, v285);
  v286 = (CvMaster_o *)sub_1C32E6C(CvMaster_TypeInfo);
  CvMaster___ctor(v286, 0);
  if ( v286 )
  {
    v3 = sub_1C32D5C(v286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Eu )
    goto LABEL_1658;
  v1->m_Items[94] = (DataMasterBase_o *)v286;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[94], (int32_t)v286, v287, v288);
  v289 = (TreasureDvcLvMaster_o *)sub_1C32E6C(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v289, 0);
  if ( v289 )
  {
    v3 = sub_1C32D5C(v289, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Fu )
    goto LABEL_1658;
  v1->m_Items[95] = (DataMasterBase_o *)v289;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[95], (int32_t)v289, v290, v291);
  v292 = (TreasureDvcDetailMaster_o *)sub_1C32E6C(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v292, 0);
  if ( v292 )
  {
    v3 = sub_1C32D5C(v292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x60u )
    goto LABEL_1658;
  v1->m_Items[96] = (DataMasterBase_o *)v292;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[96], (int32_t)v292, v293, v294);
  v295 = (UserFollowerMaster_o *)sub_1C32E6C(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v295, 0);
  if ( v295 )
  {
    v3 = sub_1C32D5C(v295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x61u )
    goto LABEL_1658;
  v1->m_Items[97] = (DataMasterBase_o *)v295;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[97], (int32_t)v295, v296, v297);
  v298 = (NpcFollowerMaster_o *)sub_1C32E6C(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v298, 0);
  if ( v298 )
  {
    v3 = sub_1C32D5C(v298, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x62u )
    goto LABEL_1658;
  v1->m_Items[98] = (DataMasterBase_o *)v298;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[98], (int32_t)v298, v299, v300);
  v301 = (NpcServantFollowerMaster_o *)sub_1C32E6C(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v301, 0);
  if ( v301 )
  {
    v3 = sub_1C32D5C(v301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x63u )
    goto LABEL_1658;
  v1->m_Items[99] = (DataMasterBase_o *)v301;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[99], (int32_t)v301, v302, v303);
  v304 = (UserEventMaster_o *)sub_1C32E6C(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v304, 0);
  if ( v304 )
  {
    v3 = sub_1C32D5C(v304, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x64u )
    goto LABEL_1658;
  v1->m_Items[100] = (DataMasterBase_o *)v304;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[100], (int32_t)v304, v305, v306);
  v307 = (UserShopMaster_o *)sub_1C32E6C(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v307, 0);
  if ( v307 )
  {
    v3 = sub_1C32D5C(v307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x65u )
    goto LABEL_1658;
  v1->m_Items[101] = (DataMasterBase_o *)v307;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[101], (int32_t)v307, v308, v309);
  v310 = (UserContinueMaster_o *)sub_1C32E6C(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v310, 0);
  if ( v310 )
  {
    v3 = sub_1C32D5C(v310, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x66u )
    goto LABEL_1658;
  v1->m_Items[102] = (DataMasterBase_o *)v310;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[102], (int32_t)v310, v311, v312);
  v313 = (ConstantMaster_o *)sub_1C32E6C(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v313, 0);
  if ( v313 )
  {
    v3 = sub_1C32D5C(v313, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x67u )
    goto LABEL_1658;
  v1->m_Items[103] = (DataMasterBase_o *)v313;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[103], (int32_t)v313, v314, v315);
  v316 = (ConstantLongMaster_o *)sub_1C32E6C(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v316, 0);
  if ( v316 )
  {
    v3 = sub_1C32D5C(v316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x68u )
    goto LABEL_1658;
  v1->m_Items[104] = (DataMasterBase_o *)v316;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[104], (int32_t)v316, v317, v318);
  v319 = (ConstantStrMaster_o *)sub_1C32E6C(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v319, 0);
  if ( v319 )
  {
    v3 = sub_1C32D5C(v319, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x69u )
    goto LABEL_1658;
  v1->m_Items[105] = (DataMasterBase_o *)v319;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[105], (int32_t)v319, v320, v321);
  v322 = (AiMaster_o *)sub_1C32E6C(AiMaster_TypeInfo);
  AiMaster___ctor(v322, 0);
  if ( v322 )
  {
    v3 = sub_1C32D5C(v322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Au )
    goto LABEL_1658;
  v1->m_Items[106] = (DataMasterBase_o *)v322;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[106], (int32_t)v322, v323, v324);
  v325 = (AiActMaster_o *)sub_1C32E6C(AiActMaster_TypeInfo);
  AiActMaster___ctor(v325, 0);
  if ( v325 )
  {
    v3 = sub_1C32D5C(v325, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Bu )
    goto LABEL_1658;
  v1->m_Items[107] = (DataMasterBase_o *)v325;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[107], (int32_t)v325, v326, v327);
  v328 = (AttriRelationMaster_o *)sub_1C32E6C(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v328, 0);
  if ( v328 )
  {
    v3 = sub_1C32D5C(v328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Cu )
    goto LABEL_1658;
  v1->m_Items[108] = (DataMasterBase_o *)v328;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[108], (int32_t)v328, v329, v330);
  v331 = (ClassRelationMaster_o *)sub_1C32E6C(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v331, 0);
  if ( v331 )
  {
    v3 = sub_1C32D5C(v331, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Du )
    goto LABEL_1658;
  v1->m_Items[109] = (DataMasterBase_o *)v331;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[109], (int32_t)v331, v332, v333);
  v334 = (EffectMaster_o *)sub_1C32E6C(EffectMaster_TypeInfo);
  EffectMaster___ctor(v334, 0);
  if ( v334 )
  {
    v3 = sub_1C32D5C(v334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Eu )
    goto LABEL_1658;
  v1->m_Items[110] = (DataMasterBase_o *)v334;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[110], (int32_t)v334, v335, v336);
  v337 = (EquipImageMaster_o *)sub_1C32E6C(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v337, 0);
  if ( v337 )
  {
    v3 = sub_1C32D5C(v337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Fu )
    goto LABEL_1658;
  v1->m_Items[111] = (DataMasterBase_o *)v337;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[111], (int32_t)v337, v338, v339);
  v340 = (ServantVoiceMaster_o *)sub_1C32E6C(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v340, 0);
  if ( v340 )
  {
    v3 = sub_1C32D5C(v340, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x70u )
    goto LABEL_1658;
  v1->m_Items[112] = (DataMasterBase_o *)v340;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[112], (int32_t)v340, v341, v342);
  v343 = (CombineLimitMaster_o *)sub_1C32E6C(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v343, 0);
  if ( v343 )
  {
    v3 = sub_1C32D5C(v343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x71u )
    goto LABEL_1658;
  v1->m_Items[113] = (DataMasterBase_o *)v343;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[113], (int32_t)v343, v344, v345);
  v346 = (CardMaster_o *)sub_1C32E6C(CardMaster_TypeInfo);
  CardMaster___ctor(v346, 0);
  if ( v346 )
  {
    v3 = sub_1C32D5C(v346, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x72u )
    goto LABEL_1658;
  v1->m_Items[114] = (DataMasterBase_o *)v346;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[114], (int32_t)v346, v347, v348);
  v349 = (CombineQpSvtEquipMaster_o *)sub_1C32E6C(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v349, 0);
  if ( v349 )
  {
    v3 = sub_1C32D5C(v349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x73u )
    goto LABEL_1658;
  v1->m_Items[115] = (DataMasterBase_o *)v349;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[115], (int32_t)v349, v350, v351);
  v352 = (ServantRarityMaster_o *)sub_1C32E6C(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v352, 0);
  if ( v352 )
  {
    v3 = sub_1C32D5C(v352, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x74u )
    goto LABEL_1658;
  v1->m_Items[116] = (DataMasterBase_o *)v352;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[116], (int32_t)v352, v353, v354);
  v355 = (SetItemMaster_o *)sub_1C32E6C(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v355, 0);
  if ( v355 )
  {
    v3 = sub_1C32D5C(v355, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x75u )
    goto LABEL_1658;
  v1->m_Items[117] = (DataMasterBase_o *)v355;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[117], (int32_t)v355, v356, v357);
  v358 = (RecoverMaster_o *)sub_1C32E6C(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v358, 0);
  if ( v358 )
  {
    v3 = sub_1C32D5C(v358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x76u )
    goto LABEL_1658;
  v1->m_Items[118] = (DataMasterBase_o *)v358;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[118], (int32_t)v358, v359, v360);
  v361 = (BannerMaster_o *)sub_1C32E6C(BannerMaster_TypeInfo);
  BannerMaster___ctor(v361, 0);
  if ( v361 )
  {
    v3 = sub_1C32D5C(v361, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x77u )
    goto LABEL_1658;
  v1->m_Items[119] = (DataMasterBase_o *)v361;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[119], (int32_t)v361, v362, v363);
  v364 = (ShopReleaseMaster_o *)sub_1C32E6C(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v364, 0);
  if ( v364 )
  {
    v3 = sub_1C32D5C(v364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x78u )
    goto LABEL_1658;
  v1->m_Items[120] = (DataMasterBase_o *)v364;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[120], (int32_t)v364, v365, v366);
  v367 = (EventRewardMaster_o *)sub_1C32E6C(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v367, 0);
  if ( v367 )
  {
    v3 = sub_1C32D5C(v367, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x79u )
    goto LABEL_1658;
  v1->m_Items[121] = (DataMasterBase_o *)v367;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[121], (int32_t)v367, v368, v369);
  v370 = (EventDetailMaster_o *)sub_1C32E6C(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v370, 0);
  if ( v370 )
  {
    v3 = sub_1C32D5C(v370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Au )
    goto LABEL_1658;
  v1->m_Items[122] = (DataMasterBase_o *)v370;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[122], (int32_t)v370, v371, v372);
  v373 = (EventServantMaster_o *)sub_1C32E6C(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v373, 0);
  if ( v373 )
  {
    v3 = sub_1C32D5C(v373, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Bu )
    goto LABEL_1658;
  v1->m_Items[123] = (DataMasterBase_o *)v373;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[123], (int32_t)v373, v374, v375);
  v376 = (BoxGachaMaster_o *)sub_1C32E6C(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v376, 0);
  if ( v376 )
  {
    v3 = sub_1C32D5C(v376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Cu )
    goto LABEL_1658;
  v1->m_Items[124] = (DataMasterBase_o *)v376;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[124], (int32_t)v376, v377, v378);
  v379 = (BoxGachaBaseMaster_o *)sub_1C32E6C(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v379, 0);
  if ( v379 )
  {
    v3 = sub_1C32D5C(v379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Du )
    goto LABEL_1658;
  v1->m_Items[125] = (DataMasterBase_o *)v379;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[125], (int32_t)v379, v380, v381);
  v382 = (BoxGachaTalkMaster_o *)sub_1C32E6C(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v382, 0);
  if ( v382 )
  {
    v3 = sub_1C32D5C(v382, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Eu )
    goto LABEL_1658;
  v1->m_Items[126] = (DataMasterBase_o *)v382;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[126], (int32_t)v382, v383, v384);
  v385 = (UserBoxGachaMaster_o *)sub_1C32E6C(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v385, 0);
  if ( v385 )
  {
    v3 = sub_1C32D5C(v385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Fu )
    goto LABEL_1658;
  v1->m_Items[127] = (DataMasterBase_o *)v385;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[127], (int32_t)v385, v386, v387);
  v388 = (BoxGachaHistoryMaster_o *)sub_1C32E6C(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v388, 0);
  if ( v388 )
  {
    v3 = sub_1C32D5C(v388, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x80u )
    goto LABEL_1658;
  v1->m_Items[128] = (DataMasterBase_o *)v388;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[128], (int32_t)v388, v389, v390);
  v391 = (BattleBgMaster_o *)sub_1C32E6C(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v391, 0);
  if ( v391 )
  {
    v3 = sub_1C32D5C(v391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x81u )
    goto LABEL_1658;
  v1->m_Items[129] = (DataMasterBase_o *)v391;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[129], (int32_t)v391, v392, v393);
  v394 = (TipsBattleMaster_o *)sub_1C32E6C(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v394, 0);
  if ( v394 )
  {
    v3 = sub_1C32D5C(v394, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x82u )
    goto LABEL_1658;
  v1->m_Items[130] = (DataMasterBase_o *)v394;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[130], (int32_t)v394, v395, v396);
  v397 = (UserLoginMaster_o *)sub_1C32E6C(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v397, 0);
  if ( v397 )
  {
    v3 = sub_1C32D5C(v397, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x83u )
    goto LABEL_1658;
  v1->m_Items[131] = (DataMasterBase_o *)v397;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[131], (int32_t)v397, v398, v399);
  v400 = (VoiceMaster_o *)sub_1C32E6C(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v400, 0);
  if ( v400 )
  {
    v3 = sub_1C32D5C(v400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x84u )
    goto LABEL_1658;
  v1->m_Items[132] = (DataMasterBase_o *)v400;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[132], (int32_t)v400, v401, v402);
  v403 = (EventRewardExtraMaster_o *)sub_1C32E6C(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v403, 0);
  if ( v403 )
  {
    v3 = sub_1C32D5C(v403, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x85u )
    goto LABEL_1658;
  v1->m_Items[133] = (DataMasterBase_o *)v403;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[133], (int32_t)v403, v404, v405);
  v406 = (EventMissionMaster_o *)sub_1C32E6C(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v406, 0);
  if ( v406 )
  {
    v3 = sub_1C32D5C(v406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x86u )
    goto LABEL_1658;
  v1->m_Items[134] = (DataMasterBase_o *)v406;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[134], (int32_t)v406, v407, v408);
  v409 = (EventMissionActionMaster_o *)sub_1C32E6C(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v409, 0);
  if ( v409 )
  {
    v3 = sub_1C32D5C(v409, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x87u )
    goto LABEL_1658;
  v1->m_Items[135] = (DataMasterBase_o *)v409;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[135], (int32_t)v409, v410, v411);
  v412 = (EventMissionActionAddMaster_o *)sub_1C32E6C(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v412, 0);
  if ( v412 )
  {
    v3 = sub_1C32D5C(v412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x88u )
    goto LABEL_1658;
  v1->m_Items[136] = (DataMasterBase_o *)v412;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[136], (int32_t)v412, v413, v414);
  v415 = (EventMissionConditionMaster_o *)sub_1C32E6C(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v415, 0);
  if ( v415 )
  {
    v3 = sub_1C32D5C(v415, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x89u )
    goto LABEL_1658;
  v1->m_Items[137] = (DataMasterBase_o *)v415;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[137], (int32_t)v415, v416, v417);
  v418 = (EventMissionCondDetailMaster_o *)sub_1C32E6C(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v418, 0);
  if ( v418 )
  {
    v3 = sub_1C32D5C(v418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Au )
    goto LABEL_1658;
  v1->m_Items[138] = (DataMasterBase_o *)v418;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[138], (int32_t)v418, v419, v420);
  v421 = (EventMissionAddMaster_o *)sub_1C32E6C(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v421, 0);
  if ( v421 )
  {
    v3 = sub_1C32D5C(v421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Bu )
    goto LABEL_1658;
  v1->m_Items[139] = (DataMasterBase_o *)v421;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[139], (int32_t)v421, v422, v423);
  v424 = (CompleteMissionMaster_o *)sub_1C32E6C(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v424, 0);
  if ( v424 )
  {
    v3 = sub_1C32D5C(v424, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Cu )
    goto LABEL_1658;
  v1->m_Items[140] = (DataMasterBase_o *)v424;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[140], (int32_t)v424, v425, v426);
  v427 = (EventRewardSetMaster_o *)sub_1C32E6C(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v427, 0);
  if ( v427 )
  {
    v3 = sub_1C32D5C(v427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Du )
    goto LABEL_1658;
  v1->m_Items[141] = (DataMasterBase_o *)v427;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[141], (int32_t)v427, v428, v429);
  v430 = (UserEventMissionMaster_o *)sub_1C32E6C(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v430, 0);
  if ( v430 )
  {
    v3 = sub_1C32D5C(v430, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Eu )
    goto LABEL_1658;
  v1->m_Items[142] = (DataMasterBase_o *)v430;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[142], (int32_t)v430, v431, v432);
  v433 = (UserEventMissionCondDetailMaster_o *)sub_1C32E6C(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v433, 0);
  if ( v433 )
  {
    v3 = sub_1C32D5C(v433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Fu )
    goto LABEL_1658;
  v1->m_Items[143] = (DataMasterBase_o *)v433;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[143], (int32_t)v433, v434, v435);
  v436 = (BoxGachaBaseDetailMaster_o *)sub_1C32E6C(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v436, 0);
  if ( v436 )
  {
    v3 = sub_1C32D5C(v436, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x90u )
    goto LABEL_1658;
  v1->m_Items[144] = (DataMasterBase_o *)v436;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[144], (int32_t)v436, v437, v438);
  v439 = (UserServantLeaderMaster_o *)sub_1C32E6C(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v439, 0);
  if ( v439 )
  {
    v3 = sub_1C32D5C(v439, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x91u )
    goto LABEL_1658;
  v1->m_Items[145] = (DataMasterBase_o *)v439;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[145], (int32_t)v439, v440, v441);
  v442 = (ClosedMessageMaster_o *)sub_1C32E6C(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v442, 0);
  if ( v442 )
  {
    v3 = sub_1C32D5C(v442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x92u )
    goto LABEL_1658;
  v1->m_Items[146] = (DataMasterBase_o *)v442;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[146], (int32_t)v442, v443, v444);
  v445 = (FunctionGroupMaster_o *)sub_1C32E6C(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v445, 0);
  if ( v445 )
  {
    v3 = sub_1C32D5C(v445, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x93u )
    goto LABEL_1658;
  v1->m_Items[147] = (DataMasterBase_o *)v445;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[147], (int32_t)v445, v446, v447);
  v448 = (EventRaidMaster_o *)sub_1C32E6C(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v448, 0);
  if ( v448 )
  {
    v3 = sub_1C32D5C(v448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x94u )
    goto LABEL_1658;
  v1->m_Items[148] = (DataMasterBase_o *)v448;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[148], (int32_t)v448, v449, v450);
  v451 = (TotalEventRaidMaster_o *)sub_1C32E6C(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v451, 0);
  if ( v451 )
  {
    v3 = sub_1C32D5C(v451, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x95u )
    goto LABEL_1658;
  v1->m_Items[149] = (DataMasterBase_o *)v451;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[149], (int32_t)v451, v452, v453);
  v454 = (UserEventRaidMaster_o *)sub_1C32E6C(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v454, 0);
  if ( v454 )
  {
    v3 = sub_1C32D5C(v454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x96u )
    goto LABEL_1658;
  v1->m_Items[150] = (DataMasterBase_o *)v454;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[150], (int32_t)v454, v455, v456);
  v457 = (EventPointMaster_o *)sub_1C32E6C(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v457, 0);
  if ( v457 )
  {
    v3 = sub_1C32D5C(v457, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x97u )
    goto LABEL_1658;
  v1->m_Items[151] = (DataMasterBase_o *)v457;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[151], (int32_t)v457, v458, v459);
  v460 = (EventPointGroupMaster_o *)sub_1C32E6C(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v460, 0);
  if ( v460 )
  {
    v3 = sub_1C32D5C(v460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x98u )
    goto LABEL_1658;
  v1->m_Items[152] = (DataMasterBase_o *)v460;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[152], (int32_t)v460, v461, v462);
  v463 = (TotalEventPointMaster_o *)sub_1C32E6C(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v463, 0);
  if ( v463 )
  {
    v3 = sub_1C32D5C(v463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x99u )
    goto LABEL_1658;
  v1->m_Items[153] = (DataMasterBase_o *)v463;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[153], (int32_t)v463, v464, v465);
  v466 = (UserEventPointMaster_o *)sub_1C32E6C(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v466, 0);
  if ( v466 )
  {
    v3 = sub_1C32D5C(v466, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Au )
    goto LABEL_1658;
  v1->m_Items[154] = (DataMasterBase_o *)v466;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[154], (int32_t)v466, v467, v468);
  v469 = (EventPointUpperMaster_o *)sub_1C32E6C(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v469, 0);
  if ( v469 )
  {
    v3 = sub_1C32D5C(v469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Bu )
    goto LABEL_1658;
  v1->m_Items[155] = (DataMasterBase_o *)v469;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[155], (int32_t)v469, v470, v471);
  v472 = (EventPointUpperReleaseMaster_o *)sub_1C32E6C(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v472, 0);
  if ( v472 )
  {
    v3 = sub_1C32D5C(v472, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Cu )
    goto LABEL_1658;
  v1->m_Items[156] = (DataMasterBase_o *)v472;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[156], (int32_t)v472, v473, v474);
  v475 = (EventRaceMaster_o *)sub_1C32E6C(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v475, 0);
  if ( v475 )
  {
    v3 = sub_1C32D5C(v475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Du )
    goto LABEL_1658;
  v1->m_Items[157] = (DataMasterBase_o *)v475;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[157], (int32_t)v475, v476, v477);
  v478 = (EventRaceResultMaster_o *)sub_1C32E6C(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v478, 0);
  if ( v478 )
  {
    v3 = sub_1C32D5C(v478, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Eu )
    goto LABEL_1658;
  v1->m_Items[158] = (DataMasterBase_o *)v478;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[158], (int32_t)v478, v479, v480);
  v481 = (QuestRacePointMaster_o *)sub_1C32E6C(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v481, 0);
  if ( v481 )
  {
    v3 = sub_1C32D5C(v481, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Fu )
    goto LABEL_1658;
  v1->m_Items[159] = (DataMasterBase_o *)v481;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[159], (int32_t)v481, v482, v483);
  v484 = (UserEventRaceMaster_o *)sub_1C32E6C(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v484, 0);
  if ( v484 )
  {
    v3 = sub_1C32D5C(v484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA0u )
    goto LABEL_1658;
  v1->m_Items[160] = (DataMasterBase_o *)v484;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[160], (int32_t)v484, v485, v486);
  v487 = (EventScriptMaster_o *)sub_1C32E6C(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v487, 0);
  if ( v487 )
  {
    v3 = sub_1C32D5C(v487, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA1u )
    goto LABEL_1658;
  v1->m_Items[161] = (DataMasterBase_o *)v487;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[161], (int32_t)v487, v488, v489);
  v490 = (EventScriptReleaseMaster_o *)sub_1C32E6C(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v490, 0);
  if ( v490 )
  {
    v3 = sub_1C32D5C(v490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA2u )
    goto LABEL_1658;
  v1->m_Items[162] = (DataMasterBase_o *)v490;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[162], (int32_t)v490, v491, v492);
  v493 = (UserPresentHistoryMaster_o *)sub_1C32E6C(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v493, 0);
  if ( v493 )
  {
    v3 = sub_1C32D5C(v493, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA3u )
    goto LABEL_1658;
  v1->m_Items[163] = (DataMasterBase_o *)v493;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[163], (int32_t)v493, v494, v495);
  v496 = (MstMissionMaster_o *)sub_1C32E6C(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v496, 0);
  if ( v496 )
  {
    v3 = sub_1C32D5C(v496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA4u )
    goto LABEL_1658;
  v1->m_Items[164] = (DataMasterBase_o *)v496;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[164], (int32_t)v496, v497, v498);
  v499 = (ServantExceedMaster_o *)sub_1C32E6C(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v499, 0);
  if ( v499 )
  {
    v3 = sub_1C32D5C(v499, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA5u )
    goto LABEL_1658;
  v1->m_Items[165] = (DataMasterBase_o *)v499;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[165], (int32_t)v499, v500, v501);
  v502 = (PartialMaintenanceMaster_o *)sub_1C32E6C(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v502, 0);
  if ( v502 )
  {
    v3 = sub_1C32D5C(v502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA6u )
    goto LABEL_1658;
  v1->m_Items[166] = (DataMasterBase_o *)v502;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[166], (int32_t)v502, v503, v504);
  v505 = (GuideMaster_o *)sub_1C32E6C(GuideMaster_TypeInfo);
  GuideMaster___ctor(v505, 0);
  if ( v505 )
  {
    v3 = sub_1C32D5C(v505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA7u )
    goto LABEL_1658;
  v1->m_Items[167] = (DataMasterBase_o *)v505;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[167], (int32_t)v505, v506, v507);
  v508 = (MstMissionDisplayInfoMaster_o *)sub_1C32E6C(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v508, 0);
  if ( v508 )
  {
    v3 = sub_1C32D5C(v508, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA8u )
    goto LABEL_1658;
  v1->m_Items[168] = (DataMasterBase_o *)v508;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[168], (int32_t)v508, v509, v510);
  v511 = (GachaGroupMaster_o *)sub_1C32E6C(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v511, 0);
  if ( v511 )
  {
    v3 = sub_1C32D5C(v511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA9u )
    goto LABEL_1658;
  v1->m_Items[169] = (DataMasterBase_o *)v511;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[169], (int32_t)v511, v512, v513);
  v514 = (QuestResetMaster_o *)sub_1C32E6C(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v514, 0);
  if ( v514 )
  {
    v3 = sub_1C32D5C(v514, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAAu )
    goto LABEL_1658;
  v1->m_Items[170] = (DataMasterBase_o *)v514;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[170], (int32_t)v514, v515, v516);
  v517 = (WarAddMaster_o *)sub_1C32E6C(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v517, 0);
  if ( v517 )
  {
    v3 = sub_1C32D5C(v517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xABu )
    goto LABEL_1658;
  v1->m_Items[171] = (DataMasterBase_o *)v517;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[171], (int32_t)v517, v518, v519);
  v520 = (EventItemDisplayMaster_o *)sub_1C32E6C(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v520, 0);
  if ( v520 )
  {
    v3 = sub_1C32D5C(v520, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xACu )
    goto LABEL_1658;
  v1->m_Items[172] = (DataMasterBase_o *)v520;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[172], (int32_t)v520, v521, v522);
  v523 = (EventItemDisplayGroupMaster_o *)sub_1C32E6C(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v523, 0);
  if ( v523 )
  {
    v3 = sub_1C32D5C(v523, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xADu )
    goto LABEL_1658;
  v1->m_Items[173] = (DataMasterBase_o *)v523;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[173], (int32_t)v523, v524, v525);
  v526 = (EventItemDisplayReleaseMaster_o *)sub_1C32E6C(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v526, 0);
  if ( v526 )
  {
    v3 = sub_1C32D5C(v526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAEu )
    goto LABEL_1658;
  v1->m_Items[174] = (DataMasterBase_o *)v526;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[174], (int32_t)v526, v527, v528);
  v529 = (EventTutorialMaster_o *)sub_1C32E6C(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v529, 0);
  if ( v529 )
  {
    v3 = sub_1C32D5C(v529, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAFu )
    goto LABEL_1658;
  v1->m_Items[175] = (DataMasterBase_o *)v529;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[175], (int32_t)v529, v530, v531);
  v532 = (EventTutorialCondMaster_o *)sub_1C32E6C(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v532, 0);
  if ( v532 )
  {
    v3 = sub_1C32D5C(v532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB0u )
    goto LABEL_1658;
  v1->m_Items[176] = (DataMasterBase_o *)v532;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[176], (int32_t)v532, v533, v534);
  v535 = (VoiceReleaseMaster_o *)sub_1C32E6C(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v535, 0);
  if ( v535 )
  {
    v3 = sub_1C32D5C(v535, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB1u )
    goto LABEL_1658;
  v1->m_Items[177] = (DataMasterBase_o *)v535;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[177], (int32_t)v535, v536, v537);
  v538 = (EventSuperBossMaster_o *)sub_1C32E6C(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v538, 0);
  if ( v538 )
  {
    v3 = sub_1C32D5C(v538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB2u )
    goto LABEL_1658;
  v1->m_Items[178] = (DataMasterBase_o *)v538;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[178], (int32_t)v538, v539, v540);
  v541 = (UserSuperBossMaster_o *)sub_1C32E6C(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v541, 0);
  if ( v541 )
  {
    v3 = sub_1C32D5C(v541, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB3u )
    goto LABEL_1658;
  v1->m_Items[179] = (DataMasterBase_o *)v541;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[179], (int32_t)v541, v542, v543);
  v544 = (QuestScriptMaster_o *)sub_1C32E6C(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v544, 0);
  if ( v544 )
  {
    v3 = sub_1C32D5C(v544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB4u )
    goto LABEL_1658;
  v1->m_Items[180] = (DataMasterBase_o *)v544;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[180], (int32_t)v544, v545, v546);
  v547 = (QuestScriptReleaseMaster_o *)sub_1C32E6C(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v547, 0);
  if ( v547 )
  {
    v3 = sub_1C32D5C(v547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB5u )
    goto LABEL_1658;
  v1->m_Items[181] = (DataMasterBase_o *)v547;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[181], (int32_t)v547, v548, v549);
  v550 = (MaterialFolderMaster_o *)sub_1C32E6C(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v550, 0);
  if ( v550 )
  {
    v3 = sub_1C32D5C(v550, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB6u )
    goto LABEL_1658;
  v1->m_Items[182] = (DataMasterBase_o *)v550;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[182], (int32_t)v550, v551, v552);
  v553 = (RestrictionMaster_o *)sub_1C32E6C(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v553, 0);
  if ( v553 )
  {
    v3 = sub_1C32D5C(v553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB7u )
    goto LABEL_1658;
  v1->m_Items[183] = (DataMasterBase_o *)v553;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[183], (int32_t)v553, v554, v555);
  v556 = (QuestRestrictionMaster_o *)sub_1C32E6C(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v556, 0);
  if ( v556 )
  {
    v3 = sub_1C32D5C(v556, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB8u )
    goto LABEL_1658;
  v1->m_Items[184] = (DataMasterBase_o *)v556;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[184], (int32_t)v556, v557, v558);
  v559 = (ServantVoiceRelationMaster_o *)sub_1C32E6C(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v559, 0);
  if ( v559 )
  {
    v3 = sub_1C32D5C(v559, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB9u )
    goto LABEL_1658;
  v1->m_Items[185] = (DataMasterBase_o *)v559;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[185], (int32_t)v559, v560, v561);
  v562 = (ShopDetailMaster_o *)sub_1C32E6C(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v562, 0);
  if ( v562 )
  {
    v3 = sub_1C32D5C(v562, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBAu )
    goto LABEL_1658;
  v1->m_Items[186] = (DataMasterBase_o *)v562;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[186], (int32_t)v562, v563, v564);
  v565 = (ServantScriptAddMaster_o *)sub_1C32E6C(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v565, 0);
  if ( v565 )
  {
    v3 = sub_1C32D5C(v565, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBBu )
    goto LABEL_1658;
  v1->m_Items[187] = (DataMasterBase_o *)v565;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[187], (int32_t)v565, v566, v567);
  v568 = (CombineMaster_o *)sub_1C32E6C(CombineMaster_TypeInfo);
  CombineMaster___ctor(v568, 0);
  if ( v568 )
  {
    v3 = sub_1C32D5C(v568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBCu )
    goto LABEL_1658;
  v1->m_Items[188] = (DataMasterBase_o *)v568;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[188], (int32_t)v568, v569, v570);
  v571 = (AiFieldMaster_o *)sub_1C32E6C(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v571, 0);
  if ( v571 )
  {
    v3 = sub_1C32D5C(v571, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBDu )
    goto LABEL_1658;
  v1->m_Items[189] = (DataMasterBase_o *)v571;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[189], (int32_t)v571, v572, v573);
  v574 = (ServantCommentAddMaster_o *)sub_1C32E6C(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v574, 0);
  if ( v574 )
  {
    v3 = sub_1C32D5C(v574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBEu )
    goto LABEL_1658;
  v1->m_Items[190] = (DataMasterBase_o *)v574;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[190], (int32_t)v574, v575, v576);
  v577 = (EventFilterMaster_o *)sub_1C32E6C(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v577, 0);
  if ( v577 )
  {
    v3 = sub_1C32D5C(v577, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBFu )
    goto LABEL_1658;
  v1->m_Items[191] = (DataMasterBase_o *)v577;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[191], (int32_t)v577, v578, v579);
  v580 = (UserSupportDeckMaster_o *)sub_1C32E6C(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v580, 0);
  if ( v580 )
  {
    v3 = sub_1C32D5C(v580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC0u )
    goto LABEL_1658;
  v1->m_Items[192] = (DataMasterBase_o *)v580;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[192], (int32_t)v580, v581, v582);
  v583 = (EventRewardSceneMaster_o *)sub_1C32E6C(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v583, 0);
  if ( v583 )
  {
    v3 = sub_1C32D5C(v583, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC1u )
    goto LABEL_1658;
  v1->m_Items[193] = (DataMasterBase_o *)v583;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[193], (int32_t)v583, v584, v585);
  v586 = (EventVoicePlayMaster_o *)sub_1C32E6C(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v586, 0);
  if ( v586 )
  {
    v3 = sub_1C32D5C(v586, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC2u )
    goto LABEL_1658;
  v1->m_Items[194] = (DataMasterBase_o *)v586;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[194], (int32_t)v586, v587, v588);
  v589 = (GachaSubMaster_o *)sub_1C32E6C(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v589, 0);
  if ( v589 )
  {
    v3 = sub_1C32D5C(v589, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC3u )
    goto LABEL_1658;
  v1->m_Items[195] = (DataMasterBase_o *)v589;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[195], (int32_t)v589, v590, v591);
  v592 = (GachaDetailMaster_o *)sub_1C32E6C(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v592, 0);
  if ( v592 )
  {
    v3 = sub_1C32D5C(v592, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC4u )
    goto LABEL_1658;
  v1->m_Items[196] = (DataMasterBase_o *)v592;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[196], (int32_t)v592, v593, v594);
  v595 = (GachaBaseCollateralMaster_o *)sub_1C32E6C(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v595, 0);
  if ( v595 )
  {
    v3 = sub_1C32D5C(v595, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC5u )
    goto LABEL_1658;
  v1->m_Items[197] = (DataMasterBase_o *)v595;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[197], (int32_t)v595, v596, v597);
  v598 = (GachaAdjustAddMaster_o *)sub_1C32E6C(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v598, 0);
  if ( v598 )
  {
    v3 = sub_1C32D5C(v598, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC6u )
    goto LABEL_1658;
  v1->m_Items[198] = (DataMasterBase_o *)v598;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[198], (int32_t)v598, v599, v600);
  v601 = (GachaBonusSelectMaster_o *)sub_1C32E6C(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v601, 0);
  if ( v601 )
  {
    v3 = sub_1C32D5C(v601, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC7u )
    goto LABEL_1658;
  v1->m_Items[199] = (DataMasterBase_o *)v601;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[199], (int32_t)v601, v602, v603);
  v604 = (GachaBonusSelectLineupMaster_o *)sub_1C32E6C(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v604, 0);
  if ( v604 )
  {
    v3 = sub_1C32D5C(v604, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC8u )
    goto LABEL_1658;
  v1->m_Items[200] = (DataMasterBase_o *)v604;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[200], (int32_t)v604, v605, v606);
  v607 = (ServantChangeMaster_o *)sub_1C32E6C(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v607, 0);
  if ( v607 )
  {
    v3 = sub_1C32D5C(v607, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC9u )
    goto LABEL_1658;
  v1->m_Items[201] = (DataMasterBase_o *)v607;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[201], (int32_t)v607, v608, v609);
  v610 = (VoiceCondMaster_o *)sub_1C32E6C(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v610, 0);
  if ( v610 )
  {
    v3 = sub_1C32D5C(v610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCAu )
    goto LABEL_1658;
  v1->m_Items[202] = (DataMasterBase_o *)v610;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[202], (int32_t)v610, v611, v612);
  v613 = (BgmReleaseMaster_o *)sub_1C32E6C(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v613, 0);
  if ( v613 )
  {
    v3 = sub_1C32D5C(v613, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCBu )
    goto LABEL_1658;
  v1->m_Items[203] = (DataMasterBase_o *)v613;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[203], (int32_t)v613, v614, v615);
  v616 = (MyRoomAddMaster_o *)sub_1C32E6C(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v616, 0);
  if ( v616 )
  {
    v3 = sub_1C32D5C(v616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCCu )
    goto LABEL_1658;
  v1->m_Items[204] = (DataMasterBase_o *)v616;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[204], (int32_t)v616, v617, v618);
  v619 = (ShopActionMaster_o *)sub_1C32E6C(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v619, 0);
  if ( v619 )
  {
    v3 = sub_1C32D5C(v619, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCDu )
    goto LABEL_1658;
  v1->m_Items[205] = (DataMasterBase_o *)v619;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[205], (int32_t)v619, v620, v621);
  v622 = (EventRewardSceneReleaseMaster_o *)sub_1C32E6C(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v622, 0);
  if ( v622 )
  {
    v3 = sub_1C32D5C(v622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCEu )
    goto LABEL_1658;
  v1->m_Items[206] = (DataMasterBase_o *)v622;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[206], (int32_t)v622, v623, v624);
  v625 = (QuestBehaviorMaster_o *)sub_1C32E6C(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v625, 0);
  if ( v625 )
  {
    v3 = sub_1C32D5C(v625, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCFu )
    goto LABEL_1658;
  v1->m_Items[207] = (DataMasterBase_o *)v625;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[207], (int32_t)v625, v626, v627);
  v628 = (MapMaster_o *)sub_1C32E6C(MapMaster_TypeInfo);
  MapMaster___ctor(v628, 0);
  if ( v628 )
  {
    v3 = sub_1C32D5C(v628, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD0u )
    goto LABEL_1658;
  v1->m_Items[208] = (DataMasterBase_o *)v628;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[208], (int32_t)v628, v629, v630);
  v631 = (MapCondMaster_o *)sub_1C32E6C(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v631, 0);
  if ( v631 )
  {
    v3 = sub_1C32D5C(v631, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD1u )
    goto LABEL_1658;
  v1->m_Items[209] = (DataMasterBase_o *)v631;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[209], (int32_t)v631, v632, v633);
  v634 = (MapButtonMaster_o *)sub_1C32E6C(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v634, 0);
  if ( v634 )
  {
    v3 = sub_1C32D5C(v634, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD2u )
    goto LABEL_1658;
  v1->m_Items[210] = (DataMasterBase_o *)v634;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[210], (int32_t)v634, v635, v636);
  v637 = (BannerAddMaster_o *)sub_1C32E6C(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v637, 0);
  if ( v637 )
  {
    v3 = sub_1C32D5C(v637, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD3u )
    goto LABEL_1658;
  v1->m_Items[211] = (DataMasterBase_o *)v637;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[211], (int32_t)v637, v638, v639);
  v640 = (EventAddMaster_o *)sub_1C32E6C(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v640, 0);
  if ( v640 )
  {
    v3 = sub_1C32D5C(v640, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD4u )
    goto LABEL_1658;
  v1->m_Items[212] = (DataMasterBase_o *)v640;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[212], (int32_t)v640, v641, v642);
  v643 = (TotalLoginMaster_o *)sub_1C32E6C(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v643, 0);
  if ( v643 )
  {
    v3 = sub_1C32D5C(v643, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD5u )
    goto LABEL_1658;
  v1->m_Items[213] = (DataMasterBase_o *)v643;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[213], (int32_t)v643, v644, v645);
  v646 = (ServantFilterMaster_o *)sub_1C32E6C(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v646, 0);
  if ( v646 )
  {
    v3 = sub_1C32D5C(v646, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD6u )
    goto LABEL_1658;
  v1->m_Items[214] = (DataMasterBase_o *)v646;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[214], (int32_t)v646, v647, v648);
  v649 = (CombineCostumeMaster_o *)sub_1C32E6C(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v649, 0);
  if ( v649 )
  {
    v3 = sub_1C32D5C(v649, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD7u )
    goto LABEL_1658;
  v1->m_Items[215] = (DataMasterBase_o *)v649;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[215], (int32_t)v649, v650, v651);
  v652 = (ServantCostumeMaster_o *)sub_1C32E6C(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v652, 0);
  if ( v652 )
  {
    v3 = sub_1C32D5C(v652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD8u )
    goto LABEL_1658;
  v1->m_Items[216] = (DataMasterBase_o *)v652;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[216], (int32_t)v652, v653, v654);
  v655 = (ServantCostumeReleaseMaster_o *)sub_1C32E6C(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v655, 0);
  if ( v655 )
  {
    v3 = sub_1C32D5C(v655, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD9u )
    goto LABEL_1658;
  v1->m_Items[217] = (DataMasterBase_o *)v655;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[217], (int32_t)v655, v656, v657);
  v658 = (StaffPhotoMaster_o *)sub_1C32E6C(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v658, 0);
  if ( v658 )
  {
    v3 = sub_1C32D5C(v658, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDAu )
    goto LABEL_1658;
  v1->m_Items[218] = (DataMasterBase_o *)v658;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[218], (int32_t)v658, v659, v660);
  v661 = (StaffPhotoCostumeMaster_o *)sub_1C32E6C(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v661, 0);
  if ( v661 )
  {
    v3 = sub_1C32D5C(v661, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDBu )
    goto LABEL_1658;
  v1->m_Items[219] = (DataMasterBase_o *)v661;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[219], (int32_t)v661, v662, v663);
  v664 = (UserFriendRequestHistoryMaster_o *)sub_1C32E6C(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v664, 0);
  if ( v664 )
  {
    v3 = sub_1C32D5C(v664, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDCu )
    goto LABEL_1658;
  v1->m_Items[220] = (DataMasterBase_o *)v664;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[220], (int32_t)v664, v665, v666);
  v667 = (UserBlacklistMaster_o *)sub_1C32E6C(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v667, 0);
  if ( v667 )
  {
    v3 = sub_1C32D5C(v667, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDDu )
    goto LABEL_1658;
  v1->m_Items[221] = (DataMasterBase_o *)v667;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[221], (int32_t)v667, v668, v669);
  v670 = (ItemSelectMaster_o *)sub_1C32E6C(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v670, 0);
  if ( v670 )
  {
    v3 = sub_1C32D5C(v670, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDEu )
    goto LABEL_1658;
  v1->m_Items[222] = (DataMasterBase_o *)v670;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[222], (int32_t)v670, v671, v672);
  v673 = (TotalEventRaceMaster_o *)sub_1C32E6C(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v673, 0);
  if ( v673 )
  {
    v3 = sub_1C32D5C(v673, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDFu )
    goto LABEL_1658;
  v1->m_Items[223] = (DataMasterBase_o *)v673;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[223], (int32_t)v673, v674, v675);
  v676 = (EventPointGroupAddMaster_o *)sub_1C32E6C(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v676, 0);
  if ( v676 )
  {
    v3 = sub_1C32D5C(v676, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE0u )
    goto LABEL_1658;
  v1->m_Items[224] = (DataMasterBase_o *)v676;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[224], (int32_t)v676, v677, v678);
  v679 = (VoicePlayGroupMaster_o *)sub_1C32E6C(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v679, 0);
  if ( v679 )
  {
    v3 = sub_1C32D5C(v679, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE1u )
    goto LABEL_1658;
  v1->m_Items[225] = (DataMasterBase_o *)v679;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[225], (int32_t)v679, v680, v681);
  v682 = (VoicePlayCondMaster_o *)sub_1C32E6C(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v682, 0);
  if ( v682 )
  {
    v3 = sub_1C32D5C(v682, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE2u )
    goto LABEL_1658;
  v1->m_Items[226] = (DataMasterBase_o *)v682;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[226], (int32_t)v682, v683, v684);
  v685 = (GachaStoryAdjustMaster_o *)sub_1C32E6C(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v685, 0);
  if ( v685 )
  {
    v3 = sub_1C32D5C(v685, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE3u )
    goto LABEL_1658;
  v1->m_Items[227] = (DataMasterBase_o *)v685;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[227], (int32_t)v685, v686, v687);
  v688 = (ServantFlagMaster_o *)sub_1C32E6C(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v688, 0);
  if ( v688 )
  {
    v3 = sub_1C32D5C(v688, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE4u )
    goto LABEL_1658;
  v1->m_Items[228] = (DataMasterBase_o *)v688;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[228], (int32_t)v688, v689, v690);
  v691 = (ServantFlagReleaseMaster_o *)sub_1C32E6C(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v691, 0);
  if ( v691 )
  {
    v3 = sub_1C32D5C(v691, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE5u )
    goto LABEL_1658;
  v1->m_Items[229] = (DataMasterBase_o *)v691;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[229], (int32_t)v691, v692, v693);
  v694 = (EventLocationCampaignMaster_o *)sub_1C32E6C(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v694, 0);
  if ( v694 )
  {
    v3 = sub_1C32D5C(v694, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE6u )
    goto LABEL_1658;
  v1->m_Items[230] = (DataMasterBase_o *)v694;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[230], (int32_t)v694, v695, v696);
  v697 = (CampaignInfoMaster_o *)sub_1C32E6C(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v697, 0);
  if ( v697 )
  {
    v3 = sub_1C32D5C(v697, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE7u )
    goto LABEL_1658;
  v1->m_Items[231] = (DataMasterBase_o *)v697;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[231], (int32_t)v697, v698, v699);
  v700 = (DialogMessageMaster_o *)sub_1C32E6C(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v700, 0);
  if ( v700 )
  {
    v3 = sub_1C32D5C(v700, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE8u )
    goto LABEL_1658;
  v1->m_Items[232] = (DataMasterBase_o *)v700;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[232], (int32_t)v700, v701, v702);
  v703 = (ServantIndividualityMaster_o *)sub_1C32E6C(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v703, 0);
  if ( v703 )
  {
    v3 = sub_1C32D5C(v703, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE9u )
    goto LABEL_1658;
  v1->m_Items[233] = (DataMasterBase_o *)v703;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[233], (int32_t)v703, v704, v705);
  v706 = (BoardMessageMaster_o *)sub_1C32E6C(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v706, 0);
  if ( v706 )
  {
    v3 = sub_1C32D5C(v706, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEAu )
    goto LABEL_1658;
  v1->m_Items[234] = (DataMasterBase_o *)v706;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[234], (int32_t)v706, v707, v708);
  v709 = (BoardMessageReleaseMaster_o *)sub_1C32E6C(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v709, 0);
  if ( v709 )
  {
    v3 = sub_1C32D5C(v709, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEBu )
    goto LABEL_1658;
  v1->m_Items[235] = (DataMasterBase_o *)v709;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[235], (int32_t)v709, v710, v711);
  v712 = (EventServantFatigueMaster_o *)sub_1C32E6C(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v712, 0);
  if ( v712 )
  {
    v3 = sub_1C32D5C(v712, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xECu )
    goto LABEL_1658;
  v1->m_Items[236] = (DataMasterBase_o *)v712;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[236], (int32_t)v712, v713, v714);
  v715 = (UserEventDeckMaster_o *)sub_1C32E6C(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v715, 0);
  if ( v715 )
  {
    v3 = sub_1C32D5C(v715, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEDu )
    goto LABEL_1658;
  v1->m_Items[237] = (DataMasterBase_o *)v715;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[237], (int32_t)v715, v716, v717);
  v718 = (EventTowerMaster_o *)sub_1C32E6C(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v718, 0);
  if ( v718 )
  {
    v3 = sub_1C32D5C(v718, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEEu )
    goto LABEL_1658;
  v1->m_Items[238] = (DataMasterBase_o *)v718;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[238], (int32_t)v718, v719, v720);
  v721 = (EventTowerRewardMaster_o *)sub_1C32E6C(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v721, 0);
  if ( v721 )
  {
    v3 = sub_1C32D5C(v721, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEFu )
    goto LABEL_1658;
  v1->m_Items[239] = (DataMasterBase_o *)v721;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[239], (int32_t)v721, v722, v723);
  v724 = (EventBulletinBoardMaster_o *)sub_1C32E6C(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v724, 0);
  if ( v724 )
  {
    v3 = sub_1C32D5C(v724, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF0u )
    goto LABEL_1658;
  v1->m_Items[240] = (DataMasterBase_o *)v724;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[240], (int32_t)v724, v725, v726);
  v727 = (EventBulletinBoardReleaseMaster_o *)sub_1C32E6C(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v727, 0);
  if ( v727 )
  {
    v3 = sub_1C32D5C(v727, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF1u )
    goto LABEL_1658;
  v1->m_Items[241] = (DataMasterBase_o *)v727;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[241], (int32_t)v727, v728, v729);
  v730 = (EventFactoryMaster_o *)sub_1C32E6C(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v730, 0);
  if ( v730 )
  {
    v3 = sub_1C32D5C(v730, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF2u )
    goto LABEL_1658;
  v1->m_Items[242] = (DataMasterBase_o *)v730;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[242], (int32_t)v730, v731, v732);
  v733 = (ShopGroupMaster_o *)sub_1C32E6C(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v733, 0);
  if ( v733 )
  {
    v3 = sub_1C32D5C(v733, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF3u )
    goto LABEL_1658;
  v1->m_Items[243] = (DataMasterBase_o *)v733;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[243], (int32_t)v733, v734, v735);
  v736 = (AuraEffectMaster_o *)sub_1C32E6C(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v736, 0);
  if ( v736 )
  {
    v3 = sub_1C32D5C(v736, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF4u )
    goto LABEL_1658;
  v1->m_Items[244] = (DataMasterBase_o *)v736;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[244], (int32_t)v736, v737, v738);
  v739 = (AuraEffectPosOverwriteMaster_o *)sub_1C32E6C(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v739, 0);
  if ( v739 )
  {
    v3 = sub_1C32D5C(v739, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF5u )
    goto LABEL_1658;
  v1->m_Items[245] = (DataMasterBase_o *)v739;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[245], (int32_t)v739, v740, v741);
  v742 = (UserEventMissionFixMaster_o *)sub_1C32E6C(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v742, 0);
  if ( v742 )
  {
    v3 = sub_1C32D5C(v742, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF6u )
    goto LABEL_1658;
  v1->m_Items[246] = (DataMasterBase_o *)v742;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[246], (int32_t)v742, v743, v744);
  v745 = (NotEndEventMissionFixMaster_o *)sub_1C32E6C(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v745, 0);
  if ( v745 )
  {
    v3 = sub_1C32D5C(v745, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF7u )
    goto LABEL_1658;
  v1->m_Items[247] = (DataMasterBase_o *)v745;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[247], (int32_t)v745, v746, v747);
  v748 = (EnemyMstMaster_o *)sub_1C32E6C(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v748, 0);
  if ( v748 )
  {
    v3 = sub_1C32D5C(v748, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF8u )
    goto LABEL_1658;
  v1->m_Items[248] = (DataMasterBase_o *)v748;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[248], (int32_t)v748, v749, v750);
  v751 = (EnemyMstBattleMaster_o *)sub_1C32E6C(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v751, 0);
  if ( v751 )
  {
    v3 = sub_1C32D5C(v751, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF9u )
    goto LABEL_1658;
  v1->m_Items[249] = (DataMasterBase_o *)v751;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[249], (int32_t)v751, v752, v753);
  v754 = (ServantSkillReleaseMaster_o *)sub_1C32E6C(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v754, 0);
  if ( v754 )
  {
    v3 = sub_1C32D5C(v754, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFAu )
    goto LABEL_1658;
  v1->m_Items[250] = (DataMasterBase_o *)v754;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[250], (int32_t)v754, v755, v756);
  v757 = (ServantPassiveSkillReleaseMaster_o *)sub_1C32E6C(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v757, 0);
  if ( v757 )
  {
    v3 = sub_1C32D5C(v757, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFBu )
    goto LABEL_1658;
  v1->m_Items[251] = (DataMasterBase_o *)v757;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[251], (int32_t)v757, v758, v759);
  v760 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C32E6C(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v760, 0);
  if ( v760 )
  {
    v3 = sub_1C32D5C(v760, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFCu )
    goto LABEL_1658;
  v1->m_Items[252] = (DataMasterBase_o *)v760;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[252], (int32_t)v760, v761, v762);
  v763 = (MapGimmickReleaseMaster_o *)sub_1C32E6C(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v763, 0);
  if ( v763 )
  {
    v3 = sub_1C32D5C(v763, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFDu )
    goto LABEL_1658;
  v1->m_Items[253] = (DataMasterBase_o *)v763;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[253], (int32_t)v763, v764, v765);
  v766 = (CommandCodeMaster_o *)sub_1C32E6C(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v766, 0);
  if ( v766 )
  {
    v3 = sub_1C32D5C(v766, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFEu )
    goto LABEL_1658;
  v1->m_Items[254] = (DataMasterBase_o *)v766;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[254], (int32_t)v766, v767, v768);
  v769 = (ServantCommandCodeUnlockMaster_o *)sub_1C32E6C(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v769, 0);
  if ( v769 )
  {
    v3 = sub_1C32D5C(v769, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFFu )
    goto LABEL_1658;
  v1->m_Items[255] = (DataMasterBase_o *)v769;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[255], (int32_t)v769, v770, v771);
  v772 = (UserCommandCodeMaster_o *)sub_1C32E6C(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v772, 0);
  if ( v772 )
  {
    v3 = sub_1C32D5C(v772, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x100u )
    goto LABEL_1658;
  v1->m_Items[256] = (DataMasterBase_o *)v772;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[256], (int32_t)v772, v773, v774);
  v775 = (UserCommandCodeCollectionMaster_o *)sub_1C32E6C(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v775, 0);
  if ( v775 )
  {
    v3 = sub_1C32D5C(v775, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x101u )
    goto LABEL_1658;
  v1->m_Items[257] = (DataMasterBase_o *)v775;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[257], (int32_t)v775, v776, v777);
  v778 = (UserServantCommandCodeMaster_o *)sub_1C32E6C(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v778, 0);
  if ( v778 )
  {
    v3 = sub_1C32D5C(v778, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x102u )
    goto LABEL_1658;
  v1->m_Items[258] = (DataMasterBase_o *)v778;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[258], (int32_t)v778, v779, v780);
  v781 = (UserServantCommandCardMaster_o *)sub_1C32E6C(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v781, 0);
  if ( v781 )
  {
    v3 = sub_1C32D5C(v781, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x103u )
    goto LABEL_1658;
  v1->m_Items[259] = (DataMasterBase_o *)v781;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[259], (int32_t)v781, v782, v783);
  v784 = (CommandCardRankParamMaster_o *)sub_1C32E6C(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v784, 0);
  if ( v784 )
  {
    v3 = sub_1C32D5C(v784, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x104u )
    goto LABEL_1658;
  v1->m_Items[260] = (DataMasterBase_o *)v784;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[260], (int32_t)v784, v785, v786);
  v787 = (CommandCodeSkillMaster_o *)sub_1C32E6C(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v787, 0);
  if ( v787 )
  {
    v3 = sub_1C32D5C(v787, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x105u )
    goto LABEL_1658;
  v1->m_Items[261] = (DataMasterBase_o *)v787;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[261], (int32_t)v787, v788, v789);
  v790 = (CommandCodeSkillReleaseMaster_o *)sub_1C32E6C(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v790, 0);
  if ( v790 )
  {
    v3 = sub_1C32D5C(v790, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x106u )
    goto LABEL_1658;
  v1->m_Items[262] = (DataMasterBase_o *)v790;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[262], (int32_t)v790, v791, v792);
  v793 = (CommandCodeCommentMaster_o *)sub_1C32E6C(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v793, 0);
  if ( v793 )
  {
    v3 = sub_1C32D5C(v793, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x107u )
    goto LABEL_1658;
  v1->m_Items[263] = (DataMasterBase_o *)v793;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[263], (int32_t)v793, v794, v795);
  v796 = (EventStatusMaster_o *)sub_1C32E6C(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v796, 0);
  if ( v796 )
  {
    v3 = sub_1C32D5C(v796, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x108u )
    goto LABEL_1658;
  v1->m_Items[264] = (DataMasterBase_o *)v796;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[264], (int32_t)v796, v797, v798);
  v799 = (EventStatusQuestMaster_o *)sub_1C32E6C(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v799, 0);
  if ( v799 )
  {
    v3 = sub_1C32D5C(v799, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x109u )
    goto LABEL_1658;
  v1->m_Items[265] = (DataMasterBase_o *)v799;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[265], (int32_t)v799, v800, v801);
  v802 = (CommonRestrictionMaster_o *)sub_1C32E6C(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v802, 0);
  if ( v802 )
  {
    v3 = sub_1C32D5C(v802, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Au )
    goto LABEL_1658;
  v1->m_Items[266] = (DataMasterBase_o *)v802;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[266], (int32_t)v802, v803, v804);
  v805 = (EventPointBuffMaster_o *)sub_1C32E6C(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v805, 0);
  if ( v805 )
  {
    v3 = sub_1C32D5C(v805, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Bu )
    goto LABEL_1658;
  v1->m_Items[267] = (DataMasterBase_o *)v805;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[267], (int32_t)v805, v806, v807);
  v808 = (UserFollowMaster_o *)sub_1C32E6C(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v808, 0);
  if ( v808 )
  {
    v3 = sub_1C32D5C(v808, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Cu )
    goto LABEL_1658;
  v1->m_Items[268] = (DataMasterBase_o *)v808;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[268], (int32_t)v808, v809, v810);
  v811 = (EventRewardGuideReleaseMaster_o *)sub_1C32E6C(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v811, 0);
  if ( v811 )
  {
    v3 = sub_1C32D5C(v811, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Du )
    goto LABEL_1658;
  v1->m_Items[269] = (DataMasterBase_o *)v811;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[269], (int32_t)v811, v812, v813);
  v814 = (NpcServantEquipMaster_o *)sub_1C32E6C(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v814, 0);
  if ( v814 )
  {
    v3 = sub_1C32D5C(v814, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Eu )
    goto LABEL_1658;
  v1->m_Items[270] = (DataMasterBase_o *)v814;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[270], (int32_t)v814, v815, v816);
  v817 = (EventCampaignReleaseMaster_o *)sub_1C32E6C(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v817, 0);
  if ( v817 )
  {
    v3 = sub_1C32D5C(v817, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Fu )
    goto LABEL_1658;
  v1->m_Items[271] = (DataMasterBase_o *)v817;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[271], (int32_t)v817, v818, v819);
  v820 = (ServantMaterialFolderMaster_o *)sub_1C32E6C(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v820, 0);
  if ( v820 )
  {
    v3 = sub_1C32D5C(v820, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x110u )
    goto LABEL_1658;
  v1->m_Items[272] = (DataMasterBase_o *)v820;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[272], (int32_t)v820, v821, v822);
  v823 = (EventEquipSkillReleaseMaster_o *)sub_1C32E6C(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v823, 0);
  if ( v823 )
  {
    v3 = sub_1C32D5C(v823, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x111u )
    goto LABEL_1658;
  v1->m_Items[273] = (DataMasterBase_o *)v823;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[273], (int32_t)v823, v824, v825);
  v826 = (EventPointActivityMaster_o *)sub_1C32E6C(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v826, 0);
  if ( v826 )
  {
    v3 = sub_1C32D5C(v826, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x112u )
    goto LABEL_1658;
  v1->m_Items[274] = (DataMasterBase_o *)v826;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[274], (int32_t)v826, v827, v828);
  v829 = (FunctionCategoryMaster_o *)sub_1C32E6C(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v829, 0);
  if ( v829 )
  {
    v3 = sub_1C32D5C(v829, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x113u )
    goto LABEL_1658;
  v1->m_Items[275] = (DataMasterBase_o *)v829;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[275], (int32_t)v829, v830, v831);
  v832 = (QuestPickupMaster_o *)sub_1C32E6C(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v832, 0);
  if ( v832 )
  {
    v3 = sub_1C32D5C(v832, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x114u )
    goto LABEL_1658;
  v1->m_Items[276] = (DataMasterBase_o *)v832;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[276], (int32_t)v832, v833, v834);
  v835 = (EventUiMaster_o *)sub_1C32E6C(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v835, 0);
  if ( v835 )
  {
    v3 = sub_1C32D5C(v835, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x115u )
    goto LABEL_1658;
  v1->m_Items[277] = (DataMasterBase_o *)v835;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[277], (int32_t)v835, v836, v837);
  v838 = (EventUiReleaseMaster_o *)sub_1C32E6C(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v838, 0);
  if ( v838 )
  {
    v3 = sub_1C32D5C(v838, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x116u )
    goto LABEL_1658;
  v1->m_Items[278] = (DataMasterBase_o *)v838;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[278], (int32_t)v838, v839, v840);
  v841 = (EventUiValueMaster_o *)sub_1C32E6C(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v841, 0);
  if ( v841 )
  {
    v3 = sub_1C32D5C(v841, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x117u )
    goto LABEL_1658;
  v1->m_Items[279] = (DataMasterBase_o *)v841;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[279], (int32_t)v841, v842, v843);
  v844 = (EventConquestRewardMaster_o *)sub_1C32E6C(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v844, 0);
  if ( v844 )
  {
    v3 = sub_1C32D5C(v844, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x118u )
    goto LABEL_1658;
  v1->m_Items[280] = (DataMasterBase_o *)v844;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[280], (int32_t)v844, v845, v846);
  v847 = (NpcFollowerReleaseMaster_o *)sub_1C32E6C(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v847, 0);
  if ( v847 )
  {
    v3 = sub_1C32D5C(v847, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x119u )
    goto LABEL_1658;
  v1->m_Items[281] = (DataMasterBase_o *)v847;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[281], (int32_t)v847, v848, v849);
  v850 = (EventBonusFilterMaster_o *)sub_1C32E6C(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v850, 0);
  if ( v850 )
  {
    v3 = sub_1C32D5C(v850, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Au )
    goto LABEL_1658;
  v1->m_Items[282] = (DataMasterBase_o *)v850;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[282], (int32_t)v850, v851, v852);
  v853 = (EventBonusFilterGroupInfoMaster_o *)sub_1C32E6C(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v853, 0);
  if ( v853 )
  {
    v3 = sub_1C32D5C(v853, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Bu )
    goto LABEL_1658;
  v1->m_Items[283] = (DataMasterBase_o *)v853;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[283], (int32_t)v853, v854, v855);
  v856 = (EventBonusFilterGroupMemberMaster_o *)sub_1C32E6C(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v856, 0);
  if ( v856 )
  {
    v3 = sub_1C32D5C(v856, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Cu )
    goto LABEL_1658;
  v1->m_Items[284] = (DataMasterBase_o *)v856;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[284], (int32_t)v856, v857, v858);
  v859 = (UserGachaExtraCountMaster_o *)sub_1C32E6C(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v859, 0);
  if ( v859 )
  {
    v3 = sub_1C32D5C(v859, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Du )
    goto LABEL_1658;
  v1->m_Items[285] = (DataMasterBase_o *)v859;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[285], (int32_t)v859, v860, v861);
  v862 = (PrivilegeMaster_o *)sub_1C32E6C(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v862, 0);
  if ( v862 )
  {
    v3 = sub_1C32D5C(v862, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Eu )
    goto LABEL_1658;
  v1->m_Items[286] = (DataMasterBase_o *)v862;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[286], (int32_t)v862, v863, v864);
  v865 = (UserPrivilegeMaster_o *)sub_1C32E6C(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v865, 0);
  if ( v865 )
  {
    v3 = sub_1C32D5C(v865, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Fu )
    goto LABEL_1658;
  v1->m_Items[287] = (DataMasterBase_o *)v865;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[287], (int32_t)v865, v866, v867);
  v868 = (UserQuestRouteMaster_o *)sub_1C32E6C(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v868, 0);
  if ( v868 )
  {
    v3 = sub_1C32D5C(v868, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x120u )
    goto LABEL_1658;
  v1->m_Items[288] = (DataMasterBase_o *)v868;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[288], (int32_t)v868, v869, v870);
  v871 = (EventBossStatusUiMaster_o *)sub_1C32E6C(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v871, 0);
  if ( v871 )
  {
    v3 = sub_1C32D5C(v871, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x121u )
    goto LABEL_1658;
  v1->m_Items[289] = (DataMasterBase_o *)v871;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[289], (int32_t)v871, v872, v873);
  v874 = (CommonReleaseMaster_o *)sub_1C32E6C(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v874, 0);
  if ( v874 )
  {
    v3 = sub_1C32D5C(v874, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x122u )
    goto LABEL_1658;
  v1->m_Items[290] = (DataMasterBase_o *)v874;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[290], (int32_t)v874, v875, v876);
  v877 = (QuestSpotReleaseMaster_o *)sub_1C32E6C(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v877, 0);
  if ( v877 )
  {
    v3 = sub_1C32D5C(v877, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x123u )
    goto LABEL_1658;
  v1->m_Items[291] = (DataMasterBase_o *)v877;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[291], (int32_t)v877, v878, v879);
  v880 = (VoiceMaterialCondMaster_o *)sub_1C32E6C(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v880, 0);
  if ( v880 )
  {
    v3 = sub_1C32D5C(v880, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x124u )
    goto LABEL_1658;
  v1->m_Items[292] = (DataMasterBase_o *)v880;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[292], (int32_t)v880, v881, v882);
  v883 = (ClassRelationOverwriteMaster_o *)sub_1C32E6C(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v883, 0);
  if ( v883 )
  {
    v3 = sub_1C32D5C(v883, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x125u )
    goto LABEL_1658;
  v1->m_Items[293] = (DataMasterBase_o *)v883;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[293], (int32_t)v883, v884, v885);
  v886 = (EventGroupMaster_o *)sub_1C32E6C(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v886, 0);
  if ( v886 )
  {
    v3 = sub_1C32D5C(v886, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x126u )
    goto LABEL_1658;
  v1->m_Items[294] = (DataMasterBase_o *)v886;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[294], (int32_t)v886, v887, v888);
  v889 = (TotalBoxGachaMaster_o *)sub_1C32E6C(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v889, 0);
  if ( v889 )
  {
    v3 = sub_1C32D5C(v889, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x127u )
    goto LABEL_1658;
  v1->m_Items[295] = (DataMasterBase_o *)v889;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[295], (int32_t)v889, v890, v891);
  v892 = (ServantTreasureDeviceDamageMaster_o *)sub_1C32E6C(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v892, 0);
  if ( v892 )
  {
    v3 = sub_1C32D5C(v892, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x128u )
    goto LABEL_1658;
  v1->m_Items[296] = (DataMasterBase_o *)v892;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[296], (int32_t)v892, v893, v894);
  v895 = (UserEventServantFatigueMaster_o *)sub_1C32E6C(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v895, 0);
  if ( v895 )
  {
    v3 = sub_1C32D5C(v895, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x129u )
    goto LABEL_1658;
  v1->m_Items[297] = (DataMasterBase_o *)v895;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[297], (int32_t)v895, v896, v897);
  v898 = (EventRewardBgMaster_o *)sub_1C32E6C(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v898, 0);
  if ( v898 )
  {
    v3 = sub_1C32D5C(v898, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Au )
    goto LABEL_1658;
  v1->m_Items[298] = (DataMasterBase_o *)v898;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[298], (int32_t)v898, v899, v900);
  v901 = (EventFatigueRecoveryMaster_o *)sub_1C32E6C(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v901, 0);
  if ( v901 )
  {
    v3 = sub_1C32D5C(v901, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Bu )
    goto LABEL_1658;
  v1->m_Items[299] = (DataMasterBase_o *)v901;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[299], (int32_t)v901, v902, v903);
  v904 = (EventBoostItemUsedMaster_o *)sub_1C32E6C(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v904, 0);
  if ( v904 )
  {
    v3 = sub_1C32D5C(v904, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Cu )
    goto LABEL_1658;
  v1->m_Items[300] = (DataMasterBase_o *)v904;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[300], (int32_t)v904, v905, v906);
  v907 = (StatusEffectPosOverwriteMaster_o *)sub_1C32E6C(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v907, 0);
  if ( v907 )
  {
    v3 = sub_1C32D5C(v907, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Du )
    goto LABEL_1658;
  v1->m_Items[301] = (DataMasterBase_o *)v907;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[301], (int32_t)v907, v908, v909);
  v910 = (QuestPhaseDetailAddMaster_o *)sub_1C32E6C(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v910, 0);
  if ( v910 )
  {
    v3 = sub_1C32D5C(v910, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Eu )
    goto LABEL_1658;
  v1->m_Items[302] = (DataMasterBase_o *)v910;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[302], (int32_t)v910, v911, v912);
  v913 = (VoiceClosedMessageMaster_o *)sub_1C32E6C(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v913, 0);
  if ( v913 )
  {
    v3 = sub_1C32D5C(v913, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Fu )
    goto LABEL_1658;
  v1->m_Items[303] = (DataMasterBase_o *)v913;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[303], (int32_t)v913, v914, v915);
  v916 = (ReprintStageMaster_o *)sub_1C32E6C(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v916, 0);
  if ( v916 )
  {
    v3 = sub_1C32D5C(v916, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x130u )
    goto LABEL_1658;
  v1->m_Items[304] = (DataMasterBase_o *)v916;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[304], (int32_t)v916, v917, v918);
  v919 = (UserCombineExpMaster_o *)sub_1C32E6C(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v919, 0);
  if ( v919 )
  {
    v3 = sub_1C32D5C(v919, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x131u )
    goto LABEL_1658;
  v1->m_Items[305] = (DataMasterBase_o *)v919;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[305], (int32_t)v919, v920, v921);
  v922 = (EventBoardGameCellMaster_o *)sub_1C32E6C(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v922, 0);
  if ( v922 )
  {
    v3 = sub_1C32D5C(v922, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x132u )
    goto LABEL_1658;
  v1->m_Items[306] = (DataMasterBase_o *)v922;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[306], (int32_t)v922, v923, v924);
  v925 = (EventBoardGameTokenMaster_o *)sub_1C32E6C(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v925, 0);
  if ( v925 )
  {
    v3 = sub_1C32D5C(v925, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x133u )
    goto LABEL_1658;
  v1->m_Items[307] = (DataMasterBase_o *)v925;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[307], (int32_t)v925, v926, v927);
  v928 = (EventBoardGameTokenRewardMaster_o *)sub_1C32E6C(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v928, 0);
  if ( v928 )
  {
    v3 = sub_1C32D5C(v928, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x134u )
    goto LABEL_1658;
  v1->m_Items[308] = (DataMasterBase_o *)v928;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[308], (int32_t)v928, v929, v930);
  v931 = (UserEventBoardGameTokenMaster_o *)sub_1C32E6C(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v931, 0);
  if ( v931 )
  {
    v3 = sub_1C32D5C(v931, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x135u )
    goto LABEL_1658;
  v1->m_Items[309] = (DataMasterBase_o *)v931;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[309], (int32_t)v931, v932, v933);
  v934 = (ServantAnimationOverwriteMaster_o *)sub_1C32E6C(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v934, 0);
  if ( v934 )
  {
    v3 = sub_1C32D5C(v934, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x136u )
    goto LABEL_1658;
  v1->m_Items[310] = (DataMasterBase_o *)v934;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[310], (int32_t)v934, v935, v936);
  v937 = (OpeningMovieMaster_o *)sub_1C32E6C(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v937, 0);
  if ( v937 )
  {
    v3 = sub_1C32D5C(v937, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x137u )
    goto LABEL_1658;
  v1->m_Items[311] = (DataMasterBase_o *)v937;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[311], (int32_t)v937, v938, v939);
  v940 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C32E6C(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v940, 0);
  if ( v940 )
  {
    v3 = sub_1C32D5C(v940, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x138u )
    goto LABEL_1658;
  v1->m_Items[312] = (DataMasterBase_o *)v940;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[312], (int32_t)v940, v941, v942);
  v943 = (PickupUserFollowerMaster_o *)sub_1C32E6C(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v943, 0);
  if ( v943 )
  {
    v3 = sub_1C32D5C(v943, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x139u )
    goto LABEL_1658;
  v1->m_Items[313] = (DataMasterBase_o *)v943;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[313], (int32_t)v943, v944, v945);
  v946 = (ServantCollectionMaster_o *)sub_1C32E6C(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v946, 0);
  if ( v946 )
  {
    v3 = sub_1C32D5C(v946, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Au )
    goto LABEL_1658;
  v1->m_Items[314] = (DataMasterBase_o *)v946;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[314], (int32_t)v946, v947, v948);
  v949 = (GachaBehaviorMaster_o *)sub_1C32E6C(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v949, 0);
  if ( v949 )
  {
    v3 = sub_1C32D5C(v949, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Bu )
    goto LABEL_1658;
  v1->m_Items[315] = (DataMasterBase_o *)v949;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[315], (int32_t)v949, v950, v951);
  v952 = (EventQuestCooltimeMaster_o *)sub_1C32E6C(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v952, 0);
  if ( v952 )
  {
    v3 = sub_1C32D5C(v952, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Cu )
    goto LABEL_1658;
  v1->m_Items[316] = (DataMasterBase_o *)v952;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[316], (int32_t)v952, v953, v954);
  v955 = (UserEventQuestCooltimeMaster_o *)sub_1C32E6C(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v955, 0);
  if ( v955 )
  {
    v3 = sub_1C32D5C(v955, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Du )
    goto LABEL_1658;
  v1->m_Items[317] = (DataMasterBase_o *)v955;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[317], (int32_t)v955, v956, v957);
  v958 = (BoostMaster_o *)sub_1C32E6C(BoostMaster_TypeInfo);
  BoostMaster___ctor(v958, 0);
  if ( v958 )
  {
    v3 = sub_1C32D5C(v958, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Eu )
    goto LABEL_1658;
  v1->m_Items[318] = (DataMasterBase_o *)v958;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[318], (int32_t)v958, v959, v960);
  v961 = (WarBoardMaster_o *)sub_1C32E6C(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v961, 0);
  if ( v961 )
  {
    v3 = sub_1C32D5C(v961, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Fu )
    goto LABEL_1658;
  v1->m_Items[319] = (DataMasterBase_o *)v961;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[319], (int32_t)v961, v962, v963);
  v964 = (WarBoardSquareMaster_o *)sub_1C32E6C(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v964, 0);
  if ( v964 )
  {
    v3 = sub_1C32D5C(v964, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x140u )
    goto LABEL_1658;
  v1->m_Items[320] = (DataMasterBase_o *)v964;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[320], (int32_t)v964, v965, v966);
  v967 = (WarBoardRoadMaster_o *)sub_1C32E6C(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v967, 0);
  if ( v967 )
  {
    v3 = sub_1C32D5C(v967, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x141u )
    goto LABEL_1658;
  v1->m_Items[321] = (DataMasterBase_o *)v967;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[321], (int32_t)v967, v968, v969);
  v970 = (WarBoardStageMaster_o *)sub_1C32E6C(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v970, 0);
  if ( v970 )
  {
    v3 = sub_1C32D5C(v970, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x142u )
    goto LABEL_1658;
  v1->m_Items[322] = (DataMasterBase_o *)v970;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[322], (int32_t)v970, v971, v972);
  v973 = (WarBoardActionPointMaster_o *)sub_1C32E6C(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v973, 0);
  if ( v973 )
  {
    v3 = sub_1C32D5C(v973, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x143u )
    goto LABEL_1658;
  v1->m_Items[323] = (DataMasterBase_o *)v973;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[323], (int32_t)v973, v974, v975);
  v976 = (WarBoardActionTrendMaster_o *)sub_1C32E6C(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v976, 0);
  if ( v976 )
  {
    v3 = sub_1C32D5C(v976, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x144u )
    goto LABEL_1658;
  v1->m_Items[324] = (DataMasterBase_o *)v976;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[324], (int32_t)v976, v977, v978);
  v979 = (WarBoardTacticalTrendMaster_o *)sub_1C32E6C(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v979, 0);
  if ( v979 )
  {
    v3 = sub_1C32D5C(v979, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x145u )
    goto LABEL_1658;
  v1->m_Items[325] = (DataMasterBase_o *)v979;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[325], (int32_t)v979, v980, v981);
  v982 = (WarBoardStageLayoutMaster_o *)sub_1C32E6C(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v982, 0);
  if ( v982 )
  {
    v3 = sub_1C32D5C(v982, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x146u )
    goto LABEL_1658;
  v1->m_Items[326] = (DataMasterBase_o *)v982;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[326], (int32_t)v982, v983, v984);
  v985 = (WarBoardStageNpcMaster_o *)sub_1C32E6C(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v985, 0);
  if ( v985 )
  {
    v3 = sub_1C32D5C(v985, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x147u )
    goto LABEL_1658;
  v1->m_Items[327] = (DataMasterBase_o *)v985;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[327], (int32_t)v985, v986, v987);
  v988 = (WarBoardStageWallMaster_o *)sub_1C32E6C(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v988, 0);
  if ( v988 )
  {
    v3 = sub_1C32D5C(v988, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x148u )
    goto LABEL_1658;
  v1->m_Items[328] = (DataMasterBase_o *)v988;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[328], (int32_t)v988, v989, v990);
  v991 = (WarBoardAIMaster_o *)sub_1C32E6C(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v991, 0);
  if ( v991 )
  {
    v3 = sub_1C32D5C(v991, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x149u )
    goto LABEL_1658;
  v1->m_Items[329] = (DataMasterBase_o *)v991;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[329], (int32_t)v991, v992, v993);
  v994 = (WarBoardRatingBaseMaster_o *)sub_1C32E6C(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v994, 0);
  if ( v994 )
  {
    v3 = sub_1C32D5C(v994, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Au )
    goto LABEL_1658;
  v1->m_Items[330] = (DataMasterBase_o *)v994;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[330], (int32_t)v994, v995, v996);
  v997 = (WarBoardRatingOffsetMaster_o *)sub_1C32E6C(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v997, 0);
  if ( v997 )
  {
    v3 = sub_1C32D5C(v997, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Bu )
    goto LABEL_1658;
  v1->m_Items[331] = (DataMasterBase_o *)v997;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[331], (int32_t)v997, v998, v999);
  v1000 = (WarBoardItemMaster_o *)sub_1C32E6C(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1000, 0);
  if ( v1000 )
  {
    v3 = sub_1C32D5C(v1000, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Cu )
    goto LABEL_1658;
  v1->m_Items[332] = (DataMasterBase_o *)v1000;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[332], (int32_t)v1000, v1001, v1002);
  v1003 = (WarBoardTreasureMaster_o *)sub_1C32E6C(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1003, 0);
  if ( v1003 )
  {
    v3 = sub_1C32D5C(v1003, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Du )
    goto LABEL_1658;
  v1->m_Items[333] = (DataMasterBase_o *)v1003;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[333], (int32_t)v1003, v1004, v1005);
  v1006 = (WarBoardQuestMaster_o *)sub_1C32E6C(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1006, 0);
  if ( v1006 )
  {
    v3 = sub_1C32D5C(v1006, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Eu )
    goto LABEL_1658;
  v1->m_Items[334] = (DataMasterBase_o *)v1006;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[334], (int32_t)v1006, v1007, v1008);
  v1009 = (WarBoardDataMaster_o *)sub_1C32E6C(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1009, 0);
  if ( v1009 )
  {
    v3 = sub_1C32D5C(v1009, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Fu )
    goto LABEL_1658;
  v1->m_Items[335] = (DataMasterBase_o *)v1009;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[335], (int32_t)v1009, v1010, v1011);
  v1012 = (WarBoardIndividualityClassMaster_o *)sub_1C32E6C(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1012, 0);
  if ( v1012 )
  {
    v3 = sub_1C32D5C(v1012, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x150u )
    goto LABEL_1658;
  v1->m_Items[336] = (DataMasterBase_o *)v1012;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[336], (int32_t)v1012, v1013, v1014);
  v1015 = (WarBoardActionTrendConditionMaster_o *)sub_1C32E6C(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1015, 0);
  if ( v1015 )
  {
    v3 = sub_1C32D5C(v1015, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x151u )
    goto LABEL_1658;
  v1->m_Items[337] = (DataMasterBase_o *)v1015;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[337], (int32_t)v1015, v1016, v1017);
  v1018 = (WarBoardActionPointClassMaster_o *)sub_1C32E6C(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1018, 0);
  if ( v1018 )
  {
    v3 = sub_1C32D5C(v1018, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x152u )
    goto LABEL_1658;
  v1->m_Items[338] = (DataMasterBase_o *)v1018;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[338], (int32_t)v1018, v1019, v1020);
  v1021 = (EventPanelMapMaster_o *)sub_1C32E6C(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1021, 0);
  if ( v1021 )
  {
    v3 = sub_1C32D5C(v1021, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x153u )
    goto LABEL_1658;
  v1->m_Items[339] = (DataMasterBase_o *)v1021;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[339], (int32_t)v1021, v1022, v1023);
  v1024 = (EventPanelMapDetailMaster_o *)sub_1C32E6C(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1024, 0);
  if ( v1024 )
  {
    v3 = sub_1C32D5C(v1024, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x154u )
    goto LABEL_1658;
  v1->m_Items[340] = (DataMasterBase_o *)v1024;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[340], (int32_t)v1024, v1025, v1026);
  v1027 = (EventPanelSpotMaster_o *)sub_1C32E6C(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1027, 0);
  if ( v1027 )
  {
    v3 = sub_1C32D5C(v1027, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x155u )
    goto LABEL_1658;
  v1->m_Items[341] = (DataMasterBase_o *)v1027;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[341], (int32_t)v1027, v1028, v1029);
  v1030 = (EventPanelScanMaster_o *)sub_1C32E6C(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1030, 0);
  if ( v1030 )
  {
    v3 = sub_1C32D5C(v1030, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x156u )
    goto LABEL_1658;
  v1->m_Items[342] = (DataMasterBase_o *)v1030;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[342], (int32_t)v1030, v1031, v1032);
  v1033 = (CommonConsumeMaster_o *)sub_1C32E6C(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1033, 0);
  if ( v1033 )
  {
    v3 = sub_1C32D5C(v1033, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x157u )
    goto LABEL_1658;
  v1->m_Items[343] = (DataMasterBase_o *)v1033;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[343], (int32_t)v1033, v1034, v1035);
  v1036 = (UserEventMapMaster_o *)sub_1C32E6C(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1036, 0);
  if ( v1036 )
  {
    v3 = sub_1C32D5C(v1036, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x158u )
    goto LABEL_1658;
  v1->m_Items[344] = (DataMasterBase_o *)v1036;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[344], (int32_t)v1036, v1037, v1038);
  v1039 = (UserEventSpotMaster_o *)sub_1C32E6C(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1039, 0);
  if ( v1039 )
  {
    v3 = sub_1C32D5C(v1039, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x159u )
    goto LABEL_1658;
  v1->m_Items[345] = (DataMasterBase_o *)v1039;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[345], (int32_t)v1039, v1040, v1041);
  v1042 = (WarGroupMaster_o *)sub_1C32E6C(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1042, 0);
  if ( v1042 )
  {
    v3 = sub_1C32D5C(v1042, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Au )
    goto LABEL_1658;
  v1->m_Items[346] = (DataMasterBase_o *)v1042;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[346], (int32_t)v1042, v1043, v1044);
  v1045 = (ServantLimitImageMaster_o *)sub_1C32E6C(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1045, 0);
  if ( v1045 )
  {
    v3 = sub_1C32D5C(v1045, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Bu )
    goto LABEL_1658;
  v1->m_Items[347] = (DataMasterBase_o *)v1045;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[347], (int32_t)v1045, v1046, v1047);
  v1048 = (FriendshipQuestDialogInfoMaster_o *)sub_1C32E6C(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1048, 0);
  if ( v1048 )
  {
    v3 = sub_1C32D5C(v1048, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Cu )
    goto LABEL_1658;
  v1->m_Items[348] = (DataMasterBase_o *)v1048;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[348], (int32_t)v1048, v1049, v1050);
  v1051 = (QuestRestrictionInfoMaster_o *)sub_1C32E6C(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1051, 0);
  if ( v1051 )
  {
    v3 = sub_1C32D5C(v1051, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Du )
    goto LABEL_1658;
  v1->m_Items[349] = (DataMasterBase_o *)v1051;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[349], (int32_t)v1051, v1052, v1053);
  v1054 = (AssistMaster_o *)sub_1C32E6C(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1054, 0);
  if ( v1054 )
  {
    v3 = sub_1C32D5C(v1054, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Eu )
    goto LABEL_1658;
  v1->m_Items[350] = (DataMasterBase_o *)v1054;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[350], (int32_t)v1054, v1055, v1056);
  v1057 = (WarBoardEffectMaster_o *)sub_1C32E6C(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1057, 0);
  if ( v1057 )
  {
    v3 = sub_1C32D5C(v1057, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Fu )
    goto LABEL_1658;
  v1->m_Items[351] = (DataMasterBase_o *)v1057;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[351], (int32_t)v1057, v1058, v1059);
  v1060 = (WarBoardOnboardSkillMaster_o *)sub_1C32E6C(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1060, 0);
  if ( v1060 )
  {
    v3 = sub_1C32D5C(v1060, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x160u )
    goto LABEL_1658;
  v1->m_Items[352] = (DataMasterBase_o *)v1060;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[352], (int32_t)v1060, v1061, v1062);
  v1063 = (BeforeBirthDayMaster_o *)sub_1C32E6C(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1063, 0);
  if ( v1063 )
  {
    v3 = sub_1C32D5C(v1063, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x161u )
    goto LABEL_1658;
  v1->m_Items[353] = (DataMasterBase_o *)v1063;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[353], (int32_t)v1063, v1064, v1065);
  v1066 = (LoginQuestMaster_o *)sub_1C32E6C(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1066, 0);
  if ( v1066 )
  {
    v3 = sub_1C32D5C(v1066, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x162u )
    goto LABEL_1658;
  v1->m_Items[354] = (DataMasterBase_o *)v1066;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[354], (int32_t)v1066, v1067, v1068);
  v1069 = (EventCombineCostumeMaster_o *)sub_1C32E6C(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1069, 0);
  if ( v1069 )
  {
    v3 = sub_1C32D5C(v1069, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x163u )
    goto LABEL_1658;
  v1->m_Items[355] = (DataMasterBase_o *)v1069;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[355], (int32_t)v1069, v1070, v1071);
  v1072 = (WarBoardStagePieceDetailMaster_o *)sub_1C32E6C(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1072, 0);
  if ( v1072 )
  {
    v3 = sub_1C32D5C(v1072, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x164u )
    goto LABEL_1658;
  v1->m_Items[356] = (DataMasterBase_o *)v1072;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[356], (int32_t)v1072, v1073, v1074);
  v1075 = (ServantTreasureDeviceAddMaster_o *)sub_1C32E6C(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1075, 0);
  if ( v1075 )
  {
    v3 = sub_1C32D5C(v1075, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x165u )
    goto LABEL_1658;
  v1->m_Items[357] = (DataMasterBase_o *)v1075;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[357], (int32_t)v1075, v1076, v1077);
  v1078 = (SkillAddMaster_o *)sub_1C32E6C(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1078, 0);
  if ( v1078 )
  {
    v3 = sub_1C32D5C(v1078, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x166u )
    goto LABEL_1658;
  v1->m_Items[358] = (DataMasterBase_o *)v1078;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[358], (int32_t)v1078, v1079, v1080);
  v1081 = (ServantLvDetailMaster_o *)sub_1C32E6C(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1081, 0);
  if ( v1081 )
  {
    v3 = sub_1C32D5C(v1081, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x167u )
    goto LABEL_1658;
  v1->m_Items[359] = (DataMasterBase_o *)v1081;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[359], (int32_t)v1081, v1082, v1083);
  v1084 = (GachaAppendMaster_o *)sub_1C32E6C(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1084, 0);
  if ( v1084 )
  {
    v3 = sub_1C32D5C(v1084, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x168u )
    goto LABEL_1658;
  v1->m_Items[360] = (DataMasterBase_o *)v1084;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[360], (int32_t)v1084, v1085, v1086);
  v1087 = (UserGachaDrawLogMaster_o *)sub_1C32E6C(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1087, 0);
  if ( v1087 )
  {
    v3 = sub_1C32D5C(v1087, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x169u )
    goto LABEL_1658;
  v1->m_Items[361] = (DataMasterBase_o *)v1087;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[361], (int32_t)v1087, v1088, v1089);
  v1090 = (ServantAppendPassiveSkillMaster_o *)sub_1C32E6C(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1090, 0);
  if ( v1090 )
  {
    v3 = sub_1C32D5C(v1090, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Au )
    goto LABEL_1658;
  v1->m_Items[362] = (DataMasterBase_o *)v1090;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[362], (int32_t)v1090, v1091, v1092);
  v1093 = (UserServantAppendPassiveSkillMaster_o *)sub_1C32E6C(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1093, 0);
  if ( v1093 )
  {
    v3 = sub_1C32D5C(v1093, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Bu )
    goto LABEL_1658;
  v1->m_Items[363] = (DataMasterBase_o *)v1093;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[363], (int32_t)v1093, v1094, v1095);
  v1096 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C32E6C(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1096, 0);
  if ( v1096 )
  {
    v3 = sub_1C32D5C(v1096, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Cu )
    goto LABEL_1658;
  v1->m_Items[364] = (DataMasterBase_o *)v1096;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[364], (int32_t)v1096, v1097, v1098);
  v1099 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C32E6C(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1099, 0);
  if ( v1099 )
  {
    v3 = sub_1C32D5C(v1099, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Du )
    goto LABEL_1658;
  v1->m_Items[365] = (DataMasterBase_o *)v1099;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[365], (int32_t)v1099, v1100, v1101);
  v1102 = (CombineAppendPassiveSkillMaster_o *)sub_1C32E6C(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1102, 0);
  if ( v1102 )
  {
    v3 = sub_1C32D5C(v1102, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Eu )
    goto LABEL_1658;
  v1->m_Items[366] = (DataMasterBase_o *)v1102;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[366], (int32_t)v1102, v1103, v1104);
  v1105 = (SvtCoinMaster_o *)sub_1C32E6C(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1105, 0);
  if ( v1105 )
  {
    v3 = sub_1C32D5C(v1105, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Fu )
    goto LABEL_1658;
  v1->m_Items[367] = (DataMasterBase_o *)v1105;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[367], (int32_t)v1105, v1106, v1107);
  v1108 = (UserSvtCoinMaster_o *)sub_1C32E6C(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1108, 0);
  if ( v1108 )
  {
    v3 = sub_1C32D5C(v1108, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x170u )
    goto LABEL_1658;
  v1->m_Items[368] = (DataMasterBase_o *)v1108;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[368], (int32_t)v1108, v1109, v1110);
  v1111 = (ServantAddMaster_o *)sub_1C32E6C(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1111, 0);
  if ( v1111 )
  {
    v3 = sub_1C32D5C(v1111, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x171u )
    goto LABEL_1658;
  v1->m_Items[369] = (DataMasterBase_o *)v1111;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[369], (int32_t)v1111, v1112, v1113);
  v1114 = (TreasureBoxMaster_o *)sub_1C32E6C(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1114, 0);
  if ( v1114 )
  {
    v3 = sub_1C32D5C(v1114, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x172u )
    goto LABEL_1658;
  v1->m_Items[370] = (DataMasterBase_o *)v1114;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[370], (int32_t)v1114, v1115, v1116);
  v1117 = (TreasureBoxGiftMaster_o *)sub_1C32E6C(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1117, 0);
  if ( v1117 )
  {
    v3 = sub_1C32D5C(v1117, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x173u )
    goto LABEL_1658;
  v1->m_Items[371] = (DataMasterBase_o *)v1117;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[371], (int32_t)v1117, v1118, v1119);
  v1120 = (TreasureBoxTalkMaster_o *)sub_1C32E6C(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1120, 0);
  if ( v1120 )
  {
    v3 = sub_1C32D5C(v1120, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x174u )
    goto LABEL_1658;
  v1->m_Items[372] = (DataMasterBase_o *)v1120;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[372], (int32_t)v1120, v1121, v1122);
  v1123 = (UserEventExpeditionMaster_o *)sub_1C32E6C(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1123, 0);
  if ( v1123 )
  {
    v3 = sub_1C32D5C(v1123, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x175u )
    goto LABEL_1658;
  v1->m_Items[373] = (DataMasterBase_o *)v1123;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[373], (int32_t)v1123, v1124, v1125);
  v1126 = (EventExpeditionMaster_o *)sub_1C32E6C(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1126, 0);
  if ( v1126 )
  {
    v3 = sub_1C32D5C(v1126, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x176u )
    goto LABEL_1658;
  v1->m_Items[374] = (DataMasterBase_o *)v1126;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[374], (int32_t)v1126, v1127, v1128);
  v1129 = (EventExpeditionPieceMaster_o *)sub_1C32E6C(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1129, 0);
  if ( v1129 )
  {
    v3 = sub_1C32D5C(v1129, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x177u )
    goto LABEL_1658;
  v1->m_Items[375] = (DataMasterBase_o *)v1129;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[375], (int32_t)v1129, v1130, v1131);
  v1132 = (EventRecipeMaster_o *)sub_1C32E6C(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1132, 0);
  if ( v1132 )
  {
    v3 = sub_1C32D5C(v1132, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x178u )
    goto LABEL_1658;
  v1->m_Items[376] = (DataMasterBase_o *)v1132;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[376], (int32_t)v1132, v1133, v1134);
  v1135 = (EventRecipeGiftMaster_o *)sub_1C32E6C(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1135, 0);
  if ( v1135 )
  {
    v3 = sub_1C32D5C(v1135, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x179u )
    goto LABEL_1658;
  v1->m_Items[377] = (DataMasterBase_o *)v1135;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[377], (int32_t)v1135, v1136, v1137);
  v1138 = (UserEventFortificationMaster_o *)sub_1C32E6C(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1138, 0);
  if ( v1138 )
  {
    v3 = sub_1C32D5C(v1138, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Au )
    goto LABEL_1658;
  v1->m_Items[378] = (DataMasterBase_o *)v1138;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[378], (int32_t)v1138, v1139, v1140);
  v1141 = (EventFortificationMaster_o *)sub_1C32E6C(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1141, 0);
  if ( v1141 )
  {
    v3 = sub_1C32D5C(v1141, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Bu )
    goto LABEL_1658;
  v1->m_Items[379] = (DataMasterBase_o *)v1141;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[379], (int32_t)v1141, v1142, v1143);
  v1144 = (EventFortificationDetailMaster_o *)sub_1C32E6C(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1144, 0);
  if ( v1144 )
  {
    v3 = sub_1C32D5C(v1144, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Cu )
    goto LABEL_1658;
  v1->m_Items[380] = (DataMasterBase_o *)v1144;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[380], (int32_t)v1144, v1145, v1146);
  v1147 = (EventFortificationSvtMaster_o *)sub_1C32E6C(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1147, 0);
  if ( v1147 )
  {
    v3 = sub_1C32D5C(v1147, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Du )
    goto LABEL_1658;
  v1->m_Items[381] = (DataMasterBase_o *)v1147;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[381], (int32_t)v1147, v1148, v1149);
  v1150 = (UserServantVoicePlayedMaster_o *)sub_1C32E6C(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1150, 0);
  if ( v1150 )
  {
    v3 = sub_1C32D5C(v1150, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Eu )
    goto LABEL_1658;
  v1->m_Items[382] = (DataMasterBase_o *)v1150;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[382], (int32_t)v1150, v1151, v1152);
  v1153 = (UpdateProfileDialogInfoMaster_o *)sub_1C32E6C(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1153, 0);
  if ( v1153 )
  {
    v3 = sub_1C32D5C(v1153, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Fu )
    goto LABEL_1658;
  v1->m_Items[383] = (DataMasterBase_o *)v1153;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[383], (int32_t)v1153, v1154, v1155);
  v1156 = (SvtMaterialTdMaster_o *)sub_1C32E6C(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1156, 0);
  if ( v1156 )
  {
    v3 = sub_1C32D5C(v1156, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x180u )
    goto LABEL_1658;
  v1->m_Items[384] = (DataMasterBase_o *)v1156;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[384], (int32_t)v1156, v1157, v1158);
  v1159 = (BattleMasterImageMaster_o *)sub_1C32E6C(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1159, 0);
  if ( v1159 )
  {
    v3 = sub_1C32D5C(v1159, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x181u )
    goto LABEL_1658;
  v1->m_Items[385] = (DataMasterBase_o *)v1159;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[385], (int32_t)v1159, v1160, v1161);
  v1162 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C32E6C(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1162, 0);
  if ( v1162 )
  {
    v3 = sub_1C32D5C(v1162, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x182u )
    goto LABEL_1658;
  v1->m_Items[386] = (DataMasterBase_o *)v1162;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[386], (int32_t)v1162, v1163, v1164);
  v1165 = (UserEventRandomMissionMaster_o *)sub_1C32E6C(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1165, 0);
  if ( v1165 )
  {
    v3 = sub_1C32D5C(v1165, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x183u )
    goto LABEL_1658;
  v1->m_Items[387] = (DataMasterBase_o *)v1165;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[387], (int32_t)v1165, v1166, v1167);
  v1168 = (EventProgressValueMaster_o *)sub_1C32E6C(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1168, 0);
  if ( v1168 )
  {
    v3 = sub_1C32D5C(v1168, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x184u )
    goto LABEL_1658;
  v1->m_Items[388] = (DataMasterBase_o *)v1168;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[388], (int32_t)v1168, v1169, v1170);
  v1171 = (SvtMultiPortraitMaster_o *)sub_1C32E6C(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1171, 0);
  if ( v1171 )
  {
    v3 = sub_1C32D5C(v1171, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x185u )
    goto LABEL_1658;
  v1->m_Items[389] = (DataMasterBase_o *)v1171;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[389], (int32_t)v1171, v1172, v1173);
  v1174 = (EventRandomMissionMaster_o *)sub_1C32E6C(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1174, 0);
  if ( v1174 )
  {
    v3 = sub_1C32D5C(v1174, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x186u )
    goto LABEL_1658;
  v1->m_Items[390] = (DataMasterBase_o *)v1174;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[390], (int32_t)v1174, v1175, v1176);
  v1177 = (UserGachaHistoryMaster_o *)sub_1C32E6C(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1177, 0);
  if ( v1177 )
  {
    v3 = sub_1C32D5C(v1177, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x187u )
    goto LABEL_1658;
  v1->m_Items[391] = (DataMasterBase_o *)v1177;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[391], (int32_t)v1177, v1178, v1179);
  v1180 = (UserCoinRoomMaster_o *)sub_1C32E6C(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1180, 0);
  if ( v1180 )
  {
    v3 = sub_1C32D5C(v1180, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x188u )
    goto LABEL_1658;
  v1->m_Items[392] = (DataMasterBase_o *)v1180;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[392], (int32_t)v1180, v1181, v1182);
  v1183 = (EventBuddyPointMaster_o *)sub_1C32E6C(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1183, 0);
  if ( v1183 )
  {
    v3 = sub_1C32D5C(v1183, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x189u )
    goto LABEL_1658;
  v1->m_Items[393] = (DataMasterBase_o *)v1183;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[393], (int32_t)v1183, v1184, v1185);
  v1186 = (EventServantPointRankMaster_o *)sub_1C32E6C(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1186, 0);
  if ( v1186 )
  {
    v3 = sub_1C32D5C(v1186, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Au )
    goto LABEL_1658;
  v1->m_Items[394] = (DataMasterBase_o *)v1186;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[394], (int32_t)v1186, v1187, v1188);
  v1189 = (UserEventServantPointMaster_o *)sub_1C32E6C(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1189, 0);
  if ( v1189 )
  {
    v3 = sub_1C32D5C(v1189, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Bu )
    goto LABEL_1658;
  v1->m_Items[395] = (DataMasterBase_o *)v1189;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[395], (int32_t)v1189, v1190, v1191);
  v1192 = (FieldMotionMaster_o *)sub_1C32E6C(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1192, 0);
  if ( v1192 )
  {
    v3 = sub_1C32D5C(v1192, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Cu )
    goto LABEL_1658;
  v1->m_Items[396] = (DataMasterBase_o *)v1192;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[396], (int32_t)v1192, v1193, v1194);
  v1195 = (UserDeleteReservationMaster_o *)sub_1C32E6C(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1195, 0);
  if ( v1195 )
  {
    v3 = sub_1C32D5C(v1195, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Du )
    goto LABEL_1658;
  v1->m_Items[397] = (DataMasterBase_o *)v1195;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[397], (int32_t)v1195, v1196, v1197);
  v1198 = (ServantScriptMultipleMaster_o *)sub_1C32E6C(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1198, 0);
  if ( v1198 )
  {
    v3 = sub_1C32D5C(v1198, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Eu )
    goto LABEL_1658;
  v1->m_Items[398] = (DataMasterBase_o *)v1198;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[398], (int32_t)v1198, v1199, v1200);
  v1201 = (EquipAddMaster_o *)sub_1C32E6C(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1201, 0);
  if ( v1201 )
  {
    v3 = sub_1C32D5C(v1201, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Fu )
    goto LABEL_1658;
  v1->m_Items[399] = (DataMasterBase_o *)v1201;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[399], (int32_t)v1201, v1202, v1203);
  v1204 = (QuestReleaseOverwriteMaster_o *)sub_1C32E6C(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1204, 0);
  if ( v1204 )
  {
    v3 = sub_1C32D5C(v1204, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x190u )
    goto LABEL_1658;
  v1->m_Items[400] = (DataMasterBase_o *)v1204;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[400], (int32_t)v1204, v1205, v1206);
  v1207 = (UserEventAlloutBattleMaster_o *)sub_1C32E6C(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1207, 0);
  if ( v1207 )
  {
    v3 = sub_1C32D5C(v1207, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x191u )
    goto LABEL_1658;
  v1->m_Items[401] = (DataMasterBase_o *)v1207;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[401], (int32_t)v1207, v1208, v1209);
  v1210 = (QuestScriptMaterialNextMaster_o *)sub_1C32E6C(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1210, 0);
  if ( v1210 )
  {
    v3 = sub_1C32D5C(v1210, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x192u )
    goto LABEL_1658;
  v1->m_Items[402] = (DataMasterBase_o *)v1210;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[402], (int32_t)v1210, v1211, v1212);
  v1213 = (EventDiggingMaster_o *)sub_1C32E6C(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1213, 0);
  if ( v1213 )
  {
    v3 = sub_1C32D5C(v1213, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x193u )
    goto LABEL_1658;
  v1->m_Items[403] = (DataMasterBase_o *)v1213;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[403], (int32_t)v1213, v1214, v1215);
  v1216 = (EventDiggingBlockMaster_o *)sub_1C32E6C(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1216, 0);
  if ( v1216 )
  {
    v3 = sub_1C32D5C(v1216, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x194u )
    goto LABEL_1658;
  v1->m_Items[404] = (DataMasterBase_o *)v1216;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[404], (int32_t)v1216, v1217, v1218);
  v1219 = (EventDiggingRewardMaster_o *)sub_1C32E6C(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1219, 0);
  if ( v1219 )
  {
    v3 = sub_1C32D5C(v1219, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x195u )
    goto LABEL_1658;
  v1->m_Items[405] = (DataMasterBase_o *)v1219;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[405], (int32_t)v1219, v1220, v1221);
  v1222 = (UserEventDiggingMaster_o *)sub_1C32E6C(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1222, 0);
  if ( v1222 )
  {
    v3 = sub_1C32D5C(v1222, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x196u )
    goto LABEL_1658;
  v1->m_Items[406] = (DataMasterBase_o *)v1222;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[406], (int32_t)v1222, v1223, v1224);
  v1225 = (BattleMessageMaster_o *)sub_1C32E6C(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1225, 0);
  if ( v1225 )
  {
    v3 = sub_1C32D5C(v1225, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x197u )
    goto LABEL_1658;
  v1->m_Items[407] = (DataMasterBase_o *)v1225;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[407], (int32_t)v1225, v1226, v1227);
  v1228 = (BattleMessageGroupMaster_o *)sub_1C32E6C(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1228, 0);
  if ( v1228 )
  {
    v3 = sub_1C32D5C(v1228, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x198u )
    goto LABEL_1658;
  v1->m_Items[408] = (DataMasterBase_o *)v1228;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[408], (int32_t)v1228, v1229, v1230);
  v1231 = (UserNpcSvtRecordMaster_o *)sub_1C32E6C(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1231, 0);
  if ( v1231 )
  {
    v3 = sub_1C32D5C(v1231, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x199u )
    goto LABEL_1658;
  v1->m_Items[409] = (DataMasterBase_o *)v1231;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[409], (int32_t)v1231, v1232, v1233);
  v1234 = (BuffTypeDetailMaster_o *)sub_1C32E6C(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1234, 0);
  if ( v1234 )
  {
    v3 = sub_1C32D5C(v1234, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Au )
    goto LABEL_1658;
  v1->m_Items[410] = (DataMasterBase_o *)v1234;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[410], (int32_t)v1234, v1235, v1236);
  v1237 = (WarBoardMessageMaster_o *)sub_1C32E6C(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1237, 0);
  if ( v1237 )
  {
    v3 = sub_1C32D5C(v1237, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Bu )
    goto LABEL_1658;
  v1->m_Items[411] = (DataMasterBase_o *)v1237;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[411], (int32_t)v1237, v1238, v1239);
  v1240 = (WarBoardPartySkillMaster_o *)sub_1C32E6C(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1240, 0);
  if ( v1240 )
  {
    v3 = sub_1C32D5C(v1240, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Cu )
    goto LABEL_1658;
  v1->m_Items[412] = (DataMasterBase_o *)v1240;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[412], (int32_t)v1240, v1241, v1242);
  v1243 = (WarBoardMessageScriptMaster_o *)sub_1C32E6C(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1243, 0);
  if ( v1243 )
  {
    v3 = sub_1C32D5C(v1243, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Du )
    goto LABEL_1658;
  v1->m_Items[413] = (DataMasterBase_o *)v1243;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[413], (int32_t)v1243, v1244, v1245);
  v1246 = (WarQuestSelectionMaster_o *)sub_1C32E6C(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1246, 0);
  if ( v1246 )
  {
    v3 = sub_1C32D5C(v1246, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Eu )
    goto LABEL_1658;
  v1->m_Items[414] = (DataMasterBase_o *)v1246;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[414], (int32_t)v1246, v1247, v1248);
  v1249 = (WarBoardStageDetailMaster_o *)sub_1C32E6C(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1249, 0);
  if ( v1249 )
  {
    v3 = sub_1C32D5C(v1249, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Fu )
    goto LABEL_1658;
  v1->m_Items[415] = (DataMasterBase_o *)v1249;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[415], (int32_t)v1249, v1250, v1251);
  v1252 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C32E6C(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1252, 0);
  if ( v1252 )
  {
    v3 = sub_1C32D5C(v1252, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A0u )
    goto LABEL_1658;
  v1->m_Items[416] = (DataMasterBase_o *)v1252;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[416], (int32_t)v1252, v1253, v1254);
  v1255 = (QuestScriptBranchMaterialMaster_o *)sub_1C32E6C(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1255, 0);
  if ( v1255 )
  {
    v3 = sub_1C32D5C(v1255, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A1u )
    goto LABEL_1658;
  v1->m_Items[417] = (DataMasterBase_o *)v1255;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[417], (int32_t)v1255, v1256, v1257);
  v1258 = (AdCheckPointMaster_o *)sub_1C32E6C(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1258, 0);
  if ( v1258 )
  {
    v3 = sub_1C32D5C(v1258, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A2u )
    goto LABEL_1658;
  v1->m_Items[418] = (DataMasterBase_o *)v1258;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[418], (int32_t)v1258, v1259, v1260);
  v1261 = (GiftDetailMaster_o *)sub_1C32E6C(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1261, 0);
  if ( v1261 )
  {
    v3 = sub_1C32D5C(v1261, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A3u )
    goto LABEL_1658;
  v1->m_Items[419] = (DataMasterBase_o *)v1261;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[419], (int32_t)v1261, v1262, v1263);
  v1264 = (CombineLimitGiftMaster_o *)sub_1C32E6C(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1264, 0);
  if ( v1264 )
  {
    v3 = sub_1C32D5C(v1264, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A4u )
    goto LABEL_1658;
  v1->m_Items[420] = (DataMasterBase_o *)v1264;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[420], (int32_t)v1264, v1265, v1266);
  v1267 = (EventCooltimeRewardMaster_o *)sub_1C32E6C(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1267, 0);
  if ( v1267 )
  {
    v3 = sub_1C32D5C(v1267, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A5u )
    goto LABEL_1658;
  v1->m_Items[421] = (DataMasterBase_o *)v1267;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[421], (int32_t)v1267, v1268, v1269);
  v1270 = (UserEventCooltimeRewardMaster_o *)sub_1C32E6C(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1270, 0);
  if ( v1270 )
  {
    v3 = sub_1C32D5C(v1270, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A6u )
    goto LABEL_1658;
  v1->m_Items[422] = (DataMasterBase_o *)v1270;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[422], (int32_t)v1270, v1271, v1272);
  v1273 = (ClassBoardBaseMaster_o *)sub_1C32E6C(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1273, 0);
  if ( v1273 )
  {
    v3 = sub_1C32D5C(v1273, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A7u )
    goto LABEL_1658;
  v1->m_Items[423] = (DataMasterBase_o *)v1273;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[423], (int32_t)v1273, v1274, v1275);
  v1276 = (ClassBoardLockMaster_o *)sub_1C32E6C(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1276, 0);
  if ( v1276 )
  {
    v3 = sub_1C32D5C(v1276, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A8u )
    goto LABEL_1658;
  v1->m_Items[424] = (DataMasterBase_o *)v1276;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[424], (int32_t)v1276, v1277, v1278);
  v1279 = (ClassBoardSquareMaster_o *)sub_1C32E6C(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1279, 0);
  if ( v1279 )
  {
    v3 = sub_1C32D5C(v1279, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A9u )
    goto LABEL_1658;
  v1->m_Items[425] = (DataMasterBase_o *)v1279;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[425], (int32_t)v1279, v1280, v1281);
  v1282 = (ClassBoardLineMaster_o *)sub_1C32E6C(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1282, 0);
  if ( v1282 )
  {
    v3 = sub_1C32D5C(v1282, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AAu )
    goto LABEL_1658;
  v1->m_Items[426] = (DataMasterBase_o *)v1282;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[426], (int32_t)v1282, v1283, v1284);
  v1285 = (UserClassBoardSquareMaster_o *)sub_1C32E6C(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1285, 0);
  if ( v1285 )
  {
    v3 = sub_1C32D5C(v1285, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ABu )
    goto LABEL_1658;
  v1->m_Items[427] = (DataMasterBase_o *)v1285;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[427], (int32_t)v1285, v1286, v1287);
  v1288 = (ServantCardAddMaster_o *)sub_1C32E6C(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1288, 0);
  if ( v1288 )
  {
    v3 = sub_1C32D5C(v1288, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ACu )
    goto LABEL_1658;
  v1->m_Items[428] = (DataMasterBase_o *)v1288;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[428], (int32_t)v1288, v1289, v1290);
  v1291 = (MapLayerMaster_o *)sub_1C32E6C(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1291, 0);
  if ( v1291 )
  {
    v3 = sub_1C32D5C(v1291, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ADu )
    goto LABEL_1658;
  v1->m_Items[429] = (DataMasterBase_o *)v1291;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[429], (int32_t)v1291, v1292, v1293);
  v1294 = (SpotLayerMaster_o *)sub_1C32E6C(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1294, 0);
  if ( v1294 )
  {
    v3 = sub_1C32D5C(v1294, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AEu )
    goto LABEL_1658;
  v1->m_Items[430] = (DataMasterBase_o *)v1294;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[430], (int32_t)v1294, v1295, v1296);
  v1297 = (MapGimmickLayerMaster_o *)sub_1C32E6C(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1297, 0);
  if ( v1297 )
  {
    v3 = sub_1C32D5C(v1297, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AFu )
    goto LABEL_1658;
  v1->m_Items[431] = (DataMasterBase_o *)v1297;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[431], (int32_t)v1297, v1298, v1299);
  v1300 = (EventDataLostBattleMaster_o *)sub_1C32E6C(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1300, 0);
  if ( v1300 )
  {
    v3 = sub_1C32D5C(v1300, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B0u )
    goto LABEL_1658;
  v1->m_Items[432] = (DataMasterBase_o *)v1300;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[432], (int32_t)v1300, v1301, v1302);
  v1303 = (EventDataLostBattleResetMaster_o *)sub_1C32E6C(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1303, 0);
  if ( v1303 )
  {
    v3 = sub_1C32D5C(v1303, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B1u )
    goto LABEL_1658;
  v1->m_Items[433] = (DataMasterBase_o *)v1303;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[433], (int32_t)v1303, v1304, v1305);
  v1306 = (UserEventDataLostMaster_o *)sub_1C32E6C(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1306, 0);
  if ( v1306 )
  {
    v3 = sub_1C32D5C(v1306, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B2u )
    goto LABEL_1658;
  v1->m_Items[434] = (DataMasterBase_o *)v1306;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[434], (int32_t)v1306, v1307, v1308);
  v1309 = (QuestHintMaster_o *)sub_1C32E6C(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1309, 0);
  if ( v1309 )
  {
    v3 = sub_1C32D5C(v1309, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B3u )
    goto LABEL_1658;
  v1->m_Items[435] = (DataMasterBase_o *)v1309;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[435], (int32_t)v1309, v1310, v1311);
  v1312 = (FuncTypeDetailMaster_o *)sub_1C32E6C(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1312, 0);
  if ( v1312 )
  {
    v3 = sub_1C32D5C(v1312, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B4u )
    goto LABEL_1658;
  v1->m_Items[436] = (DataMasterBase_o *)v1312;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[436], (int32_t)v1312, v1313, v1314);
  v1315 = (BuffConvertMaster_o *)sub_1C32E6C(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1315, 0);
  if ( v1315 )
  {
    v3 = sub_1C32D5C(v1315, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B5u )
    goto LABEL_1658;
  v1->m_Items[437] = (DataMasterBase_o *)v1315;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[437], (int32_t)v1315, v1316, v1317);
  v1318 = (SkillGroupMaster_o *)sub_1C32E6C(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1318, 0);
  if ( v1318 )
  {
    v3 = sub_1C32D5C(v1318, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B6u )
    goto LABEL_1658;
  v1->m_Items[438] = (DataMasterBase_o *)v1318;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[438], (int32_t)v1318, v1319, v1320);
  v1321 = (SkillGroupOverwriteMaster_o *)sub_1C32E6C(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1321, 0);
  if ( v1321 )
  {
    v3 = sub_1C32D5C(v1321, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B7u )
    goto LABEL_1658;
  v1->m_Items[439] = (DataMasterBase_o *)v1321;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[439], (int32_t)v1321, v1322, v1323);
  v1324 = (SkillIndividualityMaster_o *)sub_1C32E6C(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1324, 0);
  if ( v1324 )
  {
    v3 = sub_1C32D5C(v1324, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B8u )
    goto LABEL_1658;
  v1->m_Items[440] = (DataMasterBase_o *)v1324;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[440], (int32_t)v1324, v1325, v1326);
  v1327 = (RestrictionBaseMaster_o *)sub_1C32E6C(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1327, 0);
  if ( v1327 )
  {
    v3 = sub_1C32D5C(v1327, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B9u )
    goto LABEL_1658;
  v1->m_Items[441] = (DataMasterBase_o *)v1327;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[441], (int32_t)v1327, v1328, v1329);
  v1330 = (RestrictionSlotMaster_o *)sub_1C32E6C(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1330, 0);
  if ( v1330 )
  {
    v3 = sub_1C32D5C(v1330, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BAu )
    goto LABEL_1658;
  v1->m_Items[442] = (DataMasterBase_o *)v1330;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[442], (int32_t)v1330, v1331, v1332);
  v1333 = (RestrictionSlotDetailMaster_o *)sub_1C32E6C(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1333, 0);
  if ( v1333 )
  {
    v3 = sub_1C32D5C(v1333, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BBu )
    goto LABEL_1658;
  v1->m_Items[443] = (DataMasterBase_o *)v1333;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[443], (int32_t)v1333, v1334, v1335);
  v1336 = (RestrictionMessageMaster_o *)sub_1C32E6C(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1336, 0);
  if ( v1336 )
  {
    v3 = sub_1C32D5C(v1336, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BCu )
    goto LABEL_1658;
  v1->m_Items[444] = (DataMasterBase_o *)v1336;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[444], (int32_t)v1336, v1337, v1338);
  v1339 = (RestrictionWholeMaster_o *)sub_1C32E6C(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1339, 0);
  if ( v1339 )
  {
    v3 = sub_1C32D5C(v1339, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BDu )
    goto LABEL_1658;
  v1->m_Items[445] = (DataMasterBase_o *)v1339;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[445], (int32_t)v1339, v1340, v1341);
  v1342 = (FuncDispMaster_o *)sub_1C32E6C(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1342, 0);
  if ( v1342 )
  {
    v3 = sub_1C32D5C(v1342, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BEu )
    goto LABEL_1658;
  v1->m_Items[446] = (DataMasterBase_o *)v1342;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[446], (int32_t)v1342, v1343, v1344);
  v1345 = (ClassBoardCommandSpellMaster_o *)sub_1C32E6C(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1345, 0);
  if ( v1345 )
  {
    v3 = sub_1C32D5C(v1345, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BFu )
    goto LABEL_1658;
  v1->m_Items[447] = (DataMasterBase_o *)v1345;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[447], (int32_t)v1345, v1346, v1347);
  v1348 = (ClassBoardClassMaster_o *)sub_1C32E6C(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1348, 0);
  if ( v1348 )
  {
    v3 = sub_1C32D5C(v1348, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C0u )
    goto LABEL_1658;
  v1->m_Items[448] = (DataMasterBase_o *)v1348;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[448], (int32_t)v1348, v1349, v1350);
  v1351 = (EventCommandAssistMaster_o *)sub_1C32E6C(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1351, 0);
  if ( v1351 )
  {
    v3 = sub_1C32D5C(v1351, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C1u )
    goto LABEL_1658;
  v1->m_Items[449] = (DataMasterBase_o *)v1351;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[449], (int32_t)v1351, v1352, v1353);
  v1354 = (EventMissionGroupMaster_o *)sub_1C32E6C(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1354, 0);
  if ( v1354 )
  {
    v3 = sub_1C32D5C(v1354, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C2u )
    goto LABEL_1658;
  v1->m_Items[450] = (DataMasterBase_o *)v1354;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[450], (int32_t)v1354, v1355, v1356);
  v1357 = (CombineLimitReleaseMaster_o *)sub_1C32E6C(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1357, 0);
  if ( v1357 )
  {
    v3 = sub_1C32D5C(v1357, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C3u )
    goto LABEL_1658;
  v1->m_Items[451] = (DataMasterBase_o *)v1357;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[451], (int32_t)v1357, v1358, v1359);
  v1360 = (HeelPortraitMaster_o *)sub_1C32E6C(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1360, 0);
  if ( v1360 )
  {
    v3 = sub_1C32D5C(v1360, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C4u )
    goto LABEL_1658;
  v1->m_Items[452] = (DataMasterBase_o *)v1360;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[452], (int32_t)v1360, v1361, v1362);
  v1363 = (UserHeelPortraitMaster_o *)sub_1C32E6C(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1363, 0);
  if ( v1363 )
  {
    v3 = sub_1C32D5C(v1363, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C5u )
    goto LABEL_1658;
  v1->m_Items[453] = (DataMasterBase_o *)v1363;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[453], (int32_t)v1363, v1364, v1365);
  v1366 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C32E6C(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1366, 0);
  if ( v1366 )
  {
    v3 = sub_1C32D5C(v1366, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C6u )
    goto LABEL_1658;
  v1->m_Items[454] = (DataMasterBase_o *)v1366;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[454], (int32_t)v1366, v1367, v1368);
  v1369 = (NpcServantFollowerIndividualityMaster_o *)sub_1C32E6C(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1369, 0);
  if ( v1369 )
  {
    v3 = sub_1C32D5C(v1369, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C7u )
    goto LABEL_1658;
  v1->m_Items[455] = (DataMasterBase_o *)v1369;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[455], (int32_t)v1369, v1370, v1371);
  v1372 = (GachaExtraGiftMaster_o *)sub_1C32E6C(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1372, 0);
  if ( v1372 )
  {
    v3 = sub_1C32D5C(v1372, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C8u )
    goto LABEL_1658;
  v1->m_Items[456] = (DataMasterBase_o *)v1372;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[456], (int32_t)v1372, v1373, v1374);
  v1375 = (EventMuralMaster_o *)sub_1C32E6C(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1375, 0);
  if ( v1375 )
  {
    v3 = sub_1C32D5C(v1375, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C9u )
    goto LABEL_1658;
  v1->m_Items[457] = (DataMasterBase_o *)v1375;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[457], (int32_t)v1375, v1376, v1377);
  v1378 = (ViewWaveEnemyMaster_o *)sub_1C32E6C(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1378, 0);
  if ( v1378 )
  {
    v3 = sub_1C32D5C(v1378, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CAu )
    goto LABEL_1658;
  v1->m_Items[458] = (DataMasterBase_o *)v1378;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[458], (int32_t)v1378, v1379, v1380);
  v1381 = (BlankEarthSpotNavimenuMaster_o *)sub_1C32E6C(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1381, 0);
  if ( v1381 )
  {
    v3 = sub_1C32D5C(v1381, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CBu )
    goto LABEL_1658;
  v1->m_Items[459] = (DataMasterBase_o *)v1381;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[459], (int32_t)v1381, v1382, v1383);
  v1384 = (BlankEarthGimmickMaster_o *)sub_1C32E6C(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1384, 0);
  if ( v1384 )
  {
    v3 = sub_1C32D5C(v1384, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CCu )
    goto LABEL_1658;
  v1->m_Items[460] = (DataMasterBase_o *)v1384;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[460], (int32_t)v1384, v1385, v1386);
  v1387 = (TerminalOverwriteMaster_o *)sub_1C32E6C(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1387, 0);
  if ( v1387 )
  {
    v3 = sub_1C32D5C(v1387, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CDu )
    goto LABEL_1658;
  v1->m_Items[461] = (DataMasterBase_o *)v1387;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[461], (int32_t)v1387, v1388, v1389);
  v1390 = (UserExchangeSvtMaster_o *)sub_1C32E6C(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1390, 0);
  if ( v1390 )
  {
    v3 = sub_1C32D5C(v1390, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CEu )
    goto LABEL_1658;
  v1->m_Items[462] = (DataMasterBase_o *)v1390;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[462], (int32_t)v1390, v1391, v1392);
  v1393 = (WarBoardCommonReleaseMaster_o *)sub_1C32E6C(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1393, 0);
  if ( v1393 )
  {
    v3 = sub_1C32D5C(v1393, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CFu )
    goto LABEL_1658;
  v1->m_Items[463] = (DataMasterBase_o *)v1393;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[463], (int32_t)v1393, v1394, v1395);
  v1396 = (WarBoardEventMaster_o *)sub_1C32E6C(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1396, 0);
  if ( v1396 )
  {
    v3 = sub_1C32D5C(v1396, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D0u )
    goto LABEL_1658;
  v1->m_Items[464] = (DataMasterBase_o *)v1396;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[464], (int32_t)v1396, v1397, v1398);
  v1399 = (WarBoardEventScriptMaster_o *)sub_1C32E6C(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1399, 0);
  if ( v1399 )
  {
    v3 = sub_1C32D5C(v1399, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D1u )
    goto LABEL_1658;
  v1->m_Items[465] = (DataMasterBase_o *)v1399;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[465], (int32_t)v1399, v1400, v1401);
  v1402 = (WarBoardStageBossMaster_o *)sub_1C32E6C(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1402, 0);
  if ( v1402 )
  {
    v3 = sub_1C32D5C(v1402, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D2u )
    goto LABEL_1658;
  v1->m_Items[466] = (DataMasterBase_o *)v1402;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[466], (int32_t)v1402, v1403, v1404);
  v1405 = (WarBoardSquareIndexGroupMaster_o *)sub_1C32E6C(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1405, 0);
  if ( v1405 )
  {
    v3 = sub_1C32D5C(v1405, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D3u )
    goto LABEL_1658;
  v1->m_Items[467] = (DataMasterBase_o *)v1405;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[467], (int32_t)v1405, v1406, v1407);
  v1408 = (WarBoardActionTrendGroupMaster_o *)sub_1C32E6C(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1408, 0);
  if ( v1408 )
  {
    v3 = sub_1C32D5C(v1408, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D4u )
    goto LABEL_1658;
  v1->m_Items[468] = (DataMasterBase_o *)v1408;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[468], (int32_t)v1408, v1409, v1410);
  v1411 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C32E6C(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1411, 0);
  if ( v1411 )
  {
    v3 = sub_1C32D5C(v1411, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D5u )
    goto LABEL_1658;
  v1->m_Items[469] = (DataMasterBase_o *)v1411;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[469], (int32_t)v1411, v1412, v1413);
  v1414 = (WarBoardReinforcementsMaster_o *)sub_1C32E6C(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1414, 0);
  if ( v1414 )
  {
    v3 = sub_1C32D5C(v1414, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D6u )
    goto LABEL_1658;
  v1->m_Items[470] = (DataMasterBase_o *)v1414;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[470], (int32_t)v1414, v1415, v1416);
  v1417 = (WarBoardStageReinforcementsMaster_o *)sub_1C32E6C(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1417, 0);
  if ( v1417 )
  {
    v3 = sub_1C32D5C(v1417, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D7u )
    goto LABEL_1658;
  v1->m_Items[471] = (DataMasterBase_o *)v1417;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[471], (int32_t)v1417, v1418, v1419);
  v1420 = (WarBoardFutureActionTrendMaster_o *)sub_1C32E6C(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1420, 0);
  if ( v1420 )
  {
    v3 = sub_1C32D5C(v1420, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D8u )
    goto LABEL_1658;
  v1->m_Items[472] = (DataMasterBase_o *)v1420;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[472], (int32_t)v1420, v1421, v1422);
  v1423 = (ServantProfilePushMaster_o *)sub_1C32E6C(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1423, 0);
  if ( v1423 )
  {
    v3 = sub_1C32D5C(v1423, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D9u )
    goto LABEL_1658;
  v1->m_Items[473] = (DataMasterBase_o *)v1423;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[473], (int32_t)v1423, v1424, v1425);
  v1426 = (MapGimmickPathMaster_o *)sub_1C32E6C(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1426, 0);
  if ( v1426 )
  {
    v3 = sub_1C32D5C(v1426, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DAu )
    goto LABEL_1658;
  v1->m_Items[474] = (DataMasterBase_o *)v1426;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[474], (int32_t)v1426, v1427, v1428);
  v1429 = (MapGimmickPathReleaseMaster_o *)sub_1C32E6C(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1429, 0);
  if ( v1429 )
  {
    v3 = sub_1C32D5C(v1429, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DBu )
    goto LABEL_1658;
  v1->m_Items[475] = (DataMasterBase_o *)v1429;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[475], (int32_t)v1429, v1430, v1431);
  v1432 = (ServantOverwriteMaster_o *)sub_1C32E6C(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1432, 0);
  if ( v1432 )
  {
    v3 = sub_1C32D5C(v1432, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DCu )
    goto LABEL_1658;
  v1->m_Items[476] = (DataMasterBase_o *)v1432;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[476], (int32_t)v1432, v1433, v1434);
  v1435 = (IndividualityPolicyMaster_o *)sub_1C32E6C(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1435, 0);
  if ( v1435 )
  {
    v3 = sub_1C32D5C(v1435, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DDu )
    goto LABEL_1658;
  v1->m_Items[477] = (DataMasterBase_o *)v1435;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[477], (int32_t)v1435, v1436, v1437);
  v1438 = (IndividualityPersonalityMaster_o *)sub_1C32E6C(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1438, 0);
  if ( v1438 )
  {
    v3 = sub_1C32D5C(v1438, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DEu )
    goto LABEL_1658;
  v1->m_Items[478] = (DataMasterBase_o *)v1438;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[478], (int32_t)v1438, v1439, v1440);
  v1441 = (AttriMaster_o *)sub_1C32E6C(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1441, 0);
  if ( v1441 )
  {
    v3 = sub_1C32D5C(v1441, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DFu )
    goto LABEL_1658;
  v1->m_Items[479] = (DataMasterBase_o *)v1441;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[479], (int32_t)v1441, v1442, v1443);
  v1444 = (ServantVoicePatternMaster_o *)sub_1C32E6C(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1444, 0);
  if ( v1444 )
  {
    v3 = sub_1C32D5C(v1444, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E0u )
    goto LABEL_1658;
  v1->m_Items[480] = (DataMasterBase_o *)v1444;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[480], (int32_t)v1444, v1445, v1446);
  v1447 = (UserGameCommonMaster_o *)sub_1C32E6C(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1447, 0);
  if ( v1447 )
  {
    v3 = sub_1C32D5C(v1447, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E1u )
    goto LABEL_1658;
  v1->m_Items[481] = (DataMasterBase_o *)v1447;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[481], (int32_t)v1447, v1448, v1449);
  v1450 = (ServantPhotoMaster_o *)sub_1C32E6C(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1450, 0);
  if ( v1450 )
  {
    v3 = sub_1C32D5C(v1450, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E2u )
    goto LABEL_1658;
  v1->m_Items[482] = (DataMasterBase_o *)v1450;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[482], (int32_t)v1450, v1451, v1452);
  v1453 = (MasterPhotoMaster_o *)sub_1C32E6C(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1453, 0);
  if ( v1453 )
  {
    v3 = sub_1C32D5C(v1453, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E3u )
    goto LABEL_1658;
  v1->m_Items[483] = (DataMasterBase_o *)v1453;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[483], (int32_t)v1453, v1454, v1455);
  v1456 = (PhotoFrameMaster_o *)sub_1C32E6C(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v1456, 0);
  if ( v1456 )
  {
    v3 = sub_1C32D5C(v1456, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E4u )
    goto LABEL_1658;
  v1->m_Items[484] = (DataMasterBase_o *)v1456;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[484], (int32_t)v1456, v1457, v1458);
  v1459 = (WarMessageMaster_o *)sub_1C32E6C(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1459, 0);
  if ( v1459 )
  {
    v3 = sub_1C32D5C(v1459, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E5u )
    goto LABEL_1658;
  v1->m_Items[485] = (DataMasterBase_o *)v1459;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[485], (int32_t)v1459, v1460, v1461);
  v1462 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C32E6C(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1462, 0);
  if ( v1462 )
  {
    v3 = sub_1C32D5C(v1462, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E6u )
    goto LABEL_1658;
  v1->m_Items[486] = (DataMasterBase_o *)v1462;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[486], (int32_t)v1462, v1463, v1464);
  v1465 = (ExcludeMotionMaster_o *)sub_1C32E6C(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1465, 0);
  if ( v1465 )
  {
    v3 = sub_1C32D5C(v1465, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E7u )
    goto LABEL_1658;
  v1->m_Items[487] = (DataMasterBase_o *)v1465;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[487], (int32_t)v1465, v1466, v1467);
  v1468 = (UserInterruptionQuestMaster_o *)sub_1C32E6C(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1468, 0);
  if ( v1468 )
  {
    v3 = sub_1C32D5C(v1468, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E8u )
    goto LABEL_1658;
  v1->m_Items[488] = (DataMasterBase_o *)v1468;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[488], (int32_t)v1468, v1469, v1470);
  v1471 = (ServantTransformMaster_o *)sub_1C32E6C(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1471, 0);
  if ( v1471 )
  {
    v3 = sub_1C32D5C(v1471, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E9u )
    goto LABEL_1658;
  v1->m_Items[489] = (DataMasterBase_o *)v1471;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[489], (int32_t)v1471, v1472, v1473);
  v1474 = (MapUpdateScheduleMaster_o *)sub_1C32E6C(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1474, 0);
  if ( v1474 )
  {
    v3 = sub_1C32D5C(v1474, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EAu )
    goto LABEL_1658;
  v1->m_Items[490] = (DataMasterBase_o *)v1474;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[490], (int32_t)v1474, v1475, v1476);
  v1477 = (QuestPhasePresentMaster_o *)sub_1C32E6C(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1477, 0);
  if ( v1477 )
  {
    v3 = sub_1C32D5C(v1477, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EBu )
    goto LABEL_1658;
  v1->m_Items[491] = (DataMasterBase_o *)v1477;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[491], (int32_t)v1477, v1478, v1479);
  v1480 = (UserAccountLinkageMaster_o *)sub_1C32E6C(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1480, 0);
  if ( v1480 )
  {
    v3 = sub_1C32D5C(v1480, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ECu )
    goto LABEL_1658;
  v1->m_Items[492] = (DataMasterBase_o *)v1480;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[492], (int32_t)v1480, v1481, v1482);
  v1483 = (MissionNaviTransitionMaster_o *)sub_1C32E6C(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1483, 0);
  if ( v1483 )
  {
    v3 = sub_1C32D5C(v1483, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EDu )
    goto LABEL_1658;
  v1->m_Items[493] = (DataMasterBase_o *)v1483;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[493], (int32_t)v1483, v1484, v1485);
  v1486 = (MissionNaviQuestMaster_o *)sub_1C32E6C(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1486, 0);
  if ( v1486 )
  {
    v3 = sub_1C32D5C(v1486, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EEu )
    goto LABEL_1658;
  v1->m_Items[494] = (DataMasterBase_o *)v1486;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[494], (int32_t)v1486, v1487, v1488);
  v1489 = (EventTradeGoodsMaster_o *)sub_1C32E6C(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1489, 0);
  if ( v1489 )
  {
    v3 = sub_1C32D5C(v1489, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EFu )
    goto LABEL_1658;
  v1->m_Items[495] = (DataMasterBase_o *)v1489;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[495], (int32_t)v1489, v1490, v1491);
  v1492 = (EventTradeStoreMaster_o *)sub_1C32E6C(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1492, 0);
  if ( v1492 )
  {
    v3 = sub_1C32D5C(v1492, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F0u )
    goto LABEL_1658;
  v1->m_Items[496] = (DataMasterBase_o *)v1492;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[496], (int32_t)v1492, v1493, v1494);
  v1495 = (EventTradePickupMaster_o *)sub_1C32E6C(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1495, 0);
  if ( v1495 )
  {
    v3 = sub_1C32D5C(v1495, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F1u )
    goto LABEL_1658;
  v1->m_Items[497] = (DataMasterBase_o *)v1495;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[497], (int32_t)v1495, v1496, v1497);
  v1498 = (UserEventTradeMaster_o *)sub_1C32E6C(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1498, 0);
  if ( v1498 )
  {
    v3 = sub_1C32D5C(v1498, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F2u )
    goto LABEL_1658;
  v1->m_Items[498] = (DataMasterBase_o *)v1498;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[498], (int32_t)v1498, v1499, v1500);
  v1501 = (PaymentHistoryMaster_o *)sub_1C32E6C(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1501, 0);
  if ( v1501 )
  {
    v3 = sub_1C32D5C(v1501, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F3u )
    goto LABEL_1658;
  v1->m_Items[499] = (DataMasterBase_o *)v1501;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[499], (int32_t)v1501, v1502, v1503);
  v1504 = (UserExternalPaymentStoneMaster_o *)sub_1C32E6C(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1504, 0);
  if ( v1504 )
  {
    v3 = sub_1C32D5C(v1504, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F4u )
    goto LABEL_1658;
  v1->m_Items[500] = (DataMasterBase_o *)v1504;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[500], (int32_t)v1504, v1505, v1506);
  v1507 = (QuestPhaseIndividualityMaster_o *)sub_1C32E6C(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1507, 0);
  if ( v1507 )
  {
    v3 = sub_1C32D5C(v1507, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F5u )
    goto LABEL_1658;
  v1->m_Items[501] = (DataMasterBase_o *)v1507;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[501], (int32_t)v1507, v1508, v1509);
  v1510 = (ViewGachaFeaturedServantMaster_o *)sub_1C32E6C(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1510, 0);
  if ( v1510 )
  {
    v3 = sub_1C32D5C(v1510, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F6u )
    goto LABEL_1658;
  v1->m_Items[502] = (DataMasterBase_o *)v1510;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[502], (int32_t)v1510, v1511, v1512);
  v1513 = (UserGachaPickupCollateralMaster_o *)sub_1C32E6C(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1513, 0);
  if ( v1513 )
  {
    v3 = sub_1C32D5C(v1513, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F7u )
    goto LABEL_1658;
  v1->m_Items[503] = (DataMasterBase_o *)v1513;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[503], (int32_t)v1513, v1514, v1515);
  v1516 = (GachaPickupCollateralMaster_o *)sub_1C32E6C(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1516, 0);
  if ( v1516 )
  {
    v3 = sub_1C32D5C(v1516, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F8u )
    goto LABEL_1658;
  v1->m_Items[504] = (DataMasterBase_o *)v1516;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[504], (int32_t)v1516, v1517, v1518);
  v1519 = (GachaPickupCollateralGroupMaster_o *)sub_1C32E6C(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1519, 0);
  if ( v1519 )
  {
    v3 = sub_1C32D5C(v1519, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F9u )
    goto LABEL_1658;
  v1->m_Items[505] = (DataMasterBase_o *)v1519;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[505], (int32_t)v1519, v1520, v1521);
  v1522 = (BattlePointMaster_o *)sub_1C32E6C(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1522, 0);
  if ( v1522 )
  {
    v3 = sub_1C32D5C(v1522, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FAu )
    goto LABEL_1658;
  v1->m_Items[506] = (DataMasterBase_o *)v1522;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[506], (int32_t)v1522, v1523, v1524);
  v1525 = (BattlePointPhaseMaster_o *)sub_1C32E6C(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1525, 0);
  if ( v1525 )
  {
    v3 = sub_1C32D5C(v1525, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FBu )
    goto LABEL_1658;
  v1->m_Items[507] = (DataMasterBase_o *)v1525;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[507], (int32_t)v1525, v1526, v1527);
  v1528 = (ServantBattlePointMaster_o *)sub_1C32E6C(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1528, 0);
  if ( v1528 )
  {
    v3 = sub_1C32D5C(v1528, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FCu )
    goto LABEL_1658;
  v1->m_Items[508] = (DataMasterBase_o *)v1528;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[508], (int32_t)v1528, v1529, v1530);
  v1531 = (EffectMovieMaster_o *)sub_1C32E6C(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1531, 0);
  if ( v1531 )
  {
    v3 = sub_1C32D5C(v1531, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FDu )
    goto LABEL_1658;
  v1->m_Items[509] = (DataMasterBase_o *)v1531;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[509], (int32_t)v1531, v1532, v1533);
  v1534 = (PaymentLimitMaster_o *)sub_1C32E6C(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1534, 0);
  if ( v1534 )
  {
    v3 = sub_1C32D5C(v1534, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FEu )
    goto LABEL_1658;
  v1->m_Items[510] = (DataMasterBase_o *)v1534;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[510], (int32_t)v1534, v1535, v1536);
  v1537 = (UserPaymentLimitMaster_o *)sub_1C32E6C(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1537, 0);
  if ( v1537 )
  {
    v3 = sub_1C32D5C(v1537, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FFu )
    goto LABEL_1658;
  v1->m_Items[511] = (DataMasterBase_o *)v1537;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[511], (int32_t)v1537, v1538, v1539);
  v1540 = (RoadmapMaster_o *)sub_1C32E6C(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1540, 0);
  if ( v1540 )
  {
    v3 = sub_1C32D5C(v1540, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x200u )
    goto LABEL_1658;
  v1->m_Items[512] = (DataMasterBase_o *)v1540;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[512], (int32_t)v1540, v1541, v1542);
  v1543 = (UserRecommendSupportMaster_o *)sub_1C32E6C(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1543, 0);
  if ( v1543 )
  {
    v3 = sub_1C32D5C(v1543, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x201u )
    goto LABEL_1658;
  v1->m_Items[513] = (DataMasterBase_o *)v1543;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[513], (int32_t)v1543, v1544, v1545);
  v1546 = (RecommendSupportQuestMaster_o *)sub_1C32E6C(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1546, 0);
  if ( v1546 )
  {
    v3 = sub_1C32D5C(v1546, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x202u )
    goto LABEL_1658;
  v1->m_Items[514] = (DataMasterBase_o *)v1546;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[514], (int32_t)v1546, v1547, v1548);
  v1549 = (RecommendAdviceMessageMaster_o *)sub_1C32E6C(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1549, 0);
  if ( v1549 )
  {
    v3 = sub_1C32D5C(v1549, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x203u )
    goto LABEL_1658;
  v1->m_Items[515] = (DataMasterBase_o *)v1549;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[515], (int32_t)v1549, v1550, v1551);
  v1552 = (UserRecommendFollowerMaster_o *)sub_1C32E6C(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1552, 0);
  if ( v1552 )
  {
    v3 = sub_1C32D5C(v1552, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x204u )
    goto LABEL_1658;
  v1->m_Items[516] = (DataMasterBase_o *)v1552;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[516], (int32_t)v1552, v1553, v1554);
  v1555 = (ItemDropEfficiencyMaster_o *)sub_1C32E6C(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1555, 0);
  if ( v1555 )
  {
    v3 = sub_1C32D5C(v1555, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x205u )
    goto LABEL_1658;
  v1->m_Items[517] = (DataMasterBase_o *)v1555;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[517], (int32_t)v1555, v1556, v1557);
  v1558 = (BlankEarthGimmickAddMaster_o *)sub_1C32E6C(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1558, 0);
  if ( v1558 )
  {
    v3 = sub_1C32D5C(v1558, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x206u )
    goto LABEL_1658;
  v1->m_Items[518] = (DataMasterBase_o *)v1558;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[518], (int32_t)v1558, v1559, v1560);
  v1561 = (WarReleaseMaster_o *)sub_1C32E6C(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1561, 0);
  if ( v1561 )
  {
    v3 = sub_1C32D5C(v1561, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x207u )
    goto LABEL_1658;
  v1->m_Items[519] = (DataMasterBase_o *)v1561;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[519], (int32_t)v1561, v1562, v1563);
  v1564 = (SelectBonusBaseMaster_o *)sub_1C32E6C(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1564, 0);
  if ( v1564 )
  {
    v3 = sub_1C32D5C(v1564, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x208u )
    goto LABEL_1658;
  v1->m_Items[520] = (DataMasterBase_o *)v1564;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[520], (int32_t)v1564, v1565, v1566);
  v1567 = (SelectBonusMaster_o *)sub_1C32E6C(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1567, 0);
  if ( v1567 )
  {
    v3 = sub_1C32D5C(v1567, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x209u )
    goto LABEL_1658;
  v1->m_Items[521] = (DataMasterBase_o *)v1567;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[521], (int32_t)v1567, v1568, v1569);
  v1570 = (MyroomServantSpecialImageMaster_o *)sub_1C32E6C(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1570, 0);
  if ( v1570 )
  {
    v3 = sub_1C32D5C(v1570, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Au )
    goto LABEL_1658;
  v1->m_Items[522] = (DataMasterBase_o *)v1570;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[522], (int32_t)v1570, v1571, v1572);
  v1573 = (ShopResetMaster_o *)sub_1C32E6C(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v1573, 0);
  if ( v1573 )
  {
    v3 = sub_1C32D5C(v1573, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Bu )
    goto LABEL_1658;
  v1->m_Items[523] = (DataMasterBase_o *)v1573;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[523], (int32_t)v1573, v1574, v1575);
  v1576 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C32E6C(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v1576, 0);
  if ( v1576 )
  {
    v3 = sub_1C32D5C(v1576, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Cu )
    goto LABEL_1658;
  v1->m_Items[524] = (DataMasterBase_o *)v1576;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[524], (int32_t)v1576, v1577, v1578);
  v1579 = (FriendshipServantMaster_o *)sub_1C32E6C(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v1579, 0);
  if ( v1579 )
  {
    v3 = sub_1C32D5C(v1579, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Du )
    goto LABEL_1658;
  v1->m_Items[525] = (DataMasterBase_o *)v1579;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[525], (int32_t)v1579, v1580, v1581);
  v1582 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C32E6C(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v1582, 0);
  if ( v1582 )
  {
    v3 = sub_1C32D5C(v1582, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Eu )
    goto LABEL_1658;
  v1->m_Items[526] = (DataMasterBase_o *)v1582;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[526], (int32_t)v1582, v1583, v1584);
  v1585 = (ChaldeaGatePickupMaster_o *)sub_1C32E6C(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v1585, 0);
  if ( v1585 )
  {
    v3 = sub_1C32D5C(v1585, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Fu )
    goto LABEL_1658;
  v1->m_Items[527] = (DataMasterBase_o *)v1585;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[527], (int32_t)v1585, v1586, v1587);
  v1588 = (WarGroupIgnoreMaster_o *)sub_1C32E6C(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v1588, 0);
  if ( v1588 )
  {
    v3 = sub_1C32D5C(v1588, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x210u )
    goto LABEL_1658;
  v1->m_Items[528] = (DataMasterBase_o *)v1588;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[528], (int32_t)v1588, v1589, v1590);
  v1591 = (ImagePartsGroupMaster_o *)sub_1C32E6C(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v1591, 0);
  if ( v1591 )
  {
    v3 = sub_1C32D5C(v1591, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x211u )
    goto LABEL_1658;
  v1->m_Items[529] = (DataMasterBase_o *)v1591;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[529], (int32_t)v1591, v1592, v1593);
  v1594 = (UserImagePartsGroupMaster_o *)sub_1C32E6C(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v1594, 0);
  if ( v1594 )
  {
    v3 = sub_1C32D5C(v1594, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x212u )
    goto LABEL_1658;
  v1->m_Items[530] = (DataMasterBase_o *)v1594;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[530], (int32_t)v1594, v1595, v1596);
  v1597 = (MissionItemDisplayMaster_o *)sub_1C32E6C(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v1597, 0);
  if ( v1597 )
  {
    v3 = sub_1C32D5C(v1597, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x213u )
    goto LABEL_1658;
  v1->m_Items[531] = (DataMasterBase_o *)v1597;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[531], (int32_t)v1597, v1598, v1599);
  v1600 = (QuestUseItemGroupMaster_o *)sub_1C32E6C(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v1600, 0);
  if ( v1600 )
  {
    v3 = sub_1C32D5C(v1600, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x214u )
    goto LABEL_1658;
  v1->m_Items[532] = (DataMasterBase_o *)v1600;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[532], (int32_t)v1600, v1601, v1602);
  v1603 = (QuestUseItemPickupMaster_o *)sub_1C32E6C(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v1603, 0);
  if ( v1603 )
  {
    v3 = sub_1C32D5C(v1603, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x215u )
    goto LABEL_1658;
  v1->m_Items[533] = (DataMasterBase_o *)v1603;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[533], (int32_t)v1603, v1604, v1605);
  v1606 = (UserEventItemLinkSvtMaster_o *)sub_1C32E6C(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v1606, 0);
  if ( v1606 )
  {
    v3 = sub_1C32D5C(v1606, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x216u )
    goto LABEL_1658;
  v1->m_Items[534] = (DataMasterBase_o *)v1606;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[534], (int32_t)v1606, v1607, v1608);
  v1609 = (QuestHintOverwriteMaster_o *)sub_1C32E6C(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v1609, 0);
  if ( v1609 )
  {
    v3 = sub_1C32D5C(v1609, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x217u )
    goto LABEL_1658;
  v1->m_Items[535] = (DataMasterBase_o *)v1609;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[535], (int32_t)v1609, v1610, v1611);
  v1612 = (ReachedWaveInfoMaster_o *)sub_1C32E6C(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v1612, 0);
  if ( v1612 )
  {
    v3 = sub_1C32D5C(v1612, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x218u )
    goto LABEL_1658;
  v1->m_Items[536] = (DataMasterBase_o *)v1612;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[536], (int32_t)v1612, v1613, v1614);
  v1615 = (GalleryMaster_o *)sub_1C32E6C(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v1615, 0);
  if ( v1615 )
  {
    v3 = sub_1C32D5C(v1615, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x219u )
    goto LABEL_1658;
  v1->m_Items[537] = (DataMasterBase_o *)v1615;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[537], (int32_t)v1615, v1616, v1617);
  v1618 = (GalleryResourceMaster_o *)sub_1C32E6C(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v1618, 0);
  if ( v1618 )
  {
    v3 = sub_1C32D5C(v1618, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Au )
    goto LABEL_1658;
  v1->m_Items[538] = (DataMasterBase_o *)v1618;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[538], (int32_t)v1618, v1619, v1620);
  v1621 = (ServantSkillAddMaster_o *)sub_1C32E6C(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v1621, 0);
  if ( v1621 )
  {
    v3 = sub_1C32D5C(v1621, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Bu )
    goto LABEL_1658;
  v1->m_Items[539] = (DataMasterBase_o *)v1621;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[539], (int32_t)v1621, v1622, v1623);
  v1624 = (GalleryFolderReleaseMaster_o *)sub_1C32E6C(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v1624, 0);
  if ( v1624 )
  {
    v3 = sub_1C32D5C(v1624, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Cu )
    goto LABEL_1658;
  v1->m_Items[540] = (DataMasterBase_o *)v1624;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[540], (int32_t)v1624, v1625, v1626);
  v1627 = (UserSvtFirstGetTimeMaster_o *)sub_1C32E6C(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v1627, 0);
  if ( v1627 )
  {
    v3 = sub_1C32D5C(v1627, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Du )
    goto LABEL_1658;
  v1->m_Items[541] = (DataMasterBase_o *)v1627;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[541], (int32_t)v1627, v1628, v1629);
  v1630 = (QuestExtensionMaster_o *)sub_1C32E6C(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v1630, 0);
  if ( v1630 )
  {
    v3 = sub_1C32D5C(v1630, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Eu )
    goto LABEL_1658;
  v1->m_Items[542] = (DataMasterBase_o *)v1630;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[542], (int32_t)v1630, v1631, v1632);
  v1633 = (UserServantGrandMaster_o *)sub_1C32E6C(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v1633, 0);
  if ( v1633 )
  {
    v3 = sub_1C32D5C(v1633, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Fu )
    goto LABEL_1658;
  v1->m_Items[543] = (DataMasterBase_o *)v1633;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[543], (int32_t)v1633, v1634, v1635);
  v1636 = (GrandGraphMaster_o *)sub_1C32E6C(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v1636, 0);
  if ( v1636 )
  {
    v3 = sub_1C32D5C(v1636, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x220u )
    goto LABEL_1658;
  v1->m_Items[544] = (DataMasterBase_o *)v1636;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[544], (int32_t)v1636, v1637, v1638);
  v1639 = (GrandGraphDetailMaster_o *)sub_1C32E6C(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v1639, 0);
  if ( v1639 )
  {
    v3 = sub_1C32D5C(v1639, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x221u )
    goto LABEL_1658;
  v1->m_Items[545] = (DataMasterBase_o *)v1639;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[545], (int32_t)v1639, v1640, v1641);
  v1642 = (UserClassStatisticsMaster_o *)sub_1C32E6C(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v1642, 0);
  if ( v1642 )
  {
    v3 = sub_1C32D5C(v1642, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x222u )
    goto LABEL_1658;
  v1->m_Items[546] = (DataMasterBase_o *)v1642;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[546], (int32_t)v1642, v1643, v1644);
  v1645 = (EventEquipSkillPartsMaster_o *)sub_1C32E6C(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v1645, 0);
  if ( v1645 )
  {
    v3 = sub_1C32D5C(v1645, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x223u )
    goto LABEL_1658;
  v1->m_Items[547] = (DataMasterBase_o *)v1645;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[547], (int32_t)v1645, v1646, v1647);
  v1648 = (MasterIndividualitySelectMaster_o *)sub_1C32E6C(MasterIndividualitySelectMaster_TypeInfo);
  MasterIndividualitySelectMaster___ctor(v1648, 0);
  if ( v1648 )
  {
    v3 = sub_1C32D5C(v1648, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x224u )
    goto LABEL_1658;
  v1->m_Items[548] = (DataMasterBase_o *)v1648;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[548], (int32_t)v1648, v1649, v1650);
  v1651 = (MyroomAddBgDiffMaster_o *)sub_1C32E6C(MyroomAddBgDiffMaster_TypeInfo);
  MyroomAddBgDiffMaster___ctor(v1651, 0);
  if ( v1651 )
  {
    v3 = sub_1C32D5C(v1651, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x225u )
    goto LABEL_1658;
  v1->m_Items[549] = (DataMasterBase_o *)v1651;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[549], (int32_t)v1651, v1652, v1653);
  v1654 = (BattleScriptMaster_o *)sub_1C32E6C(BattleScriptMaster_TypeInfo);
  BattleScriptMaster___ctor(v1654, 0);
  if ( v1654 )
  {
    v3 = sub_1C32D5C(v1654, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1659:
      v1658 = sub_1C32EA0(v3);
      sub_1C32D48(v1658, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x226u )
LABEL_1658:
    sub_1C32E84(v3);
  v1->m_Items[550] = (DataMasterBase_o *)v1654;
  sub_1C32BC4((CGThumbnailListItem_o *)&v1->m_Items[550], (int32_t)v1654, v1655, v1656);
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

  if ( (byte_4C3747E & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C3747E = 1;
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
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  int v13; // w26
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3747B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8547/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4C3747B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C32BC4((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v3, v5, v6);
  v13 = 1;
  do
  {
    v24 = v13;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v7, v8, v9, v10, v11, v12);
    v15 = System_String__Format((System_String_o *)StringLiteral_8547/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v14, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get(v15, 0);
    if ( System_String__op_Equality(v16, v15, 0) )
      break;
    v19 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v19->fields._version;
      if ( items )
        continue;
    }
    sub_1C32E7C(v19);
    size = v19->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v16,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v17, v18);
    }
    ++v13;
  }
  while ( v13 != 999 );
}


Il2CppObject *DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_30DD3F0 *method)
{
  long double v2; // q0
  const MethodInfo_30DD3F0_RGCTXs *rgctx_data; // x8
  const MethodInfo_30DD3F0 *_1_TMaster; // x19
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
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x19
  System_Enum_o v25; // [xsp+8h] [xbp-48h] BYREF
  int v26; // [xsp+18h] [xbp-38h]
  int v27; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&DataNameKind_Kind_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_21463/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_1C83390();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (rgctxDataDummy[12].fields._impl.fields.value & 0x10000000000LL) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C83334(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v10) = *(_DWORD *)rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v10,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v10 = value;
    _1_TMaster = (const MethodInfo_30DD3F0 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_30DD3F0 *)sub_1C83334(v11);
    if ( !v10 )
      return 0;
    result = (Il2CppObject *)sub_1C32D5C(v10, _1_TMaster);
    if ( result )
      return result;
    sub_1C3313C(v10);
  }
  _2_TMaster = (intptr_t)_1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = _2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v14, 0);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C32E7C(rgctxDataDummy);
  v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))rgctxDataDummy->klass->vtable._3_ToString.methodPtr)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._3_ToString.method);
  v27 = (int)v10;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v16, v17, v18, v19, v20, v21);
  v26 = (int)v10;
  v25.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v25.monitor = (void *)-1LL;
  v23 = (Il2CppObject *)System_Enum__ToString(&v25, 0);
  v24 = (Il2CppObject *)System_String__Format_63559904((System_String_o *)StringLiteral_21463/*"master[{0}] is null[{1}:{2}]"*/, v15, v22, v23, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v24, 0);
  return 0;
}


Il2CppObject *DataManager__GetMaster_object_(const MethodInfo_30DD39C *method)
{
  Il2CppObject *Instance; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30DD3F0 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


bool DataManager__HasMaster(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Instance; // x0
  bool v2; // w1
  unsigned __int16 *v3; // x0
  unsigned __int16 v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C37467 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
    sub_1C32C20(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_bool___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37467 = 1;
  }
  Instance = (System_Collections_Generic_IEnumerable_TSource__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( Instance )
  {
    Instance = (System_Collections_Generic_IEnumerable_TSource__o *)Instance[3].klass;
    if ( Instance )
    {
      v2 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
             Instance,
             (const MethodInfo_30E8270 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
      v3 = &v5;
      v5 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v3,
        v2,
        (const MethodInfo_38BA7DC *)Method_System_Nullable_bool___ctor__);
      LOBYTE(Instance) = v5 > 0xFFu;
    }
  }
  return (char)Instance;
}


void DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C37465 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_CreateMasterData__);
    sub_1C32C20(&System_Func_DataMasterBase____TypeInfo);
    byte_4C37465 = 1;
  }
  v3 = (System_Func_object__o *)sub_1C32E6C(System_Func_DataMasterBase____TypeInfo);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int v12; // w8
  unsigned int v13; // w23
  __int64 v14; // x2
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v4 = this;
  if ( (byte_4C37466 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1C32C20(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4C37466 = 1;
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
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1C32E7C(this);
    }
    v12 = *(_DWORD *)(v8 + 24);
    if ( v12 >= 1 )
    {
      v13 = 0;
      while ( v13 < v12 )
      {
        v14 = *(_QWORD *)(v8 + 8LL * (int)v13 + 32);
        if ( !v14 || !v9 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          *(_DWORD *)(v14 + 16),
          (Il2CppObject *)v14,
          (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v12 = *(_DWORD *)(v8 + 24);
        if ( (int)++v13 >= v12 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C32E84(this);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.datalist, v8, v10, v11);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v9, v15, v16);
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
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v13; // w23
  Il2CppObject *Item; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v18; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v20; // x25
  __int64 Index_object; // x0
  const MethodInfo_38BE6C8 *v22; // x3
  struct DataMasterBase_array *v23; // x8
  DataMasterBase_o *v24; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v27; // x0
  const MethodInfo_38BE6C8 *v28; // x3
  __int64 v29; // x0
  Il2CppObject *lockCountObj; // x22
  int v31; // w1
  _QWORD **v32; // x20
  __int64 v33; // x0
  Il2CppObject *v34; // x20
  __int64 v35; // x0
  struct System_Threading_SynchronizationContext_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x0
  System_Threading_SendOrPostCallback_o *v39; // x21
  __int64 v40; // x0
  Il2CppObject *v41; // x23
  __int64 v42; // x0
  intptr_t v43; // x0
  __int64 v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  _QWORD *exception; // x0
  __int64 v48; // [xsp+10h] [xbp-90h]
  __int64 v49; // [xsp+18h] [xbp-88h] BYREF
  __int64 v50; // [xsp+20h] [xbp-80h]
  __int64 v51; // [xsp+28h] [xbp-78h] BYREF
  __int64 v52; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v54; // 0:x0.16
  System_Nullable_long__o v55; // 0:x0.16

  v5 = this;
  if ( (byte_4C37478 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1C32C20(&Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1C32C20(&DataManager___c__DisplayClass59_0_TypeInfo);
    byte_4C37478 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C32E7C(this);
  v6 = sub_1C32D5C(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v48 = sub_1C32CC8(byte___TypeInfo, 2000);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = sub_1C32E6C(DataManager___c__DisplayClass59_0_TypeInfo);
        DataManager___c__DisplayClass59_0___ctor((DataManager___c__DisplayClass59_0_o *)v10, 0);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1C32E84(v11);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C32E7C(0);
        v13 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v13,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1C32E7C(Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Item, v15, v16);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C32E7C(0);
        v18 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v13,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v20 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v20,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__,
            0);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v20,
                           (const MethodInfo_31E3144 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v23 = v5->fields.datalist;
            if ( !v23 )
              sub_1C32E7C(Index_object);
            if ( (unsigned int)Index_object >= LODWORD(v23->max_length) )
              sub_1C32E84(Index_object);
            if ( !v18 )
              sub_1C32E7C(Index_object);
            if ( !LODWORD(v18[1].monitor) )
              sub_1C32E84(Index_object);
            v24 = v23->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v54.fields.value = (int64_t)v18[2].klass;
            v51 = 0;
            v52 = 0;
            *(_QWORD *)&v54.fields.hasValue = &v51;
            System_Nullable_long____ctor(v54, Method_System_Nullable_long___ctor__, v22);
            if ( LODWORD(v18[1].monitor) <= 1 )
              sub_1C32E84(v27);
            v55.fields.value = (int64_t)v18[2].monitor;
            v49 = 0;
            v50 = 0;
            *(_QWORD *)&v55.fields.hasValue = &v49;
            System_Nullable_long____ctor(v55, Method_System_Nullable_long___ctor__, v28);
            if ( !v24 )
              sub_1C32E7C(v29);
            ((void (__fastcall *)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, _QWORD))v24->klass[1]._1.byval_arg.data)(
              v24,
              masterDataBytes,
              context,
              v51,
              v52,
              v49,
              v50,
              v48,
              *(_QWORD *)&v24->klass[1]._1.byval_arg.bits);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_65447948(lockCountObj, lockTaken, 0);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0);
      }
    }
  }
  else
  {
    sub_1C3313C(indexList);
    if ( v31 != 1 )
      sub_1D1BD54();
    v32 = (_QWORD **)__cxa_begin_catch(v3);
    v33 = sub_1C32C34(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v33, **v32) & 1) != 0 )
    {
      __cxa_end_catch();
      v34 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65447948(v34, lockTaken, 0);
    }
    else
    {
      v35 = sub_1C32C34(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v35, **v32) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v32;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0);
      }
      __cxa_end_catch();
      v36 = v5->fields.context;
      v37 = sub_1C32C34(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v37 + 224) )
        j_il2cpp_runtime_class_init_0(v37);
      v38 = sub_1C32C34(&DataManager___c_TypeInfo);
      v39 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v38 + 184) + 8LL);
      if ( !v39 )
      {
        v40 = sub_1C32C34(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v40 + 224) )
          j_il2cpp_runtime_class_init_0(v40);
        v41 = **(Il2CppObject ***)(sub_1C32C34(&DataManager___c_TypeInfo) + 184);
        v42 = sub_1C32C34(&System_Threading_SendOrPostCallback_TypeInfo);
        v39 = (System_Threading_SendOrPostCallback_o *)sub_1C32E6C(v42);
        v43 = sub_1C32C34(&Method_DataManager___c__LoadMasterDataThread_b__59_1__);
        System_Threading_SendOrPostCallback___ctor(v39, v41, v43, 0);
        *(_QWORD *)(*(_QWORD *)(sub_1C32C34(&DataManager___c_TypeInfo) + 184) + 8LL) = v39;
        v44 = sub_1C32C34(&DataManager___c_TypeInfo);
        sub_1C32BC4((CGThumbnailListItem_o *)(*(_QWORD *)(v44 + 184) + 8LL), (int32_t)v39, v45, v46);
      }
      if ( !v36 )
        sub_1C32E7C(v38);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, const MethodInfo *))v36->klass->vtable._5_Post.methodPtr)(
        v36,
        v39,
        0,
        v36->klass->vtable._5_Post.method);
      v34 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65447948(v34, lockTaken, 0);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v34, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_int__o *v20; // x0
  System_Int32_array *v21; // x21
  System_Comparison_int__o *v22; // x22
  __int64 v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Threading_ParameterizedThreadStart_o *v26; // x24
  System_Threading_Thread_o *v27; // x23
  System_Func_int__bool__o *v28; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  int v37; // w8
  bool v38; // nf

  if ( (byte_4C37476 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Sort_int____78058304);
    sub_1C32C20(&System_Comparison_int__TypeInfo);
    sub_1C32C20(&Method_DataManager_LoadMasterDataThread__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1C32C20(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C32C20(&System_Threading_Thread_TypeInfo);
    sub_1C32C20(&Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__);
    sub_1C32C20(&DataManager___c__DisplayClass57_0_TypeInfo);
    sub_1C32C20(&Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__);
    sub_1C32C20(&DataManager___c__DisplayClass57_1_TypeInfo);
    byte_4C37476 = 1;
  }
  v7 = sub_1C32E6C(DataManager___c__DisplayClass57_0_TypeInfo);
  DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)loadedIndices, v11, v12);
  Current = System_Threading_SynchronizationContext__get_Current(0);
  this->fields.context = Current;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v16;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v16, v18, v19);
  v20 = System_Linq_Enumerable__Range(0, maxIndex, 0);
  v21 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v22 = (System_Comparison_int__o *)sub_1C32E6C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__,
    0);
  System_Array__Sort_int__51026356(
    v21,
    (System_Comparison_T__o *)v22,
    (const MethodInfo_30A99B4 *)Method_System_Array_Sort_int____78058304);
  v23 = sub_1C32E6C(DataManager___c__DisplayClass57_1_TypeInfo);
  DataManager___c__DisplayClass57_1___ctor((DataManager___c__DisplayClass57_1_o *)v23, 0);
  if ( !v23 )
LABEL_14:
    sub_1C32E7C(v8);
  *(_QWORD *)(v23 + 24) = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 24), v7, v24, v25);
  *(_DWORD *)(v23 + 16) = 0;
  do
  {
    v26 = (System_Threading_ParameterizedThreadStart_o *)sub_1C32E6C(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v26,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0);
    v27 = (System_Threading_Thread_o *)sub_1C32E6C(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_65483452(v27, v26, 0);
    if ( !v27 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v27, 1, 0);
    v28 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v28,
      (Il2CppObject *)v23,
      Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__,
      0);
    v29 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
    v30 = System_Linq_Enumerable__ToArray_int_(
            v29,
            (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_65484032(v27, &v30->obj, 0);
    v8 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v8->fields._items;
    v34 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v27,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v27;
      sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v27, v31, v32);
    }
    v37 = *(_DWORD *)(v23 + 16) + 1;
    v38 = *(_DWORD *)(v23 + 16) - 4 < 0;
    *(_DWORD *)(v23 + 16) = v37;
  }
  while ( v38 != __OFSUB__(v37, 5) );
}


void DataManager__StartWriteLocalFile(DataManager_o *this, System_String_o *fileName, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Threading_ParameterizedThreadStart_o *v6; // x21
  System_Threading_Thread_o *v7; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C37479 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_WriteLocalFileThread__);
    sub_1C32C20(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C32C20(&System_Threading_Thread_TypeInfo);
    byte_4C37479 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v6 = (System_Threading_ParameterizedThreadStart_o *)sub_1C32E6C(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0);
  v7 = (System_Threading_Thread_o *)sub_1C32E6C(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_65483452(v7, v6, 0);
  this->fields.writeMasterDataThread = v7;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C32BC4((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v7, v9, v10);
  if ( !*p_writeMasterDataThread )
    sub_1C32E7C(0);
  System_Threading_Thread__Start_65484032(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0);
}


void DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  CGThumbnailListItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  System_Threading_Thread_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C37477 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4C37477 = 1;
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
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C32E7C(Item);
      v7 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0) )
        System_Threading_Thread__Abort(v7, 0);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0;
    sub_1C32BC4(p_masterLoadThreads, 0, v8, v9);
  }
}


void DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1C32E7C(0);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0);
    }
    *p_writeMasterDataThread = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v4, v5);
  }
}


void DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_Stream_o *v7; // x22
  System_IO_BinaryWriter_o *v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v18; // x0
  Il2CppClass *klass; // x24
  Il2CppObject *v20; // x0
  __int64 v21; // x0
  System_IO_BinaryWriter_c *v22; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  System_IO_Stream_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4C3747A & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C3747A = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v8, v7, 0);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C32E7C(v9);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v8 )
      goto LABEL_34;
  }
  else
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v14,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C32E7C(0);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C32E84(Item);
      if ( !v8 )
        sub_1C32E7C(Item);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._17_Write.method);
      v16 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v16 )
        sub_1C32E7C(0);
      masterDataBytes = this->fields.masterDataBytes;
      v18 = System_Collections_Generic_List_object___get_Item(
              v16,
              v14,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v18 )
        sub_1C32E7C(0);
      if ( !LODWORD(v18[1].monitor) )
        sub_1C32E84(v18);
      if ( !this->fields.saveDataMapList )
        sub_1C32E7C(v18);
      klass = v18[2].klass;
      v20 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v14,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v20 )
        sub_1C32E7C(0);
      if ( LODWORD(v20[1].monitor) <= 1 )
        sub_1C32E84(v20);
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._11_Write.methodPtr)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v20[2].monitor),
              v8->klass->vtable._11_Write.method);
      if ( size == ++v14 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C32E7C(v21);
    }
  }
  v22 = v8->klass;
  v23 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_31;
    }
    v25 = (__int64)&v22->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_31:
    v25 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v8, *(_QWORD *)(v25 + 8));
LABEL_34:
  if ( v6 )
  {
    v26 = v6->klass;
    v27 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_39;
      }
      v29 = (__int64)&v26->vtable + 16 * *v28;
    }
    else
    {
LABEL_39:
      v29 = sub_1C83438(v6, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v29)(v6, *(_QWORD *)(v29 + 8));
  }
  this->fields.writeMasterDataThread = 0;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C32BC4((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v10, v11);
}


bool DataManager___updateMasterData_b__50_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C37460 & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C37460 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0);
  return System_String__Concat_63556792(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C3745F & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C3745F = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0);
  return System_String__Concat_63556792(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4C3745D & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&CacheFolderName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C3745D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FolderName, 0);
}


System_String_o *DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C3745E & 1) == 0 )
  {
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C3745E = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0);
  return System_String__Concat_63556792(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


int32_t DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C3746C & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3746C = 1;
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

  if ( (byte_4C3746D & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3746D = 1;
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
  System_Byte_array *v7; // x20
  uint32_t v8; // w0
  int32_t v9; // w11
  unsigned __int8 v10; // w13
  unsigned int v11; // w14
  uint32_t v12; // w11
  unsigned __int8 v13; // w9
  unsigned __int8 v14; // w12
  unsigned __int8 v15; // w8
  int v16; // w10

  if ( (byte_4C3747C & 1) == 0 )
  {
    sub_1C32C20(&Crc32_TypeInfo);
    byte_4C3747C = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C32E7C(0);
  v7 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._18_GetBytes.method);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v8 = Crc32__Compute(v7, 0);
  v9 = version + 3;
  if ( version >= 0 )
    v9 = version;
  v10 = 3 * version + 1;
  v11 = version - (v9 & 0xFFFFFFFC);
  v12 = HIBYTE(v8);
  switch ( v11 )
  {
    case 1u:
      v15 = v8 - v10;
      v14 = BYTE2(v8) + v10;
      v13 = BYTE1(v8) * (v10 & 0xF);
      v16 = v12 ^ v10;
      break;
    case 2u:
      v15 = v8 ^ v10;
      v13 = BYTE1(v8) + v10;
      v14 = BYTE2(v8) * (v10 & 0xF);
      v16 = v12 - v10;
      break;
    case 3u:
      v13 = BYTE1(v8) - v10;
      v14 = BYTE2(v8) ^ v10;
      v15 = v8 * (v10 & 0xF);
      v16 = v12 + v10;
      break;
    default:
      v15 = v8 + v10;
      v13 = BYTE1(v8) ^ v10;
      v14 = BYTE2(v8) - v10;
      v16 = v12 * (v10 & 0xF);
      break;
  }
  return (v16 << 24) | (v14 << 16) | (v13 << 8) | (v15 << 8);
}


System_String_o *DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4C37461 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&CacheFolderName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C37461 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0);
  return System_String__Concat_63556792(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1048/*"/"*/,
           FolderNameNotConverted,
           0);
}


int32_t DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C37471 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37471 = 1;
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

  if ( (byte_4C37470 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37470 = 1;
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
    sub_1C32E7C(this);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C37469 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37469 = 1;
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

  if ( (byte_4C37474 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37474 = 1;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C37473 & 1) == 0 )
  {
    sub_1C32C20(&DataManager__readMasterData_d__48_TypeInfo);
    byte_4C37473 = 1;
  }
  v3 = sub_1C32E6C(DataManager__readMasterData_d__48_TypeInfo);
  DataManager__readMasterData_d__48___ctor((DataManager__readMasterData_d__48_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
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
  const MethodInfo *v12; // x1
  System_String_o *AllText; // x20
  System_String_o *v14; // x20
  __int64 v15; // x0
  System_String_o *v16; // x20
  __int64 v17; // x0
  int v18; // w8
  int v19; // w22
  __int64 *v20; // x8
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x21
  System_String_o *v24; // x20
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v26; // x22
  uint32_t v27; // w22
  __int64 v28; // x0
  int v29; // w8
  DataManager_o *v30; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v32; // x21
  DataManager_o *v33; // x21
  System_String_o *v34; // x0
  ManagerConfig_c *v35; // x8
  System_String_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  DataManager_o *v39; // x20
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Byte_array *v48; // x1
  int32_t v49; // w2
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
  Il2CppObject *v65; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v67; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v69; // x8
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  DataManager_c *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int64_t v92; // [xsp+8h] [xbp-58h] BYREF
  int v93; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4C37481 & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_5082/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1C32C20(&StringLiteral_5085/*"DataManager version load error : list file parameter error"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_25255/*"~"*/);
    sub_1C32C20(&StringLiteral_768/*") -> ("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    sub_1C32C20(&StringLiteral_1769/*"@"*/);
    sub_1C32C20(&StringLiteral_21439/*"master versiton different ("*/);
    sub_1C32C20(&StringLiteral_5086/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C32C20(&StringLiteral_5087/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1C32C20(&StringLiteral_5084/*"DataManager version load error : list file break"*/);
    byte_4C37481 = 1;
  }
  v93 = 0;
  v92 = 0;
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
    DataManager__ClearSaveDataList(v2, v12);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v14 = CatAndMouseGame__MouseGame3(AllText, 0);
  if ( v14 )
  {
    v15 = sub_1C32CC8(char___TypeInfo, 1);
    if ( !v15 )
      sub_1C32E7C(0);
    if ( !*(_DWORD *)(v15 + 24) )
      sub_1C32E84(v15);
    *(_WORD *)(v15 + 32) = -257;
    v16 = System_String__Trim_63575092(v14, (System_Char_array *)v15, 0);
    v17 = sub_1C32CC8(char___TypeInfo, 2);
    if ( !v17 )
      sub_1C32E7C(0);
    v18 = *(_DWORD *)(v17 + 24);
    if ( !v18 )
      sub_1C32E84(v17);
    *(_WORD *)(v17 + 32) = 13;
    if ( v18 == 1 )
      sub_1C32E84(v17);
    *(_WORD *)(v17 + 34) = 10;
    if ( !v16 )
      sub_1C32E7C(v17);
    v19 = System_String__IndexOfAny(v16, (System_Char_array *)v17, 0);
    if ( v19 < 2 )
    {
      v20 = &StringLiteral_5086/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v21 = System_String__Substring_63564468(v16, 0, v19, 0);
    v22 = v21;
    if ( !v21 )
      sub_1C32E7C(0);
    if ( System_String__StartsWith(v21, (System_String_o *)StringLiteral_25255/*"~"*/, 0) )
    {
      v23 = System_String__Substring(v22, 1, 0);
      v24 = System_String__Substring(v16, v19 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C32E7C(0);
      v26 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v24,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v27 = Crc32__Compute(v26, 0);
      if ( System_UInt32__Parse(v23, 0) == v27 )
      {
        v28 = sub_1C32CC8(char___TypeInfo, 2);
        if ( !v28 )
          sub_1C32E7C(0);
        v29 = *(_DWORD *)(v28 + 24);
        if ( !v29 )
          sub_1C32E84(v28);
        *(_WORD *)(v28 + 32) = 13;
        if ( v29 == 1 )
          sub_1C32E84(v28);
        *(_WORD *)(v28 + 34) = 10;
        if ( !v24 )
          sub_1C32E7C(v28);
        this = (DataManager_o *)System_String__Split_63567736(v24, (System_Char_array *)v28, 1, 0);
        v30 = this;
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
                                  (System_String_o *)StringLiteral_1769/*"@"*/,
                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v30->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v32 = *(System_String_o **)&v30->fields._DispLog;
          this = (DataManager_o *)sub_1C32CC8(char___TypeInfo, 1);
          if ( !this )
            goto LABEL_119;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v32 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_63567620(v32, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_119;
          v33 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v34 = System_String__Substring((System_String_o *)this, 1, 0);
          v35 = ManagerConfig_TypeInfo;
          v36 = v34;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v35 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v35->static_fields->MasterDataCacheVer, v36, 0) )
          {
            this = (DataManager_o *)sub_1C32CC8(string___TypeInfo, 5);
            if ( this )
            {
              v39 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v40 = StringLiteral_21439/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21439/*"master versiton different ("*/;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._DispLog, v40, v37, v38);
                if ( LODWORD(v39->fields.m_CancellationTokenSource) > 1 )
                {
                  v39->fields.datalist = (struct DataMasterBase_array *)v36;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.datalist, (int32_t)v36, v41, v42);
                  if ( LODWORD(v39->fields.m_CancellationTokenSource) > 2 )
                  {
                    v45 = StringLiteral_768/*") -> ("*/;
                    v39->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_768/*") -> ("*/;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.lookup, v45, v43, v44);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v39->fields.m_CancellationTokenSource) > 3 )
                    {
                      v48 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v39->fields.masterDataBytes = v48;
                      sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.masterDataBytes, (int32_t)v48, v46, v47);
                      if ( LODWORD(v39->fields.m_CancellationTokenSource) > 4 )
                      {
                        v51 = StringLiteral_759/*")"*/;
                        v39->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_759/*")"*/;
                        p_saveNameList = (CGThumbnailListItem_o *)&v39->fields.saveNameList;
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
          if ( LODWORD(v33->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v33->fields.datalist, 0);
            v93 = (int)this;
            if ( LODWORD(v33->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v54 = (int)this;
            v55 = System_Int64__Parse((System_String_o *)v33->fields.lookup, 0);
            v56 = DataManager_TypeInfo;
            v92 = v55;
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
              v59 = v30->fields.m_CancellationTokenSource;
              if ( (int)v59 < 2 )
                return 1;
              v60 = 2;
              while ( 1 )
              {
                v61 = (System_String_o *)*((_QWORD *)&v30->fields._DispLog + (int)(v60 - 1));
                this = (DataManager_o *)sub_1C32CC8(char___TypeInfo, 1);
                if ( !this )
                  break;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v61 )
                  break;
                this = (DataManager_o *)System_String__Split_63567620(v61, (System_Char_array *)this, 0);
                if ( !this )
                  break;
                v64 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                v65 = *(Il2CppObject **)&v64->fields._DispLog;
                m_CachedPtr = this->fields.m_CachedPtr;
                v67 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !m_CachedPtr )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v65,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v69 + 32) = v65;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v69 + 32), (int32_t)v65, v62, v63);
                }
                if ( (_DWORD)v59 == v60 )
                  return 1;
                if ( v60++ >= LODWORD(v30->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1C32CC8(string___TypeInfo, 9);
              if ( this )
              {
                v39 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v73 = StringLiteral_21439/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21439/*"master versiton different ("*/;
                  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._DispLog, v73, v71, v72);
                  v74 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v74 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v74->static_fields, 0);
                  if ( LODWORD(v39->fields.m_CancellationTokenSource) > 1 )
                  {
                    v39->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.datalist, (int32_t)this, v75, v76);
                    if ( LODWORD(v39->fields.m_CancellationTokenSource) > 2 )
                    {
                      v79 = (int)StringLiteral_113/*" "*/;
                      v39->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_113/*" "*/;
                      sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.lookup, v79, v77, v78);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0);
                      if ( LODWORD(v39->fields.m_CancellationTokenSource) > 3 )
                      {
                        v39->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.masterDataBytes, (int32_t)this, v80, v81);
                        if ( LODWORD(v39->fields.m_CancellationTokenSource) > 4 )
                        {
                          v84 = StringLiteral_768/*") -> ("*/;
                          v39->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_768/*") -> ("*/;
                          sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.saveNameList, v84, v82, v83);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v93, 0);
                          if ( LODWORD(v39->fields.m_CancellationTokenSource) > 5 )
                          {
                            v39->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.saveDataMapList, (int32_t)this, v85, v86);
                            if ( LODWORD(v39->fields.m_CancellationTokenSource) > 6 )
                            {
                              v89 = (int)StringLiteral_113/*" "*/;
                              *(_QWORD *)&v39->fields.lastFrameTime = StringLiteral_113/*" "*/;
                              sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.lastFrameTime, v89, v87, v88);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v92, 0);
                              if ( LODWORD(v39->fields.m_CancellationTokenSource) > 7 )
                              {
                                v39->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C32BC4(
                                  (CGThumbnailListItem_o *)&v39->fields.masterCheckName,
                                  (int32_t)this,
                                  v90,
                                  v91);
                                if ( LODWORD(v39->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v51 = StringLiteral_759/*")"*/;
                                  v39->fields.lockCountObj = (Il2CppObject *)StringLiteral_759/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v39->fields.lockCountObj;
LABEL_104:
                                  sub_1C32BC4(p_saveNameList, v51, v49, v50);
                                  if ( System_String__Concat_63559060((System_String_array *)v39, 0) )
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
                sub_1C32E84(this);
              }
            }
LABEL_119:
            sub_1C32E7C(this);
          }
          v20 = &StringLiteral_5085/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v20 = &StringLiteral_5084/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v20 = &StringLiteral_5082/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v20 = &StringLiteral_5087/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v20 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *DataManager__readMasterVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C37472 & 1) == 0 )
  {
    sub_1C32C20(&DataManager__readMasterVersion_d__47_TypeInfo);
    byte_4C37472 = 1;
  }
  v3 = sub_1C32E6C(DataManager__readMasterVersion_d__47_TypeInfo);
  DataManager__readMasterVersion_d__47___ctor((DataManager__readMasterVersion_d__47_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
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
  System_String_o *v10; // x20
  __int64 v11; // x0
  int v12; // w8
  int v13; // w22
  __int64 *v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  System_String_o *v17; // x21
  System_String_o *v18; // x20
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v20; // x22
  uint32_t v21; // w22
  __int64 v22; // x0
  int v23; // w8
  __int64 v24; // x0
  __int64 v25; // x20
  __int64 v26; // x8
  System_String_o *v27; // x20
  __int64 v28; // x20
  System_String_o *v29; // x0
  ManagerConfig_c *v30; // x8
  System_String_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x20
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  System_String_o *v47; // x8
  DataManager_c *v48; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v51; // x8
  int32_t v52; // w19
  struct DataManager_StaticFields *v53; // x8
  int64_t v54; // x0
  struct DataManager_StaticFields *v55; // x8

  if ( (byte_4C3747F & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_5081/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C32C20(&StringLiteral_5078/*"DataManager boot load error : list file break"*/);
    sub_1C32C20(&StringLiteral_5080/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C32C20(&StringLiteral_5076/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1C32C20(&StringLiteral_25255/*"~"*/);
    sub_1C32C20(&StringLiteral_21438/*"master data versiton different ("*/);
    sub_1C32C20(&StringLiteral_768/*") -> ("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    sub_1C32C20(&StringLiteral_1769/*"@"*/);
    sub_1C32C20(&StringLiteral_5079/*"DataManager boot load error : list file parameter error"*/);
    byte_4C3747F = 1;
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
    v48 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v48 = DataManager_TypeInfo;
    }
    static_fields = v48->static_fields;
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
    v9 = sub_1C32CC8(char___TypeInfo, 1);
    if ( !v9 )
      sub_1C32E7C(0);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C32E84(v9);
    *(_WORD *)(v9 + 32) = -257;
    v10 = System_String__Trim_63575092(v8, (System_Char_array *)v9, 0);
    v11 = sub_1C32CC8(char___TypeInfo, 2);
    if ( !v11 )
      sub_1C32E7C(0);
    v12 = *(_DWORD *)(v11 + 24);
    if ( !v12 )
      sub_1C32E84(v11);
    *(_WORD *)(v11 + 32) = 13;
    if ( v12 == 1 )
      sub_1C32E84(v11);
    *(_WORD *)(v11 + 34) = 10;
    if ( !v10 )
      sub_1C32E7C(v11);
    v13 = System_String__IndexOfAny(v10, (System_Char_array *)v11, 0);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5080/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v47 = (System_String_o *)*v14;
LABEL_58:
      if ( v47 )
        goto LABEL_59;
      return 1;
    }
    v15 = System_String__Substring_63564468(v10, 0, v13, 0);
    v16 = v15;
    if ( !v15 )
      sub_1C32E7C(0);
    if ( !System_String__StartsWith(v15, (System_String_o *)StringLiteral_25255/*"~"*/, 0) )
    {
      v14 = &StringLiteral_5081/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v17 = System_String__Substring(v16, 1, 0);
    v18 = System_String__Substring(v10, v13 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_1C32E7C(0);
    v20 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v18,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v21 = Crc32__Compute(v20, 0);
    if ( System_UInt32__Parse(v17, 0) != v21 )
    {
      v14 = &StringLiteral_5076/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v22 = sub_1C32CC8(char___TypeInfo, 2);
    if ( !v22 )
      sub_1C32E7C(0);
    v23 = *(_DWORD *)(v22 + 24);
    if ( !v23 )
      sub_1C32E84(v22);
    *(_WORD *)(v22 + 32) = 13;
    if ( v23 == 1 )
      sub_1C32E84(v22);
    *(_WORD *)(v22 + 34) = 10;
    if ( !v18 )
      sub_1C32E7C(v22);
    v24 = (__int64)System_String__Split_63567736(v18, (System_Char_array *)v22, 1, 0);
    v25 = v24;
    if ( !v24 )
      return 1;
    v26 = *(_QWORD *)(v24 + 24);
    if ( v26 )
    {
      if ( !(_DWORD)v26 )
        goto LABEL_78;
      v24 = *(_QWORD *)(v24 + 32);
      if ( !v24 )
        goto LABEL_83;
      v24 = System_String__StartsWith((System_String_o *)v24, (System_String_o *)StringLiteral_1769/*"@"*/, 0);
      if ( (v24 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_78;
        v27 = *(System_String_o **)(v25 + 32);
        v24 = sub_1C32CC8(char___TypeInfo, 1);
        if ( v24 )
        {
          if ( !*(_DWORD *)(v24 + 24) )
            goto LABEL_78;
          *(_WORD *)(v24 + 32) = 44;
          if ( v27 )
          {
            v24 = (__int64)System_String__Split_63567620(v27, (System_Char_array *)v24, 0);
            if ( v24 )
            {
              v28 = v24;
              if ( !*(_DWORD *)(v24 + 24) )
                goto LABEL_78;
              v24 = *(_QWORD *)(v24 + 32);
              if ( v24 )
              {
                v29 = System_String__Substring((System_String_o *)v24, 1, 0);
                v30 = ManagerConfig_TypeInfo;
                v31 = v29;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v30 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v30->static_fields->MasterDataCacheVer, v31, 0) )
                {
                  if ( *(_DWORD *)(v28 + 24) != 3 )
                  {
                    v14 = &StringLiteral_5079/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v24 = System_Int32__Parse(*(System_String_o **)(v28 + 40), 0);
                  v51 = DataManager_TypeInfo;
                  v52 = v24;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v51 = DataManager_TypeInfo;
                  }
                  v53 = v51->static_fields;
                  v53->dataVersion = v52;
                  v53->readDataVersion = v52;
                  if ( *(_DWORD *)(v28 + 24) > 2u )
                  {
                    v54 = System_Int64__Parse(*(System_String_o **)(v28 + 48), 0);
                    v55 = DataManager_TypeInfo->static_fields;
                    v55->dateVersion = v54;
                    v55->readDateVersion = v54;
                    return 1;
                  }
LABEL_78:
                  sub_1C32E84(v24);
                }
                v24 = sub_1C32CC8(string___TypeInfo, 5);
                if ( v24 )
                {
                  v34 = v24;
                  if ( *(_DWORD *)(v24 + 24) )
                  {
                    v35 = StringLiteral_21438/*"master data versiton different ("*/;
                    *(_QWORD *)(v24 + 32) = StringLiteral_21438/*"master data versiton different ("*/;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 32), v35, v32, v33);
                    if ( *(_DWORD *)(v34 + 24) > 1u )
                    {
                      *(_QWORD *)(v34 + 40) = v31;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 40), (int32_t)v31, v36, v37);
                      if ( *(_DWORD *)(v34 + 24) > 2u )
                      {
                        v40 = StringLiteral_768/*") -> ("*/;
                        *(_QWORD *)(v34 + 48) = StringLiteral_768/*") -> ("*/;
                        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 48), v40, v38, v39);
                        v24 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v24 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v34 + 24) > 3u )
                        {
                          v43 = *(_QWORD *)(*(_QWORD *)(v24 + 184) + 32LL);
                          *(_QWORD *)(v34 + 56) = v43;
                          sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 56), v43, v41, v42);
                          if ( *(_DWORD *)(v34 + 24) > 4u )
                          {
                            v46 = StringLiteral_759/*")"*/;
                            *(_QWORD *)(v34 + 64) = StringLiteral_759/*")"*/;
                            sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 64), v46, v44, v45);
                            v47 = System_String__Concat_63559060((System_String_array *)v34, 0);
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
        sub_1C32E7C(v24);
      }
    }
    v14 = &StringLiteral_5078/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4C3746F & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3746F = 1;
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
  sub_1C32BC4(p_updateData, v11, dateVer, (const MethodInfo *)obj);
}


void DataManager__setMasterDataVersion(DataManager_o *this, int32_t dataVer, int64_t dateVer, const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4C3746E & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3746E = 1;
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
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  DataManager_c *v14; // x8
  struct DataManager_StaticFields *v15; // x0
  DataManager_c *v16; // x0

  if ( (byte_4C37468 & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37468 = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->serverHash, v6, (int32_t)method, v3);
  if ( obj )
  {
    v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                              obj,
                              obj->klass->vtable[3].method);
    v9 = System_String__op_Equality(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v9 )
    {
      if ( !v8 )
        sub_1C32E7C(v9);
      v10 = System_String__Substring(v8, v8->fields._stringLength - 1, 0);
      if ( System_String__op_Equality(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
      {
        v13 = System_String__Substring_63564468(v8, 0, v8->fields._stringLength - 1, 0);
        v14 = DataManager_TypeInfo;
        v8 = v13;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v14 = DataManager_TypeInfo;
        }
        v15 = v14->static_fields;
      }
      else
      {
        v16 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v16 = DataManager_TypeInfo;
        }
        v15 = v16->static_fields;
      }
      v15->serverHash = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)&v15->serverHash, (int32_t)v8, v11, v12);
    }
  }
}


void DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4C3746A & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3746A = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4C37483 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4C37483 = 1;
  }
  if ( obj
    && ((naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
         obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C3313C(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_41509068(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void DataManager__updateJsonData_41509068(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  DataManager_o *v5; // x21
  __int64 naturalAligment; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v9; // w26
  unsigned int v10; // w9
  __int64 v11; // x27
  DataMasterBase_o *v12; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v14; // x8
  DataMasterBase_o *v15; // x23
  __int64 v16; // x9
  struct DataMasterBase_array *v17; // x8
  int v18; // w9
  int v19; // w26
  unsigned int v20; // w9
  __int64 v21; // x27
  DataMasterBase_o *v22; // x8
  Il2CppObject *v23; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct DataMasterBase_array *v27; // x8
  int v28; // w9
  int v29; // w25
  unsigned int v30; // w9
  __int64 v31; // x26
  DataMasterBase_o *v32; // x8
  Il2CppObject *v33; // x21
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x22
  DataManager_o *v36; // x0
  const MethodInfo *v37; // x1

  v4 = this;
  if ( (byte_4C37484 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&StringLiteral_24443/*"updated"*/);
    sub_1C32C20(&StringLiteral_18565/*"deleted"*/);
    this = (DataManager_o *)sub_1C32C20(&StringLiteral_23045/*"replaced"*/);
    byte_4C37484 = 1;
  }
  if ( !data )
LABEL_57:
    sub_1C32E7C(this);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)data,
         (Il2CppObject *)StringLiteral_18565/*"deleted"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)data,
                              (Il2CppObject *)StringLiteral_18565/*"deleted"*/,
                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
    if ( this )
    {
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
    v9 = max_length - 1;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( v10 < LODWORD(datalist->max_length) )
      {
        v11 = (int)v10;
        v12 = datalist->m_Items[v10];
        if ( !v12 || !v5 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v12->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v4->fields.datalist;
          if ( !v14 )
            goto LABEL_57;
          if ( (unsigned int)v11 >= LODWORD(v14->max_length) )
            break;
          v15 = v14->m_Items[v11];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v15 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v15->klass[1]._1.element_class)(
                                    v15,
                                    this,
                                    v15->klass[1]._1.castClass);
        }
        if ( v9 == (_DWORD)v11 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v10 = v11 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1C32E84(this);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)data,
          (Il2CppObject *)StringLiteral_24443/*"updated"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)data,
                            (Il2CppObject *)StringLiteral_24443/*"updated"*/,
                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C3313C(v5);
      goto LABEL_61;
    }
  }
  v17 = v4->fields.datalist;
  if ( !v17 )
    goto LABEL_57;
  v18 = v17->max_length;
  v19 = v18 - 1;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < LODWORD(v17->max_length) )
    {
      v21 = (int)v20;
      v22 = v17->m_Items[v20];
      if ( !v22 || !v5 )
        goto LABEL_57;
      v23 = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                v23,
                                (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.datalist;
        if ( !v24 )
          goto LABEL_57;
        if ( (unsigned int)v21 >= LODWORD(v24->max_length) )
          goto LABEL_59;
        v25 = v24->m_Items[v21];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  v23,
                                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD))v25->klass[1]._1.this_arg.data)(
                                  v25,
                                  this,
                                  *(_QWORD *)&v25->klass[1]._1.this_arg.bits);
      }
      if ( v19 == (_DWORD)v21 )
        goto LABEL_40;
      v17 = v4->fields.datalist;
      v20 = v21 + 1;
      if ( !v17 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)data,
          (Il2CppObject *)StringLiteral_23045/*"replaced"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)data,
                            (Il2CppObject *)StringLiteral_23045/*"replaced"*/,
                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  data = (System_Collections_Generic_Dictionary_string__object__o *)this;
  if ( this )
  {
    v26 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C3313C(data);
      DataManager__getRevisionTotal(v36, v37);
      return;
    }
  }
  v27 = v4->fields.datalist;
  if ( !v27 )
    goto LABEL_57;
  v28 = v27->max_length;
  v29 = v28 - 1;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( v30 < LODWORD(v27->max_length) )
    {
      v31 = (int)v30;
      v32 = v27->m_Items[v30];
      if ( !v32 || !data )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)data,
                                v33,
                                (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= LODWORD(v34->max_length) )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)data,
                                  v33,
                                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, const char *))v35->klass[1]._1.name)(
                                  v35,
                                  this,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v35->klass[1]._1.namespaze);
      }
      if ( v29 == (_DWORD)v31 )
        return;
      v27 = v4->fields.datalist;
      v30 = v31 + 1;
      if ( !v27 )
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C37475 & 1) == 0 )
  {
    sub_1C32C20(&DataManager__updateMasterData_d__50_TypeInfo);
    byte_4C37475 = 1;
  }
  v5 = sub_1C32E6C(DataManager__updateMasterData_d__50_TypeInfo);
  DataManager__updateMasterData_d__50___ctor((DataManager__updateMasterData_d__50_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DataManager__updateWebViewData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3746B & 1) == 0 )
  {
    sub_1C32C20(&DataManager__updateWebViewData_d__39_TypeInfo);
    byte_4C3746B = 1;
  }
  v3 = sub_1C32E6C(DataManager__updateWebViewData_d__39_TypeInfo);
  DataManager__updateWebViewData_d__39___ctor((DataManager__updateWebViewData_d__39_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v8; // x20
  System_Text_StringBuilder_o *v9; // x21
  ManagerConfig_c *v10; // x0
  int v11; // w8
  int v12; // w24
  int32_t v13; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x19
  System_Byte_array *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  System_String_o *v25; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v27; // x19
  __int64 v28; // x0
  System_IO_StreamWriter_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  uint32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C37482 & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&System_IO_StreamWriter_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&uint_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_25258/*"~{0}\n{1}"*/);
    sub_1C32C20(&StringLiteral_1769/*"@"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C37482 = 1;
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
    v8 = (System_String_o *)CacheListFileName;
    v9 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63596960(v9, (size << 7) + 128, 0);
    if ( !v9 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)StringLiteral_1769/*"@"*/, 0);
    v10 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_63603608(v9, v10->static_fields->MasterDataCacheVer, 0);
    System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63606104(v9, DataManager_TypeInfo->static_fields->dataVersion, 0);
    System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63606192(v9, DataManager_TypeInfo->static_fields->dateVersion, 0);
    System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v11 = CacheListFileName->fields._size;
    v12 = v11 - 1;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v13,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)Item, 0);
        System_Text_StringBuilder__Append_63603608(v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        if ( v12 == v13 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v13;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                            v9,
                            v9->klass->vtable._3_ToString.method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0);
    if ( !CacheListFileName )
LABEL_17:
      sub_1C32E7C(CacheListFileName);
    v16 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, const MethodInfo *))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.methodPtr)(
                                 CacheListFileName,
                                 v15,
                                 CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v33 = Crc32__Compute(v16, 0);
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v33, v17, v18, v19, v20, v21, v22);
    v24 = System_String__Format_63559836((System_String_o *)StringLiteral_25258/*"~{0}\n{1}"*/, v23, v15, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v25 = CatAndMouseGame__CatGame3(v24, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    v27 = (System_IO_StreamWriter_o *)sub_1C32E6C(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64364580(v27, v8, 0, UTF8, 0);
    if ( !v27 )
      sub_1C32E7C(v28);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v27->klass->vtable._16_Write.methodPtr)(
      v27,
      v25,
      v27->klass->vtable._16_Write.method);
    klass = v27->klass;
    v30 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v32 = sub_1C83438(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8));
  }
}


void DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  System_String_o *v26; // x20
  System_Byte_array *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  System_String_o *v30; // x20
  System_Text_Encoding_o *v31; // x22
  System_IO_StreamWriter_o *v32; // x21
  uint32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C37480 & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&System_IO_StreamWriter_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_25255/*"~"*/);
    sub_1C32C20(&StringLiteral_1769/*"@"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C37480 = 1;
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
    UTF8 = (char *)sub_1C32CC8(string___TypeInfo, 7);
    if ( !UTF8 )
      goto LABEL_27;
    v8 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v9 = StringLiteral_1769/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1769/*"@"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(UTF8 + 32), v9, v6, v7);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v8 + 6) <= 1u )
      goto LABEL_26;
    v12 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v8 + 5) = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 40), v12, v10, v11);
    if ( *((_DWORD *)v8 + 6) <= 2u )
      goto LABEL_26;
    v15 = StringLiteral_811/*","*/;
    *((_QWORD *)v8 + 6) = StringLiteral_811/*","*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 48), v15, v13, v14);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0);
    if ( *((_DWORD *)v8 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v8 + 7) = UTF8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 56), (int32_t)UTF8, v16, v17);
    if ( *((_DWORD *)v8 + 6) <= 4u
      || (v20 = StringLiteral_811/*","*/,
          *((_QWORD *)v8 + 8) = StringLiteral_811/*","*/,
          sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 64), v20, v18, v19),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0),
          *((_DWORD *)v8 + 6) <= 5u)
      || (*((_QWORD *)v8 + 9) = UTF8,
          sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 72), (int32_t)UTF8, v21, v22),
          *((_DWORD *)v8 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C32E84(UTF8);
    }
    v25 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v8 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 80), v25, v23, v24);
    v26 = System_String__Concat_63559060((System_String_array *)v8, 0);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_27;
    v27 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v26,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v33 = Crc32__Compute(v27, 0);
    v28 = System_UInt32__ToString((uint32_t)&v33, 0);
    v29 = System_String__Concat_63558796(
            (System_String_o *)StringLiteral_25255/*"~"*/,
            v28,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v26,
            0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v30 = CatAndMouseGame__CatGame1(v29, 0, 0);
    v31 = System_Text_Encoding__get_UTF8(0);
    v32 = (System_IO_StreamWriter_o *)sub_1C32E6C(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64364580(v32, CacheVersionFileName, 0, v31, 0);
    if ( !v32 )
LABEL_27:
      sub_1C32E7C(UTF8);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v32->klass->vtable._16_Write.methodPtr)(
      v32,
      v30,
      v32->klass->vtable._16_Write.method);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v32->klass->vtable._8_Close.methodPtr)(
      v32,
      v32->klass->vtable._8_Close.method);
  }
}


void DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37488 & 1) == 0 )
  {
    sub_1C32C20(&DataManager___c_TypeInfo);
    byte_4C37488 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataManager___c___LoadMasterDataThread_b__59_1(DataManager___c_o *this, Il2CppObject *_, const MethodInfo *method)
{
  ;
}


void DataManager___c__DisplayClass50_0___ctor(DataManager___c__DisplayClass50_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass50_0___updateMasterData_b__1(
        DataManager___c__DisplayClass50_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


bool DataManager___c__DisplayClass50_0___updateMasterData_b__2(
        DataManager___c__DisplayClass50_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass50_1___ctor(DataManager___c__DisplayClass50_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass50_1___updateMasterData_b__3(
        DataManager___c__DisplayClass50_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass57_0___ctor(DataManager___c__DisplayClass57_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DataManager___c__DisplayClass57_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass57_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass57_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  struct DataManager_o *v8; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4C37489 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4C37489 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass57_0_o *)_4__this->fields.saveDataMapList;
  if ( !this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass57_0_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  b,
                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v8 = v6->fields.__4__this;
  if ( !v8
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v8->fields.saveDataMapList) == 0
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass57_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__)) == 0) )
  {
LABEL_12:
    sub_1C32E7C(this);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C32E84(this);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void DataManager___c__DisplayClass57_1___ctor(DataManager___c__DisplayClass57_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass57_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass57_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass57_1_o *v4; // x20
  struct DataManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4C3748A & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_1_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C3748A = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (this = (DataManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.loadedIndices) == 0 )
      sub_1C32E7C(this);
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void DataManager___c__DisplayClass59_0___ctor(DataManager___c__DisplayClass59_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass59_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass59_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0);
}


void DataManager__readMasterData_d__48___ctor(
        DataManager__readMasterData_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterData_d__48__MoveNext(DataManager__readMasterData_d__48_o *this, const MethodInfo *method)
{
  DataManager__readMasterData_d__48_o *v2; // x20
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
  __int64 v17; // x22
  __int64 v18; // x0
  UnityEngine_WaitForEndOfFrame_o *v19; // x19
  CGThumbnailListItem_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  DataManager_c *v24; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  System_IO_Stream_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_IO_MemoryStream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v42; // x21
  System_IO_BinaryReader_o *v43; // x24
  __int64 v44; // x0
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v47; // x0
  int v48; // w22
  __int64 v49; // x23
  __int64 v50; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  int v56; // w8
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  System_IO_BinaryReader_c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  System_IO_MemoryStream_c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  UnityEngine_WaitForEndOfFrame_o *v69; // x19
  int32_t v70; // w2
  const MethodInfo *v71; // x3

  v2 = this;
  if ( (byte_4C3748B & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_GC_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__48_o *)sub_1C32C20(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C3748B = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_96;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
        v2->fields.__2__current = (Il2CppObject *)v4;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(p__2__current, (int32_t)v4, v6, v7);
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
          v13 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v13, 0);
          v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v15 = CatAndMouseGame__MouseGameZ(v14, 0);
          v16 = sub_1C32CC8(byte___TypeInfo, 0x4000);
          v17 = v16;
          if ( !v16 )
            sub_1C32E7C(0);
          if ( !v15 )
            sub_1C32E7C(v16);
          while ( 1 )
          {
            v18 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._31_unknown.methodPtr)(
                    v15,
                    v17,
                    0,
                    *(unsigned int *)(v17 + 24),
                    v15->klass->vtable._31_unknown.method);
            if ( (int)v18 <= 0 )
              break;
            if ( !v13 )
              sub_1C32E7C(v18);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._34_Write.methodPtr)(
              v13,
              v17,
              0,
              (unsigned int)v18,
              v13->klass->vtable._34_Write.method);
          }
          klass = v15->klass;
          v26 = *(unsigned __int16 *)&v15->klass->_2.rank;
          if ( *(_WORD *)&v15->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v26;
              p_offset += 4;
              if ( !v26 )
                goto LABEL_37;
            }
            v28 = (__int64)&klass->vtable + 16 * *p_offset;
          }
          else
          {
LABEL_37:
            v28 = sub_1C83438(v15, System_IDisposable_TypeInfo, 0);
          }
          v29 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v28)(v15, *(_QWORD *)(v28 + 8));
          if ( v14 )
          {
            v30 = v14->klass;
            v31 = *(unsigned __int16 *)&v14->klass->_2.rank;
            if ( *(_WORD *)&v14->klass->_2.rank )
            {
              v32 = &v30->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
              {
                --v31;
                v32 += 4;
                if ( !v31 )
                  goto LABEL_44;
              }
              v33 = (__int64)&v30->vtable + 16 * *v32;
            }
            else
            {
LABEL_44:
              v33 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
            }
            v29 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v33)(v14, *(_QWORD *)(v33 + 8));
          }
          if ( !v13 )
            sub_1C32E7C(v29);
          v34 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._40_ToArray.methodPtr)(
                  v13,
                  v13->klass->vtable._40_ToArray.method);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v34;
          sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v34, v35, v36);
          v37 = v13->klass;
          v38 = *(unsigned __int16 *)&v13->klass->_2.rank;
          if ( *(_WORD *)&v13->klass->_2.rank )
          {
            v39 = &v37->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
            {
              --v38;
              v39 += 4;
              if ( !v38 )
                goto LABEL_52;
            }
            v40 = (__int64)&v37->vtable + 16 * *v39;
          }
          else
          {
LABEL_52:
            v40 = sub_1C83438(v13, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v13, *(_QWORD *)(v40 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v42 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_64341020(v42, masterDataBytes, 0);
          v43 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v43, (System_IO_Stream_o *)v42, 0);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C32E7C(v44);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v43 )
            {
LABEL_76:
              if ( v42 )
              {
                v65 = v42->klass;
                v66 = *(unsigned __int16 *)&v42->klass->_2.rank;
                if ( *(_WORD *)&v42->klass->_2.rank )
                {
                  v67 = &v65->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v66;
                    v67 += 4;
                    if ( !v66 )
                      goto LABEL_81;
                  }
                  v68 = (__int64)&v65->vtable + 16 * *v67;
                }
                else
                {
LABEL_81:
                  v68 = sub_1C83438(v42, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v68)(v42, *(_QWORD *)(v68 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v69 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v69, 0);
              v2->fields.__2__current = (Il2CppObject *)v69;
              v20 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C32BC4(v20, (int32_t)v69, v70, v71);
              v23 = 2;
LABEL_87:
              LODWORD(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = v23;
              v8 = 1;
              return v8 & 1;
            }
          }
          else
          {
            if ( !v43 )
              sub_1C32E7C(v44);
            do
            {
              v47 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                      v43,
                      v43->klass->vtable._15_ReadInt32.method);
              if ( !v42 )
                sub_1C32E7C(v47);
              v48 = v47;
              v49 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v42->klass->vtable._12_get_Position.methodPtr)(
                      v42,
                      v42->klass->vtable._12_get_Position.method);
              v50 = v48;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, const MethodInfo *))v42->klass->vtable._29_Seek.methodPtr)(
                v42,
                v48,
                1,
                v42->klass->vtable._29_Seek.method);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v52 = sub_1C32CC8(long___TypeInfo, 2);
              v55 = v52;
              if ( !v52 )
                sub_1C32E7C(0);
              v56 = *(_DWORD *)(v52 + 24);
              if ( !v56 )
                sub_1C32E84(v52);
              *(_QWORD *)(v52 + 32) = v49;
              if ( v56 == 1 )
                sub_1C32E84(v52);
              *(_QWORD *)(v52 + 40) = v50;
              if ( !saveDataMapList )
                sub_1C32E7C(v52);
              items = saveDataMapList->fields._items;
              v58 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C32E7C(v52);
              v59 = saveDataMapList->fields._size;
              if ( (unsigned int)v59 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v52,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &items->obj.klass + v59;
                saveDataMapList->fields._size = v59 + 1;
                v60[4] = (Il2CppClass *)v55;
                sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 4), v55, v53, v54);
              }
              --size;
            }
            while ( size );
          }
          v61 = v43->klass;
          v62 = *(unsigned __int16 *)&v43->klass->_2.rank;
          if ( *(_WORD *)&v43->klass->_2.rank )
          {
            v63 = &v61->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
            {
              --v62;
              v63 += 4;
              if ( !v62 )
                goto LABEL_73;
            }
            v64 = (__int64)&v61->vtable + 16 * *v63;
          }
          else
          {
LABEL_73:
            v64 = sub_1C83438(v43, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v64)(v43, *(_QWORD *)(v64 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v19, 0);
        v2->fields.__2__current = (Il2CppObject *)v19;
        v20 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(v20, (int32_t)v19, v21, v22);
        v23 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, 0);
      v24 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v24 = DataManager_TypeInfo;
      }
      static_fields = v24->static_fields;
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
        sub_1C32E7C(this);
      goto LABEL_28;
    default:
      v8 = 0;
      return v8 & 1;
  }
}


Il2CppObject *DataManager__readMasterData_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterData_d__48__System_Collections_IEnumerator_Reset(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DataManager__readMasterData_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DataManager__readMasterData_d__48__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterData_d__48__System_IDisposable_Dispose(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__readMasterVersion_d__47___ctor(
        DataManager__readMasterVersion_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterVersion_d__47__MoveNext(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterVersion_d__47_o *v2; // x19
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
  if ( (byte_4C3748C & 1) == 0 )
  {
    sub_1C32C20(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__47_o *)sub_1C32C20(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C3748C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C32E7C(this);
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


Il2CppObject *DataManager__readMasterVersion_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterVersion_d__47__System_Collections_IEnumerator_Reset(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DataManager__readMasterVersion_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DataManager__readMasterVersion_d__47__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterVersion_d__47__System_IDisposable_Dispose(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateMasterData_d__50___ctor(
        DataManager__updateMasterData_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateMasterData_d__50__MoveNext(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  DataManager__updateMasterData_d__50_o *v4; // x19
  struct DataManager_o *_4__this; // x20
  DataManager_c *v6; // x0
  int v7; // w8
  MasterDataUnpakcer_o *v8; // x21
  __int64 v9; // x0
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  CGThumbnailListItem_o *v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v19; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v21; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  DataManager_c *v31; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v33; // x21
  System_Byte_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  DataManager_c *v39; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Func_bool__o *v55; // x21
  UnityEngine_WaitUntil_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  CGThumbnailListItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_WaitForEndOfFrame_o *v64; // x20
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int v67; // w8
  DataManager_c *v68; // x8
  struct DataManager_StaticFields *v69; // x8
  int v70; // w9
  Il2CppObject *v71; // x22
  DataManager__updateMasterData_d__50_o **p__8__1; // x21
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct DataMasterBase_array *v77; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v79; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass50_0_o *_8__1; // x8
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x0
  struct DataManager___c__DisplayClass50_0_o *v85; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct DataManager___c__DisplayClass50_0_o *v90; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__50_o *v93; // x24
  System_Predicate_object__o *v94; // x23
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Collections_Generic_List_object__o *v100; // x22
  DataManager__updateMasterData_d__50_o *v101; // x24
  System_Predicate_object__o *v102; // x23
  int32_t Index; // w0
  int32_t v104; // w22
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  Il2CppObject *v107; // x1
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 _2__current_low; // x10
  __int64 v111; // x8
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  Il2CppObject *p_obj; // x1
  __int64 v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x8
  UnityEngine_WaitForEndOfFrame_o *v119; // x20
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  ManagerConfig_c *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  struct System_Collections_Generic_List_string__o *v127; // x8
  System_Collections_Generic_List_int__o *v128; // x22
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  ManagerConfig_c *v131; // x0
  __int64 v132; // x22
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  DataManager__updateMasterData_d__50_o *v135; // x23
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  DataManager__updateMasterData_d__50_o *v138; // x23
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  DataManager__updateMasterData_d__50_o *v141; // x23
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  DataManager__updateMasterData_d__50_o *v144; // x23
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  DataManager__updateMasterData_d__50_o *v147; // x23
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  DataManager__updateMasterData_d__50_o *v150; // x23
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  DataManager__updateMasterData_d__50_o *v153; // x23
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  DataManager__updateMasterData_d__50_o *v156; // x23
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  DataManager__updateMasterData_d__50_o *v159; // x23
  __int64 v160; // x8
  __int64 v161; // x29
  _QWORD *v162; // x23
  __int64 v163; // x24
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  __int64 v166; // x1
  System_Collections_Generic_List_object__o *v167; // x25
  System_Predicate_object__o *v168; // x26
  int32_t v169; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_38BE6C8 *v171; // x3
  const MethodInfo_38BE6C8 *v172; // x3
  __int64 v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  UnityEngine_WaitForEndOfFrame_o *v176; // x20
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  ManagerConfig_c *v179; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v181; // x0
  int v182; // w21
  DataManager_c *v183; // x8
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  const MethodInfo *v187; // x3
  struct System_Collections_Generic_List_string__o *v188; // x8
  int32_t size; // w2
  int v190; // w9
  struct System_Collections_Generic_List_long____o *v191; // x8
  int32_t v192; // w2
  int v193; // w9
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  UnityEngine_WaitForEndOfFrame_o *v197; // x20
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  __int64 v203; // x0
  struct DataMasterBase_array *v204; // x9
  EventRandomMissionClearManager_c *v205; // x0
  DataManager_c *v206; // x8
  UnityEngine_WaitForEndOfFrame_o *v207; // x20
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  DataManager__updateMasterData_d__50_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  __int64 v211; // [xsp+8h] [xbp-98h] BYREF
  __int64 v212; // [xsp+10h] [xbp-90h]
  __int64 v213; // [xsp+18h] [xbp-88h] BYREF
  __int64 v214; // [xsp+20h] [xbp-80h]
  int v215; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v217; // 0:x0.16
  System_Nullable_long__o v218; // 0:x0.16

  v4 = this;
  if ( (byte_4C3748D & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1C32C20(&Method_DataManager__updateMasterData_b__50_0__);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&DataMasterBase___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&System_GC_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&LogoMain_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&MasterDataUnpakcer_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    sub_1C32C20(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C32C20(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&OtherUserNewManager_TypeInfo);
    sub_1C32C20(&System_Predicate_string__TypeInfo);
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    sub_1C32C20(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C32C20(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__);
    sub_1C32C20(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__);
    sub_1C32C20(&DataManager___c__DisplayClass50_0_TypeInfo);
    sub_1C32C20(&Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__);
    sub_1C32C20(&DataManager___c__DisplayClass50_1_TypeInfo);
    sub_1C32C20(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C32C20(&UserCommandCodeNewManager_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    sub_1C32C20(&UserMissionProgressManager_TypeInfo);
    sub_1C32C20(&UserServantCollectionManager_TypeInfo);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    sub_1C32C20(&UserServantNewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C32C20(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C32C20(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__50_o *)sub_1C32C20(&StringLiteral_11480/*"SCRIPT"*/);
    byte_4C3748D = 1;
  }
  lockTaken = 0;
  v215 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
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
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_134;
      v4->fields._dataMapDict_5__6 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v25, v26);
      v4->fields._dataMapObject_5__7 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v27, v28);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v29, v30);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      updateData = v31->static_fields->updateData;
      if ( !updateData )
        sub_1C32E7C(0);
      v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))updateData->klass->vtable[3].methodPtr)(
                                 updateData,
                                 updateData->klass->vtable[3].method);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v34 = System_Convert__FromBase64String(v33, 0);
      v4->fields._cryptBytes_5__8 = v34;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v34, v35, v36);
      v39 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v39 = DataManager_TypeInfo;
      }
      static_fields = v39->static_fields;
      static_fields->updateData = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->updateData, 0, v37, v38);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v41, 0);
      v4->fields.__2__current = (Il2CppObject *)v41;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C32BC4(p__2__current, (int32_t)v41, v43, v44);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v47 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0);
      if ( !_4__this )
        sub_1C32E7C(v47);
      _4__this->fields.masterDataBytes = v47;
      sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v47, v48, v49);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v50, v51);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v52, 0);
      v4->fields.__2__current = (Il2CppObject *)v52;
      v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C32BC4(v14, (int32_t)v52, v53, v54);
      v17 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v8 = (MasterDataUnpakcer_o *)sub_1C32E6C(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v8, 0);
      if ( !_4__this )
        sub_1C32E7C(v9);
      if ( !v8 )
        sub_1C32E7C(v9);
      v10 = MasterDataUnpakcer__Unpack_40862248(v8, _4__this->fields.masterDataBytes, 0);
      v4->fields._dataMapObject_5__7 = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v10, v11, v12);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0);
      v4->fields.__2__current = (Il2CppObject *)v13;
      v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C32BC4(v14, (int32_t)v13, v15, v16);
      v17 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v4->fields._dataMapObject_5__7;
      v4->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v19 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        naturalAligment = System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.naturalAligment;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v21 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v21 = 0;
        }
        else
        {
          v21 = 0;
        }
        v4->fields._dataMapDict_5__6 = v21;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == v19 )
            v59 = (int)dataMapObject_5__7;
          else
            v59 = 0;
        }
        else
        {
          v59 = 0;
        }
      }
      else
      {
        v59 = 0;
        v4->fields._dataMapDict_5__6 = 0;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1C32BC4(p_dataMapDict_5__6, v59, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v64 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v64, 0);
        v4->fields.__2__current = (Il2CppObject *)v64;
        v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C32BC4(v14, (int32_t)v64, v65, v66);
        v17 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v67 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v67 < v4->fields._dataListCount_5__2 )
        {
          v71 = (Il2CppObject *)sub_1C32E6C(DataManager___c__DisplayClass50_0_TypeInfo);
          System_Object___ctor(v71, 0);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass50_0_o *)v71;
          p__8__1 = (DataManager__updateMasterData_d__50_o **)&v4->fields.__8__1;
          sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v71, v73, v74);
          v77 = _4__this->fields.datalist;
          if ( !v77 )
            goto LABEL_291;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v77->max_length) )
            goto LABEL_292;
          v79 = v77->m_Items[i_5__9];
          if ( !v79 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v79->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v75, v76);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__50_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v82, v83);
            v85 = v4->fields.__8__1;
            if ( !v85 )
              sub_1C32E7C(v84);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C32E7C(0);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v85->fields.masterName,
                     (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v88, v89);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v200, 0);
              v4->fields.__2__current = (Il2CppObject *)v200;
              v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C32BC4(v14, (int32_t)v200, v201, v202);
              v17 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__50_o **)&v4->fields.__8__1;
            v90 = v4->fields.__8__1;
            if ( !v90 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v90->fields.masterName,
                                                              (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( SLODWORD(dataMap_5__10->max_length) < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v183 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v183 = DataManager_TypeInfo;
                }
                v69 = v183->static_fields;
                result = 0;
                v70 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v93 = *p__8__1;
            v94 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v94,
              (Il2CppObject *)v93,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__,
              0);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v94,
                                                              (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              v107 = *(Il2CppObject **)&(*p__8__1)->fields.__1__state;
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
                  v107,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
              }
              else
              {
                v111 = v108 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v111 + 32) = v107;
                sub_1C32BC4((CGThumbnailListItem_o *)(v111 + 32), (int32_t)v107, v95, v96);
              }
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              p_obj = &v4->fields._dataMap_5__10->obj;
              v115 = *(_QWORD *)&this->fields.__1__state;
              v116 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v115 )
                goto LABEL_291;
              v117 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v117 >= *(_DWORD *)(v115 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  p_obj,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
              }
              else
              {
                v118 = v115 + 8 * v117;
                LODWORD(this->fields.__2__current) = v117 + 1;
                *(_QWORD *)(v118 + 32) = p_obj;
                sub_1C32BC4((CGThumbnailListItem_o *)(v118 + 32), (int32_t)p_obj, v112, v113);
              }
              ++v4->fields._saveDataCount_5__3;
            }
            else
            {
              v97 = (int)this;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                v97,
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_3798540 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0;
            v4->fields._isAdd_5__4 = 1;
            sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v98, v99);
          }
          else
          {
            v100 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v101 = *p__8__1;
            v102 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v102,
              (Il2CppObject *)v101,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__,
              0);
            if ( !v100 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v100,
                      (System_Predicate_T__o *)v102,
                      (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( Index < 0 )
              goto LABEL_125;
            v104 = Index;
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v104,
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v104,
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)p__8__1, 0, v105, v106);
LABEL_125:
          v67 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v67;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0) )
      {
LABEL_129:
        if ( !v4->fields._isAdd_5__4 )
        {
          v122 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v122 = ManagerConfig_TypeInfo;
          }
          if ( !v122->static_fields->UseMock )
            goto LABEL_83;
        }
        v4->fields._dataMapDict_5__6 = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v123, v124);
        v4->fields._cryptBytes_5__8 = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v125, v126);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v127 = _4__this->fields.saveNameList;
        if ( !v127 )
LABEL_291:
          sub_1C32E7C(this);
        if ( v127->fields._size <= 0 )
        {
LABEL_83:
          v68 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v68 = DataManager_TypeInfo;
          }
          v69 = v68->static_fields;
          result = 0;
          v70 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v128 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v128,
          (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v128;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v128, v129, v130);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__50_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v131 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v131 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v131->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11480/*"SCRIPT"*/,
                 0) )
          {
            this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0) )
            {
              v132 = sub_1C32CC8(DataMasterBase___TypeInfo, 9);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v132 )
                goto LABEL_291;
              v135 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v132 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v132 + 32) = v135;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 32), (int32_t)v135, v133, v134);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
              v138 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 40) = v138;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 40), (int32_t)v138, v136, v137);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v141 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 48) = v141;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 48), (int32_t)v141, v139, v140);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v144 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 56) = v144;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 56), (int32_t)v144, v142, v143);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v147 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 64) = v147;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 64), (int32_t)v147, v145, v146);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantMaster___);
              v150 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 72) = v150;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 72), (int32_t)v150, v148, v149);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v153 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 80) = v153;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 80), (int32_t)v153, v151, v152);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v156 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 88) = v156;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 88), (int32_t)v156, v154, v155);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantAddMaster___);
              v159 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C32D5C(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v203 = sub_1C32EA0(this);
                  sub_1C32D48(v203, 0);
                }
              }
              if ( *(_DWORD *)(v132 + 24) <= 8u )
LABEL_292:
                sub_1C32E84(this);
              *(_QWORD *)(v132 + 96) = v159;
              sub_1C32BC4((CGThumbnailListItem_o *)(v132 + 96), (int32_t)v159, v157, v158);
              v160 = *(_QWORD *)(v132 + 24);
              if ( (int)v160 >= 1 )
              {
                v161 = 0;
                while ( (unsigned int)v161 < (unsigned int)v160 )
                {
                  v162 = *(_QWORD **)(v132 + 32 + 8 * v161);
                  v163 = sub_1C32E6C(DataManager___c__DisplayClass50_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v163, 0);
                  if ( !v162 )
                    goto LABEL_291;
                  if ( !v163 )
                    goto LABEL_291;
                  v166 = v162[3];
                  *(_QWORD *)(v163 + 16) = v166;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v163 + 16), v166, v164, v165);
                  v167 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v168 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v168,
                    (Il2CppObject *)v163,
                    Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__,
                    0);
                  if ( !v167 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v167,
                                                                    (System_Predicate_T__o *)v168,
                                                                    (const MethodInfo_3799014 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v169 = (int)this;
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v169,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v217.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v217.fields.hasValue = &v213;
                    v213 = 0;
                    v214 = 0;
                    System_Nullable_long____ctor(v217, Method_System_Nullable_long___ctor__, v171);
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v169,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v218.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v218.fields.hasValue = &v211;
                    v211 = 0;
                    v212 = 0;
                    System_Nullable_long____ctor(v218, Method_System_Nullable_long___ctor__, v172);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v162 + 424LL))(
                      v162,
                      masterDataBytes,
                      v213,
                      v214,
                      v211,
                      v212,
                      *(_QWORD *)(*v162 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v173 = *(_QWORD *)&this->fields.__1__state;
                    v174 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v173 )
                      goto LABEL_291;
                    v175 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v175 >= *(_DWORD *)(v173 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v169,
                        *(const MethodInfo_377B798 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v175 + 1;
                      *(_DWORD *)(v173 + 4 * v175 + 32) = v169;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v160 = *(_QWORD *)(v132 + 24);
                  if ( (int)++v161 >= (int)v160 )
                    goto LABEL_192;
                }
                goto LABEL_292;
              }
LABEL_192:
              this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0);
                  v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v176, 0);
                  v4->fields.__2__current = (Il2CppObject *)v176;
                  v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1C32BC4(v14, (int32_t)v176, v177, v178);
                  v17 = 7;
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
          v179 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v179 = ManagerConfig_TypeInfo;
          }
          if ( !v179->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v197, 0);
              v4->fields.__2__current = (Il2CppObject *)v197;
              v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C32BC4(v14, (int32_t)v197, v198, v199);
              v17 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__50_o *)DataManager__getCacheFileName(0);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0);
              v55 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(v55, (Il2CppObject *)_4__this, Method_DataManager__updateMasterData_b__50_0__, 0);
              v56 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v56, v55, 0);
              v4->fields.__2__current = (Il2CppObject *)v56;
              v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C32BC4(v14, (int32_t)v56, v57, v58);
              v17 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_65447948(lockCountObj, &lockTaken, 0);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v182 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v181 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v181 = DataManager_TypeInfo;
          }
          v181->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0);
          v182 = 20;
        }
        else
        {
          v182 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0);
        if ( v182 == 62 )
        {
          v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v184, 0);
          v4->fields.__2__current = (Il2CppObject *)v184;
          v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C32BC4(v14, (int32_t)v184, v185, v186);
          v17 = 11;
          goto LABEL_82;
        }
        if ( v182 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0);
          v188 = _4__this->fields.saveNameList;
          if ( v188 )
          {
            size = v188->fields._size;
            v190 = v188->fields._version + 1;
            v188->fields._size = 0;
            v188->fields._version = v190;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v188->fields._items, 0, size, 0);
            v191 = _4__this->fields.saveDataMapList;
            if ( v191 )
            {
              v192 = v191->fields._size;
              v193 = v191->fields._version + 1;
              v191->fields._size = 0;
              v191->fields._version = v193;
              if ( v192 >= 1 )
                System_Array__Clear((System_Array_o *)v191->fields._items, 0, v192, 0);
              _4__this->fields.masterDataBytes = 0;
              sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v192, v187);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v194, 0);
              v4->fields.__2__current = (Il2CppObject *)v194;
              v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C32BC4(v14, (int32_t)v194, v195, v196);
              v17 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v119 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v119, 0);
      v4->fields.__2__current = (Il2CppObject *)v119;
      v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C32BC4(v14, (int32_t)v119, v120, v121);
      v17 = 6;
LABEL_82:
      LODWORD(v14[-1].fields._ThumbnailSpritePath_k__BackingField) = v17;
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
        v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v61, 0);
        v4->fields.__2__current = (Il2CppObject *)v61;
        v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C32BC4(v14, (int32_t)v61, v62, v63);
        v17 = 10;
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
        v204 = _4__this->fields.datalist;
        if ( !v204 )
          goto LABEL_291;
        if ( (unsigned int)v7 >= LODWORD(v204->max_length) )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__50_o *)v204->m_Items[v7];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__50_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__50_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__50_o *)DataManager__CheckWaitforFrame(_4__this, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v207 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v207, 0);
            v4->fields.__2__current = (Il2CppObject *)v207;
            v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C32BC4(v14, (int32_t)v207, v208, v209);
            v17 = 13;
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
      v205 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v205);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0);
      v206 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v206 = DataManager_TypeInfo;
      }
      v69 = v206->static_fields;
      result = 0;
      v70 = 1;
LABEL_289:
      v69->updateMasterDataResult = v70;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *DataManager__updateMasterData_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateMasterData_d__50__System_Collections_IEnumerator_Reset(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DataManager__updateMasterData_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DataManager__updateMasterData_d__50__System_Collections_IEnumerator_get_Current(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateMasterData_d__50__System_IDisposable_Dispose(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateWebViewData_d__39___ctor(
        DataManager__updateWebViewData_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateWebViewData_d__39__MoveNext(
        DataManager__updateWebViewData_d__39_o *this,
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
  DataManager_c *v11; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataManager_c *v18; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  UnityEngine_WaitForEndOfFrame_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v27; // x21
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  Il2CppObject **v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int v35; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_40836796; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_WaitForEndOfFrame_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  System_Collections_Generic_Dictionary_string__object__o *v48; // x23
  __int64 naturalAligment; // x9
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3

  if ( (byte_4C3748E & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C32C20(&StringLiteral_18226/*"contactURL"*/);
    sub_1C32C20(&StringLiteral_19440/*"filePass"*/);
    sub_1C32C20(&StringLiteral_17043/*"baseURL"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3748E = 1;
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v7, v8);
      this->fields._dataObject_5__4 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v9, v10);
      v11 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v11 = DataManager_TypeInfo;
      }
      webViewData = v11->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v13 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))webViewData->klass->vtable[3].methodPtr)(
                                        webViewData,
                                        webViewData->klass->vtable[3].method);
      this->fields._cryptString_5__3 = v13;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v13, v14, v15);
      v18 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v18 = DataManager_TypeInfo;
      }
      static_fields = v18->static_fields;
      static_fields->webViewData = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v16, v17);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v21, 0);
        this->fields.__2__current = (Il2CppObject *)v21;
        p__2__current = &this->fields.__2__current;
        sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v21, v23, v24);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v27 = System_Convert__FromBase64String(cryptString_5__3, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v28 = CatAndMouseGame__MouseGame2MsgPack(v27, 0, 0);
      this->fields._dataObject_5__4 = v28;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v28, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v31, 0);
        this->fields.__2__current = (Il2CppObject *)v31;
        v32 = &this->fields.__2__current;
        sub_1C32BC4((CGThumbnailListItem_o *)v32, (int32_t)v31, v33, v34);
        v35 = 2;
LABEL_30:
        *((_DWORD *)v32 - 2) = v35;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_40836796 = JsonManager__getDictionary_40836796(dataObject_5__4, 0);
      this->fields._data_5__2 = Dictionary_40836796;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_40836796, v38, v39);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v40, 0);
        this->fields.__2__current = (Il2CppObject *)v40;
        v32 = &this->fields.__2__current;
        sub_1C32BC4((CGThumbnailListItem_o *)v32, (int32_t)v40, v41, v42);
        v35 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v45 = (System_String_o *)StringLiteral_1/*""*/;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17043/*"baseURL"*/,
              (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17043/*"baseURL"*/,
               (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v46 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18226/*"contactURL"*/,
              (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18226/*"contactURL"*/,
               (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19440/*"filePass"*/,
             (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C32E7C(Item);
        v47 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19440/*"filePass"*/,
                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v48 = (System_Collections_Generic_Dictionary_string__object__o *)v47;
        if ( v47 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v47->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (System_Collections_Generic_Dictionary_string__object__c *)v47->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C3313C(v47);
LABEL_54:
            sub_1C32E7C(webViewData);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v46, v45, v48, 0);
      }
LABEL_50:
      this->fields._data_5__2 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v50, v51);
      this->fields._dataObject_5__4 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v52, v53);
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


Il2CppObject *DataManager__updateWebViewData_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateWebViewData_d__39__System_Collections_IEnumerator_Reset(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DataManager__updateWebViewData_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DataManager__updateWebViewData_d__39__System_Collections_IEnumerator_get_Current(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateWebViewData_d__39__System_IDisposable_Dispose(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  ;
}