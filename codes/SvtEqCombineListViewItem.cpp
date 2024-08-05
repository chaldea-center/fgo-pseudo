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
  int32_t v39; // w3
  IconLabelInfo_o *v40; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  int64_t Instance; // x0
  int64_t v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x20
  __int64 v51; // x27
  __int64 v52; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v55; // w2
  int32_t v56; // w3
  struct UserServantEntity_o *v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  struct ServantEntity_o *servantEntity; // x8
  int32_t v61; // w2
  int32_t v62; // w3
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
  _QWORD *v93; // x0
  __int64 v94; // x1
  __int64 methodPtr_low; // x9
  __int64 v96; // x8
  __int128 v97; // q0
  int64_t v98; // x0
  __int64 v99; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // q0
  System_Collections_Generic_IEnumerator_T__c *v102; // x8
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  UserRecommendSupportMaster_o *v108; // x20
  int32_t v109; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v110; // x8
  UserServantEntity_o *v111; // x23
  __int64 v112; // x20
  __int64 v113; // x24
  int32_t v114; // w20
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  int64_t v117; // x0
  __int128 v118; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // q0
  __int64 v121; // x1
  System_Collections_Generic_IEnumerator_T__o *v122; // x23
  System_Collections_Generic_IEnumerator_T__c *v123; // x8
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  System_Collections_Generic_IEnumerator_T__c *v127; // x8
  __int64 v128; // x9
  int32_t *v129; // x10
  __int64 v130; // x0
  _QWORD *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x9
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
  UserServantEntity_o *v147; // x8
  UserServantEntity_o *v148; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v151; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v152; // x8
  __int64 v153; // x20
  __int64 v154; // x22
  int32_t v155; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  bool v159; // [xsp+18h] [xbp-238h]
  UserDeckMaster_o *MasterData_object; // [xsp+20h] [xbp-230h]
  int32_t v161; // [xsp+2Ch] [xbp-224h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+30h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+50h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+70h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+90h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+F0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+110h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+130h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+150h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+170h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+190h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+1B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+1D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16

  if ( (byte_4A01FAA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1B64870(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v18);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantClassMaster___, v19);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitMaster___, v20);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1B64870(&Method_DataManager_GetMasterData_UserDeckMaster___, v22);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v24);
    sub_1B64870(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v25);
    sub_1B64870(&DataManager_TypeInfo, v26);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1B64870(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v28);
    sub_1B64870(&System_IDisposable_TypeInfo, v29);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v30);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v31);
    sub_1B64870(&IconLabelInfo_TypeInfo, v32);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_1B64870(&UserServantLeaderEntity_TypeInfo, v36);
    byte_4A01FAA = 1;
  }
  v37 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo1 = v37;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v37, v38, v39);
  v40 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v40, 0LL);
  this->fields.iconLabelInfo2 = v40;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v40, v42, v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  v161 = type;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v52 = *(_QWORD *)&v49[5].fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v176.fields.currentCryptoKey = v52;
  *(_QWORD *)&v176.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v176, 0LL);
  if ( !v50 )
    goto LABEL_160;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v50,
             Instance,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v55, v56);
  v57 = this->fields.userSvtEntity;
  if ( !v57 )
    goto LABEL_160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v57->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_160;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v58, v59);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.finishSetupInfo, (int32_t)finishSetupInfo, v61, v62);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v64 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532((*p_userSvtEntity)[6], 0LL);
  if ( !v63 )
    goto LABEL_160;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v63, v64, Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v66 = v65[4];
  v67 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v65[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v174 = v175;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v174, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532((*p_userSvtEntity)[5], 0LL);
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
  v159 = isFavorite;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v69 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v69 )
    goto LABEL_160;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v69->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v70;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isUseSupportEquip = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
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
    *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v175.fields.fakeValue = v78;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v173 = v175;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v173, 0LL);
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
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v79[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v80;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v172 = v175;
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v172, 0LL);
      v82 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v171.fields.fakeValue = v82;
      if ( v81 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v171, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_160;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_160;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_160;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_160;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B64ACC(0LL, v83);
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
        p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v91 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
        v92 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v93 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
                        Enumerator,
                        *(_QWORD *)(v92 + 8));
      if ( !v93 )
        sub_1B64ACC(0LL, v94);
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v93 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v93 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_162;
      }
      v96 = v93[4];
      if ( v96 )
      {
        v97 = *(_OWORD *)(v96 + 40);
        *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)(v96 + 24);
        *(_OWORD *)&v175.fields.fakeValue = v97;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v170 = v175;
        v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v170, 0LL);
        v100 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1B64ACC(v98, v99);
        v101 = v100[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.currentCryptoKey = v100[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.fakeValue = v101;
        if ( v98 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v169, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v102 = Enumerator->klass;
    v103 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v104 = &v102->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
      {
        --v103;
        v104 += 4;
        if ( !v103 )
          goto LABEL_75;
      }
      v105 = (__int64)&v102->vtable[*v104].method;
    }
    else
    {
LABEL_75:
      v105 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v105)(
      Enumerator,
      *(_QWORD *)(v105 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v106 = *p_userSvtEntity;
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v107 = v106[2];
    v108 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v106[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v107;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v168 = v175;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v168, 0LL);
    if ( !v108 )
      goto LABEL_160;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v108, Instance, 1, 0LL);
  }
  if ( v161 != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_160;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v109 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v109;
  if ( baseUsrSvtData )
  {
    v110 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_160;
    v111 = baseUsrSvtData;
    v113 = *(_QWORD *)&v110[5].fields.currentCryptoKey;
    v112 = *(_QWORD *)&v110[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v177.fields.currentCryptoKey = v113;
    *(_QWORD *)&v177.fields.fakeValue = v112;
    v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v177, 0LL);
    if ( v114 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v111->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(v111, 0LL);
      v115 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v115 )
        goto LABEL_160;
      v116 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
      *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v175.fields.fakeValue = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v167 = v175;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v167, 0LL);
      v118 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      *(_OWORD *)&v166.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v166.fields.fakeValue = v118;
      if ( v117 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v166, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(v111, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v119 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v120 = v119[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v119[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v120;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v165 = v175;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v165, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_160;
  this->fields.isEquiped = UserDeckMaster__IsEquip_39728964(MasterData_object, v48, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_160;
  v122 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v122 )
    sub_1B64ACC(0LL, v121);
  while ( 1 )
  {
    v123 = v122->klass;
    v124 = *(unsigned __int16 *)(&v122->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v122->klass->_2.bitflags2 + 3) )
    {
      v125 = &v123->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v125 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v124;
        v125 += 4;
        if ( !v124 )
          goto LABEL_116;
      }
      v126 = (__int64)&v123->vtable[*v125].method;
    }
    else
    {
LABEL_116:
      v126 = sub_1BB6850(v122, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v126)(
            v122,
            *(_QWORD *)(v126 + 8)) & 1) == 0 )
      goto LABEL_134;
    v127 = v122->klass;
    v128 = *(unsigned __int16 *)(&v122->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v122->klass->_2.bitflags2 + 3) )
    {
      v129 = &v127->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v129 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v128;
        v129 += 4;
        if ( !v128 )
          goto LABEL_123;
      }
      v130 = (__int64)&v127->vtable[*v129].method;
    }
    else
    {
LABEL_123:
      v130 = sub_1BB6850(v122, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v131 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v130)(
                       v122,
                       *(_QWORD *)(v130 + 8));
    if ( !v131 )
      goto LABEL_163;
    v133 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v131 + 304LL) < (unsigned int)v133
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v131 + 200LL) + 8 * v133 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B64D8C(v131);
LABEL_162:
      sub_1B64D8C(v93);
LABEL_163:
      sub_1B64ACC(v131, v132);
    }
    v134 = v131[4];
    if ( v134 )
    {
      v135 = *(_OWORD *)(v134 + 40);
      *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)(v134 + 24);
      *(_OWORD *)&v175.fields.fakeValue = v135;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v164 = v175;
      v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v164, 0LL);
      v138 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B64ACC(v136, v137);
      v139 = v138[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v138[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v139;
      if ( v136 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v163, 0LL) )
        break;
    }
  }
  this->fields.isUseSupportEquip = 1;
