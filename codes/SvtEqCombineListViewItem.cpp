// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItem___ctor(
        SvtEqCombineListViewItem_o *this,
        int32_t type,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        bool isFavorite,
        UserServantEntity_o *baseUsrSvtData,
        bool isMtSvt,
        EventUpValSetupInfo_o *setupInfo,
        EventUpValSetupInfo_o *finishSetupInfo,
        const MethodInfo *method)
{
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
  IconLabelInfo_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  IconLabelInfo_o *v40; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int64_t Instance; // x0
  int64_t v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x20
  __int64 v51; // x27
  __int64 v52; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct UserServantEntity_o *v57; // x8
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct ServantEntity_o *servantEntity; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLimitMaster_o *v63; // x20
  int32_t v64; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // q1
  UserServantCollectionMaster_o *v67; // x20
  int64_t v68; // x28
  struct UserServantEntity_o *v69; // x8
  int32_t v70; // w0
  UserServantEntity_o *v71; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v73; // w8
  UserServantEntity_o *v74; // x8
  UserServantEntity_o *v75; // x8
  UserServantEntity_o *v76; // x8
  struct UserServantEntity_o *v77; // x8
  __int128 v78; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // q0
  int64_t v81; // x0
  __int128 v82; // q1
  __int64 v83; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v86; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x8
  __int128 v96; // q0
  int64_t v97; // x0
  __int64 v98; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // q0
  System_Collections_Generic_IEnumerator_T__c *v101; // x8
  __int64 v102; // x9
  int32_t *v103; // x10
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // q0
  UserRecommendSupportMaster_o *v107; // x20
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  UserServantGrandMaster_o *v110; // x20
  int32_t v111; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  __int64 v113; // x20
  __int64 v114; // x24
  int32_t v115; // w20
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  int64_t v118; // x0
  __int128 v119; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // q0
  __int64 v122; // x1
  System_Collections_Generic_IEnumerator_T__o *v123; // x23
  System_Collections_Generic_IEnumerator_T__c *v124; // x8
  __int64 v125; // x9
  int32_t *v126; // x10
  __int64 v127; // x0
  System_Collections_Generic_IEnumerator_T__c *v128; // x8
  __int64 v129; // x9
  int32_t *v130; // x10
  __int64 v131; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x8
  __int128 v135; // q0
  int64_t v136; // x0
  __int64 v137; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v138; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // q0
  System_Collections_Generic_IEnumerator_T__c *v140; // x8
  __int64 v141; // x9
  int32_t *v142; // x10
  __int64 v143; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v144; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // q0
  UserRecommendSupportMaster_o *v146; // x20
  struct UserServantEntity_o *v147; // x8
  __int128 v148; // q0
  UserServantGrandMaster_o *v149; // x20
  UserServantEntity_o *v150; // x8
  UserServantEntity_o *v151; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v154; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v155; // x8
  __int64 v156; // x20
  __int64 v157; // x22
  int32_t v158; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  UserDeckMaster_o *MasterData_object; // [xsp+10h] [xbp-270h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+20h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+40h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+60h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+80h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+A0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+C0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+E0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+100h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+120h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+140h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+160h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+180h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+1A0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+1C0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+1E0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+200h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_4B0610F & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1BC3008(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v21);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v23);
    sub_1BC3008(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v24);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantGrandMaster___, v25);
    sub_1BC3008(&DataManager_TypeInfo, v26);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v28);
    sub_1BC3008(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__, v29);
    sub_1BC3008(&System_IDisposable_TypeInfo, v30);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, v31);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v32);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v33);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    byte_4B0610F = 1;
  }
  v37 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo1 = v37;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v37, v38, v39);
  v40 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v40, 0LL);
  this->fields.iconLabelInfo2 = v40;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v40, v42, v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v52 = *(_QWORD *)&v49[5].fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v180.fields.currentCryptoKey = v52;
  *(_QWORD *)&v180.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v180, 0LL);
  if ( !v50 )
    goto LABEL_160;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v50,
             Instance,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v55, v56);
  v57 = this->fields.userSvtEntity;
  if ( !v57 )
    goto LABEL_160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v57->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_160;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v58, v59);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.finishSetupInfo, (int32_t)finishSetupInfo, v61, v62);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v64 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[6], 0LL);
  if ( !v63 )
    goto LABEL_160;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v63, v64, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v66 = v65[4];
  v67 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v65[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v178 = v179;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v178, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_userSvtEntity)[5], 0LL);
  if ( !v67 )
    goto LABEL_160;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v67, v68, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  this->fields.partyIndex = -1;
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !Instance )
    goto LABEL_160;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v69 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v69 )
    goto LABEL_160;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v69->fields.limitCount, 0LL);
  this->fields.dragSelectNum = -1;
  this->fields.currentLimitCnt = v70;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isBaseLvMax = 0LL;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_160;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v71 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v71 )
    goto LABEL_160;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v71, 0LL);
  v73 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v73 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v74 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v74 )
      goto LABEL_160;
    Instance = UserServantEntity__isLimitCountMax(v74, 0LL);
    v75 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v75 )
      goto LABEL_160;
    Instance = UserServantEntity__IsLock(v75, 0LL);
    v76 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v76 )
      goto LABEL_160;
    Instance = UserServantEntity__IsChoice(v76, 0LL);
    v77 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v77 )
      goto LABEL_160;
    v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
    *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v179.fields.fakeValue = v78;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v177 = v179;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v177, 0LL);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_160;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v48, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v79 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_160;
      v80 = v79[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v79[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v80;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v176 = v179;
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v176, 0LL);
      v82 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v175.fields.fakeValue = v82;
      if ( v81 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v175, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_160;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_160;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_160;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1BC3264(0LL, v83);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v86 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v86;
          p_offset += 4;
          if ( !v86 )
            goto LABEL_53;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_53:
        p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v89 = Enumerator->klass;
      v90 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v91 = &v89->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v91 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v90;
          v91 += 4;
          if ( !v90 )
            goto LABEL_60;
        }
        v92 = (__int64)&v89->vtable[*v91].method;
      }
      else
      {
LABEL_60:
        v92 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
      }
      v93 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
              Enumerator,
              *(_QWORD *)(v92 + 8));
      if ( !v93 )
        sub_1BC3264(0LL, v94);
      v95 = *(_QWORD *)(v93 + 32);
      if ( v95 )
      {
        v96 = *(_OWORD *)(v95 + 40);
        *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)(v95 + 24);
        *(_OWORD *)&v179.fields.fakeValue = v96;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v174 = v179;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v174, 0LL);
        v99 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1BC3264(v97, v98);
        v100 = v99[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.currentCryptoKey = v99[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.fakeValue = v100;
        if ( v97 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v173, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v101 = Enumerator->klass;
    v102 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v103 = &v101->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v103 - 1) != System_IDisposable_TypeInfo )
      {
        --v102;
        v103 += 4;
        if ( !v102 )
          goto LABEL_73;
      }
      v104 = (__int64)&v101->vtable[*v103].method;
    }
    else
    {
LABEL_73:
      v104 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v104)(
      Enumerator,
      *(_QWORD *)(v104 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v105 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v106 = v105[2];
    v107 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v105[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v106;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v172 = v179;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v172, 0LL);
    if ( !v107 )
      goto LABEL_160;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v107, Instance, 1, 0LL);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v108 = this->fields.userSvtEntity;
    if ( !v108 )
      goto LABEL_160;
    v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
    v110 = (UserServantGrandMaster_o *)Instance;
    *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v171.fields.fakeValue = v109;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v171, 0LL);
    if ( !v110 )
      goto LABEL_160;
    this->fields.isUseGrandServantEquip = UserServantGrandMaster__IsSettingEquip(v110, Instance, 0LL);
  }
  if ( type != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_160;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v111 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v111;
  if ( baseUsrSvtData )
  {
    v112 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v114 = *(_QWORD *)&v112[5].fields.currentCryptoKey;
    v113 = *(_QWORD *)&v112[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v181.fields.currentCryptoKey = v114;
    *(_QWORD *)&v181.fields.fakeValue = v113;
    v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v181, 0LL);
    if ( v115 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseUsrSvtData->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0LL);
      v116 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v116 )
        goto LABEL_160;
      v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
      *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v179.fields.fakeValue = v117;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v170 = v179;
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v170, 0LL);
      v119 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v169.fields.fakeValue = v119;
      if ( v118 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v169, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v120 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v121 = v120[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v120[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v121;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v168 = v179;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v168, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_160;
  this->fields.isEquiped = UserDeckMaster__IsEquip_41990360(MasterData_object, v48, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_160;
  v123 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v123 )
    sub_1BC3264(0LL, v122);
  while ( 1 )
  {
    v124 = v123->klass;
    v125 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
    {
      v126 = &v124->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v126 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v125;
        v126 += 4;
        if ( !v125 )
          goto LABEL_116;
      }
      v127 = (__int64)&v124->vtable[*v126].method;
    }
    else
    {
LABEL_116:
      v127 = sub_1C13570(v123, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v127)(
            v123,
            *(_QWORD *)(v127 + 8)) & 1) == 0 )
      break;
    v128 = v123->klass;
    v129 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
    {
      v130 = &v128->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v130 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v129;
        v130 += 4;
        if ( !v129 )
          goto LABEL_123;
      }
      v131 = (__int64)&v128->vtable[*v130].method;
    }
    else
    {
LABEL_123:
      v131 = sub_1C13570(v123, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0LL);
    }
    v132 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v131)(
             v123,
             *(_QWORD *)(v131 + 8));
    if ( !v132 )
      sub_1BC3264(0LL, v133);
    v134 = *(_QWORD *)(v132 + 32);
    if ( v134 )
    {
      v135 = *(_OWORD *)(v134 + 40);
      *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)(v134 + 24);
      *(_OWORD *)&v179.fields.fakeValue = v135;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v167 = v179;
      v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v167, 0LL);
      v138 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1BC3264(v136, v137);
      v139 = v138[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v166.fields.currentCryptoKey = v138[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v166.fields.fakeValue = v139;
      if ( v136 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v166, 0LL) )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
  }
  v140 = v123->klass;
  v141 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
  {
    v142 = &v140->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v142 - 1) != System_IDisposable_TypeInfo )
    {
      --v141;
      v142 += 4;
      if ( !v141 )
        goto LABEL_136;
    }
    v143 = (__int64)&v140->vtable[*v142].method;
  }
  else
  {
LABEL_136:
    v143 = sub_1C13570(v123, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v143)(v123, *(_QWORD *)(v143 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v144 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v145 = v144[2];
  v146 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v144[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v145;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v165 = v179;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v165, 0LL);
  if ( !v146 )
    goto LABEL_160;
  this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v146, Instance, 1, 0LL);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v147 = this->fields.userSvtEntity;
  if ( !v147 )
    goto LABEL_160;
  v148 = *(_OWORD *)&v147->fields.id.fields.fakeValue;
  v149 = (UserServantGrandMaster_o *)Instance;
  *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v147->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v164.fields.fakeValue = v148;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v164, 0LL);
  if ( !v149
    || (Instance = UserServantGrandMaster__IsSettingEquip(v149, Instance, 0LL),
        v150 = this->fields.userSvtEntity,
        this->fields.isUseGrandServantEquip = Instance & 1,
        !v150)
    || (Instance = UserServantEntity__IsLock(v150, 0LL),
        v151 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v151) )
  {
LABEL_160:
    sub_1BC3264(Instance, v48);
  }
  IsChoice = UserServantEntity__IsChoice(v151, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = isFavorite;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_160;
  v154 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v154 )
    goto LABEL_160;
  v155 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  this->fields.sortValue2 = ((__int64)v154->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v155[16].fields.currentCryptoKey;
  v157 = *(_QWORD *)&v155[5].fields.currentCryptoKey;
  v156 = *(_QWORD *)&v155[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v182.fields.currentCryptoKey = v157;
  *(_QWORD *)&v182.fields.fakeValue = v156;
  v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v182, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v158;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_160;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.categoryIdList, (int32_t)EquipCategoryIdList, v160, v161);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_160;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_160;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall SvtEqCombineListViewItem__Finalize(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall SvtEqCombineListViewItem__IsMatchFilter(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  bool HaveStatusFilter; // w8
  __int64 v18; // x2
  _BOOL4 v19; // w8

  if ( (byte_4B06111 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B06111 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v15->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BC326C(RarityFilterKindList, RarityFilterKindList, v18);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v19 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v19;
      }
LABEL_36:
      sub_1BC3264(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItem__ModifyItem(
        SvtEqCombineListViewItem_o *this,
        bool isFavorite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isFavorite = isFavorite;
  SvtEqCombineListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  SvtEqCombineListViewItem__ModifyChoiceItem(this, v4);
}


void __fastcall SvtEqCombineListViewItem__ModifyLockItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t v18; // w8
  int32_t v19; // w9
  int32_t bonusKind2Id; // w5
  int32_t v21; // w9
  int32_t v22; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v24; // x0
  __int64 *v25; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  System_Func_T__bool__o *v30; // x22
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  EventUpValSetupInfo_o *v33; // x4
  int32_t v34; // w8
  int32_t v35; // w5
  int isEventUpVal; // w8
  bool EventUpVal_42144784; // w0
  _BOOL4 isChoice; // w21
  const MethodInfo *v39; // x2
  int64_t *p_sortValue0; // x8
  __int64 v41; // x9
  int32_t type; // w9
  __int64 v43; // x9
  __int64 v44; // x9
  bool isLock; // w10
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q1
  struct UserServantEntity_o *v48; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v50; // x20
  IconLabelInfo_o *v51; // x21
  int64_t v52; // x20
  IconLabelInfo_o *v53; // x21
  int32_t v54; // w3
  int32_t v55; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v60; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v4 = this;
  if ( (byte_4B06110 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BC3008(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__, v12);
    sub_1BC3008(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__, v13);
    this = (SvtEqCombineListViewItem_o *)sub_1BC3008(&SvtEqCombineListViewManager_TypeInfo, v14);
    byte_4B06110 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_159;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_159;
  if ( setupInfo->fields.isQuestStart )
  {
    bonusKind = sort->fields.bonusKind;
    if ( (unsigned int)(bonusKind - 4) >= 2 )
    {
      if ( bonusKind != 3 )
      {
        if ( bonusKind )
          goto LABEL_64;
        if ( v4->fields.bonusKind )
        {
          bonusKindId = sort->fields.bonusKindId;
        }
        else
        {
          bonusKindId = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == bonusKindId )
            goto LABEL_63;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKindId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( this )
        {
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0LL);
          this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !EntitiesByGroupId )
              goto LABEL_159;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v24 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
              v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__;
LABEL_62:
              v30 = (System_Func_T__bool__o *)v24;
              System_Func_object__bool____ctor(v24, (Il2CppObject *)v4, *v25, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v30,
                                                     (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_159:
        sub_1BC3264(this, sort);
      }
      if ( v4->fields.bonusKind == 3 )
      {
        v21 = v4->fields.bonusKindId;
        v22 = sort->fields.bonusKindId;
        goto LABEL_30;
      }
      v22 = sort->fields.bonusKindId;
      goto LABEL_45;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v19 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKindId;
      goto LABEL_23;
    }
    bonusKind2Id = sort->fields.bonusKindId;
    goto LABEL_33;
  }
  bonusKind = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind - 4) < 2 )
  {
    if ( v4->fields.bonusKind == bonusKind )
    {
      v19 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_23:
      if ( v19 == bonusKind2Id )
        goto LABEL_63;
      goto LABEL_33;
    }
    bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_33:
    this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !this )
      goto LABEL_159;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_42144784(
                                           (UserServantEntity_o *)this,
                                           -1,
                                           0,
                                           0,
                                           setupInfo,
                                           bonusKind2Id,
                                           0,
                                           0LL);
    goto LABEL_52;
  }
  if ( bonusKind == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v21 = v4->fields.bonusKindId;
      v22 = sort->fields.bonusKind2Id;
LABEL_30:
      if ( v21 == v22 )
        goto LABEL_63;
      goto LABEL_45;
    }
    v22 = sort->fields.bonusKind2Id;
LABEL_45:
    v4->fields.bonusKindId = v22;
    v4->fields.bonusKind = 3;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_159;
    v27 = (EventCampaignMaster_o *)this;
    v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = v29;
    *(_QWORD *)&v66.fields.fakeValue = v28;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v66, 0LL);
    if ( !v27 )
      goto LABEL_159;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v27,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0LL);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_107;
    goto LABEL_64;
  }
  if ( bonusKind )
    goto LABEL_64;
  if ( v4->fields.bonusKind )
  {
    v18 = sort->fields.bonusKind2Id;
  }
  else
  {
    v18 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v18 )
      goto LABEL_63;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v18;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_159;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_159;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v24 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
      v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_107;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_159;
    if ( *(_QWORD *)&servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v33 = v4->fields.finishSetupInfo;
          if ( !v33 )
            goto LABEL_159;
          if ( v33->fields.isQuestStart )
          {
            if ( sort->fields.bonusKind != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v35 = sort->fields.bonusKindId;
              goto LABEL_81;
            }
            v34 = v4->fields.bonusKindId;
            v35 = sort->fields.bonusKindId;
          }
          else
          {
            if ( sort->fields.bonusKind2 != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v35 = sort->fields.bonusKind2Id;
              goto LABEL_81;
            }
            v34 = v4->fields.bonusKindId;
            v35 = sort->fields.bonusKind2Id;
          }
          if ( v34 == v35 )
          {
            isEventUpVal = v4->fields.isEventUpVal;
            goto LABEL_83;
          }
LABEL_81:
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.bonusKind = 6;
          v4->fields.bonusKindId = v35;
          if ( !this )
            goto LABEL_159;
          EventUpVal_42144784 = UserServantEntity__getEventUpVal_42144784(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v33,
                                  v35,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_42144784;
          v4->fields.isEventUpVal = EventUpVal_42144784;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_107:
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
    }
  }
LABEL_84:
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !v4->fields.isBaseSvt
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) == 0 )
  {
    goto LABEL_107;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_159;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_119;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v43 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_119;
      v43 = 10LL;
    }
    *p_sortValue0 = v43;
    goto LABEL_119;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped
      || v4->fields.isUseSupportEquip
      || v4->fields.isUseRecommendSupportEquip
      || v4->fields.isUseGrandServantEquip )
    {
      v44 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_105:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_119;
      }
      v44 = -10LL;
    }
    *p_sortValue0 = v44;
    goto LABEL_105;
  }
  if ( v4->fields.isSameSvt )
  {
    v41 = 20LL;
LABEL_115:
    *p_sortValue0 = v41;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_BDFA70;
    goto LABEL_119;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v41 = -10LL;
  if ( isLock )
    goto LABEL_115;
  if ( !v4->fields.isNotSelection )
    v41 = -20LL;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_115;
LABEL_119:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v46 = v4->fields.userSvtEntity;
      if ( !v46 )
        goto LABEL_159;
      v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
      *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v65.fields.fakeValue = v47;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v65;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v64,
                                             0LL);
      v48 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v48 )
        goto LABEL_159;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_159;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v48->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_141;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_143;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v50 = *(int *)&this->fields.isCanNotLock;
      v51 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v50;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v51 )
        goto LABEL_159;
      IconLabelInfo__Set_39947860(v51, 2, v50, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_146;
    case 5:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v52 = *(int *)&this->fields.isEventUpVal;
      v53 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v52;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0LL);
      if ( !v53 )
        goto LABEL_159;
      v54 = (int)this;
      v55 = 3;
      goto LABEL_137;
    case 6:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v52 = this->fields.bonusKindId;
      v53 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v52;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0LL);
      if ( !v53 )
        goto LABEL_159;
      v54 = (int)this;
      v55 = 5;
