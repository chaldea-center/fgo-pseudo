void __fastcall DataManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct DataManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5ACA5 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACA5 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v1, v2);
  v4 = DataManager_TypeInfo->static_fields;
  v4->webViewData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->webViewData, 0, v5, v6);
  v7 = (int)StringLiteral_1/*""*/;
  v8 = DataManager_TypeInfo->static_fields;
  v8->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->serverHash, v7, v9, v10);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5ACA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4A5ACA4 = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveDataMapList, (int32_t)v6, v7, v8);
  v9 = (Il2CppObject *)sub_1B887FC(object_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields.lockCountObj = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lockCountObj, (int32_t)v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool __fastcall DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float v4; // s2

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v4 = realtimeSinceStartup - this->fields.lastFrameTime;
  if ( v4 > 0.1 )
    this->fields.lastFrameTime = realtimeSinceStartup;
  return v4 > 0.1;
}


void __fastcall DataManager__ClearCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5AC82 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC82 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(CachePath, v3);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4A5AC83 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC83 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
}


void __fastcall DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A5AC81 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC81 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v3);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v9; // w2
  int v10; // w9

  if ( (byte_4A5AC9B & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4A5AC9B = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v7 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1B8880C(v3, method);
  v9 = saveDataMapList->fields._size;
  v10 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v9, 0LL);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  DataMasterBase_array *v1; // x19
  ServantMaster_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  ServantCommentMaster_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  ServantProfileMaster_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  WarMaster_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  UserMaster_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  UserGameMaster_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  TblUserMaster_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  UserItemMaster_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  UserServantMaster_o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  UserServantStorageMaster_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  UserAccessaryMaster_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  UserQuestMaster_o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  BattleMaster_o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  OtherUserGameMaster_o *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  TblFriendMaster_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  AreaMaster_o *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  ServantCardMaster_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  EventMaster_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  ItemMaster_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  QuestMaster_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  QuestAddMaster_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  QuestReleaseMaster_o *v71; // x20
  int32_t v72; // w2
  int32_t v73; // w3
  QuestDateRangeMaster_o *v74; // x20
  int32_t v75; // w2
  int32_t v76; // w3
  QuestPhaseMaster_o *v77; // x20
  int32_t v78; // w2
  int32_t v79; // w3
  QuestPhaseDetailMaster_o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  QuestGroupMaster_o *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  QuestRandomGroupMaster_o *v86; // x20
  int32_t v87; // w2
  int32_t v88; // w3
  QuestConsumeItemMaster_o *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  QuestMessageMaster_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  UserQuestInfoMaster_o *v95; // x20
  int32_t v96; // w2
  int32_t v97; // w3
  UserQuestRecordMaster_o *v98; // x20
  int32_t v99; // w2
  int32_t v100; // w3
  ViewQuestInfoMaster_o *v101; // x20
  int32_t v102; // w2
  int32_t v103; // w3
  ViewEnemyMaster_o *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  ViewQuestEnemyInfoMaster_o *v107; // x20
  int32_t v108; // w2
  int32_t v109; // w3
  BlankEarthSpotMaster_o *v110; // x20
  int32_t v111; // w2
  int32_t v112; // w3
  BlankEarthSpotAddMaster_o *v113; // x20
  int32_t v114; // w2
  int32_t v115; // w3
  SpotMaster_o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  SpotImageMaster_o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  SpotRoadMaster_o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  SpotPathMaster_o *v125; // x20
  int32_t v126; // w2
  int32_t v127; // w3
  SpotAddMaster_o *v128; // x20
  int32_t v129; // w2
  int32_t v130; // w3
  MapGimmickMaster_o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  GiftMaster_o *v134; // x20
  int32_t v135; // w2
  int32_t v136; // w3
  GiftAddMaster_o *v137; // x20
  int32_t v138; // w2
  int32_t v139; // w3
  ShopMaster_o *v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  StoneShopMaster_o *v143; // x20
  int32_t v144; // w2
  int32_t v145; // w3
  BankShopMaster_o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  ShopScriptMaster_o *v149; // x20
  int32_t v150; // w2
  int32_t v151; // w3
  StageMaster_o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  ServantGroupMaster_o *v155; // x20
  int32_t v156; // w2
  int32_t v157; // w3
  ServantLimitMaster_o *v158; // x20
  int32_t v159; // w2
  int32_t v160; // w3
  ServantLimitAddMaster_o *v161; // x20
  int32_t v162; // w2
  int32_t v163; // w3
  ServantSkillMaster_o *v164; // x20
  int32_t v165; // w2
  int32_t v166; // w3
  ServantPassiveSkillMaster_o *v167; // x20
  int32_t v168; // w2
  int32_t v169; // w3
  BgmMaster_o *v170; // x20
  int32_t v171; // w2
  int32_t v172; // w3
  ServantScriptMaster_o *v173; // x20
  int32_t v174; // w2
  int32_t v175; // w3
  NewsMaster_o *v176; // x20
  int32_t v177; // w2
  int32_t v178; // w3
  TelopMaster_o *v179; // x20
  int32_t v180; // w2
  int32_t v181; // w3
  UserExpMaster_o *v182; // x20
  int32_t v183; // w2
  int32_t v184; // w3
  TreasureDvcMaster_o *v185; // x20
  int32_t v186; // w2
  int32_t v187; // w3
  ServantTreasureDvcMaster_o *v188; // x20
  int32_t v189; // w2
  int32_t v190; // w3
  SkillMaster_o *v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  SkillLvMaster_o *v194; // x20
  int32_t v195; // w2
  int32_t v196; // w3
  SkillDetailMaster_o *v197; // x20
  int32_t v198; // w2
  int32_t v199; // w3
  CommandSpellMaster_o *v200; // x20
  int32_t v201; // w2
  int32_t v202; // w3
  EquipMaster_o *v203; // x20
  int32_t v204; // w2
  int32_t v205; // w3
  EquipExpMaster_o *v206; // x20
  int32_t v207; // w2
  int32_t v208; // w3
  EquipSkillMaster_o *v209; // x20
  int32_t v210; // w2
  int32_t v211; // w3
  SubEquipMaster_o *v212; // x20
  int32_t v213; // w2
  int32_t v214; // w3
  AccessaryMaster_o *v215; // x20
  int32_t v216; // w2
  int32_t v217; // w3
  UserPresentBoxMaster_o *v218; // x20
  int32_t v219; // w2
  int32_t v220; // w3
  UserDeckMaster_o *v221; // x20
  int32_t v222; // w2
  int32_t v223; // w3
  UserSubEquipMaster_o *v224; // x20
  int32_t v225; // w2
  int32_t v226; // w3
  GachaMaster_o *v227; // x20
  int32_t v228; // w2
  int32_t v229; // w3
  GachaImageMaster_o *v230; // x20
  int32_t v231; // w2
  int32_t v232; // w3
  UserGachaMaster_o *v233; // x20
  int32_t v234; // w2
  int32_t v235; // w3
  UserEquipMaster_o *v236; // x20
  int32_t v237; // w2
  int32_t v238; // w3
  UserServantCollectionMaster_o *v239; // x20
  int32_t v240; // w2
  int32_t v241; // w3
  FriendshipMaster_o *v242; // x20
  int32_t v243; // w2
  int32_t v244; // w3
  GachaTicketMaster_o *v245; // x20
  int32_t v246; // w2
  int32_t v247; // w3
  UserFormationMaster_o *v248; // x20
  int32_t v249; // w2
  int32_t v250; // w3
  FunctionMaster_o *v251; // x20
  int32_t v252; // w2
  int32_t v253; // w3
  BuffMaster_o *v254; // x20
  int32_t v255; // w2
  int32_t v256; // w3
  GachaReleaseMaster_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  CombineQpMaster_o *v260; // x20
  int32_t v261; // w2
  int32_t v262; // w3
  CombineMaterialMaster_o *v263; // x20
  int32_t v264; // w2
  int32_t v265; // w3
  EventCombineMaster_o *v266; // x20
  int32_t v267; // w2
  int32_t v268; // w3
  ServantExpMaster_o *v269; // x20
  int32_t v270; // w2
  int32_t v271; // w3
  CombineSkillMaster_o *v272; // x20
  int32_t v273; // w2
  int32_t v274; // w3
  CombineTdMaster_o *v275; // x20
  int32_t v276; // w2
  int32_t v277; // w3
  EventQuestMaster_o *v278; // x20
  int32_t v279; // w2
  int32_t v280; // w3
  EventCampaignMaster_o *v281; // x20
  int32_t v282; // w2
  int32_t v283; // w3
  IllustratorMaster_o *v284; // x20
  int32_t v285; // w2
  int32_t v286; // w3
  CvMaster_o *v287; // x20
  int32_t v288; // w2
  int32_t v289; // w3
  TreasureDvcLvMaster_o *v290; // x20
  int32_t v291; // w2
  int32_t v292; // w3
  TreasureDvcDetailMaster_o *v293; // x20
  int32_t v294; // w2
  int32_t v295; // w3
  UserFollowerMaster_o *v296; // x20
  int32_t v297; // w2
  int32_t v298; // w3
  NpcFollowerMaster_o *v299; // x20
  int32_t v300; // w2
  int32_t v301; // w3
  NpcServantFollowerMaster_o *v302; // x20
  int32_t v303; // w2
  int32_t v304; // w3
  UserEventMaster_o *v305; // x20
  int32_t v306; // w2
  int32_t v307; // w3
  UserShopMaster_o *v308; // x20
  int32_t v309; // w2
  int32_t v310; // w3
  UserContinueMaster_o *v311; // x20
  int32_t v312; // w2
  int32_t v313; // w3
  ConstantMaster_o *v314; // x20
  int32_t v315; // w2
  int32_t v316; // w3
  ConstantLongMaster_o *v317; // x20
  int32_t v318; // w2
  int32_t v319; // w3
  ConstantStrMaster_o *v320; // x20
  int32_t v321; // w2
  int32_t v322; // w3
  AiMaster_o *v323; // x20
  int32_t v324; // w2
  int32_t v325; // w3
  AiActMaster_o *v326; // x20
  int32_t v327; // w2
  int32_t v328; // w3
  AttriRelationMaster_o *v329; // x20
  int32_t v330; // w2
  int32_t v331; // w3
  ClassRelationMaster_o *v332; // x20
  int32_t v333; // w2
  int32_t v334; // w3
  EffectMaster_o *v335; // x20
  int32_t v336; // w2
  int32_t v337; // w3
  EquipImageMaster_o *v338; // x20
  int32_t v339; // w2
  int32_t v340; // w3
  ServantVoiceMaster_o *v341; // x20
  int32_t v342; // w2
  int32_t v343; // w3
  CombineLimitMaster_o *v344; // x20
  int32_t v345; // w2
  int32_t v346; // w3
  CardMaster_o *v347; // x20
  int32_t v348; // w2
  int32_t v349; // w3
  CombineQpSvtEquipMaster_o *v350; // x20
  int32_t v351; // w2
  int32_t v352; // w3
  ServantRarityMaster_o *v353; // x20
  int32_t v354; // w2
  int32_t v355; // w3
  SetItemMaster_o *v356; // x20
  int32_t v357; // w2
  int32_t v358; // w3
  RecoverMaster_o *v359; // x20
  int32_t v360; // w2
  int32_t v361; // w3
  BannerMaster_o *v362; // x20
  int32_t v363; // w2
  int32_t v364; // w3
  ShopReleaseMaster_o *v365; // x20
  int32_t v366; // w2
  int32_t v367; // w3
  EventRewardMaster_o *v368; // x20
  int32_t v369; // w2
  int32_t v370; // w3
  EventDetailMaster_o *v371; // x20
  int32_t v372; // w2
  int32_t v373; // w3
  EventServantMaster_o *v374; // x20
  int32_t v375; // w2
  int32_t v376; // w3
  BoxGachaMaster_o *v377; // x20
  int32_t v378; // w2
  int32_t v379; // w3
  BoxGachaBaseMaster_o *v380; // x20
  int32_t v381; // w2
  int32_t v382; // w3
  BoxGachaTalkMaster_o *v383; // x20
  int32_t v384; // w2
  int32_t v385; // w3
  UserBoxGachaMaster_o *v386; // x20
  int32_t v387; // w2
  int32_t v388; // w3
  BoxGachaHistoryMaster_o *v389; // x20
  int32_t v390; // w2
  int32_t v391; // w3
  BattleBgMaster_o *v392; // x20
  int32_t v393; // w2
  int32_t v394; // w3
  TipsBattleMaster_o *v395; // x20
  int32_t v396; // w2
  int32_t v397; // w3
  UserLoginMaster_o *v398; // x20
  int32_t v399; // w2
  int32_t v400; // w3
  VoiceMaster_o *v401; // x20
  int32_t v402; // w2
  int32_t v403; // w3
  EventRewardExtraMaster_o *v404; // x20
  int32_t v405; // w2
  int32_t v406; // w3
  EventMissionMaster_o *v407; // x20
  int32_t v408; // w2
  int32_t v409; // w3
  EventMissionActionMaster_o *v410; // x20
  int32_t v411; // w2
  int32_t v412; // w3
  EventMissionActionAddMaster_o *v413; // x20
  int32_t v414; // w2
  int32_t v415; // w3
  EventMissionConditionMaster_o *v416; // x20
  int32_t v417; // w2
  int32_t v418; // w3
  EventMissionCondDetailMaster_o *v419; // x20
  int32_t v420; // w2
  int32_t v421; // w3
  EventMissionAddMaster_o *v422; // x20
  int32_t v423; // w2
  int32_t v424; // w3
  CompleteMissionMaster_o *v425; // x20
  int32_t v426; // w2
  int32_t v427; // w3
  EventRewardSetMaster_o *v428; // x20
  int32_t v429; // w2
  int32_t v430; // w3
  UserEventMissionMaster_o *v431; // x20
  int32_t v432; // w2
  int32_t v433; // w3
  UserEventMissionCondDetailMaster_o *v434; // x20
  int32_t v435; // w2
  int32_t v436; // w3
  BoxGachaBaseDetailMaster_o *v437; // x20
  int32_t v438; // w2
  int32_t v439; // w3
  UserServantLeaderMaster_o *v440; // x20
  int32_t v441; // w2
  int32_t v442; // w3
  ClosedMessageMaster_o *v443; // x20
  int32_t v444; // w2
  int32_t v445; // w3
  FunctionGroupMaster_o *v446; // x20
  int32_t v447; // w2
  int32_t v448; // w3
  EventRaidMaster_o *v449; // x20
  int32_t v450; // w2
  int32_t v451; // w3
  TotalEventRaidMaster_o *v452; // x20
  int32_t v453; // w2
  int32_t v454; // w3
  UserEventRaidMaster_o *v455; // x20
  int32_t v456; // w2
  int32_t v457; // w3
  EventPointMaster_o *v458; // x20
  int32_t v459; // w2
  int32_t v460; // w3
  EventPointGroupMaster_o *v461; // x20
  int32_t v462; // w2
  int32_t v463; // w3
  TotalEventPointMaster_o *v464; // x20
  int32_t v465; // w2
  int32_t v466; // w3
  UserEventPointMaster_o *v467; // x20
  int32_t v468; // w2
  int32_t v469; // w3
  EventPointUpperMaster_o *v470; // x20
  int32_t v471; // w2
  int32_t v472; // w3
  EventPointUpperReleaseMaster_o *v473; // x20
  int32_t v474; // w2
  int32_t v475; // w3
  EventRaceMaster_o *v476; // x20
  int32_t v477; // w2
  int32_t v478; // w3
  EventRaceResultMaster_o *v479; // x20
  int32_t v480; // w2
  int32_t v481; // w3
  QuestRacePointMaster_o *v482; // x20
  int32_t v483; // w2
  int32_t v484; // w3
  UserEventRaceMaster_o *v485; // x20
  int32_t v486; // w2
  int32_t v487; // w3
  EventScriptMaster_o *v488; // x20
  int32_t v489; // w2
  int32_t v490; // w3
  EventScriptReleaseMaster_o *v491; // x20
  int32_t v492; // w2
  int32_t v493; // w3
  UserPresentHistoryMaster_o *v494; // x20
  int32_t v495; // w2
  int32_t v496; // w3
  MstMissionMaster_o *v497; // x20
  int32_t v498; // w2
  int32_t v499; // w3
  ServantExceedMaster_o *v500; // x20
  int32_t v501; // w2
  int32_t v502; // w3
  PartialMaintenanceMaster_o *v503; // x20
  int32_t v504; // w2
  int32_t v505; // w3
  GuideMaster_o *v506; // x20
  int32_t v507; // w2
  int32_t v508; // w3
  MstMissionDisplayInfoMaster_o *v509; // x20
  int32_t v510; // w2
  int32_t v511; // w3
  GachaGroupMaster_o *v512; // x20
  int32_t v513; // w2
  int32_t v514; // w3
  QuestResetMaster_o *v515; // x20
  int32_t v516; // w2
  int32_t v517; // w3
  WarAddMaster_o *v518; // x20
  int32_t v519; // w2
  int32_t v520; // w3
  EventItemDisplayMaster_o *v521; // x20
  int32_t v522; // w2
  int32_t v523; // w3
  EventItemDisplayGroupMaster_o *v524; // x20
  int32_t v525; // w2
  int32_t v526; // w3
  EventItemDisplayReleaseMaster_o *v527; // x20
  int32_t v528; // w2
  int32_t v529; // w3
  EventTutorialMaster_o *v530; // x20
  int32_t v531; // w2
  int32_t v532; // w3
  EventTutorialCondMaster_o *v533; // x20
  int32_t v534; // w2
  int32_t v535; // w3
  VoiceReleaseMaster_o *v536; // x20
  int32_t v537; // w2
  int32_t v538; // w3
  EventSuperBossMaster_o *v539; // x20
  int32_t v540; // w2
  int32_t v541; // w3
  UserSuperBossMaster_o *v542; // x20
  int32_t v543; // w2
  int32_t v544; // w3
  QuestScriptMaster_o *v545; // x20
  int32_t v546; // w2
  int32_t v547; // w3
  QuestScriptReleaseMaster_o *v548; // x20
  int32_t v549; // w2
  int32_t v550; // w3
  MaterialFolderMaster_o *v551; // x20
  int32_t v552; // w2
  int32_t v553; // w3
  RestrictionMaster_o *v554; // x20
  int32_t v555; // w2
  int32_t v556; // w3
  QuestRestrictionMaster_o *v557; // x20
  int32_t v558; // w2
  int32_t v559; // w3
  ServantVoiceRelationMaster_o *v560; // x20
  int32_t v561; // w2
  int32_t v562; // w3
  ShopDetailMaster_o *v563; // x20
  int32_t v564; // w2
  int32_t v565; // w3
  ServantScriptAddMaster_o *v566; // x20
  int32_t v567; // w2
  int32_t v568; // w3
  CombineMaster_o *v569; // x20
  int32_t v570; // w2
  int32_t v571; // w3
  AiFieldMaster_o *v572; // x20
  int32_t v573; // w2
  int32_t v574; // w3
  ServantCommentAddMaster_o *v575; // x20
  int32_t v576; // w2
  int32_t v577; // w3
  EventFilterMaster_o *v578; // x20
  int32_t v579; // w2
  int32_t v580; // w3
  UserSupportDeckMaster_o *v581; // x20
  int32_t v582; // w2
  int32_t v583; // w3
  EventRewardSceneMaster_o *v584; // x20
  int32_t v585; // w2
  int32_t v586; // w3
  EventVoicePlayMaster_o *v587; // x20
  int32_t v588; // w2
  int32_t v589; // w3
  GachaSubMaster_o *v590; // x20
  int32_t v591; // w2
  int32_t v592; // w3
  GachaDetailMaster_o *v593; // x20
  int32_t v594; // w2
  int32_t v595; // w3
  GachaBonusSelectMaster_o *v596; // x20
  int32_t v597; // w2
  int32_t v598; // w3
  GachaBonusSelectLineupMaster_o *v599; // x20
  int32_t v600; // w2
  int32_t v601; // w3
  ServantChangeMaster_o *v602; // x20
  int32_t v603; // w2
  int32_t v604; // w3
  VoiceCondMaster_o *v605; // x20
  int32_t v606; // w2
  int32_t v607; // w3
  BgmReleaseMaster_o *v608; // x20
  int32_t v609; // w2
  int32_t v610; // w3
  MyRoomAddMaster_o *v611; // x20
  int32_t v612; // w2
  int32_t v613; // w3
  ShopActionMaster_o *v614; // x20
  int32_t v615; // w2
  int32_t v616; // w3
  EventRewardSceneReleaseMaster_o *v617; // x20
  int32_t v618; // w2
  int32_t v619; // w3
  QuestBehaviorMaster_o *v620; // x20
  int32_t v621; // w2
  int32_t v622; // w3
  MapMaster_o *v623; // x20
  int32_t v624; // w2
  int32_t v625; // w3
  MapCondMaster_o *v626; // x20
  int32_t v627; // w2
  int32_t v628; // w3
  MapButtonMaster_o *v629; // x20
  int32_t v630; // w2
  int32_t v631; // w3
  BannerAddMaster_o *v632; // x20
  int32_t v633; // w2
  int32_t v634; // w3
  EventAddMaster_o *v635; // x20
  int32_t v636; // w2
  int32_t v637; // w3
  TotalLoginMaster_o *v638; // x20
  int32_t v639; // w2
  int32_t v640; // w3
  ServantFilterMaster_o *v641; // x20
  int32_t v642; // w2
  int32_t v643; // w3
  CombineCostumeMaster_o *v644; // x20
  int32_t v645; // w2
  int32_t v646; // w3
  ServantCostumeMaster_o *v647; // x20
  int32_t v648; // w2
  int32_t v649; // w3
  ServantCostumeReleaseMaster_o *v650; // x20
  int32_t v651; // w2
  int32_t v652; // w3
  UserFriendRequestHistoryMaster_o *v653; // x20
  int32_t v654; // w2
  int32_t v655; // w3
  UserBlacklistMaster_o *v656; // x20
  int32_t v657; // w2
  int32_t v658; // w3
  ItemSelectMaster_o *v659; // x20
  int32_t v660; // w2
  int32_t v661; // w3
  TotalEventRaceMaster_o *v662; // x20
  int32_t v663; // w2
  int32_t v664; // w3
  EventPointGroupAddMaster_o *v665; // x20
  int32_t v666; // w2
  int32_t v667; // w3
  VoicePlayGroupMaster_o *v668; // x20
  int32_t v669; // w2
  int32_t v670; // w3
  VoicePlayCondMaster_o *v671; // x20
  int32_t v672; // w2
  int32_t v673; // w3
  GachaStoryAdjustMaster_o *v674; // x20
  int32_t v675; // w2
  int32_t v676; // w3
  ServantFlagMaster_o *v677; // x20
  int32_t v678; // w2
  int32_t v679; // w3
  ServantFlagReleaseMaster_o *v680; // x20
  int32_t v681; // w2
  int32_t v682; // w3
  EventLocationCampaignMaster_o *v683; // x20
  int32_t v684; // w2
  int32_t v685; // w3
  CampaignInfoMaster_o *v686; // x20
  int32_t v687; // w2
  int32_t v688; // w3
  DialogMessageMaster_o *v689; // x20
  int32_t v690; // w2
  int32_t v691; // w3
  ServantIndividualityMaster_o *v692; // x20
  int32_t v693; // w2
  int32_t v694; // w3
  BoardMessageMaster_o *v695; // x20
  int32_t v696; // w2
  int32_t v697; // w3
  BoardMessageReleaseMaster_o *v698; // x20
  int32_t v699; // w2
  int32_t v700; // w3
  EventServantFatigueMaster_o *v701; // x20
  int32_t v702; // w2
  int32_t v703; // w3
  UserEventDeckMaster_o *v704; // x20
  int32_t v705; // w2
  int32_t v706; // w3
  EventTowerMaster_o *v707; // x20
  int32_t v708; // w2
  int32_t v709; // w3
  EventTowerRewardMaster_o *v710; // x20
  int32_t v711; // w2
  int32_t v712; // w3
  EventBulletinBoardMaster_o *v713; // x20
  int32_t v714; // w2
  int32_t v715; // w3
  EventBulletinBoardReleaseMaster_o *v716; // x20
  int32_t v717; // w2
  int32_t v718; // w3
  EventFactoryMaster_o *v719; // x20
  int32_t v720; // w2
  int32_t v721; // w3
  ShopGroupMaster_o *v722; // x20
  int32_t v723; // w2
  int32_t v724; // w3
  AuraEffectMaster_o *v725; // x20
  int32_t v726; // w2
  int32_t v727; // w3
  AuraEffectPosOverwriteMaster_o *v728; // x20
  int32_t v729; // w2
  int32_t v730; // w3
  UserEventMissionFixMaster_o *v731; // x20
  int32_t v732; // w2
  int32_t v733; // w3
  NotEndEventMissionFixMaster_o *v734; // x20
  int32_t v735; // w2
  int32_t v736; // w3
  EnemyMstMaster_o *v737; // x20
  int32_t v738; // w2
  int32_t v739; // w3
  EnemyMstBattleMaster_o *v740; // x20
  int32_t v741; // w2
  int32_t v742; // w3
  ServantSkillReleaseMaster_o *v743; // x20
  int32_t v744; // w2
  int32_t v745; // w3
  ServantPassiveSkillReleaseMaster_o *v746; // x20
  int32_t v747; // w2
  int32_t v748; // w3
  ServantTreasureDeviceReleaseMaster_o *v749; // x20
  int32_t v750; // w2
  int32_t v751; // w3
  MapGimmickReleaseMaster_o *v752; // x20
  int32_t v753; // w2
  int32_t v754; // w3
  CommandCodeMaster_o *v755; // x20
  int32_t v756; // w2
  int32_t v757; // w3
  ServantCommandCodeUnlockMaster_o *v758; // x20
  int32_t v759; // w2
  int32_t v760; // w3
  UserCommandCodeMaster_o *v761; // x20
  int32_t v762; // w2
  int32_t v763; // w3
  UserCommandCodeCollectionMaster_o *v764; // x20
  int32_t v765; // w2
  int32_t v766; // w3
  UserServantCommandCodeMaster_o *v767; // x20
  int32_t v768; // w2
  int32_t v769; // w3
  UserServantCommandCardMaster_o *v770; // x20
  int32_t v771; // w2
  int32_t v772; // w3
  CommandCardRankParamMaster_o *v773; // x20
  int32_t v774; // w2
  int32_t v775; // w3
  CommandCodeSkillMaster_o *v776; // x20
  int32_t v777; // w2
  int32_t v778; // w3
  CommandCodeSkillReleaseMaster_o *v779; // x20
  int32_t v780; // w2
  int32_t v781; // w3
  CommandCodeCommentMaster_o *v782; // x20
  int32_t v783; // w2
  int32_t v784; // w3
  EventStatusMaster_o *v785; // x20
  int32_t v786; // w2
  int32_t v787; // w3
  EventStatusQuestMaster_o *v788; // x20
  int32_t v789; // w2
  int32_t v790; // w3
  CommonRestrictionMaster_o *v791; // x20
  int32_t v792; // w2
  int32_t v793; // w3
  EventPointBuffMaster_o *v794; // x20
  int32_t v795; // w2
  int32_t v796; // w3
  UserFollowMaster_o *v797; // x20
  int32_t v798; // w2
  int32_t v799; // w3
  EventRewardGuideReleaseMaster_o *v800; // x20
  int32_t v801; // w2
  int32_t v802; // w3
  NpcServantEquipMaster_o *v803; // x20
  int32_t v804; // w2
  int32_t v805; // w3
  EventCampaignReleaseMaster_o *v806; // x20
  int32_t v807; // w2
  int32_t v808; // w3
  ServantMaterialFolderMaster_o *v809; // x20
  int32_t v810; // w2
  int32_t v811; // w3
  EventEquipSkillReleaseMaster_o *v812; // x20
  int32_t v813; // w2
  int32_t v814; // w3
  EventPointActivityMaster_o *v815; // x20
  int32_t v816; // w2
  int32_t v817; // w3
  FunctionCategoryMaster_o *v818; // x20
  int32_t v819; // w2
  int32_t v820; // w3
  QuestPickupMaster_o *v821; // x20
  int32_t v822; // w2
  int32_t v823; // w3
  EventUiMaster_o *v824; // x20
  int32_t v825; // w2
  int32_t v826; // w3
  EventUiReleaseMaster_o *v827; // x20
  int32_t v828; // w2
  int32_t v829; // w3
  EventUiValueMaster_o *v830; // x20
  int32_t v831; // w2
  int32_t v832; // w3
  EventConquestRewardMaster_o *v833; // x20
  int32_t v834; // w2
  int32_t v835; // w3
  NpcFollowerReleaseMaster_o *v836; // x20
  int32_t v837; // w2
  int32_t v838; // w3
  EventBonusFilterMaster_o *v839; // x20
  int32_t v840; // w2
  int32_t v841; // w3
  EventBonusFilterGroupInfoMaster_o *v842; // x20
  int32_t v843; // w2
  int32_t v844; // w3
  EventBonusFilterGroupMemberMaster_o *v845; // x20
  int32_t v846; // w2
  int32_t v847; // w3
  UserGachaExtraCountMaster_o *v848; // x20
  int32_t v849; // w2
  int32_t v850; // w3
  PrivilegeMaster_o *v851; // x20
  int32_t v852; // w2
  int32_t v853; // w3
  UserPrivilegeMaster_o *v854; // x20
  int32_t v855; // w2
  int32_t v856; // w3
  UserQuestRouteMaster_o *v857; // x20
  int32_t v858; // w2
  int32_t v859; // w3
  EventBossStatusUiMaster_o *v860; // x20
  int32_t v861; // w2
  int32_t v862; // w3
  CommonReleaseMaster_o *v863; // x20
  int32_t v864; // w2
  int32_t v865; // w3
  QuestSpotReleaseMaster_o *v866; // x20
  int32_t v867; // w2
  int32_t v868; // w3
  VoiceMaterialCondMaster_o *v869; // x20
  int32_t v870; // w2
  int32_t v871; // w3
  ClassRelationOverwriteMaster_o *v872; // x20
  int32_t v873; // w2
  int32_t v874; // w3
  EventGroupMaster_o *v875; // x20
  int32_t v876; // w2
  int32_t v877; // w3
  TotalBoxGachaMaster_o *v878; // x20
  int32_t v879; // w2
  int32_t v880; // w3
  ServantTreasureDeviceDamageMaster_o *v881; // x20
  int32_t v882; // w2
  int32_t v883; // w3
  UserEventServantFatigueMaster_o *v884; // x20
  int32_t v885; // w2
  int32_t v886; // w3
  EventRewardBgMaster_o *v887; // x20
  int32_t v888; // w2
  int32_t v889; // w3
  EventFatigueRecoveryMaster_o *v890; // x20
  int32_t v891; // w2
  int32_t v892; // w3
  EventBoostItemUsedMaster_o *v893; // x20
  int32_t v894; // w2
  int32_t v895; // w3
  StatusEffectPosOverwriteMaster_o *v896; // x20
  int32_t v897; // w2
  int32_t v898; // w3
  QuestPhaseDetailAddMaster_o *v899; // x20
  int32_t v900; // w2
  int32_t v901; // w3
  VoiceClosedMessageMaster_o *v902; // x20
  int32_t v903; // w2
  int32_t v904; // w3
  ReprintStageMaster_o *v905; // x20
  int32_t v906; // w2
  int32_t v907; // w3
  UserCombineExpMaster_o *v908; // x20
  int32_t v909; // w2
  int32_t v910; // w3
  EventBoardGameCellMaster_o *v911; // x20
  int32_t v912; // w2
  int32_t v913; // w3
  EventBoardGameTokenMaster_o *v914; // x20
  int32_t v915; // w2
  int32_t v916; // w3
  EventBoardGameTokenRewardMaster_o *v917; // x20
  int32_t v918; // w2
  int32_t v919; // w3
  UserEventBoardGameTokenMaster_o *v920; // x20
  int32_t v921; // w2
  int32_t v922; // w3
  ServantAnimationOverwriteMaster_o *v923; // x20
  int32_t v924; // w2
  int32_t v925; // w3
  OpeningMovieMaster_o *v926; // x20
  int32_t v927; // w2
  int32_t v928; // w3
  ServantLimitSpoilerProtectionMaster_o *v929; // x20
  int32_t v930; // w2
  int32_t v931; // w3
  PickupUserFollowerMaster_o *v932; // x20
  int32_t v933; // w2
  int32_t v934; // w3
  ServantCollectionMaster_o *v935; // x20
  int32_t v936; // w2
  int32_t v937; // w3
  GachaBehaviorMaster_o *v938; // x20
  int32_t v939; // w2
  int32_t v940; // w3
  EventQuestCooltimeMaster_o *v941; // x20
  int32_t v942; // w2
  int32_t v943; // w3
  UserEventQuestCooltimeMaster_o *v944; // x20
  int32_t v945; // w2
  int32_t v946; // w3
  BoostMaster_o *v947; // x20
  int32_t v948; // w2
  int32_t v949; // w3
  WarBoardMaster_o *v950; // x20
  int32_t v951; // w2
  int32_t v952; // w3
  WarBoardSquareMaster_o *v953; // x20
  int32_t v954; // w2
  int32_t v955; // w3
  WarBoardRoadMaster_o *v956; // x20
  int32_t v957; // w2
  int32_t v958; // w3
  WarBoardStageMaster_o *v959; // x20
  int32_t v960; // w2
  int32_t v961; // w3
  WarBoardActionPointMaster_o *v962; // x20
  int32_t v963; // w2
  int32_t v964; // w3
  WarBoardActionTrendMaster_o *v965; // x20
  int32_t v966; // w2
  int32_t v967; // w3
  WarBoardTacticalTrendMaster_o *v968; // x20
  int32_t v969; // w2
  int32_t v970; // w3
  WarBoardStageLayoutMaster_o *v971; // x20
  int32_t v972; // w2
  int32_t v973; // w3
  WarBoardStageNpcMaster_o *v974; // x20
  int32_t v975; // w2
  int32_t v976; // w3
  WarBoardStageWallMaster_o *v977; // x20
  int32_t v978; // w2
  int32_t v979; // w3
  WarBoardAIMaster_o *v980; // x20
  int32_t v981; // w2
  int32_t v982; // w3
  WarBoardRatingBaseMaster_o *v983; // x20
  int32_t v984; // w2
  int32_t v985; // w3
  WarBoardRatingOffsetMaster_o *v986; // x20
  int32_t v987; // w2
  int32_t v988; // w3
  WarBoardItemMaster_o *v989; // x20
  int32_t v990; // w2
  int32_t v991; // w3
  WarBoardTreasureMaster_o *v992; // x20
  int32_t v993; // w2
  int32_t v994; // w3
  WarBoardQuestMaster_o *v995; // x20
  int32_t v996; // w2
  int32_t v997; // w3
  WarBoardDataMaster_o *v998; // x20
  int32_t v999; // w2
  int32_t v1000; // w3
  WarBoardIndividualityClassMaster_o *v1001; // x20
  int32_t v1002; // w2
  int32_t v1003; // w3
  WarBoardActionTrendConditionMaster_o *v1004; // x20
  int32_t v1005; // w2
  int32_t v1006; // w3
  WarBoardActionPointClassMaster_o *v1007; // x20
  int32_t v1008; // w2
  int32_t v1009; // w3
  EventPanelMapMaster_o *v1010; // x20
  int32_t v1011; // w2
  int32_t v1012; // w3
  EventPanelMapDetailMaster_o *v1013; // x20
  int32_t v1014; // w2
  int32_t v1015; // w3
  EventPanelSpotMaster_o *v1016; // x20
  int32_t v1017; // w2
  int32_t v1018; // w3
  EventPanelScanMaster_o *v1019; // x20
  int32_t v1020; // w2
  int32_t v1021; // w3
  CommonConsumeMaster_o *v1022; // x20
  int32_t v1023; // w2
  int32_t v1024; // w3
  UserEventMapMaster_o *v1025; // x20
  int32_t v1026; // w2
  int32_t v1027; // w3
  UserEventSpotMaster_o *v1028; // x20
  int32_t v1029; // w2
  int32_t v1030; // w3
  WarGroupMaster_o *v1031; // x20
  int32_t v1032; // w2
  int32_t v1033; // w3
  ServantLimitImageMaster_o *v1034; // x20
  int32_t v1035; // w2
  int32_t v1036; // w3
  FriendshipQuestDialogInfoMaster_o *v1037; // x20
  int32_t v1038; // w2
  int32_t v1039; // w3
  QuestRestrictionInfoMaster_o *v1040; // x20
  int32_t v1041; // w2
  int32_t v1042; // w3
  AssistMaster_o *v1043; // x20
  int32_t v1044; // w2
  int32_t v1045; // w3
  WarBoardEffectMaster_o *v1046; // x20
  int32_t v1047; // w2
  int32_t v1048; // w3
  WarBoardOnboardSkillMaster_o *v1049; // x20
  int32_t v1050; // w2
  int32_t v1051; // w3
  BeforeBirthDayMaster_o *v1052; // x20
  int32_t v1053; // w2
  int32_t v1054; // w3
  LoginQuestMaster_o *v1055; // x20
  int32_t v1056; // w2
  int32_t v1057; // w3
  EventCombineCostumeMaster_o *v1058; // x20
  int32_t v1059; // w2
  int32_t v1060; // w3
  WarBoardStagePieceDetailMaster_o *v1061; // x20
  int32_t v1062; // w2
  int32_t v1063; // w3
  ServantTreasureDeviceAddMaster_o *v1064; // x20
  int32_t v1065; // w2
  int32_t v1066; // w3
  SkillAddMaster_o *v1067; // x20
  int32_t v1068; // w2
  int32_t v1069; // w3
  ServantLvDetailMaster_o *v1070; // x20
  int32_t v1071; // w2
  int32_t v1072; // w3
  GachaAppendMaster_o *v1073; // x20
  int32_t v1074; // w2
  int32_t v1075; // w3
  UserGachaDrawLogMaster_o *v1076; // x20
  int32_t v1077; // w2
  int32_t v1078; // w3
  ServantAppendPassiveSkillMaster_o *v1079; // x20
  int32_t v1080; // w2
  int32_t v1081; // w3
  UserServantAppendPassiveSkillMaster_o *v1082; // x20
  int32_t v1083; // w2
  int32_t v1084; // w3
  UserServantAppendPassiveSkillLvMaster_o *v1085; // x20
  int32_t v1086; // w2
  int32_t v1087; // w3
  SvtAppendPassiveSkillUnlockMaster_o *v1088; // x20
  int32_t v1089; // w2
  int32_t v1090; // w3
  CombineAppendPassiveSkillMaster_o *v1091; // x20
  int32_t v1092; // w2
  int32_t v1093; // w3
  SvtCoinMaster_o *v1094; // x20
  int32_t v1095; // w2
  int32_t v1096; // w3
  UserSvtCoinMaster_o *v1097; // x20
  int32_t v1098; // w2
  int32_t v1099; // w3
  ServantAddMaster_o *v1100; // x20
  int32_t v1101; // w2
  int32_t v1102; // w3
  TreasureBoxMaster_o *v1103; // x20
  int32_t v1104; // w2
  int32_t v1105; // w3
  TreasureBoxGiftMaster_o *v1106; // x20
  int32_t v1107; // w2
  int32_t v1108; // w3
  TreasureBoxTalkMaster_o *v1109; // x20
  int32_t v1110; // w2
  int32_t v1111; // w3
  UserEventExpeditionMaster_o *v1112; // x20
  int32_t v1113; // w2
  int32_t v1114; // w3
  EventExpeditionMaster_o *v1115; // x20
  int32_t v1116; // w2
  int32_t v1117; // w3
  EventExpeditionPieceMaster_o *v1118; // x20
  int32_t v1119; // w2
  int32_t v1120; // w3
  EventRecipeMaster_o *v1121; // x20
  int32_t v1122; // w2
  int32_t v1123; // w3
  EventRecipeGiftMaster_o *v1124; // x20
  int32_t v1125; // w2
  int32_t v1126; // w3
  UserEventFortificationMaster_o *v1127; // x20
  int32_t v1128; // w2
  int32_t v1129; // w3
  EventFortificationMaster_o *v1130; // x20
  int32_t v1131; // w2
  int32_t v1132; // w3
  EventFortificationDetailMaster_o *v1133; // x20
  int32_t v1134; // w2
  int32_t v1135; // w3
  EventFortificationSvtMaster_o *v1136; // x20
  int32_t v1137; // w2
  int32_t v1138; // w3
  UserServantVoicePlayedMaster_o *v1139; // x20
  int32_t v1140; // w2
  int32_t v1141; // w3
  UpdateProfileDialogInfoMaster_o *v1142; // x20
  int32_t v1143; // w2
  int32_t v1144; // w3
  SvtMaterialTdMaster_o *v1145; // x20
  int32_t v1146; // w2
  int32_t v1147; // w3
  BattleMasterImageMaster_o *v1148; // x20
  int32_t v1149; // w2
  int32_t v1150; // w3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1151; // x20
  int32_t v1152; // w2
  int32_t v1153; // w3
  UserEventRandomMissionMaster_o *v1154; // x20
  int32_t v1155; // w2
  int32_t v1156; // w3
  EventProgressValueMaster_o *v1157; // x20
  int32_t v1158; // w2
  int32_t v1159; // w3
  SvtMultiPortraitMaster_o *v1160; // x20
  int32_t v1161; // w2
  int32_t v1162; // w3
  EventRandomMissionMaster_o *v1163; // x20
  int32_t v1164; // w2
  int32_t v1165; // w3
  UserGachaHistoryMaster_o *v1166; // x20
  int32_t v1167; // w2
  int32_t v1168; // w3
  UserCoinRoomMaster_o *v1169; // x20
  int32_t v1170; // w2
  int32_t v1171; // w3
  EventBuddyPointMaster_o *v1172; // x20
  int32_t v1173; // w2
  int32_t v1174; // w3
  EventServantPointRankMaster_o *v1175; // x20
  int32_t v1176; // w2
  int32_t v1177; // w3
  UserEventServantPointMaster_o *v1178; // x20
  int32_t v1179; // w2
  int32_t v1180; // w3
  FieldMotionMaster_o *v1181; // x20
  int32_t v1182; // w2
  int32_t v1183; // w3
  UserDeleteReservationMaster_o *v1184; // x20
  int32_t v1185; // w2
  int32_t v1186; // w3
  ServantScriptMultipleMaster_o *v1187; // x20
  int32_t v1188; // w2
  int32_t v1189; // w3
  EquipAddMaster_o *v1190; // x20
  int32_t v1191; // w2
  int32_t v1192; // w3
  QuestReleaseOverwriteMaster_o *v1193; // x20
  int32_t v1194; // w2
  int32_t v1195; // w3
  UserEventAlloutBattleMaster_o *v1196; // x20
  int32_t v1197; // w2
  int32_t v1198; // w3
  QuestScriptMaterialNextMaster_o *v1199; // x20
  int32_t v1200; // w2
  int32_t v1201; // w3
  EventDiggingMaster_o *v1202; // x20
  int32_t v1203; // w2
  int32_t v1204; // w3
  EventDiggingBlockMaster_o *v1205; // x20
  int32_t v1206; // w2
  int32_t v1207; // w3
  EventDiggingRewardMaster_o *v1208; // x20
  int32_t v1209; // w2
  int32_t v1210; // w3
  UserEventDiggingMaster_o *v1211; // x20
  int32_t v1212; // w2
  int32_t v1213; // w3
  BattleMessageMaster_o *v1214; // x20
  int32_t v1215; // w2
  int32_t v1216; // w3
  BattleMessageGroupMaster_o *v1217; // x20
  int32_t v1218; // w2
  int32_t v1219; // w3
  UserNpcSvtRecordMaster_o *v1220; // x20
  int32_t v1221; // w2
  int32_t v1222; // w3
  BuffTypeDetailMaster_o *v1223; // x20
  int32_t v1224; // w2
  int32_t v1225; // w3
  WarBoardMessageMaster_o *v1226; // x20
  int32_t v1227; // w2
  int32_t v1228; // w3
  WarBoardPartySkillMaster_o *v1229; // x20
  int32_t v1230; // w2
  int32_t v1231; // w3
  WarBoardMessageScriptMaster_o *v1232; // x20
  int32_t v1233; // w2
  int32_t v1234; // w3
  WarQuestSelectionMaster_o *v1235; // x20
  int32_t v1236; // w2
  int32_t v1237; // w3
  WarBoardStageDetailMaster_o *v1238; // x20
  int32_t v1239; // w2
  int32_t v1240; // w3
  QuestScriptMaterialOverwriteMaster_o *v1241; // x20
  int32_t v1242; // w2
  int32_t v1243; // w3
  QuestScriptBranchMaterialMaster_o *v1244; // x20
  int32_t v1245; // w2
  int32_t v1246; // w3
  AdCheckPointMaster_o *v1247; // x20
  int32_t v1248; // w2
  int32_t v1249; // w3
  GiftDetailMaster_o *v1250; // x20
  int32_t v1251; // w2
  int32_t v1252; // w3
  CombineLimitGiftMaster_o *v1253; // x20
  int32_t v1254; // w2
  int32_t v1255; // w3
  EventCooltimeRewardMaster_o *v1256; // x20
  int32_t v1257; // w2
  int32_t v1258; // w3
  UserEventCooltimeRewardMaster_o *v1259; // x20
  int32_t v1260; // w2
  int32_t v1261; // w3
  ClassBoardBaseMaster_o *v1262; // x20
  int32_t v1263; // w2
  int32_t v1264; // w3
  ClassBoardLockMaster_o *v1265; // x20
  int32_t v1266; // w2
  int32_t v1267; // w3
  ClassBoardSquareMaster_o *v1268; // x20
  int32_t v1269; // w2
  int32_t v1270; // w3
  ClassBoardLineMaster_o *v1271; // x20
  int32_t v1272; // w2
  int32_t v1273; // w3
  UserClassBoardSquareMaster_o *v1274; // x20
  int32_t v1275; // w2
  int32_t v1276; // w3
  ServantCardAddMaster_o *v1277; // x20
  int32_t v1278; // w2
  int32_t v1279; // w3
  MapLayerMaster_o *v1280; // x20
  int32_t v1281; // w2
  int32_t v1282; // w3
  SpotLayerMaster_o *v1283; // x20
  int32_t v1284; // w2
  int32_t v1285; // w3
  MapGimmickLayerMaster_o *v1286; // x20
  int32_t v1287; // w2
  int32_t v1288; // w3
  EventDataLostBattleMaster_o *v1289; // x20
  int32_t v1290; // w2
  int32_t v1291; // w3
  EventDataLostBattleResetMaster_o *v1292; // x20
  int32_t v1293; // w2
  int32_t v1294; // w3
  UserEventDataLostMaster_o *v1295; // x20
  int32_t v1296; // w2
  int32_t v1297; // w3
  QuestHintMaster_o *v1298; // x20
  int32_t v1299; // w2
  int32_t v1300; // w3
  FuncTypeDetailMaster_o *v1301; // x20
  int32_t v1302; // w2
  int32_t v1303; // w3
  BuffConvertMaster_o *v1304; // x20
  int32_t v1305; // w2
  int32_t v1306; // w3
  SkillGroupMaster_o *v1307; // x20
  int32_t v1308; // w2
  int32_t v1309; // w3
  SkillGroupOverwriteMaster_o *v1310; // x20
  int32_t v1311; // w2
  int32_t v1312; // w3
  SkillIndividualityMaster_o *v1313; // x20
  int32_t v1314; // w2
  int32_t v1315; // w3
  RestrictionBaseMaster_o *v1316; // x20
  int32_t v1317; // w2
  int32_t v1318; // w3
  RestrictionSlotMaster_o *v1319; // x20
  int32_t v1320; // w2
  int32_t v1321; // w3
  RestrictionSlotDetailMaster_o *v1322; // x20
  int32_t v1323; // w2
  int32_t v1324; // w3
  RestrictionMessageMaster_o *v1325; // x20
  int32_t v1326; // w2
  int32_t v1327; // w3
  RestrictionWholeMaster_o *v1328; // x20
  int32_t v1329; // w2
  int32_t v1330; // w3
  FuncDispMaster_o *v1331; // x20
  int32_t v1332; // w2
  int32_t v1333; // w3
  ClassBoardCommandSpellMaster_o *v1334; // x20
  int32_t v1335; // w2
  int32_t v1336; // w3
  ClassBoardClassMaster_o *v1337; // x20
  int32_t v1338; // w2
  int32_t v1339; // w3
  EventCommandAssistMaster_o *v1340; // x20
  int32_t v1341; // w2
  int32_t v1342; // w3
  EventMissionGroupMaster_o *v1343; // x20
  int32_t v1344; // w2
  int32_t v1345; // w3
  CombineLimitReleaseMaster_o *v1346; // x20
  int32_t v1347; // w2
  int32_t v1348; // w3
  HeelPortraitMaster_o *v1349; // x20
  int32_t v1350; // w2
  int32_t v1351; // w3
  UserHeelPortraitMaster_o *v1352; // x20
  int32_t v1353; // w2
  int32_t v1354; // w3
  TreasureDeviceSequenceWeightMaster_o *v1355; // x20
  int32_t v1356; // w2
  int32_t v1357; // w3
  NpcServantFollowerIndividualityMaster_o *v1358; // x20
  int32_t v1359; // w2
  int32_t v1360; // w3
  GachaExtraGiftMaster_o *v1361; // x20
  int32_t v1362; // w2
  int32_t v1363; // w3
  EventMuralMaster_o *v1364; // x20
  int32_t v1365; // w2
  int32_t v1366; // w3
  ViewWaveEnemyMaster_o *v1367; // x20
  int32_t v1368; // w2
  int32_t v1369; // w3
  BlankEarthSpotNavimenuMaster_o *v1370; // x20
  int32_t v1371; // w2
  int32_t v1372; // w3
  BlankEarthGimmickMaster_o *v1373; // x20
  int32_t v1374; // w2
  int32_t v1375; // w3
  TerminalOverwriteMaster_o *v1376; // x20
  int32_t v1377; // w2
  int32_t v1378; // w3
  UserExchangeSvtMaster_o *v1379; // x20
  int32_t v1380; // w2
  int32_t v1381; // w3
  WarBoardCommonReleaseMaster_o *v1382; // x20
  int32_t v1383; // w2
  int32_t v1384; // w3
  WarBoardEventMaster_o *v1385; // x20
  int32_t v1386; // w2
  int32_t v1387; // w3
  WarBoardEventScriptMaster_o *v1388; // x20
  int32_t v1389; // w2
  int32_t v1390; // w3
  WarBoardStageBossMaster_o *v1391; // x20
  int32_t v1392; // w2
  int32_t v1393; // w3
  WarBoardSquareIndexGroupMaster_o *v1394; // x20
  int32_t v1395; // w2
  int32_t v1396; // w3
  WarBoardActionTrendGroupMaster_o *v1397; // x20
  int32_t v1398; // w2
  int32_t v1399; // w3
  WarBoardRatingOffsetGroupMaster_o *v1400; // x20
  int32_t v1401; // w2
  int32_t v1402; // w3
  WarBoardReinforcementsMaster_o *v1403; // x20
  int32_t v1404; // w2
  int32_t v1405; // w3
  WarBoardStageReinforcementsMaster_o *v1406; // x20
  int32_t v1407; // w2
  int32_t v1408; // w3
  WarBoardFutureActionTrendMaster_o *v1409; // x20
  int32_t v1410; // w2
  int32_t v1411; // w3
  ServantProfilePushMaster_o *v1412; // x20
  int32_t v1413; // w2
  int32_t v1414; // w3
  MapGimmickPathMaster_o *v1415; // x20
  int32_t v1416; // w2
  int32_t v1417; // w3
  MapGimmickPathReleaseMaster_o *v1418; // x20
  int32_t v1419; // w2
  int32_t v1420; // w3
  ServantOverwriteMaster_o *v1421; // x20
  int32_t v1422; // w2
  int32_t v1423; // w3
  IndividualityPolicyMaster_o *v1424; // x20
  int32_t v1425; // w2
  int32_t v1426; // w3
  IndividualityPersonalityMaster_o *v1427; // x20
  int32_t v1428; // w2
  int32_t v1429; // w3
  AttriMaster_o *v1430; // x20
  int32_t v1431; // w2
  int32_t v1432; // w3
  ServantVoicePatternMaster_o *v1433; // x20
  int32_t v1434; // w2
  int32_t v1435; // w3
  UserGameCommonMaster_o *v1436; // x20
  int32_t v1437; // w2
  int32_t v1438; // w3
  ServantPhotoMaster_o *v1439; // x20
  int32_t v1440; // w2
  int32_t v1441; // w3
  MasterPhotoMaster_o *v1442; // x20
  int32_t v1443; // w2
  int32_t v1444; // w3
  WarMessageMaster_o *v1445; // x20
  int32_t v1446; // w2
  int32_t v1447; // w3
  QuestAutoOrganizationAdjustMaster_o *v1448; // x20
  int32_t v1449; // w2
  int32_t v1450; // w3
  ExcludeMotionMaster_o *v1451; // x20
  int32_t v1452; // w2
  int32_t v1453; // w3
  UserInterruptionQuestMaster_o *v1454; // x20
  int32_t v1455; // w2
  int32_t v1456; // w3
  ServantTransformMaster_o *v1457; // x20
  int32_t v1458; // w2
  int32_t v1459; // w3
  MapUpdateScheduleMaster_o *v1460; // x20
  int32_t v1461; // w2
  int32_t v1462; // w3
  QuestPhasePresentMaster_o *v1463; // x20
  int32_t v1464; // w2
  int32_t v1465; // w3
  UserAccountLinkageMaster_o *v1466; // x20
  int32_t v1467; // w2
  int32_t v1468; // w3
  MissionNaviTransitionMaster_o *v1469; // x20
  int32_t v1470; // w2
  int32_t v1471; // w3
  MissionNaviQuestMaster_o *v1472; // x20
  int32_t v1473; // w2
  int32_t v1474; // w3
  EventTradeGoodsMaster_o *v1475; // x20
  int32_t v1476; // w2
  int32_t v1477; // w3
  EventTradeStoreMaster_o *v1478; // x20
  int32_t v1479; // w2
  int32_t v1480; // w3
  EventTradePickupMaster_o *v1481; // x20
  int32_t v1482; // w2
  int32_t v1483; // w3
  UserEventTradeMaster_o *v1484; // x20
  int32_t v1485; // w2
  int32_t v1486; // w3
  PaymentHistoryMaster_o *v1487; // x20
  int32_t v1488; // w2
  int32_t v1489; // w3
  UserExternalPaymentStoneMaster_o *v1490; // x20
  int32_t v1491; // w2
  int32_t v1492; // w3
  QuestPhaseIndividualityMaster_o *v1493; // x20
  int32_t v1494; // w2
  int32_t v1495; // w3
  ViewGachaFeaturedServantMaster_o *v1496; // x20
  int32_t v1497; // w2
  int32_t v1498; // w3
  UserGachaPickupCollateralMaster_o *v1499; // x20
  int32_t v1500; // w2
  int32_t v1501; // w3
  GachaPickupCollateralMaster_o *v1502; // x20
  int32_t v1503; // w2
  int32_t v1504; // w3
  GachaPickupCollateralGroupMaster_o *v1505; // x20
  int32_t v1506; // w2
  int32_t v1507; // w3
  BattlePointMaster_o *v1508; // x20
  int32_t v1509; // w2
  int32_t v1510; // w3
  BattlePointPhaseMaster_o *v1511; // x20
  int32_t v1512; // w2
  int32_t v1513; // w3
  ServantBattlePointMaster_o *v1514; // x20
  int32_t v1515; // w2
  int32_t v1516; // w3
  EffectMovieMaster_o *v1517; // x20
  int32_t v1518; // w2
  int32_t v1519; // w3
  PaymentLimitMaster_o *v1520; // x20
  int32_t v1521; // w2
  int32_t v1522; // w3
  UserPaymentLimitMaster_o *v1523; // x20
  int32_t v1524; // w2
  int32_t v1525; // w3
  RoadmapMaster_o *v1526; // x20
  int32_t v1527; // w2
  int32_t v1528; // w3
  UserRecommendSupportMaster_o *v1529; // x20
  int32_t v1530; // w2
  int32_t v1531; // w3
  RecommendSupportQuestMaster_o *v1532; // x20
  int32_t v1533; // w2
  int32_t v1534; // w3
  RecommendAdviceMessageMaster_o *v1535; // x20
  int32_t v1536; // w2
  int32_t v1537; // w3
  UserRecommendFollowerMaster_o *v1538; // x20
  int32_t v1539; // w2
  int32_t v1540; // w3
  ItemDropEfficiencyMaster_o *v1541; // x20
  int32_t v1542; // w2
  int32_t v1543; // w3
  BlankEarthGimmickAddMaster_o *v1544; // x20
  int32_t v1545; // w2
  int32_t v1546; // w3
  WarReleaseMaster_o *v1547; // x20
  int32_t v1548; // w2
  int32_t v1549; // w3
  SelectBonusBaseMaster_o *v1550; // x20
  int32_t v1551; // w2
  int32_t v1552; // w3
  SelectBonusMaster_o *v1553; // x20
  int32_t v1554; // w2
  int32_t v1555; // w3
  MyroomServantSpecialImageMaster_o *v1556; // x20
  int32_t v1557; // w2
  int32_t v1558; // w3
  __int64 v1560; // x0

  if ( (byte_4A5ACA3 & 1) == 0 )
  {
    sub_1B885B0(&AccessaryMaster_TypeInfo);
    sub_1B885B0(&AdCheckPointMaster_TypeInfo);
    sub_1B885B0(&AiActMaster_TypeInfo);
    sub_1B885B0(&AiFieldMaster_TypeInfo);
    sub_1B885B0(&AiMaster_TypeInfo);
    sub_1B885B0(&AreaMaster_TypeInfo);
    sub_1B885B0(&AssistMaster_TypeInfo);
    sub_1B885B0(&AttriMaster_TypeInfo);
    sub_1B885B0(&AttriRelationMaster_TypeInfo);
    sub_1B885B0(&AuraEffectMaster_TypeInfo);
    sub_1B885B0(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1B885B0(&BankShopMaster_TypeInfo);
    sub_1B885B0(&BannerAddMaster_TypeInfo);
    sub_1B885B0(&BannerMaster_TypeInfo);
    sub_1B885B0(&BattleBgMaster_TypeInfo);
    sub_1B885B0(&BattleMasterImageMaster_TypeInfo);
    sub_1B885B0(&BattleMaster_TypeInfo);
    sub_1B885B0(&BattleMessageGroupMaster_TypeInfo);
    sub_1B885B0(&BattleMessageMaster_TypeInfo);
    sub_1B885B0(&BattlePointMaster_TypeInfo);
    sub_1B885B0(&BattlePointPhaseMaster_TypeInfo);
    sub_1B885B0(&BeforeBirthDayMaster_TypeInfo);
    sub_1B885B0(&BgmMaster_TypeInfo);
    sub_1B885B0(&BgmReleaseMaster_TypeInfo);
    sub_1B885B0(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1B885B0(&BlankEarthGimmickMaster_TypeInfo);
    sub_1B885B0(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1B885B0(&BlankEarthSpotMaster_TypeInfo);
    sub_1B885B0(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1B885B0(&BoardMessageMaster_TypeInfo);
    sub_1B885B0(&BoardMessageReleaseMaster_TypeInfo);
    sub_1B885B0(&BoostMaster_TypeInfo);
    sub_1B885B0(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1B885B0(&BoxGachaBaseMaster_TypeInfo);
    sub_1B885B0(&BoxGachaHistoryMaster_TypeInfo);
    sub_1B885B0(&BoxGachaMaster_TypeInfo);
    sub_1B885B0(&BoxGachaTalkMaster_TypeInfo);
    sub_1B885B0(&BuffConvertMaster_TypeInfo);
    sub_1B885B0(&BuffMaster_TypeInfo);
    sub_1B885B0(&BuffTypeDetailMaster_TypeInfo);
    sub_1B885B0(&CampaignInfoMaster_TypeInfo);
    sub_1B885B0(&CardMaster_TypeInfo);
    sub_1B885B0(&ClassBoardBaseMaster_TypeInfo);
    sub_1B885B0(&ClassBoardClassMaster_TypeInfo);
    sub_1B885B0(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1B885B0(&ClassBoardLineMaster_TypeInfo);
    sub_1B885B0(&ClassBoardLockMaster_TypeInfo);
    sub_1B885B0(&ClassBoardSquareMaster_TypeInfo);
    sub_1B885B0(&ClassRelationMaster_TypeInfo);
    sub_1B885B0(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1B885B0(&ClosedMessageMaster_TypeInfo);
    sub_1B885B0(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1B885B0(&CombineCostumeMaster_TypeInfo);
    sub_1B885B0(&CombineLimitGiftMaster_TypeInfo);
    sub_1B885B0(&CombineLimitMaster_TypeInfo);
    sub_1B885B0(&CombineLimitReleaseMaster_TypeInfo);
    sub_1B885B0(&CombineMaster_TypeInfo);
    sub_1B885B0(&CombineMaterialMaster_TypeInfo);
    sub_1B885B0(&CombineQpMaster_TypeInfo);
    sub_1B885B0(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1B885B0(&CombineSkillMaster_TypeInfo);
    sub_1B885B0(&CombineTdMaster_TypeInfo);
    sub_1B885B0(&CommandCardRankParamMaster_TypeInfo);
    sub_1B885B0(&CommandCodeCommentMaster_TypeInfo);
    sub_1B885B0(&CommandCodeMaster_TypeInfo);
    sub_1B885B0(&CommandCodeSkillMaster_TypeInfo);
    sub_1B885B0(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1B885B0(&CommandSpellMaster_TypeInfo);
    sub_1B885B0(&CommonConsumeMaster_TypeInfo);
    sub_1B885B0(&CommonReleaseMaster_TypeInfo);
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    sub_1B885B0(&CompleteMissionMaster_TypeInfo);
    sub_1B885B0(&ConstantLongMaster_TypeInfo);
    sub_1B885B0(&ConstantMaster_TypeInfo);
    sub_1B885B0(&ConstantStrMaster_TypeInfo);
    sub_1B885B0(&CvMaster_TypeInfo);
    sub_1B885B0(&DataMasterBase___TypeInfo);
    sub_1B885B0(&DialogMessageMaster_TypeInfo);
    sub_1B885B0(&EffectMaster_TypeInfo);
    sub_1B885B0(&EffectMovieMaster_TypeInfo);
    sub_1B885B0(&EnemyMstBattleMaster_TypeInfo);
    sub_1B885B0(&EnemyMstMaster_TypeInfo);
    sub_1B885B0(&EquipAddMaster_TypeInfo);
    sub_1B885B0(&EquipExpMaster_TypeInfo);
    sub_1B885B0(&EquipImageMaster_TypeInfo);
    sub_1B885B0(&EquipMaster_TypeInfo);
    sub_1B885B0(&EquipSkillMaster_TypeInfo);
    sub_1B885B0(&EventAddMaster_TypeInfo);
    sub_1B885B0(&EventBoardGameCellMaster_TypeInfo);
    sub_1B885B0(&EventBoardGameTokenMaster_TypeInfo);
    sub_1B885B0(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1B885B0(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1B885B0(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1B885B0(&EventBonusFilterMaster_TypeInfo);
    sub_1B885B0(&EventBoostItemUsedMaster_TypeInfo);
    sub_1B885B0(&EventBossStatusUiMaster_TypeInfo);
    sub_1B885B0(&EventBuddyPointMaster_TypeInfo);
    sub_1B885B0(&EventBulletinBoardMaster_TypeInfo);
    sub_1B885B0(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1B885B0(&EventCampaignMaster_TypeInfo);
    sub_1B885B0(&EventCampaignReleaseMaster_TypeInfo);
    sub_1B885B0(&EventCombineCostumeMaster_TypeInfo);
    sub_1B885B0(&EventCombineMaster_TypeInfo);
    sub_1B885B0(&EventCommandAssistMaster_TypeInfo);
    sub_1B885B0(&EventConquestRewardMaster_TypeInfo);
    sub_1B885B0(&EventCooltimeRewardMaster_TypeInfo);
    sub_1B885B0(&EventDataLostBattleMaster_TypeInfo);
    sub_1B885B0(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1B885B0(&EventDetailMaster_TypeInfo);
    sub_1B885B0(&EventDiggingBlockMaster_TypeInfo);
    sub_1B885B0(&EventDiggingMaster_TypeInfo);
    sub_1B885B0(&EventDiggingRewardMaster_TypeInfo);
    sub_1B885B0(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1B885B0(&EventExpeditionMaster_TypeInfo);
    sub_1B885B0(&EventExpeditionPieceMaster_TypeInfo);
    sub_1B885B0(&EventFactoryMaster_TypeInfo);
    sub_1B885B0(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1B885B0(&EventFilterMaster_TypeInfo);
    sub_1B885B0(&EventFortificationDetailMaster_TypeInfo);
    sub_1B885B0(&EventFortificationMaster_TypeInfo);
    sub_1B885B0(&EventFortificationSvtMaster_TypeInfo);
    sub_1B885B0(&EventGroupMaster_TypeInfo);
    sub_1B885B0(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1B885B0(&EventItemDisplayMaster_TypeInfo);
    sub_1B885B0(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1B885B0(&EventLocationCampaignMaster_TypeInfo);
    sub_1B885B0(&EventMaster_TypeInfo);
    sub_1B885B0(&EventMissionActionAddMaster_TypeInfo);
    sub_1B885B0(&EventMissionActionMaster_TypeInfo);
    sub_1B885B0(&EventMissionAddMaster_TypeInfo);
    sub_1B885B0(&EventMissionCondDetailMaster_TypeInfo);
    sub_1B885B0(&EventMissionConditionMaster_TypeInfo);
    sub_1B885B0(&EventMissionGroupMaster_TypeInfo);
    sub_1B885B0(&EventMissionMaster_TypeInfo);
    sub_1B885B0(&EventMuralMaster_TypeInfo);
    sub_1B885B0(&EventPanelMapDetailMaster_TypeInfo);
    sub_1B885B0(&EventPanelMapMaster_TypeInfo);
    sub_1B885B0(&EventPanelScanMaster_TypeInfo);
    sub_1B885B0(&EventPanelSpotMaster_TypeInfo);
    sub_1B885B0(&EventPointActivityMaster_TypeInfo);
    sub_1B885B0(&EventPointBuffMaster_TypeInfo);
    sub_1B885B0(&EventPointGroupAddMaster_TypeInfo);
    sub_1B885B0(&EventPointGroupMaster_TypeInfo);
    sub_1B885B0(&EventPointMaster_TypeInfo);
    sub_1B885B0(&EventPointUpperMaster_TypeInfo);
    sub_1B885B0(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1B885B0(&EventProgressValueMaster_TypeInfo);
    sub_1B885B0(&EventQuestCooltimeMaster_TypeInfo);
    sub_1B885B0(&EventQuestMaster_TypeInfo);
    sub_1B885B0(&EventRaceMaster_TypeInfo);
    sub_1B885B0(&EventRaceResultMaster_TypeInfo);
    sub_1B885B0(&EventRaidMaster_TypeInfo);
    sub_1B885B0(&EventRandomMissionMaster_TypeInfo);
    sub_1B885B0(&EventRecipeGiftMaster_TypeInfo);
    sub_1B885B0(&EventRecipeMaster_TypeInfo);
    sub_1B885B0(&EventRewardBgMaster_TypeInfo);
    sub_1B885B0(&EventRewardExtraMaster_TypeInfo);
    sub_1B885B0(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1B885B0(&EventRewardMaster_TypeInfo);
    sub_1B885B0(&EventRewardSceneMaster_TypeInfo);
    sub_1B885B0(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1B885B0(&EventRewardSetMaster_TypeInfo);
    sub_1B885B0(&EventScriptMaster_TypeInfo);
    sub_1B885B0(&EventScriptReleaseMaster_TypeInfo);
    sub_1B885B0(&EventServantFatigueMaster_TypeInfo);
    sub_1B885B0(&EventServantMaster_TypeInfo);
    sub_1B885B0(&EventServantPointRankMaster_TypeInfo);
    sub_1B885B0(&EventStatusMaster_TypeInfo);
    sub_1B885B0(&EventStatusQuestMaster_TypeInfo);
    sub_1B885B0(&EventSuperBossMaster_TypeInfo);
    sub_1B885B0(&EventTowerMaster_TypeInfo);
    sub_1B885B0(&EventTowerRewardMaster_TypeInfo);
    sub_1B885B0(&EventTradeGoodsMaster_TypeInfo);
    sub_1B885B0(&EventTradePickupMaster_TypeInfo);
    sub_1B885B0(&EventTradeStoreMaster_TypeInfo);
    sub_1B885B0(&EventTutorialCondMaster_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&EventUiMaster_TypeInfo);
    sub_1B885B0(&EventUiReleaseMaster_TypeInfo);
    sub_1B885B0(&EventUiValueMaster_TypeInfo);
    sub_1B885B0(&EventVoicePlayMaster_TypeInfo);
    sub_1B885B0(&ExcludeMotionMaster_TypeInfo);
    sub_1B885B0(&FieldMotionMaster_TypeInfo);
    sub_1B885B0(&FriendshipMaster_TypeInfo);
    sub_1B885B0(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1B885B0(&FuncDispMaster_TypeInfo);
    sub_1B885B0(&FuncTypeDetailMaster_TypeInfo);
    sub_1B885B0(&FunctionCategoryMaster_TypeInfo);
    sub_1B885B0(&FunctionGroupMaster_TypeInfo);
    sub_1B885B0(&FunctionMaster_TypeInfo);
    sub_1B885B0(&GachaAppendMaster_TypeInfo);
    sub_1B885B0(&GachaBehaviorMaster_TypeInfo);
    sub_1B885B0(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1B885B0(&GachaBonusSelectMaster_TypeInfo);
    sub_1B885B0(&GachaDetailMaster_TypeInfo);
    sub_1B885B0(&GachaExtraGiftMaster_TypeInfo);
    sub_1B885B0(&GachaGroupMaster_TypeInfo);
    sub_1B885B0(&GachaImageMaster_TypeInfo);
    sub_1B885B0(&GachaMaster_TypeInfo);
    sub_1B885B0(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1B885B0(&GachaPickupCollateralMaster_TypeInfo);
    sub_1B885B0(&GachaReleaseMaster_TypeInfo);
    sub_1B885B0(&GachaStoryAdjustMaster_TypeInfo);
    sub_1B885B0(&GachaSubMaster_TypeInfo);
    sub_1B885B0(&GachaTicketMaster_TypeInfo);
    sub_1B885B0(&GiftAddMaster_TypeInfo);
    sub_1B885B0(&GiftDetailMaster_TypeInfo);
    sub_1B885B0(&GiftMaster_TypeInfo);
    sub_1B885B0(&GuideMaster_TypeInfo);
    sub_1B885B0(&HeelPortraitMaster_TypeInfo);
    sub_1B885B0(&IllustratorMaster_TypeInfo);
    sub_1B885B0(&IndividualityPersonalityMaster_TypeInfo);
    sub_1B885B0(&IndividualityPolicyMaster_TypeInfo);
    sub_1B885B0(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1B885B0(&ItemMaster_TypeInfo);
    sub_1B885B0(&ItemSelectMaster_TypeInfo);
    sub_1B885B0(&LoginQuestMaster_TypeInfo);
    sub_1B885B0(&MapButtonMaster_TypeInfo);
    sub_1B885B0(&MapCondMaster_TypeInfo);
    sub_1B885B0(&MapGimmickLayerMaster_TypeInfo);
    sub_1B885B0(&MapGimmickMaster_TypeInfo);
    sub_1B885B0(&MapGimmickPathMaster_TypeInfo);
    sub_1B885B0(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1B885B0(&MapGimmickReleaseMaster_TypeInfo);
    sub_1B885B0(&MapLayerMaster_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    sub_1B885B0(&MapUpdateScheduleMaster_TypeInfo);
    sub_1B885B0(&MasterPhotoMaster_TypeInfo);
    sub_1B885B0(&MaterialFolderMaster_TypeInfo);
    sub_1B885B0(&MissionNaviQuestMaster_TypeInfo);
    sub_1B885B0(&MissionNaviTransitionMaster_TypeInfo);
    sub_1B885B0(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1B885B0(&MstMissionMaster_TypeInfo);
    sub_1B885B0(&MyRoomAddMaster_TypeInfo);
    sub_1B885B0(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1B885B0(&NewsMaster_TypeInfo);
    sub_1B885B0(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1B885B0(&NpcFollowerMaster_TypeInfo);
    sub_1B885B0(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1B885B0(&NpcServantEquipMaster_TypeInfo);
    sub_1B885B0(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1B885B0(&NpcServantFollowerMaster_TypeInfo);
    sub_1B885B0(&OpeningMovieMaster_TypeInfo);
    sub_1B885B0(&OtherUserGameMaster_TypeInfo);
    sub_1B885B0(&PartialMaintenanceMaster_TypeInfo);
    sub_1B885B0(&PaymentHistoryMaster_TypeInfo);
    sub_1B885B0(&PaymentLimitMaster_TypeInfo);
    sub_1B885B0(&PickupUserFollowerMaster_TypeInfo);
    sub_1B885B0(&PrivilegeMaster_TypeInfo);
    sub_1B885B0(&QuestAddMaster_TypeInfo);
    sub_1B885B0(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1B885B0(&QuestBehaviorMaster_TypeInfo);
    sub_1B885B0(&QuestConsumeItemMaster_TypeInfo);
    sub_1B885B0(&QuestDateRangeMaster_TypeInfo);
    sub_1B885B0(&QuestGroupMaster_TypeInfo);
    sub_1B885B0(&QuestHintMaster_TypeInfo);
    sub_1B885B0(&QuestMaster_TypeInfo);
    sub_1B885B0(&QuestMessageMaster_TypeInfo);
    sub_1B885B0(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1B885B0(&QuestPhaseDetailMaster_TypeInfo);
    sub_1B885B0(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    sub_1B885B0(&QuestPhasePresentMaster_TypeInfo);
    sub_1B885B0(&QuestPickupMaster_TypeInfo);
    sub_1B885B0(&QuestRacePointMaster_TypeInfo);
    sub_1B885B0(&QuestRandomGroupMaster_TypeInfo);
    sub_1B885B0(&QuestReleaseMaster_TypeInfo);
    sub_1B885B0(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1B885B0(&QuestResetMaster_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1B885B0(&QuestRestrictionMaster_TypeInfo);
    sub_1B885B0(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1B885B0(&QuestScriptMaster_TypeInfo);
    sub_1B885B0(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1B885B0(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1B885B0(&QuestScriptReleaseMaster_TypeInfo);
    sub_1B885B0(&QuestSpotReleaseMaster_TypeInfo);
    sub_1B885B0(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestMaster_TypeInfo);
    sub_1B885B0(&RecoverMaster_TypeInfo);
    sub_1B885B0(&ReprintStageMaster_TypeInfo);
    sub_1B885B0(&RestrictionBaseMaster_TypeInfo);
    sub_1B885B0(&RestrictionMaster_TypeInfo);
    sub_1B885B0(&RestrictionMessageMaster_TypeInfo);
    sub_1B885B0(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1B885B0(&RestrictionSlotMaster_TypeInfo);
    sub_1B885B0(&RestrictionWholeMaster_TypeInfo);
    sub_1B885B0(&RoadmapMaster_TypeInfo);
    sub_1B885B0(&SelectBonusBaseMaster_TypeInfo);
    sub_1B885B0(&SelectBonusMaster_TypeInfo);
    sub_1B885B0(&ServantAddMaster_TypeInfo);
    sub_1B885B0(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1B885B0(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1B885B0(&ServantBattlePointMaster_TypeInfo);
    sub_1B885B0(&ServantCardAddMaster_TypeInfo);
    sub_1B885B0(&ServantCardMaster_TypeInfo);
    sub_1B885B0(&ServantChangeMaster_TypeInfo);
    sub_1B885B0(&ServantClassMaster_TypeInfo);
    sub_1B885B0(&ServantCollectionMaster_TypeInfo);
    sub_1B885B0(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1B885B0(&ServantCommentAddMaster_TypeInfo);
    sub_1B885B0(&ServantCommentMaster_TypeInfo);
    sub_1B885B0(&ServantCostumeMaster_TypeInfo);
    sub_1B885B0(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1B885B0(&ServantExceedMaster_TypeInfo);
    sub_1B885B0(&ServantExpMaster_TypeInfo);
    sub_1B885B0(&ServantFilterMaster_TypeInfo);
    sub_1B885B0(&ServantFlagMaster_TypeInfo);
    sub_1B885B0(&ServantFlagReleaseMaster_TypeInfo);
    sub_1B885B0(&ServantGroupMaster_TypeInfo);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    sub_1B885B0(&ServantLimitAddMaster_TypeInfo);
    sub_1B885B0(&ServantLimitImageMaster_TypeInfo);
    sub_1B885B0(&ServantLimitMaster_TypeInfo);
    sub_1B885B0(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1B885B0(&ServantLvDetailMaster_TypeInfo);
    sub_1B885B0(&ServantMaster_TypeInfo);
    sub_1B885B0(&ServantMaterialFolderMaster_TypeInfo);
    sub_1B885B0(&ServantOverwriteMaster_TypeInfo);
    sub_1B885B0(&ServantPassiveSkillMaster_TypeInfo);
    sub_1B885B0(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1B885B0(&ServantPhotoMaster_TypeInfo);
    sub_1B885B0(&ServantProfileMaster_TypeInfo);
    sub_1B885B0(&ServantProfilePushMaster_TypeInfo);
    sub_1B885B0(&ServantRarityMaster_TypeInfo);
    sub_1B885B0(&ServantScriptAddMaster_TypeInfo);
    sub_1B885B0(&ServantScriptMaster_TypeInfo);
    sub_1B885B0(&ServantScriptMultipleMaster_TypeInfo);
    sub_1B885B0(&ServantSkillMaster_TypeInfo);
    sub_1B885B0(&ServantSkillReleaseMaster_TypeInfo);
    sub_1B885B0(&ServantTransformMaster_TypeInfo);
    sub_1B885B0(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1B885B0(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1B885B0(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1B885B0(&ServantTreasureDvcMaster_TypeInfo);
    sub_1B885B0(&ServantVoiceMaster_TypeInfo);
    sub_1B885B0(&ServantVoicePatternMaster_TypeInfo);
    sub_1B885B0(&ServantVoiceRelationMaster_TypeInfo);
    sub_1B885B0(&SetItemMaster_TypeInfo);
    sub_1B885B0(&ShopActionMaster_TypeInfo);
    sub_1B885B0(&ShopDetailMaster_TypeInfo);
    sub_1B885B0(&ShopGroupMaster_TypeInfo);
    sub_1B885B0(&ShopMaster_TypeInfo);
    sub_1B885B0(&ShopReleaseMaster_TypeInfo);
    sub_1B885B0(&ShopScriptMaster_TypeInfo);
    sub_1B885B0(&SkillAddMaster_TypeInfo);
    sub_1B885B0(&SkillDetailMaster_TypeInfo);
    sub_1B885B0(&SkillGroupMaster_TypeInfo);
    sub_1B885B0(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1B885B0(&SkillIndividualityMaster_TypeInfo);
    sub_1B885B0(&SkillLvMaster_TypeInfo);
    sub_1B885B0(&SkillMaster_TypeInfo);
    sub_1B885B0(&SpotAddMaster_TypeInfo);
    sub_1B885B0(&SpotImageMaster_TypeInfo);
    sub_1B885B0(&SpotLayerMaster_TypeInfo);
    sub_1B885B0(&SpotMaster_TypeInfo);
    sub_1B885B0(&SpotPathMaster_TypeInfo);
    sub_1B885B0(&SpotRoadMaster_TypeInfo);
    sub_1B885B0(&StageMaster_TypeInfo);
    sub_1B885B0(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1B885B0(&StoneShopMaster_TypeInfo);
    sub_1B885B0(&SubEquipMaster_TypeInfo);
    sub_1B885B0(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1B885B0(&SvtCoinMaster_TypeInfo);
    sub_1B885B0(&SvtMaterialTdMaster_TypeInfo);
    sub_1B885B0(&SvtMultiPortraitMaster_TypeInfo);
    sub_1B885B0(&TblFriendMaster_TypeInfo);
    sub_1B885B0(&TblUserMaster_TypeInfo);
    sub_1B885B0(&TelopMaster_TypeInfo);
    sub_1B885B0(&TerminalOverwriteMaster_TypeInfo);
    sub_1B885B0(&TipsBattleMaster_TypeInfo);
    sub_1B885B0(&TotalBoxGachaMaster_TypeInfo);
    sub_1B885B0(&TotalEventPointMaster_TypeInfo);
    sub_1B885B0(&TotalEventRaceMaster_TypeInfo);
    sub_1B885B0(&TotalEventRaidMaster_TypeInfo);
    sub_1B885B0(&TotalLoginMaster_TypeInfo);
    sub_1B885B0(&TreasureBoxGiftMaster_TypeInfo);
    sub_1B885B0(&TreasureBoxMaster_TypeInfo);
    sub_1B885B0(&TreasureBoxTalkMaster_TypeInfo);
    sub_1B885B0(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1B885B0(&TreasureDvcDetailMaster_TypeInfo);
    sub_1B885B0(&TreasureDvcLvMaster_TypeInfo);
    sub_1B885B0(&TreasureDvcMaster_TypeInfo);
    sub_1B885B0(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1B885B0(&UserAccessaryMaster_TypeInfo);
    sub_1B885B0(&UserAccountLinkageMaster_TypeInfo);
    sub_1B885B0(&UserBlacklistMaster_TypeInfo);
    sub_1B885B0(&UserBoxGachaMaster_TypeInfo);
    sub_1B885B0(&UserClassBoardSquareMaster_TypeInfo);
    sub_1B885B0(&UserCoinRoomMaster_TypeInfo);
    sub_1B885B0(&UserCombineExpMaster_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1B885B0(&UserCommandCodeMaster_TypeInfo);
    sub_1B885B0(&UserContinueMaster_TypeInfo);
    sub_1B885B0(&UserDeckMaster_TypeInfo);
    sub_1B885B0(&UserDeleteReservationMaster_TypeInfo);
    sub_1B885B0(&UserEquipMaster_TypeInfo);
    sub_1B885B0(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1B885B0(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1B885B0(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1B885B0(&UserEventDataLostMaster_TypeInfo);
    sub_1B885B0(&UserEventDeckMaster_TypeInfo);
    sub_1B885B0(&UserEventDiggingMaster_TypeInfo);
    sub_1B885B0(&UserEventExpeditionMaster_TypeInfo);
    sub_1B885B0(&UserEventFortificationMaster_TypeInfo);
    sub_1B885B0(&UserEventMapMaster_TypeInfo);
    sub_1B885B0(&UserEventMaster_TypeInfo);
    sub_1B885B0(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1B885B0(&UserEventMissionFixMaster_TypeInfo);
    sub_1B885B0(&UserEventMissionMaster_TypeInfo);
    sub_1B885B0(&UserEventPointMaster_TypeInfo);
    sub_1B885B0(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1B885B0(&UserEventRaceMaster_TypeInfo);
    sub_1B885B0(&UserEventRaidMaster_TypeInfo);
    sub_1B885B0(&UserEventRandomMissionMaster_TypeInfo);
    sub_1B885B0(&UserEventServantFatigueMaster_TypeInfo);
    sub_1B885B0(&UserEventServantPointMaster_TypeInfo);
    sub_1B885B0(&UserEventSpotMaster_TypeInfo);
    sub_1B885B0(&UserEventTradeMaster_TypeInfo);
    sub_1B885B0(&UserExchangeSvtMaster_TypeInfo);
    sub_1B885B0(&UserExpMaster_TypeInfo);
    sub_1B885B0(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1B885B0(&UserFollowMaster_TypeInfo);
    sub_1B885B0(&UserFollowerMaster_TypeInfo);
    sub_1B885B0(&UserFormationMaster_TypeInfo);
    sub_1B885B0(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1B885B0(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1B885B0(&UserGachaDrawLogMaster_TypeInfo);
    sub_1B885B0(&UserGachaExtraCountMaster_TypeInfo);
    sub_1B885B0(&UserGachaHistoryMaster_TypeInfo);
    sub_1B885B0(&UserGachaMaster_TypeInfo);
    sub_1B885B0(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1B885B0(&UserGameCommonMaster_TypeInfo);
    sub_1B885B0(&UserGameMaster_TypeInfo);
    sub_1B885B0(&UserHeelPortraitMaster_TypeInfo);
    sub_1B885B0(&UserInterruptionQuestMaster_TypeInfo);
    sub_1B885B0(&UserItemMaster_TypeInfo);
    sub_1B885B0(&UserLoginMaster_TypeInfo);
    sub_1B885B0(&UserMaster_TypeInfo);
    sub_1B885B0(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1B885B0(&UserPaymentLimitMaster_TypeInfo);
    sub_1B885B0(&UserPresentBoxMaster_TypeInfo);
    sub_1B885B0(&UserPresentHistoryMaster_TypeInfo);
    sub_1B885B0(&UserPrivilegeMaster_TypeInfo);
    sub_1B885B0(&UserQuestInfoMaster_TypeInfo);
    sub_1B885B0(&UserQuestMaster_TypeInfo);
    sub_1B885B0(&UserQuestRecordMaster_TypeInfo);
    sub_1B885B0(&UserQuestRouteMaster_TypeInfo);
    sub_1B885B0(&UserRecommendFollowerMaster_TypeInfo);
    sub_1B885B0(&UserRecommendSupportMaster_TypeInfo);
    sub_1B885B0(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1B885B0(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1B885B0(&UserServantCollectionMaster_TypeInfo);
    sub_1B885B0(&UserServantCommandCardMaster_TypeInfo);
    sub_1B885B0(&UserServantCommandCodeMaster_TypeInfo);
    sub_1B885B0(&UserServantLeaderMaster_TypeInfo);
    sub_1B885B0(&UserServantMaster_TypeInfo);
    sub_1B885B0(&UserServantStorageMaster_TypeInfo);
    sub_1B885B0(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1B885B0(&UserShopMaster_TypeInfo);
    sub_1B885B0(&UserSubEquipMaster_TypeInfo);
    sub_1B885B0(&UserSuperBossMaster_TypeInfo);
    sub_1B885B0(&UserSupportDeckMaster_TypeInfo);
    sub_1B885B0(&UserSvtCoinMaster_TypeInfo);
    sub_1B885B0(&ViewEnemyMaster_TypeInfo);
    sub_1B885B0(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1B885B0(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1B885B0(&ViewQuestInfoMaster_TypeInfo);
    sub_1B885B0(&ViewWaveEnemyMaster_TypeInfo);
    sub_1B885B0(&VoiceClosedMessageMaster_TypeInfo);
    sub_1B885B0(&VoiceCondMaster_TypeInfo);
    sub_1B885B0(&VoiceMaster_TypeInfo);
    sub_1B885B0(&VoiceMaterialCondMaster_TypeInfo);
    sub_1B885B0(&VoicePlayCondMaster_TypeInfo);
    sub_1B885B0(&VoicePlayGroupMaster_TypeInfo);
    sub_1B885B0(&VoiceReleaseMaster_TypeInfo);
    sub_1B885B0(&WarAddMaster_TypeInfo);
    sub_1B885B0(&WarBoardAIMaster_TypeInfo);
    sub_1B885B0(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1B885B0(&WarBoardActionPointMaster_TypeInfo);
    sub_1B885B0(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1B885B0(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1B885B0(&WarBoardActionTrendMaster_TypeInfo);
    sub_1B885B0(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1B885B0(&WarBoardDataMaster_TypeInfo);
    sub_1B885B0(&WarBoardEffectMaster_TypeInfo);
    sub_1B885B0(&WarBoardEventMaster_TypeInfo);
    sub_1B885B0(&WarBoardEventScriptMaster_TypeInfo);
    sub_1B885B0(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1B885B0(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1B885B0(&WarBoardItemMaster_TypeInfo);
    sub_1B885B0(&WarBoardMaster_TypeInfo);
    sub_1B885B0(&WarBoardMessageMaster_TypeInfo);
    sub_1B885B0(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1B885B0(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1B885B0(&WarBoardPartySkillMaster_TypeInfo);
    sub_1B885B0(&WarBoardQuestMaster_TypeInfo);
    sub_1B885B0(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1B885B0(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1B885B0(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1B885B0(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1B885B0(&WarBoardRoadMaster_TypeInfo);
    sub_1B885B0(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1B885B0(&WarBoardSquareMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageBossMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageDetailMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageNpcMaster_TypeInfo);
    sub_1B885B0(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1B885B0(&WarBoardStageWallMaster_TypeInfo);
    sub_1B885B0(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1B885B0(&WarBoardTreasureMaster_TypeInfo);
    sub_1B885B0(&WarGroupMaster_TypeInfo);
    sub_1B885B0(&WarMaster_TypeInfo);
    sub_1B885B0(&WarMessageMaster_TypeInfo);
    sub_1B885B0(&WarQuestSelectionMaster_TypeInfo);
    sub_1B885B0(&WarReleaseMaster_TypeInfo);
    byte_4A5ACA3 = 1;
  }
  v1 = (DataMasterBase_array *)sub_1B88658(DataMasterBase___TypeInfo, 518LL);
  v2 = (ServantMaster_o *)sub_1B887FC(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0LL);
  if ( !v1 )
    sub_1B8880C(v3, v4);
  if ( v2 )
  {
    v3 = sub_1B886EC(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  p_max_length = &v1->max_length;
  if ( !v1->max_length )
    goto LABEL_1559;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v1->m_Items, (int32_t)v2, v5, v6);
  v8 = (ServantClassMaster_o *)sub_1B887FC(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v8, 0LL);
  if ( v8 )
  {
    v3 = sub_1B886EC(v8, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1559;
  v1->m_Items[1] = (DataMasterBase_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[1], (int32_t)v8, v9, v10);
  v11 = (ServantCommentMaster_o *)sub_1B887FC(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v11, 0LL);
  if ( v11 )
  {
    v3 = sub_1B886EC(v11, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1559;
  v1->m_Items[2] = (DataMasterBase_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[2], (int32_t)v11, v12, v13);
  v14 = (ServantProfileMaster_o *)sub_1B887FC(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v14, 0LL);
  if ( v14 )
  {
    v3 = sub_1B886EC(v14, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1559;
  v1->m_Items[3] = (DataMasterBase_o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[3], (int32_t)v14, v15, v16);
  v17 = (WarMaster_o *)sub_1B887FC(WarMaster_TypeInfo);
  WarMaster___ctor(v17, 0LL);
  if ( v17 )
  {
    v3 = sub_1B886EC(v17, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1559;
  v1->m_Items[4] = (DataMasterBase_o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[4], (int32_t)v17, v18, v19);
  v20 = (UserMaster_o *)sub_1B887FC(UserMaster_TypeInfo);
  UserMaster___ctor(v20, 0LL);
  if ( v20 )
  {
    v3 = sub_1B886EC(v20, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1559;
  v1->m_Items[5] = (DataMasterBase_o *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[5], (int32_t)v20, v21, v22);
  v23 = (UserGameMaster_o *)sub_1B887FC(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v23, 0LL);
  if ( v23 )
  {
    v3 = sub_1B886EC(v23, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1559;
  v1->m_Items[6] = (DataMasterBase_o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[6], (int32_t)v23, v24, v25);
  v26 = (TblUserMaster_o *)sub_1B887FC(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v26, 0LL);
  if ( v26 )
  {
    v3 = sub_1B886EC(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1559;
  v1->m_Items[7] = (DataMasterBase_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[7], (int32_t)v26, v27, v28);
  v29 = (UserItemMaster_o *)sub_1B887FC(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v29, 0LL);
  if ( v29 )
  {
    v3 = sub_1B886EC(v29, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1559;
  v1->m_Items[8] = (DataMasterBase_o *)v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[8], (int32_t)v29, v30, v31);
  v32 = (UserServantMaster_o *)sub_1B887FC(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v32, 0LL);
  if ( v32 )
  {
    v3 = sub_1B886EC(v32, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1559;
  v1->m_Items[9] = (DataMasterBase_o *)v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[9], (int32_t)v32, v33, v34);
  v35 = (UserServantStorageMaster_o *)sub_1B887FC(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v35, 0LL);
  if ( v35 )
  {
    v3 = sub_1B886EC(v35, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1559;
  v1->m_Items[10] = (DataMasterBase_o *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[10], (int32_t)v35, v36, v37);
  v38 = (UserAccessaryMaster_o *)sub_1B887FC(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v38, 0LL);
  if ( v38 )
  {
    v3 = sub_1B886EC(v38, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1559;
  v1->m_Items[11] = (DataMasterBase_o *)v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[11], (int32_t)v38, v39, v40);
  v41 = (UserQuestMaster_o *)sub_1B887FC(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v41, 0LL);
  if ( v41 )
  {
    v3 = sub_1B886EC(v41, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1559;
  v1->m_Items[12] = (DataMasterBase_o *)v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[12], (int32_t)v41, v42, v43);
  v44 = (BattleMaster_o *)sub_1B887FC(BattleMaster_TypeInfo);
  BattleMaster___ctor(v44, 0LL);
  if ( v44 )
  {
    v3 = sub_1B886EC(v44, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1559;
  v1->m_Items[13] = (DataMasterBase_o *)v44;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[13], (int32_t)v44, v45, v46);
  v47 = (OtherUserGameMaster_o *)sub_1B887FC(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v47, 0LL);
  if ( v47 )
  {
    v3 = sub_1B886EC(v47, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1559;
  v1->m_Items[14] = (DataMasterBase_o *)v47;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[14], (int32_t)v47, v48, v49);
  v50 = (TblFriendMaster_o *)sub_1B887FC(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v50, 0LL);
  if ( v50 )
  {
    v3 = sub_1B886EC(v50, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1559;
  v1->m_Items[15] = (DataMasterBase_o *)v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[15], (int32_t)v50, v51, v52);
  v53 = (AreaMaster_o *)sub_1B887FC(AreaMaster_TypeInfo);
  AreaMaster___ctor(v53, 0LL);
  if ( v53 )
  {
    v3 = sub_1B886EC(v53, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1559;
  v1->m_Items[16] = (DataMasterBase_o *)v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[16], (int32_t)v53, v54, v55);
  v56 = (ServantCardMaster_o *)sub_1B887FC(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v56, 0LL);
  if ( v56 )
  {
    v3 = sub_1B886EC(v56, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1559;
  v1->m_Items[17] = (DataMasterBase_o *)v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[17], (int32_t)v56, v57, v58);
  v59 = (EventMaster_o *)sub_1B887FC(EventMaster_TypeInfo);
  EventMaster___ctor(v59, 0LL);
  if ( v59 )
  {
    v3 = sub_1B886EC(v59, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1559;
  v1->m_Items[18] = (DataMasterBase_o *)v59;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[18], (int32_t)v59, v60, v61);
  v62 = (ItemMaster_o *)sub_1B887FC(ItemMaster_TypeInfo);
  ItemMaster___ctor(v62, 0LL);
  if ( v62 )
  {
    v3 = sub_1B886EC(v62, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1559;
  v1->m_Items[19] = (DataMasterBase_o *)v62;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[19], (int32_t)v62, v63, v64);
  v65 = (QuestMaster_o *)sub_1B887FC(QuestMaster_TypeInfo);
  QuestMaster___ctor(v65, 0LL);
  if ( v65 )
  {
    v3 = sub_1B886EC(v65, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1559;
  v1->m_Items[20] = (DataMasterBase_o *)v65;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[20], (int32_t)v65, v66, v67);
  v68 = (QuestAddMaster_o *)sub_1B887FC(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v68, 0LL);
  if ( v68 )
  {
    v3 = sub_1B886EC(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1559;
  v1->m_Items[21] = (DataMasterBase_o *)v68;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[21], (int32_t)v68, v69, v70);
  v71 = (QuestReleaseMaster_o *)sub_1B887FC(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v71, 0LL);
  if ( v71 )
  {
    v3 = sub_1B886EC(v71, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1559;
  v1->m_Items[22] = (DataMasterBase_o *)v71;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[22], (int32_t)v71, v72, v73);
  v74 = (QuestDateRangeMaster_o *)sub_1B887FC(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v74, 0LL);
  if ( v74 )
  {
    v3 = sub_1B886EC(v74, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1559;
  v1->m_Items[23] = (DataMasterBase_o *)v74;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[23], (int32_t)v74, v75, v76);
  v77 = (QuestPhaseMaster_o *)sub_1B887FC(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v77, 0LL);
  if ( v77 )
  {
    v3 = sub_1B886EC(v77, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1559;
  v1->m_Items[24] = (DataMasterBase_o *)v77;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[24], (int32_t)v77, v78, v79);
  v80 = (QuestPhaseDetailMaster_o *)sub_1B887FC(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v80, 0LL);
  if ( v80 )
  {
    v3 = sub_1B886EC(v80, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1559;
  v1->m_Items[25] = (DataMasterBase_o *)v80;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[25], (int32_t)v80, v81, v82);
  v83 = (QuestGroupMaster_o *)sub_1B887FC(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v83, 0LL);
  if ( v83 )
  {
    v3 = sub_1B886EC(v83, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1559;
  v1->m_Items[26] = (DataMasterBase_o *)v83;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[26], (int32_t)v83, v84, v85);
  v86 = (QuestRandomGroupMaster_o *)sub_1B887FC(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v86, 0LL);
  if ( v86 )
  {
    v3 = sub_1B886EC(v86, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1559;
  v1->m_Items[27] = (DataMasterBase_o *)v86;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[27], (int32_t)v86, v87, v88);
  v89 = (QuestConsumeItemMaster_o *)sub_1B887FC(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v89, 0LL);
  if ( v89 )
  {
    v3 = sub_1B886EC(v89, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1559;
  v1->m_Items[28] = (DataMasterBase_o *)v89;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[28], (int32_t)v89, v90, v91);
  v92 = (QuestMessageMaster_o *)sub_1B887FC(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v92, 0LL);
  if ( v92 )
  {
    v3 = sub_1B886EC(v92, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1559;
  v1->m_Items[29] = (DataMasterBase_o *)v92;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[29], (int32_t)v92, v93, v94);
  v95 = (UserQuestInfoMaster_o *)sub_1B887FC(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v95, 0LL);
  if ( v95 )
  {
    v3 = sub_1B886EC(v95, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1559;
  v1->m_Items[30] = (DataMasterBase_o *)v95;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[30], (int32_t)v95, v96, v97);
  v98 = (UserQuestRecordMaster_o *)sub_1B887FC(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v98, 0LL);
  if ( v98 )
  {
    v3 = sub_1B886EC(v98, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1559;
  v1->m_Items[31] = (DataMasterBase_o *)v98;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[31], (int32_t)v98, v99, v100);
  v101 = (ViewQuestInfoMaster_o *)sub_1B887FC(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v101, 0LL);
  if ( v101 )
  {
    v3 = sub_1B886EC(v101, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1559;
  v1->m_Items[32] = (DataMasterBase_o *)v101;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[32], (int32_t)v101, v102, v103);
  v104 = (ViewEnemyMaster_o *)sub_1B887FC(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v104, 0LL);
  if ( v104 )
  {
    v3 = sub_1B886EC(v104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1559;
  v1->m_Items[33] = (DataMasterBase_o *)v104;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[33], (int32_t)v104, v105, v106);
  v107 = (ViewQuestEnemyInfoMaster_o *)sub_1B887FC(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v107, 0LL);
  if ( v107 )
  {
    v3 = sub_1B886EC(v107, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1559;
  v1->m_Items[34] = (DataMasterBase_o *)v107;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[34], (int32_t)v107, v108, v109);
  v110 = (BlankEarthSpotMaster_o *)sub_1B887FC(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v110, 0LL);
  if ( v110 )
  {
    v3 = sub_1B886EC(v110, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1559;
  v1->m_Items[35] = (DataMasterBase_o *)v110;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[35], (int32_t)v110, v111, v112);
  v113 = (BlankEarthSpotAddMaster_o *)sub_1B887FC(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v113, 0LL);
  if ( v113 )
  {
    v3 = sub_1B886EC(v113, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1559;
  v1->m_Items[36] = (DataMasterBase_o *)v113;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[36], (int32_t)v113, v114, v115);
  v116 = (SpotMaster_o *)sub_1B887FC(SpotMaster_TypeInfo);
  SpotMaster___ctor(v116, 0LL);
  if ( v116 )
  {
    v3 = sub_1B886EC(v116, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1559;
  v1->m_Items[37] = (DataMasterBase_o *)v116;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[37], (int32_t)v116, v117, v118);
  v119 = (SpotImageMaster_o *)sub_1B887FC(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v119, 0LL);
  if ( v119 )
  {
    v3 = sub_1B886EC(v119, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1559;
  v1->m_Items[38] = (DataMasterBase_o *)v119;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[38], (int32_t)v119, v120, v121);
  v122 = (SpotRoadMaster_o *)sub_1B887FC(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v122, 0LL);
  if ( v122 )
  {
    v3 = sub_1B886EC(v122, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1559;
  v1->m_Items[39] = (DataMasterBase_o *)v122;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[39], (int32_t)v122, v123, v124);
  v125 = (SpotPathMaster_o *)sub_1B887FC(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v125, 0LL);
  if ( v125 )
  {
    v3 = sub_1B886EC(v125, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1559;
  v1->m_Items[40] = (DataMasterBase_o *)v125;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[40], (int32_t)v125, v126, v127);
  v128 = (SpotAddMaster_o *)sub_1B887FC(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v128, 0LL);
  if ( v128 )
  {
    v3 = sub_1B886EC(v128, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1559;
  v1->m_Items[41] = (DataMasterBase_o *)v128;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[41], (int32_t)v128, v129, v130);
  v131 = (MapGimmickMaster_o *)sub_1B887FC(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v131, 0LL);
  if ( v131 )
  {
    v3 = sub_1B886EC(v131, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1559;
  v1->m_Items[42] = (DataMasterBase_o *)v131;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[42], (int32_t)v131, v132, v133);
  v134 = (GiftMaster_o *)sub_1B887FC(GiftMaster_TypeInfo);
  GiftMaster___ctor(v134, 0LL);
  if ( v134 )
  {
    v3 = sub_1B886EC(v134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1559;
  v1->m_Items[43] = (DataMasterBase_o *)v134;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[43], (int32_t)v134, v135, v136);
  v137 = (GiftAddMaster_o *)sub_1B887FC(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v137, 0LL);
  if ( v137 )
  {
    v3 = sub_1B886EC(v137, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1559;
  v1->m_Items[44] = (DataMasterBase_o *)v137;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[44], (int32_t)v137, v138, v139);
  v140 = (ShopMaster_o *)sub_1B887FC(ShopMaster_TypeInfo);
  ShopMaster___ctor(v140, 0LL);
  if ( v140 )
  {
    v3 = sub_1B886EC(v140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1559;
  v1->m_Items[45] = (DataMasterBase_o *)v140;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[45], (int32_t)v140, v141, v142);
  v143 = (StoneShopMaster_o *)sub_1B887FC(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v143, 0LL);
  if ( v143 )
  {
    v3 = sub_1B886EC(v143, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1559;
  v1->m_Items[46] = (DataMasterBase_o *)v143;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[46], (int32_t)v143, v144, v145);
  v146 = (BankShopMaster_o *)sub_1B887FC(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v146, 0LL);
  if ( v146 )
  {
    v3 = sub_1B886EC(v146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1559;
  v1->m_Items[47] = (DataMasterBase_o *)v146;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[47], (int32_t)v146, v147, v148);
  v149 = (ShopScriptMaster_o *)sub_1B887FC(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v149, 0LL);
  if ( v149 )
  {
    v3 = sub_1B886EC(v149, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1559;
  v1->m_Items[48] = (DataMasterBase_o *)v149;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[48], (int32_t)v149, v150, v151);
  v152 = (StageMaster_o *)sub_1B887FC(StageMaster_TypeInfo);
  StageMaster___ctor(v152, 0LL);
  if ( v152 )
  {
    v3 = sub_1B886EC(v152, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1559;
  v1->m_Items[49] = (DataMasterBase_o *)v152;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[49], (int32_t)v152, v153, v154);
  v155 = (ServantGroupMaster_o *)sub_1B887FC(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v155, 0LL);
  if ( v155 )
  {
    v3 = sub_1B886EC(v155, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1559;
  v1->m_Items[50] = (DataMasterBase_o *)v155;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[50], (int32_t)v155, v156, v157);
  v158 = (ServantLimitMaster_o *)sub_1B887FC(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v158, 0LL);
  if ( v158 )
  {
    v3 = sub_1B886EC(v158, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1559;
  v1->m_Items[51] = (DataMasterBase_o *)v158;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[51], (int32_t)v158, v159, v160);
  v161 = (ServantLimitAddMaster_o *)sub_1B887FC(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v161, 0LL);
  if ( v161 )
  {
    v3 = sub_1B886EC(v161, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1559;
  v1->m_Items[52] = (DataMasterBase_o *)v161;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[52], (int32_t)v161, v162, v163);
  v164 = (ServantSkillMaster_o *)sub_1B887FC(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v164, 0LL);
  if ( v164 )
  {
    v3 = sub_1B886EC(v164, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1559;
  v1->m_Items[53] = (DataMasterBase_o *)v164;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[53], (int32_t)v164, v165, v166);
  v167 = (ServantPassiveSkillMaster_o *)sub_1B887FC(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v167, 0LL);
  if ( v167 )
  {
    v3 = sub_1B886EC(v167, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1559;
  v1->m_Items[54] = (DataMasterBase_o *)v167;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[54], (int32_t)v167, v168, v169);
  v170 = (BgmMaster_o *)sub_1B887FC(BgmMaster_TypeInfo);
  BgmMaster___ctor(v170, 0LL);
  if ( v170 )
  {
    v3 = sub_1B886EC(v170, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1559;
  v1->m_Items[55] = (DataMasterBase_o *)v170;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[55], (int32_t)v170, v171, v172);
  v173 = (ServantScriptMaster_o *)sub_1B887FC(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v173, 0LL);
  if ( v173 )
  {
    v3 = sub_1B886EC(v173, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1559;
  v1->m_Items[56] = (DataMasterBase_o *)v173;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[56], (int32_t)v173, v174, v175);
  v176 = (NewsMaster_o *)sub_1B887FC(NewsMaster_TypeInfo);
  NewsMaster___ctor(v176, 0LL);
  if ( v176 )
  {
    v3 = sub_1B886EC(v176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1559;
  v1->m_Items[57] = (DataMasterBase_o *)v176;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[57], (int32_t)v176, v177, v178);
  v179 = (TelopMaster_o *)sub_1B887FC(TelopMaster_TypeInfo);
  TelopMaster___ctor(v179, 0LL);
  if ( v179 )
  {
    v3 = sub_1B886EC(v179, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1559;
  v1->m_Items[58] = (DataMasterBase_o *)v179;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[58], (int32_t)v179, v180, v181);
  v182 = (UserExpMaster_o *)sub_1B887FC(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v182, 0LL);
  if ( v182 )
  {
    v3 = sub_1B886EC(v182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1559;
  v1->m_Items[59] = (DataMasterBase_o *)v182;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[59], (int32_t)v182, v183, v184);
  v185 = (TreasureDvcMaster_o *)sub_1B887FC(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v185, 0LL);
  if ( v185 )
  {
    v3 = sub_1B886EC(v185, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1559;
  v1->m_Items[60] = (DataMasterBase_o *)v185;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[60], (int32_t)v185, v186, v187);
  v188 = (ServantTreasureDvcMaster_o *)sub_1B887FC(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v188, 0LL);
  if ( v188 )
  {
    v3 = sub_1B886EC(v188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1559;
  v1->m_Items[61] = (DataMasterBase_o *)v188;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[61], (int32_t)v188, v189, v190);
  v191 = (SkillMaster_o *)sub_1B887FC(SkillMaster_TypeInfo);
  SkillMaster___ctor(v191, 0LL);
  if ( v191 )
  {
    v3 = sub_1B886EC(v191, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1559;
  v1->m_Items[62] = (DataMasterBase_o *)v191;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[62], (int32_t)v191, v192, v193);
  v194 = (SkillLvMaster_o *)sub_1B887FC(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v194, 0LL);
  if ( v194 )
  {
    v3 = sub_1B886EC(v194, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1559;
  v1->m_Items[63] = (DataMasterBase_o *)v194;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[63], (int32_t)v194, v195, v196);
  v197 = (SkillDetailMaster_o *)sub_1B887FC(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v197, 0LL);
  if ( v197 )
  {
    v3 = sub_1B886EC(v197, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1559;
  v1->m_Items[64] = (DataMasterBase_o *)v197;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[64], (int32_t)v197, v198, v199);
  v200 = (CommandSpellMaster_o *)sub_1B887FC(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v200, 0LL);
  if ( v200 )
  {
    v3 = sub_1B886EC(v200, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1559;
  v1->m_Items[65] = (DataMasterBase_o *)v200;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[65], (int32_t)v200, v201, v202);
  v203 = (EquipMaster_o *)sub_1B887FC(EquipMaster_TypeInfo);
  EquipMaster___ctor(v203, 0LL);
  if ( v203 )
  {
    v3 = sub_1B886EC(v203, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1559;
  v1->m_Items[66] = (DataMasterBase_o *)v203;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[66], (int32_t)v203, v204, v205);
  v206 = (EquipExpMaster_o *)sub_1B887FC(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v206, 0LL);
  if ( v206 )
  {
    v3 = sub_1B886EC(v206, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1559;
  v1->m_Items[67] = (DataMasterBase_o *)v206;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[67], (int32_t)v206, v207, v208);
  v209 = (EquipSkillMaster_o *)sub_1B887FC(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v209, 0LL);
  if ( v209 )
  {
    v3 = sub_1B886EC(v209, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1559;
  v1->m_Items[68] = (DataMasterBase_o *)v209;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[68], (int32_t)v209, v210, v211);
  v212 = (SubEquipMaster_o *)sub_1B887FC(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v212, 0LL);
  if ( v212 )
  {
    v3 = sub_1B886EC(v212, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1559;
  v1->m_Items[69] = (DataMasterBase_o *)v212;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[69], (int32_t)v212, v213, v214);
  v215 = (AccessaryMaster_o *)sub_1B887FC(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v215, 0LL);
  if ( v215 )
  {
    v3 = sub_1B886EC(v215, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1559;
  v1->m_Items[70] = (DataMasterBase_o *)v215;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[70], (int32_t)v215, v216, v217);
  v218 = (UserPresentBoxMaster_o *)sub_1B887FC(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v218, 0LL);
  if ( v218 )
  {
    v3 = sub_1B886EC(v218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1559;
  v1->m_Items[71] = (DataMasterBase_o *)v218;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[71], (int32_t)v218, v219, v220);
  v221 = (UserDeckMaster_o *)sub_1B887FC(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v221, 0LL);
  if ( v221 )
  {
    v3 = sub_1B886EC(v221, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1559;
  v1->m_Items[72] = (DataMasterBase_o *)v221;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[72], (int32_t)v221, v222, v223);
  v224 = (UserSubEquipMaster_o *)sub_1B887FC(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v224, 0LL);
  if ( v224 )
  {
    v3 = sub_1B886EC(v224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1559;
  v1->m_Items[73] = (DataMasterBase_o *)v224;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[73], (int32_t)v224, v225, v226);
  v227 = (GachaMaster_o *)sub_1B887FC(GachaMaster_TypeInfo);
  GachaMaster___ctor(v227, 0LL);
  if ( v227 )
  {
    v3 = sub_1B886EC(v227, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1559;
  v1->m_Items[74] = (DataMasterBase_o *)v227;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[74], (int32_t)v227, v228, v229);
  v230 = (GachaImageMaster_o *)sub_1B887FC(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v230, 0LL);
  if ( v230 )
  {
    v3 = sub_1B886EC(v230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1559;
  v1->m_Items[75] = (DataMasterBase_o *)v230;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[75], (int32_t)v230, v231, v232);
  v233 = (UserGachaMaster_o *)sub_1B887FC(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v233, 0LL);
  if ( v233 )
  {
    v3 = sub_1B886EC(v233, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1559;
  v1->m_Items[76] = (DataMasterBase_o *)v233;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[76], (int32_t)v233, v234, v235);
  v236 = (UserEquipMaster_o *)sub_1B887FC(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v236, 0LL);
  if ( v236 )
  {
    v3 = sub_1B886EC(v236, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1559;
  v1->m_Items[77] = (DataMasterBase_o *)v236;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[77], (int32_t)v236, v237, v238);
  v239 = (UserServantCollectionMaster_o *)sub_1B887FC(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v239, 0LL);
  if ( v239 )
  {
    v3 = sub_1B886EC(v239, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1559;
  v1->m_Items[78] = (DataMasterBase_o *)v239;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[78], (int32_t)v239, v240, v241);
  v242 = (FriendshipMaster_o *)sub_1B887FC(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v242, 0LL);
  if ( v242 )
  {
    v3 = sub_1B886EC(v242, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1559;
  v1->m_Items[79] = (DataMasterBase_o *)v242;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[79], (int32_t)v242, v243, v244);
  v245 = (GachaTicketMaster_o *)sub_1B887FC(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v245, 0LL);
  if ( v245 )
  {
    v3 = sub_1B886EC(v245, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1559;
  v1->m_Items[80] = (DataMasterBase_o *)v245;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[80], (int32_t)v245, v246, v247);
  v248 = (UserFormationMaster_o *)sub_1B887FC(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v248, 0LL);
  if ( v248 )
  {
    v3 = sub_1B886EC(v248, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1559;
  v1->m_Items[81] = (DataMasterBase_o *)v248;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[81], (int32_t)v248, v249, v250);
  v251 = (FunctionMaster_o *)sub_1B887FC(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v251, 0LL);
  if ( v251 )
  {
    v3 = sub_1B886EC(v251, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1559;
  v1->m_Items[82] = (DataMasterBase_o *)v251;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[82], (int32_t)v251, v252, v253);
  v254 = (BuffMaster_o *)sub_1B887FC(BuffMaster_TypeInfo);
  BuffMaster___ctor(v254, 0LL);
  if ( v254 )
  {
    v3 = sub_1B886EC(v254, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1559;
  v1->m_Items[83] = (DataMasterBase_o *)v254;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[83], (int32_t)v254, v255, v256);
  v257 = (GachaReleaseMaster_o *)sub_1B887FC(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v257, 0LL);
  if ( v257 )
  {
    v3 = sub_1B886EC(v257, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1559;
  v1->m_Items[84] = (DataMasterBase_o *)v257;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[84], (int32_t)v257, v258, v259);
  v260 = (CombineQpMaster_o *)sub_1B887FC(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v260, 0LL);
  if ( v260 )
  {
    v3 = sub_1B886EC(v260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1559;
  v1->m_Items[85] = (DataMasterBase_o *)v260;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[85], (int32_t)v260, v261, v262);
  v263 = (CombineMaterialMaster_o *)sub_1B887FC(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v263, 0LL);
  if ( v263 )
  {
    v3 = sub_1B886EC(v263, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1559;
  v1->m_Items[86] = (DataMasterBase_o *)v263;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[86], (int32_t)v263, v264, v265);
  v266 = (EventCombineMaster_o *)sub_1B887FC(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v266, 0LL);
  if ( v266 )
  {
    v3 = sub_1B886EC(v266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1559;
  v1->m_Items[87] = (DataMasterBase_o *)v266;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[87], (int32_t)v266, v267, v268);
  v269 = (ServantExpMaster_o *)sub_1B887FC(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v269, 0LL);
  if ( v269 )
  {
    v3 = sub_1B886EC(v269, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1559;
  v1->m_Items[88] = (DataMasterBase_o *)v269;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[88], (int32_t)v269, v270, v271);
  v272 = (CombineSkillMaster_o *)sub_1B887FC(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v272, 0LL);
  if ( v272 )
  {
    v3 = sub_1B886EC(v272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1559;
  v1->m_Items[89] = (DataMasterBase_o *)v272;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[89], (int32_t)v272, v273, v274);
  v275 = (CombineTdMaster_o *)sub_1B887FC(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v275, 0LL);
  if ( v275 )
  {
    v3 = sub_1B886EC(v275, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1559;
  v1->m_Items[90] = (DataMasterBase_o *)v275;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[90], (int32_t)v275, v276, v277);
  v278 = (EventQuestMaster_o *)sub_1B887FC(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v278, 0LL);
  if ( v278 )
  {
    v3 = sub_1B886EC(v278, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1559;
  v1->m_Items[91] = (DataMasterBase_o *)v278;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[91], (int32_t)v278, v279, v280);
  v281 = (EventCampaignMaster_o *)sub_1B887FC(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v281, 0LL);
  if ( v281 )
  {
    v3 = sub_1B886EC(v281, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1559;
  v1->m_Items[92] = (DataMasterBase_o *)v281;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[92], (int32_t)v281, v282, v283);
  v284 = (IllustratorMaster_o *)sub_1B887FC(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v284, 0LL);
  if ( v284 )
  {
    v3 = sub_1B886EC(v284, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1559;
  v1->m_Items[93] = (DataMasterBase_o *)v284;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[93], (int32_t)v284, v285, v286);
  v287 = (CvMaster_o *)sub_1B887FC(CvMaster_TypeInfo);
  CvMaster___ctor(v287, 0LL);
  if ( v287 )
  {
    v3 = sub_1B886EC(v287, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1559;
  v1->m_Items[94] = (DataMasterBase_o *)v287;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[94], (int32_t)v287, v288, v289);
  v290 = (TreasureDvcLvMaster_o *)sub_1B887FC(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v290, 0LL);
  if ( v290 )
  {
    v3 = sub_1B886EC(v290, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1559;
  v1->m_Items[95] = (DataMasterBase_o *)v290;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[95], (int32_t)v290, v291, v292);
  v293 = (TreasureDvcDetailMaster_o *)sub_1B887FC(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v293, 0LL);
  if ( v293 )
  {
    v3 = sub_1B886EC(v293, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1559;
  v1->m_Items[96] = (DataMasterBase_o *)v293;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[96], (int32_t)v293, v294, v295);
  v296 = (UserFollowerMaster_o *)sub_1B887FC(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v296, 0LL);
  if ( v296 )
  {
    v3 = sub_1B886EC(v296, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1559;
  v1->m_Items[97] = (DataMasterBase_o *)v296;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[97], (int32_t)v296, v297, v298);
  v299 = (NpcFollowerMaster_o *)sub_1B887FC(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v299, 0LL);
  if ( v299 )
  {
    v3 = sub_1B886EC(v299, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1559;
  v1->m_Items[98] = (DataMasterBase_o *)v299;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[98], (int32_t)v299, v300, v301);
  v302 = (NpcServantFollowerMaster_o *)sub_1B887FC(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v302, 0LL);
  if ( v302 )
  {
    v3 = sub_1B886EC(v302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1559;
  v1->m_Items[99] = (DataMasterBase_o *)v302;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[99], (int32_t)v302, v303, v304);
  v305 = (UserEventMaster_o *)sub_1B887FC(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v305, 0LL);
  if ( v305 )
  {
    v3 = sub_1B886EC(v305, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1559;
  v1->m_Items[100] = (DataMasterBase_o *)v305;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[100], (int32_t)v305, v306, v307);
  v308 = (UserShopMaster_o *)sub_1B887FC(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v308, 0LL);
  if ( v308 )
  {
    v3 = sub_1B886EC(v308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1559;
  v1->m_Items[101] = (DataMasterBase_o *)v308;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[101], (int32_t)v308, v309, v310);
  v311 = (UserContinueMaster_o *)sub_1B887FC(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v311, 0LL);
  if ( v311 )
  {
    v3 = sub_1B886EC(v311, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1559;
  v1->m_Items[102] = (DataMasterBase_o *)v311;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[102], (int32_t)v311, v312, v313);
  v314 = (ConstantMaster_o *)sub_1B887FC(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v314, 0LL);
  if ( v314 )
  {
    v3 = sub_1B886EC(v314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1559;
  v1->m_Items[103] = (DataMasterBase_o *)v314;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[103], (int32_t)v314, v315, v316);
  v317 = (ConstantLongMaster_o *)sub_1B887FC(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v317, 0LL);
  if ( v317 )
  {
    v3 = sub_1B886EC(v317, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1559;
  v1->m_Items[104] = (DataMasterBase_o *)v317;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[104], (int32_t)v317, v318, v319);
  v320 = (ConstantStrMaster_o *)sub_1B887FC(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v320, 0LL);
  if ( v320 )
  {
    v3 = sub_1B886EC(v320, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1559;
  v1->m_Items[105] = (DataMasterBase_o *)v320;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[105], (int32_t)v320, v321, v322);
  v323 = (AiMaster_o *)sub_1B887FC(AiMaster_TypeInfo);
  AiMaster___ctor(v323, 0LL);
  if ( v323 )
  {
    v3 = sub_1B886EC(v323, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1559;
  v1->m_Items[106] = (DataMasterBase_o *)v323;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[106], (int32_t)v323, v324, v325);
  v326 = (AiActMaster_o *)sub_1B887FC(AiActMaster_TypeInfo);
  AiActMaster___ctor(v326, 0LL);
  if ( v326 )
  {
    v3 = sub_1B886EC(v326, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1559;
  v1->m_Items[107] = (DataMasterBase_o *)v326;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[107], (int32_t)v326, v327, v328);
  v329 = (AttriRelationMaster_o *)sub_1B887FC(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v329, 0LL);
  if ( v329 )
  {
    v3 = sub_1B886EC(v329, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1559;
  v1->m_Items[108] = (DataMasterBase_o *)v329;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[108], (int32_t)v329, v330, v331);
  v332 = (ClassRelationMaster_o *)sub_1B887FC(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v332, 0LL);
  if ( v332 )
  {
    v3 = sub_1B886EC(v332, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1559;
  v1->m_Items[109] = (DataMasterBase_o *)v332;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[109], (int32_t)v332, v333, v334);
  v335 = (EffectMaster_o *)sub_1B887FC(EffectMaster_TypeInfo);
  EffectMaster___ctor(v335, 0LL);
  if ( v335 )
  {
    v3 = sub_1B886EC(v335, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1559;
  v1->m_Items[110] = (DataMasterBase_o *)v335;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[110], (int32_t)v335, v336, v337);
  v338 = (EquipImageMaster_o *)sub_1B887FC(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v338, 0LL);
  if ( v338 )
  {
    v3 = sub_1B886EC(v338, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1559;
  v1->m_Items[111] = (DataMasterBase_o *)v338;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[111], (int32_t)v338, v339, v340);
  v341 = (ServantVoiceMaster_o *)sub_1B887FC(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v341, 0LL);
  if ( v341 )
  {
    v3 = sub_1B886EC(v341, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1559;
  v1->m_Items[112] = (DataMasterBase_o *)v341;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[112], (int32_t)v341, v342, v343);
  v344 = (CombineLimitMaster_o *)sub_1B887FC(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v344, 0LL);
  if ( v344 )
  {
    v3 = sub_1B886EC(v344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1559;
  v1->m_Items[113] = (DataMasterBase_o *)v344;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[113], (int32_t)v344, v345, v346);
  v347 = (CardMaster_o *)sub_1B887FC(CardMaster_TypeInfo);
  CardMaster___ctor(v347, 0LL);
  if ( v347 )
  {
    v3 = sub_1B886EC(v347, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1559;
  v1->m_Items[114] = (DataMasterBase_o *)v347;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[114], (int32_t)v347, v348, v349);
  v350 = (CombineQpSvtEquipMaster_o *)sub_1B887FC(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v350, 0LL);
  if ( v350 )
  {
    v3 = sub_1B886EC(v350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1559;
  v1->m_Items[115] = (DataMasterBase_o *)v350;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[115], (int32_t)v350, v351, v352);
  v353 = (ServantRarityMaster_o *)sub_1B887FC(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v353, 0LL);
  if ( v353 )
  {
    v3 = sub_1B886EC(v353, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1559;
  v1->m_Items[116] = (DataMasterBase_o *)v353;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[116], (int32_t)v353, v354, v355);
  v356 = (SetItemMaster_o *)sub_1B887FC(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v356, 0LL);
  if ( v356 )
  {
    v3 = sub_1B886EC(v356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1559;
  v1->m_Items[117] = (DataMasterBase_o *)v356;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[117], (int32_t)v356, v357, v358);
  v359 = (RecoverMaster_o *)sub_1B887FC(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v359, 0LL);
  if ( v359 )
  {
    v3 = sub_1B886EC(v359, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1559;
  v1->m_Items[118] = (DataMasterBase_o *)v359;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[118], (int32_t)v359, v360, v361);
  v362 = (BannerMaster_o *)sub_1B887FC(BannerMaster_TypeInfo);
  BannerMaster___ctor(v362, 0LL);
  if ( v362 )
  {
    v3 = sub_1B886EC(v362, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1559;
  v1->m_Items[119] = (DataMasterBase_o *)v362;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[119], (int32_t)v362, v363, v364);
  v365 = (ShopReleaseMaster_o *)sub_1B887FC(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v365, 0LL);
  if ( v365 )
  {
    v3 = sub_1B886EC(v365, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1559;
  v1->m_Items[120] = (DataMasterBase_o *)v365;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[120], (int32_t)v365, v366, v367);
  v368 = (EventRewardMaster_o *)sub_1B887FC(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v368, 0LL);
  if ( v368 )
  {
    v3 = sub_1B886EC(v368, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1559;
  v1->m_Items[121] = (DataMasterBase_o *)v368;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[121], (int32_t)v368, v369, v370);
  v371 = (EventDetailMaster_o *)sub_1B887FC(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v371, 0LL);
  if ( v371 )
  {
    v3 = sub_1B886EC(v371, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1559;
  v1->m_Items[122] = (DataMasterBase_o *)v371;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[122], (int32_t)v371, v372, v373);
  v374 = (EventServantMaster_o *)sub_1B887FC(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v374, 0LL);
  if ( v374 )
  {
    v3 = sub_1B886EC(v374, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1559;
  v1->m_Items[123] = (DataMasterBase_o *)v374;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[123], (int32_t)v374, v375, v376);
  v377 = (BoxGachaMaster_o *)sub_1B887FC(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v377, 0LL);
  if ( v377 )
  {
    v3 = sub_1B886EC(v377, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1559;
  v1->m_Items[124] = (DataMasterBase_o *)v377;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[124], (int32_t)v377, v378, v379);
  v380 = (BoxGachaBaseMaster_o *)sub_1B887FC(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v380, 0LL);
  if ( v380 )
  {
    v3 = sub_1B886EC(v380, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1559;
  v1->m_Items[125] = (DataMasterBase_o *)v380;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[125], (int32_t)v380, v381, v382);
  v383 = (BoxGachaTalkMaster_o *)sub_1B887FC(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v383, 0LL);
  if ( v383 )
  {
    v3 = sub_1B886EC(v383, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1559;
  v1->m_Items[126] = (DataMasterBase_o *)v383;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[126], (int32_t)v383, v384, v385);
  v386 = (UserBoxGachaMaster_o *)sub_1B887FC(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v386, 0LL);
  if ( v386 )
  {
    v3 = sub_1B886EC(v386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1559;
  v1->m_Items[127] = (DataMasterBase_o *)v386;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[127], (int32_t)v386, v387, v388);
  v389 = (BoxGachaHistoryMaster_o *)sub_1B887FC(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v389, 0LL);
  if ( v389 )
  {
    v3 = sub_1B886EC(v389, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1559;
  v1->m_Items[128] = (DataMasterBase_o *)v389;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[128], (int32_t)v389, v390, v391);
  v392 = (BattleBgMaster_o *)sub_1B887FC(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v392, 0LL);
  if ( v392 )
  {
    v3 = sub_1B886EC(v392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1559;
  v1->m_Items[129] = (DataMasterBase_o *)v392;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[129], (int32_t)v392, v393, v394);
  v395 = (TipsBattleMaster_o *)sub_1B887FC(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v395, 0LL);
  if ( v395 )
  {
    v3 = sub_1B886EC(v395, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1559;
  v1->m_Items[130] = (DataMasterBase_o *)v395;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[130], (int32_t)v395, v396, v397);
  v398 = (UserLoginMaster_o *)sub_1B887FC(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v398, 0LL);
  if ( v398 )
  {
    v3 = sub_1B886EC(v398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1559;
  v1->m_Items[131] = (DataMasterBase_o *)v398;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[131], (int32_t)v398, v399, v400);
  v401 = (VoiceMaster_o *)sub_1B887FC(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v401, 0LL);
  if ( v401 )
  {
    v3 = sub_1B886EC(v401, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1559;
  v1->m_Items[132] = (DataMasterBase_o *)v401;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[132], (int32_t)v401, v402, v403);
  v404 = (EventRewardExtraMaster_o *)sub_1B887FC(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v404, 0LL);
  if ( v404 )
  {
    v3 = sub_1B886EC(v404, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1559;
  v1->m_Items[133] = (DataMasterBase_o *)v404;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[133], (int32_t)v404, v405, v406);
  v407 = (EventMissionMaster_o *)sub_1B887FC(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v407, 0LL);
  if ( v407 )
  {
    v3 = sub_1B886EC(v407, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1559;
  v1->m_Items[134] = (DataMasterBase_o *)v407;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[134], (int32_t)v407, v408, v409);
  v410 = (EventMissionActionMaster_o *)sub_1B887FC(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v410, 0LL);
  if ( v410 )
  {
    v3 = sub_1B886EC(v410, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1559;
  v1->m_Items[135] = (DataMasterBase_o *)v410;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[135], (int32_t)v410, v411, v412);
  v413 = (EventMissionActionAddMaster_o *)sub_1B887FC(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v413, 0LL);
  if ( v413 )
  {
    v3 = sub_1B886EC(v413, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1559;
  v1->m_Items[136] = (DataMasterBase_o *)v413;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[136], (int32_t)v413, v414, v415);
  v416 = (EventMissionConditionMaster_o *)sub_1B887FC(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v416, 0LL);
  if ( v416 )
  {
    v3 = sub_1B886EC(v416, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1559;
  v1->m_Items[137] = (DataMasterBase_o *)v416;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[137], (int32_t)v416, v417, v418);
  v419 = (EventMissionCondDetailMaster_o *)sub_1B887FC(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v419, 0LL);
  if ( v419 )
  {
    v3 = sub_1B886EC(v419, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1559;
  v1->m_Items[138] = (DataMasterBase_o *)v419;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[138], (int32_t)v419, v420, v421);
  v422 = (EventMissionAddMaster_o *)sub_1B887FC(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v422, 0LL);
  if ( v422 )
  {
    v3 = sub_1B886EC(v422, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1559;
  v1->m_Items[139] = (DataMasterBase_o *)v422;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[139], (int32_t)v422, v423, v424);
  v425 = (CompleteMissionMaster_o *)sub_1B887FC(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v425, 0LL);
  if ( v425 )
  {
    v3 = sub_1B886EC(v425, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1559;
  v1->m_Items[140] = (DataMasterBase_o *)v425;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[140], (int32_t)v425, v426, v427);
  v428 = (EventRewardSetMaster_o *)sub_1B887FC(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v428, 0LL);
  if ( v428 )
  {
    v3 = sub_1B886EC(v428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1559;
  v1->m_Items[141] = (DataMasterBase_o *)v428;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[141], (int32_t)v428, v429, v430);
  v431 = (UserEventMissionMaster_o *)sub_1B887FC(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v431, 0LL);
  if ( v431 )
  {
    v3 = sub_1B886EC(v431, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1559;
  v1->m_Items[142] = (DataMasterBase_o *)v431;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[142], (int32_t)v431, v432, v433);
  v434 = (UserEventMissionCondDetailMaster_o *)sub_1B887FC(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v434, 0LL);
  if ( v434 )
  {
    v3 = sub_1B886EC(v434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1559;
  v1->m_Items[143] = (DataMasterBase_o *)v434;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[143], (int32_t)v434, v435, v436);
  v437 = (BoxGachaBaseDetailMaster_o *)sub_1B887FC(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v437, 0LL);
  if ( v437 )
  {
    v3 = sub_1B886EC(v437, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1559;
  v1->m_Items[144] = (DataMasterBase_o *)v437;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[144], (int32_t)v437, v438, v439);
  v440 = (UserServantLeaderMaster_o *)sub_1B887FC(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v440, 0LL);
  if ( v440 )
  {
    v3 = sub_1B886EC(v440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1559;
  v1->m_Items[145] = (DataMasterBase_o *)v440;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[145], (int32_t)v440, v441, v442);
  v443 = (ClosedMessageMaster_o *)sub_1B887FC(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v443, 0LL);
  if ( v443 )
  {
    v3 = sub_1B886EC(v443, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1559;
  v1->m_Items[146] = (DataMasterBase_o *)v443;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[146], (int32_t)v443, v444, v445);
  v446 = (FunctionGroupMaster_o *)sub_1B887FC(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v446, 0LL);
  if ( v446 )
  {
    v3 = sub_1B886EC(v446, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1559;
  v1->m_Items[147] = (DataMasterBase_o *)v446;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[147], (int32_t)v446, v447, v448);
  v449 = (EventRaidMaster_o *)sub_1B887FC(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v449, 0LL);
  if ( v449 )
  {
    v3 = sub_1B886EC(v449, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1559;
  v1->m_Items[148] = (DataMasterBase_o *)v449;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[148], (int32_t)v449, v450, v451);
  v452 = (TotalEventRaidMaster_o *)sub_1B887FC(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v452, 0LL);
  if ( v452 )
  {
    v3 = sub_1B886EC(v452, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1559;
  v1->m_Items[149] = (DataMasterBase_o *)v452;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[149], (int32_t)v452, v453, v454);
  v455 = (UserEventRaidMaster_o *)sub_1B887FC(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v455, 0LL);
  if ( v455 )
  {
    v3 = sub_1B886EC(v455, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1559;
  v1->m_Items[150] = (DataMasterBase_o *)v455;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[150], (int32_t)v455, v456, v457);
  v458 = (EventPointMaster_o *)sub_1B887FC(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v458, 0LL);
  if ( v458 )
  {
    v3 = sub_1B886EC(v458, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1559;
  v1->m_Items[151] = (DataMasterBase_o *)v458;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[151], (int32_t)v458, v459, v460);
  v461 = (EventPointGroupMaster_o *)sub_1B887FC(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v461, 0LL);
  if ( v461 )
  {
    v3 = sub_1B886EC(v461, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1559;
  v1->m_Items[152] = (DataMasterBase_o *)v461;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[152], (int32_t)v461, v462, v463);
  v464 = (TotalEventPointMaster_o *)sub_1B887FC(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v464, 0LL);
  if ( v464 )
  {
    v3 = sub_1B886EC(v464, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1559;
  v1->m_Items[153] = (DataMasterBase_o *)v464;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[153], (int32_t)v464, v465, v466);
  v467 = (UserEventPointMaster_o *)sub_1B887FC(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v467, 0LL);
  if ( v467 )
  {
    v3 = sub_1B886EC(v467, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1559;
  v1->m_Items[154] = (DataMasterBase_o *)v467;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[154], (int32_t)v467, v468, v469);
  v470 = (EventPointUpperMaster_o *)sub_1B887FC(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v470, 0LL);
  if ( v470 )
  {
    v3 = sub_1B886EC(v470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1559;
  v1->m_Items[155] = (DataMasterBase_o *)v470;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[155], (int32_t)v470, v471, v472);
  v473 = (EventPointUpperReleaseMaster_o *)sub_1B887FC(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v473, 0LL);
  if ( v473 )
  {
    v3 = sub_1B886EC(v473, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1559;
  v1->m_Items[156] = (DataMasterBase_o *)v473;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[156], (int32_t)v473, v474, v475);
  v476 = (EventRaceMaster_o *)sub_1B887FC(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v476, 0LL);
  if ( v476 )
  {
    v3 = sub_1B886EC(v476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1559;
  v1->m_Items[157] = (DataMasterBase_o *)v476;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[157], (int32_t)v476, v477, v478);
  v479 = (EventRaceResultMaster_o *)sub_1B887FC(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v479, 0LL);
  if ( v479 )
  {
    v3 = sub_1B886EC(v479, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1559;
  v1->m_Items[158] = (DataMasterBase_o *)v479;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[158], (int32_t)v479, v480, v481);
  v482 = (QuestRacePointMaster_o *)sub_1B887FC(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v482, 0LL);
  if ( v482 )
  {
    v3 = sub_1B886EC(v482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1559;
  v1->m_Items[159] = (DataMasterBase_o *)v482;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[159], (int32_t)v482, v483, v484);
  v485 = (UserEventRaceMaster_o *)sub_1B887FC(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v485, 0LL);
  if ( v485 )
  {
    v3 = sub_1B886EC(v485, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1559;
  v1->m_Items[160] = (DataMasterBase_o *)v485;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[160], (int32_t)v485, v486, v487);
  v488 = (EventScriptMaster_o *)sub_1B887FC(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v488, 0LL);
  if ( v488 )
  {
    v3 = sub_1B886EC(v488, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1559;
  v1->m_Items[161] = (DataMasterBase_o *)v488;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[161], (int32_t)v488, v489, v490);
  v491 = (EventScriptReleaseMaster_o *)sub_1B887FC(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v491, 0LL);
  if ( v491 )
  {
    v3 = sub_1B886EC(v491, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1559;
  v1->m_Items[162] = (DataMasterBase_o *)v491;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[162], (int32_t)v491, v492, v493);
  v494 = (UserPresentHistoryMaster_o *)sub_1B887FC(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v494, 0LL);
  if ( v494 )
  {
    v3 = sub_1B886EC(v494, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1559;
  v1->m_Items[163] = (DataMasterBase_o *)v494;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[163], (int32_t)v494, v495, v496);
  v497 = (MstMissionMaster_o *)sub_1B887FC(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v497, 0LL);
  if ( v497 )
  {
    v3 = sub_1B886EC(v497, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1559;
  v1->m_Items[164] = (DataMasterBase_o *)v497;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[164], (int32_t)v497, v498, v499);
  v500 = (ServantExceedMaster_o *)sub_1B887FC(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v500, 0LL);
  if ( v500 )
  {
    v3 = sub_1B886EC(v500, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1559;
  v1->m_Items[165] = (DataMasterBase_o *)v500;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[165], (int32_t)v500, v501, v502);
  v503 = (PartialMaintenanceMaster_o *)sub_1B887FC(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v503, 0LL);
  if ( v503 )
  {
    v3 = sub_1B886EC(v503, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1559;
  v1->m_Items[166] = (DataMasterBase_o *)v503;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[166], (int32_t)v503, v504, v505);
  v506 = (GuideMaster_o *)sub_1B887FC(GuideMaster_TypeInfo);
  GuideMaster___ctor(v506, 0LL);
  if ( v506 )
  {
    v3 = sub_1B886EC(v506, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1559;
  v1->m_Items[167] = (DataMasterBase_o *)v506;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[167], (int32_t)v506, v507, v508);
  v509 = (MstMissionDisplayInfoMaster_o *)sub_1B887FC(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v509, 0LL);
  if ( v509 )
  {
    v3 = sub_1B886EC(v509, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1559;
  v1->m_Items[168] = (DataMasterBase_o *)v509;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[168], (int32_t)v509, v510, v511);
  v512 = (GachaGroupMaster_o *)sub_1B887FC(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v512, 0LL);
  if ( v512 )
  {
    v3 = sub_1B886EC(v512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1559;
  v1->m_Items[169] = (DataMasterBase_o *)v512;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[169], (int32_t)v512, v513, v514);
  v515 = (QuestResetMaster_o *)sub_1B887FC(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v515, 0LL);
  if ( v515 )
  {
    v3 = sub_1B886EC(v515, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1559;
  v1->m_Items[170] = (DataMasterBase_o *)v515;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[170], (int32_t)v515, v516, v517);
  v518 = (WarAddMaster_o *)sub_1B887FC(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v518, 0LL);
  if ( v518 )
  {
    v3 = sub_1B886EC(v518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1559;
  v1->m_Items[171] = (DataMasterBase_o *)v518;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[171], (int32_t)v518, v519, v520);
  v521 = (EventItemDisplayMaster_o *)sub_1B887FC(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v521, 0LL);
  if ( v521 )
  {
    v3 = sub_1B886EC(v521, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1559;
  v1->m_Items[172] = (DataMasterBase_o *)v521;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[172], (int32_t)v521, v522, v523);
  v524 = (EventItemDisplayGroupMaster_o *)sub_1B887FC(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v524, 0LL);
  if ( v524 )
  {
    v3 = sub_1B886EC(v524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1559;
  v1->m_Items[173] = (DataMasterBase_o *)v524;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[173], (int32_t)v524, v525, v526);
  v527 = (EventItemDisplayReleaseMaster_o *)sub_1B887FC(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v527, 0LL);
  if ( v527 )
  {
    v3 = sub_1B886EC(v527, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1559;
  v1->m_Items[174] = (DataMasterBase_o *)v527;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[174], (int32_t)v527, v528, v529);
  v530 = (EventTutorialMaster_o *)sub_1B887FC(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v530, 0LL);
  if ( v530 )
  {
    v3 = sub_1B886EC(v530, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1559;
  v1->m_Items[175] = (DataMasterBase_o *)v530;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[175], (int32_t)v530, v531, v532);
  v533 = (EventTutorialCondMaster_o *)sub_1B887FC(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v533, 0LL);
  if ( v533 )
  {
    v3 = sub_1B886EC(v533, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1559;
  v1->m_Items[176] = (DataMasterBase_o *)v533;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[176], (int32_t)v533, v534, v535);
  v536 = (VoiceReleaseMaster_o *)sub_1B887FC(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v536, 0LL);
  if ( v536 )
  {
    v3 = sub_1B886EC(v536, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1559;
  v1->m_Items[177] = (DataMasterBase_o *)v536;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[177], (int32_t)v536, v537, v538);
  v539 = (EventSuperBossMaster_o *)sub_1B887FC(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v539, 0LL);
  if ( v539 )
  {
    v3 = sub_1B886EC(v539, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1559;
  v1->m_Items[178] = (DataMasterBase_o *)v539;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[178], (int32_t)v539, v540, v541);
  v542 = (UserSuperBossMaster_o *)sub_1B887FC(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v542, 0LL);
  if ( v542 )
  {
    v3 = sub_1B886EC(v542, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1559;
  v1->m_Items[179] = (DataMasterBase_o *)v542;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[179], (int32_t)v542, v543, v544);
  v545 = (QuestScriptMaster_o *)sub_1B887FC(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v545, 0LL);
  if ( v545 )
  {
    v3 = sub_1B886EC(v545, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1559;
  v1->m_Items[180] = (DataMasterBase_o *)v545;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[180], (int32_t)v545, v546, v547);
  v548 = (QuestScriptReleaseMaster_o *)sub_1B887FC(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v548, 0LL);
  if ( v548 )
  {
    v3 = sub_1B886EC(v548, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1559;
  v1->m_Items[181] = (DataMasterBase_o *)v548;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[181], (int32_t)v548, v549, v550);
  v551 = (MaterialFolderMaster_o *)sub_1B887FC(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v551, 0LL);
  if ( v551 )
  {
    v3 = sub_1B886EC(v551, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1559;
  v1->m_Items[182] = (DataMasterBase_o *)v551;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[182], (int32_t)v551, v552, v553);
  v554 = (RestrictionMaster_o *)sub_1B887FC(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v554, 0LL);
  if ( v554 )
  {
    v3 = sub_1B886EC(v554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1559;
  v1->m_Items[183] = (DataMasterBase_o *)v554;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[183], (int32_t)v554, v555, v556);
  v557 = (QuestRestrictionMaster_o *)sub_1B887FC(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v557, 0LL);
  if ( v557 )
  {
    v3 = sub_1B886EC(v557, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1559;
  v1->m_Items[184] = (DataMasterBase_o *)v557;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[184], (int32_t)v557, v558, v559);
  v560 = (ServantVoiceRelationMaster_o *)sub_1B887FC(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v560, 0LL);
  if ( v560 )
  {
    v3 = sub_1B886EC(v560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1559;
  v1->m_Items[185] = (DataMasterBase_o *)v560;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[185], (int32_t)v560, v561, v562);
  v563 = (ShopDetailMaster_o *)sub_1B887FC(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v563, 0LL);
  if ( v563 )
  {
    v3 = sub_1B886EC(v563, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1559;
  v1->m_Items[186] = (DataMasterBase_o *)v563;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[186], (int32_t)v563, v564, v565);
  v566 = (ServantScriptAddMaster_o *)sub_1B887FC(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v566, 0LL);
  if ( v566 )
  {
    v3 = sub_1B886EC(v566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1559;
  v1->m_Items[187] = (DataMasterBase_o *)v566;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[187], (int32_t)v566, v567, v568);
  v569 = (CombineMaster_o *)sub_1B887FC(CombineMaster_TypeInfo);
  CombineMaster___ctor(v569, 0LL);
  if ( v569 )
  {
    v3 = sub_1B886EC(v569, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1559;
  v1->m_Items[188] = (DataMasterBase_o *)v569;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[188], (int32_t)v569, v570, v571);
  v572 = (AiFieldMaster_o *)sub_1B887FC(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v572, 0LL);
  if ( v572 )
  {
    v3 = sub_1B886EC(v572, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1559;
  v1->m_Items[189] = (DataMasterBase_o *)v572;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[189], (int32_t)v572, v573, v574);
  v575 = (ServantCommentAddMaster_o *)sub_1B887FC(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v575, 0LL);
  if ( v575 )
  {
    v3 = sub_1B886EC(v575, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1559;
  v1->m_Items[190] = (DataMasterBase_o *)v575;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[190], (int32_t)v575, v576, v577);
  v578 = (EventFilterMaster_o *)sub_1B887FC(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v578, 0LL);
  if ( v578 )
  {
    v3 = sub_1B886EC(v578, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1559;
  v1->m_Items[191] = (DataMasterBase_o *)v578;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[191], (int32_t)v578, v579, v580);
  v581 = (UserSupportDeckMaster_o *)sub_1B887FC(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v581, 0LL);
  if ( v581 )
  {
    v3 = sub_1B886EC(v581, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1559;
  v1->m_Items[192] = (DataMasterBase_o *)v581;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[192], (int32_t)v581, v582, v583);
  v584 = (EventRewardSceneMaster_o *)sub_1B887FC(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v584, 0LL);
  if ( v584 )
  {
    v3 = sub_1B886EC(v584, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1559;
  v1->m_Items[193] = (DataMasterBase_o *)v584;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[193], (int32_t)v584, v585, v586);
  v587 = (EventVoicePlayMaster_o *)sub_1B887FC(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v587, 0LL);
  if ( v587 )
  {
    v3 = sub_1B886EC(v587, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1559;
  v1->m_Items[194] = (DataMasterBase_o *)v587;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[194], (int32_t)v587, v588, v589);
  v590 = (GachaSubMaster_o *)sub_1B887FC(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v590, 0LL);
  if ( v590 )
  {
    v3 = sub_1B886EC(v590, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1559;
  v1->m_Items[195] = (DataMasterBase_o *)v590;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[195], (int32_t)v590, v591, v592);
  v593 = (GachaDetailMaster_o *)sub_1B887FC(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v593, 0LL);
  if ( v593 )
  {
    v3 = sub_1B886EC(v593, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1559;
  v1->m_Items[196] = (DataMasterBase_o *)v593;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[196], (int32_t)v593, v594, v595);
  v596 = (GachaBonusSelectMaster_o *)sub_1B887FC(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v596, 0LL);
  if ( v596 )
  {
    v3 = sub_1B886EC(v596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1559;
  v1->m_Items[197] = (DataMasterBase_o *)v596;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[197], (int32_t)v596, v597, v598);
  v599 = (GachaBonusSelectLineupMaster_o *)sub_1B887FC(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v599, 0LL);
  if ( v599 )
  {
    v3 = sub_1B886EC(v599, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1559;
  v1->m_Items[198] = (DataMasterBase_o *)v599;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[198], (int32_t)v599, v600, v601);
  v602 = (ServantChangeMaster_o *)sub_1B887FC(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v602, 0LL);
  if ( v602 )
  {
    v3 = sub_1B886EC(v602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1559;
  v1->m_Items[199] = (DataMasterBase_o *)v602;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[199], (int32_t)v602, v603, v604);
  v605 = (VoiceCondMaster_o *)sub_1B887FC(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v605, 0LL);
  if ( v605 )
  {
    v3 = sub_1B886EC(v605, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1559;
  v1->m_Items[200] = (DataMasterBase_o *)v605;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[200], (int32_t)v605, v606, v607);
  v608 = (BgmReleaseMaster_o *)sub_1B887FC(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v608, 0LL);
  if ( v608 )
  {
    v3 = sub_1B886EC(v608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1559;
  v1->m_Items[201] = (DataMasterBase_o *)v608;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[201], (int32_t)v608, v609, v610);
  v611 = (MyRoomAddMaster_o *)sub_1B887FC(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v611, 0LL);
  if ( v611 )
  {
    v3 = sub_1B886EC(v611, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1559;
  v1->m_Items[202] = (DataMasterBase_o *)v611;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[202], (int32_t)v611, v612, v613);
  v614 = (ShopActionMaster_o *)sub_1B887FC(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v614, 0LL);
  if ( v614 )
  {
    v3 = sub_1B886EC(v614, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1559;
  v1->m_Items[203] = (DataMasterBase_o *)v614;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[203], (int32_t)v614, v615, v616);
  v617 = (EventRewardSceneReleaseMaster_o *)sub_1B887FC(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v617, 0LL);
  if ( v617 )
  {
    v3 = sub_1B886EC(v617, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1559;
  v1->m_Items[204] = (DataMasterBase_o *)v617;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[204], (int32_t)v617, v618, v619);
  v620 = (QuestBehaviorMaster_o *)sub_1B887FC(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v620, 0LL);
  if ( v620 )
  {
    v3 = sub_1B886EC(v620, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1559;
  v1->m_Items[205] = (DataMasterBase_o *)v620;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[205], (int32_t)v620, v621, v622);
  v623 = (MapMaster_o *)sub_1B887FC(MapMaster_TypeInfo);
  MapMaster___ctor(v623, 0LL);
  if ( v623 )
  {
    v3 = sub_1B886EC(v623, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1559;
  v1->m_Items[206] = (DataMasterBase_o *)v623;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[206], (int32_t)v623, v624, v625);
  v626 = (MapCondMaster_o *)sub_1B887FC(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v626, 0LL);
  if ( v626 )
  {
    v3 = sub_1B886EC(v626, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1559;
  v1->m_Items[207] = (DataMasterBase_o *)v626;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[207], (int32_t)v626, v627, v628);
  v629 = (MapButtonMaster_o *)sub_1B887FC(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v629, 0LL);
  if ( v629 )
  {
    v3 = sub_1B886EC(v629, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1559;
  v1->m_Items[208] = (DataMasterBase_o *)v629;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[208], (int32_t)v629, v630, v631);
  v632 = (BannerAddMaster_o *)sub_1B887FC(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v632, 0LL);
  if ( v632 )
  {
    v3 = sub_1B886EC(v632, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1559;
  v1->m_Items[209] = (DataMasterBase_o *)v632;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[209], (int32_t)v632, v633, v634);
  v635 = (EventAddMaster_o *)sub_1B887FC(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v635, 0LL);
  if ( v635 )
  {
    v3 = sub_1B886EC(v635, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1559;
  v1->m_Items[210] = (DataMasterBase_o *)v635;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[210], (int32_t)v635, v636, v637);
  v638 = (TotalLoginMaster_o *)sub_1B887FC(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v638, 0LL);
  if ( v638 )
  {
    v3 = sub_1B886EC(v638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1559;
  v1->m_Items[211] = (DataMasterBase_o *)v638;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[211], (int32_t)v638, v639, v640);
  v641 = (ServantFilterMaster_o *)sub_1B887FC(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v641, 0LL);
  if ( v641 )
  {
    v3 = sub_1B886EC(v641, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1559;
  v1->m_Items[212] = (DataMasterBase_o *)v641;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[212], (int32_t)v641, v642, v643);
  v644 = (CombineCostumeMaster_o *)sub_1B887FC(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v644, 0LL);
  if ( v644 )
  {
    v3 = sub_1B886EC(v644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1559;
  v1->m_Items[213] = (DataMasterBase_o *)v644;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[213], (int32_t)v644, v645, v646);
  v647 = (ServantCostumeMaster_o *)sub_1B887FC(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v647, 0LL);
  if ( v647 )
  {
    v3 = sub_1B886EC(v647, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1559;
  v1->m_Items[214] = (DataMasterBase_o *)v647;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[214], (int32_t)v647, v648, v649);
  v650 = (ServantCostumeReleaseMaster_o *)sub_1B887FC(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v650, 0LL);
  if ( v650 )
  {
    v3 = sub_1B886EC(v650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1559;
  v1->m_Items[215] = (DataMasterBase_o *)v650;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[215], (int32_t)v650, v651, v652);
  v653 = (UserFriendRequestHistoryMaster_o *)sub_1B887FC(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v653, 0LL);
  if ( v653 )
  {
    v3 = sub_1B886EC(v653, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1559;
  v1->m_Items[216] = (DataMasterBase_o *)v653;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[216], (int32_t)v653, v654, v655);
  v656 = (UserBlacklistMaster_o *)sub_1B887FC(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v656, 0LL);
  if ( v656 )
  {
    v3 = sub_1B886EC(v656, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1559;
  v1->m_Items[217] = (DataMasterBase_o *)v656;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[217], (int32_t)v656, v657, v658);
  v659 = (ItemSelectMaster_o *)sub_1B887FC(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v659, 0LL);
  if ( v659 )
  {
    v3 = sub_1B886EC(v659, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1559;
  v1->m_Items[218] = (DataMasterBase_o *)v659;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[218], (int32_t)v659, v660, v661);
  v662 = (TotalEventRaceMaster_o *)sub_1B887FC(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v662, 0LL);
  if ( v662 )
  {
    v3 = sub_1B886EC(v662, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1559;
  v1->m_Items[219] = (DataMasterBase_o *)v662;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[219], (int32_t)v662, v663, v664);
  v665 = (EventPointGroupAddMaster_o *)sub_1B887FC(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v665, 0LL);
  if ( v665 )
  {
    v3 = sub_1B886EC(v665, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1559;
  v1->m_Items[220] = (DataMasterBase_o *)v665;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[220], (int32_t)v665, v666, v667);
  v668 = (VoicePlayGroupMaster_o *)sub_1B887FC(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v668, 0LL);
  if ( v668 )
  {
    v3 = sub_1B886EC(v668, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1559;
  v1->m_Items[221] = (DataMasterBase_o *)v668;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[221], (int32_t)v668, v669, v670);
  v671 = (VoicePlayCondMaster_o *)sub_1B887FC(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v671, 0LL);
  if ( v671 )
  {
    v3 = sub_1B886EC(v671, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1559;
  v1->m_Items[222] = (DataMasterBase_o *)v671;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[222], (int32_t)v671, v672, v673);
  v674 = (GachaStoryAdjustMaster_o *)sub_1B887FC(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v674, 0LL);
  if ( v674 )
  {
    v3 = sub_1B886EC(v674, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1559;
  v1->m_Items[223] = (DataMasterBase_o *)v674;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[223], (int32_t)v674, v675, v676);
  v677 = (ServantFlagMaster_o *)sub_1B887FC(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v677, 0LL);
  if ( v677 )
  {
    v3 = sub_1B886EC(v677, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1559;
  v1->m_Items[224] = (DataMasterBase_o *)v677;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[224], (int32_t)v677, v678, v679);
  v680 = (ServantFlagReleaseMaster_o *)sub_1B887FC(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v680, 0LL);
  if ( v680 )
  {
    v3 = sub_1B886EC(v680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1559;
  v1->m_Items[225] = (DataMasterBase_o *)v680;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[225], (int32_t)v680, v681, v682);
  v683 = (EventLocationCampaignMaster_o *)sub_1B887FC(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v683, 0LL);
  if ( v683 )
  {
    v3 = sub_1B886EC(v683, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1559;
  v1->m_Items[226] = (DataMasterBase_o *)v683;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[226], (int32_t)v683, v684, v685);
  v686 = (CampaignInfoMaster_o *)sub_1B887FC(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v686, 0LL);
  if ( v686 )
  {
    v3 = sub_1B886EC(v686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1559;
  v1->m_Items[227] = (DataMasterBase_o *)v686;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[227], (int32_t)v686, v687, v688);
  v689 = (DialogMessageMaster_o *)sub_1B887FC(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v689, 0LL);
  if ( v689 )
  {
    v3 = sub_1B886EC(v689, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1559;
  v1->m_Items[228] = (DataMasterBase_o *)v689;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[228], (int32_t)v689, v690, v691);
  v692 = (ServantIndividualityMaster_o *)sub_1B887FC(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v692, 0LL);
  if ( v692 )
  {
    v3 = sub_1B886EC(v692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1559;
  v1->m_Items[229] = (DataMasterBase_o *)v692;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[229], (int32_t)v692, v693, v694);
  v695 = (BoardMessageMaster_o *)sub_1B887FC(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v695, 0LL);
  if ( v695 )
  {
    v3 = sub_1B886EC(v695, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1559;
  v1->m_Items[230] = (DataMasterBase_o *)v695;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[230], (int32_t)v695, v696, v697);
  v698 = (BoardMessageReleaseMaster_o *)sub_1B887FC(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v698, 0LL);
  if ( v698 )
  {
    v3 = sub_1B886EC(v698, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1559;
  v1->m_Items[231] = (DataMasterBase_o *)v698;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[231], (int32_t)v698, v699, v700);
  v701 = (EventServantFatigueMaster_o *)sub_1B887FC(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v701, 0LL);
  if ( v701 )
  {
    v3 = sub_1B886EC(v701, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1559;
  v1->m_Items[232] = (DataMasterBase_o *)v701;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[232], (int32_t)v701, v702, v703);
  v704 = (UserEventDeckMaster_o *)sub_1B887FC(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v704, 0LL);
  if ( v704 )
  {
    v3 = sub_1B886EC(v704, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1559;
  v1->m_Items[233] = (DataMasterBase_o *)v704;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[233], (int32_t)v704, v705, v706);
  v707 = (EventTowerMaster_o *)sub_1B887FC(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v707, 0LL);
  if ( v707 )
  {
    v3 = sub_1B886EC(v707, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1559;
  v1->m_Items[234] = (DataMasterBase_o *)v707;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[234], (int32_t)v707, v708, v709);
  v710 = (EventTowerRewardMaster_o *)sub_1B887FC(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v710, 0LL);
  if ( v710 )
  {
    v3 = sub_1B886EC(v710, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1559;
  v1->m_Items[235] = (DataMasterBase_o *)v710;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[235], (int32_t)v710, v711, v712);
  v713 = (EventBulletinBoardMaster_o *)sub_1B887FC(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v713, 0LL);
  if ( v713 )
  {
    v3 = sub_1B886EC(v713, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1559;
  v1->m_Items[236] = (DataMasterBase_o *)v713;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[236], (int32_t)v713, v714, v715);
  v716 = (EventBulletinBoardReleaseMaster_o *)sub_1B887FC(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v716, 0LL);
  if ( v716 )
  {
    v3 = sub_1B886EC(v716, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1559;
  v1->m_Items[237] = (DataMasterBase_o *)v716;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[237], (int32_t)v716, v717, v718);
  v719 = (EventFactoryMaster_o *)sub_1B887FC(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v719, 0LL);
  if ( v719 )
  {
    v3 = sub_1B886EC(v719, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1559;
  v1->m_Items[238] = (DataMasterBase_o *)v719;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[238], (int32_t)v719, v720, v721);
  v722 = (ShopGroupMaster_o *)sub_1B887FC(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v722, 0LL);
  if ( v722 )
  {
    v3 = sub_1B886EC(v722, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1559;
  v1->m_Items[239] = (DataMasterBase_o *)v722;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[239], (int32_t)v722, v723, v724);
  v725 = (AuraEffectMaster_o *)sub_1B887FC(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v725, 0LL);
  if ( v725 )
  {
    v3 = sub_1B886EC(v725, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1559;
  v1->m_Items[240] = (DataMasterBase_o *)v725;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[240], (int32_t)v725, v726, v727);
  v728 = (AuraEffectPosOverwriteMaster_o *)sub_1B887FC(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v728, 0LL);
  if ( v728 )
  {
    v3 = sub_1B886EC(v728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1559;
  v1->m_Items[241] = (DataMasterBase_o *)v728;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[241], (int32_t)v728, v729, v730);
  v731 = (UserEventMissionFixMaster_o *)sub_1B887FC(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v731, 0LL);
  if ( v731 )
  {
    v3 = sub_1B886EC(v731, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1559;
  v1->m_Items[242] = (DataMasterBase_o *)v731;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[242], (int32_t)v731, v732, v733);
  v734 = (NotEndEventMissionFixMaster_o *)sub_1B887FC(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v734, 0LL);
  if ( v734 )
  {
    v3 = sub_1B886EC(v734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1559;
  v1->m_Items[243] = (DataMasterBase_o *)v734;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[243], (int32_t)v734, v735, v736);
  v737 = (EnemyMstMaster_o *)sub_1B887FC(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v737, 0LL);
  if ( v737 )
  {
    v3 = sub_1B886EC(v737, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1559;
  v1->m_Items[244] = (DataMasterBase_o *)v737;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[244], (int32_t)v737, v738, v739);
  v740 = (EnemyMstBattleMaster_o *)sub_1B887FC(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v740, 0LL);
  if ( v740 )
  {
    v3 = sub_1B886EC(v740, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1559;
  v1->m_Items[245] = (DataMasterBase_o *)v740;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[245], (int32_t)v740, v741, v742);
  v743 = (ServantSkillReleaseMaster_o *)sub_1B887FC(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v743, 0LL);
  if ( v743 )
  {
    v3 = sub_1B886EC(v743, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1559;
  v1->m_Items[246] = (DataMasterBase_o *)v743;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[246], (int32_t)v743, v744, v745);
  v746 = (ServantPassiveSkillReleaseMaster_o *)sub_1B887FC(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v746, 0LL);
  if ( v746 )
  {
    v3 = sub_1B886EC(v746, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1559;
  v1->m_Items[247] = (DataMasterBase_o *)v746;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[247], (int32_t)v746, v747, v748);
  v749 = (ServantTreasureDeviceReleaseMaster_o *)sub_1B887FC(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v749, 0LL);
  if ( v749 )
  {
    v3 = sub_1B886EC(v749, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1559;
  v1->m_Items[248] = (DataMasterBase_o *)v749;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[248], (int32_t)v749, v750, v751);
  v752 = (MapGimmickReleaseMaster_o *)sub_1B887FC(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v752, 0LL);
  if ( v752 )
  {
    v3 = sub_1B886EC(v752, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1559;
  v1->m_Items[249] = (DataMasterBase_o *)v752;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[249], (int32_t)v752, v753, v754);
  v755 = (CommandCodeMaster_o *)sub_1B887FC(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v755, 0LL);
  if ( v755 )
  {
    v3 = sub_1B886EC(v755, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1559;
  v1->m_Items[250] = (DataMasterBase_o *)v755;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[250], (int32_t)v755, v756, v757);
  v758 = (ServantCommandCodeUnlockMaster_o *)sub_1B887FC(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v758, 0LL);
  if ( v758 )
  {
    v3 = sub_1B886EC(v758, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1559;
  v1->m_Items[251] = (DataMasterBase_o *)v758;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[251], (int32_t)v758, v759, v760);
  v761 = (UserCommandCodeMaster_o *)sub_1B887FC(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v761, 0LL);
  if ( v761 )
  {
    v3 = sub_1B886EC(v761, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1559;
  v1->m_Items[252] = (DataMasterBase_o *)v761;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[252], (int32_t)v761, v762, v763);
  v764 = (UserCommandCodeCollectionMaster_o *)sub_1B887FC(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v764, 0LL);
  if ( v764 )
  {
    v3 = sub_1B886EC(v764, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1559;
  v1->m_Items[253] = (DataMasterBase_o *)v764;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[253], (int32_t)v764, v765, v766);
  v767 = (UserServantCommandCodeMaster_o *)sub_1B887FC(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v767, 0LL);
  if ( v767 )
  {
    v3 = sub_1B886EC(v767, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1559;
  v1->m_Items[254] = (DataMasterBase_o *)v767;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[254], (int32_t)v767, v768, v769);
  v770 = (UserServantCommandCardMaster_o *)sub_1B887FC(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v770, 0LL);
  if ( v770 )
  {
    v3 = sub_1B886EC(v770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1559;
  v1->m_Items[255] = (DataMasterBase_o *)v770;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[255], (int32_t)v770, v771, v772);
  v773 = (CommandCardRankParamMaster_o *)sub_1B887FC(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v773, 0LL);
  if ( v773 )
  {
    v3 = sub_1B886EC(v773, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1559;
  v1->m_Items[256] = (DataMasterBase_o *)v773;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[256], (int32_t)v773, v774, v775);
  v776 = (CommandCodeSkillMaster_o *)sub_1B887FC(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v776, 0LL);
  if ( v776 )
  {
    v3 = sub_1B886EC(v776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1559;
  v1->m_Items[257] = (DataMasterBase_o *)v776;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[257], (int32_t)v776, v777, v778);
  v779 = (CommandCodeSkillReleaseMaster_o *)sub_1B887FC(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v779, 0LL);
  if ( v779 )
  {
    v3 = sub_1B886EC(v779, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1559;
  v1->m_Items[258] = (DataMasterBase_o *)v779;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[258], (int32_t)v779, v780, v781);
  v782 = (CommandCodeCommentMaster_o *)sub_1B887FC(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v782, 0LL);
  if ( v782 )
  {
    v3 = sub_1B886EC(v782, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1559;
  v1->m_Items[259] = (DataMasterBase_o *)v782;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[259], (int32_t)v782, v783, v784);
  v785 = (EventStatusMaster_o *)sub_1B887FC(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v785, 0LL);
  if ( v785 )
  {
    v3 = sub_1B886EC(v785, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1559;
  v1->m_Items[260] = (DataMasterBase_o *)v785;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[260], (int32_t)v785, v786, v787);
  v788 = (EventStatusQuestMaster_o *)sub_1B887FC(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v788, 0LL);
  if ( v788 )
  {
    v3 = sub_1B886EC(v788, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1559;
  v1->m_Items[261] = (DataMasterBase_o *)v788;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[261], (int32_t)v788, v789, v790);
  v791 = (CommonRestrictionMaster_o *)sub_1B887FC(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v791, 0LL);
  if ( v791 )
  {
    v3 = sub_1B886EC(v791, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1559;
  v1->m_Items[262] = (DataMasterBase_o *)v791;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[262], (int32_t)v791, v792, v793);
  v794 = (EventPointBuffMaster_o *)sub_1B887FC(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v794, 0LL);
  if ( v794 )
  {
    v3 = sub_1B886EC(v794, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1559;
  v1->m_Items[263] = (DataMasterBase_o *)v794;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[263], (int32_t)v794, v795, v796);
  v797 = (UserFollowMaster_o *)sub_1B887FC(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v797, 0LL);
  if ( v797 )
  {
    v3 = sub_1B886EC(v797, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1559;
  v1->m_Items[264] = (DataMasterBase_o *)v797;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[264], (int32_t)v797, v798, v799);
  v800 = (EventRewardGuideReleaseMaster_o *)sub_1B887FC(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v800, 0LL);
  if ( v800 )
  {
    v3 = sub_1B886EC(v800, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1559;
  v1->m_Items[265] = (DataMasterBase_o *)v800;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[265], (int32_t)v800, v801, v802);
  v803 = (NpcServantEquipMaster_o *)sub_1B887FC(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v803, 0LL);
  if ( v803 )
  {
    v3 = sub_1B886EC(v803, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1559;
  v1->m_Items[266] = (DataMasterBase_o *)v803;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[266], (int32_t)v803, v804, v805);
  v806 = (EventCampaignReleaseMaster_o *)sub_1B887FC(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v806, 0LL);
  if ( v806 )
  {
    v3 = sub_1B886EC(v806, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1559;
  v1->m_Items[267] = (DataMasterBase_o *)v806;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[267], (int32_t)v806, v807, v808);
  v809 = (ServantMaterialFolderMaster_o *)sub_1B887FC(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v809, 0LL);
  if ( v809 )
  {
    v3 = sub_1B886EC(v809, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1559;
  v1->m_Items[268] = (DataMasterBase_o *)v809;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[268], (int32_t)v809, v810, v811);
  v812 = (EventEquipSkillReleaseMaster_o *)sub_1B887FC(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v812, 0LL);
  if ( v812 )
  {
    v3 = sub_1B886EC(v812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1559;
  v1->m_Items[269] = (DataMasterBase_o *)v812;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[269], (int32_t)v812, v813, v814);
  v815 = (EventPointActivityMaster_o *)sub_1B887FC(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v815, 0LL);
  if ( v815 )
  {
    v3 = sub_1B886EC(v815, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1559;
  v1->m_Items[270] = (DataMasterBase_o *)v815;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[270], (int32_t)v815, v816, v817);
  v818 = (FunctionCategoryMaster_o *)sub_1B887FC(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v818, 0LL);
  if ( v818 )
  {
    v3 = sub_1B886EC(v818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1559;
  v1->m_Items[271] = (DataMasterBase_o *)v818;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[271], (int32_t)v818, v819, v820);
  v821 = (QuestPickupMaster_o *)sub_1B887FC(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v821, 0LL);
  if ( v821 )
  {
    v3 = sub_1B886EC(v821, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1559;
  v1->m_Items[272] = (DataMasterBase_o *)v821;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[272], (int32_t)v821, v822, v823);
  v824 = (EventUiMaster_o *)sub_1B887FC(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v824, 0LL);
  if ( v824 )
  {
    v3 = sub_1B886EC(v824, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1559;
  v1->m_Items[273] = (DataMasterBase_o *)v824;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[273], (int32_t)v824, v825, v826);
  v827 = (EventUiReleaseMaster_o *)sub_1B887FC(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v827, 0LL);
  if ( v827 )
  {
    v3 = sub_1B886EC(v827, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1559;
  v1->m_Items[274] = (DataMasterBase_o *)v827;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[274], (int32_t)v827, v828, v829);
  v830 = (EventUiValueMaster_o *)sub_1B887FC(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v830, 0LL);
  if ( v830 )
  {
    v3 = sub_1B886EC(v830, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1559;
  v1->m_Items[275] = (DataMasterBase_o *)v830;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[275], (int32_t)v830, v831, v832);
  v833 = (EventConquestRewardMaster_o *)sub_1B887FC(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v833, 0LL);
  if ( v833 )
  {
    v3 = sub_1B886EC(v833, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1559;
  v1->m_Items[276] = (DataMasterBase_o *)v833;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[276], (int32_t)v833, v834, v835);
  v836 = (NpcFollowerReleaseMaster_o *)sub_1B887FC(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v836, 0LL);
  if ( v836 )
  {
    v3 = sub_1B886EC(v836, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1559;
  v1->m_Items[277] = (DataMasterBase_o *)v836;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[277], (int32_t)v836, v837, v838);
  v839 = (EventBonusFilterMaster_o *)sub_1B887FC(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v839, 0LL);
  if ( v839 )
  {
    v3 = sub_1B886EC(v839, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1559;
  v1->m_Items[278] = (DataMasterBase_o *)v839;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[278], (int32_t)v839, v840, v841);
  v842 = (EventBonusFilterGroupInfoMaster_o *)sub_1B887FC(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v842, 0LL);
  if ( v842 )
  {
    v3 = sub_1B886EC(v842, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1559;
  v1->m_Items[279] = (DataMasterBase_o *)v842;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[279], (int32_t)v842, v843, v844);
  v845 = (EventBonusFilterGroupMemberMaster_o *)sub_1B887FC(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v845, 0LL);
  if ( v845 )
  {
    v3 = sub_1B886EC(v845, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1559;
  v1->m_Items[280] = (DataMasterBase_o *)v845;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[280], (int32_t)v845, v846, v847);
  v848 = (UserGachaExtraCountMaster_o *)sub_1B887FC(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v848, 0LL);
  if ( v848 )
  {
    v3 = sub_1B886EC(v848, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1559;
  v1->m_Items[281] = (DataMasterBase_o *)v848;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[281], (int32_t)v848, v849, v850);
  v851 = (PrivilegeMaster_o *)sub_1B887FC(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v851, 0LL);
  if ( v851 )
  {
    v3 = sub_1B886EC(v851, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1559;
  v1->m_Items[282] = (DataMasterBase_o *)v851;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[282], (int32_t)v851, v852, v853);
  v854 = (UserPrivilegeMaster_o *)sub_1B887FC(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v854, 0LL);
  if ( v854 )
  {
    v3 = sub_1B886EC(v854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1559;
  v1->m_Items[283] = (DataMasterBase_o *)v854;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[283], (int32_t)v854, v855, v856);
  v857 = (UserQuestRouteMaster_o *)sub_1B887FC(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v857, 0LL);
  if ( v857 )
  {
    v3 = sub_1B886EC(v857, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1559;
  v1->m_Items[284] = (DataMasterBase_o *)v857;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[284], (int32_t)v857, v858, v859);
  v860 = (EventBossStatusUiMaster_o *)sub_1B887FC(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v860, 0LL);
  if ( v860 )
  {
    v3 = sub_1B886EC(v860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1559;
  v1->m_Items[285] = (DataMasterBase_o *)v860;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[285], (int32_t)v860, v861, v862);
  v863 = (CommonReleaseMaster_o *)sub_1B887FC(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v863, 0LL);
  if ( v863 )
  {
    v3 = sub_1B886EC(v863, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1559;
  v1->m_Items[286] = (DataMasterBase_o *)v863;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[286], (int32_t)v863, v864, v865);
  v866 = (QuestSpotReleaseMaster_o *)sub_1B887FC(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v866, 0LL);
  if ( v866 )
  {
    v3 = sub_1B886EC(v866, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1559;
  v1->m_Items[287] = (DataMasterBase_o *)v866;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[287], (int32_t)v866, v867, v868);
  v869 = (VoiceMaterialCondMaster_o *)sub_1B887FC(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v869, 0LL);
  if ( v869 )
  {
    v3 = sub_1B886EC(v869, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1559;
  v1->m_Items[288] = (DataMasterBase_o *)v869;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[288], (int32_t)v869, v870, v871);
  v872 = (ClassRelationOverwriteMaster_o *)sub_1B887FC(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v872, 0LL);
  if ( v872 )
  {
    v3 = sub_1B886EC(v872, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1559;
  v1->m_Items[289] = (DataMasterBase_o *)v872;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[289], (int32_t)v872, v873, v874);
  v875 = (EventGroupMaster_o *)sub_1B887FC(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v875, 0LL);
  if ( v875 )
  {
    v3 = sub_1B886EC(v875, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1559;
  v1->m_Items[290] = (DataMasterBase_o *)v875;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[290], (int32_t)v875, v876, v877);
  v878 = (TotalBoxGachaMaster_o *)sub_1B887FC(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v878, 0LL);
  if ( v878 )
  {
    v3 = sub_1B886EC(v878, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1559;
  v1->m_Items[291] = (DataMasterBase_o *)v878;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[291], (int32_t)v878, v879, v880);
  v881 = (ServantTreasureDeviceDamageMaster_o *)sub_1B887FC(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v881, 0LL);
  if ( v881 )
  {
    v3 = sub_1B886EC(v881, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1559;
  v1->m_Items[292] = (DataMasterBase_o *)v881;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[292], (int32_t)v881, v882, v883);
  v884 = (UserEventServantFatigueMaster_o *)sub_1B887FC(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v884, 0LL);
  if ( v884 )
  {
    v3 = sub_1B886EC(v884, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1559;
  v1->m_Items[293] = (DataMasterBase_o *)v884;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[293], (int32_t)v884, v885, v886);
  v887 = (EventRewardBgMaster_o *)sub_1B887FC(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v887, 0LL);
  if ( v887 )
  {
    v3 = sub_1B886EC(v887, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1559;
  v1->m_Items[294] = (DataMasterBase_o *)v887;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[294], (int32_t)v887, v888, v889);
  v890 = (EventFatigueRecoveryMaster_o *)sub_1B887FC(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v890, 0LL);
  if ( v890 )
  {
    v3 = sub_1B886EC(v890, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1559;
  v1->m_Items[295] = (DataMasterBase_o *)v890;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[295], (int32_t)v890, v891, v892);
  v893 = (EventBoostItemUsedMaster_o *)sub_1B887FC(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v893, 0LL);
  if ( v893 )
  {
    v3 = sub_1B886EC(v893, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1559;
  v1->m_Items[296] = (DataMasterBase_o *)v893;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[296], (int32_t)v893, v894, v895);
  v896 = (StatusEffectPosOverwriteMaster_o *)sub_1B887FC(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v896, 0LL);
  if ( v896 )
  {
    v3 = sub_1B886EC(v896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1559;
  v1->m_Items[297] = (DataMasterBase_o *)v896;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[297], (int32_t)v896, v897, v898);
  v899 = (QuestPhaseDetailAddMaster_o *)sub_1B887FC(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v899, 0LL);
  if ( v899 )
  {
    v3 = sub_1B886EC(v899, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1559;
  v1->m_Items[298] = (DataMasterBase_o *)v899;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[298], (int32_t)v899, v900, v901);
  v902 = (VoiceClosedMessageMaster_o *)sub_1B887FC(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v902, 0LL);
  if ( v902 )
  {
    v3 = sub_1B886EC(v902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1559;
  v1->m_Items[299] = (DataMasterBase_o *)v902;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[299], (int32_t)v902, v903, v904);
  v905 = (ReprintStageMaster_o *)sub_1B887FC(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v905, 0LL);
  if ( v905 )
  {
    v3 = sub_1B886EC(v905, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1559;
  v1->m_Items[300] = (DataMasterBase_o *)v905;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[300], (int32_t)v905, v906, v907);
  v908 = (UserCombineExpMaster_o *)sub_1B887FC(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v908, 0LL);
  if ( v908 )
  {
    v3 = sub_1B886EC(v908, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1559;
  v1->m_Items[301] = (DataMasterBase_o *)v908;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[301], (int32_t)v908, v909, v910);
  v911 = (EventBoardGameCellMaster_o *)sub_1B887FC(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v911, 0LL);
  if ( v911 )
  {
    v3 = sub_1B886EC(v911, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1559;
  v1->m_Items[302] = (DataMasterBase_o *)v911;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[302], (int32_t)v911, v912, v913);
  v914 = (EventBoardGameTokenMaster_o *)sub_1B887FC(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v914, 0LL);
  if ( v914 )
  {
    v3 = sub_1B886EC(v914, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1559;
  v1->m_Items[303] = (DataMasterBase_o *)v914;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[303], (int32_t)v914, v915, v916);
  v917 = (EventBoardGameTokenRewardMaster_o *)sub_1B887FC(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v917, 0LL);
  if ( v917 )
  {
    v3 = sub_1B886EC(v917, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1559;
  v1->m_Items[304] = (DataMasterBase_o *)v917;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[304], (int32_t)v917, v918, v919);
  v920 = (UserEventBoardGameTokenMaster_o *)sub_1B887FC(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v920, 0LL);
  if ( v920 )
  {
    v3 = sub_1B886EC(v920, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1559;
  v1->m_Items[305] = (DataMasterBase_o *)v920;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[305], (int32_t)v920, v921, v922);
  v923 = (ServantAnimationOverwriteMaster_o *)sub_1B887FC(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v923, 0LL);
  if ( v923 )
  {
    v3 = sub_1B886EC(v923, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1559;
  v1->m_Items[306] = (DataMasterBase_o *)v923;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[306], (int32_t)v923, v924, v925);
  v926 = (OpeningMovieMaster_o *)sub_1B887FC(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v926, 0LL);
  if ( v926 )
  {
    v3 = sub_1B886EC(v926, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1559;
  v1->m_Items[307] = (DataMasterBase_o *)v926;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[307], (int32_t)v926, v927, v928);
  v929 = (ServantLimitSpoilerProtectionMaster_o *)sub_1B887FC(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v929, 0LL);
  if ( v929 )
  {
    v3 = sub_1B886EC(v929, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1559;
  v1->m_Items[308] = (DataMasterBase_o *)v929;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[308], (int32_t)v929, v930, v931);
  v932 = (PickupUserFollowerMaster_o *)sub_1B887FC(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v932, 0LL);
  if ( v932 )
  {
    v3 = sub_1B886EC(v932, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1559;
  v1->m_Items[309] = (DataMasterBase_o *)v932;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[309], (int32_t)v932, v933, v934);
  v935 = (ServantCollectionMaster_o *)sub_1B887FC(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v935, 0LL);
  if ( v935 )
  {
    v3 = sub_1B886EC(v935, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1559;
  v1->m_Items[310] = (DataMasterBase_o *)v935;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[310], (int32_t)v935, v936, v937);
  v938 = (GachaBehaviorMaster_o *)sub_1B887FC(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v938, 0LL);
  if ( v938 )
  {
    v3 = sub_1B886EC(v938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1559;
  v1->m_Items[311] = (DataMasterBase_o *)v938;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[311], (int32_t)v938, v939, v940);
  v941 = (EventQuestCooltimeMaster_o *)sub_1B887FC(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v941, 0LL);
  if ( v941 )
  {
    v3 = sub_1B886EC(v941, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1559;
  v1->m_Items[312] = (DataMasterBase_o *)v941;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[312], (int32_t)v941, v942, v943);
  v944 = (UserEventQuestCooltimeMaster_o *)sub_1B887FC(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v944, 0LL);
  if ( v944 )
  {
    v3 = sub_1B886EC(v944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1559;
  v1->m_Items[313] = (DataMasterBase_o *)v944;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[313], (int32_t)v944, v945, v946);
  v947 = (BoostMaster_o *)sub_1B887FC(BoostMaster_TypeInfo);
  BoostMaster___ctor(v947, 0LL);
  if ( v947 )
  {
    v3 = sub_1B886EC(v947, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1559;
  v1->m_Items[314] = (DataMasterBase_o *)v947;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[314], (int32_t)v947, v948, v949);
  v950 = (WarBoardMaster_o *)sub_1B887FC(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v950, 0LL);
  if ( v950 )
  {
    v3 = sub_1B886EC(v950, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1559;
  v1->m_Items[315] = (DataMasterBase_o *)v950;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[315], (int32_t)v950, v951, v952);
  v953 = (WarBoardSquareMaster_o *)sub_1B887FC(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v953, 0LL);
  if ( v953 )
  {
    v3 = sub_1B886EC(v953, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1559;
  v1->m_Items[316] = (DataMasterBase_o *)v953;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[316], (int32_t)v953, v954, v955);
  v956 = (WarBoardRoadMaster_o *)sub_1B887FC(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v956, 0LL);
  if ( v956 )
  {
    v3 = sub_1B886EC(v956, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1559;
  v1->m_Items[317] = (DataMasterBase_o *)v956;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[317], (int32_t)v956, v957, v958);
  v959 = (WarBoardStageMaster_o *)sub_1B887FC(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v959, 0LL);
  if ( v959 )
  {
    v3 = sub_1B886EC(v959, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1559;
  v1->m_Items[318] = (DataMasterBase_o *)v959;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[318], (int32_t)v959, v960, v961);
  v962 = (WarBoardActionPointMaster_o *)sub_1B887FC(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v962, 0LL);
  if ( v962 )
  {
    v3 = sub_1B886EC(v962, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1559;
  v1->m_Items[319] = (DataMasterBase_o *)v962;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[319], (int32_t)v962, v963, v964);
  v965 = (WarBoardActionTrendMaster_o *)sub_1B887FC(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v965, 0LL);
  if ( v965 )
  {
    v3 = sub_1B886EC(v965, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1559;
  v1->m_Items[320] = (DataMasterBase_o *)v965;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[320], (int32_t)v965, v966, v967);
  v968 = (WarBoardTacticalTrendMaster_o *)sub_1B887FC(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v968, 0LL);
  if ( v968 )
  {
    v3 = sub_1B886EC(v968, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1559;
  v1->m_Items[321] = (DataMasterBase_o *)v968;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[321], (int32_t)v968, v969, v970);
  v971 = (WarBoardStageLayoutMaster_o *)sub_1B887FC(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v971, 0LL);
  if ( v971 )
  {
    v3 = sub_1B886EC(v971, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1559;
  v1->m_Items[322] = (DataMasterBase_o *)v971;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[322], (int32_t)v971, v972, v973);
  v974 = (WarBoardStageNpcMaster_o *)sub_1B887FC(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v974, 0LL);
  if ( v974 )
  {
    v3 = sub_1B886EC(v974, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1559;
  v1->m_Items[323] = (DataMasterBase_o *)v974;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[323], (int32_t)v974, v975, v976);
  v977 = (WarBoardStageWallMaster_o *)sub_1B887FC(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v977, 0LL);
  if ( v977 )
  {
    v3 = sub_1B886EC(v977, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1559;
  v1->m_Items[324] = (DataMasterBase_o *)v977;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[324], (int32_t)v977, v978, v979);
  v980 = (WarBoardAIMaster_o *)sub_1B887FC(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v980, 0LL);
  if ( v980 )
  {
    v3 = sub_1B886EC(v980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1559;
  v1->m_Items[325] = (DataMasterBase_o *)v980;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[325], (int32_t)v980, v981, v982);
  v983 = (WarBoardRatingBaseMaster_o *)sub_1B887FC(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v983, 0LL);
  if ( v983 )
  {
    v3 = sub_1B886EC(v983, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1559;
  v1->m_Items[326] = (DataMasterBase_o *)v983;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[326], (int32_t)v983, v984, v985);
  v986 = (WarBoardRatingOffsetMaster_o *)sub_1B887FC(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v986, 0LL);
  if ( v986 )
  {
    v3 = sub_1B886EC(v986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1559;
  v1->m_Items[327] = (DataMasterBase_o *)v986;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[327], (int32_t)v986, v987, v988);
  v989 = (WarBoardItemMaster_o *)sub_1B887FC(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v989, 0LL);
  if ( v989 )
  {
    v3 = sub_1B886EC(v989, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1559;
  v1->m_Items[328] = (DataMasterBase_o *)v989;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[328], (int32_t)v989, v990, v991);
  v992 = (WarBoardTreasureMaster_o *)sub_1B887FC(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v992, 0LL);
  if ( v992 )
  {
    v3 = sub_1B886EC(v992, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1559;
  v1->m_Items[329] = (DataMasterBase_o *)v992;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[329], (int32_t)v992, v993, v994);
  v995 = (WarBoardQuestMaster_o *)sub_1B887FC(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v995, 0LL);
  if ( v995 )
  {
    v3 = sub_1B886EC(v995, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1559;
  v1->m_Items[330] = (DataMasterBase_o *)v995;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[330], (int32_t)v995, v996, v997);
  v998 = (WarBoardDataMaster_o *)sub_1B887FC(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v998, 0LL);
  if ( v998 )
  {
    v3 = sub_1B886EC(v998, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1559;
  v1->m_Items[331] = (DataMasterBase_o *)v998;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[331], (int32_t)v998, v999, v1000);
  v1001 = (WarBoardIndividualityClassMaster_o *)sub_1B887FC(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1001, 0LL);
  if ( v1001 )
  {
    v3 = sub_1B886EC(v1001, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1559;
  v1->m_Items[332] = (DataMasterBase_o *)v1001;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[332], (int32_t)v1001, v1002, v1003);
  v1004 = (WarBoardActionTrendConditionMaster_o *)sub_1B887FC(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1004, 0LL);
  if ( v1004 )
  {
    v3 = sub_1B886EC(v1004, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1559;
  v1->m_Items[333] = (DataMasterBase_o *)v1004;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[333], (int32_t)v1004, v1005, v1006);
  v1007 = (WarBoardActionPointClassMaster_o *)sub_1B887FC(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1007, 0LL);
  if ( v1007 )
  {
    v3 = sub_1B886EC(v1007, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1559;
  v1->m_Items[334] = (DataMasterBase_o *)v1007;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[334], (int32_t)v1007, v1008, v1009);
  v1010 = (EventPanelMapMaster_o *)sub_1B887FC(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1010, 0LL);
  if ( v1010 )
  {
    v3 = sub_1B886EC(v1010, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1559;
  v1->m_Items[335] = (DataMasterBase_o *)v1010;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[335], (int32_t)v1010, v1011, v1012);
  v1013 = (EventPanelMapDetailMaster_o *)sub_1B887FC(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1013, 0LL);
  if ( v1013 )
  {
    v3 = sub_1B886EC(v1013, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1559;
  v1->m_Items[336] = (DataMasterBase_o *)v1013;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[336], (int32_t)v1013, v1014, v1015);
  v1016 = (EventPanelSpotMaster_o *)sub_1B887FC(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1016, 0LL);
  if ( v1016 )
  {
    v3 = sub_1B886EC(v1016, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1559;
  v1->m_Items[337] = (DataMasterBase_o *)v1016;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[337], (int32_t)v1016, v1017, v1018);
  v1019 = (EventPanelScanMaster_o *)sub_1B887FC(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1019, 0LL);
  if ( v1019 )
  {
    v3 = sub_1B886EC(v1019, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1559;
  v1->m_Items[338] = (DataMasterBase_o *)v1019;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[338], (int32_t)v1019, v1020, v1021);
  v1022 = (CommonConsumeMaster_o *)sub_1B887FC(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1022, 0LL);
  if ( v1022 )
  {
    v3 = sub_1B886EC(v1022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1559;
  v1->m_Items[339] = (DataMasterBase_o *)v1022;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[339], (int32_t)v1022, v1023, v1024);
  v1025 = (UserEventMapMaster_o *)sub_1B887FC(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1025, 0LL);
  if ( v1025 )
  {
    v3 = sub_1B886EC(v1025, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1559;
  v1->m_Items[340] = (DataMasterBase_o *)v1025;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[340], (int32_t)v1025, v1026, v1027);
  v1028 = (UserEventSpotMaster_o *)sub_1B887FC(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1028, 0LL);
  if ( v1028 )
  {
    v3 = sub_1B886EC(v1028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1559;
  v1->m_Items[341] = (DataMasterBase_o *)v1028;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[341], (int32_t)v1028, v1029, v1030);
  v1031 = (WarGroupMaster_o *)sub_1B887FC(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1031, 0LL);
  if ( v1031 )
  {
    v3 = sub_1B886EC(v1031, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1559;
  v1->m_Items[342] = (DataMasterBase_o *)v1031;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[342], (int32_t)v1031, v1032, v1033);
  v1034 = (ServantLimitImageMaster_o *)sub_1B887FC(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1034, 0LL);
  if ( v1034 )
  {
    v3 = sub_1B886EC(v1034, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1559;
  v1->m_Items[343] = (DataMasterBase_o *)v1034;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[343], (int32_t)v1034, v1035, v1036);
  v1037 = (FriendshipQuestDialogInfoMaster_o *)sub_1B887FC(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1037, 0LL);
  if ( v1037 )
  {
    v3 = sub_1B886EC(v1037, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1559;
  v1->m_Items[344] = (DataMasterBase_o *)v1037;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[344], (int32_t)v1037, v1038, v1039);
  v1040 = (QuestRestrictionInfoMaster_o *)sub_1B887FC(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1040, 0LL);
  if ( v1040 )
  {
    v3 = sub_1B886EC(v1040, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1559;
  v1->m_Items[345] = (DataMasterBase_o *)v1040;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[345], (int32_t)v1040, v1041, v1042);
  v1043 = (AssistMaster_o *)sub_1B887FC(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1043, 0LL);
  if ( v1043 )
  {
    v3 = sub_1B886EC(v1043, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1559;
  v1->m_Items[346] = (DataMasterBase_o *)v1043;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[346], (int32_t)v1043, v1044, v1045);
  v1046 = (WarBoardEffectMaster_o *)sub_1B887FC(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1046, 0LL);
  if ( v1046 )
  {
    v3 = sub_1B886EC(v1046, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1559;
  v1->m_Items[347] = (DataMasterBase_o *)v1046;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[347], (int32_t)v1046, v1047, v1048);
  v1049 = (WarBoardOnboardSkillMaster_o *)sub_1B887FC(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1049, 0LL);
  if ( v1049 )
  {
    v3 = sub_1B886EC(v1049, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1559;
  v1->m_Items[348] = (DataMasterBase_o *)v1049;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[348], (int32_t)v1049, v1050, v1051);
  v1052 = (BeforeBirthDayMaster_o *)sub_1B887FC(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1052, 0LL);
  if ( v1052 )
  {
    v3 = sub_1B886EC(v1052, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1559;
  v1->m_Items[349] = (DataMasterBase_o *)v1052;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[349], (int32_t)v1052, v1053, v1054);
  v1055 = (LoginQuestMaster_o *)sub_1B887FC(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1055, 0LL);
  if ( v1055 )
  {
    v3 = sub_1B886EC(v1055, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1559;
  v1->m_Items[350] = (DataMasterBase_o *)v1055;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[350], (int32_t)v1055, v1056, v1057);
  v1058 = (EventCombineCostumeMaster_o *)sub_1B887FC(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1058, 0LL);
  if ( v1058 )
  {
    v3 = sub_1B886EC(v1058, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1559;
  v1->m_Items[351] = (DataMasterBase_o *)v1058;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[351], (int32_t)v1058, v1059, v1060);
  v1061 = (WarBoardStagePieceDetailMaster_o *)sub_1B887FC(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1061, 0LL);
  if ( v1061 )
  {
    v3 = sub_1B886EC(v1061, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1559;
  v1->m_Items[352] = (DataMasterBase_o *)v1061;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[352], (int32_t)v1061, v1062, v1063);
  v1064 = (ServantTreasureDeviceAddMaster_o *)sub_1B887FC(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1064, 0LL);
  if ( v1064 )
  {
    v3 = sub_1B886EC(v1064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1559;
  v1->m_Items[353] = (DataMasterBase_o *)v1064;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[353], (int32_t)v1064, v1065, v1066);
  v1067 = (SkillAddMaster_o *)sub_1B887FC(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1067, 0LL);
  if ( v1067 )
  {
    v3 = sub_1B886EC(v1067, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1559;
  v1->m_Items[354] = (DataMasterBase_o *)v1067;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[354], (int32_t)v1067, v1068, v1069);
  v1070 = (ServantLvDetailMaster_o *)sub_1B887FC(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1070, 0LL);
  if ( v1070 )
  {
    v3 = sub_1B886EC(v1070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1559;
  v1->m_Items[355] = (DataMasterBase_o *)v1070;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[355], (int32_t)v1070, v1071, v1072);
  v1073 = (GachaAppendMaster_o *)sub_1B887FC(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1073, 0LL);
  if ( v1073 )
  {
    v3 = sub_1B886EC(v1073, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1559;
  v1->m_Items[356] = (DataMasterBase_o *)v1073;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[356], (int32_t)v1073, v1074, v1075);
  v1076 = (UserGachaDrawLogMaster_o *)sub_1B887FC(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1076, 0LL);
  if ( v1076 )
  {
    v3 = sub_1B886EC(v1076, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1559;
  v1->m_Items[357] = (DataMasterBase_o *)v1076;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[357], (int32_t)v1076, v1077, v1078);
  v1079 = (ServantAppendPassiveSkillMaster_o *)sub_1B887FC(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1079, 0LL);
  if ( v1079 )
  {
    v3 = sub_1B886EC(v1079, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1559;
  v1->m_Items[358] = (DataMasterBase_o *)v1079;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[358], (int32_t)v1079, v1080, v1081);
  v1082 = (UserServantAppendPassiveSkillMaster_o *)sub_1B887FC(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1082, 0LL);
  if ( v1082 )
  {
    v3 = sub_1B886EC(v1082, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1559;
  v1->m_Items[359] = (DataMasterBase_o *)v1082;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[359], (int32_t)v1082, v1083, v1084);
  v1085 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1B887FC(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1085, 0LL);
  if ( v1085 )
  {
    v3 = sub_1B886EC(v1085, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1559;
  v1->m_Items[360] = (DataMasterBase_o *)v1085;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[360], (int32_t)v1085, v1086, v1087);
  v1088 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1B887FC(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1088, 0LL);
  if ( v1088 )
  {
    v3 = sub_1B886EC(v1088, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1559;
  v1->m_Items[361] = (DataMasterBase_o *)v1088;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[361], (int32_t)v1088, v1089, v1090);
  v1091 = (CombineAppendPassiveSkillMaster_o *)sub_1B887FC(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1091, 0LL);
  if ( v1091 )
  {
    v3 = sub_1B886EC(v1091, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1559;
  v1->m_Items[362] = (DataMasterBase_o *)v1091;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[362], (int32_t)v1091, v1092, v1093);
  v1094 = (SvtCoinMaster_o *)sub_1B887FC(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1094, 0LL);
  if ( v1094 )
  {
    v3 = sub_1B886EC(v1094, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1559;
  v1->m_Items[363] = (DataMasterBase_o *)v1094;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[363], (int32_t)v1094, v1095, v1096);
  v1097 = (UserSvtCoinMaster_o *)sub_1B887FC(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1097, 0LL);
  if ( v1097 )
  {
    v3 = sub_1B886EC(v1097, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1559;
  v1->m_Items[364] = (DataMasterBase_o *)v1097;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[364], (int32_t)v1097, v1098, v1099);
  v1100 = (ServantAddMaster_o *)sub_1B887FC(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1100, 0LL);
  if ( v1100 )
  {
    v3 = sub_1B886EC(v1100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1559;
  v1->m_Items[365] = (DataMasterBase_o *)v1100;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[365], (int32_t)v1100, v1101, v1102);
  v1103 = (TreasureBoxMaster_o *)sub_1B887FC(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1103, 0LL);
  if ( v1103 )
  {
    v3 = sub_1B886EC(v1103, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1559;
  v1->m_Items[366] = (DataMasterBase_o *)v1103;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[366], (int32_t)v1103, v1104, v1105);
  v1106 = (TreasureBoxGiftMaster_o *)sub_1B887FC(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1106, 0LL);
  if ( v1106 )
  {
    v3 = sub_1B886EC(v1106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1559;
  v1->m_Items[367] = (DataMasterBase_o *)v1106;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[367], (int32_t)v1106, v1107, v1108);
  v1109 = (TreasureBoxTalkMaster_o *)sub_1B887FC(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1109, 0LL);
  if ( v1109 )
  {
    v3 = sub_1B886EC(v1109, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1559;
  v1->m_Items[368] = (DataMasterBase_o *)v1109;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[368], (int32_t)v1109, v1110, v1111);
  v1112 = (UserEventExpeditionMaster_o *)sub_1B887FC(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1112, 0LL);
  if ( v1112 )
  {
    v3 = sub_1B886EC(v1112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1559;
  v1->m_Items[369] = (DataMasterBase_o *)v1112;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[369], (int32_t)v1112, v1113, v1114);
  v1115 = (EventExpeditionMaster_o *)sub_1B887FC(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1115, 0LL);
  if ( v1115 )
  {
    v3 = sub_1B886EC(v1115, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1559;
  v1->m_Items[370] = (DataMasterBase_o *)v1115;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[370], (int32_t)v1115, v1116, v1117);
  v1118 = (EventExpeditionPieceMaster_o *)sub_1B887FC(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1118, 0LL);
  if ( v1118 )
  {
    v3 = sub_1B886EC(v1118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1559;
  v1->m_Items[371] = (DataMasterBase_o *)v1118;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[371], (int32_t)v1118, v1119, v1120);
  v1121 = (EventRecipeMaster_o *)sub_1B887FC(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1121, 0LL);
  if ( v1121 )
  {
    v3 = sub_1B886EC(v1121, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1559;
  v1->m_Items[372] = (DataMasterBase_o *)v1121;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[372], (int32_t)v1121, v1122, v1123);
  v1124 = (EventRecipeGiftMaster_o *)sub_1B887FC(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1124, 0LL);
  if ( v1124 )
  {
    v3 = sub_1B886EC(v1124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1559;
  v1->m_Items[373] = (DataMasterBase_o *)v1124;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[373], (int32_t)v1124, v1125, v1126);
  v1127 = (UserEventFortificationMaster_o *)sub_1B887FC(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1127, 0LL);
  if ( v1127 )
  {
    v3 = sub_1B886EC(v1127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1559;
  v1->m_Items[374] = (DataMasterBase_o *)v1127;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[374], (int32_t)v1127, v1128, v1129);
  v1130 = (EventFortificationMaster_o *)sub_1B887FC(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1130, 0LL);
  if ( v1130 )
  {
    v3 = sub_1B886EC(v1130, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1559;
  v1->m_Items[375] = (DataMasterBase_o *)v1130;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[375], (int32_t)v1130, v1131, v1132);
  v1133 = (EventFortificationDetailMaster_o *)sub_1B887FC(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1133, 0LL);
  if ( v1133 )
  {
    v3 = sub_1B886EC(v1133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1559;
  v1->m_Items[376] = (DataMasterBase_o *)v1133;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[376], (int32_t)v1133, v1134, v1135);
  v1136 = (EventFortificationSvtMaster_o *)sub_1B887FC(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1136, 0LL);
  if ( v1136 )
  {
    v3 = sub_1B886EC(v1136, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1559;
  v1->m_Items[377] = (DataMasterBase_o *)v1136;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[377], (int32_t)v1136, v1137, v1138);
  v1139 = (UserServantVoicePlayedMaster_o *)sub_1B887FC(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1139, 0LL);
  if ( v1139 )
  {
    v3 = sub_1B886EC(v1139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1559;
  v1->m_Items[378] = (DataMasterBase_o *)v1139;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[378], (int32_t)v1139, v1140, v1141);
  v1142 = (UpdateProfileDialogInfoMaster_o *)sub_1B887FC(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1142, 0LL);
  if ( v1142 )
  {
    v3 = sub_1B886EC(v1142, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1559;
  v1->m_Items[379] = (DataMasterBase_o *)v1142;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[379], (int32_t)v1142, v1143, v1144);
  v1145 = (SvtMaterialTdMaster_o *)sub_1B887FC(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1145, 0LL);
  if ( v1145 )
  {
    v3 = sub_1B886EC(v1145, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1559;
  v1->m_Items[380] = (DataMasterBase_o *)v1145;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[380], (int32_t)v1145, v1146, v1147);
  v1148 = (BattleMasterImageMaster_o *)sub_1B887FC(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1148, 0LL);
  if ( v1148 )
  {
    v3 = sub_1B886EC(v1148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1559;
  v1->m_Items[381] = (DataMasterBase_o *)v1148;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[381], (int32_t)v1148, v1149, v1150);
  v1151 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1B887FC(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1151, 0LL);
  if ( v1151 )
  {
    v3 = sub_1B886EC(v1151, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1559;
  v1->m_Items[382] = (DataMasterBase_o *)v1151;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[382], (int32_t)v1151, v1152, v1153);
  v1154 = (UserEventRandomMissionMaster_o *)sub_1B887FC(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1154, 0LL);
  if ( v1154 )
  {
    v3 = sub_1B886EC(v1154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1559;
  v1->m_Items[383] = (DataMasterBase_o *)v1154;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[383], (int32_t)v1154, v1155, v1156);
  v1157 = (EventProgressValueMaster_o *)sub_1B887FC(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1157, 0LL);
  if ( v1157 )
  {
    v3 = sub_1B886EC(v1157, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1559;
  v1->m_Items[384] = (DataMasterBase_o *)v1157;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[384], (int32_t)v1157, v1158, v1159);
  v1160 = (SvtMultiPortraitMaster_o *)sub_1B887FC(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1160, 0LL);
  if ( v1160 )
  {
    v3 = sub_1B886EC(v1160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1559;
  v1->m_Items[385] = (DataMasterBase_o *)v1160;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[385], (int32_t)v1160, v1161, v1162);
  v1163 = (EventRandomMissionMaster_o *)sub_1B887FC(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1163, 0LL);
  if ( v1163 )
  {
    v3 = sub_1B886EC(v1163, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1559;
  v1->m_Items[386] = (DataMasterBase_o *)v1163;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[386], (int32_t)v1163, v1164, v1165);
  v1166 = (UserGachaHistoryMaster_o *)sub_1B887FC(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1166, 0LL);
  if ( v1166 )
  {
    v3 = sub_1B886EC(v1166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1559;
  v1->m_Items[387] = (DataMasterBase_o *)v1166;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[387], (int32_t)v1166, v1167, v1168);
  v1169 = (UserCoinRoomMaster_o *)sub_1B887FC(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1169, 0LL);
  if ( v1169 )
  {
    v3 = sub_1B886EC(v1169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1559;
  v1->m_Items[388] = (DataMasterBase_o *)v1169;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[388], (int32_t)v1169, v1170, v1171);
  v1172 = (EventBuddyPointMaster_o *)sub_1B887FC(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1172, 0LL);
  if ( v1172 )
  {
    v3 = sub_1B886EC(v1172, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1559;
  v1->m_Items[389] = (DataMasterBase_o *)v1172;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[389], (int32_t)v1172, v1173, v1174);
  v1175 = (EventServantPointRankMaster_o *)sub_1B887FC(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1175, 0LL);
  if ( v1175 )
  {
    v3 = sub_1B886EC(v1175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1559;
  v1->m_Items[390] = (DataMasterBase_o *)v1175;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[390], (int32_t)v1175, v1176, v1177);
  v1178 = (UserEventServantPointMaster_o *)sub_1B887FC(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1178, 0LL);
  if ( v1178 )
  {
    v3 = sub_1B886EC(v1178, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1559;
  v1->m_Items[391] = (DataMasterBase_o *)v1178;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[391], (int32_t)v1178, v1179, v1180);
  v1181 = (FieldMotionMaster_o *)sub_1B887FC(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1181, 0LL);
  if ( v1181 )
  {
    v3 = sub_1B886EC(v1181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1559;
  v1->m_Items[392] = (DataMasterBase_o *)v1181;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[392], (int32_t)v1181, v1182, v1183);
  v1184 = (UserDeleteReservationMaster_o *)sub_1B887FC(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1184, 0LL);
  if ( v1184 )
  {
    v3 = sub_1B886EC(v1184, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1559;
  v1->m_Items[393] = (DataMasterBase_o *)v1184;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[393], (int32_t)v1184, v1185, v1186);
  v1187 = (ServantScriptMultipleMaster_o *)sub_1B887FC(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1187, 0LL);
  if ( v1187 )
  {
    v3 = sub_1B886EC(v1187, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1559;
  v1->m_Items[394] = (DataMasterBase_o *)v1187;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[394], (int32_t)v1187, v1188, v1189);
  v1190 = (EquipAddMaster_o *)sub_1B887FC(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1190, 0LL);
  if ( v1190 )
  {
    v3 = sub_1B886EC(v1190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1559;
  v1->m_Items[395] = (DataMasterBase_o *)v1190;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[395], (int32_t)v1190, v1191, v1192);
  v1193 = (QuestReleaseOverwriteMaster_o *)sub_1B887FC(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1193, 0LL);
  if ( v1193 )
  {
    v3 = sub_1B886EC(v1193, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1559;
  v1->m_Items[396] = (DataMasterBase_o *)v1193;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[396], (int32_t)v1193, v1194, v1195);
  v1196 = (UserEventAlloutBattleMaster_o *)sub_1B887FC(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1196, 0LL);
  if ( v1196 )
  {
    v3 = sub_1B886EC(v1196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1559;
  v1->m_Items[397] = (DataMasterBase_o *)v1196;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[397], (int32_t)v1196, v1197, v1198);
  v1199 = (QuestScriptMaterialNextMaster_o *)sub_1B887FC(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1199, 0LL);
  if ( v1199 )
  {
    v3 = sub_1B886EC(v1199, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1559;
  v1->m_Items[398] = (DataMasterBase_o *)v1199;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[398], (int32_t)v1199, v1200, v1201);
  v1202 = (EventDiggingMaster_o *)sub_1B887FC(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1202, 0LL);
  if ( v1202 )
  {
    v3 = sub_1B886EC(v1202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1559;
  v1->m_Items[399] = (DataMasterBase_o *)v1202;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[399], (int32_t)v1202, v1203, v1204);
  v1205 = (EventDiggingBlockMaster_o *)sub_1B887FC(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1205, 0LL);
  if ( v1205 )
  {
    v3 = sub_1B886EC(v1205, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1559;
  v1->m_Items[400] = (DataMasterBase_o *)v1205;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[400], (int32_t)v1205, v1206, v1207);
  v1208 = (EventDiggingRewardMaster_o *)sub_1B887FC(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1208, 0LL);
  if ( v1208 )
  {
    v3 = sub_1B886EC(v1208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1559;
  v1->m_Items[401] = (DataMasterBase_o *)v1208;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[401], (int32_t)v1208, v1209, v1210);
  v1211 = (UserEventDiggingMaster_o *)sub_1B887FC(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1211, 0LL);
  if ( v1211 )
  {
    v3 = sub_1B886EC(v1211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1559;
  v1->m_Items[402] = (DataMasterBase_o *)v1211;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[402], (int32_t)v1211, v1212, v1213);
  v1214 = (BattleMessageMaster_o *)sub_1B887FC(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1214, 0LL);
  if ( v1214 )
  {
    v3 = sub_1B886EC(v1214, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1559;
  v1->m_Items[403] = (DataMasterBase_o *)v1214;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[403], (int32_t)v1214, v1215, v1216);
  v1217 = (BattleMessageGroupMaster_o *)sub_1B887FC(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1217, 0LL);
  if ( v1217 )
  {
    v3 = sub_1B886EC(v1217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1559;
  v1->m_Items[404] = (DataMasterBase_o *)v1217;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[404], (int32_t)v1217, v1218, v1219);
  v1220 = (UserNpcSvtRecordMaster_o *)sub_1B887FC(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1220, 0LL);
  if ( v1220 )
  {
    v3 = sub_1B886EC(v1220, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1559;
  v1->m_Items[405] = (DataMasterBase_o *)v1220;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[405], (int32_t)v1220, v1221, v1222);
  v1223 = (BuffTypeDetailMaster_o *)sub_1B887FC(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1223, 0LL);
  if ( v1223 )
  {
    v3 = sub_1B886EC(v1223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1559;
  v1->m_Items[406] = (DataMasterBase_o *)v1223;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[406], (int32_t)v1223, v1224, v1225);
  v1226 = (WarBoardMessageMaster_o *)sub_1B887FC(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1226, 0LL);
  if ( v1226 )
  {
    v3 = sub_1B886EC(v1226, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1559;
  v1->m_Items[407] = (DataMasterBase_o *)v1226;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[407], (int32_t)v1226, v1227, v1228);
  v1229 = (WarBoardPartySkillMaster_o *)sub_1B887FC(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1229, 0LL);
  if ( v1229 )
  {
    v3 = sub_1B886EC(v1229, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1559;
  v1->m_Items[408] = (DataMasterBase_o *)v1229;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[408], (int32_t)v1229, v1230, v1231);
  v1232 = (WarBoardMessageScriptMaster_o *)sub_1B887FC(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1232, 0LL);
  if ( v1232 )
  {
    v3 = sub_1B886EC(v1232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1559;
  v1->m_Items[409] = (DataMasterBase_o *)v1232;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[409], (int32_t)v1232, v1233, v1234);
  v1235 = (WarQuestSelectionMaster_o *)sub_1B887FC(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1235, 0LL);
  if ( v1235 )
  {
    v3 = sub_1B886EC(v1235, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1559;
  v1->m_Items[410] = (DataMasterBase_o *)v1235;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[410], (int32_t)v1235, v1236, v1237);
  v1238 = (WarBoardStageDetailMaster_o *)sub_1B887FC(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1238, 0LL);
  if ( v1238 )
  {
    v3 = sub_1B886EC(v1238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1559;
  v1->m_Items[411] = (DataMasterBase_o *)v1238;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[411], (int32_t)v1238, v1239, v1240);
  v1241 = (QuestScriptMaterialOverwriteMaster_o *)sub_1B887FC(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1241, 0LL);
  if ( v1241 )
  {
    v3 = sub_1B886EC(v1241, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1559;
  v1->m_Items[412] = (DataMasterBase_o *)v1241;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[412], (int32_t)v1241, v1242, v1243);
  v1244 = (QuestScriptBranchMaterialMaster_o *)sub_1B887FC(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1244, 0LL);
  if ( v1244 )
  {
    v3 = sub_1B886EC(v1244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1559;
  v1->m_Items[413] = (DataMasterBase_o *)v1244;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[413], (int32_t)v1244, v1245, v1246);
  v1247 = (AdCheckPointMaster_o *)sub_1B887FC(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1247, 0LL);
  if ( v1247 )
  {
    v3 = sub_1B886EC(v1247, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1559;
  v1->m_Items[414] = (DataMasterBase_o *)v1247;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[414], (int32_t)v1247, v1248, v1249);
  v1250 = (GiftDetailMaster_o *)sub_1B887FC(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1250, 0LL);
  if ( v1250 )
  {
    v3 = sub_1B886EC(v1250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1559;
  v1->m_Items[415] = (DataMasterBase_o *)v1250;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[415], (int32_t)v1250, v1251, v1252);
  v1253 = (CombineLimitGiftMaster_o *)sub_1B887FC(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1253, 0LL);
  if ( v1253 )
  {
    v3 = sub_1B886EC(v1253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1559;
  v1->m_Items[416] = (DataMasterBase_o *)v1253;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[416], (int32_t)v1253, v1254, v1255);
  v1256 = (EventCooltimeRewardMaster_o *)sub_1B887FC(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1256, 0LL);
  if ( v1256 )
  {
    v3 = sub_1B886EC(v1256, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1559;
  v1->m_Items[417] = (DataMasterBase_o *)v1256;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[417], (int32_t)v1256, v1257, v1258);
  v1259 = (UserEventCooltimeRewardMaster_o *)sub_1B887FC(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1259, 0LL);
  if ( v1259 )
  {
    v3 = sub_1B886EC(v1259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1559;
  v1->m_Items[418] = (DataMasterBase_o *)v1259;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[418], (int32_t)v1259, v1260, v1261);
  v1262 = (ClassBoardBaseMaster_o *)sub_1B887FC(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1262, 0LL);
  if ( v1262 )
  {
    v3 = sub_1B886EC(v1262, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1559;
  v1->m_Items[419] = (DataMasterBase_o *)v1262;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[419], (int32_t)v1262, v1263, v1264);
  v1265 = (ClassBoardLockMaster_o *)sub_1B887FC(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1265, 0LL);
  if ( v1265 )
  {
    v3 = sub_1B886EC(v1265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1559;
  v1->m_Items[420] = (DataMasterBase_o *)v1265;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[420], (int32_t)v1265, v1266, v1267);
  v1268 = (ClassBoardSquareMaster_o *)sub_1B887FC(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1268, 0LL);
  if ( v1268 )
  {
    v3 = sub_1B886EC(v1268, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1559;
  v1->m_Items[421] = (DataMasterBase_o *)v1268;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[421], (int32_t)v1268, v1269, v1270);
  v1271 = (ClassBoardLineMaster_o *)sub_1B887FC(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1271, 0LL);
  if ( v1271 )
  {
    v3 = sub_1B886EC(v1271, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1559;
  v1->m_Items[422] = (DataMasterBase_o *)v1271;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[422], (int32_t)v1271, v1272, v1273);
  v1274 = (UserClassBoardSquareMaster_o *)sub_1B887FC(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1274, 0LL);
  if ( v1274 )
  {
    v3 = sub_1B886EC(v1274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1559;
  v1->m_Items[423] = (DataMasterBase_o *)v1274;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[423], (int32_t)v1274, v1275, v1276);
  v1277 = (ServantCardAddMaster_o *)sub_1B887FC(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1277, 0LL);
  if ( v1277 )
  {
    v3 = sub_1B886EC(v1277, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1559;
  v1->m_Items[424] = (DataMasterBase_o *)v1277;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[424], (int32_t)v1277, v1278, v1279);
  v1280 = (MapLayerMaster_o *)sub_1B887FC(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1280, 0LL);
  if ( v1280 )
  {
    v3 = sub_1B886EC(v1280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1559;
  v1->m_Items[425] = (DataMasterBase_o *)v1280;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[425], (int32_t)v1280, v1281, v1282);
  v1283 = (SpotLayerMaster_o *)sub_1B887FC(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1283, 0LL);
  if ( v1283 )
  {
    v3 = sub_1B886EC(v1283, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1559;
  v1->m_Items[426] = (DataMasterBase_o *)v1283;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[426], (int32_t)v1283, v1284, v1285);
  v1286 = (MapGimmickLayerMaster_o *)sub_1B887FC(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1286, 0LL);
  if ( v1286 )
  {
    v3 = sub_1B886EC(v1286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1559;
  v1->m_Items[427] = (DataMasterBase_o *)v1286;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[427], (int32_t)v1286, v1287, v1288);
  v1289 = (EventDataLostBattleMaster_o *)sub_1B887FC(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1289, 0LL);
  if ( v1289 )
  {
    v3 = sub_1B886EC(v1289, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1559;
  v1->m_Items[428] = (DataMasterBase_o *)v1289;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[428], (int32_t)v1289, v1290, v1291);
  v1292 = (EventDataLostBattleResetMaster_o *)sub_1B887FC(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1292, 0LL);
  if ( v1292 )
  {
    v3 = sub_1B886EC(v1292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1559;
  v1->m_Items[429] = (DataMasterBase_o *)v1292;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[429], (int32_t)v1292, v1293, v1294);
  v1295 = (UserEventDataLostMaster_o *)sub_1B887FC(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1295, 0LL);
  if ( v1295 )
  {
    v3 = sub_1B886EC(v1295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1559;
  v1->m_Items[430] = (DataMasterBase_o *)v1295;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[430], (int32_t)v1295, v1296, v1297);
  v1298 = (QuestHintMaster_o *)sub_1B887FC(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1298, 0LL);
  if ( v1298 )
  {
    v3 = sub_1B886EC(v1298, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1559;
  v1->m_Items[431] = (DataMasterBase_o *)v1298;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[431], (int32_t)v1298, v1299, v1300);
  v1301 = (FuncTypeDetailMaster_o *)sub_1B887FC(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1301, 0LL);
  if ( v1301 )
  {
    v3 = sub_1B886EC(v1301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1559;
  v1->m_Items[432] = (DataMasterBase_o *)v1301;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[432], (int32_t)v1301, v1302, v1303);
  v1304 = (BuffConvertMaster_o *)sub_1B887FC(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1304, 0LL);
  if ( v1304 )
  {
    v3 = sub_1B886EC(v1304, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1559;
  v1->m_Items[433] = (DataMasterBase_o *)v1304;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[433], (int32_t)v1304, v1305, v1306);
  v1307 = (SkillGroupMaster_o *)sub_1B887FC(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1307, 0LL);
  if ( v1307 )
  {
    v3 = sub_1B886EC(v1307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1559;
  v1->m_Items[434] = (DataMasterBase_o *)v1307;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[434], (int32_t)v1307, v1308, v1309);
  v1310 = (SkillGroupOverwriteMaster_o *)sub_1B887FC(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1310, 0LL);
  if ( v1310 )
  {
    v3 = sub_1B886EC(v1310, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1559;
  v1->m_Items[435] = (DataMasterBase_o *)v1310;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[435], (int32_t)v1310, v1311, v1312);
  v1313 = (SkillIndividualityMaster_o *)sub_1B887FC(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1313, 0LL);
  if ( v1313 )
  {
    v3 = sub_1B886EC(v1313, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1559;
  v1->m_Items[436] = (DataMasterBase_o *)v1313;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[436], (int32_t)v1313, v1314, v1315);
  v1316 = (RestrictionBaseMaster_o *)sub_1B887FC(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1316, 0LL);
  if ( v1316 )
  {
    v3 = sub_1B886EC(v1316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1559;
  v1->m_Items[437] = (DataMasterBase_o *)v1316;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[437], (int32_t)v1316, v1317, v1318);
  v1319 = (RestrictionSlotMaster_o *)sub_1B887FC(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1319, 0LL);
  if ( v1319 )
  {
    v3 = sub_1B886EC(v1319, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1559;
  v1->m_Items[438] = (DataMasterBase_o *)v1319;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[438], (int32_t)v1319, v1320, v1321);
  v1322 = (RestrictionSlotDetailMaster_o *)sub_1B887FC(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1322, 0LL);
  if ( v1322 )
  {
    v3 = sub_1B886EC(v1322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1559;
  v1->m_Items[439] = (DataMasterBase_o *)v1322;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[439], (int32_t)v1322, v1323, v1324);
  v1325 = (RestrictionMessageMaster_o *)sub_1B887FC(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1325, 0LL);
  if ( v1325 )
  {
    v3 = sub_1B886EC(v1325, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1559;
  v1->m_Items[440] = (DataMasterBase_o *)v1325;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[440], (int32_t)v1325, v1326, v1327);
  v1328 = (RestrictionWholeMaster_o *)sub_1B887FC(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1328, 0LL);
  if ( v1328 )
  {
    v3 = sub_1B886EC(v1328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1559;
  v1->m_Items[441] = (DataMasterBase_o *)v1328;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[441], (int32_t)v1328, v1329, v1330);
  v1331 = (FuncDispMaster_o *)sub_1B887FC(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1331, 0LL);
  if ( v1331 )
  {
    v3 = sub_1B886EC(v1331, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1559;
  v1->m_Items[442] = (DataMasterBase_o *)v1331;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[442], (int32_t)v1331, v1332, v1333);
  v1334 = (ClassBoardCommandSpellMaster_o *)sub_1B887FC(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1334, 0LL);
  if ( v1334 )
  {
    v3 = sub_1B886EC(v1334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1559;
  v1->m_Items[443] = (DataMasterBase_o *)v1334;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[443], (int32_t)v1334, v1335, v1336);
  v1337 = (ClassBoardClassMaster_o *)sub_1B887FC(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1337, 0LL);
  if ( v1337 )
  {
    v3 = sub_1B886EC(v1337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1559;
  v1->m_Items[444] = (DataMasterBase_o *)v1337;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[444], (int32_t)v1337, v1338, v1339);
  v1340 = (EventCommandAssistMaster_o *)sub_1B887FC(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1340, 0LL);
  if ( v1340 )
  {
    v3 = sub_1B886EC(v1340, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1559;
  v1->m_Items[445] = (DataMasterBase_o *)v1340;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[445], (int32_t)v1340, v1341, v1342);
  v1343 = (EventMissionGroupMaster_o *)sub_1B887FC(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1343, 0LL);
  if ( v1343 )
  {
    v3 = sub_1B886EC(v1343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1559;
  v1->m_Items[446] = (DataMasterBase_o *)v1343;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[446], (int32_t)v1343, v1344, v1345);
  v1346 = (CombineLimitReleaseMaster_o *)sub_1B887FC(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1346, 0LL);
  if ( v1346 )
  {
    v3 = sub_1B886EC(v1346, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1559;
  v1->m_Items[447] = (DataMasterBase_o *)v1346;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[447], (int32_t)v1346, v1347, v1348);
  v1349 = (HeelPortraitMaster_o *)sub_1B887FC(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1349, 0LL);
  if ( v1349 )
  {
    v3 = sub_1B886EC(v1349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1559;
  v1->m_Items[448] = (DataMasterBase_o *)v1349;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[448], (int32_t)v1349, v1350, v1351);
  v1352 = (UserHeelPortraitMaster_o *)sub_1B887FC(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1352, 0LL);
  if ( v1352 )
  {
    v3 = sub_1B886EC(v1352, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1559;
  v1->m_Items[449] = (DataMasterBase_o *)v1352;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[449], (int32_t)v1352, v1353, v1354);
  v1355 = (TreasureDeviceSequenceWeightMaster_o *)sub_1B887FC(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1355, 0LL);
  if ( v1355 )
  {
    v3 = sub_1B886EC(v1355, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1559;
  v1->m_Items[450] = (DataMasterBase_o *)v1355;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[450], (int32_t)v1355, v1356, v1357);
  v1358 = (NpcServantFollowerIndividualityMaster_o *)sub_1B887FC(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1358, 0LL);
  if ( v1358 )
  {
    v3 = sub_1B886EC(v1358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1559;
  v1->m_Items[451] = (DataMasterBase_o *)v1358;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[451], (int32_t)v1358, v1359, v1360);
  v1361 = (GachaExtraGiftMaster_o *)sub_1B887FC(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1361, 0LL);
  if ( v1361 )
  {
    v3 = sub_1B886EC(v1361, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1559;
  v1->m_Items[452] = (DataMasterBase_o *)v1361;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[452], (int32_t)v1361, v1362, v1363);
  v1364 = (EventMuralMaster_o *)sub_1B887FC(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1364, 0LL);
  if ( v1364 )
  {
    v3 = sub_1B886EC(v1364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1559;
  v1->m_Items[453] = (DataMasterBase_o *)v1364;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[453], (int32_t)v1364, v1365, v1366);
  v1367 = (ViewWaveEnemyMaster_o *)sub_1B887FC(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1367, 0LL);
  if ( v1367 )
  {
    v3 = sub_1B886EC(v1367, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1559;
  v1->m_Items[454] = (DataMasterBase_o *)v1367;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[454], (int32_t)v1367, v1368, v1369);
  v1370 = (BlankEarthSpotNavimenuMaster_o *)sub_1B887FC(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1370, 0LL);
  if ( v1370 )
  {
    v3 = sub_1B886EC(v1370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1559;
  v1->m_Items[455] = (DataMasterBase_o *)v1370;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[455], (int32_t)v1370, v1371, v1372);
  v1373 = (BlankEarthGimmickMaster_o *)sub_1B887FC(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1373, 0LL);
  if ( v1373 )
  {
    v3 = sub_1B886EC(v1373, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1559;
  v1->m_Items[456] = (DataMasterBase_o *)v1373;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[456], (int32_t)v1373, v1374, v1375);
  v1376 = (TerminalOverwriteMaster_o *)sub_1B887FC(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1376, 0LL);
  if ( v1376 )
  {
    v3 = sub_1B886EC(v1376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1559;
  v1->m_Items[457] = (DataMasterBase_o *)v1376;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[457], (int32_t)v1376, v1377, v1378);
  v1379 = (UserExchangeSvtMaster_o *)sub_1B887FC(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1379, 0LL);
  if ( v1379 )
  {
    v3 = sub_1B886EC(v1379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1559;
  v1->m_Items[458] = (DataMasterBase_o *)v1379;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[458], (int32_t)v1379, v1380, v1381);
  v1382 = (WarBoardCommonReleaseMaster_o *)sub_1B887FC(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1382, 0LL);
  if ( v1382 )
  {
    v3 = sub_1B886EC(v1382, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1559;
  v1->m_Items[459] = (DataMasterBase_o *)v1382;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[459], (int32_t)v1382, v1383, v1384);
  v1385 = (WarBoardEventMaster_o *)sub_1B887FC(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1385, 0LL);
  if ( v1385 )
  {
    v3 = sub_1B886EC(v1385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1559;
  v1->m_Items[460] = (DataMasterBase_o *)v1385;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[460], (int32_t)v1385, v1386, v1387);
  v1388 = (WarBoardEventScriptMaster_o *)sub_1B887FC(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1388, 0LL);
  if ( v1388 )
  {
    v3 = sub_1B886EC(v1388, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1559;
  v1->m_Items[461] = (DataMasterBase_o *)v1388;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[461], (int32_t)v1388, v1389, v1390);
  v1391 = (WarBoardStageBossMaster_o *)sub_1B887FC(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1391, 0LL);
  if ( v1391 )
  {
    v3 = sub_1B886EC(v1391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1559;
  v1->m_Items[462] = (DataMasterBase_o *)v1391;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[462], (int32_t)v1391, v1392, v1393);
  v1394 = (WarBoardSquareIndexGroupMaster_o *)sub_1B887FC(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1394, 0LL);
  if ( v1394 )
  {
    v3 = sub_1B886EC(v1394, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1559;
  v1->m_Items[463] = (DataMasterBase_o *)v1394;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[463], (int32_t)v1394, v1395, v1396);
  v1397 = (WarBoardActionTrendGroupMaster_o *)sub_1B887FC(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1397, 0LL);
  if ( v1397 )
  {
    v3 = sub_1B886EC(v1397, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1559;
  v1->m_Items[464] = (DataMasterBase_o *)v1397;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[464], (int32_t)v1397, v1398, v1399);
  v1400 = (WarBoardRatingOffsetGroupMaster_o *)sub_1B887FC(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1400, 0LL);
  if ( v1400 )
  {
    v3 = sub_1B886EC(v1400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1559;
  v1->m_Items[465] = (DataMasterBase_o *)v1400;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[465], (int32_t)v1400, v1401, v1402);
  v1403 = (WarBoardReinforcementsMaster_o *)sub_1B887FC(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1403, 0LL);
  if ( v1403 )
  {
    v3 = sub_1B886EC(v1403, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1559;
  v1->m_Items[466] = (DataMasterBase_o *)v1403;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[466], (int32_t)v1403, v1404, v1405);
  v1406 = (WarBoardStageReinforcementsMaster_o *)sub_1B887FC(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1406, 0LL);
  if ( v1406 )
  {
    v3 = sub_1B886EC(v1406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1559;
  v1->m_Items[467] = (DataMasterBase_o *)v1406;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[467], (int32_t)v1406, v1407, v1408);
  v1409 = (WarBoardFutureActionTrendMaster_o *)sub_1B887FC(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1409, 0LL);
  if ( v1409 )
  {
    v3 = sub_1B886EC(v1409, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1559;
  v1->m_Items[468] = (DataMasterBase_o *)v1409;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[468], (int32_t)v1409, v1410, v1411);
  v1412 = (ServantProfilePushMaster_o *)sub_1B887FC(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1412, 0LL);
  if ( v1412 )
  {
    v3 = sub_1B886EC(v1412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1559;
  v1->m_Items[469] = (DataMasterBase_o *)v1412;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[469], (int32_t)v1412, v1413, v1414);
  v1415 = (MapGimmickPathMaster_o *)sub_1B887FC(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1415, 0LL);
  if ( v1415 )
  {
    v3 = sub_1B886EC(v1415, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1559;
  v1->m_Items[470] = (DataMasterBase_o *)v1415;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[470], (int32_t)v1415, v1416, v1417);
  v1418 = (MapGimmickPathReleaseMaster_o *)sub_1B887FC(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1418, 0LL);
  if ( v1418 )
  {
    v3 = sub_1B886EC(v1418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1559;
  v1->m_Items[471] = (DataMasterBase_o *)v1418;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[471], (int32_t)v1418, v1419, v1420);
  v1421 = (ServantOverwriteMaster_o *)sub_1B887FC(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1421, 0LL);
  if ( v1421 )
  {
    v3 = sub_1B886EC(v1421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1559;
  v1->m_Items[472] = (DataMasterBase_o *)v1421;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[472], (int32_t)v1421, v1422, v1423);
  v1424 = (IndividualityPolicyMaster_o *)sub_1B887FC(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1424, 0LL);
  if ( v1424 )
  {
    v3 = sub_1B886EC(v1424, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1559;
  v1->m_Items[473] = (DataMasterBase_o *)v1424;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[473], (int32_t)v1424, v1425, v1426);
  v1427 = (IndividualityPersonalityMaster_o *)sub_1B887FC(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1427, 0LL);
  if ( v1427 )
  {
    v3 = sub_1B886EC(v1427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1559;
  v1->m_Items[474] = (DataMasterBase_o *)v1427;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[474], (int32_t)v1427, v1428, v1429);
  v1430 = (AttriMaster_o *)sub_1B887FC(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1430, 0LL);
  if ( v1430 )
  {
    v3 = sub_1B886EC(v1430, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1559;
  v1->m_Items[475] = (DataMasterBase_o *)v1430;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[475], (int32_t)v1430, v1431, v1432);
  v1433 = (ServantVoicePatternMaster_o *)sub_1B887FC(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1433, 0LL);
  if ( v1433 )
  {
    v3 = sub_1B886EC(v1433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1559;
  v1->m_Items[476] = (DataMasterBase_o *)v1433;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[476], (int32_t)v1433, v1434, v1435);
  v1436 = (UserGameCommonMaster_o *)sub_1B887FC(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1436, 0LL);
  if ( v1436 )
  {
    v3 = sub_1B886EC(v1436, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1559;
  v1->m_Items[477] = (DataMasterBase_o *)v1436;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[477], (int32_t)v1436, v1437, v1438);
  v1439 = (ServantPhotoMaster_o *)sub_1B887FC(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1439, 0LL);
  if ( v1439 )
  {
    v3 = sub_1B886EC(v1439, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1559;
  v1->m_Items[478] = (DataMasterBase_o *)v1439;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[478], (int32_t)v1439, v1440, v1441);
  v1442 = (MasterPhotoMaster_o *)sub_1B887FC(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1442, 0LL);
  if ( v1442 )
  {
    v3 = sub_1B886EC(v1442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1559;
  v1->m_Items[479] = (DataMasterBase_o *)v1442;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[479], (int32_t)v1442, v1443, v1444);
  v1445 = (WarMessageMaster_o *)sub_1B887FC(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1445, 0LL);
  if ( v1445 )
  {
    v3 = sub_1B886EC(v1445, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1559;
  v1->m_Items[480] = (DataMasterBase_o *)v1445;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[480], (int32_t)v1445, v1446, v1447);
  v1448 = (QuestAutoOrganizationAdjustMaster_o *)sub_1B887FC(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1448, 0LL);
  if ( v1448 )
  {
    v3 = sub_1B886EC(v1448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1559;
  v1->m_Items[481] = (DataMasterBase_o *)v1448;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[481], (int32_t)v1448, v1449, v1450);
  v1451 = (ExcludeMotionMaster_o *)sub_1B887FC(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1451, 0LL);
  if ( v1451 )
  {
    v3 = sub_1B886EC(v1451, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1559;
  v1->m_Items[482] = (DataMasterBase_o *)v1451;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[482], (int32_t)v1451, v1452, v1453);
  v1454 = (UserInterruptionQuestMaster_o *)sub_1B887FC(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1454, 0LL);
  if ( v1454 )
  {
    v3 = sub_1B886EC(v1454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1559;
  v1->m_Items[483] = (DataMasterBase_o *)v1454;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[483], (int32_t)v1454, v1455, v1456);
  v1457 = (ServantTransformMaster_o *)sub_1B887FC(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1457, 0LL);
  if ( v1457 )
  {
    v3 = sub_1B886EC(v1457, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1559;
  v1->m_Items[484] = (DataMasterBase_o *)v1457;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[484], (int32_t)v1457, v1458, v1459);
  v1460 = (MapUpdateScheduleMaster_o *)sub_1B887FC(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1460, 0LL);
  if ( v1460 )
  {
    v3 = sub_1B886EC(v1460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1559;
  v1->m_Items[485] = (DataMasterBase_o *)v1460;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[485], (int32_t)v1460, v1461, v1462);
  v1463 = (QuestPhasePresentMaster_o *)sub_1B887FC(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1463, 0LL);
  if ( v1463 )
  {
    v3 = sub_1B886EC(v1463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1559;
  v1->m_Items[486] = (DataMasterBase_o *)v1463;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[486], (int32_t)v1463, v1464, v1465);
  v1466 = (UserAccountLinkageMaster_o *)sub_1B887FC(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1466, 0LL);
  if ( v1466 )
  {
    v3 = sub_1B886EC(v1466, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1559;
  v1->m_Items[487] = (DataMasterBase_o *)v1466;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[487], (int32_t)v1466, v1467, v1468);
  v1469 = (MissionNaviTransitionMaster_o *)sub_1B887FC(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1469, 0LL);
  if ( v1469 )
  {
    v3 = sub_1B886EC(v1469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1559;
  v1->m_Items[488] = (DataMasterBase_o *)v1469;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[488], (int32_t)v1469, v1470, v1471);
  v1472 = (MissionNaviQuestMaster_o *)sub_1B887FC(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1472, 0LL);
  if ( v1472 )
  {
    v3 = sub_1B886EC(v1472, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1559;
  v1->m_Items[489] = (DataMasterBase_o *)v1472;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[489], (int32_t)v1472, v1473, v1474);
  v1475 = (EventTradeGoodsMaster_o *)sub_1B887FC(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1475, 0LL);
  if ( v1475 )
  {
    v3 = sub_1B886EC(v1475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1559;
  v1->m_Items[490] = (DataMasterBase_o *)v1475;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[490], (int32_t)v1475, v1476, v1477);
  v1478 = (EventTradeStoreMaster_o *)sub_1B887FC(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1478, 0LL);
  if ( v1478 )
  {
    v3 = sub_1B886EC(v1478, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1559;
  v1->m_Items[491] = (DataMasterBase_o *)v1478;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[491], (int32_t)v1478, v1479, v1480);
  v1481 = (EventTradePickupMaster_o *)sub_1B887FC(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1481, 0LL);
  if ( v1481 )
  {
    v3 = sub_1B886EC(v1481, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1559;
  v1->m_Items[492] = (DataMasterBase_o *)v1481;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[492], (int32_t)v1481, v1482, v1483);
  v1484 = (UserEventTradeMaster_o *)sub_1B887FC(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1484, 0LL);
  if ( v1484 )
  {
    v3 = sub_1B886EC(v1484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1559;
  v1->m_Items[493] = (DataMasterBase_o *)v1484;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[493], (int32_t)v1484, v1485, v1486);
  v1487 = (PaymentHistoryMaster_o *)sub_1B887FC(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1487, 0LL);
  if ( v1487 )
  {
    v3 = sub_1B886EC(v1487, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1559;
  v1->m_Items[494] = (DataMasterBase_o *)v1487;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[494], (int32_t)v1487, v1488, v1489);
  v1490 = (UserExternalPaymentStoneMaster_o *)sub_1B887FC(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1490, 0LL);
  if ( v1490 )
  {
    v3 = sub_1B886EC(v1490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1559;
  v1->m_Items[495] = (DataMasterBase_o *)v1490;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[495], (int32_t)v1490, v1491, v1492);
  v1493 = (QuestPhaseIndividualityMaster_o *)sub_1B887FC(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1493, 0LL);
  if ( v1493 )
  {
    v3 = sub_1B886EC(v1493, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1559;
  v1->m_Items[496] = (DataMasterBase_o *)v1493;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[496], (int32_t)v1493, v1494, v1495);
  v1496 = (ViewGachaFeaturedServantMaster_o *)sub_1B887FC(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1496, 0LL);
  if ( v1496 )
  {
    v3 = sub_1B886EC(v1496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1559;
  v1->m_Items[497] = (DataMasterBase_o *)v1496;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[497], (int32_t)v1496, v1497, v1498);
  v1499 = (UserGachaPickupCollateralMaster_o *)sub_1B887FC(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1499, 0LL);
  if ( v1499 )
  {
    v3 = sub_1B886EC(v1499, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1559;
  v1->m_Items[498] = (DataMasterBase_o *)v1499;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[498], (int32_t)v1499, v1500, v1501);
  v1502 = (GachaPickupCollateralMaster_o *)sub_1B887FC(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1502, 0LL);
  if ( v1502 )
  {
    v3 = sub_1B886EC(v1502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1559;
  v1->m_Items[499] = (DataMasterBase_o *)v1502;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[499], (int32_t)v1502, v1503, v1504);
  v1505 = (GachaPickupCollateralGroupMaster_o *)sub_1B887FC(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1505, 0LL);
  if ( v1505 )
  {
    v3 = sub_1B886EC(v1505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1559;
  v1->m_Items[500] = (DataMasterBase_o *)v1505;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[500], (int32_t)v1505, v1506, v1507);
  v1508 = (BattlePointMaster_o *)sub_1B887FC(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1508, 0LL);
  if ( v1508 )
  {
    v3 = sub_1B886EC(v1508, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1559;
  v1->m_Items[501] = (DataMasterBase_o *)v1508;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[501], (int32_t)v1508, v1509, v1510);
  v1511 = (BattlePointPhaseMaster_o *)sub_1B887FC(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1511, 0LL);
  if ( v1511 )
  {
    v3 = sub_1B886EC(v1511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1559;
  v1->m_Items[502] = (DataMasterBase_o *)v1511;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[502], (int32_t)v1511, v1512, v1513);
  v1514 = (ServantBattlePointMaster_o *)sub_1B887FC(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1514, 0LL);
  if ( v1514 )
  {
    v3 = sub_1B886EC(v1514, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1559;
  v1->m_Items[503] = (DataMasterBase_o *)v1514;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[503], (int32_t)v1514, v1515, v1516);
  v1517 = (EffectMovieMaster_o *)sub_1B887FC(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1517, 0LL);
  if ( v1517 )
  {
    v3 = sub_1B886EC(v1517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1559;
  v1->m_Items[504] = (DataMasterBase_o *)v1517;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[504], (int32_t)v1517, v1518, v1519);
  v1520 = (PaymentLimitMaster_o *)sub_1B887FC(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1520, 0LL);
  if ( v1520 )
  {
    v3 = sub_1B886EC(v1520, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1559;
  v1->m_Items[505] = (DataMasterBase_o *)v1520;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[505], (int32_t)v1520, v1521, v1522);
  v1523 = (UserPaymentLimitMaster_o *)sub_1B887FC(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1523, 0LL);
  if ( v1523 )
  {
    v3 = sub_1B886EC(v1523, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1559;
  v1->m_Items[506] = (DataMasterBase_o *)v1523;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[506], (int32_t)v1523, v1524, v1525);
  v1526 = (RoadmapMaster_o *)sub_1B887FC(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1526, 0LL);
  if ( v1526 )
  {
    v3 = sub_1B886EC(v1526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1559;
  v1->m_Items[507] = (DataMasterBase_o *)v1526;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[507], (int32_t)v1526, v1527, v1528);
  v1529 = (UserRecommendSupportMaster_o *)sub_1B887FC(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1529, 0LL);
  if ( v1529 )
  {
    v3 = sub_1B886EC(v1529, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1559;
  v1->m_Items[508] = (DataMasterBase_o *)v1529;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[508], (int32_t)v1529, v1530, v1531);
  v1532 = (RecommendSupportQuestMaster_o *)sub_1B887FC(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1532, 0LL);
  if ( v1532 )
  {
    v3 = sub_1B886EC(v1532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1559;
  v1->m_Items[509] = (DataMasterBase_o *)v1532;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[509], (int32_t)v1532, v1533, v1534);
  v1535 = (RecommendAdviceMessageMaster_o *)sub_1B887FC(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1535, 0LL);
  if ( v1535 )
  {
    v3 = sub_1B886EC(v1535, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1559;
  v1->m_Items[510] = (DataMasterBase_o *)v1535;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[510], (int32_t)v1535, v1536, v1537);
  v1538 = (UserRecommendFollowerMaster_o *)sub_1B887FC(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1538, 0LL);
  if ( v1538 )
  {
    v3 = sub_1B886EC(v1538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1559;
  v1->m_Items[511] = (DataMasterBase_o *)v1538;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[511], (int32_t)v1538, v1539, v1540);
  v1541 = (ItemDropEfficiencyMaster_o *)sub_1B887FC(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1541, 0LL);
  if ( v1541 )
  {
    v3 = sub_1B886EC(v1541, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1559;
  v1->m_Items[512] = (DataMasterBase_o *)v1541;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[512], (int32_t)v1541, v1542, v1543);
  v1544 = (BlankEarthGimmickAddMaster_o *)sub_1B887FC(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1544, 0LL);
  if ( v1544 )
  {
    v3 = sub_1B886EC(v1544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1559;
  v1->m_Items[513] = (DataMasterBase_o *)v1544;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[513], (int32_t)v1544, v1545, v1546);
  v1547 = (WarReleaseMaster_o *)sub_1B887FC(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1547, 0LL);
  if ( v1547 )
  {
    v3 = sub_1B886EC(v1547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1559;
  v1->m_Items[514] = (DataMasterBase_o *)v1547;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[514], (int32_t)v1547, v1548, v1549);
  v1550 = (SelectBonusBaseMaster_o *)sub_1B887FC(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1550, 0LL);
  if ( v1550 )
  {
    v3 = sub_1B886EC(v1550, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1559;
  v1->m_Items[515] = (DataMasterBase_o *)v1550;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[515], (int32_t)v1550, v1551, v1552);
  v1553 = (SelectBonusMaster_o *)sub_1B887FC(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1553, 0LL);
  if ( v1553 )
  {
    v3 = sub_1B886EC(v1553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1560;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1559;
  v1->m_Items[516] = (DataMasterBase_o *)v1553;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[516], (int32_t)v1553, v1554, v1555);
  v1556 = (MyroomServantSpecialImageMaster_o *)sub_1B887FC(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1556, 0LL);
  if ( v1556 )
  {
    v3 = sub_1B886EC(v1556, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1560:
      v1560 = sub_1B88830(v3);
      sub_1B886D8(v1560, 0LL);
    }
  }
  if ( *p_max_length <= 0x205 )
LABEL_1559:
    sub_1B88814(v3, v4);
  v1->m_Items[517] = (DataMasterBase_o *)v1556;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[517], (int32_t)v1556, v1557, v1558);
  return v1;
}


void __fastcall DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v5; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v7; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4A5AC9C & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5AC9C = 1;
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
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v5 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v7 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v7);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int v10; // w26
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x20
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5AC99 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8520/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4A5AC99 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_masterCheckName, (int32_t)v3, v5, v6);
  v10 = 1;
  do
  {
    v22 = v10;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v7, v8, v9);
    v12 = System_String__Format((System_String_o *)StringLiteral_8520/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v11, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get(v12, 0LL);
    if ( System_String__op_Equality(v13, v12, 0LL) )
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
    sub_1B8880C(v17, v14);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v13,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v15, v16);
    }
    ++v10;
  }
  while ( v10 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2E7F908 *method)
{
  const MethodInfo_2E7F908_RGCTXs *rgctx_data; // x8
  const MethodInfo_2E7F908 *_1_TMaster; // x19
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v6; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v9; // x20
  Il2CppObject *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v12; // x19
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x19
  System_Enum_o v19; // [xsp+8h] [xbp-48h] BYREF
  int v20; // [xsp+18h] [xbp-38h]
  int v21; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&DataNameKind_Kind_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_21316/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v6 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v6 )
  {
    sub_1BDA4E8();
    v6 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v6[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1BDA48C(rgctxDataDummy);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v9) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v9,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v9 = value;
    _1_TMaster = (const MethodInfo_2E7F908 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2E7F908 *)sub_1BDA48C(_1_TMaster);
    if ( !v9 )
      return 0LL;
    result = (Il2CppObject *)sub_1B886EC(v9, _1_TMaster);
    if ( result )
      return result;
    sub_1B88ACC(v9);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v23.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v23, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1B8880C(rgctxDataDummy, method);
  v12 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v21 = (int)v9;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v13, v14, v15);
  v20 = (int)v9;
  v19.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v19.monitor = (void *)-1LL;
  v17 = (Il2CppObject *)System_Enum__ToString(&v19, 0LL);
  v18 = (Il2CppObject *)System_String__Format_61721472((System_String_o *)StringLiteral_21316/*"master[{0}] is null[{1}:{2}]"*/, v12, v16, v17, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v18, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2E7F8B4 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5AC84 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_CreateMasterData__);
    sub_1B885B0(&System_Func_DataMasterBase____TypeInfo);
    byte_4A5AC84 = 1;
  }
  v3 = (System_Func_object__o *)sub_1B887FC(System_Func_DataMasterBase____TypeInfo);
  System_Func_object____ctor(v3, 0LL, Method_DataManager_CreateMasterData__, 0LL);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v3, v4);
}


void __fastcall DataManager__InitializeInternal(
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
  int32_t v11; // w3
  int v12; // w8
  unsigned int v13; // w23
  __int64 v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3

  v4 = this;
  if ( (byte_4A5AC85 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1B885B0(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4A5AC85 = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0LL;
      while ( (unsigned int)v7 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v7];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
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
      || (v8 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))createMasterDataMethod->fields.m_target)(
                 createMasterDataMethod->fields.original_method_info,
                 *(_QWORD *)&createMasterDataMethod->fields.extra_arg,
                 method),
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1B8880C(this, createMasterDataMethod);
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
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v12 = *(_DWORD *)(v8 + 24);
        if ( (int)++v13 >= v12 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B88814(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.datalist, v8, v10, v11);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.lookup, (int32_t)v9, v15, v16);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
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
  int32_t v17; // w3
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v20; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v22; // x25
  __int64 Index_object; // x0
  __int64 v24; // x1
  const MethodInfo_361AA4C *v25; // x3
  struct DataMasterBase_array *v26; // x8
  DataMasterBase_o *v27; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo_361AA4C *v32; // x3
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
  intptr_t v49; // w0
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v55; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v56; // [xsp+28h] [xbp-78h] BYREF
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v58; // 0:x0.16
  System_Nullable_long__o v59; // 0:x0.16

  v5 = this;
  if ( (byte_4A5AC96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1B885B0(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1B885B0(&DataManager___c__DisplayClass58_0_TypeInfo);
    byte_4A5AC96 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1B8880C(this, indexList);
  v6 = sub_1B886EC(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    work = (System_Byte_array *)sub_1B88658(byte___TypeInfo, 2000LL);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0LL; i != v8; ++i )
      {
        v10 = sub_1B887FC(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1B88814(v11, v12);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1B8880C(0LL, v12);
        v14 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v14,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1B8880C(Item, Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)Item, v16, v17);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1B8880C(0LL, v18);
        v20 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v14,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v22 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v22,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v22,
                           (const MethodInfo_2F790AC *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v26 = v5->fields.datalist;
            if ( !v26 )
              sub_1B8880C(Index_object, v24);
            if ( (unsigned int)Index_object >= v26->max_length )
              sub_1B88814(Index_object, v24);
            if ( !v20 )
              sub_1B8880C(Index_object, v24);
            if ( !LODWORD(v20[1].monitor) )
              sub_1B88814(Index_object, v24);
            v27 = v26->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v58.fields.value = (int64_t)v20[2].klass;
            *(_QWORD *)&v56.fields.hasValue = 0LL;
            v56.fields.value = 0LL;
            *(_QWORD *)&v58.fields.hasValue = &v56;
            System_Nullable_long____ctor(v58, Method_System_Nullable_long___ctor__, v25);
            if ( LODWORD(v20[1].monitor) <= 1 )
              sub_1B88814(v30, v31);
            v59.fields.value = (int64_t)v20[2].monitor;
            *(_QWORD *)&v55.fields.hasValue = 0LL;
            v55.fields.value = 0LL;
            *(_QWORD *)&v59.fields.hasValue = &v55;
            System_Nullable_long____ctor(v59, Method_System_Nullable_long___ctor__, v32);
            if ( !v27 )
              sub_1B8880C(v33, v34);
            DataMasterBase__ReplacedForThread(v27, p_obj, context, v56, v55, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_62932760(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1B88ACC(indexList);
    if ( v36 != 1 )
      sub_1C73040();
    v37 = (_QWORD **)__cxa_begin_catch(v3);
    v38 = sub_1B885C4(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v38, **v37) & 1) != 0 )
    {
      __cxa_end_catch();
      v39 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62932760(v39, lockTaken, 0LL);
    }
    else
    {
      v40 = sub_1B885C4(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v40, **v37) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v37;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v41 = v5->fields.context;
      v42 = sub_1B885C4(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v42 + 224) )
        j_il2cpp_runtime_class_init_0(v42);
      v43 = sub_1B885C4(&DataManager___c_TypeInfo);
      v45 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v43 + 184) + 8LL);
      if ( !v45 )
      {
        v46 = sub_1B885C4(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v46 + 224) )
          j_il2cpp_runtime_class_init_0(v46);
        v47 = **(Il2CppObject ***)(sub_1B885C4(&DataManager___c_TypeInfo) + 184);
        v48 = sub_1B885C4(&System_Threading_SendOrPostCallback_TypeInfo);
        v45 = (System_Threading_SendOrPostCallback_o *)sub_1B887FC(v48);
        v49 = sub_1B885C4(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v45, v47, v49, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1B885C4(&DataManager___c_TypeInfo) + 184) + 8LL) = v45;
        v50 = sub_1B885C4(&DataManager___c_TypeInfo);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v50 + 184) + 8LL), (int32_t)v45, v51, v52);
      }
      if ( !v41 )
        sub_1B8880C(v43, v44);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._5_Post.method)(
        v41,
        v45,
        0LL,
        v41->klass->vtable._6_OperationStarted.methodPtr);
      v39 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62932760(v39, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v39, 0LL);
  }
}


void __fastcall DataManager__OnDestroy(DataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DataManager__StopWriteLocalFile(this, method);
  DataManager__StopMasterLoadThread(this, v3);
}


void __fastcall DataManager__StartMasterLoadThread(
        DataManager_o *this,
        int32_t maxIndex,
        System_Collections_Generic_List_int__o *loadedIndices,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_int__o *v21; // x0
  System_Int32_array *v22; // x21
  System_Comparison_int__o *v23; // x22
  __int64 v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_Threading_ParameterizedThreadStart_o *v27; // x24
  System_Threading_Thread_o *v28; // x23
  System_Func_int__bool__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  int v38; // w8
  bool v39; // nf

  if ( (byte_4A5AC94 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&Method_DataManager_LoadMasterDataThread__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1B885B0(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1B885B0(&System_Threading_Thread_TypeInfo);
    sub_1B885B0(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__);
    sub_1B885B0(&DataManager___c__DisplayClass56_0_TypeInfo);
    sub_1B885B0(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__);
    sub_1B885B0(&DataManager___c__DisplayClass56_1_TypeInfo);
    byte_4A5AC94 = 1;
  }
  v7 = sub_1B887FC(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)loadedIndices, v12, v13);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.context, (int32_t)Current, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v17;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads, (int32_t)v17, v19, v20);
  v21 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v22 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v23 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__48551588(
    v22,
    (System_Comparison_T__o *)v23,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
  v24 = sub_1B887FC(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
LABEL_14:
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v24 + 24) = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 24), v7, v25, v26);
  *(_DWORD *)(v24 + 16) = 0;
  do
  {
    v27 = (System_Threading_ParameterizedThreadStart_o *)sub_1B887FC(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v27,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v28 = (System_Threading_Thread_o *)sub_1B887FC(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_62968840(v28, v27, 0LL);
    if ( !v28 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v28, 1, 0LL);
    v29 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v29,
      (Il2CppObject *)v24,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v30 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    v31 = System_Linq_Enumerable__ToArray_int_(
            v30,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_62969420(v28, &v31->obj, 0LL);
    v8 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v8->fields._items;
    v35 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v8->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v28,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v28, v32, v33);
    }
    v38 = *(_DWORD *)(v24 + 16) + 1;
    v39 = *(_DWORD *)(v24 + 16) - 4 < 0;
    *(_DWORD *)(v24 + 16) = v38;
  }
  while ( v39 != __OFSUB__(v38, 5) );
}


void __fastcall DataManager__StartWriteLocalFile(
        DataManager_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Threading_ParameterizedThreadStart_o *v6; // x21
  System_Threading_Thread_o *v7; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1

  if ( (byte_4A5AC97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_WriteLocalFileThread__);
    sub_1B885B0(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1B885B0(&System_Threading_Thread_TypeInfo);
    byte_4A5AC97 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v6 = (System_Threading_ParameterizedThreadStart_o *)sub_1B887FC(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v7 = (System_Threading_Thread_o *)sub_1B887FC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_62968840(v7, v6, 0LL);
  this->fields.writeMasterDataThread = v7;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, (int32_t)v7, v9, v10);
  if ( !*p_writeMasterDataThread )
    sub_1B8880C(0LL, v11);
  System_Threading_Thread__Start_62969420(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  ServantStatusBattleListViewItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5AC95 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4A5AC95 = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1B8880C(Item, v7);
      v8 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0LL) )
        System_Threading_Thread__Abort(v8, 0LL);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0LL;
    sub_1B88554(p_masterLoadThreads, 0, v9, v10);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0LL) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1B8880C(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v5, v6);
  }
}


void __fastcall DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_Stream_o *v7; // x22
  System_IO_BinaryWriter_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
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

  if ( (byte_4A5AC98 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5AC98 = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v5 = param;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v5, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v7 = CatAndMouseGame__CatGameZ(v6, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v8, v7, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1B8880C(v9, v10);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1B8880C(0LL, v17);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1B88814(Item, v17);
      if ( !v8 )
        sub_1B8880C(Item, v17);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._18_Write.methodPtr);
      v19 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v19 )
        sub_1B8880C(0LL, v18);
      masterDataBytes = this->fields.masterDataBytes;
      v21 = System_Collections_Generic_List_object___get_Item(
              v19,
              v15,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v21 )
        sub_1B8880C(0LL, v22);
      if ( !LODWORD(v21[1].monitor) )
        sub_1B88814(v21, v22);
      if ( !this->fields.saveDataMapList )
        sub_1B8880C(v21, v22);
      klass = v21[2].klass;
      v24 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v15,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v24 )
        sub_1B8880C(0LL, v25);
      if ( LODWORD(v24[1].monitor) <= 1 )
        sub_1B88814(v24, v25);
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._11_Write.method)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v24[2].monitor),
              v8->klass->vtable._12_Write.methodPtr);
      if ( size == ++v15 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1B8880C(v26, v27);
    }
  }
  v28 = v8->klass;
  v29 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)(&v28->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
LABEL_34:
  if ( v6 )
  {
    v32 = v6->klass;
    v33 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_39;
      }
      v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
    }
    else
    {
LABEL_39:
      v35 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v35)(v6, *(_QWORD *)(v35 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v11, v12);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5AC7F & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AC7F = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_61718292(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5AC7E & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AC7E = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_61718292(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4A5AC7C & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&CacheFolderName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AC7C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5AC7D & 1) == 0 )
  {
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AC7D = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_61718292(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2E7FB04 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2E7FB68 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2E8019C *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC8A & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8A = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t __fastcall DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC8B & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8B = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dateVersion;
}


uint32_t __fastcall DataManager__getMdk(
        DataManager_o *this,
        System_String_o *name,
        int32_t version,
        const MethodInfo *method)
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

  if ( (byte_4A5AC9A & 1) == 0 )
  {
    sub_1B885B0(&Crc32_TypeInfo);
    byte_4A5AC9A = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B8880C(0LL, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v9 = Crc32__Compute(v8, 0LL);
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


System_String_o *__fastcall DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4A5AC80 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&CacheFolderName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5AC80 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_61718292(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC8F & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8F = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t __fastcall DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC8E & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8E = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t __fastcall DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
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
    this = 0LL;
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
    sub_1B8880C(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC87 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC87 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t __fastcall DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A5AC92 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC92 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->updateMasterDataResult;
}


bool __fastcall DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5AC91 & 1) == 0 )
  {
    sub_1B885B0(&DataManager__readMasterData_d__47_TypeInfo);
    byte_4A5AC91 = 1;
  }
  v3 = sub_1B887FC(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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
  System_Char_array *v14; // x0
  System_String_o *v15; // x20
  System_Char_array *v16; // x0
  il2cpp_array_size_t max_length; // w8
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
  System_Char_array *v29; // x0
  il2cpp_array_size_t v30; // w8
  DataManager_o *v31; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v33; // x21
  DataManager_o *v34; // x21
  System_String_o *v35; // x0
  ManagerConfig_c *v36; // x8
  System_String_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  DataManager_o *v40; // x20
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Byte_array *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w1
  ServantStatusBattleListViewItem_o *p_saveNameList; // x0
  int v55; // w22
  int64_t v56; // x0
  DataManager_c *v57; // x8
  int64_t v58; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v60; // x22
  unsigned int v61; // w23
  System_String_o *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  DataManager_o *v65; // x8
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v69; // x8
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  DataManager_c *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w1
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w1
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w1
  int32_t v90; // w2
  int32_t v91; // w3
  int64_t v92; // [xsp+8h] [xbp-58h] BYREF
  int v93; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4A5AC9F & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_5114/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1B885B0(&StringLiteral_5117/*"DataManager version load error : list file parameter error"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_25156/*"~"*/);
    sub_1B885B0(&StringLiteral_823/*") -> ("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_21292/*"master versiton different ("*/);
    sub_1B885B0(&StringLiteral_5118/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1B885B0(&StringLiteral_5119/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1B885B0(&StringLiteral_5116/*"DataManager version load error : list file break"*/);
    byte_4A5AC9F = 1;
  }
  v93 = 0;
  v92 = 0LL;
  saveNameList = v2->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v5 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v7 = saveDataMapList->fields._size;
  v8 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v7, 0LL);
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
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v13 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v13 )
  {
    v14 = (System_Char_array *)sub_1B88658(char___TypeInfo, 1LL);
    if ( !v14 )
      sub_1B8880C(0LL, 0LL);
    if ( !v14->max_length )
      sub_1B88814(v14, v14);
    v14->m_Items[2] = -257;
    v15 = System_String__Trim_61736780(v13, v14, 0LL);
    v16 = (System_Char_array *)sub_1B88658(char___TypeInfo, 2LL);
    if ( !v16 )
      sub_1B8880C(0LL, 0LL);
    max_length = v16->max_length;
    if ( !max_length )
      sub_1B88814(v16, v16);
    v16->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B88814(v16, v16);
    v16->m_Items[3] = 10;
    if ( !v15 )
      sub_1B8880C(v16, v16);
    v18 = System_String__IndexOfAny(v15, v16, 0LL);
    if ( v18 < 2 )
    {
      v19 = &StringLiteral_5118/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v20 = System_String__Substring_61726036(v15, 0, v18, 0LL);
    v22 = v20;
    if ( !v20 )
      sub_1B8880C(0LL, v21);
    if ( System_String__StartsWith(v20, (System_String_o *)StringLiteral_25156/*"~"*/, 0LL) )
    {
      v23 = System_String__Substring(v22, 1, 0LL);
      v24 = System_String__Substring(v15, v18 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B8880C(0LL, v26);
      v27 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v24,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v28 = Crc32__Compute(v27, 0LL);
      if ( System_UInt32__Parse(v23, 0LL) == v28 )
      {
        v29 = (System_Char_array *)sub_1B88658(char___TypeInfo, 2LL);
        if ( !v29 )
          sub_1B8880C(0LL, 0LL);
        v30 = v29->max_length;
        if ( !v30 )
          sub_1B88814(v29, v29);
        v29->m_Items[2] = 13;
        if ( v30 == 1 )
          sub_1B88814(v29, v29);
        v29->m_Items[3] = 10;
        if ( !v24 )
          sub_1B8880C(v29, v29);
        this = (DataManager_o *)System_String__Split_61729424(v24, v29, 1, 0LL);
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
                                  (System_String_o *)StringLiteral_1886/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v31->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v33 = *(System_String_o **)&v31->fields._DispLog;
          this = (DataManager_o *)sub_1B88658(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v33 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_61729188(v33, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v34 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v35 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v36 = ManagerConfig_TypeInfo;
          v37 = v35;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v36 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v36->static_fields->MasterDataCacheVer, v37, 0LL) )
          {
            this = (DataManager_o *)sub_1B88658(string___TypeInfo, 5LL);
            if ( this )
            {
              v40 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v41 = StringLiteral_21292/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21292/*"master versiton different ("*/;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v41, v38, v39);
                if ( LODWORD(v40->fields.m_CancellationTokenSource) > 1 )
                {
                  v40->fields.datalist = (struct DataMasterBase_array *)v37;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->fields.datalist, (int32_t)v37, v42, v43);
                  if ( LODWORD(v40->fields.m_CancellationTokenSource) > 2 )
                  {
                    v46 = StringLiteral_823/*") -> ("*/;
                    v40->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_823/*") -> ("*/;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->fields.lookup, v46, v44, v45);
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
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&v40->fields.masterDataBytes,
                        (int32_t)v49,
                        v47,
                        v48);
                      if ( LODWORD(v40->fields.m_CancellationTokenSource) > 4 )
                      {
                        v52 = StringLiteral_814/*")"*/;
                        v40->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_814/*")"*/;
                        p_saveNameList = (ServantStatusBattleListViewItem_o *)&v40->fields.saveNameList;
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
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v34->fields.datalist, 0LL);
            v93 = (int)this;
            if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v55 = (int)this;
            v56 = System_Int64__Parse((System_String_o *)v34->fields.lookup, 0LL);
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
                this = (DataManager_o *)sub_1B88658(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v62 )
                  break;
                this = (DataManager_o *)System_String__Split_61729188(v62, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v65 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v65->fields._DispLog;
                v66 = *(_QWORD *)&this->fields.m_CachedPtr;
                v67 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v66 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v66 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = v66 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v69 + 32) = method;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 32), (int32_t)method, v63, v64);
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
              this = (DataManager_o *)sub_1B88658(string___TypeInfo, 9LL);
              if ( this )
              {
                v40 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v73 = StringLiteral_21292/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21292/*"master versiton different ("*/;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v73, v71, v72);
                  v74 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v74 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v74->static_fields, 0LL);
                  if ( LODWORD(v40->fields.m_CancellationTokenSource) > 1 )
                  {
                    v40->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->fields.datalist, (int32_t)this, v75, v76);
                    if ( LODWORD(v40->fields.m_CancellationTokenSource) > 2 )
                    {
                      v79 = (int)StringLiteral_117/*" "*/;
                      v40->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->fields.lookup, v79, v77, v78);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v40->fields.m_CancellationTokenSource) > 3 )
                      {
                        v40->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&v40->fields.masterDataBytes,
                          (int32_t)this,
                          v80,
                          v81);
                        if ( LODWORD(v40->fields.m_CancellationTokenSource) > 4 )
                        {
                          v84 = StringLiteral_823/*") -> ("*/;
                          v40->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_823/*") -> ("*/;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->fields.saveNameList, v84, v82, v83);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v93, 0LL);
                          if ( LODWORD(v40->fields.m_CancellationTokenSource) > 5 )
                          {
                            v40->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1B88554(
                              (ServantStatusBattleListViewItem_o *)&v40->fields.saveDataMapList,
                              (int32_t)this,
                              v85,
                              v86);
                            if ( LODWORD(v40->fields.m_CancellationTokenSource) > 6 )
                            {
                              v89 = (int)StringLiteral_117/*" "*/;
                              *(_QWORD *)&v40->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1B88554(
                                (ServantStatusBattleListViewItem_o *)&v40->fields.lastFrameTime,
                                v89,
                                v87,
                                v88);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v92, 0LL);
                              if ( LODWORD(v40->fields.m_CancellationTokenSource) > 7 )
                              {
                                v40->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1B88554(
                                  (ServantStatusBattleListViewItem_o *)&v40->fields.masterCheckName,
                                  (int32_t)this,
                                  v90,
                                  v91);
                                if ( LODWORD(v40->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v52 = StringLiteral_814/*")"*/;
                                  v40->fields.lockCountObj = (Il2CppObject *)StringLiteral_814/*")"*/;
                                  p_saveNameList = (ServantStatusBattleListViewItem_o *)&v40->fields.lockCountObj;
LABEL_104:
                                  sub_1B88554(p_saveNameList, v52, v50, v51);
                                  if ( System_String__Concat_61720560((System_String_array *)v40, 0LL) )
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
                sub_1B88814(this, method);
              }
            }
LABEL_119:
            sub_1B8880C(this, method);
          }
          v19 = &StringLiteral_5117/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v19 = &StringLiteral_5116/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v19 = &StringLiteral_5114/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v19 = &StringLiteral_5119/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v19 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5AC90 & 1) == 0 )
  {
    sub_1B885B0(&DataManager__readMasterVersion_d__46_TypeInfo);
    byte_4A5AC90 = 1;
  }
  v3 = sub_1B887FC(DataManager__readMasterVersion_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v6; // x1
  System_String_o *AllText; // x20
  System_String_o *v8; // x20
  System_Char_array *v9; // x0
  System_String_o *v10; // x20
  System_Char_array *v11; // x0
  il2cpp_array_size_t max_length; // w8
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
  System_Char_array *v24; // x0
  il2cpp_array_size_t v25; // w8
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  System_String_o *v29; // x20
  __int64 v30; // x20
  System_String_o *v31; // x0
  ManagerConfig_c *v32; // x8
  System_String_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x20
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  System_String_o *v49; // x8
  DataManager_c *v50; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v53; // x8
  int32_t v54; // w19
  struct DataManager_StaticFields *v55; // x8
  int64_t v56; // x0
  struct DataManager_StaticFields *v57; // x8

  if ( (byte_4A5AC9D & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_5113/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1B885B0(&StringLiteral_5110/*"DataManager boot load error : list file break"*/);
    sub_1B885B0(&StringLiteral_5112/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1B885B0(&StringLiteral_5108/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1B885B0(&StringLiteral_25156/*"~"*/);
    sub_1B885B0(&StringLiteral_21291/*"master data versiton different ("*/);
    sub_1B885B0(&StringLiteral_823/*") -> ("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_5111/*"DataManager boot load error : list file parameter error"*/);
    byte_4A5AC9D = 1;
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
  if ( !System_IO_File__Exists(CacheVersionFileName, 0LL) )
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
    static_fields->dateVersion = 0LL;
    DataManager__ClearSaveDataList(this, v6);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v8 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
  if ( v8 )
  {
    v9 = (System_Char_array *)sub_1B88658(char___TypeInfo, 1LL);
    if ( !v9 )
      sub_1B8880C(0LL, 0LL);
    if ( !v9->max_length )
      sub_1B88814(v9, v9);
    v9->m_Items[2] = -257;
    v10 = System_String__Trim_61736780(v8, v9, 0LL);
    v11 = (System_Char_array *)sub_1B88658(char___TypeInfo, 2LL);
    if ( !v11 )
      sub_1B8880C(0LL, 0LL);
    max_length = v11->max_length;
    if ( !max_length )
      sub_1B88814(v11, v11);
    v11->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B88814(v11, v11);
    v11->m_Items[3] = 10;
    if ( !v10 )
      sub_1B8880C(v11, v11);
    v13 = System_String__IndexOfAny(v10, v11, 0LL);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5112/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v49 = (System_String_o *)*v14;
LABEL_58:
      if ( v49 )
        goto LABEL_59;
      return 1;
    }
    v15 = System_String__Substring_61726036(v10, 0, v13, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_1B8880C(0LL, v16);
    if ( !System_String__StartsWith(v15, (System_String_o *)StringLiteral_25156/*"~"*/, 0LL) )
    {
      v14 = &StringLiteral_5113/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v18 = System_String__Substring(v17, 1, 0LL);
    v19 = System_String__Substring(v10, v13 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1B8880C(0LL, v21);
    v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v19,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(v22, 0LL);
    if ( System_UInt32__Parse(v18, 0LL) != v23 )
    {
      v14 = &StringLiteral_5108/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v24 = (System_Char_array *)sub_1B88658(char___TypeInfo, 2LL);
    if ( !v24 )
      sub_1B8880C(0LL, 0LL);
    v25 = v24->max_length;
    if ( !v25 )
      sub_1B88814(v24, v24);
    v24->m_Items[2] = 13;
    if ( v25 == 1 )
      sub_1B88814(v24, v24);
    v24->m_Items[3] = 10;
    if ( !v19 )
      sub_1B8880C(v24, v24);
    v26 = (__int64)System_String__Split_61729424(v19, v24, 1, 0LL);
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
      v26 = System_String__StartsWith((System_String_o *)v26, (System_String_o *)StringLiteral_1886/*"@"*/, 0LL);
      if ( (v26 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_78;
        v29 = *(System_String_o **)(v27 + 32);
        v26 = sub_1B88658(char___TypeInfo, 1LL);
        if ( v26 )
        {
          v6 = (const MethodInfo *)v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_78;
          *(_WORD *)(v26 + 32) = 44;
          if ( v29 )
          {
            v26 = (__int64)System_String__Split_61729188(v29, (System_Char_array *)v26, 0LL);
            if ( v26 )
            {
              v30 = v26;
              if ( !*(_DWORD *)(v26 + 24) )
                goto LABEL_78;
              v26 = *(_QWORD *)(v26 + 32);
              if ( v26 )
              {
                v31 = System_String__Substring((System_String_o *)v26, 1, 0LL);
                v32 = ManagerConfig_TypeInfo;
                v33 = v31;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v32 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v32->static_fields->MasterDataCacheVer, v33, 0LL) )
                {
                  if ( *(_DWORD *)(v30 + 24) != 3 )
                  {
                    v14 = &StringLiteral_5111/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v26 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0LL);
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
                    v56 = System_Int64__Parse(*(System_String_o **)(v30 + 48), 0LL);
                    v57 = DataManager_TypeInfo->static_fields;
                    v57->dateVersion = v56;
                    v57->readDateVersion = v56;
                    return 1;
                  }
LABEL_78:
                  sub_1B88814(v26, v6);
                }
                v26 = sub_1B88658(string___TypeInfo, 5LL);
                if ( v26 )
                {
                  v36 = v26;
                  if ( *(_DWORD *)(v26 + 24) )
                  {
                    v37 = StringLiteral_21291/*"master data versiton different ("*/;
                    *(_QWORD *)(v26 + 32) = StringLiteral_21291/*"master data versiton different ("*/;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), v37, v34, v35);
                    if ( *(_DWORD *)(v36 + 24) > 1u )
                    {
                      *(_QWORD *)(v36 + 40) = v33;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 40), (int32_t)v33, v38, v39);
                      if ( *(_DWORD *)(v36 + 24) > 2u )
                      {
                        v42 = StringLiteral_823/*") -> ("*/;
                        *(_QWORD *)(v36 + 48) = StringLiteral_823/*") -> ("*/;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 48), v42, v40, v41);
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
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 56), v45, v43, v44);
                          if ( *(_DWORD *)(v36 + 24) > 4u )
                          {
                            v48 = StringLiteral_814/*")"*/;
                            *(_QWORD *)(v36 + 64) = StringLiteral_814/*")"*/;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 64), v48, v46, v47);
                            v49 = System_String__Concat_61720560((System_String_array *)v36, 0LL);
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
        sub_1B8880C(v26, v6);
      }
    }
    v14 = &StringLiteral_5110/*"DataManager boot load error : list file break"*/;
    goto LABEL_57;
  }
  return 1;
}


void __fastcall DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  DataManager_c *v8; // x0
  struct DataManager_StaticFields *static_fields; // x8
  ServantStatusBattleListViewItem_o *p_updateData; // x0
  int32_t v11; // w1
  struct DataManager_StaticFields *v12; // x0

  if ( (byte_4A5AC8D & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8D = 1;
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
    static_fields->updateData = 0LL;
    p_updateData = (ServantStatusBattleListViewItem_o *)&static_fields->updateData;
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
    p_updateData = (ServantStatusBattleListViewItem_o *)&v12->updateData;
    LODWORD(p_updateData[-1].fields.name) = dataVer;
    *(_QWORD *)&p_updateData[-1].fields.isMine = dateVer;
  }
  sub_1B88554(p_updateData, v11, dateVer, (int32_t)obj);
}


void __fastcall DataManager__setMasterDataVersion(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4A5AC8C & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC8C = 1;
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


void __fastcall DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_c *v5; // x0
  int32_t v6; // w1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x0
  DataManager_c *v15; // x8
  struct DataManager_StaticFields *v16; // x0
  DataManager_c *v17; // x0

  if ( (byte_4A5AC86 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AC86 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  v6 = (int)StringLiteral_1/*""*/;
  static_fields = v5->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->serverHash, v6, (int32_t)method, v3);
  if ( obj )
  {
    v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                              obj,
                              obj->klass->vtable[4].methodPtr);
    v9 = System_String__op_Equality(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v9 )
    {
      if ( !v8 )
        sub_1B8880C(v9, v10);
      v11 = System_String__Substring(v8, v8->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v14 = System_String__Substring_61726036(v8, 0, v8->fields._stringLength - 1, 0LL);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->serverHash, (int32_t)v8, v12, v13);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4A5AC88 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AC88 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4A5ACA1 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4A5ACA1 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1B88ACC(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_38789752(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_38789752(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  DataManager_o *v5; // x21
  __int64 methodPtr_low; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v9; // w26
  il2cpp_array_size_t v10; // w9
  __int64 v11; // x27
  DataMasterBase_o *v12; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v14; // x8
  DataMasterBase_o *v15; // x23
  __int64 v16; // x9
  struct DataMasterBase_array *v17; // x8
  int v18; // w9
  int v19; // w26
  il2cpp_array_size_t v20; // w9
  __int64 v21; // x27
  DataMasterBase_o *v22; // x8
  Il2CppObject *v23; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct DataMasterBase_array *v27; // x8
  int v28; // w9
  int v29; // w25
  il2cpp_array_size_t v30; // w9
  __int64 v31; // x26
  DataMasterBase_o *v32; // x8
  Il2CppObject *v33; // x21
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x22
  DataManager_o *v36; // x0
  const MethodInfo *v37; // x1
  System_Nullable_long__o v38; // 0:x2.16
  System_Nullable_long__o v39; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4A5ACA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_24318/*"updated"*/);
    sub_1B885B0(&StringLiteral_18564/*"deleted"*/);
    this = (DataManager_o *)sub_1B885B0(&StringLiteral_22876/*"replaced"*/);
    byte_4A5ACA2 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1B8880C(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18564/*"deleted"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18564/*"deleted"*/,
                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
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
      while ( v10 < datalist->max_length )
      {
        v11 = (int)v10;
        v12 = datalist->m_Items[v10];
        if ( !v12 || !v5 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v12->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v4->fields.datalist;
          if ( !v14 )
            goto LABEL_57;
          if ( (unsigned int)v11 >= v14->max_length )
            break;
          v15 = v14->m_Items[v11];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v15 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v15, (Il2CppObject *)this, 0LL);
        }
        if ( v9 == (_DWORD)v11 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v10 = v11 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1B88814(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24318/*"updated"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24318/*"updated"*/,
                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v16 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1B88ACC(v5);
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
    while ( v20 < v17->max_length )
    {
      v21 = (int)v20;
      v22 = v17->m_Items[v20];
      if ( !v22 || !v5 )
        goto LABEL_57;
      v23 = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                v23,
                                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.datalist;
        if ( !v24 )
          goto LABEL_57;
        if ( (unsigned int)v21 >= v24->max_length )
          goto LABEL_59;
        v25 = v24->m_Items[v21];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  v23,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v25, (Il2CppObject *)this, 0LL);
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
          (Il2CppObject *)StringLiteral_22876/*"replaced"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22876/*"replaced"*/,
                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1B88ACC(v3);
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
    while ( v30 < v27->max_length )
    {
      v31 = (int)v30;
      v32 = v27->m_Items[v30];
      if ( !v32 || !v3 )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v33,
                                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= v34->max_length )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v33,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        *(_QWORD *)&v38.fields.hasValue = 0LL;
        v38.fields.value = 0LL;
        *(_QWORD *)&v39.fields.hasValue = 0LL;
        v39.fields.value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v35, (Il2CppObject *)this, v38, v39, 0LL);
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


System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  bool v5; // w21
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5AC93 & 1) == 0 )
  {
    sub_1B885B0(&DataManager__updateMasterData_d__49_TypeInfo);
    byte_4A5AC93 = 1;
  }
  v5 = isUseTips;
  v6 = sub_1B887FC(DataManager__updateMasterData_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)this, v7, v8);
  *(_BYTE *)(v6 + 48) = v5;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5AC89 & 1) == 0 )
  {
    sub_1B885B0(&DataManager__updateWebViewData_d__38_TypeInfo);
    byte_4A5AC89 = 1;
  }
  v3 = sub_1B887FC(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5ACA0 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&System_IO_StreamWriter_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&uint_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_25159/*"~{0}\n{1}"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5ACA0 = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_60862280(v10, (size << 7) + 128, 0LL);
    if ( !v10 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)StringLiteral_1886/*"@"*/, 0LL);
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_60868928(v10, v11->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    System_Text_StringBuilder__Append_60871424(v10, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    System_Text_StringBuilder__Append_60871512(v10, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_60868928(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        if ( v13 == v14 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v14;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                            v10,
                            v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_17:
      sub_1B8880C(CacheListFileName, v6);
    v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v16,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v32 = Crc32__Compute(v17, 0LL);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v32, v18, v19, v20);
    v22 = System_String__Format_61721404((System_String_o *)StringLiteral_25159/*"~{0}\n{1}"*/, v21, v16, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v23 = CatAndMouseGame__CatGame3(v22, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v25 = (System_IO_StreamWriter_o *)sub_1B887FC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61876168(v25, v9, 0, UTF8, 0LL);
    if ( !v25 )
      sub_1B8880C(v26, v27);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._16_Write.method)(
      v25,
      v23,
      v25->klass->vtable._17_Write.methodPtr);
    klass = v25->klass;
    v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_28:
      v31 = sub_1BDA590(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  char *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  System_String_o *v27; // x20
  System_Byte_array *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  System_String_o *v31; // x20
  System_Text_Encoding_o *v32; // x22
  System_IO_StreamWriter_o *v33; // x21
  uint32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5AC9E & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&System_IO_StreamWriter_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_25156/*"~"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5AC9E = 1;
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
    UTF8 = (char *)sub_1B88658(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v9 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v10 = StringLiteral_1886/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1886/*"@"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(UTF8 + 32), v10, v7, v8);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v13, v11, v12);
    if ( *((_DWORD *)v9 + 6) <= 2u )
      goto LABEL_26;
    v16 = (int)StringLiteral_868/*","*/;
    *((_QWORD *)v9 + 6) = StringLiteral_868/*","*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), v16, v14, v15);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v9 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v9 + 7) = UTF8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)UTF8, v17, v18);
    if ( *((_DWORD *)v9 + 6) <= 4u
      || (v21 = (int)StringLiteral_868/*","*/,
          *((_QWORD *)v9 + 8) = StringLiteral_868/*","*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), v21, v19, v20),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v9 + 6) <= 5u)
      || (*((_QWORD *)v9 + 9) = UTF8,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 72), (int32_t)UTF8, v22, v23),
          *((_DWORD *)v9 + 6) <= 6u) )
    {
LABEL_26:
      sub_1B88814(UTF8, v6);
    }
    v26 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v9 + 10) = StringLiteral_43/*"\n"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 80), v26, v24, v25);
    v27 = System_String__Concat_61720560((System_String_array *)v9, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v28 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v27,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v34 = Crc32__Compute(v28, 0LL);
    v29 = System_UInt32__ToString((uint32_t)&v34, 0LL);
    v30 = System_String__Concat_61720296(
            (System_String_o *)StringLiteral_25156/*"~"*/,
            v29,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v27,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v31 = CatAndMouseGame__CatGame1(v30, 0, 0LL);
    v32 = System_Text_Encoding__get_UTF8(0LL);
    v33 = (System_IO_StreamWriter_o *)sub_1B887FC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61876168(v33, CacheVersionFileName, 0, v32, 0LL);
    if ( !v33 )
LABEL_27:
      sub_1B8880C(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v33->klass->vtable._16_Write.method)(
      v33,
      v31,
      v33->klass->vtable._17_Write.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v33->klass->vtable._8_Close.method)(
      v33,
      v33->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ACA6 & 1) == 0 )
  {
    sub_1B885B0(&DataManager___c_TypeInfo);
    byte_4A5ACA6 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataManager___c___LoadMasterDataThread_b__58_1(
        DataManager___c_o *this,
        Il2CppObject *_,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager___c__DisplayClass49_0___ctor(
        DataManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_0___updateMasterData_b__1(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_0___updateMasterData_b__2(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass49_1___ctor(
        DataManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_1___updateMasterData_b__3(
        DataManager___c__DisplayClass49_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass56_0___ctor(
        DataManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataManager___c__DisplayClass56_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass56_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  struct DataManager_o *v8; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4A5ACA7 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4A5ACA7 = 1;
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
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v8 = v6->fields.__4__this;
  if ( !v8
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v8->fields.saveDataMapList) == 0LL
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1B88814(this, *(_QWORD *)&a);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void __fastcall DataManager___c__DisplayClass56_1___ctor(
        DataManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataManager___c__DisplayClass56_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass56_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_1_o *v4; // x20
  struct DataManager___c__DisplayClass56_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4A5ACA8 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5ACA8 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1B8880C(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void __fastcall DataManager___c__DisplayClass58_0___ctor(
        DataManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass58_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass58_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0LL);
}


void __fastcall DataManager__readMasterData_d__47___ctor(
        DataManager__readMasterData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__readMasterData_d__47__MoveNext(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterData_d__47_o *v2; // x20
  struct DataManager_o *_4__this; // x19
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v5; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  char v9; // w8
  DataManager_c *v10; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v12; // w10
  DataManager_c *v13; // x0
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v15; // x21
  System_IO_Stream_o *v16; // x24
  System_IO_Stream_o *v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  float v23; // s0
  UnityEngine_WaitForEndOfFrame_o *v24; // x19
  ServantStatusBattleListViewItem_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  DataManager_c *v29; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_IO_Stream_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_IO_MemoryStream_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v48; // x21
  System_IO_BinaryReader_o *v49; // x24
  __int64 v50; // x0
  __int64 v51; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v54; // x0
  __int64 v55; // x1
  int v56; // w22
  __int64 v57; // x23
  __int64 v58; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  int v64; // w8
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  System_IO_BinaryReader_c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  System_IO_MemoryStream_c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  UnityEngine_WaitForEndOfFrame_o *v77; // x19
  int32_t v78; // w2
  int32_t v79; // w3

  v2 = this;
  if ( (byte_4A5ACA9 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__47_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5ACA9 = 1;
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
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)v5, v7, v8);
        v9 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return v9 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, method) )
      {
        v13 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v13);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v15 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v15, 0LL);
          v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v17 = CatAndMouseGame__MouseGameZ(v16, 0LL);
          v18 = sub_1B88658(byte___TypeInfo, 0x4000LL);
          v20 = v18;
          if ( !v18 )
            sub_1B8880C(0LL, v19);
          if ( !v17 )
            sub_1B8880C(v18, v19);
          while ( 1 )
          {
            v21 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v17->klass->vtable._33_unknown.method)(
                    v17,
                    v20,
                    0LL,
                    *(unsigned int *)(v20 + 24),
                    v17->klass->vtable._34_Read.methodPtr);
            if ( (int)v21 <= 0 )
              break;
            if ( !v15 )
              sub_1B8880C(v21, v22);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._36_Write.method)(
              v15,
              v20,
              0LL,
              (unsigned int)v21,
              v15->klass->vtable._37_Write.methodPtr);
          }
          klass = v17->klass;
          v31 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v31;
              p_offset += 4;
              if ( !v31 )
                goto LABEL_37;
            }
            v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v33 = sub_1BDA590(v17, System_IDisposable_TypeInfo, 0LL);
          }
          v34 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v33)(v17, *(_QWORD *)(v33 + 8));
          if ( v16 )
          {
            v36 = v16->klass;
            v37 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
            {
              v38 = &v36->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
              {
                --v37;
                v38 += 4;
                if ( !v37 )
                  goto LABEL_44;
              }
              v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
            }
            else
            {
LABEL_44:
              v39 = sub_1BDA590(v16, System_IDisposable_TypeInfo, 0LL);
            }
            v34 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v39)(v16, *(_QWORD *)(v39 + 8));
          }
          if ( !v15 )
            sub_1B8880C(v34, v35);
          v40 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v15->klass->vtable._42_ToArray.method)(
                  v15,
                  v15->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v40;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, v40, v41, v42);
          v43 = v15->klass;
          v44 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
          {
            v45 = &v43->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_52;
            }
            v46 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v45);
          }
          else
          {
LABEL_52:
            v46 = sub_1BDA590(v15, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v46)(v15, *(_QWORD *)(v46 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v48 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_61851044(v48, masterDataBytes, 0LL);
          v49 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v49, (System_IO_Stream_o *)v48, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1B8880C(v50, v51);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v49 )
            {
LABEL_76:
              if ( v48 )
              {
                v73 = v48->klass;
                v74 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
                {
                  v75 = &v73->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v74;
                    v75 += 4;
                    if ( !v74 )
                      goto LABEL_81;
                  }
                  v76 = (__int64)(&v73->vtable._0_Equals.method + 2 * *v75);
                }
                else
                {
LABEL_81:
                  v76 = sub_1BDA590(v48, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v76)(v48, *(_QWORD *)(v76 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62753100(0LL);
              v77 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v77, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v77;
              v25 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(v25, (int32_t)v77, v78, v79);
              v28 = 2;
LABEL_87:
              *(_DWORD *)&v25[-1].fields.isMine = v28;
              v9 = 1;
              return v9 & 1;
            }
          }
          else
          {
            if ( !v49 )
              sub_1B8880C(v50, v51);
            do
            {
              v54 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v49->klass->vtable._15_ReadInt32.method)(
                      v49,
                      v49->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v48 )
                sub_1B8880C(v54, v55);
              v56 = v54;
              v57 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v48->klass->vtable._12_get_Position.method)(
                      v48,
                      v48->klass->vtable._13_set_Position.methodPtr);
              v58 = v56;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v48->klass->vtable._31_Seek.method)(
                v48,
                v56,
                1LL,
                v48->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v60 = sub_1B88658(long___TypeInfo, 2LL);
              v63 = v60;
              if ( !v60 )
                sub_1B8880C(0LL, 0LL);
              v64 = *(_DWORD *)(v60 + 24);
              if ( !v64 )
                sub_1B88814(v60, v60);
              *(_QWORD *)(v60 + 32) = v57;
              if ( v64 == 1 )
                sub_1B88814(v60, v60);
              *(_QWORD *)(v60 + 40) = v58;
              if ( !saveDataMapList )
                sub_1B8880C(v60, v60);
              items = saveDataMapList->fields._items;
              v66 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1B8880C(v60, v60);
              v67 = saveDataMapList->fields._size;
              if ( (unsigned int)v67 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v60,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &items->obj.klass + v67;
                saveDataMapList->fields._size = v67 + 1;
                v68[4] = (Il2CppClass *)v63;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 4), v63, v61, v62);
              }
              --size;
            }
            while ( size );
          }
          v69 = v49->klass;
          v70 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
          {
            v71 = &v69->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
            {
              --v70;
              v71 += 4;
              if ( !v70 )
                goto LABEL_73;
            }
            v72 = (__int64)(&v69->vtable._0_Equals.method + 2 * *v71);
          }
          else
          {
LABEL_73:
            v72 = sub_1BDA590(v49, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v72)(v49, *(_QWORD *)(v72 + 8));
          goto LABEL_76;
        }
      }
      v23 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v23 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v23;
        v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v24;
        v25 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v25, (int32_t)v24, v26, v27);
        v28 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, method);
      v29 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v29 = DataManager_TypeInfo;
      }
      static_fields = v29->static_fields;
      v9 = 0;
      v12 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v12;
      return v9 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v10 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager_TypeInfo;
      }
      static_fields = v10->static_fields;
      v9 = 0;
      v12 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1B8880C(this, method);
      goto LABEL_28;
    default:
      v9 = 0;
      return v9 & 1;
  }
}


Il2CppObject *__fastcall DataManager__readMasterData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__readMasterData_d__47__System_Collections_IEnumerator_Reset(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall DataManager__readMasterData_d__47__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__readMasterData_d__47__System_IDisposable_Dispose(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__readMasterVersion_d__46___ctor(
        DataManager__readMasterVersion_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__readMasterVersion_d__46__MoveNext(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterVersion_d__46_o *v2; // x19
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v12; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v14; // w9

  v2 = this;
  if ( (byte_4A5ACAA & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5ACAA = 1;
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
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)v6, v8, v9);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1B8880C(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, method);
  v12 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v12 = DataManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v14 = 1;
  else
    v14 = 5;
  static_fields->readMasterVersionResult = v14;
  return result;
}


Il2CppObject *__fastcall DataManager__readMasterVersion_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_Reset(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__readMasterVersion_d__46__System_IDisposable_Dispose(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__updateMasterData_d__49___ctor(
        DataManager__updateMasterData_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__updateMasterData_d__49__MoveNext(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
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
  int32_t v13; // w3
  UnityEngine_WaitForEndOfFrame_o *v14; // x20
  ServantStatusBattleListViewItem_o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v20; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v22; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  DataManager_c *v25; // x0
  System_String_o *CachePath; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  DataManager_c *v34; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v36; // x21
  System_Byte_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  DataManager_c *v42; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v46; // w2
  int32_t v47; // w3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  DataManager_c *v58; // x0
  const MethodInfo *v59; // x2
  System_Func_bool__o *v60; // x21
  UnityEngine_WaitUntil_o *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  ServantStatusBattleListViewItem_o *p_dataMapDict_5__6; // x0
  const MethodInfo *v66; // x1
  float v67; // s0
  UnityEngine_WaitForEndOfFrame_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  int v75; // w8
  DataManager_c *v76; // x8
  struct DataManager_StaticFields *v77; // x8
  int v78; // w9
  Il2CppObject *v79; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w2
  int32_t v84; // w3
  struct DataMasterBase_array *v85; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v87; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x0
  __int64 v93; // x1
  struct DataManager___c__DisplayClass49_0_o *v94; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  float v99; // s0
  struct DataManager___c__DisplayClass49_0_o *v100; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v103; // x24
  System_Predicate_object__o *v104; // x23
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w2
  int32_t v108; // w3
  System_Collections_Generic_List_object__o *v109; // x22
  DataManager__updateMasterData_d__49_o *v110; // x24
  System_Predicate_object__o *v111; // x23
  int32_t Index; // w0
  int32_t v113; // w22
  int32_t v114; // w2
  int32_t v115; // w3
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 _2__current_low; // x10
  __int64 v119; // x8
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  float v126; // s0
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  ManagerConfig_c *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  int32_t v133; // w2
  int32_t v134; // w3
  struct System_Collections_Generic_List_string__o *v135; // x8
  System_Collections_Generic_List_int__o *v136; // x22
  int32_t v137; // w2
  int32_t v138; // w3
  ManagerConfig_c *v139; // x0
  __int64 v140; // x22
  int32_t v141; // w2
  int32_t v142; // w3
  DataManager__updateMasterData_d__49_o *v143; // x23
  int32_t v144; // w2
  int32_t v145; // w3
  DataManager__updateMasterData_d__49_o *v146; // x23
  int32_t v147; // w2
  int32_t v148; // w3
  DataManager__updateMasterData_d__49_o *v149; // x23
  int32_t v150; // w2
  int32_t v151; // w3
  DataManager__updateMasterData_d__49_o *v152; // x23
  int32_t v153; // w2
  int32_t v154; // w3
  DataManager__updateMasterData_d__49_o *v155; // x23
  int32_t v156; // w2
  int32_t v157; // w3
  DataManager__updateMasterData_d__49_o *v158; // x23
  int32_t v159; // w2
  int32_t v160; // w3
  DataManager__updateMasterData_d__49_o *v161; // x23
  int32_t v162; // w2
  int32_t v163; // w3
  DataManager__updateMasterData_d__49_o *v164; // x23
  __int64 v165; // x8
  __int64 v166; // x21
  DataMasterBase_o *v167; // x23
  __int64 v168; // x24
  int32_t v169; // w2
  int32_t v170; // w3
  struct System_String_o *v171; // x1
  System_Collections_Generic_List_object__o *v172; // x25
  System_Predicate_object__o *v173; // x26
  int32_t v174; // w24
  Il2CppObject *p_obj; // x25
  const MethodInfo_361AA4C *v176; // x3
  const MethodInfo_361AA4C *v177; // x3
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  UnityEngine_WaitForEndOfFrame_o *v181; // x20
  int32_t v182; // w2
  int32_t v183; // w3
  const MethodInfo *v184; // x1
  ManagerConfig_c *v185; // x0
  Il2CppObject *lockCountObj; // x22
  const MethodInfo *v187; // x1
  DataManager_c *v188; // x0
  int v189; // w21
  DataManager_c *v190; // x8
  UnityEngine_WaitForEndOfFrame_o *v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  int32_t v194; // w3
  struct System_Collections_Generic_List_string__o *v195; // x8
  int32_t size; // w2
  int v197; // w9
  struct System_Collections_Generic_List_long____o *v198; // x8
  int32_t v199; // w2
  int v200; // w9
  UnityEngine_WaitForEndOfFrame_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  float v204; // s0
  UnityEngine_WaitForEndOfFrame_o *v205; // x20
  int32_t v206; // w2
  int32_t v207; // w3
  UnityEngine_WaitForEndOfFrame_o *v208; // x20
  int32_t v209; // w2
  int32_t v210; // w3
  __int64 v211; // x0
  struct DataMasterBase_array *v212; // x9
  float v213; // s0
  DataManager_c *v214; // x8
  UnityEngine_WaitForEndOfFrame_o *v215; // x20
  int32_t v216; // w2
  int32_t v217; // w3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+8h] [xbp-A8h]
  System_Nullable_long__o v219; // [xsp+18h] [xbp-98h] BYREF
  System_Nullable_long__o v220; // [xsp+28h] [xbp-88h] BYREF
  int v221; // [xsp+40h] [xbp-70h]
  bool lockTaken; // [xsp+4Ch] [xbp-64h] BYREF
  System_Nullable_long__o v223; // 0:x0.16
  System_Nullable_long__o v224; // 0:x0.16

  v4 = this;
  if ( (byte_4A5ACAB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1B885B0(&Method_DataManager__updateMasterData_b__49_0__);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&DataMasterBase___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1B885B0(&EventRandomMissionClearManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&LastUsedDeckNumberManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LogoMain_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&MasterDataUnpakcer_TypeInfo);
    sub_1B885B0(&MaterialBranchRouteManager_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&MaterialServantLimitCountManager_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    sub_1B885B0(&System_Predicate_string__TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1B885B0(&ServantProfileLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__);
    sub_1B885B0(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__);
    sub_1B885B0(&DataManager___c__DisplayClass49_0_TypeInfo);
    sub_1B885B0(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__);
    sub_1B885B0(&DataManager___c__DisplayClass49_1_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    sub_1B885B0(&UserMissionProgressManager_TypeInfo);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    sub_1B885B0(&UserServantLockManager_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1B885B0(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__49_o *)sub_1B885B0(&StringLiteral_11456/*"SCRIPT"*/);
    byte_4A5ACAB = 1;
  }
  lockTaken = 0;
  v221 = 0;
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
        goto LABEL_288;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_288;
      v4->fields._dataListCount_5__2 = *(_QWORD *)&datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_288;
      v4->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, method);
      v25 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath((const MethodInfo *)v25);
      if ( !System_IO_Directory__Exists(CachePath, 0LL) )
        System_IO_Directory__CreateDirectory(CachePath, 0LL);
      v4->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_133;
      v4->fields._dataMapDict_5__6 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v27, v28);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v29, v30);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v31, v32);
      v34 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v34 = DataManager_TypeInfo;
      }
      updateData = v34->static_fields->updateData;
      if ( !updateData )
        sub_1B8880C(0LL, v33);
      v36 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                 updateData,
                                 updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v37 = System_Convert__FromBase64String(v36, 0LL);
      v4->fields._cryptBytes_5__8 = v37;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v37, v38, v39);
      v42 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v42 = DataManager_TypeInfo;
      }
      static_fields = v42->static_fields;
      static_fields->updateData = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v40, v41);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v44;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v44, v46, v47);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v50 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1B8880C(v50, v50);
      _4__this->fields.masterDataBytes = v50;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v50, v51, v52);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v53, v54);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v55;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v55, v56, v57);
      v18 = 2;
      goto LABEL_238;
    case 2:
      v4->fields.__1__state = -1;
      v8 = (MasterDataUnpakcer_o *)sub_1B887FC(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v8, 0LL);
      if ( !_4__this )
        sub_1B8880C(v9, v10);
      if ( !v8 )
        sub_1B8880C(v9, v10);
      v11 = MasterDataUnpakcer__Unpack_38183852(v8, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v11, v12, v13);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v14, v16, v17);
      v18 = 3;
      goto LABEL_238;
    case 3:
      dataMapObject_5__7 = v4->fields._dataMapObject_5__7;
      v4->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v20 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v22 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v22 = 0LL;
        }
        else
        {
          v22 = 0LL;
        }
        v4->fields._dataMapDict_5__6 = v22;
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v20 )
            v64 = (int)dataMapObject_5__7;
          else
            v64 = 0;
        }
        else
        {
          v64 = 0;
        }
      }
      else
      {
        v64 = 0;
        v4->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1B88554(p_dataMapDict_5__6, v64, v2, (int32_t)v3);
      if ( !_4__this )
        goto LABEL_288;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v72 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v72, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v72;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v72, v73, v74);
        v18 = 4;
        goto LABEL_238;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_82;
      v75 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v75 < v4->fields._dataListCount_5__2 )
        {
          v79 = (Il2CppObject *)sub_1B887FC(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v79, 0LL);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v79;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v79, v81, v82);
          v85 = _4__this->fields.datalist;
          if ( !v85 )
            goto LABEL_288;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v85->max_length )
            goto LABEL_289;
          v87 = v85->m_Items[i_5__9];
          if ( !v87 )
            goto LABEL_288;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_288;
          MasterName_k__BackingField = v87->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v83, v84);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_288;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_288;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v90, v91);
            v94 = v4->fields.__8__1;
            if ( !v94 )
              sub_1B8880C(v92, v93);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1B8880C(0LL, v93);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v94->fields.masterName,
                     (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v97, v98);
            v99 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v99 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v99;
              v208 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v208, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v208;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v208, v209, v210);
              v18 = 5;
              goto LABEL_238;
            }
LABEL_95:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v100 = v4->fields.__8__1;
            if ( !v100 || !this )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v100->fields.masterName,
                                                              (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_288;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v190 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v190 = DataManager_TypeInfo;
                }
                v77 = v190->static_fields;
                result = 0;
                v78 = 6;
                goto LABEL_286;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v103 = *p__8__1;
            v104 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v104,
              (Il2CppObject *)v103,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v104,
                                                              (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_288;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v116 = *(_QWORD *)&this->fields.__1__state;
              v117 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v116 )
                goto LABEL_288;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v116 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
              }
              else
              {
                v119 = v116 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v119 + 32) = method;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v119 + 32), (int32_t)method, v105, v106);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
              v122 = *(_QWORD *)&this->fields.__1__state;
              v123 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v122 )
                goto LABEL_288;
              v124 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
              }
              else
              {
                v125 = v122 + 8 * v124;
                LODWORD(this->fields.__2__current) = v124 + 1;
                *(_QWORD *)(v125 + 32) = method;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v125 + 32), (int32_t)method, v120, v121);
              }
              ++v4->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v107, v108);
          }
          else
          {
            v109 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v110 = *p__8__1;
            v111 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v111,
              (Il2CppObject *)v110,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v109 )
              goto LABEL_288;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v109,
                      (System_Predicate_T__o *)v111,
                      (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_124;
            v113 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v113,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v113,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)p__8__1, 0, v114, v115);
LABEL_124:
          v75 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v75;
          continue;
        }
        break;
      }
      v126 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v126 - _4__this->fields.lastFrameTime) <= 0.1 )
      {
LABEL_128:
        if ( !v4->fields._isAdd_5__4 )
        {
          v130 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v130 = ManagerConfig_TypeInfo;
          }
          if ( !v130->static_fields->UseMock )
            goto LABEL_82;
        }
        v4->fields._dataMapDict_5__6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, (int32_t)v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v131, v132);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v133, v134);
        if ( !_4__this )
          goto LABEL_288;
LABEL_133:
        v135 = _4__this->fields.saveNameList;
        if ( !v135 )
LABEL_288:
          sub_1B8880C(this, method);
        if ( v135->fields._size <= 0 )
        {
LABEL_82:
          v76 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v76 = DataManager_TypeInfo;
          }
          v77 = v76->static_fields;
          result = 0;
          v78 = 5;
          goto LABEL_286;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v136 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v136,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v136;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v136, v137, v138);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v139 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v139 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v139->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11456/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v140 = sub_1B88658(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v140 )
                goto LABEL_288;
              v143 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( !*(_DWORD *)(v140 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v140 + 32) = v143;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 32), (int32_t)v143, v141, v142);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v146 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 40) = v146;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 40), (int32_t)v146, v144, v145);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v149 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 48) = v149;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 48), (int32_t)v149, v147, v148);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v152 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 56) = v152;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 56), (int32_t)v152, v150, v151);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v155 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 64) = v155;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 64), (int32_t)v155, v153, v154);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantMaster___);
              v158 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 72) = v158;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 72), (int32_t)v158, v156, v157);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v161 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v140 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v140 + 80) = v161;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 80), (int32_t)v161, v159, v160);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v164 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !this )
                {
LABEL_237:
                  v211 = sub_1B88830(this);
                  sub_1B886D8(v211, 0LL);
                }
              }
              if ( *(_DWORD *)(v140 + 24) <= 7u )
LABEL_289:
                sub_1B88814(this, method);
              *(_QWORD *)(v140 + 88) = v164;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 88), (int32_t)v164, v162, v163);
              v165 = *(_QWORD *)(v140 + 24);
              if ( (int)v165 >= 1 )
              {
                v166 = 0LL;
                while ( (unsigned int)v166 < (unsigned int)v165 )
                {
                  v167 = *(DataMasterBase_o **)(v140 + 32 + 8 * v166);
                  v168 = sub_1B887FC(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v168, 0LL);
                  if ( !v167 )
                    goto LABEL_288;
                  if ( !v168 )
                    goto LABEL_288;
                  v171 = v167->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v168 + 16) = v171;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v168 + 16), (int32_t)v171, v169, v170);
                  v172 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v173 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v173,
                    (Il2CppObject *)v168,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v172 )
                    goto LABEL_288;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v172,
                                                                    (System_Predicate_T__o *)v173,
                                                                    (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v174 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    p_obj = &_4__this->fields.masterDataBytes->obj;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v174,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_289;
                    v223.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v223.fields.hasValue = &v220;
                    *(_QWORD *)&v220.fields.hasValue = 0LL;
                    v220.fields.value = 0LL;
                    System_Nullable_long____ctor(v223, Method_System_Nullable_long___ctor__, v176);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v174,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_289;
                    v224.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v224.fields.hasValue = &v219;
                    *(_QWORD *)&v219.fields.hasValue = 0LL;
                    v219.fields.value = 0LL;
                    System_Nullable_long____ctor(v224, Method_System_Nullable_long___ctor__, v177);
                    DataMasterBase__Replaced(v167, p_obj, v220, v219, 0LL);
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_288;
                    v178 = *(_QWORD *)&this->fields.__1__state;
                    v179 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v178 )
                      goto LABEL_288;
                    v180 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v180 >= *(_DWORD *)(v178 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v174,
                        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v180 + 1;
                      *(_DWORD *)(v178 + 4 * v180 + 32) = v174;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v165 = *(_QWORD *)(v140 + 24);
                  if ( (int)++v166 >= (int)v165 )
                    goto LABEL_188;
                }
                goto LABEL_289;
              }
LABEL_188:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_288;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0LL) >= 1 )
              {
                if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
                ServantProfileLimitCountManager__Initialize(0LL);
                if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
                ServantProfileEventJoinManager__Initialize(0LL);
                if ( !LogoMain_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
                if ( LogoMain__IsPLayLogo(0LL) )
                  goto LABEL_200;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v181 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v181, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v181;
                  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B88554(v15, (int32_t)v181, v182, v183);
                  v18 = 7;
                  goto LABEL_238;
                }
                goto LABEL_288;
              }
            }
          }
        }
LABEL_201:
        DataManager__StartMasterLoadThread(_4__this, v4->fields._saveDataCount_5__3, v4->fields._loadedIndices_5__5, v3);
        if ( v4->fields._isAdd_5__4 )
        {
          v185 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v185 = ManagerConfig_TypeInfo;
          }
          if ( !v185->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, v184);
            v204 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v204 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v204;
              v205 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v205, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v205;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v205, v206, v207);
              v18 = 8;
              goto LABEL_238;
            }
LABEL_56:
            v58 = DataManager_TypeInfo;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName((const MethodInfo *)v58);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, v59);
              v60 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v60,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v61 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v61, v60, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v61;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v61, v62, v63);
              v18 = 9;
              goto LABEL_238;
            }
            goto LABEL_288;
          }
        }
LABEL_205:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_62932760(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v189 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v188 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v188 = DataManager_TypeInfo;
          }
          v188->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, v187);
          v189 = 20;
        }
        else
        {
          v189 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v189 == 62 )
        {
          v191 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v191, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v191;
          v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v15, (int32_t)v191, v192, v193);
          v18 = 11;
          goto LABEL_238;
        }
        if ( v189 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, v187);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v195 = _4__this->fields.saveNameList;
          if ( v195 )
          {
            size = v195->fields._size;
            v197 = v195->fields._version + 1;
            v195->fields._size = 0;
            v195->fields._version = v197;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v195->fields._items, 0, size, 0LL);
            v198 = _4__this->fields.saveDataMapList;
            if ( v198 )
            {
              v199 = v198->fields._size;
              v200 = v198->fields._version + 1;
              v198->fields._size = 0;
              v198->fields._version = v200;
              if ( v199 >= 1 )
                System_Array__Clear((System_Array_o *)v198->fields._items, 0, v199, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, 0, v199, v194);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62753100(0LL);
              v201 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v201, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v201;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v201, v202, v203);
              v18 = 12;
              goto LABEL_238;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      _4__this->fields.lastFrameTime = v126;
      v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v127;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v127, v128, v129);
      v18 = 6;
LABEL_238:
      *(_DWORD *)&v15[-1].fields.isMine = v18;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_75;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_95;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_128;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_201;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v6 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v6 = DataManager_TypeInfo;
        }
        v6->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, method);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, method);
      DataManager__writeMasterVersionFile(_4__this, v66);
      v67 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v67 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v67;
        v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v68;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v68, v69, v70);
        v18 = 10;
        goto LABEL_238;
      }
      goto LABEL_205;
    case 0xA:
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_205;
    case 0xC:
      v7 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__9 = 0;
      goto LABEL_246;
    case 0xD:
      v4->fields.__1__state = -1;
      while ( 1 )
      {
        v7 = v4->fields._i_5__9 + 1;
        v4->fields._i_5__9 = v7;
LABEL_246:
        if ( v7 >= v4->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_288;
        v212 = _4__this->fields.datalist;
        if ( !v212 )
          goto LABEL_288;
        if ( v7 >= v212->max_length )
          goto LABEL_289;
        this = (DataManager__updateMasterData_d__49_o *)v212->m_Items[v7];
        if ( !this )
          goto LABEL_288;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                          this,
                                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v213 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          if ( (float)(v213 - _4__this->fields.lastFrameTime) > 0.1 )
          {
            _4__this->fields.lastFrameTime = v213;
            v215 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v215, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v215;
            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v15, (int32_t)v215, v216, v217);
            v18 = 13;
            goto LABEL_238;
          }
        }
      }
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      BalanceConfig__Initialize(0LL);
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__Initialize(0LL);
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__Initialize(0LL);
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__Initialize(0LL);
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__Initialize(0LL);
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      OtherUserNewManager__Initialize(0LL);
      if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      UserCommandCodeNewManager__Initialize(0LL);
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      UserCommandCodeCollectionManager__Initialize(0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__Initialize(0LL);
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__Initialize(0LL);
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      UserMissionProgressManager__Initialize(0LL);
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__Initialize(0LL);
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize(0LL);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0LL);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize(0LL);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v214 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v214 = DataManager_TypeInfo;
      }
      v77 = v214->static_fields;
      result = 0;
      v78 = 1;
LABEL_286:
      v77->updateMasterDataResult = v78;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall DataManager__updateMasterData_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__updateMasterData_d__49__System_Collections_IEnumerator_Reset(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall DataManager__updateMasterData_d__49__System_Collections_IEnumerator_get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__updateMasterData_d__49__System_IDisposable_Dispose(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__updateWebViewData_d__38___ctor(
        DataManager__updateWebViewData_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__updateWebViewData_d__38__MoveNext(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  DataManager_o *_4__this; // x20
  DataManager_c *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  DataManager_c *v12; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  DataManager_c *v19; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  UnityEngine_WaitForEndOfFrame_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v29; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_WaitForEndOfFrame_o *v33; // x20
  Il2CppObject **v34; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  int v37; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_38158536; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  System_Collections_Generic_Dictionary_string__object__o *v50; // x23
  __int64 methodPtr_low; // x9
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_4A5ACAC & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&StringLiteral_18219/*"contactURL"*/);
    sub_1B885B0(&StringLiteral_19423/*"filePass"*/);
    sub_1B885B0(&StringLiteral_17080/*"baseURL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ACAC = 1;
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
      this->fields._data_5__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v7, v8);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v9, v10);
      v12 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager_TypeInfo;
      }
      webViewData = v12->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v14 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))webViewData->klass->vtable[3].method)(
                                        webViewData,
                                        webViewData->klass->vtable[4].methodPtr);
      this->fields._cryptString_5__3 = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, (int32_t)v14, v15, v16);
      v19 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v19 = DataManager_TypeInfo;
      }
      static_fields = v19->static_fields;
      static_fields->webViewData = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, 0, v17, v18);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v23, 0LL);
        this->fields.__2__current = (Il2CppObject *)v23;
        p__2__current = &this->fields.__2__current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v23, v25, v26);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v29 = System_Convert__FromBase64String(cryptString_5__3, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v30 = CatAndMouseGame__MouseGame2MsgPack(v29, 0, 0LL);
      this->fields._dataObject_5__4 = v30;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, (int32_t)v30, v31, v32);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v33 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v33, 0LL);
        this->fields.__2__current = (Il2CppObject *)v33;
        v34 = &this->fields.__2__current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)v34, (int32_t)v33, v35, v36);
        v37 = 2;
LABEL_30:
        *((_DWORD *)v34 - 2) = v37;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_38158536 = JsonManager__getDictionary_38158536(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_38158536;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_38158536, v40, v41);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v42, 0LL);
        this->fields.__2__current = (Il2CppObject *)v42;
        v34 = &this->fields.__2__current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)v34, (int32_t)v42, v43, v44);
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
              (Il2CppObject *)StringLiteral_17080/*"baseURL"*/,
              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17080/*"baseURL"*/,
               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v48 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18219/*"contactURL"*/,
              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18219/*"contactURL"*/,
               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v47 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19423/*"filePass"*/,
             (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1B8880C(Item, v22);
        v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19423/*"filePass"*/,
                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v50 = (System_Collections_Generic_Dictionary_string__object__o *)v49;
        if ( v49 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v49->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v49->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1B88ACC(v49);
LABEL_54:
            sub_1B8880C(webViewData, v11);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v48, v47, v50, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v52, v53);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v54, v55);
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


Il2CppObject *__fastcall DataManager__updateWebViewData_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_Reset(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__updateWebViewData_d__38__System_IDisposable_Dispose(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  ;
}