LABEL_134:
  v140 = v122->klass;
  v141 = *(unsigned __int16 *)(&v122->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v122->klass->_2.bitflags2 + 3) )
  {
    v142 = &v140->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v142 - 1) != System_IDisposable_TypeInfo )
    {
      --v141;
      v142 += 4;
      if ( !v141 )
        goto LABEL_138;
    }
    v143 = (__int64)&v140->vtable[*v142].method;
  }
  else
  {
LABEL_138:
    v143 = sub_1BB6850(v122, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v143)(v122, *(_QWORD *)(v143 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v144 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  v145 = v144[2];
  v146 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v144[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v145;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v162 = v175;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v162, 0LL);
  if ( !v146 )
    goto LABEL_160;
  Instance = UserRecommendSupportMaster__IsSettingServant(v146, Instance, 1, 0LL);
  v147 = this->fields.userSvtEntity;
  this->fields.isUseRecommendSupportEquip = Instance & 1;
  if ( !v147 )
    goto LABEL_160;
  Instance = UserServantEntity__IsLock(v147, 0LL);
  v148 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v148 )
    goto LABEL_160;
  IsChoice = UserServantEntity__IsChoice(v148, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = v159;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_160;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_160;
  v151 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v151 )
    goto LABEL_160;
  v152 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_160;
  this->fields.sortValue2 = ((__int64)v151->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v152[16].fields.currentCryptoKey;
  v154 = *(_QWORD *)&v152[5].fields.currentCryptoKey;
  v153 = *(_QWORD *)&v152[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v178.fields.currentCryptoKey = v154;
  *(_QWORD *)&v178.fields.fakeValue = v153;
  v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v178, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v155;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL),
        this->fields.categoryIdList = EquipCategoryIdList,
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList,
          (int32_t)EquipCategoryIdList,
          v157,
          v158),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_160:
    sub_1B64ACC(Instance, v48);
  }
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
  _BOOL4 v18; // w8

  if ( (byte_4A01FAC & 1) == 0 )
  {
    sub_1B64870(&FilterKindList_TypeInfo, sort);
    sub_1B64870(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4A01FAC = 1;
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
                           (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B64918(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B64AD4(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v18 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v18;
      }
LABEL_36:
      sub_1B64ACC(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(0LL, method);
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
  bool EventUpVal_39876388; // w0
  _BOOL4 isChoice; // w21
  int64_t *p_sortValue0; // x8
  __int64 v40; // x9
  int32_t type; // w9
  __int64 v42; // x9
  __int64 v43; // x9
  bool isLock; // w10
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  struct UserServantEntity_o *v47; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v49; // x20
  IconLabelInfo_o *v50; // x21
  struct UserServantEntity_o *v51; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v54; // w1
  struct UserServantEntity_o *v55; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t v58; // w20
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v60; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v4 = this;
  if ( (byte_4A01FAB & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B64870(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B64870(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__, v12);
    sub_1B64870(&Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__, v13);
    this = (SvtEqCombineListViewItem_o *)sub_1B64870(&SvtEqCombineListViewManager_TypeInfo, v14);
    byte_4A01FAB = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_158;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_158;
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              goto LABEL_158;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v24 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventGroupEntity__bool__TypeInfo);
              v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_0__;
LABEL_62:
              v30 = (System_Func_T__bool__o *)v24;
              System_Func_object__bool____ctor(v24, (Il2CppObject *)v4, *v25, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v30,
                                                     (const MethodInfo_2E26B4C *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_158:
        sub_1B64ACC(this, sort);
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
      goto LABEL_158;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_39876388(
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
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_158;
    v27 = (EventCampaignMaster_o *)this;
    v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = v29;
    *(_QWORD *)&v66.fields.fakeValue = v28;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v66, 0LL);
    if ( !v27 )
      goto LABEL_158;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v27,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0LL);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_106;
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
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_158;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_158;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v24 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventGroupEntity__bool__TypeInfo);
      v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__52_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_106;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_158;
    if ( *(_QWORD *)&servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v33 = v4->fields.finishSetupInfo;
          if ( !v33 )
            goto LABEL_158;
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
            goto LABEL_158;
          EventUpVal_39876388 = UserServantEntity__getEventUpVal_39876388(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v33,
                                  v35,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_39876388;
          v4->fields.isEventUpVal = EventUpVal_39876388;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_106:
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
    goto LABEL_106;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_158;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_118;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v42 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_118;
      v42 = 10LL;
    }
    *p_sortValue0 = v42;
    goto LABEL_118;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip || v4->fields.isUseRecommendSupportEquip )
    {
      v43 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_104:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_118;
      }
      v43 = -10LL;
    }
    *p_sortValue0 = v43;
    goto LABEL_104;
  }
  if ( v4->fields.isSameSvt )
  {
    v40 = 20LL;
LABEL_114:
    *p_sortValue0 = v40;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_BA4640;
    goto LABEL_118;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v40 = -10LL;
  if ( isLock )
    goto LABEL_114;
  if ( !v4->fields.isNotSelection )
    v40 = -20LL;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_114;
LABEL_118:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v45 = v4->fields.userSvtEntity;
      if ( !v45 )
        goto LABEL_158;
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v65.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v65;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(
                                             &v64,
                                             0LL);
      v47 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v47 )
        goto LABEL_158;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_158;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v47->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_140;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_142;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_158;
      v49 = this->fields.bonusKind;
      v50 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v49;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v50 )
        goto LABEL_158;
      IconLabelInfo__Set_37829740(v50, 2, v49, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_145;
    case 5:
      v51 = v4->fields.userSvtEntity;
      if ( !v51 )
        goto LABEL_158;
      hp = v51->fields.hp;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v51->fields.adjustHp;
      v54 = 3;
      goto LABEL_136;
    case 6:
      v55 = v4->fields.userSvtEntity;
      if ( !v55 )
        goto LABEL_158;
      hp = v55->fields.atk;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_158;
      adjustHp = v55->fields.adjustAtk;
      v54 = 5;
LABEL_136:
      IconLabelInfo__Set_37829740((IconLabelInfo_o *)this, v54, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_140;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_158;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_158;
      IconLabelInfo__Set_37829740((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
LABEL_140:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_142:
      v58 = this->fields.bonusKind;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_145;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_152;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_158;
      methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_158;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             0LL);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_152:
      v60 = v4->fields.servantEntity;
      if ( !v60 )
        goto LABEL_158;
      collectionNo = v60->fields.collectionNo;
      v62 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v62 )
        goto LABEL_158;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v58 = v62->fields.bonusKind;
      this = v62;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_158;
  IconLabelInfo__Set_37829740(iconLabelInfo1, 2, v58, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_145:
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


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__52_0(
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

  if ( (byte_4A01FAE & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4A01FAE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_39876388(
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
    sub_1B64ACC(Master_object, v8);
  return UserServantEntity__getEventUpVal_39876388(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__52_1(
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

  if ( (byte_4A01FAF & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4A01FAF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_39876388(
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
    sub_1B64ACC(Master_object, v8);
  return UserServantEntity__getEventUpVal_39876388(
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
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(this, method);
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
  if ( (byte_4A01FAD & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A01FAD = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B64ACC(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userSvtEntity = entity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B64ACC(0LL, value);
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