LABEL_137:
      IconLabelInfo__Set_39947860(v53, v55, v52, v54, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_141;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_159;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_159;
      IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0LL);
LABEL_141:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_143:
      lv = *(_DWORD *)&this->fields.isCanNotLock;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_146;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_153;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_159;
      methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_159;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v39);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_153:
      v60 = v4->fields.servantEntity;
      if ( !v60 )
        goto LABEL_159;
      collectionNo = v60->fields.collectionNo;
      v62 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v62 )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v62->fields.lv;
      this = (SvtEqCombineListViewItem_o *)v62;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_159;
  IconLabelInfo__Set_39947860(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
LABEL_146:
  LOBYTE(this) = 1;
  return (char)this;
}


bool __fastcall SvtEqCombineListViewItem__SwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SvtEqCombineListViewItem__SwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__53_0(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B06113 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B06113 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v10 = Master_object;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_42144784(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1BC3264(Master_object, v8);
  return UserServantEntity__getEventUpVal_42144784(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__53_1(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B06114 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B06114 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v10 = Master_object;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_42144784(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1BC3264(Master_object, v8);
  return UserServantEntity__getEventUpVal_42144784(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_CombineQp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(0LL, method);
  return UserServantEntity__getCombineQpSvtEq(userSvtEntity, 0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetAddTotalExp(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (this = (SvtEqCombineListViewItem_o *)this->fields.userSvtEntity) == 0LL )
    sub_1BC3264(this, method);
  return UserServantEntity__getAddTotalExp((UserServantEntity_o *)this, servantEntity->fields.combineMaterialId, 0LL);
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetCurrentLimitCnt(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetMaterialExp(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t __fastcall SvtEqCombineListViewItem__get_GetMaxLimitCnt(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


IconLabelInfo_o *__fastcall SvtEqCombineListViewItem__get_IconInfo1(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SvtEqCombineListViewItem__get_IconInfo2(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SvtEqCombineListViewItem__get_IsBaseLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsBaseSvt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotBaseSelect(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.type )
    return 0;
  if ( this->fields.isLvMax && this->fields.isLimitCntMax )
    return 1;
  return this->fields.isSvtEqMaterial;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsCanNotSelect(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock
      || this->fields.isChoice
      || this->fields.isMaxNextLv && !this->fields.isLimitCntTarget
      || this->fields.isBaseLvMax && !this->fields.isLimitCntTarget
      || this->fields.isNotSelection;
}


bool __fastcall SvtEqCombineListViewItem__get_IsChocolateSvtEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall SvtEqCombineListViewItem__get_IsChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDispChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDispLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsDragSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool __fastcall SvtEqCombineListViewItem__get_IsEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool __fastcall SvtEqCombineListViewItem__get_IsFriendShipSvtEq(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLimitCntMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLimitTarget(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool __fastcall SvtEqCombineListViewItem__get_IsMaxNextLv(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool __fastcall SvtEqCombineListViewItem__get_IsMtSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool __fastcall SvtEqCombineListViewItem__get_IsNotSelection(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSelection;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSelectMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSvtEqMaterial(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtEqMaterial;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SvtEqCombineListViewItem__get_IsSwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SvtEqCombineListViewItem__get_IsUseGrandServantEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseGrandServantEquip;
}


bool __fastcall SvtEqCombineListViewItem__get_IsUseRecommendSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool __fastcall SvtEqCombineListViewItem__get_IsUseSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


int32_t __fastcall SvtEqCombineListViewItem__get_ListType(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall SvtEqCombineListViewItem__get_PartyIndex(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t __fastcall SvtEqCombineListViewItem__get_SvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall SvtEqCombineListViewItem__get_SvtRariry(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *__fastcall SvtEqCombineListViewItem__get_UserSvtEntity(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


int64_t __fastcall SvtEqCombineListViewItem__get_UserSvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B06112 & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B06112 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1BC3264(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.userSvtEntity = entity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
}


void __fastcall SvtEqCombineListViewItem__set_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsCanNotLock(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsDragSelect(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BC3264(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall SvtEqCombineListViewItem__set_IsMaxNextLv(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsMtSelect(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void __fastcall SvtEqCombineListViewItem__set_IsSelectMax(
        SvtEqCombineListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}