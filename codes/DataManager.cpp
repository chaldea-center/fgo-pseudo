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

  if ( (byte_4C56820 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C56820 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0;
  static_fields->updateData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->updateData, 0, v1, v2);
  v4 = DataManager_TypeInfo->static_fields;
  v4->webViewData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->webViewData, 0, v5, v6);
  v7 = StringLiteral_1/*""*/;
  v8 = DataManager_TypeInfo->static_fields;
  v8->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->serverHash, v7, v9, v10);
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

  if ( (byte_4C5681F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long____TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4C5681F = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v6, v7, v8);
  v9 = (Il2CppObject *)sub_1C3E7B0(object_TypeInfo);
  System_Object___ctor(v9, 0);
  this->fields.lockCountObj = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4C567FC & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C567FC = 1;
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

  if ( (byte_4C567FD & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C567FD = 1;
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

  if ( (byte_4C567FB & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C567FB = 1;
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

  if ( (byte_4C56816 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4C56816 = 1;
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
    sub_1C3E7C0(v3, method);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ServantCommentMaster_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ServantProfileMaster_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  WarMaster_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UserMaster_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UserGameMaster_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  TblUserMaster_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UserItemMaster_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UserServantMaster_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UserServantStorageMaster_o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UserAccessaryMaster_o *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UserQuestMaster_o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BattleMaster_o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  OtherUserGameMaster_o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  TblFriendMaster_o *v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  AreaMaster_o *v53; // x20
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ServantCardMaster_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  EventMaster_o *v59; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  ItemMaster_o *v62; // x20
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  QuestMaster_o *v65; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  QuestAddMaster_o *v68; // x20
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  QuestReleaseMaster_o *v71; // x20
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  QuestDateRangeMaster_o *v74; // x20
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  QuestPhaseMaster_o *v77; // x20
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  QuestPhaseDetailMaster_o *v80; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  QuestGroupMaster_o *v83; // x20
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  QuestRandomGroupMaster_o *v86; // x20
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  QuestConsumeItemMaster_o *v89; // x20
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  QuestMessageMaster_o *v92; // x20
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UserQuestInfoMaster_o *v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  UserQuestRecordMaster_o *v98; // x20
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  ViewQuestInfoMaster_o *v101; // x20
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ViewEnemyMaster_o *v104; // x20
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  ViewQuestEnemyInfoMaster_o *v107; // x20
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  BlankEarthSpotMaster_o *v110; // x20
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  BlankEarthSpotAddMaster_o *v113; // x20
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  SpotMaster_o *v116; // x20
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  SpotImageMaster_o *v119; // x20
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  SpotRoadMaster_o *v122; // x20
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  SpotPathMaster_o *v125; // x20
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  SpotAddMaster_o *v128; // x20
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  MapGimmickMaster_o *v131; // x20
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  GiftMaster_o *v134; // x20
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  GiftAddMaster_o *v137; // x20
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  ShopMaster_o *v140; // x20
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  StoneShopMaster_o *v143; // x20
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  BankShopMaster_o *v146; // x20
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  ShopScriptMaster_o *v149; // x20
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  StageMaster_o *v152; // x20
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  ServantGroupMaster_o *v155; // x20
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  ServantLimitMaster_o *v158; // x20
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  ServantLimitAddMaster_o *v161; // x20
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  ServantSkillMaster_o *v164; // x20
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  ServantPassiveSkillMaster_o *v167; // x20
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  BgmMaster_o *v170; // x20
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  ServantScriptMaster_o *v173; // x20
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  NewsMaster_o *v176; // x20
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  TelopMaster_o *v179; // x20
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  UserExpMaster_o *v182; // x20
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  TreasureDvcMaster_o *v185; // x20
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  ServantTreasureDvcMaster_o *v188; // x20
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  SkillMaster_o *v191; // x20
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  SkillLvMaster_o *v194; // x20
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  SkillDetailMaster_o *v197; // x20
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  CommandSpellMaster_o *v200; // x20
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  EquipMaster_o *v203; // x20
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  EquipExpMaster_o *v206; // x20
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  EquipSkillMaster_o *v209; // x20
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  SubEquipMaster_o *v212; // x20
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  AccessaryMaster_o *v215; // x20
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  UserPresentBoxMaster_o *v218; // x20
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  UserDeckMaster_o *v221; // x20
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  UserSubEquipMaster_o *v224; // x20
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  GachaMaster_o *v227; // x20
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  GachaImageMaster_o *v230; // x20
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  UserGachaMaster_o *v233; // x20
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  UserEquipMaster_o *v236; // x20
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  UserServantCollectionMaster_o *v239; // x20
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  FriendshipMaster_o *v242; // x20
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  GachaTicketMaster_o *v245; // x20
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  UserFormationMaster_o *v248; // x20
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  FunctionMaster_o *v251; // x20
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  BuffMaster_o *v254; // x20
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  GachaReleaseMaster_o *v257; // x20
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  CombineQpMaster_o *v260; // x20
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  CombineMaterialMaster_o *v263; // x20
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  EventCombineMaster_o *v266; // x20
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  ServantExpMaster_o *v269; // x20
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  CombineSkillMaster_o *v272; // x20
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  CombineTdMaster_o *v275; // x20
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  EventQuestMaster_o *v278; // x20
  int32_t v279; // w2
  const MethodInfo *v280; // x3
  EventCampaignMaster_o *v281; // x20
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  IllustratorMaster_o *v284; // x20
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  CvMaster_o *v287; // x20
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  TreasureDvcLvMaster_o *v290; // x20
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  TreasureDvcDetailMaster_o *v293; // x20
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  UserFollowerMaster_o *v296; // x20
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  NpcFollowerMaster_o *v299; // x20
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  NpcServantFollowerMaster_o *v302; // x20
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  UserEventMaster_o *v305; // x20
  int32_t v306; // w2
  const MethodInfo *v307; // x3
  UserShopMaster_o *v308; // x20
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  UserContinueMaster_o *v311; // x20
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  ConstantMaster_o *v314; // x20
  int32_t v315; // w2
  const MethodInfo *v316; // x3
  ConstantLongMaster_o *v317; // x20
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  ConstantStrMaster_o *v320; // x20
  int32_t v321; // w2
  const MethodInfo *v322; // x3
  AiMaster_o *v323; // x20
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  AiActMaster_o *v326; // x20
  int32_t v327; // w2
  const MethodInfo *v328; // x3
  AttriRelationMaster_o *v329; // x20
  int32_t v330; // w2
  const MethodInfo *v331; // x3
  ClassRelationMaster_o *v332; // x20
  int32_t v333; // w2
  const MethodInfo *v334; // x3
  EffectMaster_o *v335; // x20
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  EquipImageMaster_o *v338; // x20
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  ServantVoiceMaster_o *v341; // x20
  int32_t v342; // w2
  const MethodInfo *v343; // x3
  CombineLimitMaster_o *v344; // x20
  int32_t v345; // w2
  const MethodInfo *v346; // x3
  CardMaster_o *v347; // x20
  int32_t v348; // w2
  const MethodInfo *v349; // x3
  CombineQpSvtEquipMaster_o *v350; // x20
  int32_t v351; // w2
  const MethodInfo *v352; // x3
  ServantRarityMaster_o *v353; // x20
  int32_t v354; // w2
  const MethodInfo *v355; // x3
  SetItemMaster_o *v356; // x20
  int32_t v357; // w2
  const MethodInfo *v358; // x3
  RecoverMaster_o *v359; // x20
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  BannerMaster_o *v362; // x20
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  ShopReleaseMaster_o *v365; // x20
  int32_t v366; // w2
  const MethodInfo *v367; // x3
  EventRewardMaster_o *v368; // x20
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  EventDetailMaster_o *v371; // x20
  int32_t v372; // w2
  const MethodInfo *v373; // x3
  EventServantMaster_o *v374; // x20
  int32_t v375; // w2
  const MethodInfo *v376; // x3
  BoxGachaMaster_o *v377; // x20
  int32_t v378; // w2
  const MethodInfo *v379; // x3
  BoxGachaBaseMaster_o *v380; // x20
  int32_t v381; // w2
  const MethodInfo *v382; // x3
  BoxGachaTalkMaster_o *v383; // x20
  int32_t v384; // w2
  const MethodInfo *v385; // x3
  UserBoxGachaMaster_o *v386; // x20
  int32_t v387; // w2
  const MethodInfo *v388; // x3
  BoxGachaHistoryMaster_o *v389; // x20
  int32_t v390; // w2
  const MethodInfo *v391; // x3
  BattleBgMaster_o *v392; // x20
  int32_t v393; // w2
  const MethodInfo *v394; // x3
  TipsBattleMaster_o *v395; // x20
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  UserLoginMaster_o *v398; // x20
  int32_t v399; // w2
  const MethodInfo *v400; // x3
  VoiceMaster_o *v401; // x20
  int32_t v402; // w2
  const MethodInfo *v403; // x3
  EventRewardExtraMaster_o *v404; // x20
  int32_t v405; // w2
  const MethodInfo *v406; // x3
  EventMissionMaster_o *v407; // x20
  int32_t v408; // w2
  const MethodInfo *v409; // x3
  EventMissionActionMaster_o *v410; // x20
  int32_t v411; // w2
  const MethodInfo *v412; // x3
  EventMissionActionAddMaster_o *v413; // x20
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  EventMissionConditionMaster_o *v416; // x20
  int32_t v417; // w2
  const MethodInfo *v418; // x3
  EventMissionCondDetailMaster_o *v419; // x20
  int32_t v420; // w2
  const MethodInfo *v421; // x3
  EventMissionAddMaster_o *v422; // x20
  int32_t v423; // w2
  const MethodInfo *v424; // x3
  CompleteMissionMaster_o *v425; // x20
  int32_t v426; // w2
  const MethodInfo *v427; // x3
  EventRewardSetMaster_o *v428; // x20
  int32_t v429; // w2
  const MethodInfo *v430; // x3
  UserEventMissionMaster_o *v431; // x20
  int32_t v432; // w2
  const MethodInfo *v433; // x3
  UserEventMissionCondDetailMaster_o *v434; // x20
  int32_t v435; // w2
  const MethodInfo *v436; // x3
  BoxGachaBaseDetailMaster_o *v437; // x20
  int32_t v438; // w2
  const MethodInfo *v439; // x3
  UserServantLeaderMaster_o *v440; // x20
  int32_t v441; // w2
  const MethodInfo *v442; // x3
  ClosedMessageMaster_o *v443; // x20
  int32_t v444; // w2
  const MethodInfo *v445; // x3
  FunctionGroupMaster_o *v446; // x20
  int32_t v447; // w2
  const MethodInfo *v448; // x3
  EventRaidMaster_o *v449; // x20
  int32_t v450; // w2
  const MethodInfo *v451; // x3
  TotalEventRaidMaster_o *v452; // x20
  int32_t v453; // w2
  const MethodInfo *v454; // x3
  UserEventRaidMaster_o *v455; // x20
  int32_t v456; // w2
  const MethodInfo *v457; // x3
  EventPointMaster_o *v458; // x20
  int32_t v459; // w2
  const MethodInfo *v460; // x3
  EventPointGroupMaster_o *v461; // x20
  int32_t v462; // w2
  const MethodInfo *v463; // x3
  TotalEventPointMaster_o *v464; // x20
  int32_t v465; // w2
  const MethodInfo *v466; // x3
  UserEventPointMaster_o *v467; // x20
  int32_t v468; // w2
  const MethodInfo *v469; // x3
  EventPointUpperMaster_o *v470; // x20
  int32_t v471; // w2
  const MethodInfo *v472; // x3
  EventPointUpperReleaseMaster_o *v473; // x20
  int32_t v474; // w2
  const MethodInfo *v475; // x3
  EventRaceMaster_o *v476; // x20
  int32_t v477; // w2
  const MethodInfo *v478; // x3
  EventRaceResultMaster_o *v479; // x20
  int32_t v480; // w2
  const MethodInfo *v481; // x3
  QuestRacePointMaster_o *v482; // x20
  int32_t v483; // w2
  const MethodInfo *v484; // x3
  UserEventRaceMaster_o *v485; // x20
  int32_t v486; // w2
  const MethodInfo *v487; // x3
  EventScriptMaster_o *v488; // x20
  int32_t v489; // w2
  const MethodInfo *v490; // x3
  EventScriptReleaseMaster_o *v491; // x20
  int32_t v492; // w2
  const MethodInfo *v493; // x3
  UserPresentHistoryMaster_o *v494; // x20
  int32_t v495; // w2
  const MethodInfo *v496; // x3
  MstMissionMaster_o *v497; // x20
  int32_t v498; // w2
  const MethodInfo *v499; // x3
  ServantExceedMaster_o *v500; // x20
  int32_t v501; // w2
  const MethodInfo *v502; // x3
  PartialMaintenanceMaster_o *v503; // x20
  int32_t v504; // w2
  const MethodInfo *v505; // x3
  GuideMaster_o *v506; // x20
  int32_t v507; // w2
  const MethodInfo *v508; // x3
  MstMissionDisplayInfoMaster_o *v509; // x20
  int32_t v510; // w2
  const MethodInfo *v511; // x3
  GachaGroupMaster_o *v512; // x20
  int32_t v513; // w2
  const MethodInfo *v514; // x3
  QuestResetMaster_o *v515; // x20
  int32_t v516; // w2
  const MethodInfo *v517; // x3
  WarAddMaster_o *v518; // x20
  int32_t v519; // w2
  const MethodInfo *v520; // x3
  EventItemDisplayMaster_o *v521; // x20
  int32_t v522; // w2
  const MethodInfo *v523; // x3
  EventItemDisplayGroupMaster_o *v524; // x20
  int32_t v525; // w2
  const MethodInfo *v526; // x3
  EventItemDisplayReleaseMaster_o *v527; // x20
  int32_t v528; // w2
  const MethodInfo *v529; // x3
  EventTutorialMaster_o *v530; // x20
  int32_t v531; // w2
  const MethodInfo *v532; // x3
  EventTutorialCondMaster_o *v533; // x20
  int32_t v534; // w2
  const MethodInfo *v535; // x3
  VoiceReleaseMaster_o *v536; // x20
  int32_t v537; // w2
  const MethodInfo *v538; // x3
  EventSuperBossMaster_o *v539; // x20
  int32_t v540; // w2
  const MethodInfo *v541; // x3
  UserSuperBossMaster_o *v542; // x20
  int32_t v543; // w2
  const MethodInfo *v544; // x3
  QuestScriptMaster_o *v545; // x20
  int32_t v546; // w2
  const MethodInfo *v547; // x3
  QuestScriptReleaseMaster_o *v548; // x20
  int32_t v549; // w2
  const MethodInfo *v550; // x3
  MaterialFolderMaster_o *v551; // x20
  int32_t v552; // w2
  const MethodInfo *v553; // x3
  RestrictionMaster_o *v554; // x20
  int32_t v555; // w2
  const MethodInfo *v556; // x3
  QuestRestrictionMaster_o *v557; // x20
  int32_t v558; // w2
  const MethodInfo *v559; // x3
  ServantVoiceRelationMaster_o *v560; // x20
  int32_t v561; // w2
  const MethodInfo *v562; // x3
  ShopDetailMaster_o *v563; // x20
  int32_t v564; // w2
  const MethodInfo *v565; // x3
  ServantScriptAddMaster_o *v566; // x20
  int32_t v567; // w2
  const MethodInfo *v568; // x3
  CombineMaster_o *v569; // x20
  int32_t v570; // w2
  const MethodInfo *v571; // x3
  AiFieldMaster_o *v572; // x20
  int32_t v573; // w2
  const MethodInfo *v574; // x3
  ServantCommentAddMaster_o *v575; // x20
  int32_t v576; // w2
  const MethodInfo *v577; // x3
  EventFilterMaster_o *v578; // x20
  int32_t v579; // w2
  const MethodInfo *v580; // x3
  UserSupportDeckMaster_o *v581; // x20
  int32_t v582; // w2
  const MethodInfo *v583; // x3
  EventRewardSceneMaster_o *v584; // x20
  int32_t v585; // w2
  const MethodInfo *v586; // x3
  EventVoicePlayMaster_o *v587; // x20
  int32_t v588; // w2
  const MethodInfo *v589; // x3
  GachaSubMaster_o *v590; // x20
  int32_t v591; // w2
  const MethodInfo *v592; // x3
  GachaDetailMaster_o *v593; // x20
  int32_t v594; // w2
  const MethodInfo *v595; // x3
  GachaBaseCollateralMaster_o *v596; // x20
  int32_t v597; // w2
  const MethodInfo *v598; // x3
  GachaAdjustAddMaster_o *v599; // x20
  int32_t v600; // w2
  const MethodInfo *v601; // x3
  GachaBonusSelectMaster_o *v602; // x20
  int32_t v603; // w2
  const MethodInfo *v604; // x3
  GachaBonusSelectLineupMaster_o *v605; // x20
  int32_t v606; // w2
  const MethodInfo *v607; // x3
  ServantChangeMaster_o *v608; // x20
  int32_t v609; // w2
  const MethodInfo *v610; // x3
  VoiceCondMaster_o *v611; // x20
  int32_t v612; // w2
  const MethodInfo *v613; // x3
  BgmReleaseMaster_o *v614; // x20
  int32_t v615; // w2
  const MethodInfo *v616; // x3
  MyRoomAddMaster_o *v617; // x20
  int32_t v618; // w2
  const MethodInfo *v619; // x3
  ShopActionMaster_o *v620; // x20
  int32_t v621; // w2
  const MethodInfo *v622; // x3
  EventRewardSceneReleaseMaster_o *v623; // x20
  int32_t v624; // w2
  const MethodInfo *v625; // x3
  QuestBehaviorMaster_o *v626; // x20
  int32_t v627; // w2
  const MethodInfo *v628; // x3
  MapMaster_o *v629; // x20
  int32_t v630; // w2
  const MethodInfo *v631; // x3
  MapCondMaster_o *v632; // x20
  int32_t v633; // w2
  const MethodInfo *v634; // x3
  MapButtonMaster_o *v635; // x20
  int32_t v636; // w2
  const MethodInfo *v637; // x3
  BannerAddMaster_o *v638; // x20
  int32_t v639; // w2
  const MethodInfo *v640; // x3
  EventAddMaster_o *v641; // x20
  int32_t v642; // w2
  const MethodInfo *v643; // x3
  TotalLoginMaster_o *v644; // x20
  int32_t v645; // w2
  const MethodInfo *v646; // x3
  ServantFilterMaster_o *v647; // x20
  int32_t v648; // w2
  const MethodInfo *v649; // x3
  CombineCostumeMaster_o *v650; // x20
  int32_t v651; // w2
  const MethodInfo *v652; // x3
  ServantCostumeMaster_o *v653; // x20
  int32_t v654; // w2
  const MethodInfo *v655; // x3
  ServantCostumeReleaseMaster_o *v656; // x20
  int32_t v657; // w2
  const MethodInfo *v658; // x3
  StaffPhotoMaster_o *v659; // x20
  int32_t v660; // w2
  const MethodInfo *v661; // x3
  StaffPhotoCostumeMaster_o *v662; // x20
  int32_t v663; // w2
  const MethodInfo *v664; // x3
  UserFriendRequestHistoryMaster_o *v665; // x20
  int32_t v666; // w2
  const MethodInfo *v667; // x3
  UserBlacklistMaster_o *v668; // x20
  int32_t v669; // w2
  const MethodInfo *v670; // x3
  ItemSelectMaster_o *v671; // x20
  int32_t v672; // w2
  const MethodInfo *v673; // x3
  TotalEventRaceMaster_o *v674; // x20
  int32_t v675; // w2
  const MethodInfo *v676; // x3
  EventPointGroupAddMaster_o *v677; // x20
  int32_t v678; // w2
  const MethodInfo *v679; // x3
  VoicePlayGroupMaster_o *v680; // x20
  int32_t v681; // w2
  const MethodInfo *v682; // x3
  VoicePlayCondMaster_o *v683; // x20
  int32_t v684; // w2
  const MethodInfo *v685; // x3
  GachaStoryAdjustMaster_o *v686; // x20
  int32_t v687; // w2
  const MethodInfo *v688; // x3
  ServantFlagMaster_o *v689; // x20
  int32_t v690; // w2
  const MethodInfo *v691; // x3
  ServantFlagReleaseMaster_o *v692; // x20
  int32_t v693; // w2
  const MethodInfo *v694; // x3
  EventLocationCampaignMaster_o *v695; // x20
  int32_t v696; // w2
  const MethodInfo *v697; // x3
  CampaignInfoMaster_o *v698; // x20
  int32_t v699; // w2
  const MethodInfo *v700; // x3
  DialogMessageMaster_o *v701; // x20
  int32_t v702; // w2
  const MethodInfo *v703; // x3
  ServantIndividualityMaster_o *v704; // x20
  int32_t v705; // w2
  const MethodInfo *v706; // x3
  BoardMessageMaster_o *v707; // x20
  int32_t v708; // w2
  const MethodInfo *v709; // x3
  BoardMessageReleaseMaster_o *v710; // x20
  int32_t v711; // w2
  const MethodInfo *v712; // x3
  EventServantFatigueMaster_o *v713; // x20
  int32_t v714; // w2
  const MethodInfo *v715; // x3
  UserEventDeckMaster_o *v716; // x20
  int32_t v717; // w2
  const MethodInfo *v718; // x3
  EventTowerMaster_o *v719; // x20
  int32_t v720; // w2
  const MethodInfo *v721; // x3
  EventTowerRewardMaster_o *v722; // x20
  int32_t v723; // w2
  const MethodInfo *v724; // x3
  EventBulletinBoardMaster_o *v725; // x20
  int32_t v726; // w2
  const MethodInfo *v727; // x3
  EventBulletinBoardReleaseMaster_o *v728; // x20
  int32_t v729; // w2
  const MethodInfo *v730; // x3
  EventFactoryMaster_o *v731; // x20
  int32_t v732; // w2
  const MethodInfo *v733; // x3
  ShopGroupMaster_o *v734; // x20
  int32_t v735; // w2
  const MethodInfo *v736; // x3
  AuraEffectMaster_o *v737; // x20
  int32_t v738; // w2
  const MethodInfo *v739; // x3
  AuraEffectPosOverwriteMaster_o *v740; // x20
  int32_t v741; // w2
  const MethodInfo *v742; // x3
  UserEventMissionFixMaster_o *v743; // x20
  int32_t v744; // w2
  const MethodInfo *v745; // x3
  NotEndEventMissionFixMaster_o *v746; // x20
  int32_t v747; // w2
  const MethodInfo *v748; // x3
  EnemyMstMaster_o *v749; // x20
  int32_t v750; // w2
  const MethodInfo *v751; // x3
  EnemyMstBattleMaster_o *v752; // x20
  int32_t v753; // w2
  const MethodInfo *v754; // x3
  ServantSkillReleaseMaster_o *v755; // x20
  int32_t v756; // w2
  const MethodInfo *v757; // x3
  ServantPassiveSkillReleaseMaster_o *v758; // x20
  int32_t v759; // w2
  const MethodInfo *v760; // x3
  ServantTreasureDeviceReleaseMaster_o *v761; // x20
  int32_t v762; // w2
  const MethodInfo *v763; // x3
  MapGimmickReleaseMaster_o *v764; // x20
  int32_t v765; // w2
  const MethodInfo *v766; // x3
  CommandCodeMaster_o *v767; // x20
  int32_t v768; // w2
  const MethodInfo *v769; // x3
  ServantCommandCodeUnlockMaster_o *v770; // x20
  int32_t v771; // w2
  const MethodInfo *v772; // x3
  UserCommandCodeMaster_o *v773; // x20
  int32_t v774; // w2
  const MethodInfo *v775; // x3
  UserCommandCodeCollectionMaster_o *v776; // x20
  int32_t v777; // w2
  const MethodInfo *v778; // x3
  UserServantCommandCodeMaster_o *v779; // x20
  int32_t v780; // w2
  const MethodInfo *v781; // x3
  UserServantCommandCardMaster_o *v782; // x20
  int32_t v783; // w2
  const MethodInfo *v784; // x3
  CommandCardRankParamMaster_o *v785; // x20
  int32_t v786; // w2
  const MethodInfo *v787; // x3
  CommandCodeSkillMaster_o *v788; // x20
  int32_t v789; // w2
  const MethodInfo *v790; // x3
  CommandCodeSkillReleaseMaster_o *v791; // x20
  int32_t v792; // w2
  const MethodInfo *v793; // x3
  CommandCodeCommentMaster_o *v794; // x20
  int32_t v795; // w2
  const MethodInfo *v796; // x3
  EventStatusMaster_o *v797; // x20
  int32_t v798; // w2
  const MethodInfo *v799; // x3
  EventStatusQuestMaster_o *v800; // x20
  int32_t v801; // w2
  const MethodInfo *v802; // x3
  CommonRestrictionMaster_o *v803; // x20
  int32_t v804; // w2
  const MethodInfo *v805; // x3
  EventPointBuffMaster_o *v806; // x20
  int32_t v807; // w2
  const MethodInfo *v808; // x3
  UserFollowMaster_o *v809; // x20
  int32_t v810; // w2
  const MethodInfo *v811; // x3
  EventRewardGuideReleaseMaster_o *v812; // x20
  int32_t v813; // w2
  const MethodInfo *v814; // x3
  NpcServantEquipMaster_o *v815; // x20
  int32_t v816; // w2
  const MethodInfo *v817; // x3
  EventCampaignReleaseMaster_o *v818; // x20
  int32_t v819; // w2
  const MethodInfo *v820; // x3
  ServantMaterialFolderMaster_o *v821; // x20
  int32_t v822; // w2
  const MethodInfo *v823; // x3
  EventEquipSkillReleaseMaster_o *v824; // x20
  int32_t v825; // w2
  const MethodInfo *v826; // x3
  EventPointActivityMaster_o *v827; // x20
  int32_t v828; // w2
  const MethodInfo *v829; // x3
  FunctionCategoryMaster_o *v830; // x20
  int32_t v831; // w2
  const MethodInfo *v832; // x3
  QuestPickupMaster_o *v833; // x20
  int32_t v834; // w2
  const MethodInfo *v835; // x3
  EventUiMaster_o *v836; // x20
  int32_t v837; // w2
  const MethodInfo *v838; // x3
  EventUiReleaseMaster_o *v839; // x20
  int32_t v840; // w2
  const MethodInfo *v841; // x3
  EventUiValueMaster_o *v842; // x20
  int32_t v843; // w2
  const MethodInfo *v844; // x3
  EventConquestRewardMaster_o *v845; // x20
  int32_t v846; // w2
  const MethodInfo *v847; // x3
  NpcFollowerReleaseMaster_o *v848; // x20
  int32_t v849; // w2
  const MethodInfo *v850; // x3
  EventBonusFilterMaster_o *v851; // x20
  int32_t v852; // w2
  const MethodInfo *v853; // x3
  EventBonusFilterGroupInfoMaster_o *v854; // x20
  int32_t v855; // w2
  const MethodInfo *v856; // x3
  EventBonusFilterGroupMemberMaster_o *v857; // x20
  int32_t v858; // w2
  const MethodInfo *v859; // x3
  UserGachaExtraCountMaster_o *v860; // x20
  int32_t v861; // w2
  const MethodInfo *v862; // x3
  PrivilegeMaster_o *v863; // x20
  int32_t v864; // w2
  const MethodInfo *v865; // x3
  UserPrivilegeMaster_o *v866; // x20
  int32_t v867; // w2
  const MethodInfo *v868; // x3
  UserQuestRouteMaster_o *v869; // x20
  int32_t v870; // w2
  const MethodInfo *v871; // x3
  EventBossStatusUiMaster_o *v872; // x20
  int32_t v873; // w2
  const MethodInfo *v874; // x3
  CommonReleaseMaster_o *v875; // x20
  int32_t v876; // w2
  const MethodInfo *v877; // x3
  QuestSpotReleaseMaster_o *v878; // x20
  int32_t v879; // w2
  const MethodInfo *v880; // x3
  VoiceMaterialCondMaster_o *v881; // x20
  int32_t v882; // w2
  const MethodInfo *v883; // x3
  ClassRelationOverwriteMaster_o *v884; // x20
  int32_t v885; // w2
  const MethodInfo *v886; // x3
  EventGroupMaster_o *v887; // x20
  int32_t v888; // w2
  const MethodInfo *v889; // x3
  TotalBoxGachaMaster_o *v890; // x20
  int32_t v891; // w2
  const MethodInfo *v892; // x3
  ServantTreasureDeviceDamageMaster_o *v893; // x20
  int32_t v894; // w2
  const MethodInfo *v895; // x3
  UserEventServantFatigueMaster_o *v896; // x20
  int32_t v897; // w2
  const MethodInfo *v898; // x3
  EventRewardBgMaster_o *v899; // x20
  int32_t v900; // w2
  const MethodInfo *v901; // x3
  EventFatigueRecoveryMaster_o *v902; // x20
  int32_t v903; // w2
  const MethodInfo *v904; // x3
  EventBoostItemUsedMaster_o *v905; // x20
  int32_t v906; // w2
  const MethodInfo *v907; // x3
  StatusEffectPosOverwriteMaster_o *v908; // x20
  int32_t v909; // w2
  const MethodInfo *v910; // x3
  QuestPhaseDetailAddMaster_o *v911; // x20
  int32_t v912; // w2
  const MethodInfo *v913; // x3
  VoiceClosedMessageMaster_o *v914; // x20
  int32_t v915; // w2
  const MethodInfo *v916; // x3
  ReprintStageMaster_o *v917; // x20
  int32_t v918; // w2
  const MethodInfo *v919; // x3
  UserCombineExpMaster_o *v920; // x20
  int32_t v921; // w2
  const MethodInfo *v922; // x3
  EventBoardGameCellMaster_o *v923; // x20
  int32_t v924; // w2
  const MethodInfo *v925; // x3
  EventBoardGameTokenMaster_o *v926; // x20
  int32_t v927; // w2
  const MethodInfo *v928; // x3
  EventBoardGameTokenRewardMaster_o *v929; // x20
  int32_t v930; // w2
  const MethodInfo *v931; // x3
  UserEventBoardGameTokenMaster_o *v932; // x20
  int32_t v933; // w2
  const MethodInfo *v934; // x3
  ServantAnimationOverwriteMaster_o *v935; // x20
  int32_t v936; // w2
  const MethodInfo *v937; // x3
  OpeningMovieMaster_o *v938; // x20
  int32_t v939; // w2
  const MethodInfo *v940; // x3
  ServantLimitSpoilerProtectionMaster_o *v941; // x20
  int32_t v942; // w2
  const MethodInfo *v943; // x3
  PickupUserFollowerMaster_o *v944; // x20
  int32_t v945; // w2
  const MethodInfo *v946; // x3
  ServantCollectionMaster_o *v947; // x20
  int32_t v948; // w2
  const MethodInfo *v949; // x3
  GachaBehaviorMaster_o *v950; // x20
  int32_t v951; // w2
  const MethodInfo *v952; // x3
  EventQuestCooltimeMaster_o *v953; // x20
  int32_t v954; // w2
  const MethodInfo *v955; // x3
  UserEventQuestCooltimeMaster_o *v956; // x20
  int32_t v957; // w2
  const MethodInfo *v958; // x3
  BoostMaster_o *v959; // x20
  int32_t v960; // w2
  const MethodInfo *v961; // x3
  WarBoardMaster_o *v962; // x20
  int32_t v963; // w2
  const MethodInfo *v964; // x3
  WarBoardSquareMaster_o *v965; // x20
  int32_t v966; // w2
  const MethodInfo *v967; // x3
  WarBoardRoadMaster_o *v968; // x20
  int32_t v969; // w2
  const MethodInfo *v970; // x3
  WarBoardStageMaster_o *v971; // x20
  int32_t v972; // w2
  const MethodInfo *v973; // x3
  WarBoardActionPointMaster_o *v974; // x20
  int32_t v975; // w2
  const MethodInfo *v976; // x3
  WarBoardActionTrendMaster_o *v977; // x20
  int32_t v978; // w2
  const MethodInfo *v979; // x3
  WarBoardTacticalTrendMaster_o *v980; // x20
  int32_t v981; // w2
  const MethodInfo *v982; // x3
  WarBoardStageLayoutMaster_o *v983; // x20
  int32_t v984; // w2
  const MethodInfo *v985; // x3
  WarBoardStageNpcMaster_o *v986; // x20
  int32_t v987; // w2
  const MethodInfo *v988; // x3
  WarBoardStageWallMaster_o *v989; // x20
  int32_t v990; // w2
  const MethodInfo *v991; // x3
  WarBoardAIMaster_o *v992; // x20
  int32_t v993; // w2
  const MethodInfo *v994; // x3
  WarBoardRatingBaseMaster_o *v995; // x20
  int32_t v996; // w2
  const MethodInfo *v997; // x3
  WarBoardRatingOffsetMaster_o *v998; // x20
  int32_t v999; // w2
  const MethodInfo *v1000; // x3
  WarBoardItemMaster_o *v1001; // x20
  int32_t v1002; // w2
  const MethodInfo *v1003; // x3
  WarBoardTreasureMaster_o *v1004; // x20
  int32_t v1005; // w2
  const MethodInfo *v1006; // x3
  WarBoardQuestMaster_o *v1007; // x20
  int32_t v1008; // w2
  const MethodInfo *v1009; // x3
  WarBoardDataMaster_o *v1010; // x20
  int32_t v1011; // w2
  const MethodInfo *v1012; // x3
  WarBoardIndividualityClassMaster_o *v1013; // x20
  int32_t v1014; // w2
  const MethodInfo *v1015; // x3
  WarBoardActionTrendConditionMaster_o *v1016; // x20
  int32_t v1017; // w2
  const MethodInfo *v1018; // x3
  WarBoardActionPointClassMaster_o *v1019; // x20
  int32_t v1020; // w2
  const MethodInfo *v1021; // x3
  EventPanelMapMaster_o *v1022; // x20
  int32_t v1023; // w2
  const MethodInfo *v1024; // x3
  EventPanelMapDetailMaster_o *v1025; // x20
  int32_t v1026; // w2
  const MethodInfo *v1027; // x3
  EventPanelSpotMaster_o *v1028; // x20
  int32_t v1029; // w2
  const MethodInfo *v1030; // x3
  EventPanelScanMaster_o *v1031; // x20
  int32_t v1032; // w2
  const MethodInfo *v1033; // x3
  CommonConsumeMaster_o *v1034; // x20
  int32_t v1035; // w2
  const MethodInfo *v1036; // x3
  UserEventMapMaster_o *v1037; // x20
  int32_t v1038; // w2
  const MethodInfo *v1039; // x3
  UserEventSpotMaster_o *v1040; // x20
  int32_t v1041; // w2
  const MethodInfo *v1042; // x3
  WarGroupMaster_o *v1043; // x20
  int32_t v1044; // w2
  const MethodInfo *v1045; // x3
  ServantLimitImageMaster_o *v1046; // x20
  int32_t v1047; // w2
  const MethodInfo *v1048; // x3
  FriendshipQuestDialogInfoMaster_o *v1049; // x20
  int32_t v1050; // w2
  const MethodInfo *v1051; // x3
  QuestRestrictionInfoMaster_o *v1052; // x20
  int32_t v1053; // w2
  const MethodInfo *v1054; // x3
  AssistMaster_o *v1055; // x20
  int32_t v1056; // w2
  const MethodInfo *v1057; // x3
  WarBoardEffectMaster_o *v1058; // x20
  int32_t v1059; // w2
  const MethodInfo *v1060; // x3
  WarBoardOnboardSkillMaster_o *v1061; // x20
  int32_t v1062; // w2
  const MethodInfo *v1063; // x3
  BeforeBirthDayMaster_o *v1064; // x20
  int32_t v1065; // w2
  const MethodInfo *v1066; // x3
  LoginQuestMaster_o *v1067; // x20
  int32_t v1068; // w2
  const MethodInfo *v1069; // x3
  EventCombineCostumeMaster_o *v1070; // x20
  int32_t v1071; // w2
  const MethodInfo *v1072; // x3
  WarBoardStagePieceDetailMaster_o *v1073; // x20
  int32_t v1074; // w2
  const MethodInfo *v1075; // x3
  ServantTreasureDeviceAddMaster_o *v1076; // x20
  int32_t v1077; // w2
  const MethodInfo *v1078; // x3
  SkillAddMaster_o *v1079; // x20
  int32_t v1080; // w2
  const MethodInfo *v1081; // x3
  ServantLvDetailMaster_o *v1082; // x20
  int32_t v1083; // w2
  const MethodInfo *v1084; // x3
  GachaAppendMaster_o *v1085; // x20
  int32_t v1086; // w2
  const MethodInfo *v1087; // x3
  UserGachaDrawLogMaster_o *v1088; // x20
  int32_t v1089; // w2
  const MethodInfo *v1090; // x3
  ServantAppendPassiveSkillMaster_o *v1091; // x20
  int32_t v1092; // w2
  const MethodInfo *v1093; // x3
  UserServantAppendPassiveSkillMaster_o *v1094; // x20
  int32_t v1095; // w2
  const MethodInfo *v1096; // x3
  UserServantAppendPassiveSkillLvMaster_o *v1097; // x20
  int32_t v1098; // w2
  const MethodInfo *v1099; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v1100; // x20
  int32_t v1101; // w2
  const MethodInfo *v1102; // x3
  CombineAppendPassiveSkillMaster_o *v1103; // x20
  int32_t v1104; // w2
  const MethodInfo *v1105; // x3
  SvtCoinMaster_o *v1106; // x20
  int32_t v1107; // w2
  const MethodInfo *v1108; // x3
  UserSvtCoinMaster_o *v1109; // x20
  int32_t v1110; // w2
  const MethodInfo *v1111; // x3
  ServantAddMaster_o *v1112; // x20
  int32_t v1113; // w2
  const MethodInfo *v1114; // x3
  TreasureBoxMaster_o *v1115; // x20
  int32_t v1116; // w2
  const MethodInfo *v1117; // x3
  TreasureBoxGiftMaster_o *v1118; // x20
  int32_t v1119; // w2
  const MethodInfo *v1120; // x3
  TreasureBoxTalkMaster_o *v1121; // x20
  int32_t v1122; // w2
  const MethodInfo *v1123; // x3
  UserEventExpeditionMaster_o *v1124; // x20
  int32_t v1125; // w2
  const MethodInfo *v1126; // x3
  EventExpeditionMaster_o *v1127; // x20
  int32_t v1128; // w2
  const MethodInfo *v1129; // x3
  EventExpeditionPieceMaster_o *v1130; // x20
  int32_t v1131; // w2
  const MethodInfo *v1132; // x3
  EventRecipeMaster_o *v1133; // x20
  int32_t v1134; // w2
  const MethodInfo *v1135; // x3
  EventRecipeGiftMaster_o *v1136; // x20
  int32_t v1137; // w2
  const MethodInfo *v1138; // x3
  UserEventFortificationMaster_o *v1139; // x20
  int32_t v1140; // w2
  const MethodInfo *v1141; // x3
  EventFortificationMaster_o *v1142; // x20
  int32_t v1143; // w2
  const MethodInfo *v1144; // x3
  EventFortificationDetailMaster_o *v1145; // x20
  int32_t v1146; // w2
  const MethodInfo *v1147; // x3
  EventFortificationSvtMaster_o *v1148; // x20
  int32_t v1149; // w2
  const MethodInfo *v1150; // x3
  UserServantVoicePlayedMaster_o *v1151; // x20
  int32_t v1152; // w2
  const MethodInfo *v1153; // x3
  UpdateProfileDialogInfoMaster_o *v1154; // x20
  int32_t v1155; // w2
  const MethodInfo *v1156; // x3
  SvtMaterialTdMaster_o *v1157; // x20
  int32_t v1158; // w2
  const MethodInfo *v1159; // x3
  BattleMasterImageMaster_o *v1160; // x20
  int32_t v1161; // w2
  const MethodInfo *v1162; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1163; // x20
  int32_t v1164; // w2
  const MethodInfo *v1165; // x3
  UserEventRandomMissionMaster_o *v1166; // x20
  int32_t v1167; // w2
  const MethodInfo *v1168; // x3
  EventProgressValueMaster_o *v1169; // x20
  int32_t v1170; // w2
  const MethodInfo *v1171; // x3
  SvtMultiPortraitMaster_o *v1172; // x20
  int32_t v1173; // w2
  const MethodInfo *v1174; // x3
  EventRandomMissionMaster_o *v1175; // x20
  int32_t v1176; // w2
  const MethodInfo *v1177; // x3
  UserGachaHistoryMaster_o *v1178; // x20
  int32_t v1179; // w2
  const MethodInfo *v1180; // x3
  UserCoinRoomMaster_o *v1181; // x20
  int32_t v1182; // w2
  const MethodInfo *v1183; // x3
  EventBuddyPointMaster_o *v1184; // x20
  int32_t v1185; // w2
  const MethodInfo *v1186; // x3
  EventServantPointRankMaster_o *v1187; // x20
  int32_t v1188; // w2
  const MethodInfo *v1189; // x3
  UserEventServantPointMaster_o *v1190; // x20
  int32_t v1191; // w2
  const MethodInfo *v1192; // x3
  FieldMotionMaster_o *v1193; // x20
  int32_t v1194; // w2
  const MethodInfo *v1195; // x3
  UserDeleteReservationMaster_o *v1196; // x20
  int32_t v1197; // w2
  const MethodInfo *v1198; // x3
  ServantScriptMultipleMaster_o *v1199; // x20
  int32_t v1200; // w2
  const MethodInfo *v1201; // x3
  EquipAddMaster_o *v1202; // x20
  int32_t v1203; // w2
  const MethodInfo *v1204; // x3
  QuestReleaseOverwriteMaster_o *v1205; // x20
  int32_t v1206; // w2
  const MethodInfo *v1207; // x3
  UserEventAlloutBattleMaster_o *v1208; // x20
  int32_t v1209; // w2
  const MethodInfo *v1210; // x3
  QuestScriptMaterialNextMaster_o *v1211; // x20
  int32_t v1212; // w2
  const MethodInfo *v1213; // x3
  EventDiggingMaster_o *v1214; // x20
  int32_t v1215; // w2
  const MethodInfo *v1216; // x3
  EventDiggingBlockMaster_o *v1217; // x20
  int32_t v1218; // w2
  const MethodInfo *v1219; // x3
  EventDiggingRewardMaster_o *v1220; // x20
  int32_t v1221; // w2
  const MethodInfo *v1222; // x3
  UserEventDiggingMaster_o *v1223; // x20
  int32_t v1224; // w2
  const MethodInfo *v1225; // x3
  BattleMessageMaster_o *v1226; // x20
  int32_t v1227; // w2
  const MethodInfo *v1228; // x3
  BattleMessageGroupMaster_o *v1229; // x20
  int32_t v1230; // w2
  const MethodInfo *v1231; // x3
  UserNpcSvtRecordMaster_o *v1232; // x20
  int32_t v1233; // w2
  const MethodInfo *v1234; // x3
  BuffTypeDetailMaster_o *v1235; // x20
  int32_t v1236; // w2
  const MethodInfo *v1237; // x3
  WarBoardMessageMaster_o *v1238; // x20
  int32_t v1239; // w2
  const MethodInfo *v1240; // x3
  WarBoardPartySkillMaster_o *v1241; // x20
  int32_t v1242; // w2
  const MethodInfo *v1243; // x3
  WarBoardMessageScriptMaster_o *v1244; // x20
  int32_t v1245; // w2
  const MethodInfo *v1246; // x3
  WarQuestSelectionMaster_o *v1247; // x20
  int32_t v1248; // w2
  const MethodInfo *v1249; // x3
  WarBoardStageDetailMaster_o *v1250; // x20
  int32_t v1251; // w2
  const MethodInfo *v1252; // x3
  QuestScriptMaterialOverwriteMaster_o *v1253; // x20
  int32_t v1254; // w2
  const MethodInfo *v1255; // x3
  QuestScriptBranchMaterialMaster_o *v1256; // x20
  int32_t v1257; // w2
  const MethodInfo *v1258; // x3
  AdCheckPointMaster_o *v1259; // x20
  int32_t v1260; // w2
  const MethodInfo *v1261; // x3
  GiftDetailMaster_o *v1262; // x20
  int32_t v1263; // w2
  const MethodInfo *v1264; // x3
  CombineLimitGiftMaster_o *v1265; // x20
  int32_t v1266; // w2
  const MethodInfo *v1267; // x3
  EventCooltimeRewardMaster_o *v1268; // x20
  int32_t v1269; // w2
  const MethodInfo *v1270; // x3
  UserEventCooltimeRewardMaster_o *v1271; // x20
  int32_t v1272; // w2
  const MethodInfo *v1273; // x3
  ClassBoardBaseMaster_o *v1274; // x20
  int32_t v1275; // w2
  const MethodInfo *v1276; // x3
  ClassBoardLockMaster_o *v1277; // x20
  int32_t v1278; // w2
  const MethodInfo *v1279; // x3
  ClassBoardSquareMaster_o *v1280; // x20
  int32_t v1281; // w2
  const MethodInfo *v1282; // x3
  ClassBoardLineMaster_o *v1283; // x20
  int32_t v1284; // w2
  const MethodInfo *v1285; // x3
  UserClassBoardSquareMaster_o *v1286; // x20
  int32_t v1287; // w2
  const MethodInfo *v1288; // x3
  ServantCardAddMaster_o *v1289; // x20
  int32_t v1290; // w2
  const MethodInfo *v1291; // x3
  MapLayerMaster_o *v1292; // x20
  int32_t v1293; // w2
  const MethodInfo *v1294; // x3
  SpotLayerMaster_o *v1295; // x20
  int32_t v1296; // w2
  const MethodInfo *v1297; // x3
  MapGimmickLayerMaster_o *v1298; // x20
  int32_t v1299; // w2
  const MethodInfo *v1300; // x3
  EventDataLostBattleMaster_o *v1301; // x20
  int32_t v1302; // w2
  const MethodInfo *v1303; // x3
  EventDataLostBattleResetMaster_o *v1304; // x20
  int32_t v1305; // w2
  const MethodInfo *v1306; // x3
  UserEventDataLostMaster_o *v1307; // x20
  int32_t v1308; // w2
  const MethodInfo *v1309; // x3
  QuestHintMaster_o *v1310; // x20
  int32_t v1311; // w2
  const MethodInfo *v1312; // x3
  FuncTypeDetailMaster_o *v1313; // x20
  int32_t v1314; // w2
  const MethodInfo *v1315; // x3
  BuffConvertMaster_o *v1316; // x20
  int32_t v1317; // w2
  const MethodInfo *v1318; // x3
  SkillGroupMaster_o *v1319; // x20
  int32_t v1320; // w2
  const MethodInfo *v1321; // x3
  SkillGroupOverwriteMaster_o *v1322; // x20
  int32_t v1323; // w2
  const MethodInfo *v1324; // x3
  SkillIndividualityMaster_o *v1325; // x20
  int32_t v1326; // w2
  const MethodInfo *v1327; // x3
  RestrictionBaseMaster_o *v1328; // x20
  int32_t v1329; // w2
  const MethodInfo *v1330; // x3
  RestrictionSlotMaster_o *v1331; // x20
  int32_t v1332; // w2
  const MethodInfo *v1333; // x3
  RestrictionSlotDetailMaster_o *v1334; // x20
  int32_t v1335; // w2
  const MethodInfo *v1336; // x3
  RestrictionMessageMaster_o *v1337; // x20
  int32_t v1338; // w2
  const MethodInfo *v1339; // x3
  RestrictionWholeMaster_o *v1340; // x20
  int32_t v1341; // w2
  const MethodInfo *v1342; // x3
  FuncDispMaster_o *v1343; // x20
  int32_t v1344; // w2
  const MethodInfo *v1345; // x3
  ClassBoardCommandSpellMaster_o *v1346; // x20
  int32_t v1347; // w2
  const MethodInfo *v1348; // x3
  ClassBoardClassMaster_o *v1349; // x20
  int32_t v1350; // w2
  const MethodInfo *v1351; // x3
  EventCommandAssistMaster_o *v1352; // x20
  int32_t v1353; // w2
  const MethodInfo *v1354; // x3
  EventMissionGroupMaster_o *v1355; // x20
  int32_t v1356; // w2
  const MethodInfo *v1357; // x3
  CombineLimitReleaseMaster_o *v1358; // x20
  int32_t v1359; // w2
  const MethodInfo *v1360; // x3
  HeelPortraitMaster_o *v1361; // x20
  int32_t v1362; // w2
  const MethodInfo *v1363; // x3
  UserHeelPortraitMaster_o *v1364; // x20
  int32_t v1365; // w2
  const MethodInfo *v1366; // x3
  TreasureDeviceSequenceWeightMaster_o *v1367; // x20
  int32_t v1368; // w2
  const MethodInfo *v1369; // x3
  NpcServantFollowerIndividualityMaster_o *v1370; // x20
  int32_t v1371; // w2
  const MethodInfo *v1372; // x3
  GachaExtraGiftMaster_o *v1373; // x20
  int32_t v1374; // w2
  const MethodInfo *v1375; // x3
  EventMuralMaster_o *v1376; // x20
  int32_t v1377; // w2
  const MethodInfo *v1378; // x3
  ViewWaveEnemyMaster_o *v1379; // x20
  int32_t v1380; // w2
  const MethodInfo *v1381; // x3
  BlankEarthSpotNavimenuMaster_o *v1382; // x20
  int32_t v1383; // w2
  const MethodInfo *v1384; // x3
  BlankEarthGimmickMaster_o *v1385; // x20
  int32_t v1386; // w2
  const MethodInfo *v1387; // x3
  TerminalOverwriteMaster_o *v1388; // x20
  int32_t v1389; // w2
  const MethodInfo *v1390; // x3
  UserExchangeSvtMaster_o *v1391; // x20
  int32_t v1392; // w2
  const MethodInfo *v1393; // x3
  WarBoardCommonReleaseMaster_o *v1394; // x20
  int32_t v1395; // w2
  const MethodInfo *v1396; // x3
  WarBoardEventMaster_o *v1397; // x20
  int32_t v1398; // w2
  const MethodInfo *v1399; // x3
  WarBoardEventScriptMaster_o *v1400; // x20
  int32_t v1401; // w2
  const MethodInfo *v1402; // x3
  WarBoardStageBossMaster_o *v1403; // x20
  int32_t v1404; // w2
  const MethodInfo *v1405; // x3
  WarBoardSquareIndexGroupMaster_o *v1406; // x20
  int32_t v1407; // w2
  const MethodInfo *v1408; // x3
  WarBoardActionTrendGroupMaster_o *v1409; // x20
  int32_t v1410; // w2
  const MethodInfo *v1411; // x3
  WarBoardRatingOffsetGroupMaster_o *v1412; // x20
  int32_t v1413; // w2
  const MethodInfo *v1414; // x3
  WarBoardReinforcementsMaster_o *v1415; // x20
  int32_t v1416; // w2
  const MethodInfo *v1417; // x3
  WarBoardStageReinforcementsMaster_o *v1418; // x20
  int32_t v1419; // w2
  const MethodInfo *v1420; // x3
  WarBoardFutureActionTrendMaster_o *v1421; // x20
  int32_t v1422; // w2
  const MethodInfo *v1423; // x3
  ServantProfilePushMaster_o *v1424; // x20
  int32_t v1425; // w2
  const MethodInfo *v1426; // x3
  MapGimmickPathMaster_o *v1427; // x20
  int32_t v1428; // w2
  const MethodInfo *v1429; // x3
  MapGimmickPathReleaseMaster_o *v1430; // x20
  int32_t v1431; // w2
  const MethodInfo *v1432; // x3
  ServantOverwriteMaster_o *v1433; // x20
  int32_t v1434; // w2
  const MethodInfo *v1435; // x3
  IndividualityPolicyMaster_o *v1436; // x20
  int32_t v1437; // w2
  const MethodInfo *v1438; // x3
  IndividualityPersonalityMaster_o *v1439; // x20
  int32_t v1440; // w2
  const MethodInfo *v1441; // x3
  AttriMaster_o *v1442; // x20
  int32_t v1443; // w2
  const MethodInfo *v1444; // x3
  ServantVoicePatternMaster_o *v1445; // x20
  int32_t v1446; // w2
  const MethodInfo *v1447; // x3
  UserGameCommonMaster_o *v1448; // x20
  int32_t v1449; // w2
  const MethodInfo *v1450; // x3
  ServantPhotoMaster_o *v1451; // x20
  int32_t v1452; // w2
  const MethodInfo *v1453; // x3
  MasterPhotoMaster_o *v1454; // x20
  int32_t v1455; // w2
  const MethodInfo *v1456; // x3
  PhotoFrameMaster_o *v1457; // x20
  int32_t v1458; // w2
  const MethodInfo *v1459; // x3
  WarMessageMaster_o *v1460; // x20
  int32_t v1461; // w2
  const MethodInfo *v1462; // x3
  QuestAutoOrganizationAdjustMaster_o *v1463; // x20
  int32_t v1464; // w2
  const MethodInfo *v1465; // x3
  ExcludeMotionMaster_o *v1466; // x20
  int32_t v1467; // w2
  const MethodInfo *v1468; // x3
  UserInterruptionQuestMaster_o *v1469; // x20
  int32_t v1470; // w2
  const MethodInfo *v1471; // x3
  ServantTransformMaster_o *v1472; // x20
  int32_t v1473; // w2
  const MethodInfo *v1474; // x3
  MapUpdateScheduleMaster_o *v1475; // x20
  int32_t v1476; // w2
  const MethodInfo *v1477; // x3
  QuestPhasePresentMaster_o *v1478; // x20
  int32_t v1479; // w2
  const MethodInfo *v1480; // x3
  UserAccountLinkageMaster_o *v1481; // x20
  int32_t v1482; // w2
  const MethodInfo *v1483; // x3
  MissionNaviTransitionMaster_o *v1484; // x20
  int32_t v1485; // w2
  const MethodInfo *v1486; // x3
  MissionNaviQuestMaster_o *v1487; // x20
  int32_t v1488; // w2
  const MethodInfo *v1489; // x3
  EventTradeGoodsMaster_o *v1490; // x20
  int32_t v1491; // w2
  const MethodInfo *v1492; // x3
  EventTradeStoreMaster_o *v1493; // x20
  int32_t v1494; // w2
  const MethodInfo *v1495; // x3
  EventTradePickupMaster_o *v1496; // x20
  int32_t v1497; // w2
  const MethodInfo *v1498; // x3
  UserEventTradeMaster_o *v1499; // x20
  int32_t v1500; // w2
  const MethodInfo *v1501; // x3
  PaymentHistoryMaster_o *v1502; // x20
  int32_t v1503; // w2
  const MethodInfo *v1504; // x3
  UserExternalPaymentStoneMaster_o *v1505; // x20
  int32_t v1506; // w2
  const MethodInfo *v1507; // x3
  QuestPhaseIndividualityMaster_o *v1508; // x20
  int32_t v1509; // w2
  const MethodInfo *v1510; // x3
  ViewGachaFeaturedServantMaster_o *v1511; // x20
  int32_t v1512; // w2
  const MethodInfo *v1513; // x3
  UserGachaPickupCollateralMaster_o *v1514; // x20
  int32_t v1515; // w2
  const MethodInfo *v1516; // x3
  GachaPickupCollateralMaster_o *v1517; // x20
  int32_t v1518; // w2
  const MethodInfo *v1519; // x3
  GachaPickupCollateralGroupMaster_o *v1520; // x20
  int32_t v1521; // w2
  const MethodInfo *v1522; // x3
  BattlePointMaster_o *v1523; // x20
  int32_t v1524; // w2
  const MethodInfo *v1525; // x3
  BattlePointPhaseMaster_o *v1526; // x20
  int32_t v1527; // w2
  const MethodInfo *v1528; // x3
  ServantBattlePointMaster_o *v1529; // x20
  int32_t v1530; // w2
  const MethodInfo *v1531; // x3
  EffectMovieMaster_o *v1532; // x20
  int32_t v1533; // w2
  const MethodInfo *v1534; // x3
  PaymentLimitMaster_o *v1535; // x20
  int32_t v1536; // w2
  const MethodInfo *v1537; // x3
  UserPaymentLimitMaster_o *v1538; // x20
  int32_t v1539; // w2
  const MethodInfo *v1540; // x3
  RoadmapMaster_o *v1541; // x20
  int32_t v1542; // w2
  const MethodInfo *v1543; // x3
  UserRecommendSupportMaster_o *v1544; // x20
  int32_t v1545; // w2
  const MethodInfo *v1546; // x3
  RecommendSupportQuestMaster_o *v1547; // x20
  int32_t v1548; // w2
  const MethodInfo *v1549; // x3
  RecommendAdviceMessageMaster_o *v1550; // x20
  int32_t v1551; // w2
  const MethodInfo *v1552; // x3
  UserRecommendFollowerMaster_o *v1553; // x20
  int32_t v1554; // w2
  const MethodInfo *v1555; // x3
  ItemDropEfficiencyMaster_o *v1556; // x20
  int32_t v1557; // w2
  const MethodInfo *v1558; // x3
  BlankEarthGimmickAddMaster_o *v1559; // x20
  int32_t v1560; // w2
  const MethodInfo *v1561; // x3
  WarReleaseMaster_o *v1562; // x20
  int32_t v1563; // w2
  const MethodInfo *v1564; // x3
  SelectBonusBaseMaster_o *v1565; // x20
  int32_t v1566; // w2
  const MethodInfo *v1567; // x3
  SelectBonusMaster_o *v1568; // x20
  int32_t v1569; // w2
  const MethodInfo *v1570; // x3
  MyroomServantSpecialImageMaster_o *v1571; // x20
  int32_t v1572; // w2
  const MethodInfo *v1573; // x3
  ShopResetMaster_o *v1574; // x20
  int32_t v1575; // w2
  const MethodInfo *v1576; // x3
  NpcServantDisplayTypeDetailMaster_o *v1577; // x20
  int32_t v1578; // w2
  const MethodInfo *v1579; // x3
  FriendshipServantMaster_o *v1580; // x20
  int32_t v1581; // w2
  const MethodInfo *v1582; // x3
  ExchangeSvtCoinGivenNumMaster_o *v1583; // x20
  int32_t v1584; // w2
  const MethodInfo *v1585; // x3
  ChaldeaGatePickupMaster_o *v1586; // x20
  int32_t v1587; // w2
  const MethodInfo *v1588; // x3
  WarGroupIgnoreMaster_o *v1589; // x20
  int32_t v1590; // w2
  const MethodInfo *v1591; // x3
  ImagePartsGroupMaster_o *v1592; // x20
  int32_t v1593; // w2
  const MethodInfo *v1594; // x3
  UserImagePartsGroupMaster_o *v1595; // x20
  int32_t v1596; // w2
  const MethodInfo *v1597; // x3
  MissionItemDisplayMaster_o *v1598; // x20
  int32_t v1599; // w2
  const MethodInfo *v1600; // x3
  QuestUseItemGroupMaster_o *v1601; // x20
  int32_t v1602; // w2
  const MethodInfo *v1603; // x3
  QuestUseItemPickupMaster_o *v1604; // x20
  int32_t v1605; // w2
  const MethodInfo *v1606; // x3
  UserEventItemLinkSvtMaster_o *v1607; // x20
  int32_t v1608; // w2
  const MethodInfo *v1609; // x3
  QuestHintOverwriteMaster_o *v1610; // x20
  int32_t v1611; // w2
  const MethodInfo *v1612; // x3
  ReachedWaveInfoMaster_o *v1613; // x20
  int32_t v1614; // w2
  const MethodInfo *v1615; // x3
  GalleryMaster_o *v1616; // x20
  int32_t v1617; // w2
  const MethodInfo *v1618; // x3
  GalleryResourceMaster_o *v1619; // x20
  int32_t v1620; // w2
  const MethodInfo *v1621; // x3
  ServantSkillAddMaster_o *v1622; // x20
  int32_t v1623; // w2
  const MethodInfo *v1624; // x3
  GalleryFolderReleaseMaster_o *v1625; // x20
  int32_t v1626; // w2
  const MethodInfo *v1627; // x3
  UserSvtFirstGetTimeMaster_o *v1628; // x20
  int32_t v1629; // w2
  const MethodInfo *v1630; // x3
  QuestExtensionMaster_o *v1631; // x20
  int32_t v1632; // w2
  const MethodInfo *v1633; // x3
  UserServantGrandMaster_o *v1634; // x20
  int32_t v1635; // w2
  const MethodInfo *v1636; // x3
  GrandGraphMaster_o *v1637; // x20
  int32_t v1638; // w2
  const MethodInfo *v1639; // x3
  GrandGraphDetailMaster_o *v1640; // x20
  int32_t v1641; // w2
  const MethodInfo *v1642; // x3
  UserClassStatisticsMaster_o *v1643; // x20
  int32_t v1644; // w2
  const MethodInfo *v1645; // x3
  EventEquipSkillPartsMaster_o *v1646; // x20
  int32_t v1647; // w2
  const MethodInfo *v1648; // x3
  MasterIndividualitySelectMaster_o *v1649; // x20
  int32_t v1650; // w2
  const MethodInfo *v1651; // x3
  MyroomAddBgDiffMaster_o *v1652; // x20
  int32_t v1653; // w2
  const MethodInfo *v1654; // x3
  BattleScriptMaster_o *v1655; // x20
  int32_t v1656; // w2
  const MethodInfo *v1657; // x3
  __int64 v1659; // x0

  if ( (byte_4C5681E & 1) == 0 )
  {
    sub_1C3E564(&AccessaryMaster_TypeInfo);
    sub_1C3E564(&AdCheckPointMaster_TypeInfo);
    sub_1C3E564(&AiActMaster_TypeInfo);
    sub_1C3E564(&AiFieldMaster_TypeInfo);
    sub_1C3E564(&AiMaster_TypeInfo);
    sub_1C3E564(&AreaMaster_TypeInfo);
    sub_1C3E564(&AssistMaster_TypeInfo);
    sub_1C3E564(&AttriMaster_TypeInfo);
    sub_1C3E564(&AttriRelationMaster_TypeInfo);
    sub_1C3E564(&AuraEffectMaster_TypeInfo);
    sub_1C3E564(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C3E564(&BankShopMaster_TypeInfo);
    sub_1C3E564(&BannerAddMaster_TypeInfo);
    sub_1C3E564(&BannerMaster_TypeInfo);
    sub_1C3E564(&BattleBgMaster_TypeInfo);
    sub_1C3E564(&BattleMasterImageMaster_TypeInfo);
    sub_1C3E564(&BattleMaster_TypeInfo);
    sub_1C3E564(&BattleMessageGroupMaster_TypeInfo);
    sub_1C3E564(&BattleMessageMaster_TypeInfo);
    sub_1C3E564(&BattlePointMaster_TypeInfo);
    sub_1C3E564(&BattlePointPhaseMaster_TypeInfo);
    sub_1C3E564(&BattleScriptMaster_TypeInfo);
    sub_1C3E564(&BeforeBirthDayMaster_TypeInfo);
    sub_1C3E564(&BgmMaster_TypeInfo);
    sub_1C3E564(&BgmReleaseMaster_TypeInfo);
    sub_1C3E564(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1C3E564(&BlankEarthGimmickMaster_TypeInfo);
    sub_1C3E564(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1C3E564(&BlankEarthSpotMaster_TypeInfo);
    sub_1C3E564(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1C3E564(&BoardMessageMaster_TypeInfo);
    sub_1C3E564(&BoardMessageReleaseMaster_TypeInfo);
    sub_1C3E564(&BoostMaster_TypeInfo);
    sub_1C3E564(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1C3E564(&BoxGachaBaseMaster_TypeInfo);
    sub_1C3E564(&BoxGachaHistoryMaster_TypeInfo);
    sub_1C3E564(&BoxGachaMaster_TypeInfo);
    sub_1C3E564(&BoxGachaTalkMaster_TypeInfo);
    sub_1C3E564(&BuffConvertMaster_TypeInfo);
    sub_1C3E564(&BuffMaster_TypeInfo);
    sub_1C3E564(&BuffTypeDetailMaster_TypeInfo);
    sub_1C3E564(&CampaignInfoMaster_TypeInfo);
    sub_1C3E564(&CardMaster_TypeInfo);
    sub_1C3E564(&ChaldeaGatePickupMaster_TypeInfo);
    sub_1C3E564(&ClassBoardBaseMaster_TypeInfo);
    sub_1C3E564(&ClassBoardClassMaster_TypeInfo);
    sub_1C3E564(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1C3E564(&ClassBoardLineMaster_TypeInfo);
    sub_1C3E564(&ClassBoardLockMaster_TypeInfo);
    sub_1C3E564(&ClassBoardSquareMaster_TypeInfo);
    sub_1C3E564(&ClassRelationMaster_TypeInfo);
    sub_1C3E564(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1C3E564(&ClosedMessageMaster_TypeInfo);
    sub_1C3E564(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1C3E564(&CombineCostumeMaster_TypeInfo);
    sub_1C3E564(&CombineLimitGiftMaster_TypeInfo);
    sub_1C3E564(&CombineLimitMaster_TypeInfo);
    sub_1C3E564(&CombineLimitReleaseMaster_TypeInfo);
    sub_1C3E564(&CombineMaster_TypeInfo);
    sub_1C3E564(&CombineMaterialMaster_TypeInfo);
    sub_1C3E564(&CombineQpMaster_TypeInfo);
    sub_1C3E564(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1C3E564(&CombineSkillMaster_TypeInfo);
    sub_1C3E564(&CombineTdMaster_TypeInfo);
    sub_1C3E564(&CommandCardRankParamMaster_TypeInfo);
    sub_1C3E564(&CommandCodeCommentMaster_TypeInfo);
    sub_1C3E564(&CommandCodeMaster_TypeInfo);
    sub_1C3E564(&CommandCodeSkillMaster_TypeInfo);
    sub_1C3E564(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1C3E564(&CommandSpellMaster_TypeInfo);
    sub_1C3E564(&CommonConsumeMaster_TypeInfo);
    sub_1C3E564(&CommonReleaseMaster_TypeInfo);
    sub_1C3E564(&CommonRestrictionMaster_TypeInfo);
    sub_1C3E564(&CompleteMissionMaster_TypeInfo);
    sub_1C3E564(&ConstantLongMaster_TypeInfo);
    sub_1C3E564(&ConstantMaster_TypeInfo);
    sub_1C3E564(&ConstantStrMaster_TypeInfo);
    sub_1C3E564(&CvMaster_TypeInfo);
    sub_1C3E564(&DataMasterBase___TypeInfo);
    sub_1C3E564(&DialogMessageMaster_TypeInfo);
    sub_1C3E564(&EffectMaster_TypeInfo);
    sub_1C3E564(&EffectMovieMaster_TypeInfo);
    sub_1C3E564(&EnemyMstBattleMaster_TypeInfo);
    sub_1C3E564(&EnemyMstMaster_TypeInfo);
    sub_1C3E564(&EquipAddMaster_TypeInfo);
    sub_1C3E564(&EquipExpMaster_TypeInfo);
    sub_1C3E564(&EquipImageMaster_TypeInfo);
    sub_1C3E564(&EquipMaster_TypeInfo);
    sub_1C3E564(&EquipSkillMaster_TypeInfo);
    sub_1C3E564(&EventAddMaster_TypeInfo);
    sub_1C3E564(&EventBoardGameCellMaster_TypeInfo);
    sub_1C3E564(&EventBoardGameTokenMaster_TypeInfo);
    sub_1C3E564(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1C3E564(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1C3E564(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1C3E564(&EventBonusFilterMaster_TypeInfo);
    sub_1C3E564(&EventBoostItemUsedMaster_TypeInfo);
    sub_1C3E564(&EventBossStatusUiMaster_TypeInfo);
    sub_1C3E564(&EventBuddyPointMaster_TypeInfo);
    sub_1C3E564(&EventBulletinBoardMaster_TypeInfo);
    sub_1C3E564(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1C3E564(&EventCampaignMaster_TypeInfo);
    sub_1C3E564(&EventCampaignReleaseMaster_TypeInfo);
    sub_1C3E564(&EventCombineCostumeMaster_TypeInfo);
    sub_1C3E564(&EventCombineMaster_TypeInfo);
    sub_1C3E564(&EventCommandAssistMaster_TypeInfo);
    sub_1C3E564(&EventConquestRewardMaster_TypeInfo);
    sub_1C3E564(&EventCooltimeRewardMaster_TypeInfo);
    sub_1C3E564(&EventDataLostBattleMaster_TypeInfo);
    sub_1C3E564(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1C3E564(&EventDetailMaster_TypeInfo);
    sub_1C3E564(&EventDiggingBlockMaster_TypeInfo);
    sub_1C3E564(&EventDiggingMaster_TypeInfo);
    sub_1C3E564(&EventDiggingRewardMaster_TypeInfo);
    sub_1C3E564(&EventEquipSkillPartsMaster_TypeInfo);
    sub_1C3E564(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1C3E564(&EventExpeditionMaster_TypeInfo);
    sub_1C3E564(&EventExpeditionPieceMaster_TypeInfo);
    sub_1C3E564(&EventFactoryMaster_TypeInfo);
    sub_1C3E564(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1C3E564(&EventFilterMaster_TypeInfo);
    sub_1C3E564(&EventFortificationDetailMaster_TypeInfo);
    sub_1C3E564(&EventFortificationMaster_TypeInfo);
    sub_1C3E564(&EventFortificationSvtMaster_TypeInfo);
    sub_1C3E564(&EventGroupMaster_TypeInfo);
    sub_1C3E564(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1C3E564(&EventItemDisplayMaster_TypeInfo);
    sub_1C3E564(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1C3E564(&EventLocationCampaignMaster_TypeInfo);
    sub_1C3E564(&EventMaster_TypeInfo);
    sub_1C3E564(&EventMissionActionAddMaster_TypeInfo);
    sub_1C3E564(&EventMissionActionMaster_TypeInfo);
    sub_1C3E564(&EventMissionAddMaster_TypeInfo);
    sub_1C3E564(&EventMissionCondDetailMaster_TypeInfo);
    sub_1C3E564(&EventMissionConditionMaster_TypeInfo);
    sub_1C3E564(&EventMissionGroupMaster_TypeInfo);
    sub_1C3E564(&EventMissionMaster_TypeInfo);
    sub_1C3E564(&EventMuralMaster_TypeInfo);
    sub_1C3E564(&EventPanelMapDetailMaster_TypeInfo);
    sub_1C3E564(&EventPanelMapMaster_TypeInfo);
    sub_1C3E564(&EventPanelScanMaster_TypeInfo);
    sub_1C3E564(&EventPanelSpotMaster_TypeInfo);
    sub_1C3E564(&EventPointActivityMaster_TypeInfo);
    sub_1C3E564(&EventPointBuffMaster_TypeInfo);
    sub_1C3E564(&EventPointGroupAddMaster_TypeInfo);
    sub_1C3E564(&EventPointGroupMaster_TypeInfo);
    sub_1C3E564(&EventPointMaster_TypeInfo);
    sub_1C3E564(&EventPointUpperMaster_TypeInfo);
    sub_1C3E564(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1C3E564(&EventProgressValueMaster_TypeInfo);
    sub_1C3E564(&EventQuestCooltimeMaster_TypeInfo);
    sub_1C3E564(&EventQuestMaster_TypeInfo);
    sub_1C3E564(&EventRaceMaster_TypeInfo);
    sub_1C3E564(&EventRaceResultMaster_TypeInfo);
    sub_1C3E564(&EventRaidMaster_TypeInfo);
    sub_1C3E564(&EventRandomMissionMaster_TypeInfo);
    sub_1C3E564(&EventRecipeGiftMaster_TypeInfo);
    sub_1C3E564(&EventRecipeMaster_TypeInfo);
    sub_1C3E564(&EventRewardBgMaster_TypeInfo);
    sub_1C3E564(&EventRewardExtraMaster_TypeInfo);
    sub_1C3E564(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1C3E564(&EventRewardMaster_TypeInfo);
    sub_1C3E564(&EventRewardSceneMaster_TypeInfo);
    sub_1C3E564(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1C3E564(&EventRewardSetMaster_TypeInfo);
    sub_1C3E564(&EventScriptMaster_TypeInfo);
    sub_1C3E564(&EventScriptReleaseMaster_TypeInfo);
    sub_1C3E564(&EventServantFatigueMaster_TypeInfo);
    sub_1C3E564(&EventServantMaster_TypeInfo);
    sub_1C3E564(&EventServantPointRankMaster_TypeInfo);
    sub_1C3E564(&EventStatusMaster_TypeInfo);
    sub_1C3E564(&EventStatusQuestMaster_TypeInfo);
    sub_1C3E564(&EventSuperBossMaster_TypeInfo);
    sub_1C3E564(&EventTowerMaster_TypeInfo);
    sub_1C3E564(&EventTowerRewardMaster_TypeInfo);
    sub_1C3E564(&EventTradeGoodsMaster_TypeInfo);
    sub_1C3E564(&EventTradePickupMaster_TypeInfo);
    sub_1C3E564(&EventTradeStoreMaster_TypeInfo);
    sub_1C3E564(&EventTutorialCondMaster_TypeInfo);
    sub_1C3E564(&EventTutorialMaster_TypeInfo);
    sub_1C3E564(&EventUiMaster_TypeInfo);
    sub_1C3E564(&EventUiReleaseMaster_TypeInfo);
    sub_1C3E564(&EventUiValueMaster_TypeInfo);
    sub_1C3E564(&EventVoicePlayMaster_TypeInfo);
    sub_1C3E564(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_1C3E564(&ExcludeMotionMaster_TypeInfo);
    sub_1C3E564(&FieldMotionMaster_TypeInfo);
    sub_1C3E564(&FriendshipMaster_TypeInfo);
    sub_1C3E564(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1C3E564(&FriendshipServantMaster_TypeInfo);
    sub_1C3E564(&FuncDispMaster_TypeInfo);
    sub_1C3E564(&FuncTypeDetailMaster_TypeInfo);
    sub_1C3E564(&FunctionCategoryMaster_TypeInfo);
    sub_1C3E564(&FunctionGroupMaster_TypeInfo);
    sub_1C3E564(&FunctionMaster_TypeInfo);
    sub_1C3E564(&GachaAdjustAddMaster_TypeInfo);
    sub_1C3E564(&GachaAppendMaster_TypeInfo);
    sub_1C3E564(&GachaBaseCollateralMaster_TypeInfo);
    sub_1C3E564(&GachaBehaviorMaster_TypeInfo);
    sub_1C3E564(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1C3E564(&GachaBonusSelectMaster_TypeInfo);
    sub_1C3E564(&GachaDetailMaster_TypeInfo);
    sub_1C3E564(&GachaExtraGiftMaster_TypeInfo);
    sub_1C3E564(&GachaGroupMaster_TypeInfo);
    sub_1C3E564(&GachaImageMaster_TypeInfo);
    sub_1C3E564(&GachaMaster_TypeInfo);
    sub_1C3E564(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1C3E564(&GachaPickupCollateralMaster_TypeInfo);
    sub_1C3E564(&GachaReleaseMaster_TypeInfo);
    sub_1C3E564(&GachaStoryAdjustMaster_TypeInfo);
    sub_1C3E564(&GachaSubMaster_TypeInfo);
    sub_1C3E564(&GachaTicketMaster_TypeInfo);
    sub_1C3E564(&GalleryFolderReleaseMaster_TypeInfo);
    sub_1C3E564(&GalleryMaster_TypeInfo);
    sub_1C3E564(&GalleryResourceMaster_TypeInfo);
    sub_1C3E564(&GiftAddMaster_TypeInfo);
    sub_1C3E564(&GiftDetailMaster_TypeInfo);
    sub_1C3E564(&GiftMaster_TypeInfo);
    sub_1C3E564(&GrandGraphDetailMaster_TypeInfo);
    sub_1C3E564(&GrandGraphMaster_TypeInfo);
    sub_1C3E564(&GuideMaster_TypeInfo);
    sub_1C3E564(&HeelPortraitMaster_TypeInfo);
    sub_1C3E564(&IllustratorMaster_TypeInfo);
    sub_1C3E564(&ImagePartsGroupMaster_TypeInfo);
    sub_1C3E564(&IndividualityPersonalityMaster_TypeInfo);
    sub_1C3E564(&IndividualityPolicyMaster_TypeInfo);
    sub_1C3E564(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1C3E564(&ItemMaster_TypeInfo);
    sub_1C3E564(&ItemSelectMaster_TypeInfo);
    sub_1C3E564(&LoginQuestMaster_TypeInfo);
    sub_1C3E564(&MapButtonMaster_TypeInfo);
    sub_1C3E564(&MapCondMaster_TypeInfo);
    sub_1C3E564(&MapGimmickLayerMaster_TypeInfo);
    sub_1C3E564(&MapGimmickMaster_TypeInfo);
    sub_1C3E564(&MapGimmickPathMaster_TypeInfo);
    sub_1C3E564(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1C3E564(&MapGimmickReleaseMaster_TypeInfo);
    sub_1C3E564(&MapLayerMaster_TypeInfo);
    sub_1C3E564(&MapMaster_TypeInfo);
    sub_1C3E564(&MapUpdateScheduleMaster_TypeInfo);
    sub_1C3E564(&MasterIndividualitySelectMaster_TypeInfo);
    sub_1C3E564(&MasterPhotoMaster_TypeInfo);
    sub_1C3E564(&MaterialFolderMaster_TypeInfo);
    sub_1C3E564(&MissionItemDisplayMaster_TypeInfo);
    sub_1C3E564(&MissionNaviQuestMaster_TypeInfo);
    sub_1C3E564(&MissionNaviTransitionMaster_TypeInfo);
    sub_1C3E564(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1C3E564(&MstMissionMaster_TypeInfo);
    sub_1C3E564(&MyRoomAddMaster_TypeInfo);
    sub_1C3E564(&MyroomAddBgDiffMaster_TypeInfo);
    sub_1C3E564(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1C3E564(&NewsMaster_TypeInfo);
    sub_1C3E564(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1C3E564(&NpcFollowerMaster_TypeInfo);
    sub_1C3E564(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1C3E564(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_1C3E564(&NpcServantEquipMaster_TypeInfo);
    sub_1C3E564(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1C3E564(&NpcServantFollowerMaster_TypeInfo);
    sub_1C3E564(&OpeningMovieMaster_TypeInfo);
    sub_1C3E564(&OtherUserGameMaster_TypeInfo);
    sub_1C3E564(&PartialMaintenanceMaster_TypeInfo);
    sub_1C3E564(&PaymentHistoryMaster_TypeInfo);
    sub_1C3E564(&PaymentLimitMaster_TypeInfo);
    sub_1C3E564(&PhotoFrameMaster_TypeInfo);
    sub_1C3E564(&PickupUserFollowerMaster_TypeInfo);
    sub_1C3E564(&PrivilegeMaster_TypeInfo);
    sub_1C3E564(&QuestAddMaster_TypeInfo);
    sub_1C3E564(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1C3E564(&QuestBehaviorMaster_TypeInfo);
    sub_1C3E564(&QuestConsumeItemMaster_TypeInfo);
    sub_1C3E564(&QuestDateRangeMaster_TypeInfo);
    sub_1C3E564(&QuestExtensionMaster_TypeInfo);
    sub_1C3E564(&QuestGroupMaster_TypeInfo);
    sub_1C3E564(&QuestHintMaster_TypeInfo);
    sub_1C3E564(&QuestHintOverwriteMaster_TypeInfo);
    sub_1C3E564(&QuestMaster_TypeInfo);
    sub_1C3E564(&QuestMessageMaster_TypeInfo);
    sub_1C3E564(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1C3E564(&QuestPhaseDetailMaster_TypeInfo);
    sub_1C3E564(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1C3E564(&QuestPhaseMaster_TypeInfo);
    sub_1C3E564(&QuestPhasePresentMaster_TypeInfo);
    sub_1C3E564(&QuestPickupMaster_TypeInfo);
    sub_1C3E564(&QuestRacePointMaster_TypeInfo);
    sub_1C3E564(&QuestRandomGroupMaster_TypeInfo);
    sub_1C3E564(&QuestReleaseMaster_TypeInfo);
    sub_1C3E564(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1C3E564(&QuestResetMaster_TypeInfo);
    sub_1C3E564(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1C3E564(&QuestRestrictionMaster_TypeInfo);
    sub_1C3E564(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1C3E564(&QuestScriptMaster_TypeInfo);
    sub_1C3E564(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1C3E564(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1C3E564(&QuestScriptReleaseMaster_TypeInfo);
    sub_1C3E564(&QuestSpotReleaseMaster_TypeInfo);
    sub_1C3E564(&QuestUseItemGroupMaster_TypeInfo);
    sub_1C3E564(&QuestUseItemPickupMaster_TypeInfo);
    sub_1C3E564(&ReachedWaveInfoMaster_TypeInfo);
    sub_1C3E564(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1C3E564(&RecommendSupportQuestMaster_TypeInfo);
    sub_1C3E564(&RecoverMaster_TypeInfo);
    sub_1C3E564(&ReprintStageMaster_TypeInfo);
    sub_1C3E564(&RestrictionBaseMaster_TypeInfo);
    sub_1C3E564(&RestrictionMaster_TypeInfo);
    sub_1C3E564(&RestrictionMessageMaster_TypeInfo);
    sub_1C3E564(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1C3E564(&RestrictionSlotMaster_TypeInfo);
    sub_1C3E564(&RestrictionWholeMaster_TypeInfo);
    sub_1C3E564(&RoadmapMaster_TypeInfo);
    sub_1C3E564(&SelectBonusBaseMaster_TypeInfo);
    sub_1C3E564(&SelectBonusMaster_TypeInfo);
    sub_1C3E564(&ServantAddMaster_TypeInfo);
    sub_1C3E564(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1C3E564(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C3E564(&ServantBattlePointMaster_TypeInfo);
    sub_1C3E564(&ServantCardAddMaster_TypeInfo);
    sub_1C3E564(&ServantCardMaster_TypeInfo);
    sub_1C3E564(&ServantChangeMaster_TypeInfo);
    sub_1C3E564(&ServantClassMaster_TypeInfo);
    sub_1C3E564(&ServantCollectionMaster_TypeInfo);
    sub_1C3E564(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1C3E564(&ServantCommentAddMaster_TypeInfo);
    sub_1C3E564(&ServantCommentMaster_TypeInfo);
    sub_1C3E564(&ServantCostumeMaster_TypeInfo);
    sub_1C3E564(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1C3E564(&ServantExceedMaster_TypeInfo);
    sub_1C3E564(&ServantExpMaster_TypeInfo);
    sub_1C3E564(&ServantFilterMaster_TypeInfo);
    sub_1C3E564(&ServantFlagMaster_TypeInfo);
    sub_1C3E564(&ServantFlagReleaseMaster_TypeInfo);
    sub_1C3E564(&ServantGroupMaster_TypeInfo);
    sub_1C3E564(&ServantIndividualityMaster_TypeInfo);
    sub_1C3E564(&ServantLimitAddMaster_TypeInfo);
    sub_1C3E564(&ServantLimitImageMaster_TypeInfo);
    sub_1C3E564(&ServantLimitMaster_TypeInfo);
    sub_1C3E564(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1C3E564(&ServantLvDetailMaster_TypeInfo);
    sub_1C3E564(&ServantMaster_TypeInfo);
    sub_1C3E564(&ServantMaterialFolderMaster_TypeInfo);
    sub_1C3E564(&ServantOverwriteMaster_TypeInfo);
    sub_1C3E564(&ServantPassiveSkillMaster_TypeInfo);
    sub_1C3E564(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1C3E564(&ServantPhotoMaster_TypeInfo);
    sub_1C3E564(&ServantProfileMaster_TypeInfo);
    sub_1C3E564(&ServantProfilePushMaster_TypeInfo);
    sub_1C3E564(&ServantRarityMaster_TypeInfo);
    sub_1C3E564(&ServantScriptAddMaster_TypeInfo);
    sub_1C3E564(&ServantScriptMaster_TypeInfo);
    sub_1C3E564(&ServantScriptMultipleMaster_TypeInfo);
    sub_1C3E564(&ServantSkillAddMaster_TypeInfo);
    sub_1C3E564(&ServantSkillMaster_TypeInfo);
    sub_1C3E564(&ServantSkillReleaseMaster_TypeInfo);
    sub_1C3E564(&ServantTransformMaster_TypeInfo);
    sub_1C3E564(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1C3E564(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1C3E564(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1C3E564(&ServantTreasureDvcMaster_TypeInfo);
    sub_1C3E564(&ServantVoiceMaster_TypeInfo);
    sub_1C3E564(&ServantVoicePatternMaster_TypeInfo);
    sub_1C3E564(&ServantVoiceRelationMaster_TypeInfo);
    sub_1C3E564(&SetItemMaster_TypeInfo);
    sub_1C3E564(&ShopActionMaster_TypeInfo);
    sub_1C3E564(&ShopDetailMaster_TypeInfo);
    sub_1C3E564(&ShopGroupMaster_TypeInfo);
    sub_1C3E564(&ShopMaster_TypeInfo);
    sub_1C3E564(&ShopReleaseMaster_TypeInfo);
    sub_1C3E564(&ShopResetMaster_TypeInfo);
    sub_1C3E564(&ShopScriptMaster_TypeInfo);
    sub_1C3E564(&SkillAddMaster_TypeInfo);
    sub_1C3E564(&SkillDetailMaster_TypeInfo);
    sub_1C3E564(&SkillGroupMaster_TypeInfo);
    sub_1C3E564(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1C3E564(&SkillIndividualityMaster_TypeInfo);
    sub_1C3E564(&SkillLvMaster_TypeInfo);
    sub_1C3E564(&SkillMaster_TypeInfo);
    sub_1C3E564(&SpotAddMaster_TypeInfo);
    sub_1C3E564(&SpotImageMaster_TypeInfo);
    sub_1C3E564(&SpotLayerMaster_TypeInfo);
    sub_1C3E564(&SpotMaster_TypeInfo);
    sub_1C3E564(&SpotPathMaster_TypeInfo);
    sub_1C3E564(&SpotRoadMaster_TypeInfo);
    sub_1C3E564(&StaffPhotoCostumeMaster_TypeInfo);
    sub_1C3E564(&StaffPhotoMaster_TypeInfo);
    sub_1C3E564(&StageMaster_TypeInfo);
    sub_1C3E564(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1C3E564(&StoneShopMaster_TypeInfo);
    sub_1C3E564(&SubEquipMaster_TypeInfo);
    sub_1C3E564(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1C3E564(&SvtCoinMaster_TypeInfo);
    sub_1C3E564(&SvtMaterialTdMaster_TypeInfo);
    sub_1C3E564(&SvtMultiPortraitMaster_TypeInfo);
    sub_1C3E564(&TblFriendMaster_TypeInfo);
    sub_1C3E564(&TblUserMaster_TypeInfo);
    sub_1C3E564(&TelopMaster_TypeInfo);
    sub_1C3E564(&TerminalOverwriteMaster_TypeInfo);
    sub_1C3E564(&TipsBattleMaster_TypeInfo);
    sub_1C3E564(&TotalBoxGachaMaster_TypeInfo);
    sub_1C3E564(&TotalEventPointMaster_TypeInfo);
    sub_1C3E564(&TotalEventRaceMaster_TypeInfo);
    sub_1C3E564(&TotalEventRaidMaster_TypeInfo);
    sub_1C3E564(&TotalLoginMaster_TypeInfo);
    sub_1C3E564(&TreasureBoxGiftMaster_TypeInfo);
    sub_1C3E564(&TreasureBoxMaster_TypeInfo);
    sub_1C3E564(&TreasureBoxTalkMaster_TypeInfo);
    sub_1C3E564(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1C3E564(&TreasureDvcDetailMaster_TypeInfo);
    sub_1C3E564(&TreasureDvcLvMaster_TypeInfo);
    sub_1C3E564(&TreasureDvcMaster_TypeInfo);
    sub_1C3E564(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1C3E564(&UserAccessaryMaster_TypeInfo);
    sub_1C3E564(&UserAccountLinkageMaster_TypeInfo);
    sub_1C3E564(&UserBlacklistMaster_TypeInfo);
    sub_1C3E564(&UserBoxGachaMaster_TypeInfo);
    sub_1C3E564(&UserClassBoardSquareMaster_TypeInfo);
    sub_1C3E564(&UserClassStatisticsMaster_TypeInfo);
    sub_1C3E564(&UserCoinRoomMaster_TypeInfo);
    sub_1C3E564(&UserCombineExpMaster_TypeInfo);
    sub_1C3E564(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1C3E564(&UserCommandCodeMaster_TypeInfo);
    sub_1C3E564(&UserContinueMaster_TypeInfo);
    sub_1C3E564(&UserDeckMaster_TypeInfo);
    sub_1C3E564(&UserDeleteReservationMaster_TypeInfo);
    sub_1C3E564(&UserEquipMaster_TypeInfo);
    sub_1C3E564(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1C3E564(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1C3E564(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1C3E564(&UserEventDataLostMaster_TypeInfo);
    sub_1C3E564(&UserEventDeckMaster_TypeInfo);
    sub_1C3E564(&UserEventDiggingMaster_TypeInfo);
    sub_1C3E564(&UserEventExpeditionMaster_TypeInfo);
    sub_1C3E564(&UserEventFortificationMaster_TypeInfo);
    sub_1C3E564(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_1C3E564(&UserEventMapMaster_TypeInfo);
    sub_1C3E564(&UserEventMaster_TypeInfo);
    sub_1C3E564(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1C3E564(&UserEventMissionFixMaster_TypeInfo);
    sub_1C3E564(&UserEventMissionMaster_TypeInfo);
    sub_1C3E564(&UserEventPointMaster_TypeInfo);
    sub_1C3E564(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1C3E564(&UserEventRaceMaster_TypeInfo);
    sub_1C3E564(&UserEventRaidMaster_TypeInfo);
    sub_1C3E564(&UserEventRandomMissionMaster_TypeInfo);
    sub_1C3E564(&UserEventServantFatigueMaster_TypeInfo);
    sub_1C3E564(&UserEventServantPointMaster_TypeInfo);
    sub_1C3E564(&UserEventSpotMaster_TypeInfo);
    sub_1C3E564(&UserEventTradeMaster_TypeInfo);
    sub_1C3E564(&UserExchangeSvtMaster_TypeInfo);
    sub_1C3E564(&UserExpMaster_TypeInfo);
    sub_1C3E564(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1C3E564(&UserFollowMaster_TypeInfo);
    sub_1C3E564(&UserFollowerMaster_TypeInfo);
    sub_1C3E564(&UserFormationMaster_TypeInfo);
    sub_1C3E564(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1C3E564(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1C3E564(&UserGachaDrawLogMaster_TypeInfo);
    sub_1C3E564(&UserGachaExtraCountMaster_TypeInfo);
    sub_1C3E564(&UserGachaHistoryMaster_TypeInfo);
    sub_1C3E564(&UserGachaMaster_TypeInfo);
    sub_1C3E564(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1C3E564(&UserGameCommonMaster_TypeInfo);
    sub_1C3E564(&UserGameMaster_TypeInfo);
    sub_1C3E564(&UserHeelPortraitMaster_TypeInfo);
    sub_1C3E564(&UserImagePartsGroupMaster_TypeInfo);
    sub_1C3E564(&UserInterruptionQuestMaster_TypeInfo);
    sub_1C3E564(&UserItemMaster_TypeInfo);
    sub_1C3E564(&UserLoginMaster_TypeInfo);
    sub_1C3E564(&UserMaster_TypeInfo);
    sub_1C3E564(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1C3E564(&UserPaymentLimitMaster_TypeInfo);
    sub_1C3E564(&UserPresentBoxMaster_TypeInfo);
    sub_1C3E564(&UserPresentHistoryMaster_TypeInfo);
    sub_1C3E564(&UserPrivilegeMaster_TypeInfo);
    sub_1C3E564(&UserQuestInfoMaster_TypeInfo);
    sub_1C3E564(&UserQuestMaster_TypeInfo);
    sub_1C3E564(&UserQuestRecordMaster_TypeInfo);
    sub_1C3E564(&UserQuestRouteMaster_TypeInfo);
    sub_1C3E564(&UserRecommendFollowerMaster_TypeInfo);
    sub_1C3E564(&UserRecommendSupportMaster_TypeInfo);
    sub_1C3E564(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1C3E564(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C3E564(&UserServantCollectionMaster_TypeInfo);
    sub_1C3E564(&UserServantCommandCardMaster_TypeInfo);
    sub_1C3E564(&UserServantCommandCodeMaster_TypeInfo);
    sub_1C3E564(&UserServantGrandMaster_TypeInfo);
    sub_1C3E564(&UserServantLeaderMaster_TypeInfo);
    sub_1C3E564(&UserServantMaster_TypeInfo);
    sub_1C3E564(&UserServantStorageMaster_TypeInfo);
    sub_1C3E564(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1C3E564(&UserShopMaster_TypeInfo);
    sub_1C3E564(&UserSubEquipMaster_TypeInfo);
    sub_1C3E564(&UserSuperBossMaster_TypeInfo);
    sub_1C3E564(&UserSupportDeckMaster_TypeInfo);
    sub_1C3E564(&UserSvtCoinMaster_TypeInfo);
    sub_1C3E564(&UserSvtFirstGetTimeMaster_TypeInfo);
    sub_1C3E564(&ViewEnemyMaster_TypeInfo);
    sub_1C3E564(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1C3E564(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1C3E564(&ViewQuestInfoMaster_TypeInfo);
    sub_1C3E564(&ViewWaveEnemyMaster_TypeInfo);
    sub_1C3E564(&VoiceClosedMessageMaster_TypeInfo);
    sub_1C3E564(&VoiceCondMaster_TypeInfo);
    sub_1C3E564(&VoiceMaster_TypeInfo);
    sub_1C3E564(&VoiceMaterialCondMaster_TypeInfo);
    sub_1C3E564(&VoicePlayCondMaster_TypeInfo);
    sub_1C3E564(&VoicePlayGroupMaster_TypeInfo);
    sub_1C3E564(&VoiceReleaseMaster_TypeInfo);
    sub_1C3E564(&WarAddMaster_TypeInfo);
    sub_1C3E564(&WarBoardAIMaster_TypeInfo);
    sub_1C3E564(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1C3E564(&WarBoardActionPointMaster_TypeInfo);
    sub_1C3E564(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1C3E564(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1C3E564(&WarBoardActionTrendMaster_TypeInfo);
    sub_1C3E564(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1C3E564(&WarBoardDataMaster_TypeInfo);
    sub_1C3E564(&WarBoardEffectMaster_TypeInfo);
    sub_1C3E564(&WarBoardEventMaster_TypeInfo);
    sub_1C3E564(&WarBoardEventScriptMaster_TypeInfo);
    sub_1C3E564(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1C3E564(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1C3E564(&WarBoardItemMaster_TypeInfo);
    sub_1C3E564(&WarBoardMaster_TypeInfo);
    sub_1C3E564(&WarBoardMessageMaster_TypeInfo);
    sub_1C3E564(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1C3E564(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1C3E564(&WarBoardPartySkillMaster_TypeInfo);
    sub_1C3E564(&WarBoardQuestMaster_TypeInfo);
    sub_1C3E564(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1C3E564(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1C3E564(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1C3E564(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1C3E564(&WarBoardRoadMaster_TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1C3E564(&WarBoardSquareMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageBossMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageDetailMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageNpcMaster_TypeInfo);
    sub_1C3E564(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1C3E564(&WarBoardStageWallMaster_TypeInfo);
    sub_1C3E564(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1C3E564(&WarBoardTreasureMaster_TypeInfo);
    sub_1C3E564(&WarGroupIgnoreMaster_TypeInfo);
    sub_1C3E564(&WarGroupMaster_TypeInfo);
    sub_1C3E564(&WarMaster_TypeInfo);
    sub_1C3E564(&WarMessageMaster_TypeInfo);
    sub_1C3E564(&WarQuestSelectionMaster_TypeInfo);
    sub_1C3E564(&WarReleaseMaster_TypeInfo);
    byte_4C5681E = 1;
  }
  v1 = (DataMasterBase_array *)sub_1C3E60C(DataMasterBase___TypeInfo, 551);
  v2 = (ServantMaster_o *)sub_1C3E7B0(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0);
  if ( !v1 )
    sub_1C3E7C0(v3, v4);
  if ( v2 )
  {
    v3 = sub_1C3E6A0(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  p_max_length = &v1->max_length;
  if ( !LODWORD(v1->max_length) )
    goto LABEL_1658;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1C3E508((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v5, v6);
  v8 = (ServantClassMaster_o *)sub_1C3E7B0(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v8, 0);
  if ( v8 )
  {
    v3 = sub_1C3E6A0(v8, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_1658;
  v1->m_Items[1] = (DataMasterBase_o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v8, v9, v10);
  v11 = (ServantCommentMaster_o *)sub_1C3E7B0(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v11, 0);
  if ( v11 )
  {
    v3 = sub_1C3E6A0(v11, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_1658;
  v1->m_Items[2] = (DataMasterBase_o *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v12, v13);
  v14 = (ServantProfileMaster_o *)sub_1C3E7B0(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v14, 0);
  if ( v14 )
  {
    v3 = sub_1C3E6A0(v14, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_1658;
  v1->m_Items[3] = (DataMasterBase_o *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v14, v15, v16);
  v17 = (WarMaster_o *)sub_1C3E7B0(WarMaster_TypeInfo);
  WarMaster___ctor(v17, 0);
  if ( v17 )
  {
    v3 = sub_1C3E6A0(v17, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_1658;
  v1->m_Items[4] = (DataMasterBase_o *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v17, v18, v19);
  v20 = (UserMaster_o *)sub_1C3E7B0(UserMaster_TypeInfo);
  UserMaster___ctor(v20, 0);
  if ( v20 )
  {
    v3 = sub_1C3E6A0(v20, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_1658;
  v1->m_Items[5] = (DataMasterBase_o *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v20, v21, v22);
  v23 = (UserGameMaster_o *)sub_1C3E7B0(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v23, 0);
  if ( v23 )
  {
    v3 = sub_1C3E6A0(v23, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_1658;
  v1->m_Items[6] = (DataMasterBase_o *)v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v23, v24, v25);
  v26 = (TblUserMaster_o *)sub_1C3E7B0(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v26, 0);
  if ( v26 )
  {
    v3 = sub_1C3E6A0(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_1658;
  v1->m_Items[7] = (DataMasterBase_o *)v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v26, v27, v28);
  v29 = (UserItemMaster_o *)sub_1C3E7B0(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v29, 0);
  if ( v29 )
  {
    v3 = sub_1C3E6A0(v29, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_1658;
  v1->m_Items[8] = (DataMasterBase_o *)v29;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v29, v30, v31);
  v32 = (UserServantMaster_o *)sub_1C3E7B0(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v32, 0);
  if ( v32 )
  {
    v3 = sub_1C3E6A0(v32, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_1658;
  v1->m_Items[9] = (DataMasterBase_o *)v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v32, v33, v34);
  v35 = (UserServantStorageMaster_o *)sub_1C3E7B0(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v35, 0);
  if ( v35 )
  {
    v3 = sub_1C3E6A0(v35, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_1658;
  v1->m_Items[10] = (DataMasterBase_o *)v35;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v35, v36, v37);
  v38 = (UserAccessaryMaster_o *)sub_1C3E7B0(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v38, 0);
  if ( v38 )
  {
    v3 = sub_1C3E6A0(v38, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_1658;
  v1->m_Items[11] = (DataMasterBase_o *)v38;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v38, v39, v40);
  v41 = (UserQuestMaster_o *)sub_1C3E7B0(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v41, 0);
  if ( v41 )
  {
    v3 = sub_1C3E6A0(v41, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_1658;
  v1->m_Items[12] = (DataMasterBase_o *)v41;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v41, v42, v43);
  v44 = (BattleMaster_o *)sub_1C3E7B0(BattleMaster_TypeInfo);
  BattleMaster___ctor(v44, 0);
  if ( v44 )
  {
    v3 = sub_1C3E6A0(v44, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_1658;
  v1->m_Items[13] = (DataMasterBase_o *)v44;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v44, v45, v46);
  v47 = (OtherUserGameMaster_o *)sub_1C3E7B0(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v47, 0);
  if ( v47 )
  {
    v3 = sub_1C3E6A0(v47, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_1658;
  v1->m_Items[14] = (DataMasterBase_o *)v47;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v47, v48, v49);
  v50 = (TblFriendMaster_o *)sub_1C3E7B0(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v50, 0);
  if ( v50 )
  {
    v3 = sub_1C3E6A0(v50, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_1658;
  v1->m_Items[15] = (DataMasterBase_o *)v50;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[15], (int32_t)v50, v51, v52);
  v53 = (AreaMaster_o *)sub_1C3E7B0(AreaMaster_TypeInfo);
  AreaMaster___ctor(v53, 0);
  if ( v53 )
  {
    v3 = sub_1C3E6A0(v53, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_1658;
  v1->m_Items[16] = (DataMasterBase_o *)v53;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[16], (int32_t)v53, v54, v55);
  v56 = (ServantCardMaster_o *)sub_1C3E7B0(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v56, 0);
  if ( v56 )
  {
    v3 = sub_1C3E6A0(v56, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_1658;
  v1->m_Items[17] = (DataMasterBase_o *)v56;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[17], (int32_t)v56, v57, v58);
  v59 = (EventMaster_o *)sub_1C3E7B0(EventMaster_TypeInfo);
  EventMaster___ctor(v59, 0);
  if ( v59 )
  {
    v3 = sub_1C3E6A0(v59, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_1658;
  v1->m_Items[18] = (DataMasterBase_o *)v59;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[18], (int32_t)v59, v60, v61);
  v62 = (ItemMaster_o *)sub_1C3E7B0(ItemMaster_TypeInfo);
  ItemMaster___ctor(v62, 0);
  if ( v62 )
  {
    v3 = sub_1C3E6A0(v62, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_1658;
  v1->m_Items[19] = (DataMasterBase_o *)v62;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[19], (int32_t)v62, v63, v64);
  v65 = (QuestMaster_o *)sub_1C3E7B0(QuestMaster_TypeInfo);
  QuestMaster___ctor(v65, 0);
  if ( v65 )
  {
    v3 = sub_1C3E6A0(v65, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
    goto LABEL_1658;
  v1->m_Items[20] = (DataMasterBase_o *)v65;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[20], (int32_t)v65, v66, v67);
  v68 = (QuestAddMaster_o *)sub_1C3E7B0(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v68, 0);
  if ( v68 )
  {
    v3 = sub_1C3E6A0(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15u )
    goto LABEL_1658;
  v1->m_Items[21] = (DataMasterBase_o *)v68;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[21], (int32_t)v68, v69, v70);
  v71 = (QuestReleaseMaster_o *)sub_1C3E7B0(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v71, 0);
  if ( v71 )
  {
    v3 = sub_1C3E6A0(v71, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16u )
    goto LABEL_1658;
  v1->m_Items[22] = (DataMasterBase_o *)v71;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[22], (int32_t)v71, v72, v73);
  v74 = (QuestDateRangeMaster_o *)sub_1C3E7B0(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v74, 0);
  if ( v74 )
  {
    v3 = sub_1C3E6A0(v74, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17u )
    goto LABEL_1658;
  v1->m_Items[23] = (DataMasterBase_o *)v74;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[23], (int32_t)v74, v75, v76);
  v77 = (QuestPhaseMaster_o *)sub_1C3E7B0(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v77, 0);
  if ( v77 )
  {
    v3 = sub_1C3E6A0(v77, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18u )
    goto LABEL_1658;
  v1->m_Items[24] = (DataMasterBase_o *)v77;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[24], (int32_t)v77, v78, v79);
  v80 = (QuestPhaseDetailMaster_o *)sub_1C3E7B0(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v80, 0);
  if ( v80 )
  {
    v3 = sub_1C3E6A0(v80, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19u )
    goto LABEL_1658;
  v1->m_Items[25] = (DataMasterBase_o *)v80;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[25], (int32_t)v80, v81, v82);
  v83 = (QuestGroupMaster_o *)sub_1C3E7B0(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v83, 0);
  if ( v83 )
  {
    v3 = sub_1C3E6A0(v83, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Au )
    goto LABEL_1658;
  v1->m_Items[26] = (DataMasterBase_o *)v83;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[26], (int32_t)v83, v84, v85);
  v86 = (QuestRandomGroupMaster_o *)sub_1C3E7B0(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v86, 0);
  if ( v86 )
  {
    v3 = sub_1C3E6A0(v86, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Bu )
    goto LABEL_1658;
  v1->m_Items[27] = (DataMasterBase_o *)v86;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[27], (int32_t)v86, v87, v88);
  v89 = (QuestConsumeItemMaster_o *)sub_1C3E7B0(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v89, 0);
  if ( v89 )
  {
    v3 = sub_1C3E6A0(v89, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Cu )
    goto LABEL_1658;
  v1->m_Items[28] = (DataMasterBase_o *)v89;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[28], (int32_t)v89, v90, v91);
  v92 = (QuestMessageMaster_o *)sub_1C3E7B0(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v92, 0);
  if ( v92 )
  {
    v3 = sub_1C3E6A0(v92, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Du )
    goto LABEL_1658;
  v1->m_Items[29] = (DataMasterBase_o *)v92;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[29], (int32_t)v92, v93, v94);
  v95 = (UserQuestInfoMaster_o *)sub_1C3E7B0(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v95, 0);
  if ( v95 )
  {
    v3 = sub_1C3E6A0(v95, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Eu )
    goto LABEL_1658;
  v1->m_Items[30] = (DataMasterBase_o *)v95;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[30], (int32_t)v95, v96, v97);
  v98 = (UserQuestRecordMaster_o *)sub_1C3E7B0(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v98, 0);
  if ( v98 )
  {
    v3 = sub_1C3E6A0(v98, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Fu )
    goto LABEL_1658;
  v1->m_Items[31] = (DataMasterBase_o *)v98;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[31], (int32_t)v98, v99, v100);
  v101 = (ViewQuestInfoMaster_o *)sub_1C3E7B0(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v101, 0);
  if ( v101 )
  {
    v3 = sub_1C3E6A0(v101, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20u )
    goto LABEL_1658;
  v1->m_Items[32] = (DataMasterBase_o *)v101;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[32], (int32_t)v101, v102, v103);
  v104 = (ViewEnemyMaster_o *)sub_1C3E7B0(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v104, 0);
  if ( v104 )
  {
    v3 = sub_1C3E6A0(v104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21u )
    goto LABEL_1658;
  v1->m_Items[33] = (DataMasterBase_o *)v104;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[33], (int32_t)v104, v105, v106);
  v107 = (ViewQuestEnemyInfoMaster_o *)sub_1C3E7B0(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v107, 0);
  if ( v107 )
  {
    v3 = sub_1C3E6A0(v107, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x22u )
    goto LABEL_1658;
  v1->m_Items[34] = (DataMasterBase_o *)v107;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[34], (int32_t)v107, v108, v109);
  v110 = (BlankEarthSpotMaster_o *)sub_1C3E7B0(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v110, 0);
  if ( v110 )
  {
    v3 = sub_1C3E6A0(v110, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x23u )
    goto LABEL_1658;
  v1->m_Items[35] = (DataMasterBase_o *)v110;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[35], (int32_t)v110, v111, v112);
  v113 = (BlankEarthSpotAddMaster_o *)sub_1C3E7B0(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v113, 0);
  if ( v113 )
  {
    v3 = sub_1C3E6A0(v113, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x24u )
    goto LABEL_1658;
  v1->m_Items[36] = (DataMasterBase_o *)v113;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[36], (int32_t)v113, v114, v115);
  v116 = (SpotMaster_o *)sub_1C3E7B0(SpotMaster_TypeInfo);
  SpotMaster___ctor(v116, 0);
  if ( v116 )
  {
    v3 = sub_1C3E6A0(v116, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x25u )
    goto LABEL_1658;
  v1->m_Items[37] = (DataMasterBase_o *)v116;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[37], (int32_t)v116, v117, v118);
  v119 = (SpotImageMaster_o *)sub_1C3E7B0(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v119, 0);
  if ( v119 )
  {
    v3 = sub_1C3E6A0(v119, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x26u )
    goto LABEL_1658;
  v1->m_Items[38] = (DataMasterBase_o *)v119;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[38], (int32_t)v119, v120, v121);
  v122 = (SpotRoadMaster_o *)sub_1C3E7B0(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v122, 0);
  if ( v122 )
  {
    v3 = sub_1C3E6A0(v122, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x27u )
    goto LABEL_1658;
  v1->m_Items[39] = (DataMasterBase_o *)v122;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[39], (int32_t)v122, v123, v124);
  v125 = (SpotPathMaster_o *)sub_1C3E7B0(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v125, 0);
  if ( v125 )
  {
    v3 = sub_1C3E6A0(v125, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x28u )
    goto LABEL_1658;
  v1->m_Items[40] = (DataMasterBase_o *)v125;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[40], (int32_t)v125, v126, v127);
  v128 = (SpotAddMaster_o *)sub_1C3E7B0(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v128, 0);
  if ( v128 )
  {
    v3 = sub_1C3E6A0(v128, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x29u )
    goto LABEL_1658;
  v1->m_Items[41] = (DataMasterBase_o *)v128;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[41], (int32_t)v128, v129, v130);
  v131 = (MapGimmickMaster_o *)sub_1C3E7B0(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v131, 0);
  if ( v131 )
  {
    v3 = sub_1C3E6A0(v131, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Au )
    goto LABEL_1658;
  v1->m_Items[42] = (DataMasterBase_o *)v131;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[42], (int32_t)v131, v132, v133);
  v134 = (GiftMaster_o *)sub_1C3E7B0(GiftMaster_TypeInfo);
  GiftMaster___ctor(v134, 0);
  if ( v134 )
  {
    v3 = sub_1C3E6A0(v134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Bu )
    goto LABEL_1658;
  v1->m_Items[43] = (DataMasterBase_o *)v134;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[43], (int32_t)v134, v135, v136);
  v137 = (GiftAddMaster_o *)sub_1C3E7B0(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v137, 0);
  if ( v137 )
  {
    v3 = sub_1C3E6A0(v137, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Cu )
    goto LABEL_1658;
  v1->m_Items[44] = (DataMasterBase_o *)v137;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[44], (int32_t)v137, v138, v139);
  v140 = (ShopMaster_o *)sub_1C3E7B0(ShopMaster_TypeInfo);
  ShopMaster___ctor(v140, 0);
  if ( v140 )
  {
    v3 = sub_1C3E6A0(v140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Du )
    goto LABEL_1658;
  v1->m_Items[45] = (DataMasterBase_o *)v140;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[45], (int32_t)v140, v141, v142);
  v143 = (StoneShopMaster_o *)sub_1C3E7B0(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v143, 0);
  if ( v143 )
  {
    v3 = sub_1C3E6A0(v143, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Eu )
    goto LABEL_1658;
  v1->m_Items[46] = (DataMasterBase_o *)v143;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[46], (int32_t)v143, v144, v145);
  v146 = (BankShopMaster_o *)sub_1C3E7B0(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v146, 0);
  if ( v146 )
  {
    v3 = sub_1C3E6A0(v146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Fu )
    goto LABEL_1658;
  v1->m_Items[47] = (DataMasterBase_o *)v146;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[47], (int32_t)v146, v147, v148);
  v149 = (ShopScriptMaster_o *)sub_1C3E7B0(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v149, 0);
  if ( v149 )
  {
    v3 = sub_1C3E6A0(v149, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x30u )
    goto LABEL_1658;
  v1->m_Items[48] = (DataMasterBase_o *)v149;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[48], (int32_t)v149, v150, v151);
  v152 = (StageMaster_o *)sub_1C3E7B0(StageMaster_TypeInfo);
  StageMaster___ctor(v152, 0);
  if ( v152 )
  {
    v3 = sub_1C3E6A0(v152, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x31u )
    goto LABEL_1658;
  v1->m_Items[49] = (DataMasterBase_o *)v152;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[49], (int32_t)v152, v153, v154);
  v155 = (ServantGroupMaster_o *)sub_1C3E7B0(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v155, 0);
  if ( v155 )
  {
    v3 = sub_1C3E6A0(v155, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x32u )
    goto LABEL_1658;
  v1->m_Items[50] = (DataMasterBase_o *)v155;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[50], (int32_t)v155, v156, v157);
  v158 = (ServantLimitMaster_o *)sub_1C3E7B0(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v158, 0);
  if ( v158 )
  {
    v3 = sub_1C3E6A0(v158, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x33u )
    goto LABEL_1658;
  v1->m_Items[51] = (DataMasterBase_o *)v158;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[51], (int32_t)v158, v159, v160);
  v161 = (ServantLimitAddMaster_o *)sub_1C3E7B0(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v161, 0);
  if ( v161 )
  {
    v3 = sub_1C3E6A0(v161, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x34u )
    goto LABEL_1658;
  v1->m_Items[52] = (DataMasterBase_o *)v161;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[52], (int32_t)v161, v162, v163);
  v164 = (ServantSkillMaster_o *)sub_1C3E7B0(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v164, 0);
  if ( v164 )
  {
    v3 = sub_1C3E6A0(v164, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x35u )
    goto LABEL_1658;
  v1->m_Items[53] = (DataMasterBase_o *)v164;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[53], (int32_t)v164, v165, v166);
  v167 = (ServantPassiveSkillMaster_o *)sub_1C3E7B0(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v167, 0);
  if ( v167 )
  {
    v3 = sub_1C3E6A0(v167, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x36u )
    goto LABEL_1658;
  v1->m_Items[54] = (DataMasterBase_o *)v167;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[54], (int32_t)v167, v168, v169);
  v170 = (BgmMaster_o *)sub_1C3E7B0(BgmMaster_TypeInfo);
  BgmMaster___ctor(v170, 0);
  if ( v170 )
  {
    v3 = sub_1C3E6A0(v170, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x37u )
    goto LABEL_1658;
  v1->m_Items[55] = (DataMasterBase_o *)v170;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[55], (int32_t)v170, v171, v172);
  v173 = (ServantScriptMaster_o *)sub_1C3E7B0(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v173, 0);
  if ( v173 )
  {
    v3 = sub_1C3E6A0(v173, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x38u )
    goto LABEL_1658;
  v1->m_Items[56] = (DataMasterBase_o *)v173;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[56], (int32_t)v173, v174, v175);
  v176 = (NewsMaster_o *)sub_1C3E7B0(NewsMaster_TypeInfo);
  NewsMaster___ctor(v176, 0);
  if ( v176 )
  {
    v3 = sub_1C3E6A0(v176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x39u )
    goto LABEL_1658;
  v1->m_Items[57] = (DataMasterBase_o *)v176;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[57], (int32_t)v176, v177, v178);
  v179 = (TelopMaster_o *)sub_1C3E7B0(TelopMaster_TypeInfo);
  TelopMaster___ctor(v179, 0);
  if ( v179 )
  {
    v3 = sub_1C3E6A0(v179, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Au )
    goto LABEL_1658;
  v1->m_Items[58] = (DataMasterBase_o *)v179;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[58], (int32_t)v179, v180, v181);
  v182 = (UserExpMaster_o *)sub_1C3E7B0(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v182, 0);
  if ( v182 )
  {
    v3 = sub_1C3E6A0(v182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Bu )
    goto LABEL_1658;
  v1->m_Items[59] = (DataMasterBase_o *)v182;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[59], (int32_t)v182, v183, v184);
  v185 = (TreasureDvcMaster_o *)sub_1C3E7B0(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v185, 0);
  if ( v185 )
  {
    v3 = sub_1C3E6A0(v185, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Cu )
    goto LABEL_1658;
  v1->m_Items[60] = (DataMasterBase_o *)v185;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[60], (int32_t)v185, v186, v187);
  v188 = (ServantTreasureDvcMaster_o *)sub_1C3E7B0(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v188, 0);
  if ( v188 )
  {
    v3 = sub_1C3E6A0(v188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Du )
    goto LABEL_1658;
  v1->m_Items[61] = (DataMasterBase_o *)v188;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[61], (int32_t)v188, v189, v190);
  v191 = (SkillMaster_o *)sub_1C3E7B0(SkillMaster_TypeInfo);
  SkillMaster___ctor(v191, 0);
  if ( v191 )
  {
    v3 = sub_1C3E6A0(v191, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Eu )
    goto LABEL_1658;
  v1->m_Items[62] = (DataMasterBase_o *)v191;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[62], (int32_t)v191, v192, v193);
  v194 = (SkillLvMaster_o *)sub_1C3E7B0(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v194, 0);
  if ( v194 )
  {
    v3 = sub_1C3E6A0(v194, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Fu )
    goto LABEL_1658;
  v1->m_Items[63] = (DataMasterBase_o *)v194;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[63], (int32_t)v194, v195, v196);
  v197 = (SkillDetailMaster_o *)sub_1C3E7B0(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v197, 0);
  if ( v197 )
  {
    v3 = sub_1C3E6A0(v197, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x40u )
    goto LABEL_1658;
  v1->m_Items[64] = (DataMasterBase_o *)v197;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[64], (int32_t)v197, v198, v199);
  v200 = (CommandSpellMaster_o *)sub_1C3E7B0(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v200, 0);
  if ( v200 )
  {
    v3 = sub_1C3E6A0(v200, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x41u )
    goto LABEL_1658;
  v1->m_Items[65] = (DataMasterBase_o *)v200;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[65], (int32_t)v200, v201, v202);
  v203 = (EquipMaster_o *)sub_1C3E7B0(EquipMaster_TypeInfo);
  EquipMaster___ctor(v203, 0);
  if ( v203 )
  {
    v3 = sub_1C3E6A0(v203, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x42u )
    goto LABEL_1658;
  v1->m_Items[66] = (DataMasterBase_o *)v203;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[66], (int32_t)v203, v204, v205);
  v206 = (EquipExpMaster_o *)sub_1C3E7B0(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v206, 0);
  if ( v206 )
  {
    v3 = sub_1C3E6A0(v206, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x43u )
    goto LABEL_1658;
  v1->m_Items[67] = (DataMasterBase_o *)v206;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[67], (int32_t)v206, v207, v208);
  v209 = (EquipSkillMaster_o *)sub_1C3E7B0(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v209, 0);
  if ( v209 )
  {
    v3 = sub_1C3E6A0(v209, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x44u )
    goto LABEL_1658;
  v1->m_Items[68] = (DataMasterBase_o *)v209;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[68], (int32_t)v209, v210, v211);
  v212 = (SubEquipMaster_o *)sub_1C3E7B0(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v212, 0);
  if ( v212 )
  {
    v3 = sub_1C3E6A0(v212, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x45u )
    goto LABEL_1658;
  v1->m_Items[69] = (DataMasterBase_o *)v212;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[69], (int32_t)v212, v213, v214);
  v215 = (AccessaryMaster_o *)sub_1C3E7B0(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v215, 0);
  if ( v215 )
  {
    v3 = sub_1C3E6A0(v215, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x46u )
    goto LABEL_1658;
  v1->m_Items[70] = (DataMasterBase_o *)v215;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[70], (int32_t)v215, v216, v217);
  v218 = (UserPresentBoxMaster_o *)sub_1C3E7B0(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v218, 0);
  if ( v218 )
  {
    v3 = sub_1C3E6A0(v218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x47u )
    goto LABEL_1658;
  v1->m_Items[71] = (DataMasterBase_o *)v218;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[71], (int32_t)v218, v219, v220);
  v221 = (UserDeckMaster_o *)sub_1C3E7B0(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v221, 0);
  if ( v221 )
  {
    v3 = sub_1C3E6A0(v221, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x48u )
    goto LABEL_1658;
  v1->m_Items[72] = (DataMasterBase_o *)v221;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[72], (int32_t)v221, v222, v223);
  v224 = (UserSubEquipMaster_o *)sub_1C3E7B0(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v224, 0);
  if ( v224 )
  {
    v3 = sub_1C3E6A0(v224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x49u )
    goto LABEL_1658;
  v1->m_Items[73] = (DataMasterBase_o *)v224;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[73], (int32_t)v224, v225, v226);
  v227 = (GachaMaster_o *)sub_1C3E7B0(GachaMaster_TypeInfo);
  GachaMaster___ctor(v227, 0);
  if ( v227 )
  {
    v3 = sub_1C3E6A0(v227, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Au )
    goto LABEL_1658;
  v1->m_Items[74] = (DataMasterBase_o *)v227;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[74], (int32_t)v227, v228, v229);
  v230 = (GachaImageMaster_o *)sub_1C3E7B0(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v230, 0);
  if ( v230 )
  {
    v3 = sub_1C3E6A0(v230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Bu )
    goto LABEL_1658;
  v1->m_Items[75] = (DataMasterBase_o *)v230;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[75], (int32_t)v230, v231, v232);
  v233 = (UserGachaMaster_o *)sub_1C3E7B0(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v233, 0);
  if ( v233 )
  {
    v3 = sub_1C3E6A0(v233, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Cu )
    goto LABEL_1658;
  v1->m_Items[76] = (DataMasterBase_o *)v233;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[76], (int32_t)v233, v234, v235);
  v236 = (UserEquipMaster_o *)sub_1C3E7B0(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v236, 0);
  if ( v236 )
  {
    v3 = sub_1C3E6A0(v236, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Du )
    goto LABEL_1658;
  v1->m_Items[77] = (DataMasterBase_o *)v236;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[77], (int32_t)v236, v237, v238);
  v239 = (UserServantCollectionMaster_o *)sub_1C3E7B0(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v239, 0);
  if ( v239 )
  {
    v3 = sub_1C3E6A0(v239, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Eu )
    goto LABEL_1658;
  v1->m_Items[78] = (DataMasterBase_o *)v239;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[78], (int32_t)v239, v240, v241);
  v242 = (FriendshipMaster_o *)sub_1C3E7B0(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v242, 0);
  if ( v242 )
  {
    v3 = sub_1C3E6A0(v242, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Fu )
    goto LABEL_1658;
  v1->m_Items[79] = (DataMasterBase_o *)v242;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[79], (int32_t)v242, v243, v244);
  v245 = (GachaTicketMaster_o *)sub_1C3E7B0(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v245, 0);
  if ( v245 )
  {
    v3 = sub_1C3E6A0(v245, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x50u )
    goto LABEL_1658;
  v1->m_Items[80] = (DataMasterBase_o *)v245;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[80], (int32_t)v245, v246, v247);
  v248 = (UserFormationMaster_o *)sub_1C3E7B0(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v248, 0);
  if ( v248 )
  {
    v3 = sub_1C3E6A0(v248, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x51u )
    goto LABEL_1658;
  v1->m_Items[81] = (DataMasterBase_o *)v248;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[81], (int32_t)v248, v249, v250);
  v251 = (FunctionMaster_o *)sub_1C3E7B0(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v251, 0);
  if ( v251 )
  {
    v3 = sub_1C3E6A0(v251, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x52u )
    goto LABEL_1658;
  v1->m_Items[82] = (DataMasterBase_o *)v251;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[82], (int32_t)v251, v252, v253);
  v254 = (BuffMaster_o *)sub_1C3E7B0(BuffMaster_TypeInfo);
  BuffMaster___ctor(v254, 0);
  if ( v254 )
  {
    v3 = sub_1C3E6A0(v254, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x53u )
    goto LABEL_1658;
  v1->m_Items[83] = (DataMasterBase_o *)v254;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[83], (int32_t)v254, v255, v256);
  v257 = (GachaReleaseMaster_o *)sub_1C3E7B0(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v257, 0);
  if ( v257 )
  {
    v3 = sub_1C3E6A0(v257, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x54u )
    goto LABEL_1658;
  v1->m_Items[84] = (DataMasterBase_o *)v257;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[84], (int32_t)v257, v258, v259);
  v260 = (CombineQpMaster_o *)sub_1C3E7B0(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v260, 0);
  if ( v260 )
  {
    v3 = sub_1C3E6A0(v260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x55u )
    goto LABEL_1658;
  v1->m_Items[85] = (DataMasterBase_o *)v260;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[85], (int32_t)v260, v261, v262);
  v263 = (CombineMaterialMaster_o *)sub_1C3E7B0(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v263, 0);
  if ( v263 )
  {
    v3 = sub_1C3E6A0(v263, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x56u )
    goto LABEL_1658;
  v1->m_Items[86] = (DataMasterBase_o *)v263;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[86], (int32_t)v263, v264, v265);
  v266 = (EventCombineMaster_o *)sub_1C3E7B0(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v266, 0);
  if ( v266 )
  {
    v3 = sub_1C3E6A0(v266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x57u )
    goto LABEL_1658;
  v1->m_Items[87] = (DataMasterBase_o *)v266;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[87], (int32_t)v266, v267, v268);
  v269 = (ServantExpMaster_o *)sub_1C3E7B0(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v269, 0);
  if ( v269 )
  {
    v3 = sub_1C3E6A0(v269, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x58u )
    goto LABEL_1658;
  v1->m_Items[88] = (DataMasterBase_o *)v269;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[88], (int32_t)v269, v270, v271);
  v272 = (CombineSkillMaster_o *)sub_1C3E7B0(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v272, 0);
  if ( v272 )
  {
    v3 = sub_1C3E6A0(v272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x59u )
    goto LABEL_1658;
  v1->m_Items[89] = (DataMasterBase_o *)v272;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[89], (int32_t)v272, v273, v274);
  v275 = (CombineTdMaster_o *)sub_1C3E7B0(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v275, 0);
  if ( v275 )
  {
    v3 = sub_1C3E6A0(v275, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Au )
    goto LABEL_1658;
  v1->m_Items[90] = (DataMasterBase_o *)v275;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[90], (int32_t)v275, v276, v277);
  v278 = (EventQuestMaster_o *)sub_1C3E7B0(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v278, 0);
  if ( v278 )
  {
    v3 = sub_1C3E6A0(v278, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Bu )
    goto LABEL_1658;
  v1->m_Items[91] = (DataMasterBase_o *)v278;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[91], (int32_t)v278, v279, v280);
  v281 = (EventCampaignMaster_o *)sub_1C3E7B0(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v281, 0);
  if ( v281 )
  {
    v3 = sub_1C3E6A0(v281, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Cu )
    goto LABEL_1658;
  v1->m_Items[92] = (DataMasterBase_o *)v281;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[92], (int32_t)v281, v282, v283);
  v284 = (IllustratorMaster_o *)sub_1C3E7B0(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v284, 0);
  if ( v284 )
  {
    v3 = sub_1C3E6A0(v284, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Du )
    goto LABEL_1658;
  v1->m_Items[93] = (DataMasterBase_o *)v284;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[93], (int32_t)v284, v285, v286);
  v287 = (CvMaster_o *)sub_1C3E7B0(CvMaster_TypeInfo);
  CvMaster___ctor(v287, 0);
  if ( v287 )
  {
    v3 = sub_1C3E6A0(v287, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Eu )
    goto LABEL_1658;
  v1->m_Items[94] = (DataMasterBase_o *)v287;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[94], (int32_t)v287, v288, v289);
  v290 = (TreasureDvcLvMaster_o *)sub_1C3E7B0(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v290, 0);
  if ( v290 )
  {
    v3 = sub_1C3E6A0(v290, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Fu )
    goto LABEL_1658;
  v1->m_Items[95] = (DataMasterBase_o *)v290;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[95], (int32_t)v290, v291, v292);
  v293 = (TreasureDvcDetailMaster_o *)sub_1C3E7B0(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v293, 0);
  if ( v293 )
  {
    v3 = sub_1C3E6A0(v293, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x60u )
    goto LABEL_1658;
  v1->m_Items[96] = (DataMasterBase_o *)v293;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[96], (int32_t)v293, v294, v295);
  v296 = (UserFollowerMaster_o *)sub_1C3E7B0(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v296, 0);
  if ( v296 )
  {
    v3 = sub_1C3E6A0(v296, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x61u )
    goto LABEL_1658;
  v1->m_Items[97] = (DataMasterBase_o *)v296;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[97], (int32_t)v296, v297, v298);
  v299 = (NpcFollowerMaster_o *)sub_1C3E7B0(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v299, 0);
  if ( v299 )
  {
    v3 = sub_1C3E6A0(v299, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x62u )
    goto LABEL_1658;
  v1->m_Items[98] = (DataMasterBase_o *)v299;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[98], (int32_t)v299, v300, v301);
  v302 = (NpcServantFollowerMaster_o *)sub_1C3E7B0(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v302, 0);
  if ( v302 )
  {
    v3 = sub_1C3E6A0(v302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x63u )
    goto LABEL_1658;
  v1->m_Items[99] = (DataMasterBase_o *)v302;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[99], (int32_t)v302, v303, v304);
  v305 = (UserEventMaster_o *)sub_1C3E7B0(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v305, 0);
  if ( v305 )
  {
    v3 = sub_1C3E6A0(v305, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x64u )
    goto LABEL_1658;
  v1->m_Items[100] = (DataMasterBase_o *)v305;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[100], (int32_t)v305, v306, v307);
  v308 = (UserShopMaster_o *)sub_1C3E7B0(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v308, 0);
  if ( v308 )
  {
    v3 = sub_1C3E6A0(v308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x65u )
    goto LABEL_1658;
  v1->m_Items[101] = (DataMasterBase_o *)v308;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[101], (int32_t)v308, v309, v310);
  v311 = (UserContinueMaster_o *)sub_1C3E7B0(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v311, 0);
  if ( v311 )
  {
    v3 = sub_1C3E6A0(v311, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x66u )
    goto LABEL_1658;
  v1->m_Items[102] = (DataMasterBase_o *)v311;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[102], (int32_t)v311, v312, v313);
  v314 = (ConstantMaster_o *)sub_1C3E7B0(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v314, 0);
  if ( v314 )
  {
    v3 = sub_1C3E6A0(v314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x67u )
    goto LABEL_1658;
  v1->m_Items[103] = (DataMasterBase_o *)v314;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[103], (int32_t)v314, v315, v316);
  v317 = (ConstantLongMaster_o *)sub_1C3E7B0(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v317, 0);
  if ( v317 )
  {
    v3 = sub_1C3E6A0(v317, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x68u )
    goto LABEL_1658;
  v1->m_Items[104] = (DataMasterBase_o *)v317;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[104], (int32_t)v317, v318, v319);
  v320 = (ConstantStrMaster_o *)sub_1C3E7B0(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v320, 0);
  if ( v320 )
  {
    v3 = sub_1C3E6A0(v320, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x69u )
    goto LABEL_1658;
  v1->m_Items[105] = (DataMasterBase_o *)v320;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[105], (int32_t)v320, v321, v322);
  v323 = (AiMaster_o *)sub_1C3E7B0(AiMaster_TypeInfo);
  AiMaster___ctor(v323, 0);
  if ( v323 )
  {
    v3 = sub_1C3E6A0(v323, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Au )
    goto LABEL_1658;
  v1->m_Items[106] = (DataMasterBase_o *)v323;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[106], (int32_t)v323, v324, v325);
  v326 = (AiActMaster_o *)sub_1C3E7B0(AiActMaster_TypeInfo);
  AiActMaster___ctor(v326, 0);
  if ( v326 )
  {
    v3 = sub_1C3E6A0(v326, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Bu )
    goto LABEL_1658;
  v1->m_Items[107] = (DataMasterBase_o *)v326;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[107], (int32_t)v326, v327, v328);
  v329 = (AttriRelationMaster_o *)sub_1C3E7B0(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v329, 0);
  if ( v329 )
  {
    v3 = sub_1C3E6A0(v329, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Cu )
    goto LABEL_1658;
  v1->m_Items[108] = (DataMasterBase_o *)v329;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[108], (int32_t)v329, v330, v331);
  v332 = (ClassRelationMaster_o *)sub_1C3E7B0(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v332, 0);
  if ( v332 )
  {
    v3 = sub_1C3E6A0(v332, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Du )
    goto LABEL_1658;
  v1->m_Items[109] = (DataMasterBase_o *)v332;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[109], (int32_t)v332, v333, v334);
  v335 = (EffectMaster_o *)sub_1C3E7B0(EffectMaster_TypeInfo);
  EffectMaster___ctor(v335, 0);
  if ( v335 )
  {
    v3 = sub_1C3E6A0(v335, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Eu )
    goto LABEL_1658;
  v1->m_Items[110] = (DataMasterBase_o *)v335;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[110], (int32_t)v335, v336, v337);
  v338 = (EquipImageMaster_o *)sub_1C3E7B0(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v338, 0);
  if ( v338 )
  {
    v3 = sub_1C3E6A0(v338, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Fu )
    goto LABEL_1658;
  v1->m_Items[111] = (DataMasterBase_o *)v338;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[111], (int32_t)v338, v339, v340);
  v341 = (ServantVoiceMaster_o *)sub_1C3E7B0(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v341, 0);
  if ( v341 )
  {
    v3 = sub_1C3E6A0(v341, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x70u )
    goto LABEL_1658;
  v1->m_Items[112] = (DataMasterBase_o *)v341;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[112], (int32_t)v341, v342, v343);
  v344 = (CombineLimitMaster_o *)sub_1C3E7B0(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v344, 0);
  if ( v344 )
  {
    v3 = sub_1C3E6A0(v344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x71u )
    goto LABEL_1658;
  v1->m_Items[113] = (DataMasterBase_o *)v344;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[113], (int32_t)v344, v345, v346);
  v347 = (CardMaster_o *)sub_1C3E7B0(CardMaster_TypeInfo);
  CardMaster___ctor(v347, 0);
  if ( v347 )
  {
    v3 = sub_1C3E6A0(v347, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x72u )
    goto LABEL_1658;
  v1->m_Items[114] = (DataMasterBase_o *)v347;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[114], (int32_t)v347, v348, v349);
  v350 = (CombineQpSvtEquipMaster_o *)sub_1C3E7B0(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v350, 0);
  if ( v350 )
  {
    v3 = sub_1C3E6A0(v350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x73u )
    goto LABEL_1658;
  v1->m_Items[115] = (DataMasterBase_o *)v350;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[115], (int32_t)v350, v351, v352);
  v353 = (ServantRarityMaster_o *)sub_1C3E7B0(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v353, 0);
  if ( v353 )
  {
    v3 = sub_1C3E6A0(v353, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x74u )
    goto LABEL_1658;
  v1->m_Items[116] = (DataMasterBase_o *)v353;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[116], (int32_t)v353, v354, v355);
  v356 = (SetItemMaster_o *)sub_1C3E7B0(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v356, 0);
  if ( v356 )
  {
    v3 = sub_1C3E6A0(v356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x75u )
    goto LABEL_1658;
  v1->m_Items[117] = (DataMasterBase_o *)v356;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[117], (int32_t)v356, v357, v358);
  v359 = (RecoverMaster_o *)sub_1C3E7B0(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v359, 0);
  if ( v359 )
  {
    v3 = sub_1C3E6A0(v359, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x76u )
    goto LABEL_1658;
  v1->m_Items[118] = (DataMasterBase_o *)v359;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[118], (int32_t)v359, v360, v361);
  v362 = (BannerMaster_o *)sub_1C3E7B0(BannerMaster_TypeInfo);
  BannerMaster___ctor(v362, 0);
  if ( v362 )
  {
    v3 = sub_1C3E6A0(v362, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x77u )
    goto LABEL_1658;
  v1->m_Items[119] = (DataMasterBase_o *)v362;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[119], (int32_t)v362, v363, v364);
  v365 = (ShopReleaseMaster_o *)sub_1C3E7B0(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v365, 0);
  if ( v365 )
  {
    v3 = sub_1C3E6A0(v365, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x78u )
    goto LABEL_1658;
  v1->m_Items[120] = (DataMasterBase_o *)v365;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[120], (int32_t)v365, v366, v367);
  v368 = (EventRewardMaster_o *)sub_1C3E7B0(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v368, 0);
  if ( v368 )
  {
    v3 = sub_1C3E6A0(v368, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x79u )
    goto LABEL_1658;
  v1->m_Items[121] = (DataMasterBase_o *)v368;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[121], (int32_t)v368, v369, v370);
  v371 = (EventDetailMaster_o *)sub_1C3E7B0(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v371, 0);
  if ( v371 )
  {
    v3 = sub_1C3E6A0(v371, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Au )
    goto LABEL_1658;
  v1->m_Items[122] = (DataMasterBase_o *)v371;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[122], (int32_t)v371, v372, v373);
  v374 = (EventServantMaster_o *)sub_1C3E7B0(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v374, 0);
  if ( v374 )
  {
    v3 = sub_1C3E6A0(v374, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Bu )
    goto LABEL_1658;
  v1->m_Items[123] = (DataMasterBase_o *)v374;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[123], (int32_t)v374, v375, v376);
  v377 = (BoxGachaMaster_o *)sub_1C3E7B0(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v377, 0);
  if ( v377 )
  {
    v3 = sub_1C3E6A0(v377, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Cu )
    goto LABEL_1658;
  v1->m_Items[124] = (DataMasterBase_o *)v377;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[124], (int32_t)v377, v378, v379);
  v380 = (BoxGachaBaseMaster_o *)sub_1C3E7B0(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v380, 0);
  if ( v380 )
  {
    v3 = sub_1C3E6A0(v380, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Du )
    goto LABEL_1658;
  v1->m_Items[125] = (DataMasterBase_o *)v380;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[125], (int32_t)v380, v381, v382);
  v383 = (BoxGachaTalkMaster_o *)sub_1C3E7B0(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v383, 0);
  if ( v383 )
  {
    v3 = sub_1C3E6A0(v383, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Eu )
    goto LABEL_1658;
  v1->m_Items[126] = (DataMasterBase_o *)v383;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[126], (int32_t)v383, v384, v385);
  v386 = (UserBoxGachaMaster_o *)sub_1C3E7B0(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v386, 0);
  if ( v386 )
  {
    v3 = sub_1C3E6A0(v386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Fu )
    goto LABEL_1658;
  v1->m_Items[127] = (DataMasterBase_o *)v386;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[127], (int32_t)v386, v387, v388);
  v389 = (BoxGachaHistoryMaster_o *)sub_1C3E7B0(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v389, 0);
  if ( v389 )
  {
    v3 = sub_1C3E6A0(v389, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x80u )
    goto LABEL_1658;
  v1->m_Items[128] = (DataMasterBase_o *)v389;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[128], (int32_t)v389, v390, v391);
  v392 = (BattleBgMaster_o *)sub_1C3E7B0(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v392, 0);
  if ( v392 )
  {
    v3 = sub_1C3E6A0(v392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x81u )
    goto LABEL_1658;
  v1->m_Items[129] = (DataMasterBase_o *)v392;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[129], (int32_t)v392, v393, v394);
  v395 = (TipsBattleMaster_o *)sub_1C3E7B0(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v395, 0);
  if ( v395 )
  {
    v3 = sub_1C3E6A0(v395, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x82u )
    goto LABEL_1658;
  v1->m_Items[130] = (DataMasterBase_o *)v395;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[130], (int32_t)v395, v396, v397);
  v398 = (UserLoginMaster_o *)sub_1C3E7B0(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v398, 0);
  if ( v398 )
  {
    v3 = sub_1C3E6A0(v398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x83u )
    goto LABEL_1658;
  v1->m_Items[131] = (DataMasterBase_o *)v398;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[131], (int32_t)v398, v399, v400);
  v401 = (VoiceMaster_o *)sub_1C3E7B0(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v401, 0);
  if ( v401 )
  {
    v3 = sub_1C3E6A0(v401, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x84u )
    goto LABEL_1658;
  v1->m_Items[132] = (DataMasterBase_o *)v401;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[132], (int32_t)v401, v402, v403);
  v404 = (EventRewardExtraMaster_o *)sub_1C3E7B0(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v404, 0);
  if ( v404 )
  {
    v3 = sub_1C3E6A0(v404, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x85u )
    goto LABEL_1658;
  v1->m_Items[133] = (DataMasterBase_o *)v404;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[133], (int32_t)v404, v405, v406);
  v407 = (EventMissionMaster_o *)sub_1C3E7B0(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v407, 0);
  if ( v407 )
  {
    v3 = sub_1C3E6A0(v407, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x86u )
    goto LABEL_1658;
  v1->m_Items[134] = (DataMasterBase_o *)v407;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[134], (int32_t)v407, v408, v409);
  v410 = (EventMissionActionMaster_o *)sub_1C3E7B0(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v410, 0);
  if ( v410 )
  {
    v3 = sub_1C3E6A0(v410, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x87u )
    goto LABEL_1658;
  v1->m_Items[135] = (DataMasterBase_o *)v410;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[135], (int32_t)v410, v411, v412);
  v413 = (EventMissionActionAddMaster_o *)sub_1C3E7B0(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v413, 0);
  if ( v413 )
  {
    v3 = sub_1C3E6A0(v413, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x88u )
    goto LABEL_1658;
  v1->m_Items[136] = (DataMasterBase_o *)v413;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[136], (int32_t)v413, v414, v415);
  v416 = (EventMissionConditionMaster_o *)sub_1C3E7B0(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v416, 0);
  if ( v416 )
  {
    v3 = sub_1C3E6A0(v416, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x89u )
    goto LABEL_1658;
  v1->m_Items[137] = (DataMasterBase_o *)v416;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[137], (int32_t)v416, v417, v418);
  v419 = (EventMissionCondDetailMaster_o *)sub_1C3E7B0(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v419, 0);
  if ( v419 )
  {
    v3 = sub_1C3E6A0(v419, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Au )
    goto LABEL_1658;
  v1->m_Items[138] = (DataMasterBase_o *)v419;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[138], (int32_t)v419, v420, v421);
  v422 = (EventMissionAddMaster_o *)sub_1C3E7B0(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v422, 0);
  if ( v422 )
  {
    v3 = sub_1C3E6A0(v422, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Bu )
    goto LABEL_1658;
  v1->m_Items[139] = (DataMasterBase_o *)v422;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[139], (int32_t)v422, v423, v424);
  v425 = (CompleteMissionMaster_o *)sub_1C3E7B0(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v425, 0);
  if ( v425 )
  {
    v3 = sub_1C3E6A0(v425, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Cu )
    goto LABEL_1658;
  v1->m_Items[140] = (DataMasterBase_o *)v425;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[140], (int32_t)v425, v426, v427);
  v428 = (EventRewardSetMaster_o *)sub_1C3E7B0(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v428, 0);
  if ( v428 )
  {
    v3 = sub_1C3E6A0(v428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Du )
    goto LABEL_1658;
  v1->m_Items[141] = (DataMasterBase_o *)v428;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[141], (int32_t)v428, v429, v430);
  v431 = (UserEventMissionMaster_o *)sub_1C3E7B0(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v431, 0);
  if ( v431 )
  {
    v3 = sub_1C3E6A0(v431, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Eu )
    goto LABEL_1658;
  v1->m_Items[142] = (DataMasterBase_o *)v431;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[142], (int32_t)v431, v432, v433);
  v434 = (UserEventMissionCondDetailMaster_o *)sub_1C3E7B0(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v434, 0);
  if ( v434 )
  {
    v3 = sub_1C3E6A0(v434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Fu )
    goto LABEL_1658;
  v1->m_Items[143] = (DataMasterBase_o *)v434;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[143], (int32_t)v434, v435, v436);
  v437 = (BoxGachaBaseDetailMaster_o *)sub_1C3E7B0(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v437, 0);
  if ( v437 )
  {
    v3 = sub_1C3E6A0(v437, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x90u )
    goto LABEL_1658;
  v1->m_Items[144] = (DataMasterBase_o *)v437;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[144], (int32_t)v437, v438, v439);
  v440 = (UserServantLeaderMaster_o *)sub_1C3E7B0(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v440, 0);
  if ( v440 )
  {
    v3 = sub_1C3E6A0(v440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x91u )
    goto LABEL_1658;
  v1->m_Items[145] = (DataMasterBase_o *)v440;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[145], (int32_t)v440, v441, v442);
  v443 = (ClosedMessageMaster_o *)sub_1C3E7B0(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v443, 0);
  if ( v443 )
  {
    v3 = sub_1C3E6A0(v443, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x92u )
    goto LABEL_1658;
  v1->m_Items[146] = (DataMasterBase_o *)v443;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[146], (int32_t)v443, v444, v445);
  v446 = (FunctionGroupMaster_o *)sub_1C3E7B0(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v446, 0);
  if ( v446 )
  {
    v3 = sub_1C3E6A0(v446, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x93u )
    goto LABEL_1658;
  v1->m_Items[147] = (DataMasterBase_o *)v446;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[147], (int32_t)v446, v447, v448);
  v449 = (EventRaidMaster_o *)sub_1C3E7B0(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v449, 0);
  if ( v449 )
  {
    v3 = sub_1C3E6A0(v449, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x94u )
    goto LABEL_1658;
  v1->m_Items[148] = (DataMasterBase_o *)v449;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[148], (int32_t)v449, v450, v451);
  v452 = (TotalEventRaidMaster_o *)sub_1C3E7B0(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v452, 0);
  if ( v452 )
  {
    v3 = sub_1C3E6A0(v452, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x95u )
    goto LABEL_1658;
  v1->m_Items[149] = (DataMasterBase_o *)v452;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[149], (int32_t)v452, v453, v454);
  v455 = (UserEventRaidMaster_o *)sub_1C3E7B0(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v455, 0);
  if ( v455 )
  {
    v3 = sub_1C3E6A0(v455, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x96u )
    goto LABEL_1658;
  v1->m_Items[150] = (DataMasterBase_o *)v455;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[150], (int32_t)v455, v456, v457);
  v458 = (EventPointMaster_o *)sub_1C3E7B0(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v458, 0);
  if ( v458 )
  {
    v3 = sub_1C3E6A0(v458, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x97u )
    goto LABEL_1658;
  v1->m_Items[151] = (DataMasterBase_o *)v458;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[151], (int32_t)v458, v459, v460);
  v461 = (EventPointGroupMaster_o *)sub_1C3E7B0(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v461, 0);
  if ( v461 )
  {
    v3 = sub_1C3E6A0(v461, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x98u )
    goto LABEL_1658;
  v1->m_Items[152] = (DataMasterBase_o *)v461;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[152], (int32_t)v461, v462, v463);
  v464 = (TotalEventPointMaster_o *)sub_1C3E7B0(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v464, 0);
  if ( v464 )
  {
    v3 = sub_1C3E6A0(v464, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x99u )
    goto LABEL_1658;
  v1->m_Items[153] = (DataMasterBase_o *)v464;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[153], (int32_t)v464, v465, v466);
  v467 = (UserEventPointMaster_o *)sub_1C3E7B0(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v467, 0);
  if ( v467 )
  {
    v3 = sub_1C3E6A0(v467, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Au )
    goto LABEL_1658;
  v1->m_Items[154] = (DataMasterBase_o *)v467;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[154], (int32_t)v467, v468, v469);
  v470 = (EventPointUpperMaster_o *)sub_1C3E7B0(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v470, 0);
  if ( v470 )
  {
    v3 = sub_1C3E6A0(v470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Bu )
    goto LABEL_1658;
  v1->m_Items[155] = (DataMasterBase_o *)v470;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[155], (int32_t)v470, v471, v472);
  v473 = (EventPointUpperReleaseMaster_o *)sub_1C3E7B0(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v473, 0);
  if ( v473 )
  {
    v3 = sub_1C3E6A0(v473, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Cu )
    goto LABEL_1658;
  v1->m_Items[156] = (DataMasterBase_o *)v473;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[156], (int32_t)v473, v474, v475);
  v476 = (EventRaceMaster_o *)sub_1C3E7B0(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v476, 0);
  if ( v476 )
  {
    v3 = sub_1C3E6A0(v476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Du )
    goto LABEL_1658;
  v1->m_Items[157] = (DataMasterBase_o *)v476;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[157], (int32_t)v476, v477, v478);
  v479 = (EventRaceResultMaster_o *)sub_1C3E7B0(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v479, 0);
  if ( v479 )
  {
    v3 = sub_1C3E6A0(v479, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Eu )
    goto LABEL_1658;
  v1->m_Items[158] = (DataMasterBase_o *)v479;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[158], (int32_t)v479, v480, v481);
  v482 = (QuestRacePointMaster_o *)sub_1C3E7B0(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v482, 0);
  if ( v482 )
  {
    v3 = sub_1C3E6A0(v482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Fu )
    goto LABEL_1658;
  v1->m_Items[159] = (DataMasterBase_o *)v482;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[159], (int32_t)v482, v483, v484);
  v485 = (UserEventRaceMaster_o *)sub_1C3E7B0(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v485, 0);
  if ( v485 )
  {
    v3 = sub_1C3E6A0(v485, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA0u )
    goto LABEL_1658;
  v1->m_Items[160] = (DataMasterBase_o *)v485;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[160], (int32_t)v485, v486, v487);
  v488 = (EventScriptMaster_o *)sub_1C3E7B0(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v488, 0);
  if ( v488 )
  {
    v3 = sub_1C3E6A0(v488, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA1u )
    goto LABEL_1658;
  v1->m_Items[161] = (DataMasterBase_o *)v488;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[161], (int32_t)v488, v489, v490);
  v491 = (EventScriptReleaseMaster_o *)sub_1C3E7B0(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v491, 0);
  if ( v491 )
  {
    v3 = sub_1C3E6A0(v491, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA2u )
    goto LABEL_1658;
  v1->m_Items[162] = (DataMasterBase_o *)v491;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[162], (int32_t)v491, v492, v493);
  v494 = (UserPresentHistoryMaster_o *)sub_1C3E7B0(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v494, 0);
  if ( v494 )
  {
    v3 = sub_1C3E6A0(v494, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA3u )
    goto LABEL_1658;
  v1->m_Items[163] = (DataMasterBase_o *)v494;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[163], (int32_t)v494, v495, v496);
  v497 = (MstMissionMaster_o *)sub_1C3E7B0(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v497, 0);
  if ( v497 )
  {
    v3 = sub_1C3E6A0(v497, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA4u )
    goto LABEL_1658;
  v1->m_Items[164] = (DataMasterBase_o *)v497;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[164], (int32_t)v497, v498, v499);
  v500 = (ServantExceedMaster_o *)sub_1C3E7B0(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v500, 0);
  if ( v500 )
  {
    v3 = sub_1C3E6A0(v500, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA5u )
    goto LABEL_1658;
  v1->m_Items[165] = (DataMasterBase_o *)v500;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[165], (int32_t)v500, v501, v502);
  v503 = (PartialMaintenanceMaster_o *)sub_1C3E7B0(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v503, 0);
  if ( v503 )
  {
    v3 = sub_1C3E6A0(v503, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA6u )
    goto LABEL_1658;
  v1->m_Items[166] = (DataMasterBase_o *)v503;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[166], (int32_t)v503, v504, v505);
  v506 = (GuideMaster_o *)sub_1C3E7B0(GuideMaster_TypeInfo);
  GuideMaster___ctor(v506, 0);
  if ( v506 )
  {
    v3 = sub_1C3E6A0(v506, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA7u )
    goto LABEL_1658;
  v1->m_Items[167] = (DataMasterBase_o *)v506;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[167], (int32_t)v506, v507, v508);
  v509 = (MstMissionDisplayInfoMaster_o *)sub_1C3E7B0(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v509, 0);
  if ( v509 )
  {
    v3 = sub_1C3E6A0(v509, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA8u )
    goto LABEL_1658;
  v1->m_Items[168] = (DataMasterBase_o *)v509;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[168], (int32_t)v509, v510, v511);
  v512 = (GachaGroupMaster_o *)sub_1C3E7B0(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v512, 0);
  if ( v512 )
  {
    v3 = sub_1C3E6A0(v512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xA9u )
    goto LABEL_1658;
  v1->m_Items[169] = (DataMasterBase_o *)v512;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[169], (int32_t)v512, v513, v514);
  v515 = (QuestResetMaster_o *)sub_1C3E7B0(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v515, 0);
  if ( v515 )
  {
    v3 = sub_1C3E6A0(v515, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAAu )
    goto LABEL_1658;
  v1->m_Items[170] = (DataMasterBase_o *)v515;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[170], (int32_t)v515, v516, v517);
  v518 = (WarAddMaster_o *)sub_1C3E7B0(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v518, 0);
  if ( v518 )
  {
    v3 = sub_1C3E6A0(v518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xABu )
    goto LABEL_1658;
  v1->m_Items[171] = (DataMasterBase_o *)v518;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[171], (int32_t)v518, v519, v520);
  v521 = (EventItemDisplayMaster_o *)sub_1C3E7B0(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v521, 0);
  if ( v521 )
  {
    v3 = sub_1C3E6A0(v521, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xACu )
    goto LABEL_1658;
  v1->m_Items[172] = (DataMasterBase_o *)v521;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[172], (int32_t)v521, v522, v523);
  v524 = (EventItemDisplayGroupMaster_o *)sub_1C3E7B0(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v524, 0);
  if ( v524 )
  {
    v3 = sub_1C3E6A0(v524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xADu )
    goto LABEL_1658;
  v1->m_Items[173] = (DataMasterBase_o *)v524;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[173], (int32_t)v524, v525, v526);
  v527 = (EventItemDisplayReleaseMaster_o *)sub_1C3E7B0(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v527, 0);
  if ( v527 )
  {
    v3 = sub_1C3E6A0(v527, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAEu )
    goto LABEL_1658;
  v1->m_Items[174] = (DataMasterBase_o *)v527;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[174], (int32_t)v527, v528, v529);
  v530 = (EventTutorialMaster_o *)sub_1C3E7B0(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v530, 0);
  if ( v530 )
  {
    v3 = sub_1C3E6A0(v530, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xAFu )
    goto LABEL_1658;
  v1->m_Items[175] = (DataMasterBase_o *)v530;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[175], (int32_t)v530, v531, v532);
  v533 = (EventTutorialCondMaster_o *)sub_1C3E7B0(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v533, 0);
  if ( v533 )
  {
    v3 = sub_1C3E6A0(v533, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB0u )
    goto LABEL_1658;
  v1->m_Items[176] = (DataMasterBase_o *)v533;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[176], (int32_t)v533, v534, v535);
  v536 = (VoiceReleaseMaster_o *)sub_1C3E7B0(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v536, 0);
  if ( v536 )
  {
    v3 = sub_1C3E6A0(v536, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB1u )
    goto LABEL_1658;
  v1->m_Items[177] = (DataMasterBase_o *)v536;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[177], (int32_t)v536, v537, v538);
  v539 = (EventSuperBossMaster_o *)sub_1C3E7B0(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v539, 0);
  if ( v539 )
  {
    v3 = sub_1C3E6A0(v539, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB2u )
    goto LABEL_1658;
  v1->m_Items[178] = (DataMasterBase_o *)v539;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[178], (int32_t)v539, v540, v541);
  v542 = (UserSuperBossMaster_o *)sub_1C3E7B0(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v542, 0);
  if ( v542 )
  {
    v3 = sub_1C3E6A0(v542, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB3u )
    goto LABEL_1658;
  v1->m_Items[179] = (DataMasterBase_o *)v542;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[179], (int32_t)v542, v543, v544);
  v545 = (QuestScriptMaster_o *)sub_1C3E7B0(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v545, 0);
  if ( v545 )
  {
    v3 = sub_1C3E6A0(v545, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB4u )
    goto LABEL_1658;
  v1->m_Items[180] = (DataMasterBase_o *)v545;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[180], (int32_t)v545, v546, v547);
  v548 = (QuestScriptReleaseMaster_o *)sub_1C3E7B0(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v548, 0);
  if ( v548 )
  {
    v3 = sub_1C3E6A0(v548, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB5u )
    goto LABEL_1658;
  v1->m_Items[181] = (DataMasterBase_o *)v548;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[181], (int32_t)v548, v549, v550);
  v551 = (MaterialFolderMaster_o *)sub_1C3E7B0(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v551, 0);
  if ( v551 )
  {
    v3 = sub_1C3E6A0(v551, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB6u )
    goto LABEL_1658;
  v1->m_Items[182] = (DataMasterBase_o *)v551;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[182], (int32_t)v551, v552, v553);
  v554 = (RestrictionMaster_o *)sub_1C3E7B0(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v554, 0);
  if ( v554 )
  {
    v3 = sub_1C3E6A0(v554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB7u )
    goto LABEL_1658;
  v1->m_Items[183] = (DataMasterBase_o *)v554;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[183], (int32_t)v554, v555, v556);
  v557 = (QuestRestrictionMaster_o *)sub_1C3E7B0(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v557, 0);
  if ( v557 )
  {
    v3 = sub_1C3E6A0(v557, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB8u )
    goto LABEL_1658;
  v1->m_Items[184] = (DataMasterBase_o *)v557;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[184], (int32_t)v557, v558, v559);
  v560 = (ServantVoiceRelationMaster_o *)sub_1C3E7B0(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v560, 0);
  if ( v560 )
  {
    v3 = sub_1C3E6A0(v560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xB9u )
    goto LABEL_1658;
  v1->m_Items[185] = (DataMasterBase_o *)v560;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[185], (int32_t)v560, v561, v562);
  v563 = (ShopDetailMaster_o *)sub_1C3E7B0(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v563, 0);
  if ( v563 )
  {
    v3 = sub_1C3E6A0(v563, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBAu )
    goto LABEL_1658;
  v1->m_Items[186] = (DataMasterBase_o *)v563;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[186], (int32_t)v563, v564, v565);
  v566 = (ServantScriptAddMaster_o *)sub_1C3E7B0(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v566, 0);
  if ( v566 )
  {
    v3 = sub_1C3E6A0(v566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBBu )
    goto LABEL_1658;
  v1->m_Items[187] = (DataMasterBase_o *)v566;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[187], (int32_t)v566, v567, v568);
  v569 = (CombineMaster_o *)sub_1C3E7B0(CombineMaster_TypeInfo);
  CombineMaster___ctor(v569, 0);
  if ( v569 )
  {
    v3 = sub_1C3E6A0(v569, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBCu )
    goto LABEL_1658;
  v1->m_Items[188] = (DataMasterBase_o *)v569;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[188], (int32_t)v569, v570, v571);
  v572 = (AiFieldMaster_o *)sub_1C3E7B0(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v572, 0);
  if ( v572 )
  {
    v3 = sub_1C3E6A0(v572, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBDu )
    goto LABEL_1658;
  v1->m_Items[189] = (DataMasterBase_o *)v572;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[189], (int32_t)v572, v573, v574);
  v575 = (ServantCommentAddMaster_o *)sub_1C3E7B0(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v575, 0);
  if ( v575 )
  {
    v3 = sub_1C3E6A0(v575, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBEu )
    goto LABEL_1658;
  v1->m_Items[190] = (DataMasterBase_o *)v575;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[190], (int32_t)v575, v576, v577);
  v578 = (EventFilterMaster_o *)sub_1C3E7B0(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v578, 0);
  if ( v578 )
  {
    v3 = sub_1C3E6A0(v578, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xBFu )
    goto LABEL_1658;
  v1->m_Items[191] = (DataMasterBase_o *)v578;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[191], (int32_t)v578, v579, v580);
  v581 = (UserSupportDeckMaster_o *)sub_1C3E7B0(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v581, 0);
  if ( v581 )
  {
    v3 = sub_1C3E6A0(v581, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC0u )
    goto LABEL_1658;
  v1->m_Items[192] = (DataMasterBase_o *)v581;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[192], (int32_t)v581, v582, v583);
  v584 = (EventRewardSceneMaster_o *)sub_1C3E7B0(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v584, 0);
  if ( v584 )
  {
    v3 = sub_1C3E6A0(v584, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC1u )
    goto LABEL_1658;
  v1->m_Items[193] = (DataMasterBase_o *)v584;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[193], (int32_t)v584, v585, v586);
  v587 = (EventVoicePlayMaster_o *)sub_1C3E7B0(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v587, 0);
  if ( v587 )
  {
    v3 = sub_1C3E6A0(v587, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC2u )
    goto LABEL_1658;
  v1->m_Items[194] = (DataMasterBase_o *)v587;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[194], (int32_t)v587, v588, v589);
  v590 = (GachaSubMaster_o *)sub_1C3E7B0(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v590, 0);
  if ( v590 )
  {
    v3 = sub_1C3E6A0(v590, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC3u )
    goto LABEL_1658;
  v1->m_Items[195] = (DataMasterBase_o *)v590;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[195], (int32_t)v590, v591, v592);
  v593 = (GachaDetailMaster_o *)sub_1C3E7B0(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v593, 0);
  if ( v593 )
  {
    v3 = sub_1C3E6A0(v593, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC4u )
    goto LABEL_1658;
  v1->m_Items[196] = (DataMasterBase_o *)v593;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[196], (int32_t)v593, v594, v595);
  v596 = (GachaBaseCollateralMaster_o *)sub_1C3E7B0(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v596, 0);
  if ( v596 )
  {
    v3 = sub_1C3E6A0(v596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC5u )
    goto LABEL_1658;
  v1->m_Items[197] = (DataMasterBase_o *)v596;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[197], (int32_t)v596, v597, v598);
  v599 = (GachaAdjustAddMaster_o *)sub_1C3E7B0(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v599, 0);
  if ( v599 )
  {
    v3 = sub_1C3E6A0(v599, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC6u )
    goto LABEL_1658;
  v1->m_Items[198] = (DataMasterBase_o *)v599;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[198], (int32_t)v599, v600, v601);
  v602 = (GachaBonusSelectMaster_o *)sub_1C3E7B0(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v602, 0);
  if ( v602 )
  {
    v3 = sub_1C3E6A0(v602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC7u )
    goto LABEL_1658;
  v1->m_Items[199] = (DataMasterBase_o *)v602;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[199], (int32_t)v602, v603, v604);
  v605 = (GachaBonusSelectLineupMaster_o *)sub_1C3E7B0(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v605, 0);
  if ( v605 )
  {
    v3 = sub_1C3E6A0(v605, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC8u )
    goto LABEL_1658;
  v1->m_Items[200] = (DataMasterBase_o *)v605;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[200], (int32_t)v605, v606, v607);
  v608 = (ServantChangeMaster_o *)sub_1C3E7B0(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v608, 0);
  if ( v608 )
  {
    v3 = sub_1C3E6A0(v608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xC9u )
    goto LABEL_1658;
  v1->m_Items[201] = (DataMasterBase_o *)v608;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[201], (int32_t)v608, v609, v610);
  v611 = (VoiceCondMaster_o *)sub_1C3E7B0(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v611, 0);
  if ( v611 )
  {
    v3 = sub_1C3E6A0(v611, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCAu )
    goto LABEL_1658;
  v1->m_Items[202] = (DataMasterBase_o *)v611;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[202], (int32_t)v611, v612, v613);
  v614 = (BgmReleaseMaster_o *)sub_1C3E7B0(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v614, 0);
  if ( v614 )
  {
    v3 = sub_1C3E6A0(v614, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCBu )
    goto LABEL_1658;
  v1->m_Items[203] = (DataMasterBase_o *)v614;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[203], (int32_t)v614, v615, v616);
  v617 = (MyRoomAddMaster_o *)sub_1C3E7B0(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v617, 0);
  if ( v617 )
  {
    v3 = sub_1C3E6A0(v617, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCCu )
    goto LABEL_1658;
  v1->m_Items[204] = (DataMasterBase_o *)v617;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[204], (int32_t)v617, v618, v619);
  v620 = (ShopActionMaster_o *)sub_1C3E7B0(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v620, 0);
  if ( v620 )
  {
    v3 = sub_1C3E6A0(v620, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCDu )
    goto LABEL_1658;
  v1->m_Items[205] = (DataMasterBase_o *)v620;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[205], (int32_t)v620, v621, v622);
  v623 = (EventRewardSceneReleaseMaster_o *)sub_1C3E7B0(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v623, 0);
  if ( v623 )
  {
    v3 = sub_1C3E6A0(v623, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCEu )
    goto LABEL_1658;
  v1->m_Items[206] = (DataMasterBase_o *)v623;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[206], (int32_t)v623, v624, v625);
  v626 = (QuestBehaviorMaster_o *)sub_1C3E7B0(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v626, 0);
  if ( v626 )
  {
    v3 = sub_1C3E6A0(v626, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xCFu )
    goto LABEL_1658;
  v1->m_Items[207] = (DataMasterBase_o *)v626;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[207], (int32_t)v626, v627, v628);
  v629 = (MapMaster_o *)sub_1C3E7B0(MapMaster_TypeInfo);
  MapMaster___ctor(v629, 0);
  if ( v629 )
  {
    v3 = sub_1C3E6A0(v629, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD0u )
    goto LABEL_1658;
  v1->m_Items[208] = (DataMasterBase_o *)v629;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[208], (int32_t)v629, v630, v631);
  v632 = (MapCondMaster_o *)sub_1C3E7B0(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v632, 0);
  if ( v632 )
  {
    v3 = sub_1C3E6A0(v632, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD1u )
    goto LABEL_1658;
  v1->m_Items[209] = (DataMasterBase_o *)v632;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[209], (int32_t)v632, v633, v634);
  v635 = (MapButtonMaster_o *)sub_1C3E7B0(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v635, 0);
  if ( v635 )
  {
    v3 = sub_1C3E6A0(v635, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD2u )
    goto LABEL_1658;
  v1->m_Items[210] = (DataMasterBase_o *)v635;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[210], (int32_t)v635, v636, v637);
  v638 = (BannerAddMaster_o *)sub_1C3E7B0(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v638, 0);
  if ( v638 )
  {
    v3 = sub_1C3E6A0(v638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD3u )
    goto LABEL_1658;
  v1->m_Items[211] = (DataMasterBase_o *)v638;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[211], (int32_t)v638, v639, v640);
  v641 = (EventAddMaster_o *)sub_1C3E7B0(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v641, 0);
  if ( v641 )
  {
    v3 = sub_1C3E6A0(v641, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD4u )
    goto LABEL_1658;
  v1->m_Items[212] = (DataMasterBase_o *)v641;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[212], (int32_t)v641, v642, v643);
  v644 = (TotalLoginMaster_o *)sub_1C3E7B0(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v644, 0);
  if ( v644 )
  {
    v3 = sub_1C3E6A0(v644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD5u )
    goto LABEL_1658;
  v1->m_Items[213] = (DataMasterBase_o *)v644;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[213], (int32_t)v644, v645, v646);
  v647 = (ServantFilterMaster_o *)sub_1C3E7B0(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v647, 0);
  if ( v647 )
  {
    v3 = sub_1C3E6A0(v647, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD6u )
    goto LABEL_1658;
  v1->m_Items[214] = (DataMasterBase_o *)v647;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[214], (int32_t)v647, v648, v649);
  v650 = (CombineCostumeMaster_o *)sub_1C3E7B0(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v650, 0);
  if ( v650 )
  {
    v3 = sub_1C3E6A0(v650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD7u )
    goto LABEL_1658;
  v1->m_Items[215] = (DataMasterBase_o *)v650;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[215], (int32_t)v650, v651, v652);
  v653 = (ServantCostumeMaster_o *)sub_1C3E7B0(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v653, 0);
  if ( v653 )
  {
    v3 = sub_1C3E6A0(v653, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD8u )
    goto LABEL_1658;
  v1->m_Items[216] = (DataMasterBase_o *)v653;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[216], (int32_t)v653, v654, v655);
  v656 = (ServantCostumeReleaseMaster_o *)sub_1C3E7B0(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v656, 0);
  if ( v656 )
  {
    v3 = sub_1C3E6A0(v656, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xD9u )
    goto LABEL_1658;
  v1->m_Items[217] = (DataMasterBase_o *)v656;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[217], (int32_t)v656, v657, v658);
  v659 = (StaffPhotoMaster_o *)sub_1C3E7B0(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v659, 0);
  if ( v659 )
  {
    v3 = sub_1C3E6A0(v659, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDAu )
    goto LABEL_1658;
  v1->m_Items[218] = (DataMasterBase_o *)v659;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[218], (int32_t)v659, v660, v661);
  v662 = (StaffPhotoCostumeMaster_o *)sub_1C3E7B0(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v662, 0);
  if ( v662 )
  {
    v3 = sub_1C3E6A0(v662, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDBu )
    goto LABEL_1658;
  v1->m_Items[219] = (DataMasterBase_o *)v662;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[219], (int32_t)v662, v663, v664);
  v665 = (UserFriendRequestHistoryMaster_o *)sub_1C3E7B0(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v665, 0);
  if ( v665 )
  {
    v3 = sub_1C3E6A0(v665, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDCu )
    goto LABEL_1658;
  v1->m_Items[220] = (DataMasterBase_o *)v665;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[220], (int32_t)v665, v666, v667);
  v668 = (UserBlacklistMaster_o *)sub_1C3E7B0(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v668, 0);
  if ( v668 )
  {
    v3 = sub_1C3E6A0(v668, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDDu )
    goto LABEL_1658;
  v1->m_Items[221] = (DataMasterBase_o *)v668;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[221], (int32_t)v668, v669, v670);
  v671 = (ItemSelectMaster_o *)sub_1C3E7B0(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v671, 0);
  if ( v671 )
  {
    v3 = sub_1C3E6A0(v671, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDEu )
    goto LABEL_1658;
  v1->m_Items[222] = (DataMasterBase_o *)v671;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[222], (int32_t)v671, v672, v673);
  v674 = (TotalEventRaceMaster_o *)sub_1C3E7B0(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v674, 0);
  if ( v674 )
  {
    v3 = sub_1C3E6A0(v674, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xDFu )
    goto LABEL_1658;
  v1->m_Items[223] = (DataMasterBase_o *)v674;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[223], (int32_t)v674, v675, v676);
  v677 = (EventPointGroupAddMaster_o *)sub_1C3E7B0(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v677, 0);
  if ( v677 )
  {
    v3 = sub_1C3E6A0(v677, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE0u )
    goto LABEL_1658;
  v1->m_Items[224] = (DataMasterBase_o *)v677;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[224], (int32_t)v677, v678, v679);
  v680 = (VoicePlayGroupMaster_o *)sub_1C3E7B0(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v680, 0);
  if ( v680 )
  {
    v3 = sub_1C3E6A0(v680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE1u )
    goto LABEL_1658;
  v1->m_Items[225] = (DataMasterBase_o *)v680;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[225], (int32_t)v680, v681, v682);
  v683 = (VoicePlayCondMaster_o *)sub_1C3E7B0(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v683, 0);
  if ( v683 )
  {
    v3 = sub_1C3E6A0(v683, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE2u )
    goto LABEL_1658;
  v1->m_Items[226] = (DataMasterBase_o *)v683;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[226], (int32_t)v683, v684, v685);
  v686 = (GachaStoryAdjustMaster_o *)sub_1C3E7B0(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v686, 0);
  if ( v686 )
  {
    v3 = sub_1C3E6A0(v686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE3u )
    goto LABEL_1658;
  v1->m_Items[227] = (DataMasterBase_o *)v686;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[227], (int32_t)v686, v687, v688);
  v689 = (ServantFlagMaster_o *)sub_1C3E7B0(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v689, 0);
  if ( v689 )
  {
    v3 = sub_1C3E6A0(v689, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE4u )
    goto LABEL_1658;
  v1->m_Items[228] = (DataMasterBase_o *)v689;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[228], (int32_t)v689, v690, v691);
  v692 = (ServantFlagReleaseMaster_o *)sub_1C3E7B0(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v692, 0);
  if ( v692 )
  {
    v3 = sub_1C3E6A0(v692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE5u )
    goto LABEL_1658;
  v1->m_Items[229] = (DataMasterBase_o *)v692;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[229], (int32_t)v692, v693, v694);
  v695 = (EventLocationCampaignMaster_o *)sub_1C3E7B0(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v695, 0);
  if ( v695 )
  {
    v3 = sub_1C3E6A0(v695, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE6u )
    goto LABEL_1658;
  v1->m_Items[230] = (DataMasterBase_o *)v695;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[230], (int32_t)v695, v696, v697);
  v698 = (CampaignInfoMaster_o *)sub_1C3E7B0(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v698, 0);
  if ( v698 )
  {
    v3 = sub_1C3E6A0(v698, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE7u )
    goto LABEL_1658;
  v1->m_Items[231] = (DataMasterBase_o *)v698;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[231], (int32_t)v698, v699, v700);
  v701 = (DialogMessageMaster_o *)sub_1C3E7B0(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v701, 0);
  if ( v701 )
  {
    v3 = sub_1C3E6A0(v701, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE8u )
    goto LABEL_1658;
  v1->m_Items[232] = (DataMasterBase_o *)v701;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[232], (int32_t)v701, v702, v703);
  v704 = (ServantIndividualityMaster_o *)sub_1C3E7B0(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v704, 0);
  if ( v704 )
  {
    v3 = sub_1C3E6A0(v704, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xE9u )
    goto LABEL_1658;
  v1->m_Items[233] = (DataMasterBase_o *)v704;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[233], (int32_t)v704, v705, v706);
  v707 = (BoardMessageMaster_o *)sub_1C3E7B0(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v707, 0);
  if ( v707 )
  {
    v3 = sub_1C3E6A0(v707, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEAu )
    goto LABEL_1658;
  v1->m_Items[234] = (DataMasterBase_o *)v707;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[234], (int32_t)v707, v708, v709);
  v710 = (BoardMessageReleaseMaster_o *)sub_1C3E7B0(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v710, 0);
  if ( v710 )
  {
    v3 = sub_1C3E6A0(v710, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEBu )
    goto LABEL_1658;
  v1->m_Items[235] = (DataMasterBase_o *)v710;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[235], (int32_t)v710, v711, v712);
  v713 = (EventServantFatigueMaster_o *)sub_1C3E7B0(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v713, 0);
  if ( v713 )
  {
    v3 = sub_1C3E6A0(v713, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xECu )
    goto LABEL_1658;
  v1->m_Items[236] = (DataMasterBase_o *)v713;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[236], (int32_t)v713, v714, v715);
  v716 = (UserEventDeckMaster_o *)sub_1C3E7B0(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v716, 0);
  if ( v716 )
  {
    v3 = sub_1C3E6A0(v716, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEDu )
    goto LABEL_1658;
  v1->m_Items[237] = (DataMasterBase_o *)v716;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[237], (int32_t)v716, v717, v718);
  v719 = (EventTowerMaster_o *)sub_1C3E7B0(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v719, 0);
  if ( v719 )
  {
    v3 = sub_1C3E6A0(v719, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEEu )
    goto LABEL_1658;
  v1->m_Items[238] = (DataMasterBase_o *)v719;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[238], (int32_t)v719, v720, v721);
  v722 = (EventTowerRewardMaster_o *)sub_1C3E7B0(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v722, 0);
  if ( v722 )
  {
    v3 = sub_1C3E6A0(v722, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xEFu )
    goto LABEL_1658;
  v1->m_Items[239] = (DataMasterBase_o *)v722;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[239], (int32_t)v722, v723, v724);
  v725 = (EventBulletinBoardMaster_o *)sub_1C3E7B0(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v725, 0);
  if ( v725 )
  {
    v3 = sub_1C3E6A0(v725, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF0u )
    goto LABEL_1658;
  v1->m_Items[240] = (DataMasterBase_o *)v725;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[240], (int32_t)v725, v726, v727);
  v728 = (EventBulletinBoardReleaseMaster_o *)sub_1C3E7B0(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v728, 0);
  if ( v728 )
  {
    v3 = sub_1C3E6A0(v728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF1u )
    goto LABEL_1658;
  v1->m_Items[241] = (DataMasterBase_o *)v728;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[241], (int32_t)v728, v729, v730);
  v731 = (EventFactoryMaster_o *)sub_1C3E7B0(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v731, 0);
  if ( v731 )
  {
    v3 = sub_1C3E6A0(v731, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF2u )
    goto LABEL_1658;
  v1->m_Items[242] = (DataMasterBase_o *)v731;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[242], (int32_t)v731, v732, v733);
  v734 = (ShopGroupMaster_o *)sub_1C3E7B0(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v734, 0);
  if ( v734 )
  {
    v3 = sub_1C3E6A0(v734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF3u )
    goto LABEL_1658;
  v1->m_Items[243] = (DataMasterBase_o *)v734;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[243], (int32_t)v734, v735, v736);
  v737 = (AuraEffectMaster_o *)sub_1C3E7B0(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v737, 0);
  if ( v737 )
  {
    v3 = sub_1C3E6A0(v737, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF4u )
    goto LABEL_1658;
  v1->m_Items[244] = (DataMasterBase_o *)v737;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[244], (int32_t)v737, v738, v739);
  v740 = (AuraEffectPosOverwriteMaster_o *)sub_1C3E7B0(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v740, 0);
  if ( v740 )
  {
    v3 = sub_1C3E6A0(v740, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF5u )
    goto LABEL_1658;
  v1->m_Items[245] = (DataMasterBase_o *)v740;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[245], (int32_t)v740, v741, v742);
  v743 = (UserEventMissionFixMaster_o *)sub_1C3E7B0(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v743, 0);
  if ( v743 )
  {
    v3 = sub_1C3E6A0(v743, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF6u )
    goto LABEL_1658;
  v1->m_Items[246] = (DataMasterBase_o *)v743;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[246], (int32_t)v743, v744, v745);
  v746 = (NotEndEventMissionFixMaster_o *)sub_1C3E7B0(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v746, 0);
  if ( v746 )
  {
    v3 = sub_1C3E6A0(v746, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF7u )
    goto LABEL_1658;
  v1->m_Items[247] = (DataMasterBase_o *)v746;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[247], (int32_t)v746, v747, v748);
  v749 = (EnemyMstMaster_o *)sub_1C3E7B0(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v749, 0);
  if ( v749 )
  {
    v3 = sub_1C3E6A0(v749, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF8u )
    goto LABEL_1658;
  v1->m_Items[248] = (DataMasterBase_o *)v749;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[248], (int32_t)v749, v750, v751);
  v752 = (EnemyMstBattleMaster_o *)sub_1C3E7B0(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v752, 0);
  if ( v752 )
  {
    v3 = sub_1C3E6A0(v752, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xF9u )
    goto LABEL_1658;
  v1->m_Items[249] = (DataMasterBase_o *)v752;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[249], (int32_t)v752, v753, v754);
  v755 = (ServantSkillReleaseMaster_o *)sub_1C3E7B0(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v755, 0);
  if ( v755 )
  {
    v3 = sub_1C3E6A0(v755, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFAu )
    goto LABEL_1658;
  v1->m_Items[250] = (DataMasterBase_o *)v755;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[250], (int32_t)v755, v756, v757);
  v758 = (ServantPassiveSkillReleaseMaster_o *)sub_1C3E7B0(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v758, 0);
  if ( v758 )
  {
    v3 = sub_1C3E6A0(v758, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFBu )
    goto LABEL_1658;
  v1->m_Items[251] = (DataMasterBase_o *)v758;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[251], (int32_t)v758, v759, v760);
  v761 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C3E7B0(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v761, 0);
  if ( v761 )
  {
    v3 = sub_1C3E6A0(v761, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFCu )
    goto LABEL_1658;
  v1->m_Items[252] = (DataMasterBase_o *)v761;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[252], (int32_t)v761, v762, v763);
  v764 = (MapGimmickReleaseMaster_o *)sub_1C3E7B0(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v764, 0);
  if ( v764 )
  {
    v3 = sub_1C3E6A0(v764, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFDu )
    goto LABEL_1658;
  v1->m_Items[253] = (DataMasterBase_o *)v764;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[253], (int32_t)v764, v765, v766);
  v767 = (CommandCodeMaster_o *)sub_1C3E7B0(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v767, 0);
  if ( v767 )
  {
    v3 = sub_1C3E6A0(v767, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFEu )
    goto LABEL_1658;
  v1->m_Items[254] = (DataMasterBase_o *)v767;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[254], (int32_t)v767, v768, v769);
  v770 = (ServantCommandCodeUnlockMaster_o *)sub_1C3E7B0(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v770, 0);
  if ( v770 )
  {
    v3 = sub_1C3E6A0(v770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0xFFu )
    goto LABEL_1658;
  v1->m_Items[255] = (DataMasterBase_o *)v770;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[255], (int32_t)v770, v771, v772);
  v773 = (UserCommandCodeMaster_o *)sub_1C3E7B0(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v773, 0);
  if ( v773 )
  {
    v3 = sub_1C3E6A0(v773, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x100u )
    goto LABEL_1658;
  v1->m_Items[256] = (DataMasterBase_o *)v773;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[256], (int32_t)v773, v774, v775);
  v776 = (UserCommandCodeCollectionMaster_o *)sub_1C3E7B0(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v776, 0);
  if ( v776 )
  {
    v3 = sub_1C3E6A0(v776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x101u )
    goto LABEL_1658;
  v1->m_Items[257] = (DataMasterBase_o *)v776;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[257], (int32_t)v776, v777, v778);
  v779 = (UserServantCommandCodeMaster_o *)sub_1C3E7B0(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v779, 0);
  if ( v779 )
  {
    v3 = sub_1C3E6A0(v779, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x102u )
    goto LABEL_1658;
  v1->m_Items[258] = (DataMasterBase_o *)v779;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[258], (int32_t)v779, v780, v781);
  v782 = (UserServantCommandCardMaster_o *)sub_1C3E7B0(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v782, 0);
  if ( v782 )
  {
    v3 = sub_1C3E6A0(v782, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x103u )
    goto LABEL_1658;
  v1->m_Items[259] = (DataMasterBase_o *)v782;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[259], (int32_t)v782, v783, v784);
  v785 = (CommandCardRankParamMaster_o *)sub_1C3E7B0(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v785, 0);
  if ( v785 )
  {
    v3 = sub_1C3E6A0(v785, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x104u )
    goto LABEL_1658;
  v1->m_Items[260] = (DataMasterBase_o *)v785;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[260], (int32_t)v785, v786, v787);
  v788 = (CommandCodeSkillMaster_o *)sub_1C3E7B0(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v788, 0);
  if ( v788 )
  {
    v3 = sub_1C3E6A0(v788, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x105u )
    goto LABEL_1658;
  v1->m_Items[261] = (DataMasterBase_o *)v788;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[261], (int32_t)v788, v789, v790);
  v791 = (CommandCodeSkillReleaseMaster_o *)sub_1C3E7B0(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v791, 0);
  if ( v791 )
  {
    v3 = sub_1C3E6A0(v791, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x106u )
    goto LABEL_1658;
  v1->m_Items[262] = (DataMasterBase_o *)v791;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[262], (int32_t)v791, v792, v793);
  v794 = (CommandCodeCommentMaster_o *)sub_1C3E7B0(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v794, 0);
  if ( v794 )
  {
    v3 = sub_1C3E6A0(v794, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x107u )
    goto LABEL_1658;
  v1->m_Items[263] = (DataMasterBase_o *)v794;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[263], (int32_t)v794, v795, v796);
  v797 = (EventStatusMaster_o *)sub_1C3E7B0(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v797, 0);
  if ( v797 )
  {
    v3 = sub_1C3E6A0(v797, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x108u )
    goto LABEL_1658;
  v1->m_Items[264] = (DataMasterBase_o *)v797;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[264], (int32_t)v797, v798, v799);
  v800 = (EventStatusQuestMaster_o *)sub_1C3E7B0(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v800, 0);
  if ( v800 )
  {
    v3 = sub_1C3E6A0(v800, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x109u )
    goto LABEL_1658;
  v1->m_Items[265] = (DataMasterBase_o *)v800;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[265], (int32_t)v800, v801, v802);
  v803 = (CommonRestrictionMaster_o *)sub_1C3E7B0(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v803, 0);
  if ( v803 )
  {
    v3 = sub_1C3E6A0(v803, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Au )
    goto LABEL_1658;
  v1->m_Items[266] = (DataMasterBase_o *)v803;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[266], (int32_t)v803, v804, v805);
  v806 = (EventPointBuffMaster_o *)sub_1C3E7B0(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v806, 0);
  if ( v806 )
  {
    v3 = sub_1C3E6A0(v806, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Bu )
    goto LABEL_1658;
  v1->m_Items[267] = (DataMasterBase_o *)v806;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[267], (int32_t)v806, v807, v808);
  v809 = (UserFollowMaster_o *)sub_1C3E7B0(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v809, 0);
  if ( v809 )
  {
    v3 = sub_1C3E6A0(v809, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Cu )
    goto LABEL_1658;
  v1->m_Items[268] = (DataMasterBase_o *)v809;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[268], (int32_t)v809, v810, v811);
  v812 = (EventRewardGuideReleaseMaster_o *)sub_1C3E7B0(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v812, 0);
  if ( v812 )
  {
    v3 = sub_1C3E6A0(v812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Du )
    goto LABEL_1658;
  v1->m_Items[269] = (DataMasterBase_o *)v812;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[269], (int32_t)v812, v813, v814);
  v815 = (NpcServantEquipMaster_o *)sub_1C3E7B0(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v815, 0);
  if ( v815 )
  {
    v3 = sub_1C3E6A0(v815, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Eu )
    goto LABEL_1658;
  v1->m_Items[270] = (DataMasterBase_o *)v815;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[270], (int32_t)v815, v816, v817);
  v818 = (EventCampaignReleaseMaster_o *)sub_1C3E7B0(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v818, 0);
  if ( v818 )
  {
    v3 = sub_1C3E6A0(v818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Fu )
    goto LABEL_1658;
  v1->m_Items[271] = (DataMasterBase_o *)v818;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[271], (int32_t)v818, v819, v820);
  v821 = (ServantMaterialFolderMaster_o *)sub_1C3E7B0(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v821, 0);
  if ( v821 )
  {
    v3 = sub_1C3E6A0(v821, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x110u )
    goto LABEL_1658;
  v1->m_Items[272] = (DataMasterBase_o *)v821;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[272], (int32_t)v821, v822, v823);
  v824 = (EventEquipSkillReleaseMaster_o *)sub_1C3E7B0(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v824, 0);
  if ( v824 )
  {
    v3 = sub_1C3E6A0(v824, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x111u )
    goto LABEL_1658;
  v1->m_Items[273] = (DataMasterBase_o *)v824;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[273], (int32_t)v824, v825, v826);
  v827 = (EventPointActivityMaster_o *)sub_1C3E7B0(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v827, 0);
  if ( v827 )
  {
    v3 = sub_1C3E6A0(v827, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x112u )
    goto LABEL_1658;
  v1->m_Items[274] = (DataMasterBase_o *)v827;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[274], (int32_t)v827, v828, v829);
  v830 = (FunctionCategoryMaster_o *)sub_1C3E7B0(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v830, 0);
  if ( v830 )
  {
    v3 = sub_1C3E6A0(v830, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x113u )
    goto LABEL_1658;
  v1->m_Items[275] = (DataMasterBase_o *)v830;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[275], (int32_t)v830, v831, v832);
  v833 = (QuestPickupMaster_o *)sub_1C3E7B0(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v833, 0);
  if ( v833 )
  {
    v3 = sub_1C3E6A0(v833, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x114u )
    goto LABEL_1658;
  v1->m_Items[276] = (DataMasterBase_o *)v833;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[276], (int32_t)v833, v834, v835);
  v836 = (EventUiMaster_o *)sub_1C3E7B0(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v836, 0);
  if ( v836 )
  {
    v3 = sub_1C3E6A0(v836, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x115u )
    goto LABEL_1658;
  v1->m_Items[277] = (DataMasterBase_o *)v836;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[277], (int32_t)v836, v837, v838);
  v839 = (EventUiReleaseMaster_o *)sub_1C3E7B0(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v839, 0);
  if ( v839 )
  {
    v3 = sub_1C3E6A0(v839, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x116u )
    goto LABEL_1658;
  v1->m_Items[278] = (DataMasterBase_o *)v839;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[278], (int32_t)v839, v840, v841);
  v842 = (EventUiValueMaster_o *)sub_1C3E7B0(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v842, 0);
  if ( v842 )
  {
    v3 = sub_1C3E6A0(v842, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x117u )
    goto LABEL_1658;
  v1->m_Items[279] = (DataMasterBase_o *)v842;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[279], (int32_t)v842, v843, v844);
  v845 = (EventConquestRewardMaster_o *)sub_1C3E7B0(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v845, 0);
  if ( v845 )
  {
    v3 = sub_1C3E6A0(v845, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x118u )
    goto LABEL_1658;
  v1->m_Items[280] = (DataMasterBase_o *)v845;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[280], (int32_t)v845, v846, v847);
  v848 = (NpcFollowerReleaseMaster_o *)sub_1C3E7B0(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v848, 0);
  if ( v848 )
  {
    v3 = sub_1C3E6A0(v848, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x119u )
    goto LABEL_1658;
  v1->m_Items[281] = (DataMasterBase_o *)v848;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[281], (int32_t)v848, v849, v850);
  v851 = (EventBonusFilterMaster_o *)sub_1C3E7B0(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v851, 0);
  if ( v851 )
  {
    v3 = sub_1C3E6A0(v851, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Au )
    goto LABEL_1658;
  v1->m_Items[282] = (DataMasterBase_o *)v851;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[282], (int32_t)v851, v852, v853);
  v854 = (EventBonusFilterGroupInfoMaster_o *)sub_1C3E7B0(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v854, 0);
  if ( v854 )
  {
    v3 = sub_1C3E6A0(v854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Bu )
    goto LABEL_1658;
  v1->m_Items[283] = (DataMasterBase_o *)v854;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[283], (int32_t)v854, v855, v856);
  v857 = (EventBonusFilterGroupMemberMaster_o *)sub_1C3E7B0(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v857, 0);
  if ( v857 )
  {
    v3 = sub_1C3E6A0(v857, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Cu )
    goto LABEL_1658;
  v1->m_Items[284] = (DataMasterBase_o *)v857;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[284], (int32_t)v857, v858, v859);
  v860 = (UserGachaExtraCountMaster_o *)sub_1C3E7B0(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v860, 0);
  if ( v860 )
  {
    v3 = sub_1C3E6A0(v860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Du )
    goto LABEL_1658;
  v1->m_Items[285] = (DataMasterBase_o *)v860;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[285], (int32_t)v860, v861, v862);
  v863 = (PrivilegeMaster_o *)sub_1C3E7B0(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v863, 0);
  if ( v863 )
  {
    v3 = sub_1C3E6A0(v863, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Eu )
    goto LABEL_1658;
  v1->m_Items[286] = (DataMasterBase_o *)v863;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[286], (int32_t)v863, v864, v865);
  v866 = (UserPrivilegeMaster_o *)sub_1C3E7B0(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v866, 0);
  if ( v866 )
  {
    v3 = sub_1C3E6A0(v866, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Fu )
    goto LABEL_1658;
  v1->m_Items[287] = (DataMasterBase_o *)v866;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[287], (int32_t)v866, v867, v868);
  v869 = (UserQuestRouteMaster_o *)sub_1C3E7B0(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v869, 0);
  if ( v869 )
  {
    v3 = sub_1C3E6A0(v869, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x120u )
    goto LABEL_1658;
  v1->m_Items[288] = (DataMasterBase_o *)v869;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[288], (int32_t)v869, v870, v871);
  v872 = (EventBossStatusUiMaster_o *)sub_1C3E7B0(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v872, 0);
  if ( v872 )
  {
    v3 = sub_1C3E6A0(v872, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x121u )
    goto LABEL_1658;
  v1->m_Items[289] = (DataMasterBase_o *)v872;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[289], (int32_t)v872, v873, v874);
  v875 = (CommonReleaseMaster_o *)sub_1C3E7B0(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v875, 0);
  if ( v875 )
  {
    v3 = sub_1C3E6A0(v875, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x122u )
    goto LABEL_1658;
  v1->m_Items[290] = (DataMasterBase_o *)v875;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[290], (int32_t)v875, v876, v877);
  v878 = (QuestSpotReleaseMaster_o *)sub_1C3E7B0(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v878, 0);
  if ( v878 )
  {
    v3 = sub_1C3E6A0(v878, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x123u )
    goto LABEL_1658;
  v1->m_Items[291] = (DataMasterBase_o *)v878;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[291], (int32_t)v878, v879, v880);
  v881 = (VoiceMaterialCondMaster_o *)sub_1C3E7B0(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v881, 0);
  if ( v881 )
  {
    v3 = sub_1C3E6A0(v881, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x124u )
    goto LABEL_1658;
  v1->m_Items[292] = (DataMasterBase_o *)v881;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[292], (int32_t)v881, v882, v883);
  v884 = (ClassRelationOverwriteMaster_o *)sub_1C3E7B0(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v884, 0);
  if ( v884 )
  {
    v3 = sub_1C3E6A0(v884, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x125u )
    goto LABEL_1658;
  v1->m_Items[293] = (DataMasterBase_o *)v884;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[293], (int32_t)v884, v885, v886);
  v887 = (EventGroupMaster_o *)sub_1C3E7B0(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v887, 0);
  if ( v887 )
  {
    v3 = sub_1C3E6A0(v887, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x126u )
    goto LABEL_1658;
  v1->m_Items[294] = (DataMasterBase_o *)v887;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[294], (int32_t)v887, v888, v889);
  v890 = (TotalBoxGachaMaster_o *)sub_1C3E7B0(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v890, 0);
  if ( v890 )
  {
    v3 = sub_1C3E6A0(v890, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x127u )
    goto LABEL_1658;
  v1->m_Items[295] = (DataMasterBase_o *)v890;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[295], (int32_t)v890, v891, v892);
  v893 = (ServantTreasureDeviceDamageMaster_o *)sub_1C3E7B0(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v893, 0);
  if ( v893 )
  {
    v3 = sub_1C3E6A0(v893, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x128u )
    goto LABEL_1658;
  v1->m_Items[296] = (DataMasterBase_o *)v893;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[296], (int32_t)v893, v894, v895);
  v896 = (UserEventServantFatigueMaster_o *)sub_1C3E7B0(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v896, 0);
  if ( v896 )
  {
    v3 = sub_1C3E6A0(v896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x129u )
    goto LABEL_1658;
  v1->m_Items[297] = (DataMasterBase_o *)v896;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[297], (int32_t)v896, v897, v898);
  v899 = (EventRewardBgMaster_o *)sub_1C3E7B0(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v899, 0);
  if ( v899 )
  {
    v3 = sub_1C3E6A0(v899, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Au )
    goto LABEL_1658;
  v1->m_Items[298] = (DataMasterBase_o *)v899;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[298], (int32_t)v899, v900, v901);
  v902 = (EventFatigueRecoveryMaster_o *)sub_1C3E7B0(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v902, 0);
  if ( v902 )
  {
    v3 = sub_1C3E6A0(v902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Bu )
    goto LABEL_1658;
  v1->m_Items[299] = (DataMasterBase_o *)v902;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[299], (int32_t)v902, v903, v904);
  v905 = (EventBoostItemUsedMaster_o *)sub_1C3E7B0(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v905, 0);
  if ( v905 )
  {
    v3 = sub_1C3E6A0(v905, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Cu )
    goto LABEL_1658;
  v1->m_Items[300] = (DataMasterBase_o *)v905;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[300], (int32_t)v905, v906, v907);
  v908 = (StatusEffectPosOverwriteMaster_o *)sub_1C3E7B0(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v908, 0);
  if ( v908 )
  {
    v3 = sub_1C3E6A0(v908, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Du )
    goto LABEL_1658;
  v1->m_Items[301] = (DataMasterBase_o *)v908;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[301], (int32_t)v908, v909, v910);
  v911 = (QuestPhaseDetailAddMaster_o *)sub_1C3E7B0(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v911, 0);
  if ( v911 )
  {
    v3 = sub_1C3E6A0(v911, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Eu )
    goto LABEL_1658;
  v1->m_Items[302] = (DataMasterBase_o *)v911;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[302], (int32_t)v911, v912, v913);
  v914 = (VoiceClosedMessageMaster_o *)sub_1C3E7B0(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v914, 0);
  if ( v914 )
  {
    v3 = sub_1C3E6A0(v914, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Fu )
    goto LABEL_1658;
  v1->m_Items[303] = (DataMasterBase_o *)v914;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[303], (int32_t)v914, v915, v916);
  v917 = (ReprintStageMaster_o *)sub_1C3E7B0(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v917, 0);
  if ( v917 )
  {
    v3 = sub_1C3E6A0(v917, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x130u )
    goto LABEL_1658;
  v1->m_Items[304] = (DataMasterBase_o *)v917;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[304], (int32_t)v917, v918, v919);
  v920 = (UserCombineExpMaster_o *)sub_1C3E7B0(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v920, 0);
  if ( v920 )
  {
    v3 = sub_1C3E6A0(v920, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x131u )
    goto LABEL_1658;
  v1->m_Items[305] = (DataMasterBase_o *)v920;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[305], (int32_t)v920, v921, v922);
  v923 = (EventBoardGameCellMaster_o *)sub_1C3E7B0(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v923, 0);
  if ( v923 )
  {
    v3 = sub_1C3E6A0(v923, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x132u )
    goto LABEL_1658;
  v1->m_Items[306] = (DataMasterBase_o *)v923;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[306], (int32_t)v923, v924, v925);
  v926 = (EventBoardGameTokenMaster_o *)sub_1C3E7B0(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v926, 0);
  if ( v926 )
  {
    v3 = sub_1C3E6A0(v926, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x133u )
    goto LABEL_1658;
  v1->m_Items[307] = (DataMasterBase_o *)v926;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[307], (int32_t)v926, v927, v928);
  v929 = (EventBoardGameTokenRewardMaster_o *)sub_1C3E7B0(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v929, 0);
  if ( v929 )
  {
    v3 = sub_1C3E6A0(v929, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x134u )
    goto LABEL_1658;
  v1->m_Items[308] = (DataMasterBase_o *)v929;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[308], (int32_t)v929, v930, v931);
  v932 = (UserEventBoardGameTokenMaster_o *)sub_1C3E7B0(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v932, 0);
  if ( v932 )
  {
    v3 = sub_1C3E6A0(v932, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x135u )
    goto LABEL_1658;
  v1->m_Items[309] = (DataMasterBase_o *)v932;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[309], (int32_t)v932, v933, v934);
  v935 = (ServantAnimationOverwriteMaster_o *)sub_1C3E7B0(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v935, 0);
  if ( v935 )
  {
    v3 = sub_1C3E6A0(v935, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x136u )
    goto LABEL_1658;
  v1->m_Items[310] = (DataMasterBase_o *)v935;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[310], (int32_t)v935, v936, v937);
  v938 = (OpeningMovieMaster_o *)sub_1C3E7B0(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v938, 0);
  if ( v938 )
  {
    v3 = sub_1C3E6A0(v938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x137u )
    goto LABEL_1658;
  v1->m_Items[311] = (DataMasterBase_o *)v938;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[311], (int32_t)v938, v939, v940);
  v941 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C3E7B0(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v941, 0);
  if ( v941 )
  {
    v3 = sub_1C3E6A0(v941, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x138u )
    goto LABEL_1658;
  v1->m_Items[312] = (DataMasterBase_o *)v941;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[312], (int32_t)v941, v942, v943);
  v944 = (PickupUserFollowerMaster_o *)sub_1C3E7B0(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v944, 0);
  if ( v944 )
  {
    v3 = sub_1C3E6A0(v944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x139u )
    goto LABEL_1658;
  v1->m_Items[313] = (DataMasterBase_o *)v944;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[313], (int32_t)v944, v945, v946);
  v947 = (ServantCollectionMaster_o *)sub_1C3E7B0(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v947, 0);
  if ( v947 )
  {
    v3 = sub_1C3E6A0(v947, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Au )
    goto LABEL_1658;
  v1->m_Items[314] = (DataMasterBase_o *)v947;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[314], (int32_t)v947, v948, v949);
  v950 = (GachaBehaviorMaster_o *)sub_1C3E7B0(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v950, 0);
  if ( v950 )
  {
    v3 = sub_1C3E6A0(v950, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Bu )
    goto LABEL_1658;
  v1->m_Items[315] = (DataMasterBase_o *)v950;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[315], (int32_t)v950, v951, v952);
  v953 = (EventQuestCooltimeMaster_o *)sub_1C3E7B0(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v953, 0);
  if ( v953 )
  {
    v3 = sub_1C3E6A0(v953, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Cu )
    goto LABEL_1658;
  v1->m_Items[316] = (DataMasterBase_o *)v953;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[316], (int32_t)v953, v954, v955);
  v956 = (UserEventQuestCooltimeMaster_o *)sub_1C3E7B0(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v956, 0);
  if ( v956 )
  {
    v3 = sub_1C3E6A0(v956, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Du )
    goto LABEL_1658;
  v1->m_Items[317] = (DataMasterBase_o *)v956;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[317], (int32_t)v956, v957, v958);
  v959 = (BoostMaster_o *)sub_1C3E7B0(BoostMaster_TypeInfo);
  BoostMaster___ctor(v959, 0);
  if ( v959 )
  {
    v3 = sub_1C3E6A0(v959, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Eu )
    goto LABEL_1658;
  v1->m_Items[318] = (DataMasterBase_o *)v959;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[318], (int32_t)v959, v960, v961);
  v962 = (WarBoardMaster_o *)sub_1C3E7B0(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v962, 0);
  if ( v962 )
  {
    v3 = sub_1C3E6A0(v962, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Fu )
    goto LABEL_1658;
  v1->m_Items[319] = (DataMasterBase_o *)v962;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[319], (int32_t)v962, v963, v964);
  v965 = (WarBoardSquareMaster_o *)sub_1C3E7B0(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v965, 0);
  if ( v965 )
  {
    v3 = sub_1C3E6A0(v965, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x140u )
    goto LABEL_1658;
  v1->m_Items[320] = (DataMasterBase_o *)v965;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[320], (int32_t)v965, v966, v967);
  v968 = (WarBoardRoadMaster_o *)sub_1C3E7B0(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v968, 0);
  if ( v968 )
  {
    v3 = sub_1C3E6A0(v968, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x141u )
    goto LABEL_1658;
  v1->m_Items[321] = (DataMasterBase_o *)v968;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[321], (int32_t)v968, v969, v970);
  v971 = (WarBoardStageMaster_o *)sub_1C3E7B0(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v971, 0);
  if ( v971 )
  {
    v3 = sub_1C3E6A0(v971, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x142u )
    goto LABEL_1658;
  v1->m_Items[322] = (DataMasterBase_o *)v971;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[322], (int32_t)v971, v972, v973);
  v974 = (WarBoardActionPointMaster_o *)sub_1C3E7B0(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v974, 0);
  if ( v974 )
  {
    v3 = sub_1C3E6A0(v974, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x143u )
    goto LABEL_1658;
  v1->m_Items[323] = (DataMasterBase_o *)v974;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[323], (int32_t)v974, v975, v976);
  v977 = (WarBoardActionTrendMaster_o *)sub_1C3E7B0(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v977, 0);
  if ( v977 )
  {
    v3 = sub_1C3E6A0(v977, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x144u )
    goto LABEL_1658;
  v1->m_Items[324] = (DataMasterBase_o *)v977;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[324], (int32_t)v977, v978, v979);
  v980 = (WarBoardTacticalTrendMaster_o *)sub_1C3E7B0(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v980, 0);
  if ( v980 )
  {
    v3 = sub_1C3E6A0(v980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x145u )
    goto LABEL_1658;
  v1->m_Items[325] = (DataMasterBase_o *)v980;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[325], (int32_t)v980, v981, v982);
  v983 = (WarBoardStageLayoutMaster_o *)sub_1C3E7B0(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v983, 0);
  if ( v983 )
  {
    v3 = sub_1C3E6A0(v983, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x146u )
    goto LABEL_1658;
  v1->m_Items[326] = (DataMasterBase_o *)v983;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[326], (int32_t)v983, v984, v985);
  v986 = (WarBoardStageNpcMaster_o *)sub_1C3E7B0(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v986, 0);
  if ( v986 )
  {
    v3 = sub_1C3E6A0(v986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x147u )
    goto LABEL_1658;
  v1->m_Items[327] = (DataMasterBase_o *)v986;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[327], (int32_t)v986, v987, v988);
  v989 = (WarBoardStageWallMaster_o *)sub_1C3E7B0(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v989, 0);
  if ( v989 )
  {
    v3 = sub_1C3E6A0(v989, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x148u )
    goto LABEL_1658;
  v1->m_Items[328] = (DataMasterBase_o *)v989;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[328], (int32_t)v989, v990, v991);
  v992 = (WarBoardAIMaster_o *)sub_1C3E7B0(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v992, 0);
  if ( v992 )
  {
    v3 = sub_1C3E6A0(v992, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x149u )
    goto LABEL_1658;
  v1->m_Items[329] = (DataMasterBase_o *)v992;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[329], (int32_t)v992, v993, v994);
  v995 = (WarBoardRatingBaseMaster_o *)sub_1C3E7B0(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v995, 0);
  if ( v995 )
  {
    v3 = sub_1C3E6A0(v995, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Au )
    goto LABEL_1658;
  v1->m_Items[330] = (DataMasterBase_o *)v995;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[330], (int32_t)v995, v996, v997);
  v998 = (WarBoardRatingOffsetMaster_o *)sub_1C3E7B0(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v998, 0);
  if ( v998 )
  {
    v3 = sub_1C3E6A0(v998, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Bu )
    goto LABEL_1658;
  v1->m_Items[331] = (DataMasterBase_o *)v998;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[331], (int32_t)v998, v999, v1000);
  v1001 = (WarBoardItemMaster_o *)sub_1C3E7B0(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1001, 0);
  if ( v1001 )
  {
    v3 = sub_1C3E6A0(v1001, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Cu )
    goto LABEL_1658;
  v1->m_Items[332] = (DataMasterBase_o *)v1001;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[332], (int32_t)v1001, v1002, v1003);
  v1004 = (WarBoardTreasureMaster_o *)sub_1C3E7B0(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1004, 0);
  if ( v1004 )
  {
    v3 = sub_1C3E6A0(v1004, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Du )
    goto LABEL_1658;
  v1->m_Items[333] = (DataMasterBase_o *)v1004;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[333], (int32_t)v1004, v1005, v1006);
  v1007 = (WarBoardQuestMaster_o *)sub_1C3E7B0(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1007, 0);
  if ( v1007 )
  {
    v3 = sub_1C3E6A0(v1007, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Eu )
    goto LABEL_1658;
  v1->m_Items[334] = (DataMasterBase_o *)v1007;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[334], (int32_t)v1007, v1008, v1009);
  v1010 = (WarBoardDataMaster_o *)sub_1C3E7B0(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1010, 0);
  if ( v1010 )
  {
    v3 = sub_1C3E6A0(v1010, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Fu )
    goto LABEL_1658;
  v1->m_Items[335] = (DataMasterBase_o *)v1010;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[335], (int32_t)v1010, v1011, v1012);
  v1013 = (WarBoardIndividualityClassMaster_o *)sub_1C3E7B0(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1013, 0);
  if ( v1013 )
  {
    v3 = sub_1C3E6A0(v1013, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x150u )
    goto LABEL_1658;
  v1->m_Items[336] = (DataMasterBase_o *)v1013;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[336], (int32_t)v1013, v1014, v1015);
  v1016 = (WarBoardActionTrendConditionMaster_o *)sub_1C3E7B0(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1016, 0);
  if ( v1016 )
  {
    v3 = sub_1C3E6A0(v1016, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x151u )
    goto LABEL_1658;
  v1->m_Items[337] = (DataMasterBase_o *)v1016;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[337], (int32_t)v1016, v1017, v1018);
  v1019 = (WarBoardActionPointClassMaster_o *)sub_1C3E7B0(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1019, 0);
  if ( v1019 )
  {
    v3 = sub_1C3E6A0(v1019, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x152u )
    goto LABEL_1658;
  v1->m_Items[338] = (DataMasterBase_o *)v1019;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[338], (int32_t)v1019, v1020, v1021);
  v1022 = (EventPanelMapMaster_o *)sub_1C3E7B0(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1022, 0);
  if ( v1022 )
  {
    v3 = sub_1C3E6A0(v1022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x153u )
    goto LABEL_1658;
  v1->m_Items[339] = (DataMasterBase_o *)v1022;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[339], (int32_t)v1022, v1023, v1024);
  v1025 = (EventPanelMapDetailMaster_o *)sub_1C3E7B0(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1025, 0);
  if ( v1025 )
  {
    v3 = sub_1C3E6A0(v1025, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x154u )
    goto LABEL_1658;
  v1->m_Items[340] = (DataMasterBase_o *)v1025;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[340], (int32_t)v1025, v1026, v1027);
  v1028 = (EventPanelSpotMaster_o *)sub_1C3E7B0(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1028, 0);
  if ( v1028 )
  {
    v3 = sub_1C3E6A0(v1028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x155u )
    goto LABEL_1658;
  v1->m_Items[341] = (DataMasterBase_o *)v1028;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[341], (int32_t)v1028, v1029, v1030);
  v1031 = (EventPanelScanMaster_o *)sub_1C3E7B0(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1031, 0);
  if ( v1031 )
  {
    v3 = sub_1C3E6A0(v1031, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x156u )
    goto LABEL_1658;
  v1->m_Items[342] = (DataMasterBase_o *)v1031;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[342], (int32_t)v1031, v1032, v1033);
  v1034 = (CommonConsumeMaster_o *)sub_1C3E7B0(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1034, 0);
  if ( v1034 )
  {
    v3 = sub_1C3E6A0(v1034, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x157u )
    goto LABEL_1658;
  v1->m_Items[343] = (DataMasterBase_o *)v1034;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[343], (int32_t)v1034, v1035, v1036);
  v1037 = (UserEventMapMaster_o *)sub_1C3E7B0(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1037, 0);
  if ( v1037 )
  {
    v3 = sub_1C3E6A0(v1037, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x158u )
    goto LABEL_1658;
  v1->m_Items[344] = (DataMasterBase_o *)v1037;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[344], (int32_t)v1037, v1038, v1039);
  v1040 = (UserEventSpotMaster_o *)sub_1C3E7B0(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1040, 0);
  if ( v1040 )
  {
    v3 = sub_1C3E6A0(v1040, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x159u )
    goto LABEL_1658;
  v1->m_Items[345] = (DataMasterBase_o *)v1040;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[345], (int32_t)v1040, v1041, v1042);
  v1043 = (WarGroupMaster_o *)sub_1C3E7B0(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1043, 0);
  if ( v1043 )
  {
    v3 = sub_1C3E6A0(v1043, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Au )
    goto LABEL_1658;
  v1->m_Items[346] = (DataMasterBase_o *)v1043;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[346], (int32_t)v1043, v1044, v1045);
  v1046 = (ServantLimitImageMaster_o *)sub_1C3E7B0(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1046, 0);
  if ( v1046 )
  {
    v3 = sub_1C3E6A0(v1046, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Bu )
    goto LABEL_1658;
  v1->m_Items[347] = (DataMasterBase_o *)v1046;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[347], (int32_t)v1046, v1047, v1048);
  v1049 = (FriendshipQuestDialogInfoMaster_o *)sub_1C3E7B0(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1049, 0);
  if ( v1049 )
  {
    v3 = sub_1C3E6A0(v1049, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Cu )
    goto LABEL_1658;
  v1->m_Items[348] = (DataMasterBase_o *)v1049;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[348], (int32_t)v1049, v1050, v1051);
  v1052 = (QuestRestrictionInfoMaster_o *)sub_1C3E7B0(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1052, 0);
  if ( v1052 )
  {
    v3 = sub_1C3E6A0(v1052, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Du )
    goto LABEL_1658;
  v1->m_Items[349] = (DataMasterBase_o *)v1052;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[349], (int32_t)v1052, v1053, v1054);
  v1055 = (AssistMaster_o *)sub_1C3E7B0(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1055, 0);
  if ( v1055 )
  {
    v3 = sub_1C3E6A0(v1055, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Eu )
    goto LABEL_1658;
  v1->m_Items[350] = (DataMasterBase_o *)v1055;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[350], (int32_t)v1055, v1056, v1057);
  v1058 = (WarBoardEffectMaster_o *)sub_1C3E7B0(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1058, 0);
  if ( v1058 )
  {
    v3 = sub_1C3E6A0(v1058, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Fu )
    goto LABEL_1658;
  v1->m_Items[351] = (DataMasterBase_o *)v1058;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[351], (int32_t)v1058, v1059, v1060);
  v1061 = (WarBoardOnboardSkillMaster_o *)sub_1C3E7B0(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1061, 0);
  if ( v1061 )
  {
    v3 = sub_1C3E6A0(v1061, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x160u )
    goto LABEL_1658;
  v1->m_Items[352] = (DataMasterBase_o *)v1061;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[352], (int32_t)v1061, v1062, v1063);
  v1064 = (BeforeBirthDayMaster_o *)sub_1C3E7B0(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1064, 0);
  if ( v1064 )
  {
    v3 = sub_1C3E6A0(v1064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x161u )
    goto LABEL_1658;
  v1->m_Items[353] = (DataMasterBase_o *)v1064;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[353], (int32_t)v1064, v1065, v1066);
  v1067 = (LoginQuestMaster_o *)sub_1C3E7B0(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1067, 0);
  if ( v1067 )
  {
    v3 = sub_1C3E6A0(v1067, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x162u )
    goto LABEL_1658;
  v1->m_Items[354] = (DataMasterBase_o *)v1067;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[354], (int32_t)v1067, v1068, v1069);
  v1070 = (EventCombineCostumeMaster_o *)sub_1C3E7B0(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1070, 0);
  if ( v1070 )
  {
    v3 = sub_1C3E6A0(v1070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x163u )
    goto LABEL_1658;
  v1->m_Items[355] = (DataMasterBase_o *)v1070;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[355], (int32_t)v1070, v1071, v1072);
  v1073 = (WarBoardStagePieceDetailMaster_o *)sub_1C3E7B0(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1073, 0);
  if ( v1073 )
  {
    v3 = sub_1C3E6A0(v1073, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x164u )
    goto LABEL_1658;
  v1->m_Items[356] = (DataMasterBase_o *)v1073;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[356], (int32_t)v1073, v1074, v1075);
  v1076 = (ServantTreasureDeviceAddMaster_o *)sub_1C3E7B0(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1076, 0);
  if ( v1076 )
  {
    v3 = sub_1C3E6A0(v1076, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x165u )
    goto LABEL_1658;
  v1->m_Items[357] = (DataMasterBase_o *)v1076;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[357], (int32_t)v1076, v1077, v1078);
  v1079 = (SkillAddMaster_o *)sub_1C3E7B0(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1079, 0);
  if ( v1079 )
  {
    v3 = sub_1C3E6A0(v1079, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x166u )
    goto LABEL_1658;
  v1->m_Items[358] = (DataMasterBase_o *)v1079;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[358], (int32_t)v1079, v1080, v1081);
  v1082 = (ServantLvDetailMaster_o *)sub_1C3E7B0(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1082, 0);
  if ( v1082 )
  {
    v3 = sub_1C3E6A0(v1082, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x167u )
    goto LABEL_1658;
  v1->m_Items[359] = (DataMasterBase_o *)v1082;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[359], (int32_t)v1082, v1083, v1084);
  v1085 = (GachaAppendMaster_o *)sub_1C3E7B0(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1085, 0);
  if ( v1085 )
  {
    v3 = sub_1C3E6A0(v1085, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x168u )
    goto LABEL_1658;
  v1->m_Items[360] = (DataMasterBase_o *)v1085;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[360], (int32_t)v1085, v1086, v1087);
  v1088 = (UserGachaDrawLogMaster_o *)sub_1C3E7B0(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1088, 0);
  if ( v1088 )
  {
    v3 = sub_1C3E6A0(v1088, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x169u )
    goto LABEL_1658;
  v1->m_Items[361] = (DataMasterBase_o *)v1088;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[361], (int32_t)v1088, v1089, v1090);
  v1091 = (ServantAppendPassiveSkillMaster_o *)sub_1C3E7B0(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1091, 0);
  if ( v1091 )
  {
    v3 = sub_1C3E6A0(v1091, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Au )
    goto LABEL_1658;
  v1->m_Items[362] = (DataMasterBase_o *)v1091;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[362], (int32_t)v1091, v1092, v1093);
  v1094 = (UserServantAppendPassiveSkillMaster_o *)sub_1C3E7B0(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1094, 0);
  if ( v1094 )
  {
    v3 = sub_1C3E6A0(v1094, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Bu )
    goto LABEL_1658;
  v1->m_Items[363] = (DataMasterBase_o *)v1094;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[363], (int32_t)v1094, v1095, v1096);
  v1097 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C3E7B0(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1097, 0);
  if ( v1097 )
  {
    v3 = sub_1C3E6A0(v1097, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Cu )
    goto LABEL_1658;
  v1->m_Items[364] = (DataMasterBase_o *)v1097;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[364], (int32_t)v1097, v1098, v1099);
  v1100 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C3E7B0(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1100, 0);
  if ( v1100 )
  {
    v3 = sub_1C3E6A0(v1100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Du )
    goto LABEL_1658;
  v1->m_Items[365] = (DataMasterBase_o *)v1100;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[365], (int32_t)v1100, v1101, v1102);
  v1103 = (CombineAppendPassiveSkillMaster_o *)sub_1C3E7B0(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1103, 0);
  if ( v1103 )
  {
    v3 = sub_1C3E6A0(v1103, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Eu )
    goto LABEL_1658;
  v1->m_Items[366] = (DataMasterBase_o *)v1103;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[366], (int32_t)v1103, v1104, v1105);
  v1106 = (SvtCoinMaster_o *)sub_1C3E7B0(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1106, 0);
  if ( v1106 )
  {
    v3 = sub_1C3E6A0(v1106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Fu )
    goto LABEL_1658;
  v1->m_Items[367] = (DataMasterBase_o *)v1106;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[367], (int32_t)v1106, v1107, v1108);
  v1109 = (UserSvtCoinMaster_o *)sub_1C3E7B0(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1109, 0);
  if ( v1109 )
  {
    v3 = sub_1C3E6A0(v1109, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x170u )
    goto LABEL_1658;
  v1->m_Items[368] = (DataMasterBase_o *)v1109;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[368], (int32_t)v1109, v1110, v1111);
  v1112 = (ServantAddMaster_o *)sub_1C3E7B0(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1112, 0);
  if ( v1112 )
  {
    v3 = sub_1C3E6A0(v1112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x171u )
    goto LABEL_1658;
  v1->m_Items[369] = (DataMasterBase_o *)v1112;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[369], (int32_t)v1112, v1113, v1114);
  v1115 = (TreasureBoxMaster_o *)sub_1C3E7B0(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1115, 0);
  if ( v1115 )
  {
    v3 = sub_1C3E6A0(v1115, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x172u )
    goto LABEL_1658;
  v1->m_Items[370] = (DataMasterBase_o *)v1115;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[370], (int32_t)v1115, v1116, v1117);
  v1118 = (TreasureBoxGiftMaster_o *)sub_1C3E7B0(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1118, 0);
  if ( v1118 )
  {
    v3 = sub_1C3E6A0(v1118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x173u )
    goto LABEL_1658;
  v1->m_Items[371] = (DataMasterBase_o *)v1118;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[371], (int32_t)v1118, v1119, v1120);
  v1121 = (TreasureBoxTalkMaster_o *)sub_1C3E7B0(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1121, 0);
  if ( v1121 )
  {
    v3 = sub_1C3E6A0(v1121, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x174u )
    goto LABEL_1658;
  v1->m_Items[372] = (DataMasterBase_o *)v1121;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[372], (int32_t)v1121, v1122, v1123);
  v1124 = (UserEventExpeditionMaster_o *)sub_1C3E7B0(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1124, 0);
  if ( v1124 )
  {
    v3 = sub_1C3E6A0(v1124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x175u )
    goto LABEL_1658;
  v1->m_Items[373] = (DataMasterBase_o *)v1124;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[373], (int32_t)v1124, v1125, v1126);
  v1127 = (EventExpeditionMaster_o *)sub_1C3E7B0(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1127, 0);
  if ( v1127 )
  {
    v3 = sub_1C3E6A0(v1127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x176u )
    goto LABEL_1658;
  v1->m_Items[374] = (DataMasterBase_o *)v1127;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[374], (int32_t)v1127, v1128, v1129);
  v1130 = (EventExpeditionPieceMaster_o *)sub_1C3E7B0(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1130, 0);
  if ( v1130 )
  {
    v3 = sub_1C3E6A0(v1130, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x177u )
    goto LABEL_1658;
  v1->m_Items[375] = (DataMasterBase_o *)v1130;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[375], (int32_t)v1130, v1131, v1132);
  v1133 = (EventRecipeMaster_o *)sub_1C3E7B0(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1133, 0);
  if ( v1133 )
  {
    v3 = sub_1C3E6A0(v1133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x178u )
    goto LABEL_1658;
  v1->m_Items[376] = (DataMasterBase_o *)v1133;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[376], (int32_t)v1133, v1134, v1135);
  v1136 = (EventRecipeGiftMaster_o *)sub_1C3E7B0(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1136, 0);
  if ( v1136 )
  {
    v3 = sub_1C3E6A0(v1136, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x179u )
    goto LABEL_1658;
  v1->m_Items[377] = (DataMasterBase_o *)v1136;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[377], (int32_t)v1136, v1137, v1138);
  v1139 = (UserEventFortificationMaster_o *)sub_1C3E7B0(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1139, 0);
  if ( v1139 )
  {
    v3 = sub_1C3E6A0(v1139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Au )
    goto LABEL_1658;
  v1->m_Items[378] = (DataMasterBase_o *)v1139;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[378], (int32_t)v1139, v1140, v1141);
  v1142 = (EventFortificationMaster_o *)sub_1C3E7B0(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1142, 0);
  if ( v1142 )
  {
    v3 = sub_1C3E6A0(v1142, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Bu )
    goto LABEL_1658;
  v1->m_Items[379] = (DataMasterBase_o *)v1142;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[379], (int32_t)v1142, v1143, v1144);
  v1145 = (EventFortificationDetailMaster_o *)sub_1C3E7B0(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1145, 0);
  if ( v1145 )
  {
    v3 = sub_1C3E6A0(v1145, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Cu )
    goto LABEL_1658;
  v1->m_Items[380] = (DataMasterBase_o *)v1145;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[380], (int32_t)v1145, v1146, v1147);
  v1148 = (EventFortificationSvtMaster_o *)sub_1C3E7B0(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1148, 0);
  if ( v1148 )
  {
    v3 = sub_1C3E6A0(v1148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Du )
    goto LABEL_1658;
  v1->m_Items[381] = (DataMasterBase_o *)v1148;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[381], (int32_t)v1148, v1149, v1150);
  v1151 = (UserServantVoicePlayedMaster_o *)sub_1C3E7B0(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1151, 0);
  if ( v1151 )
  {
    v3 = sub_1C3E6A0(v1151, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Eu )
    goto LABEL_1658;
  v1->m_Items[382] = (DataMasterBase_o *)v1151;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[382], (int32_t)v1151, v1152, v1153);
  v1154 = (UpdateProfileDialogInfoMaster_o *)sub_1C3E7B0(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1154, 0);
  if ( v1154 )
  {
    v3 = sub_1C3E6A0(v1154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Fu )
    goto LABEL_1658;
  v1->m_Items[383] = (DataMasterBase_o *)v1154;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[383], (int32_t)v1154, v1155, v1156);
  v1157 = (SvtMaterialTdMaster_o *)sub_1C3E7B0(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1157, 0);
  if ( v1157 )
  {
    v3 = sub_1C3E6A0(v1157, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x180u )
    goto LABEL_1658;
  v1->m_Items[384] = (DataMasterBase_o *)v1157;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[384], (int32_t)v1157, v1158, v1159);
  v1160 = (BattleMasterImageMaster_o *)sub_1C3E7B0(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1160, 0);
  if ( v1160 )
  {
    v3 = sub_1C3E6A0(v1160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x181u )
    goto LABEL_1658;
  v1->m_Items[385] = (DataMasterBase_o *)v1160;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[385], (int32_t)v1160, v1161, v1162);
  v1163 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C3E7B0(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1163, 0);
  if ( v1163 )
  {
    v3 = sub_1C3E6A0(v1163, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x182u )
    goto LABEL_1658;
  v1->m_Items[386] = (DataMasterBase_o *)v1163;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[386], (int32_t)v1163, v1164, v1165);
  v1166 = (UserEventRandomMissionMaster_o *)sub_1C3E7B0(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1166, 0);
  if ( v1166 )
  {
    v3 = sub_1C3E6A0(v1166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x183u )
    goto LABEL_1658;
  v1->m_Items[387] = (DataMasterBase_o *)v1166;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[387], (int32_t)v1166, v1167, v1168);
  v1169 = (EventProgressValueMaster_o *)sub_1C3E7B0(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1169, 0);
  if ( v1169 )
  {
    v3 = sub_1C3E6A0(v1169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x184u )
    goto LABEL_1658;
  v1->m_Items[388] = (DataMasterBase_o *)v1169;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[388], (int32_t)v1169, v1170, v1171);
  v1172 = (SvtMultiPortraitMaster_o *)sub_1C3E7B0(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1172, 0);
  if ( v1172 )
  {
    v3 = sub_1C3E6A0(v1172, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x185u )
    goto LABEL_1658;
  v1->m_Items[389] = (DataMasterBase_o *)v1172;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[389], (int32_t)v1172, v1173, v1174);
  v1175 = (EventRandomMissionMaster_o *)sub_1C3E7B0(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1175, 0);
  if ( v1175 )
  {
    v3 = sub_1C3E6A0(v1175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x186u )
    goto LABEL_1658;
  v1->m_Items[390] = (DataMasterBase_o *)v1175;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[390], (int32_t)v1175, v1176, v1177);
  v1178 = (UserGachaHistoryMaster_o *)sub_1C3E7B0(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1178, 0);
  if ( v1178 )
  {
    v3 = sub_1C3E6A0(v1178, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x187u )
    goto LABEL_1658;
  v1->m_Items[391] = (DataMasterBase_o *)v1178;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[391], (int32_t)v1178, v1179, v1180);
  v1181 = (UserCoinRoomMaster_o *)sub_1C3E7B0(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1181, 0);
  if ( v1181 )
  {
    v3 = sub_1C3E6A0(v1181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x188u )
    goto LABEL_1658;
  v1->m_Items[392] = (DataMasterBase_o *)v1181;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[392], (int32_t)v1181, v1182, v1183);
  v1184 = (EventBuddyPointMaster_o *)sub_1C3E7B0(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1184, 0);
  if ( v1184 )
  {
    v3 = sub_1C3E6A0(v1184, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x189u )
    goto LABEL_1658;
  v1->m_Items[393] = (DataMasterBase_o *)v1184;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[393], (int32_t)v1184, v1185, v1186);
  v1187 = (EventServantPointRankMaster_o *)sub_1C3E7B0(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1187, 0);
  if ( v1187 )
  {
    v3 = sub_1C3E6A0(v1187, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Au )
    goto LABEL_1658;
  v1->m_Items[394] = (DataMasterBase_o *)v1187;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[394], (int32_t)v1187, v1188, v1189);
  v1190 = (UserEventServantPointMaster_o *)sub_1C3E7B0(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1190, 0);
  if ( v1190 )
  {
    v3 = sub_1C3E6A0(v1190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Bu )
    goto LABEL_1658;
  v1->m_Items[395] = (DataMasterBase_o *)v1190;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[395], (int32_t)v1190, v1191, v1192);
  v1193 = (FieldMotionMaster_o *)sub_1C3E7B0(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1193, 0);
  if ( v1193 )
  {
    v3 = sub_1C3E6A0(v1193, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Cu )
    goto LABEL_1658;
  v1->m_Items[396] = (DataMasterBase_o *)v1193;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[396], (int32_t)v1193, v1194, v1195);
  v1196 = (UserDeleteReservationMaster_o *)sub_1C3E7B0(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1196, 0);
  if ( v1196 )
  {
    v3 = sub_1C3E6A0(v1196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Du )
    goto LABEL_1658;
  v1->m_Items[397] = (DataMasterBase_o *)v1196;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[397], (int32_t)v1196, v1197, v1198);
  v1199 = (ServantScriptMultipleMaster_o *)sub_1C3E7B0(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1199, 0);
  if ( v1199 )
  {
    v3 = sub_1C3E6A0(v1199, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Eu )
    goto LABEL_1658;
  v1->m_Items[398] = (DataMasterBase_o *)v1199;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[398], (int32_t)v1199, v1200, v1201);
  v1202 = (EquipAddMaster_o *)sub_1C3E7B0(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1202, 0);
  if ( v1202 )
  {
    v3 = sub_1C3E6A0(v1202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Fu )
    goto LABEL_1658;
  v1->m_Items[399] = (DataMasterBase_o *)v1202;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[399], (int32_t)v1202, v1203, v1204);
  v1205 = (QuestReleaseOverwriteMaster_o *)sub_1C3E7B0(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1205, 0);
  if ( v1205 )
  {
    v3 = sub_1C3E6A0(v1205, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x190u )
    goto LABEL_1658;
  v1->m_Items[400] = (DataMasterBase_o *)v1205;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[400], (int32_t)v1205, v1206, v1207);
  v1208 = (UserEventAlloutBattleMaster_o *)sub_1C3E7B0(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1208, 0);
  if ( v1208 )
  {
    v3 = sub_1C3E6A0(v1208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x191u )
    goto LABEL_1658;
  v1->m_Items[401] = (DataMasterBase_o *)v1208;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[401], (int32_t)v1208, v1209, v1210);
  v1211 = (QuestScriptMaterialNextMaster_o *)sub_1C3E7B0(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1211, 0);
  if ( v1211 )
  {
    v3 = sub_1C3E6A0(v1211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x192u )
    goto LABEL_1658;
  v1->m_Items[402] = (DataMasterBase_o *)v1211;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[402], (int32_t)v1211, v1212, v1213);
  v1214 = (EventDiggingMaster_o *)sub_1C3E7B0(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1214, 0);
  if ( v1214 )
  {
    v3 = sub_1C3E6A0(v1214, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x193u )
    goto LABEL_1658;
  v1->m_Items[403] = (DataMasterBase_o *)v1214;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[403], (int32_t)v1214, v1215, v1216);
  v1217 = (EventDiggingBlockMaster_o *)sub_1C3E7B0(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1217, 0);
  if ( v1217 )
  {
    v3 = sub_1C3E6A0(v1217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x194u )
    goto LABEL_1658;
  v1->m_Items[404] = (DataMasterBase_o *)v1217;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[404], (int32_t)v1217, v1218, v1219);
  v1220 = (EventDiggingRewardMaster_o *)sub_1C3E7B0(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1220, 0);
  if ( v1220 )
  {
    v3 = sub_1C3E6A0(v1220, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x195u )
    goto LABEL_1658;
  v1->m_Items[405] = (DataMasterBase_o *)v1220;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[405], (int32_t)v1220, v1221, v1222);
  v1223 = (UserEventDiggingMaster_o *)sub_1C3E7B0(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1223, 0);
  if ( v1223 )
  {
    v3 = sub_1C3E6A0(v1223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x196u )
    goto LABEL_1658;
  v1->m_Items[406] = (DataMasterBase_o *)v1223;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[406], (int32_t)v1223, v1224, v1225);
  v1226 = (BattleMessageMaster_o *)sub_1C3E7B0(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1226, 0);
  if ( v1226 )
  {
    v3 = sub_1C3E6A0(v1226, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x197u )
    goto LABEL_1658;
  v1->m_Items[407] = (DataMasterBase_o *)v1226;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[407], (int32_t)v1226, v1227, v1228);
  v1229 = (BattleMessageGroupMaster_o *)sub_1C3E7B0(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1229, 0);
  if ( v1229 )
  {
    v3 = sub_1C3E6A0(v1229, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x198u )
    goto LABEL_1658;
  v1->m_Items[408] = (DataMasterBase_o *)v1229;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[408], (int32_t)v1229, v1230, v1231);
  v1232 = (UserNpcSvtRecordMaster_o *)sub_1C3E7B0(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1232, 0);
  if ( v1232 )
  {
    v3 = sub_1C3E6A0(v1232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x199u )
    goto LABEL_1658;
  v1->m_Items[409] = (DataMasterBase_o *)v1232;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[409], (int32_t)v1232, v1233, v1234);
  v1235 = (BuffTypeDetailMaster_o *)sub_1C3E7B0(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1235, 0);
  if ( v1235 )
  {
    v3 = sub_1C3E6A0(v1235, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Au )
    goto LABEL_1658;
  v1->m_Items[410] = (DataMasterBase_o *)v1235;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[410], (int32_t)v1235, v1236, v1237);
  v1238 = (WarBoardMessageMaster_o *)sub_1C3E7B0(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1238, 0);
  if ( v1238 )
  {
    v3 = sub_1C3E6A0(v1238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Bu )
    goto LABEL_1658;
  v1->m_Items[411] = (DataMasterBase_o *)v1238;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[411], (int32_t)v1238, v1239, v1240);
  v1241 = (WarBoardPartySkillMaster_o *)sub_1C3E7B0(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1241, 0);
  if ( v1241 )
  {
    v3 = sub_1C3E6A0(v1241, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Cu )
    goto LABEL_1658;
  v1->m_Items[412] = (DataMasterBase_o *)v1241;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[412], (int32_t)v1241, v1242, v1243);
  v1244 = (WarBoardMessageScriptMaster_o *)sub_1C3E7B0(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1244, 0);
  if ( v1244 )
  {
    v3 = sub_1C3E6A0(v1244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Du )
    goto LABEL_1658;
  v1->m_Items[413] = (DataMasterBase_o *)v1244;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[413], (int32_t)v1244, v1245, v1246);
  v1247 = (WarQuestSelectionMaster_o *)sub_1C3E7B0(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1247, 0);
  if ( v1247 )
  {
    v3 = sub_1C3E6A0(v1247, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Eu )
    goto LABEL_1658;
  v1->m_Items[414] = (DataMasterBase_o *)v1247;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[414], (int32_t)v1247, v1248, v1249);
  v1250 = (WarBoardStageDetailMaster_o *)sub_1C3E7B0(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1250, 0);
  if ( v1250 )
  {
    v3 = sub_1C3E6A0(v1250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Fu )
    goto LABEL_1658;
  v1->m_Items[415] = (DataMasterBase_o *)v1250;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[415], (int32_t)v1250, v1251, v1252);
  v1253 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C3E7B0(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1253, 0);
  if ( v1253 )
  {
    v3 = sub_1C3E6A0(v1253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A0u )
    goto LABEL_1658;
  v1->m_Items[416] = (DataMasterBase_o *)v1253;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[416], (int32_t)v1253, v1254, v1255);
  v1256 = (QuestScriptBranchMaterialMaster_o *)sub_1C3E7B0(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1256, 0);
  if ( v1256 )
  {
    v3 = sub_1C3E6A0(v1256, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A1u )
    goto LABEL_1658;
  v1->m_Items[417] = (DataMasterBase_o *)v1256;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[417], (int32_t)v1256, v1257, v1258);
  v1259 = (AdCheckPointMaster_o *)sub_1C3E7B0(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1259, 0);
  if ( v1259 )
  {
    v3 = sub_1C3E6A0(v1259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A2u )
    goto LABEL_1658;
  v1->m_Items[418] = (DataMasterBase_o *)v1259;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[418], (int32_t)v1259, v1260, v1261);
  v1262 = (GiftDetailMaster_o *)sub_1C3E7B0(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1262, 0);
  if ( v1262 )
  {
    v3 = sub_1C3E6A0(v1262, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A3u )
    goto LABEL_1658;
  v1->m_Items[419] = (DataMasterBase_o *)v1262;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[419], (int32_t)v1262, v1263, v1264);
  v1265 = (CombineLimitGiftMaster_o *)sub_1C3E7B0(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1265, 0);
  if ( v1265 )
  {
    v3 = sub_1C3E6A0(v1265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A4u )
    goto LABEL_1658;
  v1->m_Items[420] = (DataMasterBase_o *)v1265;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[420], (int32_t)v1265, v1266, v1267);
  v1268 = (EventCooltimeRewardMaster_o *)sub_1C3E7B0(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1268, 0);
  if ( v1268 )
  {
    v3 = sub_1C3E6A0(v1268, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A5u )
    goto LABEL_1658;
  v1->m_Items[421] = (DataMasterBase_o *)v1268;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[421], (int32_t)v1268, v1269, v1270);
  v1271 = (UserEventCooltimeRewardMaster_o *)sub_1C3E7B0(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1271, 0);
  if ( v1271 )
  {
    v3 = sub_1C3E6A0(v1271, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A6u )
    goto LABEL_1658;
  v1->m_Items[422] = (DataMasterBase_o *)v1271;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[422], (int32_t)v1271, v1272, v1273);
  v1274 = (ClassBoardBaseMaster_o *)sub_1C3E7B0(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1274, 0);
  if ( v1274 )
  {
    v3 = sub_1C3E6A0(v1274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A7u )
    goto LABEL_1658;
  v1->m_Items[423] = (DataMasterBase_o *)v1274;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[423], (int32_t)v1274, v1275, v1276);
  v1277 = (ClassBoardLockMaster_o *)sub_1C3E7B0(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1277, 0);
  if ( v1277 )
  {
    v3 = sub_1C3E6A0(v1277, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A8u )
    goto LABEL_1658;
  v1->m_Items[424] = (DataMasterBase_o *)v1277;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[424], (int32_t)v1277, v1278, v1279);
  v1280 = (ClassBoardSquareMaster_o *)sub_1C3E7B0(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1280, 0);
  if ( v1280 )
  {
    v3 = sub_1C3E6A0(v1280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A9u )
    goto LABEL_1658;
  v1->m_Items[425] = (DataMasterBase_o *)v1280;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[425], (int32_t)v1280, v1281, v1282);
  v1283 = (ClassBoardLineMaster_o *)sub_1C3E7B0(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1283, 0);
  if ( v1283 )
  {
    v3 = sub_1C3E6A0(v1283, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AAu )
    goto LABEL_1658;
  v1->m_Items[426] = (DataMasterBase_o *)v1283;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[426], (int32_t)v1283, v1284, v1285);
  v1286 = (UserClassBoardSquareMaster_o *)sub_1C3E7B0(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1286, 0);
  if ( v1286 )
  {
    v3 = sub_1C3E6A0(v1286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ABu )
    goto LABEL_1658;
  v1->m_Items[427] = (DataMasterBase_o *)v1286;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[427], (int32_t)v1286, v1287, v1288);
  v1289 = (ServantCardAddMaster_o *)sub_1C3E7B0(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1289, 0);
  if ( v1289 )
  {
    v3 = sub_1C3E6A0(v1289, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ACu )
    goto LABEL_1658;
  v1->m_Items[428] = (DataMasterBase_o *)v1289;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[428], (int32_t)v1289, v1290, v1291);
  v1292 = (MapLayerMaster_o *)sub_1C3E7B0(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1292, 0);
  if ( v1292 )
  {
    v3 = sub_1C3E6A0(v1292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ADu )
    goto LABEL_1658;
  v1->m_Items[429] = (DataMasterBase_o *)v1292;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[429], (int32_t)v1292, v1293, v1294);
  v1295 = (SpotLayerMaster_o *)sub_1C3E7B0(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1295, 0);
  if ( v1295 )
  {
    v3 = sub_1C3E6A0(v1295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AEu )
    goto LABEL_1658;
  v1->m_Items[430] = (DataMasterBase_o *)v1295;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[430], (int32_t)v1295, v1296, v1297);
  v1298 = (MapGimmickLayerMaster_o *)sub_1C3E7B0(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1298, 0);
  if ( v1298 )
  {
    v3 = sub_1C3E6A0(v1298, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AFu )
    goto LABEL_1658;
  v1->m_Items[431] = (DataMasterBase_o *)v1298;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[431], (int32_t)v1298, v1299, v1300);
  v1301 = (EventDataLostBattleMaster_o *)sub_1C3E7B0(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1301, 0);
  if ( v1301 )
  {
    v3 = sub_1C3E6A0(v1301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B0u )
    goto LABEL_1658;
  v1->m_Items[432] = (DataMasterBase_o *)v1301;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[432], (int32_t)v1301, v1302, v1303);
  v1304 = (EventDataLostBattleResetMaster_o *)sub_1C3E7B0(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1304, 0);
  if ( v1304 )
  {
    v3 = sub_1C3E6A0(v1304, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B1u )
    goto LABEL_1658;
  v1->m_Items[433] = (DataMasterBase_o *)v1304;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[433], (int32_t)v1304, v1305, v1306);
  v1307 = (UserEventDataLostMaster_o *)sub_1C3E7B0(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1307, 0);
  if ( v1307 )
  {
    v3 = sub_1C3E6A0(v1307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B2u )
    goto LABEL_1658;
  v1->m_Items[434] = (DataMasterBase_o *)v1307;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[434], (int32_t)v1307, v1308, v1309);
  v1310 = (QuestHintMaster_o *)sub_1C3E7B0(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1310, 0);
  if ( v1310 )
  {
    v3 = sub_1C3E6A0(v1310, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B3u )
    goto LABEL_1658;
  v1->m_Items[435] = (DataMasterBase_o *)v1310;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[435], (int32_t)v1310, v1311, v1312);
  v1313 = (FuncTypeDetailMaster_o *)sub_1C3E7B0(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1313, 0);
  if ( v1313 )
  {
    v3 = sub_1C3E6A0(v1313, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B4u )
    goto LABEL_1658;
  v1->m_Items[436] = (DataMasterBase_o *)v1313;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[436], (int32_t)v1313, v1314, v1315);
  v1316 = (BuffConvertMaster_o *)sub_1C3E7B0(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1316, 0);
  if ( v1316 )
  {
    v3 = sub_1C3E6A0(v1316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B5u )
    goto LABEL_1658;
  v1->m_Items[437] = (DataMasterBase_o *)v1316;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[437], (int32_t)v1316, v1317, v1318);
  v1319 = (SkillGroupMaster_o *)sub_1C3E7B0(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1319, 0);
  if ( v1319 )
  {
    v3 = sub_1C3E6A0(v1319, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B6u )
    goto LABEL_1658;
  v1->m_Items[438] = (DataMasterBase_o *)v1319;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[438], (int32_t)v1319, v1320, v1321);
  v1322 = (SkillGroupOverwriteMaster_o *)sub_1C3E7B0(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1322, 0);
  if ( v1322 )
  {
    v3 = sub_1C3E6A0(v1322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B7u )
    goto LABEL_1658;
  v1->m_Items[439] = (DataMasterBase_o *)v1322;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[439], (int32_t)v1322, v1323, v1324);
  v1325 = (SkillIndividualityMaster_o *)sub_1C3E7B0(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1325, 0);
  if ( v1325 )
  {
    v3 = sub_1C3E6A0(v1325, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B8u )
    goto LABEL_1658;
  v1->m_Items[440] = (DataMasterBase_o *)v1325;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[440], (int32_t)v1325, v1326, v1327);
  v1328 = (RestrictionBaseMaster_o *)sub_1C3E7B0(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1328, 0);
  if ( v1328 )
  {
    v3 = sub_1C3E6A0(v1328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B9u )
    goto LABEL_1658;
  v1->m_Items[441] = (DataMasterBase_o *)v1328;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[441], (int32_t)v1328, v1329, v1330);
  v1331 = (RestrictionSlotMaster_o *)sub_1C3E7B0(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1331, 0);
  if ( v1331 )
  {
    v3 = sub_1C3E6A0(v1331, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BAu )
    goto LABEL_1658;
  v1->m_Items[442] = (DataMasterBase_o *)v1331;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[442], (int32_t)v1331, v1332, v1333);
  v1334 = (RestrictionSlotDetailMaster_o *)sub_1C3E7B0(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1334, 0);
  if ( v1334 )
  {
    v3 = sub_1C3E6A0(v1334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BBu )
    goto LABEL_1658;
  v1->m_Items[443] = (DataMasterBase_o *)v1334;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[443], (int32_t)v1334, v1335, v1336);
  v1337 = (RestrictionMessageMaster_o *)sub_1C3E7B0(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1337, 0);
  if ( v1337 )
  {
    v3 = sub_1C3E6A0(v1337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BCu )
    goto LABEL_1658;
  v1->m_Items[444] = (DataMasterBase_o *)v1337;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[444], (int32_t)v1337, v1338, v1339);
  v1340 = (RestrictionWholeMaster_o *)sub_1C3E7B0(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1340, 0);
  if ( v1340 )
  {
    v3 = sub_1C3E6A0(v1340, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BDu )
    goto LABEL_1658;
  v1->m_Items[445] = (DataMasterBase_o *)v1340;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[445], (int32_t)v1340, v1341, v1342);
  v1343 = (FuncDispMaster_o *)sub_1C3E7B0(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1343, 0);
  if ( v1343 )
  {
    v3 = sub_1C3E6A0(v1343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BEu )
    goto LABEL_1658;
  v1->m_Items[446] = (DataMasterBase_o *)v1343;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[446], (int32_t)v1343, v1344, v1345);
  v1346 = (ClassBoardCommandSpellMaster_o *)sub_1C3E7B0(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1346, 0);
  if ( v1346 )
  {
    v3 = sub_1C3E6A0(v1346, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BFu )
    goto LABEL_1658;
  v1->m_Items[447] = (DataMasterBase_o *)v1346;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[447], (int32_t)v1346, v1347, v1348);
  v1349 = (ClassBoardClassMaster_o *)sub_1C3E7B0(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1349, 0);
  if ( v1349 )
  {
    v3 = sub_1C3E6A0(v1349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C0u )
    goto LABEL_1658;
  v1->m_Items[448] = (DataMasterBase_o *)v1349;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[448], (int32_t)v1349, v1350, v1351);
  v1352 = (EventCommandAssistMaster_o *)sub_1C3E7B0(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1352, 0);
  if ( v1352 )
  {
    v3 = sub_1C3E6A0(v1352, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C1u )
    goto LABEL_1658;
  v1->m_Items[449] = (DataMasterBase_o *)v1352;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[449], (int32_t)v1352, v1353, v1354);
  v1355 = (EventMissionGroupMaster_o *)sub_1C3E7B0(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1355, 0);
  if ( v1355 )
  {
    v3 = sub_1C3E6A0(v1355, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C2u )
    goto LABEL_1658;
  v1->m_Items[450] = (DataMasterBase_o *)v1355;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[450], (int32_t)v1355, v1356, v1357);
  v1358 = (CombineLimitReleaseMaster_o *)sub_1C3E7B0(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1358, 0);
  if ( v1358 )
  {
    v3 = sub_1C3E6A0(v1358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C3u )
    goto LABEL_1658;
  v1->m_Items[451] = (DataMasterBase_o *)v1358;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[451], (int32_t)v1358, v1359, v1360);
  v1361 = (HeelPortraitMaster_o *)sub_1C3E7B0(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1361, 0);
  if ( v1361 )
  {
    v3 = sub_1C3E6A0(v1361, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C4u )
    goto LABEL_1658;
  v1->m_Items[452] = (DataMasterBase_o *)v1361;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[452], (int32_t)v1361, v1362, v1363);
  v1364 = (UserHeelPortraitMaster_o *)sub_1C3E7B0(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1364, 0);
  if ( v1364 )
  {
    v3 = sub_1C3E6A0(v1364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C5u )
    goto LABEL_1658;
  v1->m_Items[453] = (DataMasterBase_o *)v1364;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[453], (int32_t)v1364, v1365, v1366);
  v1367 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C3E7B0(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1367, 0);
  if ( v1367 )
  {
    v3 = sub_1C3E6A0(v1367, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C6u )
    goto LABEL_1658;
  v1->m_Items[454] = (DataMasterBase_o *)v1367;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[454], (int32_t)v1367, v1368, v1369);
  v1370 = (NpcServantFollowerIndividualityMaster_o *)sub_1C3E7B0(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1370, 0);
  if ( v1370 )
  {
    v3 = sub_1C3E6A0(v1370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C7u )
    goto LABEL_1658;
  v1->m_Items[455] = (DataMasterBase_o *)v1370;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[455], (int32_t)v1370, v1371, v1372);
  v1373 = (GachaExtraGiftMaster_o *)sub_1C3E7B0(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1373, 0);
  if ( v1373 )
  {
    v3 = sub_1C3E6A0(v1373, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C8u )
    goto LABEL_1658;
  v1->m_Items[456] = (DataMasterBase_o *)v1373;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[456], (int32_t)v1373, v1374, v1375);
  v1376 = (EventMuralMaster_o *)sub_1C3E7B0(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1376, 0);
  if ( v1376 )
  {
    v3 = sub_1C3E6A0(v1376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C9u )
    goto LABEL_1658;
  v1->m_Items[457] = (DataMasterBase_o *)v1376;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[457], (int32_t)v1376, v1377, v1378);
  v1379 = (ViewWaveEnemyMaster_o *)sub_1C3E7B0(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1379, 0);
  if ( v1379 )
  {
    v3 = sub_1C3E6A0(v1379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CAu )
    goto LABEL_1658;
  v1->m_Items[458] = (DataMasterBase_o *)v1379;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[458], (int32_t)v1379, v1380, v1381);
  v1382 = (BlankEarthSpotNavimenuMaster_o *)sub_1C3E7B0(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1382, 0);
  if ( v1382 )
  {
    v3 = sub_1C3E6A0(v1382, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CBu )
    goto LABEL_1658;
  v1->m_Items[459] = (DataMasterBase_o *)v1382;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[459], (int32_t)v1382, v1383, v1384);
  v1385 = (BlankEarthGimmickMaster_o *)sub_1C3E7B0(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1385, 0);
  if ( v1385 )
  {
    v3 = sub_1C3E6A0(v1385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CCu )
    goto LABEL_1658;
  v1->m_Items[460] = (DataMasterBase_o *)v1385;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[460], (int32_t)v1385, v1386, v1387);
  v1388 = (TerminalOverwriteMaster_o *)sub_1C3E7B0(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1388, 0);
  if ( v1388 )
  {
    v3 = sub_1C3E6A0(v1388, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CDu )
    goto LABEL_1658;
  v1->m_Items[461] = (DataMasterBase_o *)v1388;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[461], (int32_t)v1388, v1389, v1390);
  v1391 = (UserExchangeSvtMaster_o *)sub_1C3E7B0(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1391, 0);
  if ( v1391 )
  {
    v3 = sub_1C3E6A0(v1391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CEu )
    goto LABEL_1658;
  v1->m_Items[462] = (DataMasterBase_o *)v1391;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[462], (int32_t)v1391, v1392, v1393);
  v1394 = (WarBoardCommonReleaseMaster_o *)sub_1C3E7B0(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1394, 0);
  if ( v1394 )
  {
    v3 = sub_1C3E6A0(v1394, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CFu )
    goto LABEL_1658;
  v1->m_Items[463] = (DataMasterBase_o *)v1394;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[463], (int32_t)v1394, v1395, v1396);
  v1397 = (WarBoardEventMaster_o *)sub_1C3E7B0(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1397, 0);
  if ( v1397 )
  {
    v3 = sub_1C3E6A0(v1397, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D0u )
    goto LABEL_1658;
  v1->m_Items[464] = (DataMasterBase_o *)v1397;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[464], (int32_t)v1397, v1398, v1399);
  v1400 = (WarBoardEventScriptMaster_o *)sub_1C3E7B0(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1400, 0);
  if ( v1400 )
  {
    v3 = sub_1C3E6A0(v1400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D1u )
    goto LABEL_1658;
  v1->m_Items[465] = (DataMasterBase_o *)v1400;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[465], (int32_t)v1400, v1401, v1402);
  v1403 = (WarBoardStageBossMaster_o *)sub_1C3E7B0(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1403, 0);
  if ( v1403 )
  {
    v3 = sub_1C3E6A0(v1403, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D2u )
    goto LABEL_1658;
  v1->m_Items[466] = (DataMasterBase_o *)v1403;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[466], (int32_t)v1403, v1404, v1405);
  v1406 = (WarBoardSquareIndexGroupMaster_o *)sub_1C3E7B0(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1406, 0);
  if ( v1406 )
  {
    v3 = sub_1C3E6A0(v1406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D3u )
    goto LABEL_1658;
  v1->m_Items[467] = (DataMasterBase_o *)v1406;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[467], (int32_t)v1406, v1407, v1408);
  v1409 = (WarBoardActionTrendGroupMaster_o *)sub_1C3E7B0(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1409, 0);
  if ( v1409 )
  {
    v3 = sub_1C3E6A0(v1409, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D4u )
    goto LABEL_1658;
  v1->m_Items[468] = (DataMasterBase_o *)v1409;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[468], (int32_t)v1409, v1410, v1411);
  v1412 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C3E7B0(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1412, 0);
  if ( v1412 )
  {
    v3 = sub_1C3E6A0(v1412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D5u )
    goto LABEL_1658;
  v1->m_Items[469] = (DataMasterBase_o *)v1412;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[469], (int32_t)v1412, v1413, v1414);
  v1415 = (WarBoardReinforcementsMaster_o *)sub_1C3E7B0(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1415, 0);
  if ( v1415 )
  {
    v3 = sub_1C3E6A0(v1415, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D6u )
    goto LABEL_1658;
  v1->m_Items[470] = (DataMasterBase_o *)v1415;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[470], (int32_t)v1415, v1416, v1417);
  v1418 = (WarBoardStageReinforcementsMaster_o *)sub_1C3E7B0(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1418, 0);
  if ( v1418 )
  {
    v3 = sub_1C3E6A0(v1418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D7u )
    goto LABEL_1658;
  v1->m_Items[471] = (DataMasterBase_o *)v1418;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[471], (int32_t)v1418, v1419, v1420);
  v1421 = (WarBoardFutureActionTrendMaster_o *)sub_1C3E7B0(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1421, 0);
  if ( v1421 )
  {
    v3 = sub_1C3E6A0(v1421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D8u )
    goto LABEL_1658;
  v1->m_Items[472] = (DataMasterBase_o *)v1421;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[472], (int32_t)v1421, v1422, v1423);
  v1424 = (ServantProfilePushMaster_o *)sub_1C3E7B0(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1424, 0);
  if ( v1424 )
  {
    v3 = sub_1C3E6A0(v1424, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D9u )
    goto LABEL_1658;
  v1->m_Items[473] = (DataMasterBase_o *)v1424;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[473], (int32_t)v1424, v1425, v1426);
  v1427 = (MapGimmickPathMaster_o *)sub_1C3E7B0(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1427, 0);
  if ( v1427 )
  {
    v3 = sub_1C3E6A0(v1427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DAu )
    goto LABEL_1658;
  v1->m_Items[474] = (DataMasterBase_o *)v1427;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[474], (int32_t)v1427, v1428, v1429);
  v1430 = (MapGimmickPathReleaseMaster_o *)sub_1C3E7B0(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1430, 0);
  if ( v1430 )
  {
    v3 = sub_1C3E6A0(v1430, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DBu )
    goto LABEL_1658;
  v1->m_Items[475] = (DataMasterBase_o *)v1430;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[475], (int32_t)v1430, v1431, v1432);
  v1433 = (ServantOverwriteMaster_o *)sub_1C3E7B0(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1433, 0);
  if ( v1433 )
  {
    v3 = sub_1C3E6A0(v1433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DCu )
    goto LABEL_1658;
  v1->m_Items[476] = (DataMasterBase_o *)v1433;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[476], (int32_t)v1433, v1434, v1435);
  v1436 = (IndividualityPolicyMaster_o *)sub_1C3E7B0(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1436, 0);
  if ( v1436 )
  {
    v3 = sub_1C3E6A0(v1436, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DDu )
    goto LABEL_1658;
  v1->m_Items[477] = (DataMasterBase_o *)v1436;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[477], (int32_t)v1436, v1437, v1438);
  v1439 = (IndividualityPersonalityMaster_o *)sub_1C3E7B0(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1439, 0);
  if ( v1439 )
  {
    v3 = sub_1C3E6A0(v1439, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DEu )
    goto LABEL_1658;
  v1->m_Items[478] = (DataMasterBase_o *)v1439;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[478], (int32_t)v1439, v1440, v1441);
  v1442 = (AttriMaster_o *)sub_1C3E7B0(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1442, 0);
  if ( v1442 )
  {
    v3 = sub_1C3E6A0(v1442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DFu )
    goto LABEL_1658;
  v1->m_Items[479] = (DataMasterBase_o *)v1442;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[479], (int32_t)v1442, v1443, v1444);
  v1445 = (ServantVoicePatternMaster_o *)sub_1C3E7B0(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1445, 0);
  if ( v1445 )
  {
    v3 = sub_1C3E6A0(v1445, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E0u )
    goto LABEL_1658;
  v1->m_Items[480] = (DataMasterBase_o *)v1445;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[480], (int32_t)v1445, v1446, v1447);
  v1448 = (UserGameCommonMaster_o *)sub_1C3E7B0(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1448, 0);
  if ( v1448 )
  {
    v3 = sub_1C3E6A0(v1448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E1u )
    goto LABEL_1658;
  v1->m_Items[481] = (DataMasterBase_o *)v1448;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[481], (int32_t)v1448, v1449, v1450);
  v1451 = (ServantPhotoMaster_o *)sub_1C3E7B0(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1451, 0);
  if ( v1451 )
  {
    v3 = sub_1C3E6A0(v1451, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E2u )
    goto LABEL_1658;
  v1->m_Items[482] = (DataMasterBase_o *)v1451;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[482], (int32_t)v1451, v1452, v1453);
  v1454 = (MasterPhotoMaster_o *)sub_1C3E7B0(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1454, 0);
  if ( v1454 )
  {
    v3 = sub_1C3E6A0(v1454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E3u )
    goto LABEL_1658;
  v1->m_Items[483] = (DataMasterBase_o *)v1454;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[483], (int32_t)v1454, v1455, v1456);
  v1457 = (PhotoFrameMaster_o *)sub_1C3E7B0(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v1457, 0);
  if ( v1457 )
  {
    v3 = sub_1C3E6A0(v1457, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E4u )
    goto LABEL_1658;
  v1->m_Items[484] = (DataMasterBase_o *)v1457;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[484], (int32_t)v1457, v1458, v1459);
  v1460 = (WarMessageMaster_o *)sub_1C3E7B0(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1460, 0);
  if ( v1460 )
  {
    v3 = sub_1C3E6A0(v1460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E5u )
    goto LABEL_1658;
  v1->m_Items[485] = (DataMasterBase_o *)v1460;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[485], (int32_t)v1460, v1461, v1462);
  v1463 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C3E7B0(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1463, 0);
  if ( v1463 )
  {
    v3 = sub_1C3E6A0(v1463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E6u )
    goto LABEL_1658;
  v1->m_Items[486] = (DataMasterBase_o *)v1463;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[486], (int32_t)v1463, v1464, v1465);
  v1466 = (ExcludeMotionMaster_o *)sub_1C3E7B0(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1466, 0);
  if ( v1466 )
  {
    v3 = sub_1C3E6A0(v1466, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E7u )
    goto LABEL_1658;
  v1->m_Items[487] = (DataMasterBase_o *)v1466;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[487], (int32_t)v1466, v1467, v1468);
  v1469 = (UserInterruptionQuestMaster_o *)sub_1C3E7B0(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1469, 0);
  if ( v1469 )
  {
    v3 = sub_1C3E6A0(v1469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E8u )
    goto LABEL_1658;
  v1->m_Items[488] = (DataMasterBase_o *)v1469;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[488], (int32_t)v1469, v1470, v1471);
  v1472 = (ServantTransformMaster_o *)sub_1C3E7B0(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1472, 0);
  if ( v1472 )
  {
    v3 = sub_1C3E6A0(v1472, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E9u )
    goto LABEL_1658;
  v1->m_Items[489] = (DataMasterBase_o *)v1472;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[489], (int32_t)v1472, v1473, v1474);
  v1475 = (MapUpdateScheduleMaster_o *)sub_1C3E7B0(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1475, 0);
  if ( v1475 )
  {
    v3 = sub_1C3E6A0(v1475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EAu )
    goto LABEL_1658;
  v1->m_Items[490] = (DataMasterBase_o *)v1475;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[490], (int32_t)v1475, v1476, v1477);
  v1478 = (QuestPhasePresentMaster_o *)sub_1C3E7B0(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1478, 0);
  if ( v1478 )
  {
    v3 = sub_1C3E6A0(v1478, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EBu )
    goto LABEL_1658;
  v1->m_Items[491] = (DataMasterBase_o *)v1478;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[491], (int32_t)v1478, v1479, v1480);
  v1481 = (UserAccountLinkageMaster_o *)sub_1C3E7B0(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1481, 0);
  if ( v1481 )
  {
    v3 = sub_1C3E6A0(v1481, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ECu )
    goto LABEL_1658;
  v1->m_Items[492] = (DataMasterBase_o *)v1481;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[492], (int32_t)v1481, v1482, v1483);
  v1484 = (MissionNaviTransitionMaster_o *)sub_1C3E7B0(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1484, 0);
  if ( v1484 )
  {
    v3 = sub_1C3E6A0(v1484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EDu )
    goto LABEL_1658;
  v1->m_Items[493] = (DataMasterBase_o *)v1484;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[493], (int32_t)v1484, v1485, v1486);
  v1487 = (MissionNaviQuestMaster_o *)sub_1C3E7B0(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1487, 0);
  if ( v1487 )
  {
    v3 = sub_1C3E6A0(v1487, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EEu )
    goto LABEL_1658;
  v1->m_Items[494] = (DataMasterBase_o *)v1487;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[494], (int32_t)v1487, v1488, v1489);
  v1490 = (EventTradeGoodsMaster_o *)sub_1C3E7B0(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1490, 0);
  if ( v1490 )
  {
    v3 = sub_1C3E6A0(v1490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EFu )
    goto LABEL_1658;
  v1->m_Items[495] = (DataMasterBase_o *)v1490;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[495], (int32_t)v1490, v1491, v1492);
  v1493 = (EventTradeStoreMaster_o *)sub_1C3E7B0(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1493, 0);
  if ( v1493 )
  {
    v3 = sub_1C3E6A0(v1493, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F0u )
    goto LABEL_1658;
  v1->m_Items[496] = (DataMasterBase_o *)v1493;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[496], (int32_t)v1493, v1494, v1495);
  v1496 = (EventTradePickupMaster_o *)sub_1C3E7B0(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1496, 0);
  if ( v1496 )
  {
    v3 = sub_1C3E6A0(v1496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F1u )
    goto LABEL_1658;
  v1->m_Items[497] = (DataMasterBase_o *)v1496;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[497], (int32_t)v1496, v1497, v1498);
  v1499 = (UserEventTradeMaster_o *)sub_1C3E7B0(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1499, 0);
  if ( v1499 )
  {
    v3 = sub_1C3E6A0(v1499, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F2u )
    goto LABEL_1658;
  v1->m_Items[498] = (DataMasterBase_o *)v1499;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[498], (int32_t)v1499, v1500, v1501);
  v1502 = (PaymentHistoryMaster_o *)sub_1C3E7B0(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1502, 0);
  if ( v1502 )
  {
    v3 = sub_1C3E6A0(v1502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F3u )
    goto LABEL_1658;
  v1->m_Items[499] = (DataMasterBase_o *)v1502;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[499], (int32_t)v1502, v1503, v1504);
  v1505 = (UserExternalPaymentStoneMaster_o *)sub_1C3E7B0(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1505, 0);
  if ( v1505 )
  {
    v3 = sub_1C3E6A0(v1505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F4u )
    goto LABEL_1658;
  v1->m_Items[500] = (DataMasterBase_o *)v1505;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[500], (int32_t)v1505, v1506, v1507);
  v1508 = (QuestPhaseIndividualityMaster_o *)sub_1C3E7B0(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1508, 0);
  if ( v1508 )
  {
    v3 = sub_1C3E6A0(v1508, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F5u )
    goto LABEL_1658;
  v1->m_Items[501] = (DataMasterBase_o *)v1508;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[501], (int32_t)v1508, v1509, v1510);
  v1511 = (ViewGachaFeaturedServantMaster_o *)sub_1C3E7B0(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1511, 0);
  if ( v1511 )
  {
    v3 = sub_1C3E6A0(v1511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F6u )
    goto LABEL_1658;
  v1->m_Items[502] = (DataMasterBase_o *)v1511;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[502], (int32_t)v1511, v1512, v1513);
  v1514 = (UserGachaPickupCollateralMaster_o *)sub_1C3E7B0(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1514, 0);
  if ( v1514 )
  {
    v3 = sub_1C3E6A0(v1514, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F7u )
    goto LABEL_1658;
  v1->m_Items[503] = (DataMasterBase_o *)v1514;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[503], (int32_t)v1514, v1515, v1516);
  v1517 = (GachaPickupCollateralMaster_o *)sub_1C3E7B0(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1517, 0);
  if ( v1517 )
  {
    v3 = sub_1C3E6A0(v1517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F8u )
    goto LABEL_1658;
  v1->m_Items[504] = (DataMasterBase_o *)v1517;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[504], (int32_t)v1517, v1518, v1519);
  v1520 = (GachaPickupCollateralGroupMaster_o *)sub_1C3E7B0(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1520, 0);
  if ( v1520 )
  {
    v3 = sub_1C3E6A0(v1520, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F9u )
    goto LABEL_1658;
  v1->m_Items[505] = (DataMasterBase_o *)v1520;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[505], (int32_t)v1520, v1521, v1522);
  v1523 = (BattlePointMaster_o *)sub_1C3E7B0(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1523, 0);
  if ( v1523 )
  {
    v3 = sub_1C3E6A0(v1523, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FAu )
    goto LABEL_1658;
  v1->m_Items[506] = (DataMasterBase_o *)v1523;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[506], (int32_t)v1523, v1524, v1525);
  v1526 = (BattlePointPhaseMaster_o *)sub_1C3E7B0(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1526, 0);
  if ( v1526 )
  {
    v3 = sub_1C3E6A0(v1526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FBu )
    goto LABEL_1658;
  v1->m_Items[507] = (DataMasterBase_o *)v1526;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[507], (int32_t)v1526, v1527, v1528);
  v1529 = (ServantBattlePointMaster_o *)sub_1C3E7B0(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1529, 0);
  if ( v1529 )
  {
    v3 = sub_1C3E6A0(v1529, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FCu )
    goto LABEL_1658;
  v1->m_Items[508] = (DataMasterBase_o *)v1529;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[508], (int32_t)v1529, v1530, v1531);
  v1532 = (EffectMovieMaster_o *)sub_1C3E7B0(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1532, 0);
  if ( v1532 )
  {
    v3 = sub_1C3E6A0(v1532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FDu )
    goto LABEL_1658;
  v1->m_Items[509] = (DataMasterBase_o *)v1532;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[509], (int32_t)v1532, v1533, v1534);
  v1535 = (PaymentLimitMaster_o *)sub_1C3E7B0(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1535, 0);
  if ( v1535 )
  {
    v3 = sub_1C3E6A0(v1535, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FEu )
    goto LABEL_1658;
  v1->m_Items[510] = (DataMasterBase_o *)v1535;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[510], (int32_t)v1535, v1536, v1537);
  v1538 = (UserPaymentLimitMaster_o *)sub_1C3E7B0(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1538, 0);
  if ( v1538 )
  {
    v3 = sub_1C3E6A0(v1538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FFu )
    goto LABEL_1658;
  v1->m_Items[511] = (DataMasterBase_o *)v1538;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[511], (int32_t)v1538, v1539, v1540);
  v1541 = (RoadmapMaster_o *)sub_1C3E7B0(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1541, 0);
  if ( v1541 )
  {
    v3 = sub_1C3E6A0(v1541, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x200u )
    goto LABEL_1658;
  v1->m_Items[512] = (DataMasterBase_o *)v1541;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[512], (int32_t)v1541, v1542, v1543);
  v1544 = (UserRecommendSupportMaster_o *)sub_1C3E7B0(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1544, 0);
  if ( v1544 )
  {
    v3 = sub_1C3E6A0(v1544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x201u )
    goto LABEL_1658;
  v1->m_Items[513] = (DataMasterBase_o *)v1544;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[513], (int32_t)v1544, v1545, v1546);
  v1547 = (RecommendSupportQuestMaster_o *)sub_1C3E7B0(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1547, 0);
  if ( v1547 )
  {
    v3 = sub_1C3E6A0(v1547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x202u )
    goto LABEL_1658;
  v1->m_Items[514] = (DataMasterBase_o *)v1547;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[514], (int32_t)v1547, v1548, v1549);
  v1550 = (RecommendAdviceMessageMaster_o *)sub_1C3E7B0(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1550, 0);
  if ( v1550 )
  {
    v3 = sub_1C3E6A0(v1550, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x203u )
    goto LABEL_1658;
  v1->m_Items[515] = (DataMasterBase_o *)v1550;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[515], (int32_t)v1550, v1551, v1552);
  v1553 = (UserRecommendFollowerMaster_o *)sub_1C3E7B0(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1553, 0);
  if ( v1553 )
  {
    v3 = sub_1C3E6A0(v1553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x204u )
    goto LABEL_1658;
  v1->m_Items[516] = (DataMasterBase_o *)v1553;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[516], (int32_t)v1553, v1554, v1555);
  v1556 = (ItemDropEfficiencyMaster_o *)sub_1C3E7B0(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1556, 0);
  if ( v1556 )
  {
    v3 = sub_1C3E6A0(v1556, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x205u )
    goto LABEL_1658;
  v1->m_Items[517] = (DataMasterBase_o *)v1556;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[517], (int32_t)v1556, v1557, v1558);
  v1559 = (BlankEarthGimmickAddMaster_o *)sub_1C3E7B0(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1559, 0);
  if ( v1559 )
  {
    v3 = sub_1C3E6A0(v1559, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x206u )
    goto LABEL_1658;
  v1->m_Items[518] = (DataMasterBase_o *)v1559;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[518], (int32_t)v1559, v1560, v1561);
  v1562 = (WarReleaseMaster_o *)sub_1C3E7B0(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1562, 0);
  if ( v1562 )
  {
    v3 = sub_1C3E6A0(v1562, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x207u )
    goto LABEL_1658;
  v1->m_Items[519] = (DataMasterBase_o *)v1562;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[519], (int32_t)v1562, v1563, v1564);
  v1565 = (SelectBonusBaseMaster_o *)sub_1C3E7B0(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1565, 0);
  if ( v1565 )
  {
    v3 = sub_1C3E6A0(v1565, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x208u )
    goto LABEL_1658;
  v1->m_Items[520] = (DataMasterBase_o *)v1565;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[520], (int32_t)v1565, v1566, v1567);
  v1568 = (SelectBonusMaster_o *)sub_1C3E7B0(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1568, 0);
  if ( v1568 )
  {
    v3 = sub_1C3E6A0(v1568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x209u )
    goto LABEL_1658;
  v1->m_Items[521] = (DataMasterBase_o *)v1568;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[521], (int32_t)v1568, v1569, v1570);
  v1571 = (MyroomServantSpecialImageMaster_o *)sub_1C3E7B0(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1571, 0);
  if ( v1571 )
  {
    v3 = sub_1C3E6A0(v1571, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Au )
    goto LABEL_1658;
  v1->m_Items[522] = (DataMasterBase_o *)v1571;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[522], (int32_t)v1571, v1572, v1573);
  v1574 = (ShopResetMaster_o *)sub_1C3E7B0(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v1574, 0);
  if ( v1574 )
  {
    v3 = sub_1C3E6A0(v1574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Bu )
    goto LABEL_1658;
  v1->m_Items[523] = (DataMasterBase_o *)v1574;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[523], (int32_t)v1574, v1575, v1576);
  v1577 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C3E7B0(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v1577, 0);
  if ( v1577 )
  {
    v3 = sub_1C3E6A0(v1577, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Cu )
    goto LABEL_1658;
  v1->m_Items[524] = (DataMasterBase_o *)v1577;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[524], (int32_t)v1577, v1578, v1579);
  v1580 = (FriendshipServantMaster_o *)sub_1C3E7B0(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v1580, 0);
  if ( v1580 )
  {
    v3 = sub_1C3E6A0(v1580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Du )
    goto LABEL_1658;
  v1->m_Items[525] = (DataMasterBase_o *)v1580;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[525], (int32_t)v1580, v1581, v1582);
  v1583 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C3E7B0(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v1583, 0);
  if ( v1583 )
  {
    v3 = sub_1C3E6A0(v1583, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Eu )
    goto LABEL_1658;
  v1->m_Items[526] = (DataMasterBase_o *)v1583;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[526], (int32_t)v1583, v1584, v1585);
  v1586 = (ChaldeaGatePickupMaster_o *)sub_1C3E7B0(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v1586, 0);
  if ( v1586 )
  {
    v3 = sub_1C3E6A0(v1586, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Fu )
    goto LABEL_1658;
  v1->m_Items[527] = (DataMasterBase_o *)v1586;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[527], (int32_t)v1586, v1587, v1588);
  v1589 = (WarGroupIgnoreMaster_o *)sub_1C3E7B0(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v1589, 0);
  if ( v1589 )
  {
    v3 = sub_1C3E6A0(v1589, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x210u )
    goto LABEL_1658;
  v1->m_Items[528] = (DataMasterBase_o *)v1589;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[528], (int32_t)v1589, v1590, v1591);
  v1592 = (ImagePartsGroupMaster_o *)sub_1C3E7B0(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v1592, 0);
  if ( v1592 )
  {
    v3 = sub_1C3E6A0(v1592, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x211u )
    goto LABEL_1658;
  v1->m_Items[529] = (DataMasterBase_o *)v1592;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[529], (int32_t)v1592, v1593, v1594);
  v1595 = (UserImagePartsGroupMaster_o *)sub_1C3E7B0(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v1595, 0);
  if ( v1595 )
  {
    v3 = sub_1C3E6A0(v1595, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x212u )
    goto LABEL_1658;
  v1->m_Items[530] = (DataMasterBase_o *)v1595;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[530], (int32_t)v1595, v1596, v1597);
  v1598 = (MissionItemDisplayMaster_o *)sub_1C3E7B0(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v1598, 0);
  if ( v1598 )
  {
    v3 = sub_1C3E6A0(v1598, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x213u )
    goto LABEL_1658;
  v1->m_Items[531] = (DataMasterBase_o *)v1598;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[531], (int32_t)v1598, v1599, v1600);
  v1601 = (QuestUseItemGroupMaster_o *)sub_1C3E7B0(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v1601, 0);
  if ( v1601 )
  {
    v3 = sub_1C3E6A0(v1601, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x214u )
    goto LABEL_1658;
  v1->m_Items[532] = (DataMasterBase_o *)v1601;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[532], (int32_t)v1601, v1602, v1603);
  v1604 = (QuestUseItemPickupMaster_o *)sub_1C3E7B0(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v1604, 0);
  if ( v1604 )
  {
    v3 = sub_1C3E6A0(v1604, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x215u )
    goto LABEL_1658;
  v1->m_Items[533] = (DataMasterBase_o *)v1604;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[533], (int32_t)v1604, v1605, v1606);
  v1607 = (UserEventItemLinkSvtMaster_o *)sub_1C3E7B0(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v1607, 0);
  if ( v1607 )
  {
    v3 = sub_1C3E6A0(v1607, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x216u )
    goto LABEL_1658;
  v1->m_Items[534] = (DataMasterBase_o *)v1607;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[534], (int32_t)v1607, v1608, v1609);
  v1610 = (QuestHintOverwriteMaster_o *)sub_1C3E7B0(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v1610, 0);
  if ( v1610 )
  {
    v3 = sub_1C3E6A0(v1610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x217u )
    goto LABEL_1658;
  v1->m_Items[535] = (DataMasterBase_o *)v1610;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[535], (int32_t)v1610, v1611, v1612);
  v1613 = (ReachedWaveInfoMaster_o *)sub_1C3E7B0(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v1613, 0);
  if ( v1613 )
  {
    v3 = sub_1C3E6A0(v1613, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x218u )
    goto LABEL_1658;
  v1->m_Items[536] = (DataMasterBase_o *)v1613;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[536], (int32_t)v1613, v1614, v1615);
  v1616 = (GalleryMaster_o *)sub_1C3E7B0(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v1616, 0);
  if ( v1616 )
  {
    v3 = sub_1C3E6A0(v1616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x219u )
    goto LABEL_1658;
  v1->m_Items[537] = (DataMasterBase_o *)v1616;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[537], (int32_t)v1616, v1617, v1618);
  v1619 = (GalleryResourceMaster_o *)sub_1C3E7B0(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v1619, 0);
  if ( v1619 )
  {
    v3 = sub_1C3E6A0(v1619, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Au )
    goto LABEL_1658;
  v1->m_Items[538] = (DataMasterBase_o *)v1619;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[538], (int32_t)v1619, v1620, v1621);
  v1622 = (ServantSkillAddMaster_o *)sub_1C3E7B0(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v1622, 0);
  if ( v1622 )
  {
    v3 = sub_1C3E6A0(v1622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Bu )
    goto LABEL_1658;
  v1->m_Items[539] = (DataMasterBase_o *)v1622;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[539], (int32_t)v1622, v1623, v1624);
  v1625 = (GalleryFolderReleaseMaster_o *)sub_1C3E7B0(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v1625, 0);
  if ( v1625 )
  {
    v3 = sub_1C3E6A0(v1625, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Cu )
    goto LABEL_1658;
  v1->m_Items[540] = (DataMasterBase_o *)v1625;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[540], (int32_t)v1625, v1626, v1627);
  v1628 = (UserSvtFirstGetTimeMaster_o *)sub_1C3E7B0(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v1628, 0);
  if ( v1628 )
  {
    v3 = sub_1C3E6A0(v1628, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Du )
    goto LABEL_1658;
  v1->m_Items[541] = (DataMasterBase_o *)v1628;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[541], (int32_t)v1628, v1629, v1630);
  v1631 = (QuestExtensionMaster_o *)sub_1C3E7B0(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v1631, 0);
  if ( v1631 )
  {
    v3 = sub_1C3E6A0(v1631, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Eu )
    goto LABEL_1658;
  v1->m_Items[542] = (DataMasterBase_o *)v1631;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[542], (int32_t)v1631, v1632, v1633);
  v1634 = (UserServantGrandMaster_o *)sub_1C3E7B0(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v1634, 0);
  if ( v1634 )
  {
    v3 = sub_1C3E6A0(v1634, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Fu )
    goto LABEL_1658;
  v1->m_Items[543] = (DataMasterBase_o *)v1634;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[543], (int32_t)v1634, v1635, v1636);
  v1637 = (GrandGraphMaster_o *)sub_1C3E7B0(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v1637, 0);
  if ( v1637 )
  {
    v3 = sub_1C3E6A0(v1637, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x220u )
    goto LABEL_1658;
  v1->m_Items[544] = (DataMasterBase_o *)v1637;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[544], (int32_t)v1637, v1638, v1639);
  v1640 = (GrandGraphDetailMaster_o *)sub_1C3E7B0(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v1640, 0);
  if ( v1640 )
  {
    v3 = sub_1C3E6A0(v1640, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x221u )
    goto LABEL_1658;
  v1->m_Items[545] = (DataMasterBase_o *)v1640;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[545], (int32_t)v1640, v1641, v1642);
  v1643 = (UserClassStatisticsMaster_o *)sub_1C3E7B0(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v1643, 0);
  if ( v1643 )
  {
    v3 = sub_1C3E6A0(v1643, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x222u )
    goto LABEL_1658;
  v1->m_Items[546] = (DataMasterBase_o *)v1643;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[546], (int32_t)v1643, v1644, v1645);
  v1646 = (EventEquipSkillPartsMaster_o *)sub_1C3E7B0(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v1646, 0);
  if ( v1646 )
  {
    v3 = sub_1C3E6A0(v1646, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x223u )
    goto LABEL_1658;
  v1->m_Items[547] = (DataMasterBase_o *)v1646;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[547], (int32_t)v1646, v1647, v1648);
  v1649 = (MasterIndividualitySelectMaster_o *)sub_1C3E7B0(MasterIndividualitySelectMaster_TypeInfo);
  MasterIndividualitySelectMaster___ctor(v1649, 0);
  if ( v1649 )
  {
    v3 = sub_1C3E6A0(v1649, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x224u )
    goto LABEL_1658;
  v1->m_Items[548] = (DataMasterBase_o *)v1649;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[548], (int32_t)v1649, v1650, v1651);
  v1652 = (MyroomAddBgDiffMaster_o *)sub_1C3E7B0(MyroomAddBgDiffMaster_TypeInfo);
  MyroomAddBgDiffMaster___ctor(v1652, 0);
  if ( v1652 )
  {
    v3 = sub_1C3E6A0(v1652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1659;
  }
  if ( *(_DWORD *)p_max_length <= 0x225u )
    goto LABEL_1658;
  v1->m_Items[549] = (DataMasterBase_o *)v1652;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[549], (int32_t)v1652, v1653, v1654);
  v1655 = (BattleScriptMaster_o *)sub_1C3E7B0(BattleScriptMaster_TypeInfo);
  BattleScriptMaster___ctor(v1655, 0);
  if ( v1655 )
  {
    v3 = sub_1C3E6A0(v1655, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1659:
      v1659 = sub_1C3E7E4(v3);
      sub_1C3E68C(v1659, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x226u )
LABEL_1658:
    sub_1C3E7C8(v3, v4);
  v1->m_Items[550] = (DataMasterBase_o *)v1655;
  sub_1C3E508((CGThumbnailListItem_o *)&v1->m_Items[550], (int32_t)v1655, v1656, v1657);
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

  if ( (byte_4C56817 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    byte_4C56817 = 1;
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C56814 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8548/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4C56814 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C3E508((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v3, v5, v6);
  v13 = 1;
  do
  {
    v25 = v13;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v7, v8, v9, v10, v11, v12);
    v15 = System_String__Format((System_String_o *)StringLiteral_8548/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v14, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get(v15, 0);
    if ( System_String__op_Equality(v16, v15, 0) )
      break;
    v20 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v20->fields._items;
      v22 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( items )
        continue;
    }
    sub_1C3E7C0(v20, v17);
    size = v20->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v16,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v16;
      sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v16, v18, v19);
    }
    ++v13;
  }
  while ( v13 != 999 );
}


Il2CppObject *DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_30F9A70 *method)
{
  long double v2; // q0
  const MethodInfo_30F9A70_RGCTXs *rgctx_data; // x8
  const MethodInfo_30F9A70 *_1_TMaster; // x19
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
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&DataNameKind_Kind_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    sub_1C3E564(&StringLiteral_21484/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C8ECD4();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_1C8ECD4();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (rgctxDataDummy[12].fields._impl.fields.value & 0x10000000000LL) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C8EC78(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v10) = *(_DWORD *)rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v10,
         &value,
         (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v10 = value;
    _1_TMaster = (const MethodInfo_30F9A70 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_30F9A70 *)sub_1C8EC78(v11);
    if ( !v10 )
      return 0;
    result = (Il2CppObject *)sub_1C3E6A0(v10, _1_TMaster);
    if ( result )
      return result;
    sub_1C3EA80(v10);
  }
  _2_TMaster = (intptr_t)_1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = _2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v14, 0);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C3E7C0(rgctxDataDummy, method);
  v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))rgctxDataDummy->klass->vtable._3_ToString.methodPtr)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._3_ToString.method);
  v27 = (int)v10;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v16, v17, v18, v19, v20, v21);
  v26 = (int)v10;
  v25.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v25.monitor = (void *)-1LL;
  v23 = (Il2CppObject *)System_Enum__ToString(&v25, 0);
  v24 = (Il2CppObject *)System_String__Format_63677828((System_String_o *)StringLiteral_21484/*"master[{0}] is null[{1}:{2}]"*/, v15, v22, v23, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v24, 0);
  return 0;
}


Il2CppObject *DataManager__GetMaster_object_(const MethodInfo_30F9A1C *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30F9A70 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


bool DataManager__HasMaster(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Instance; // x0
  bool v2; // w1
  unsigned __int16 *v3; // x0
  unsigned __int16 v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C56800 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
    sub_1C3E564(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_bool___ctor__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56800 = 1;
  }
  Instance = (System_Collections_Generic_IEnumerable_TSource__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( Instance )
  {
    Instance = (System_Collections_Generic_IEnumerable_TSource__o *)Instance[3].klass;
    if ( Instance )
    {
      v2 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
             Instance,
             (const MethodInfo_31048F0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
      v3 = &v5;
      v5 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v3,
        v2,
        (const MethodInfo_38D7480 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(Instance) = v5 > 0xFFu;
    }
  }
  return (char)Instance;
}


void DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C567FE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_CreateMasterData__);
    sub_1C3E564(&System_Func_DataMasterBase____TypeInfo);
    byte_4C567FE = 1;
  }
  v3 = (System_Func_object__o *)sub_1C3E7B0(System_Func_DataMasterBase____TypeInfo);
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
  if ( (byte_4C567FF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1C3E564(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4C567FF = 1;
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
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1C3E7C0(this, createMasterDataMethod);
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
          (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v12 = *(_DWORD *)(v8 + 24);
        if ( (int)++v13 >= v12 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C3E7C8(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.datalist, v8, v10, v11);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v9, v15, v16);
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
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v14; // w23
  Il2CppObject *Item; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v20; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v22; // x25
  __int64 Index_object; // x0
  __int64 v24; // x1
  const MethodInfo_38DB36C *v25; // x3
  struct DataMasterBase_array *v26; // x8
  DataMasterBase_o *v27; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo_38DB36C *v32; // x3
  __int64 v33; // x0
  __int64 v34; // x1
  Il2CppObject *lockCountObj; // x22
  int v36; // w1
  _QWORD **v37; // x20
  __int64 v38; // x0
  Il2CppObject *v39; // x20
  __int64 v40; // x0
  struct System_Threading_SynchronizationContext_o *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  System_Threading_SendOrPostCallback_o *v45; // x21
  __int64 v46; // x0
  Il2CppObject *v47; // x23
  __int64 v48; // x0
  intptr_t v49; // x0
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  _QWORD *exception; // x0
  __int64 v54; // [xsp+10h] [xbp-90h]
  __int64 v55; // [xsp+18h] [xbp-88h] BYREF
  __int64 v56; // [xsp+20h] [xbp-80h]
  __int64 v57; // [xsp+28h] [xbp-78h] BYREF
  __int64 v58; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v60; // 0:x0.16
  System_Nullable_long__o v61; // 0:x0.16

  v5 = this;
  if ( (byte_4C56811 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C3E564(&Method_System_Nullable_long___ctor__);
    sub_1C3E564(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1C3E564(&Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1C3E564(&DataManager___c__DisplayClass59_0_TypeInfo);
    byte_4C56811 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C3E7C0(this, indexList);
  v6 = sub_1C3E6A0(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v54 = sub_1C3E60C(byte___TypeInfo, 2000);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = sub_1C3E7B0(DataManager___c__DisplayClass59_0_TypeInfo);
        DataManager___c__DisplayClass59_0___ctor((DataManager___c__DisplayClass59_0_o *)v10, 0);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1C3E7C8(v11, v12);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C3E7C0(0, v12);
        v14 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v14,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1C3E7C0(Item, Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Item, v16, v17);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C3E7C0(0, v18);
        v20 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v14,
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v22 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v22,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__,
            0);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v22,
                           (const MethodInfo_31FF900 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v26 = v5->fields.datalist;
            if ( !v26 )
              sub_1C3E7C0(Index_object, v24);
            if ( (unsigned int)Index_object >= LODWORD(v26->max_length) )
              sub_1C3E7C8(Index_object, v24);
            if ( !v20 )
              sub_1C3E7C0(Index_object, v24);
            if ( !LODWORD(v20[1].monitor) )
              sub_1C3E7C8(Index_object, v24);
            v27 = v26->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v60.fields.value = (int64_t)v20[2].klass;
            v57 = 0;
            v58 = 0;
            *(_QWORD *)&v60.fields.hasValue = &v57;
            System_Nullable_long____ctor(v60, Method_System_Nullable_long___ctor__, v25);
            if ( LODWORD(v20[1].monitor) <= 1 )
              sub_1C3E7C8(v30, v31);
            v61.fields.value = (int64_t)v20[2].monitor;
            v55 = 0;
            v56 = 0;
            *(_QWORD *)&v61.fields.hasValue = &v55;
            System_Nullable_long____ctor(v61, Method_System_Nullable_long___ctor__, v32);
            if ( !v27 )
              sub_1C3E7C0(v33, v34);
            ((void (__fastcall *)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, _QWORD))v27->klass[1]._1.byval_arg.data)(
              v27,
              masterDataBytes,
              context,
              v57,
              v58,
              v55,
              v56,
              v54,
              *(_QWORD *)&v27->klass[1]._1.byval_arg.bits);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_65565872(lockCountObj, lockTaken, 0);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0);
      }
    }
  }
  else
  {
    sub_1C3EA80(indexList);
    if ( v36 != 1 )
      sub_1D27698();
    v37 = (_QWORD **)__cxa_begin_catch(v3);
    v38 = sub_1C3E578(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v38, **v37) & 1) != 0 )
    {
      __cxa_end_catch();
      v39 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65565872(v39, lockTaken, 0);
    }
    else
    {
      v40 = sub_1C3E578(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v40, **v37) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v37;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0);
      }
      __cxa_end_catch();
      v41 = v5->fields.context;
      v42 = sub_1C3E578(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v42 + 224) )
        j_il2cpp_runtime_class_init_0(v42);
      v43 = sub_1C3E578(&DataManager___c_TypeInfo);
      v45 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v43 + 184) + 8LL);
      if ( !v45 )
      {
        v46 = sub_1C3E578(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v46 + 224) )
          j_il2cpp_runtime_class_init_0(v46);
        v47 = **(Il2CppObject ***)(sub_1C3E578(&DataManager___c_TypeInfo) + 184);
        v48 = sub_1C3E578(&System_Threading_SendOrPostCallback_TypeInfo);
        v45 = (System_Threading_SendOrPostCallback_o *)sub_1C3E7B0(v48);
        v49 = sub_1C3E578(&Method_DataManager___c__LoadMasterDataThread_b__59_1__);
        System_Threading_SendOrPostCallback___ctor(v45, v47, v49, 0);
        *(_QWORD *)(*(_QWORD *)(sub_1C3E578(&DataManager___c_TypeInfo) + 184) + 8LL) = v45;
        v50 = sub_1C3E578(&DataManager___c_TypeInfo);
        sub_1C3E508((CGThumbnailListItem_o *)(*(_QWORD *)(v50 + 184) + 8LL), (int32_t)v45, v51, v52);
      }
      if ( !v41 )
        sub_1C3E7C0(v43, v44);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, const MethodInfo *))v41->klass->vtable._5_Post.methodPtr)(
        v41,
        v45,
        0,
        v41->klass->vtable._5_Post.method);
      v39 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_65565872(v39, lockTaken, 0);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v39, 0);
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

  if ( (byte_4C5680F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Sort_int____78184064);
    sub_1C3E564(&System_Comparison_int__TypeInfo);
    sub_1C3E564(&Method_DataManager_LoadMasterDataThread__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1C3E564(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C3E564(&System_Threading_Thread_TypeInfo);
    sub_1C3E564(&Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__);
    sub_1C3E564(&DataManager___c__DisplayClass57_0_TypeInfo);
    sub_1C3E564(&Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__);
    sub_1C3E564(&DataManager___c__DisplayClass57_1_TypeInfo);
    byte_4C5680F = 1;
  }
  v7 = sub_1C3E7B0(DataManager___c__DisplayClass57_0_TypeInfo);
  DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)loadedIndices, v12, v13);
  Current = System_Threading_SynchronizationContext__get_Current(0);
  this->fields.context = Current;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v17;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v17, v19, v20);
  v21 = System_Linq_Enumerable__Range(0, maxIndex, 0);
  v22 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  v23 = (System_Comparison_int__o *)sub_1C3E7B0(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__,
    0);
  System_Array__Sort_int__51142708(
    v22,
    (System_Comparison_T__o *)v23,
    (const MethodInfo_30C6034 *)Method_System_Array_Sort_int____78184064);
  v24 = sub_1C3E7B0(DataManager___c__DisplayClass57_1_TypeInfo);
  DataManager___c__DisplayClass57_1___ctor((DataManager___c__DisplayClass57_1_o *)v24, 0);
  if ( !v24 )
LABEL_14:
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v24 + 24) = v7;
  sub_1C3E508((CGThumbnailListItem_o *)(v24 + 24), v7, v25, v26);
  *(_DWORD *)(v24 + 16) = 0;
  do
  {
    v27 = (System_Threading_ParameterizedThreadStart_o *)sub_1C3E7B0(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v27,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0);
    v28 = (System_Threading_Thread_o *)sub_1C3E7B0(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_65601376(v28, v27, 0);
    if ( !v28 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v28, 1, 0);
    v29 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v29,
      (Il2CppObject *)v24,
      Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__,
      0);
    v30 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_313FD5C *)Method_System_Linq_Enumerable_Where_int___);
    v31 = System_Linq_Enumerable__ToArray_int_(
            v30,
            (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_65601956(v28, &v31->obj, 0);
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
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v28;
      sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v28, v32, v33);
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

  if ( (byte_4C56812 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_WriteLocalFileThread__);
    sub_1C3E564(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C3E564(&System_Threading_Thread_TypeInfo);
    byte_4C56812 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v6 = (System_Threading_ParameterizedThreadStart_o *)sub_1C3E7B0(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0);
  v7 = (System_Threading_Thread_o *)sub_1C3E7B0(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_65601376(v7, v6, 0);
  this->fields.writeMasterDataThread = v7;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C3E508((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v7, v9, v10);
  if ( !*p_writeMasterDataThread )
    sub_1C3E7C0(0, v11);
  System_Threading_Thread__Start_65601956(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0);
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

  if ( (byte_4C56810 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4C56810 = 1;
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
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C3E7C0(Item, v7);
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
    sub_1C3E508(p_masterLoadThreads, 0, v9, v10);
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
        sub_1C3E7C0(0, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0);
    }
    *p_writeMasterDataThread = 0;
    sub_1C3E508((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v5, v6);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  System_IO_BinaryWriter_c *v28; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  System_IO_Stream_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4C56813 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C3E564(&string_TypeInfo);
    byte_4C56813 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64547772(v8, v7, 0);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C3E7C0(v9, v10);
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
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C3E7C0(0, v17);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C3E7C8(Item, v17);
      if ( !v8 )
        sub_1C3E7C0(Item, v17);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._17_Write.method);
      v19 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v19 )
        sub_1C3E7C0(0, v18);
      masterDataBytes = this->fields.masterDataBytes;
      v21 = System_Collections_Generic_List_object___get_Item(
              v19,
              v15,
              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v21 )
        sub_1C3E7C0(0, v22);
      if ( !LODWORD(v21[1].monitor) )
        sub_1C3E7C8(v21, v22);
      if ( !this->fields.saveDataMapList )
        sub_1C3E7C0(v21, v22);
      klass = v21[2].klass;
      v24 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v15,
              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v24 )
        sub_1C3E7C0(0, v25);
      if ( LODWORD(v24[1].monitor) <= 1 )
        sub_1C3E7C8(v24, v25);
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._11_Write.methodPtr)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v24[2].monitor),
              v8->klass->vtable._11_Write.method);
      if ( size == ++v15 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C3E7C0(v26, v27);
    }
  }
  v28 = v8->klass;
  v29 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_31:
    v31 = sub_1C8ED7C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
LABEL_34:
  if ( v6 )
  {
    v32 = v6->klass;
    v33 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_39;
      }
      v35 = (__int64)&v32->vtable + 16 * *v34;
    }
    else
    {
LABEL_39:
      v35 = sub_1C8ED7C(v6, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v35)(v6, *(_QWORD *)(v35 + 8));
  }
  this->fields.writeMasterDataThread = 0;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C3E508((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v11, v12);
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

  if ( (byte_4C567F9 & 1) == 0 )
  {
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C567F9 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0);
  return System_String__Concat_63674716(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C567F8 & 1) == 0 )
  {
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C567F8 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0);
  return System_String__Concat_63674716(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4C567F6 & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&CacheFolderName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C567F6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FolderName, 0);
}


System_String_o *DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C567F7 & 1) == 0 )
  {
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C567F7 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0);
  return System_String__Concat_63674716(CachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


int32_t DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C56805 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56805 = 1;
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

  if ( (byte_4C56806 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56806 = 1;
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

  if ( (byte_4C56815 & 1) == 0 )
  {
    sub_1C3E564(&Crc32_TypeInfo);
    byte_4C56815 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C3E7C0(0, v7);
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

  if ( (byte_4C567FA & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&CacheFolderName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C567FA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0);
  return System_String__Concat_63674716(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1048/*"/"*/,
           FolderNameNotConverted,
           0);
}


int32_t DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C5680A & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5680A = 1;
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

  if ( (byte_4C56809 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56809 = 1;
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
    sub_1C3E7C0(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4C56802 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56802 = 1;
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

  if ( (byte_4C5680D & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5680D = 1;
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

  if ( (byte_4C5680C & 1) == 0 )
  {
    sub_1C3E564(&DataManager__readMasterData_d__48_TypeInfo);
    byte_4C5680C = 1;
  }
  v3 = sub_1C3E7B0(DataManager__readMasterData_d__48_TypeInfo);
  DataManager__readMasterData_d__48___ctor((DataManager__readMasterData_d__48_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  System_String_o *v15; // x20
  __int64 v16; // x0
  int v17; // w8
  int v18; // w22
  __int64 *v19; // x8
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x21
  System_String_o *v23; // x21
  System_String_o *v24; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v26; // x1
  System_Byte_array *v27; // x22
  uint32_t v28; // w22
  __int64 v29; // x0
  int v30; // w8
  DataManager_o *v31; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v33; // x21
  DataManager_o *v34; // x21
  System_String_o *v35; // x0
  ManagerConfig_c *v36; // x8
  System_String_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  DataManager_o *v40; // x20
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Byte_array *v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  CGThumbnailListItem_o *p_saveNameList; // x0
  int v55; // w22
  int64_t v56; // x0
  DataManager_c *v57; // x8
  int64_t v58; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v60; // x22
  unsigned int v61; // w23
  System_String_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  DataManager_o *v65; // x8
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
  if ( (byte_4C5681A & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&char___TypeInfo);
    sub_1C3E564(&Crc32_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_5083/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1C3E564(&StringLiteral_5086/*"DataManager version load error : list file parameter error"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_25280/*"~"*/);
    sub_1C3E564(&StringLiteral_768/*") -> ("*/);
    sub_1C3E564(&StringLiteral_759/*")"*/);
    sub_1C3E564(&StringLiteral_1768/*"@"*/);
    sub_1C3E564(&StringLiteral_21460/*"master versiton different ("*/);
    sub_1C3E564(&StringLiteral_5087/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C3E564(&StringLiteral_5088/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1C3E564(&StringLiteral_5085/*"DataManager version load error : list file break"*/);
    byte_4C5681A = 1;
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
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v13 = CatAndMouseGame__MouseGame3(AllText, 0);
  if ( v13 )
  {
    v14 = sub_1C3E60C(char___TypeInfo, 1);
    if ( !v14 )
      sub_1C3E7C0(0, 0);
    if ( !*(_DWORD *)(v14 + 24) )
      sub_1C3E7C8(v14, v14);
    *(_WORD *)(v14 + 32) = -257;
    v15 = System_String__Trim_63693016(v13, (System_Char_array *)v14, 0);
    v16 = sub_1C3E60C(char___TypeInfo, 2);
    if ( !v16 )
      sub_1C3E7C0(0, 0);
    v17 = *(_DWORD *)(v16 + 24);
    if ( !v17 )
      sub_1C3E7C8(v16, v16);
    *(_WORD *)(v16 + 32) = 13;
    if ( v17 == 1 )
      sub_1C3E7C8(v16, v16);
    *(_WORD *)(v16 + 34) = 10;
    if ( !v15 )
      sub_1C3E7C0(v16, v16);
    v18 = System_String__IndexOfAny(v15, (System_Char_array *)v16, 0);
    if ( v18 < 2 )
    {
      v19 = &StringLiteral_5087/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v20 = System_String__Substring_63682392(v15, 0, v18, 0);
    v22 = v20;
    if ( !v20 )
      sub_1C3E7C0(0, v21);
    if ( System_String__StartsWith(v20, (System_String_o *)StringLiteral_25280/*"~"*/, 0) )
    {
      v23 = System_String__Substring(v22, 1, 0);
      v24 = System_String__Substring(v15, v18 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C3E7C0(0, v26);
      v27 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v24,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v28 = Crc32__Compute(v27, 0);
      if ( System_UInt32__Parse(v23, 0) == v28 )
      {
        v29 = sub_1C3E60C(char___TypeInfo, 2);
        if ( !v29 )
          sub_1C3E7C0(0, 0);
        v30 = *(_DWORD *)(v29 + 24);
        if ( !v30 )
          sub_1C3E7C8(v29, v29);
        *(_WORD *)(v29 + 32) = 13;
        if ( v30 == 1 )
          sub_1C3E7C8(v29, v29);
        *(_WORD *)(v29 + 34) = 10;
        if ( !v24 )
          sub_1C3E7C0(v29, v29);
        this = (DataManager_o *)System_String__Split_63685660(v24, (System_Char_array *)v29, 1, 0);
        v31 = this;
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
          if ( !LODWORD(v31->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v33 = *(System_String_o **)&v31->fields._DispLog;
          this = (DataManager_o *)sub_1C3E60C(char___TypeInfo, 1);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v33 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_63685544(v33, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_119;
          v34 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v35 = System_String__Substring((System_String_o *)this, 1, 0);
          v36 = ManagerConfig_TypeInfo;
          v37 = v35;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v36 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v36->static_fields->MasterDataCacheVer, v37, 0) )
          {
            this = (DataManager_o *)sub_1C3E60C(string___TypeInfo, 5);
            if ( this )
            {
              v40 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v41 = StringLiteral_21460/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21460/*"master versiton different ("*/;
                sub_1C3E508((CGThumbnailListItem_o *)&this->fields._DispLog, v41, v38, v39);
                if ( LODWORD(v40->fields.m_CancellationTokenSource) > 1 )
                {
                  v40->fields.datalist = (struct DataMasterBase_array *)v37;
                  sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.datalist, (int32_t)v37, v42, v43);
                  if ( LODWORD(v40->fields.m_CancellationTokenSource) > 2 )
                  {
                    v46 = StringLiteral_768/*") -> ("*/;
                    v40->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_768/*") -> ("*/;
                    sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.lookup, v46, v44, v45);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v40->fields.m_CancellationTokenSource) > 3 )
                    {
                      v49 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v40->fields.masterDataBytes = v49;
                      sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.masterDataBytes, (int32_t)v49, v47, v48);
                      if ( LODWORD(v40->fields.m_CancellationTokenSource) > 4 )
                      {
                        v52 = StringLiteral_759/*")"*/;
                        v40->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_759/*")"*/;
                        p_saveNameList = (CGThumbnailListItem_o *)&v40->fields.saveNameList;
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
          if ( LODWORD(v34->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v34->fields.datalist, 0);
            v93 = (int)this;
            if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v55 = (int)this;
            v56 = System_Int64__Parse((System_String_o *)v34->fields.lookup, 0);
            v57 = DataManager_TypeInfo;
            v92 = v56;
            v58 = v56;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v57 = DataManager_TypeInfo;
            }
            static_fields = v57->static_fields;
            if ( static_fields->readDataVersion != v55 )
              goto LABEL_91;
            if ( !v57->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v57);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v58 )
            {
              v60 = v31->fields.m_CancellationTokenSource;
              if ( (int)v60 < 2 )
                return 1;
              v61 = 2;
              while ( 1 )
              {
                v62 = (System_String_o *)*((_QWORD *)&v31->fields._DispLog + (int)(v61 - 1));
                this = (DataManager_o *)sub_1C3E60C(char___TypeInfo, 1);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v62 )
                  break;
                this = (DataManager_o *)System_String__Split_63685544(v62, (System_Char_array *)this, 0);
                if ( !this )
                  break;
                v65 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v65->fields._DispLog;
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
                    (Il2CppObject *)method,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v69 + 32) = method;
                  sub_1C3E508((CGThumbnailListItem_o *)(v69 + 32), (int32_t)method, v63, v64);
                }
                if ( (_DWORD)v60 == v61 )
                  return 1;
                if ( v61++ >= LODWORD(v31->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1C3E60C(string___TypeInfo, 9);
              if ( this )
              {
                v40 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v73 = StringLiteral_21460/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21460/*"master versiton different ("*/;
                  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._DispLog, v73, v71, v72);
                  v74 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v74 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v74->static_fields, 0);
                  if ( LODWORD(v40->fields.m_CancellationTokenSource) > 1 )
                  {
                    v40->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.datalist, (int32_t)this, v75, v76);
                    if ( LODWORD(v40->fields.m_CancellationTokenSource) > 2 )
                    {
                      v79 = (int)StringLiteral_113/*" "*/;
                      v40->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_113/*" "*/;
                      sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.lookup, v79, v77, v78);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0);
                      if ( LODWORD(v40->fields.m_CancellationTokenSource) > 3 )
                      {
                        v40->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.masterDataBytes, (int32_t)this, v80, v81);
                        if ( LODWORD(v40->fields.m_CancellationTokenSource) > 4 )
                        {
                          v84 = StringLiteral_768/*") -> ("*/;
                          v40->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_768/*") -> ("*/;
                          sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.saveNameList, v84, v82, v83);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v93, 0);
                          if ( LODWORD(v40->fields.m_CancellationTokenSource) > 5 )
                          {
                            v40->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.saveDataMapList, (int32_t)this, v85, v86);
                            if ( LODWORD(v40->fields.m_CancellationTokenSource) > 6 )
                            {
                              v89 = (int)StringLiteral_113/*" "*/;
                              *(_QWORD *)&v40->fields.lastFrameTime = StringLiteral_113/*" "*/;
                              sub_1C3E508((CGThumbnailListItem_o *)&v40->fields.lastFrameTime, v89, v87, v88);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v92, 0);
                              if ( LODWORD(v40->fields.m_CancellationTokenSource) > 7 )
                              {
                                v40->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C3E508(
                                  (CGThumbnailListItem_o *)&v40->fields.masterCheckName,
                                  (int32_t)this,
                                  v90,
                                  v91);
                                if ( LODWORD(v40->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v52 = StringLiteral_759/*")"*/;
                                  v40->fields.lockCountObj = (Il2CppObject *)StringLiteral_759/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v40->fields.lockCountObj;
LABEL_104:
                                  sub_1C3E508(p_saveNameList, v52, v50, v51);
                                  if ( System_String__Concat_63676984((System_String_array *)v40, 0) )
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
                sub_1C3E7C8(this, method);
              }
            }
LABEL_119:
            sub_1C3E7C0(this, method);
          }
          v19 = &StringLiteral_5086/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v19 = &StringLiteral_5085/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v19 = &StringLiteral_5083/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v19 = &StringLiteral_5088/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v19 )
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

  if ( (byte_4C5680B & 1) == 0 )
  {
    sub_1C3E564(&DataManager__readMasterVersion_d__47_TypeInfo);
    byte_4C5680B = 1;
  }
  v3 = sub_1C3E7B0(DataManager__readMasterVersion_d__47_TypeInfo);
  DataManager__readMasterVersion_d__47___ctor((DataManager__readMasterVersion_d__47_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  System_String_o *v19; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x22
  uint32_t v23; // w22
  __int64 v24; // x0
  int v25; // w8
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  System_String_o *v29; // x20
  __int64 v30; // x20
  System_String_o *v31; // x0
  ManagerConfig_c *v32; // x8
  System_String_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x20
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  System_String_o *v49; // x8
  DataManager_c *v50; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v53; // x8
  int32_t v54; // w19
  struct DataManager_StaticFields *v55; // x8
  int64_t v56; // x0
  struct DataManager_StaticFields *v57; // x8

  if ( (byte_4C56818 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&char___TypeInfo);
    sub_1C3E564(&Crc32_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_5082/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C3E564(&StringLiteral_5079/*"DataManager boot load error : list file break"*/);
    sub_1C3E564(&StringLiteral_5081/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C3E564(&StringLiteral_5077/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1C3E564(&StringLiteral_25280/*"~"*/);
    sub_1C3E564(&StringLiteral_21459/*"master data versiton different ("*/);
    sub_1C3E564(&StringLiteral_768/*") -> ("*/);
    sub_1C3E564(&StringLiteral_759/*")"*/);
    sub_1C3E564(&StringLiteral_1768/*"@"*/);
    sub_1C3E564(&StringLiteral_5080/*"DataManager boot load error : list file parameter error"*/);
    byte_4C56818 = 1;
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
    v50 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v50 = DataManager_TypeInfo;
    }
    static_fields = v50->static_fields;
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
    v9 = sub_1C3E60C(char___TypeInfo, 1);
    if ( !v9 )
      sub_1C3E7C0(0, 0);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C3E7C8(v9, v9);
    *(_WORD *)(v9 + 32) = -257;
    v10 = System_String__Trim_63693016(v8, (System_Char_array *)v9, 0);
    v11 = sub_1C3E60C(char___TypeInfo, 2);
    if ( !v11 )
      sub_1C3E7C0(0, 0);
    v12 = *(_DWORD *)(v11 + 24);
    if ( !v12 )
      sub_1C3E7C8(v11, v11);
    *(_WORD *)(v11 + 32) = 13;
    if ( v12 == 1 )
      sub_1C3E7C8(v11, v11);
    *(_WORD *)(v11 + 34) = 10;
    if ( !v10 )
      sub_1C3E7C0(v11, v11);
    v13 = System_String__IndexOfAny(v10, (System_Char_array *)v11, 0);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5081/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v49 = (System_String_o *)*v14;
LABEL_58:
      if ( v49 )
        goto LABEL_59;
      return 1;
    }
    v15 = System_String__Substring_63682392(v10, 0, v13, 0);
    v17 = v15;
    if ( !v15 )
      sub_1C3E7C0(0, v16);
    if ( !System_String__StartsWith(v15, (System_String_o *)StringLiteral_25280/*"~"*/, 0) )
    {
      v14 = &StringLiteral_5082/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v18 = System_String__Substring(v17, 1, 0);
    v19 = System_String__Substring(v10, v13 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_1C3E7C0(0, v21);
    v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v19,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(v22, 0);
    if ( System_UInt32__Parse(v18, 0) != v23 )
    {
      v14 = &StringLiteral_5077/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v24 = sub_1C3E60C(char___TypeInfo, 2);
    if ( !v24 )
      sub_1C3E7C0(0, 0);
    v25 = *(_DWORD *)(v24 + 24);
    if ( !v25 )
      sub_1C3E7C8(v24, v24);
    *(_WORD *)(v24 + 32) = 13;
    if ( v25 == 1 )
      sub_1C3E7C8(v24, v24);
    *(_WORD *)(v24 + 34) = 10;
    if ( !v19 )
      sub_1C3E7C0(v24, v24);
    v26 = (__int64)System_String__Split_63685660(v19, (System_Char_array *)v24, 1, 0);
    v27 = v26;
    if ( !v26 )
      return 1;
    v28 = *(_QWORD *)(v26 + 24);
    if ( v28 )
    {
      if ( !(_DWORD)v28 )
        goto LABEL_78;
      v26 = *(_QWORD *)(v26 + 32);
      if ( !v26 )
        goto LABEL_83;
      v26 = System_String__StartsWith((System_String_o *)v26, (System_String_o *)StringLiteral_1768/*"@"*/, 0);
      if ( (v26 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_78;
        v29 = *(System_String_o **)(v27 + 32);
        v26 = sub_1C3E60C(char___TypeInfo, 1);
        if ( v26 )
        {
          v6 = (const MethodInfo *)v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_78;
          *(_WORD *)(v26 + 32) = 44;
          if ( v29 )
          {
            v26 = (__int64)System_String__Split_63685544(v29, (System_Char_array *)v26, 0);
            if ( v26 )
            {
              v30 = v26;
              if ( !*(_DWORD *)(v26 + 24) )
                goto LABEL_78;
              v26 = *(_QWORD *)(v26 + 32);
              if ( v26 )
              {
                v31 = System_String__Substring((System_String_o *)v26, 1, 0);
                v32 = ManagerConfig_TypeInfo;
                v33 = v31;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v32 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v32->static_fields->MasterDataCacheVer, v33, 0) )
                {
                  if ( *(_DWORD *)(v30 + 24) != 3 )
                  {
                    v14 = &StringLiteral_5080/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v26 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0);
                  v53 = DataManager_TypeInfo;
                  v54 = v26;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v53 = DataManager_TypeInfo;
                  }
                  v55 = v53->static_fields;
                  v55->dataVersion = v54;
                  v55->readDataVersion = v54;
                  if ( *(_DWORD *)(v30 + 24) > 2u )
                  {
                    v56 = System_Int64__Parse(*(System_String_o **)(v30 + 48), 0);
                    v57 = DataManager_TypeInfo->static_fields;
                    v57->dateVersion = v56;
                    v57->readDateVersion = v56;
                    return 1;
                  }
LABEL_78:
                  sub_1C3E7C8(v26, v6);
                }
                v26 = sub_1C3E60C(string___TypeInfo, 5);
                if ( v26 )
                {
                  v36 = v26;
                  if ( *(_DWORD *)(v26 + 24) )
                  {
                    v37 = StringLiteral_21459/*"master data versiton different ("*/;
                    *(_QWORD *)(v26 + 32) = StringLiteral_21459/*"master data versiton different ("*/;
                    sub_1C3E508((CGThumbnailListItem_o *)(v26 + 32), v37, v34, v35);
                    if ( *(_DWORD *)(v36 + 24) > 1u )
                    {
                      *(_QWORD *)(v36 + 40) = v33;
                      sub_1C3E508((CGThumbnailListItem_o *)(v36 + 40), (int32_t)v33, v38, v39);
                      if ( *(_DWORD *)(v36 + 24) > 2u )
                      {
                        v42 = StringLiteral_768/*") -> ("*/;
                        *(_QWORD *)(v36 + 48) = StringLiteral_768/*") -> ("*/;
                        sub_1C3E508((CGThumbnailListItem_o *)(v36 + 48), v42, v40, v41);
                        v26 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v26 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v36 + 24) > 3u )
                        {
                          v45 = *(_QWORD *)(*(_QWORD *)(v26 + 184) + 32LL);
                          *(_QWORD *)(v36 + 56) = v45;
                          sub_1C3E508((CGThumbnailListItem_o *)(v36 + 56), v45, v43, v44);
                          if ( *(_DWORD *)(v36 + 24) > 4u )
                          {
                            v48 = StringLiteral_759/*")"*/;
                            *(_QWORD *)(v36 + 64) = StringLiteral_759/*")"*/;
                            sub_1C3E508((CGThumbnailListItem_o *)(v36 + 64), v48, v46, v47);
                            v49 = System_String__Concat_63676984((System_String_array *)v36, 0);
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
        sub_1C3E7C0(v26, v6);
      }
    }
    v14 = &StringLiteral_5079/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4C56808 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56808 = 1;
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
  sub_1C3E508(p_updateData, v11, dateVer, (const MethodInfo *)obj);
}


void DataManager__setMasterDataVersion(DataManager_o *this, int32_t dataVer, int64_t dateVer, const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4C56807 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56807 = 1;
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

  if ( (byte_4C56801 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C56801 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->serverHash, v6, (int32_t)method, v3);
  if ( obj )
  {
    v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                              obj,
                              obj->klass->vtable[3].method);
    v9 = System_String__op_Equality(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v9 )
    {
      if ( !v8 )
        sub_1C3E7C0(v9, v10);
      v11 = System_String__Substring(v8, v8->fields._stringLength - 1, 0);
      if ( System_String__op_Equality(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
      {
        v14 = System_String__Substring_63682392(v8, 0, v8->fields._stringLength - 1, 0);
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
      sub_1C3E508((CGThumbnailListItem_o *)&v16->serverHash, (int32_t)v8, v12, v13);
    }
  }
}


void DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4C56803 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56803 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4C5681C & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4C5681C = 1;
  }
  if ( obj
    && ((naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
         obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C3EA80(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_41657108(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void DataManager__updateJsonData_41657108(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
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

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4C5681D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&StringLiteral_24467/*"updated"*/);
    sub_1C3E564(&StringLiteral_18586/*"deleted"*/);
    this = (DataManager_o *)sub_1C3E564(&StringLiteral_23068/*"replaced"*/);
    byte_4C5681D = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1C3E7C0(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18586/*"deleted"*/,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18586/*"deleted"*/,
                              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
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
                                  (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      sub_1C3E7C8(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24467/*"updated"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24467/*"updated"*/,
                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C3EA80(v5);
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
                                (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          v3,
          (Il2CppObject *)StringLiteral_23068/*"replaced"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23068/*"replaced"*/,
                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C3EA80(v3);
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
      if ( !v32 || !v3 )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v33,
                                (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= LODWORD(v34->max_length) )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v33,
                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5680E & 1) == 0 )
  {
    sub_1C3E564(&DataManager__updateMasterData_d__50_TypeInfo);
    byte_4C5680E = 1;
  }
  v5 = sub_1C3E7B0(DataManager__updateMasterData_d__50_TypeInfo);
  DataManager__updateMasterData_d__50___ctor((DataManager__updateMasterData_d__50_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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

  if ( (byte_4C56804 & 1) == 0 )
  {
    sub_1C3E564(&DataManager__updateWebViewData_d__39_TypeInfo);
    byte_4C56804 = 1;
  }
  v3 = sub_1C3E7B0(DataManager__updateWebViewData_d__39_TypeInfo);
  DataManager__updateWebViewData_d__39___ctor((DataManager__updateWebViewData_d__39_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x19
  System_String_o *v26; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v28; // x19
  __int64 v29; // x0
  __int64 v30; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  uint32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5681B & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Crc32_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&System_IO_StreamWriter_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&uint_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_25283/*"~{0}\n{1}"*/);
    sub_1C3E564(&StringLiteral_1768/*"@"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C5681B = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63714884(v10, (size << 7) + 128, 0);
    if ( !v10 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)StringLiteral_1768/*"@"*/, 0);
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_63721532(v10, v11->static_fields->MasterDataCacheVer, 0);
    System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63724028(v10, DataManager_TypeInfo->static_fields->dataVersion, 0);
    System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
    System_Text_StringBuilder__Append_63724116(v10, DataManager_TypeInfo->static_fields->dateVersion, 0);
    System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
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
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)Item, 0);
        System_Text_StringBuilder__Append_63721532(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
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
      sub_1C3E7C0(CacheListFileName, v6);
    v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, const MethodInfo *))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.methodPtr)(
                                 CacheListFileName,
                                 v16,
                                 CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v35 = Crc32__Compute(v17, 0);
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v35, v18, v19, v20, v21, v22, v23);
    v25 = System_String__Format_63677760((System_String_o *)StringLiteral_25283/*"~{0}\n{1}"*/, v24, v16, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v26 = CatAndMouseGame__CatGame3(v25, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    v28 = (System_IO_StreamWriter_o *)sub_1C3E7B0(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64482504(v28, v9, 0, UTF8, 0);
    if ( !v28 )
      sub_1C3E7C0(v29, v30);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v28->klass->vtable._16_Write.methodPtr)(
      v28,
      v26,
      v28->klass->vtable._16_Write.method);
    klass = v28->klass;
    v32 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v34 = sub_1C8ED7C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v34)(v28, *(_QWORD *)(v34 + 8));
  }
}


void DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  char *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  System_String_o *v27; // x20
  System_Byte_array *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  System_String_o *v31; // x20
  System_Text_Encoding_o *v32; // x22
  System_IO_StreamWriter_o *v33; // x21
  uint32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C56819 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Crc32_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&System_IO_StreamWriter_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_25280/*"~"*/);
    sub_1C3E564(&StringLiteral_1768/*"@"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C56819 = 1;
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
    UTF8 = (char *)sub_1C3E60C(string___TypeInfo, 7);
    if ( !UTF8 )
      goto LABEL_27;
    v9 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v10 = StringLiteral_1768/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1768/*"@"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(UTF8 + 32), v10, v7, v8);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v9 + 6) <= 1u )
      goto LABEL_26;
    v13 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v9 + 5) = v13;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12);
    if ( *((_DWORD *)v9 + 6) <= 2u )
      goto LABEL_26;
    v16 = StringLiteral_811/*","*/;
    *((_QWORD *)v9 + 6) = StringLiteral_811/*","*/;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0);
    if ( *((_DWORD *)v9 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v9 + 7) = UTF8;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 56), (int32_t)UTF8, v17, v18);
    if ( *((_DWORD *)v9 + 6) <= 4u
      || (v21 = StringLiteral_811/*","*/,
          *((_QWORD *)v9 + 8) = StringLiteral_811/*","*/,
          sub_1C3E508((CGThumbnailListItem_o *)(v9 + 64), v21, v19, v20),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0),
          *((_DWORD *)v9 + 6) <= 5u)
      || (*((_QWORD *)v9 + 9) = UTF8,
          sub_1C3E508((CGThumbnailListItem_o *)(v9 + 72), (int32_t)UTF8, v22, v23),
          *((_DWORD *)v9 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C3E7C8(UTF8, v6);
    }
    v26 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v9 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 80), v26, v24, v25);
    v27 = System_String__Concat_63676984((System_String_array *)v9, 0);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_27;
    v28 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v27,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v34 = Crc32__Compute(v28, 0);
    v29 = System_UInt32__ToString((uint32_t)&v34, 0);
    v30 = System_String__Concat_63676720(
            (System_String_o *)StringLiteral_25280/*"~"*/,
            v29,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v27,
            0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v31 = CatAndMouseGame__CatGame1(v30, 0, 0);
    v32 = System_Text_Encoding__get_UTF8(0);
    v33 = (System_IO_StreamWriter_o *)sub_1C3E7B0(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_64482504(v33, CacheVersionFileName, 0, v32, 0);
    if ( !v33 )
LABEL_27:
      sub_1C3E7C0(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v33->klass->vtable._16_Write.methodPtr)(
      v33,
      v31,
      v33->klass->vtable._16_Write.method);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v33->klass->vtable._8_Close.methodPtr)(
      v33,
      v33->klass->vtable._8_Close.method);
  }
}


void DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C56821 & 1) == 0 )
  {
    sub_1C3E564(&DataManager___c_TypeInfo);
    byte_4C56821 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C56822 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4C56822 = 1;
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
                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C3E7C8(this, *(_QWORD *)&a);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void DataManager___c__DisplayClass57_1___ctor(DataManager___c__DisplayClass57_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DataManager___c__DisplayClass57_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass57_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass57_1_o *v4; // x20
  struct DataManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4C56823 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_1_o *)sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C56823 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (this = (DataManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.loadedIndices) == 0 )
      sub_1C3E7C0(this, *(_QWORD *)&x);
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C3E7C0(this, 0);
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
  int32_t v58; // w2
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
  if ( (byte_4C56824 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__48_o *)sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C56824 = 1;
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
        v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
        v2->fields.__2__current = (Il2CppObject *)v4;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(p__2__current, (int32_t)v4, v6, v7);
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
          v13 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v13, 0);
          v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v15 = CatAndMouseGame__MouseGameZ(v14, 0);
          v16 = sub_1C3E60C(byte___TypeInfo, 0x4000);
          v18 = v16;
          if ( !v16 )
            sub_1C3E7C0(0, v17);
          if ( !v15 )
            sub_1C3E7C0(v16, v17);
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
              sub_1C3E7C0(v19, v20);
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
            v30 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
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
              v36 = sub_1C8ED7C(v14, System_IDisposable_TypeInfo, 0);
            }
            v31 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v36)(v14, *(_QWORD *)(v36 + 8));
          }
          if ( !v13 )
            sub_1C3E7C0(v31, v32);
          v37 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._40_ToArray.methodPtr)(
                  v13,
                  v13->klass->vtable._40_ToArray.method);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v37;
          sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v37, v38, v39);
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
            v43 = sub_1C8ED7C(v13, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v45 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_64458944(v45, masterDataBytes, 0);
          v46 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v46, (System_IO_Stream_o *)v45, 0);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C3E7C0(v47, v48);
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
                  v73 = sub_1C8ED7C(v45, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v73)(v45, *(_QWORD *)(v73 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v74 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v74, 0);
              v2->fields.__2__current = (Il2CppObject *)v74;
              v22 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C3E508(v22, (int32_t)v74, v75, v76);
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
              sub_1C3E7C0(v47, v48);
            do
            {
              v51 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._15_ReadInt32.methodPtr)(
                      v46,
                      v46->klass->vtable._15_ReadInt32.method);
              if ( !v45 )
                sub_1C3E7C0(v51, v52);
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
              v57 = sub_1C3E60C(long___TypeInfo, 2);
              v60 = v57;
              if ( !v57 )
                sub_1C3E7C0(0, 0);
              v61 = *(_DWORD *)(v57 + 24);
              if ( !v61 )
                sub_1C3E7C8(v57, v57);
              *(_QWORD *)(v57 + 32) = v54;
              if ( v61 == 1 )
                sub_1C3E7C8(v57, v57);
              *(_QWORD *)(v57 + 40) = v55;
              if ( !saveDataMapList )
                sub_1C3E7C0(v57, v57);
              items = saveDataMapList->fields._items;
              v63 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C3E7C0(v57, v57);
              v64 = saveDataMapList->fields._size;
              if ( (unsigned int)v64 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v57,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
              }
              else
              {
                v65 = &items->obj.klass + v64;
                saveDataMapList->fields._size = v64 + 1;
                v65[4] = (Il2CppClass *)v60;
                sub_1C3E508((CGThumbnailListItem_o *)(v65 + 4), v60, v58, v59);
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
            v69 = sub_1C8ED7C(v46, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v69)(v46, *(_QWORD *)(v69 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v21, 0);
        v2->fields.__2__current = (Il2CppObject *)v21;
        v22 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(v22, (int32_t)v21, v23, v24);
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
        sub_1C3E7C0(this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DataManager__readMasterData_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C56825 & 1) == 0 )
  {
    sub_1C3E564(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__47_o *)sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C56825 = 1;
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
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C3E7C0(this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DataManager__readMasterVersion_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  Il2CppObject *v73; // x22
  DataManager__updateMasterData_d__50_o **p__8__1; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct DataMasterBase_array *v79; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v81; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass50_0_o *_8__1; // x8
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x0
  __int64 v87; // x1
  struct DataManager___c__DisplayClass50_0_o *v88; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct DataManager___c__DisplayClass50_0_o *v93; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__50_o *v96; // x24
  System_Predicate_object__o *v97; // x23
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  System_Collections_Generic_List_object__o *v102; // x22
  DataManager__updateMasterData_d__50_o *v103; // x24
  System_Predicate_object__o *v104; // x23
  int32_t Index; // w0
  int32_t v106; // w22
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 _2__current_low; // x10
  __int64 v112; // x8
  int32_t v113; // w2
  const MethodInfo *v114; // x3
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
  const MethodInfo_38DB36C *v171; // x3
  const MethodInfo_38DB36C *v172; // x3
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
  if ( (byte_4C56826 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1C3E564(&Method_DataManager__updateMasterData_b__50_0__);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&DataMasterBase___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C3E564(&EventRandomMissionClearManager_TypeInfo);
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&MasterDataUnpakcer_TypeInfo);
    sub_1C3E564(&MaterialBranchRouteManager_TypeInfo);
    sub_1C3E564(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C3E564(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C3E564(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_long___ctor__);
    sub_1C3E564(&OtherUserNewManager_TypeInfo);
    sub_1C3E564(&System_Predicate_string__TypeInfo);
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    sub_1C3E564(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C3E564(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__);
    sub_1C3E564(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__);
    sub_1C3E564(&DataManager___c__DisplayClass50_0_TypeInfo);
    sub_1C3E564(&Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__);
    sub_1C3E564(&DataManager___c__DisplayClass50_1_TypeInfo);
    sub_1C3E564(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C3E564(&UserCommandCodeNewManager_TypeInfo);
    sub_1C3E564(&UserEquipNewManager_TypeInfo);
    sub_1C3E564(&UserMissionProgressManager_TypeInfo);
    sub_1C3E564(&UserServantCollectionManager_TypeInfo);
    sub_1C3E564(&UserServantLockManager_TypeInfo);
    sub_1C3E564(&UserServantNewManager_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C3E564(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C3E564(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__50_o *)sub_1C3E564(&StringLiteral_11483/*"SCRIPT"*/);
    byte_4C56826 = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v26, v27);
      v4->fields._dataMapObject_5__7 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v28, v29);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v30, v31);
      v33 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v33 = DataManager_TypeInfo;
      }
      updateData = v33->static_fields->updateData;
      if ( !updateData )
        sub_1C3E7C0(0, v32);
      v35 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))updateData->klass->vtable[3].methodPtr)(
                                 updateData,
                                 updateData->klass->vtable[3].method);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v36 = System_Convert__FromBase64String(v35, 0);
      v4->fields._cryptBytes_5__8 = v36;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v36, v37, v38);
      v41 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v41 = DataManager_TypeInfo;
      }
      static_fields = v41->static_fields;
      static_fields->updateData = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->updateData, 0, v39, v40);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
      v4->fields.__2__current = (Il2CppObject *)v43;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v43, v45, v46);
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
        sub_1C3E7C0(v49, v49);
      _4__this->fields.masterDataBytes = v49;
      sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v49, v50, v51);
      v4->fields._cryptBytes_5__8 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v52, v53);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v54, 0);
      v4->fields.__2__current = (Il2CppObject *)v54;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, (int32_t)v54, v55, v56);
      v18 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v8 = (MasterDataUnpakcer_o *)sub_1C3E7B0(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v8, 0);
      if ( !_4__this )
        sub_1C3E7C0(v9, v10);
      if ( !v8 )
        sub_1C3E7C0(v9, v10);
      v11 = MasterDataUnpakcer__Unpack_41010164(v8, _4__this->fields.masterDataBytes, 0);
      v4->fields._dataMapObject_5__7 = v11;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v11, v12, v13);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v14, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, (int32_t)v14, v16, v17);
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
      sub_1C3E508(p_dataMapDict_5__6, v61, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v66 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v66, 0);
        v4->fields.__2__current = (Il2CppObject *)v66;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v15, (int32_t)v66, v67, v68);
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
          v73 = (Il2CppObject *)sub_1C3E7B0(DataManager___c__DisplayClass50_0_TypeInfo);
          System_Object___ctor(v73, 0);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass50_0_o *)v73;
          p__8__1 = (DataManager__updateMasterData_d__50_o **)&v4->fields.__8__1;
          sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v73, v75, v76);
          v79 = _4__this->fields.datalist;
          if ( !v79 )
            goto LABEL_291;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v79->max_length) )
            goto LABEL_292;
          v81 = v79->m_Items[i_5__9];
          if ( !v81 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v81->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v77, v78);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__50_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0;
            sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v84, v85);
            v88 = v4->fields.__8__1;
            if ( !v88 )
              sub_1C3E7C0(v86, v87);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C3E7C0(0, v87);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v88->fields.masterName,
                     (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v91, v92);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v200, 0);
              v4->fields.__2__current = (Il2CppObject *)v200;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, (int32_t)v200, v201, v202);
              v18 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__50_o **)&v4->fields.__8__1;
            v93 = v4->fields.__8__1;
            if ( !v93 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v93->fields.masterName,
                                                              (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
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
                v71 = v183->static_fields;
                result = 0;
                v72 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v96 = *p__8__1;
            v97 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v97,
              (Il2CppObject *)v96,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__,
              0);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v97,
                                                              (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v109 = *(_QWORD *)&this->fields.__1__state;
              v110 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v109 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v109 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
              }
              else
              {
                v112 = v109 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v112 + 32) = method;
                sub_1C3E508((CGThumbnailListItem_o *)(v112 + 32), (int32_t)method, v98, v99);
              }
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
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
                  (Il2CppObject *)method,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
              }
              else
              {
                v118 = v115 + 8 * v117;
                LODWORD(this->fields.__2__current) = v117 + 1;
                *(_QWORD *)(v118 + 32) = method;
                sub_1C3E508((CGThumbnailListItem_o *)(v118 + 32), (int32_t)method, v113, v114);
              }
              ++v4->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_37B51E4 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0;
            v4->fields._isAdd_5__4 = 1;
            sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v100, v101);
          }
          else
          {
            v102 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v103 = *p__8__1;
            v104 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v104,
              (Il2CppObject *)v103,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__,
              0);
            if ( !v102 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v102,
                      (System_Predicate_T__o *)v104,
                      (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( Index < 0 )
              goto LABEL_125;
            v106 = Index;
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v106,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v106,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0;
          sub_1C3E508((CGThumbnailListItem_o *)p__8__1, 0, v107, v108);
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
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v123, v124);
        v4->fields._cryptBytes_5__8 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v125, v126);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v127 = _4__this->fields.saveNameList;
        if ( !v127 )
LABEL_291:
          sub_1C3E7C0(this, method);
        if ( v127->fields._size <= 0 )
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
        v128 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v128,
          (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v128;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v128, v129, v130);
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
                 (System_String_o *)StringLiteral_11483/*"SCRIPT"*/,
                 0) )
          {
            this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0) )
            {
              v132 = sub_1C3E60C(DataMasterBase___TypeInfo, 9);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v132 )
                goto LABEL_291;
              v135 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v132 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v132 + 32) = v135;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 32), (int32_t)v135, v133, v134);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
              v138 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 40) = v138;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 40), (int32_t)v138, v136, v137);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v141 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 48) = v141;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 48), (int32_t)v141, v139, v140);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v144 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 56) = v144;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 56), (int32_t)v144, v142, v143);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v147 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 64) = v147;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 64), (int32_t)v147, v145, v146);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventServantMaster___);
              v150 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 72) = v150;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 72), (int32_t)v150, v148, v149);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v153 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 80) = v153;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 80), (int32_t)v153, v151, v152);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v156 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v132 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v132 + 88) = v156;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 88), (int32_t)v156, v154, v155);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantAddMaster___);
              v159 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v203 = sub_1C3E7E4(this);
                  sub_1C3E68C(v203, 0);
                }
              }
              if ( *(_DWORD *)(v132 + 24) <= 8u )
LABEL_292:
                sub_1C3E7C8(this, method);
              *(_QWORD *)(v132 + 96) = v159;
              sub_1C3E508((CGThumbnailListItem_o *)(v132 + 96), (int32_t)v159, v157, v158);
              v160 = *(_QWORD *)(v132 + 24);
              if ( (int)v160 >= 1 )
              {
                v161 = 0;
                while ( (unsigned int)v161 < (unsigned int)v160 )
                {
                  v162 = *(_QWORD **)(v132 + 32 + 8 * v161);
                  v163 = sub_1C3E7B0(DataManager___c__DisplayClass50_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v163, 0);
                  if ( !v162 )
                    goto LABEL_291;
                  if ( !v163 )
                    goto LABEL_291;
                  v166 = v162[3];
                  *(_QWORD *)(v163 + 16) = v166;
                  sub_1C3E508((CGThumbnailListItem_o *)(v163 + 16), v166, v164, v165);
                  v167 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v168 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_string__TypeInfo);
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
                                                                    (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                        *(const MethodInfo_379843C **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
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
              this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0);
                  v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v176, 0);
                  v4->fields.__2__current = (Il2CppObject *)v176;
                  v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1C3E508(v15, (int32_t)v176, v177, v178);
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
              v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v197, 0);
              v4->fields.__2__current = (Il2CppObject *)v197;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, (int32_t)v197, v198, v199);
              v18 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__50_o *)DataManager__getCacheFileName(0);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0);
              v57 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(v57, (Il2CppObject *)_4__this, Method_DataManager__updateMasterData_b__50_0__, 0);
              v58 = (UnityEngine_WaitUntil_o *)sub_1C3E7B0(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v58, v57, 0);
              v4->fields.__2__current = (Il2CppObject *)v58;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, (int32_t)v58, v59, v60);
              v18 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_65565872(lockCountObj, &lockTaken, 0);
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
          v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v184, 0);
          v4->fields.__2__current = (Il2CppObject *)v184;
          v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C3E508(v15, (int32_t)v184, v185, v186);
          v18 = 11;
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
              sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v192, v187);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v194, 0);
              v4->fields.__2__current = (Il2CppObject *)v194;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, (int32_t)v194, v195, v196);
              v18 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v119 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v119, 0);
      v4->fields.__2__current = (Il2CppObject *)v119;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, (int32_t)v119, v120, v121);
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
        v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v63, 0);
        v4->fields.__2__current = (Il2CppObject *)v63;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v15, (int32_t)v63, v64, v65);
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
            v207 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v207, 0);
            v4->fields.__2__current = (Il2CppObject *)v207;
            v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C3E508(v15, (int32_t)v207, v208, v209);
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
      v71 = v206->static_fields;
      result = 0;
      v72 = 1;
LABEL_289:
      v71->updateMasterDataResult = v72;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DataManager__updateMasterData_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_40982764; // x0
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

  if ( (byte_4C56827 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&StringLiteral_18246/*"contactURL"*/);
    sub_1C3E564(&StringLiteral_19461/*"filePass"*/);
    sub_1C3E564(&StringLiteral_17061/*"baseURL"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C56827 = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v7, v8);
      this->fields._dataObject_5__4 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v9, v10);
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v14, v15, v16);
      v19 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v19 = DataManager_TypeInfo;
      }
      static_fields = v19->static_fields;
      static_fields->webViewData = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v17, v18);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v23, 0);
        this->fields.__2__current = (Il2CppObject *)v23;
        p__2__current = &this->fields.__2__current;
        sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v23, v25, v26);
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v30, v31, v32);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v33 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v33, 0);
        this->fields.__2__current = (Il2CppObject *)v33;
        v34 = &this->fields.__2__current;
        sub_1C3E508((CGThumbnailListItem_o *)v34, (int32_t)v33, v35, v36);
        v37 = 2;
LABEL_30:
        *((_DWORD *)v34 - 2) = v37;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_40982764 = JsonManager__getDictionary_40982764(dataObject_5__4, 0);
      this->fields._data_5__2 = Dictionary_40982764;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_40982764, v40, v41);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v42, 0);
        this->fields.__2__current = (Il2CppObject *)v42;
        v34 = &this->fields.__2__current;
        sub_1C3E508((CGThumbnailListItem_o *)v34, (int32_t)v42, v43, v44);
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
              (Il2CppObject *)StringLiteral_17061/*"baseURL"*/,
              (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17061/*"baseURL"*/,
               (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18246/*"contactURL"*/,
              (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18246/*"contactURL"*/,
               (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19461/*"filePass"*/,
             (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C3E7C0(Item, v22);
        v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19461/*"filePass"*/,
                (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v50 = (System_Collections_Generic_Dictionary_string__object__o *)v49;
        if ( v49 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v49->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (System_Collections_Generic_Dictionary_string__object__c *)v49->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C3EA80(v49);
LABEL_54:
            sub_1C3E7C0(webViewData, v11);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v48, v47, v50, 0);
      }
LABEL_50:
      this->fields._data_5__2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v52, v53);
      this->fields._dataObject_5__4 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v54, v55);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DataManager__updateWebViewData_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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