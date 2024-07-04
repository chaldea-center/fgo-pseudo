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
  IconLabelInfo_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  IconLabelInfo_o *v37; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x25
  int32_t v39; // w2
  int32_t v40; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  int64_t Instance; // x0
  int64_t v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x20
  __int64 v48; // x27
  __int64 v49; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v52; // w2
  int32_t v53; // w3
  struct UserServantEntity_o *v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  struct ServantEntity_o *servantEntity; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  ServantLimitMaster_o *v60; // x20
  int32_t v61; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q1
  UserServantCollectionMaster_o *v64; // x20
  int64_t v65; // x28
  struct UserServantEntity_o *v66; // x8
  int32_t v67; // w0
  UserServantEntity_o *v68; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v70; // w8
  UserServantEntity_o *v71; // x8
  UserServantEntity_o *v72; // x8
  UserServantEntity_o *v73; // x8
  struct UserServantEntity_o *v74; // x8
  __int128 v75; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // q0
  int64_t v78; // x0
  __int128 v79; // q1
  __int64 v80; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v83; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v86; // x8
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  _QWORD *v90; // x0
  __int64 v91; // x1
  __int64 methodPtr_low; // x9
  __int64 v93; // x8
  __int128 v94; // q0
  int64_t v95; // x0
  __int64 v96; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // q0
  System_Collections_Generic_IEnumerator_T__c *v99; // x8
  __int64 v100; // x9
  int32_t *v101; // x10
  __int64 v102; // x0
  int32_t v103; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  UserServantEntity_o *v105; // x27
  __int64 v106; // x20
  __int64 v107; // x24
  int32_t v108; // w20
  struct UserServantEntity_o *v109; // x8
  __int128 v110; // q0
  int64_t v111; // x0
  __int128 v112; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // q0
  __int64 v115; // x1
  System_Collections_Generic_IEnumerator_T__o *v116; // x23
  System_Collections_Generic_IEnumerator_T__c *v117; // x8
  __int64 v118; // x9
  int32_t *v119; // x10
  __int64 v120; // x0
  System_Collections_Generic_IEnumerator_T__c *v121; // x8
  __int64 v122; // x9
  int32_t *v123; // x10
  __int64 v124; // x0
  _QWORD *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x9
  __int64 v128; // x8
  __int128 v129; // q0
  int64_t v130; // x0
  __int64 v131; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v132; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // q0
  System_Collections_Generic_IEnumerator_T__c *v134; // x8
  __int64 v135; // x9
  int32_t *v136; // x10
  __int64 v137; // x0
  UserServantEntity_o *v138; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v141; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v142; // x8
  __int64 v143; // x20
  __int64 v144; // x22
  int32_t v145; // w8
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  UserDeckMaster_o *MasterData_object; // [xsp+20h] [xbp-1F0h]
  int32_t v151; // [xsp+2Ch] [xbp-1E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+30h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+50h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+70h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+90h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+B0h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+D0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+F0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+110h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+130h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+150h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+170h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+190h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_48E6190 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v17);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserDeckMaster___, v21);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v23);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_1B00CCC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v25);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v26);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v27);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_1B00CCC(&IconLabelInfo_TypeInfo, v29);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B00CCC(&UserServantLeaderEntity_TypeInfo, v33);
    byte_48E6190 = 1;
  }
  v34 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v34, v35, v36);
  v37 = (IconLabelInfo_o *)sub_1B00F18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v37, v39, v40);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v151 = type;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = *(_QWORD *)&v46[5].fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v49;
  *(_QWORD *)&v164.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v164, 0LL);
  if ( !v47 )
    goto LABEL_148;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v47,
             Instance,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v52, v53);
  v54 = this->fields.userSvtEntity;
  if ( !v54 )
    goto LABEL_148;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v54->fields.svtId, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_148;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.finishSetupInfo, (int32_t)finishSetupInfo, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v60 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v61 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[6], 0LL);
  if ( !v60 )
    goto LABEL_148;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v60, v61, Instance, 0LL);
  if ( !Instance )
    goto LABEL_148;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v63 = v62[4];
  v64 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v62[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v162 = v163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v162, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v65 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044((*p_userSvtEntity)[5], 0LL);
  if ( !v64 )
    goto LABEL_148;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v64, v65, Instance, 0LL);
  if ( !Instance )
    goto LABEL_148;
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
    goto LABEL_148;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0LL);
  v66 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v66 )
    goto LABEL_148;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v66->fields.limitCount, 0LL);
  *(_DWORD *)&this->fields.isBaseLvMax = 0;
  this->fields.currentLimitCnt = v67;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isCanNotLock = 0;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_148;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v68 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v68 )
    goto LABEL_148;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v68, 0LL);
  v70 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v70 )
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_148;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0LL);
    v71 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v71 )
      goto LABEL_148;
    Instance = UserServantEntity__isLimitCountMax(v71, 0LL);
    v72 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v72 )
      goto LABEL_148;
    Instance = UserServantEntity__IsLock(v72, 0LL);
    v73 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v73 )
      goto LABEL_148;
    Instance = UserServantEntity__IsChoice(v73, 0LL);
    v74 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v74 )
      goto LABEL_148;
    v75 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
    *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v163.fields.fakeValue = v75;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v161 = v163;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v161, 0LL);
    Instance = (int64_t)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_148;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v45, 0LL);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v76 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_148;
      v77 = v76[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v76[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v77;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v160 = v163;
      v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v160, 0LL);
      v79 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v159.fields.fakeValue = v79;
      if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v159, 0LL) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (int64_t)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_148;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0LL) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_148;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_148;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B00F28(0LL, v80);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v83 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v83;
          p_offset += 4;
          if ( !v83 )
            goto LABEL_53;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_53:
        p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v86 = Enumerator->klass;
      v87 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v88 = &v86->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v88 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v87;
          v88 += 4;
          if ( !v87 )
            goto LABEL_60;
        }
        v89 = (__int64)&v86->vtable[*v88].method;
      }
      else
      {
LABEL_60:
        v89 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v90 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v89)(
                        Enumerator,
                        *(_QWORD *)(v89 + 8));
      if ( !v90 )
        sub_1B00F28(0LL, v91);
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v90 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v90 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        goto LABEL_150;
      }
      v93 = v90[4];
      if ( v93 )
      {
        v94 = *(_OWORD *)(v93 + 40);
        *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)(v93 + 24);
        *(_OWORD *)&v163.fields.fakeValue = v94;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v158 = v163;
        v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v158, 0LL);
        v97 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1B00F28(v95, v96);
        v98 = v97[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.currentCryptoKey = v97[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.fakeValue = v98;
        if ( v95 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v157, 0LL) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
    v99 = Enumerator->klass;
    v100 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v101 = &v99->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
      {
        --v100;
        v101 += 4;
        if ( !v100 )
          goto LABEL_75;
      }
      v102 = (__int64)&v99->vtable[*v101].method;
    }
    else
    {
LABEL_75:
      v102 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v102)(
      Enumerator,
      *(_QWORD *)(v102 + 8));
  }
  if ( v151 != 1 )
    goto LABEL_137;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_148;
  Instance = (int64_t)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0LL);
  v103 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v103;
  if ( baseUsrSvtData )
  {
    v104 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_148;
    v105 = baseUsrSvtData;
    v107 = *(_QWORD *)&v104[5].fields.currentCryptoKey;
    v106 = *(_QWORD *)&v104[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v165.fields.currentCryptoKey = v107;
    *(_QWORD *)&v165.fields.fakeValue = v106;
    v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v165, 0LL);
    if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v105->fields.svtId, 0LL) )
    {
      Instance = UserServantEntity__isLimitCountMax(v105, 0LL);
      v109 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v109 )
        goto LABEL_148;
      v110 = *(_OWORD *)&v109->fields.id.fields.fakeValue;
      *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&v109->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v163.fields.fakeValue = v110;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v156 = v163;
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v156, 0LL);
      v112 = *(_OWORD *)&v105->fields.id.fields.fakeValue;
      *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v105->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v155.fields.fakeValue = v112;
      if ( v111 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v155, 0LL) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(v105, 0LL);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v113 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  v114 = v113[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v113[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v114;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v154 = v163;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v154, 0LL);
  Instance = (int64_t)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_148;
  this->fields.isEquiped = UserDeckMaster__IsEquip_38697892(MasterData_object, v45, &this->fields.partyIndex, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_148;
  v116 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v116 )
    sub_1B00F28(0LL, v115);
  while ( 1 )
  {
    v117 = v116->klass;
    v118 = *(unsigned __int16 *)(&v116->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v116->klass->_2.bitflags2 + 3) )
    {
      v119 = &v117->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v119 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v118;
        v119 += 4;
        if ( !v118 )
          goto LABEL_110;
      }
      v120 = (__int64)&v117->vtable[*v119].method;
    }
    else
    {
LABEL_110:
      v120 = sub_1B52CAC(v116, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v120)(
            v116,
            *(_QWORD *)(v120 + 8)) & 1) == 0 )
      goto LABEL_128;
    v121 = v116->klass;
    v122 = *(unsigned __int16 *)(&v116->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v116->klass->_2.bitflags2 + 3) )
    {
      v123 = &v121->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v123 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v122;
        v123 += 4;
        if ( !v122 )
          goto LABEL_117;
      }
      v124 = (__int64)&v121->vtable[*v123].method;
    }
    else
    {
LABEL_117:
      v124 = sub_1B52CAC(v116, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v125 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v124)(
                       v116,
                       *(_QWORD *)(v124 + 8));
    if ( !v125 )
      goto LABEL_151;
    v127 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v125 + 304LL) < (unsigned int)v127
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v125 + 200LL) + 8 * v127 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_1B011E8(v125);
LABEL_150:
      sub_1B011E8(v90);
LABEL_151:
      sub_1B00F28(v125, v126);
    }
    v128 = v125[4];
    if ( v128 )
    {
      v129 = *(_OWORD *)(v128 + 40);
      *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)(v128 + 24);
      *(_OWORD *)&v163.fields.fakeValue = v129;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v153 = v163;
      v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v153, 0LL);
      v132 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1B00F28(v130, v131);
      v133 = v132[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v152.fields.currentCryptoKey = v132[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v152.fields.fakeValue = v133;
      if ( v130 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v152, 0LL) )
        break;
    }
  }
  this->fields.isUseSupportEquip = 1;
LABEL_128:
  v134 = v116->klass;
  v135 = *(unsigned __int16 *)(&v116->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v116->klass->_2.bitflags2 + 3) )
  {
    v136 = &v134->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_132;
    }
    v137 = (__int64)&v134->vtable[*v136].method;
  }
  else
  {
LABEL_132:
    v137 = sub_1B52CAC(v116, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v137)(v116, *(_QWORD *)(v137 + 8));
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v138 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v138 )
    goto LABEL_148;
  IsChoice = UserServantEntity__IsChoice(v138, 0LL);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = isFavorite;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_137:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_148;
  v141 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 48);
  if ( !v141 )
    goto LABEL_148;
  v142 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_148;
  this->fields.sortValue2 = ((__int64)v141->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v142[16].fields.currentCryptoKey;
  v144 = *(_QWORD *)&v142[5].fields.currentCryptoKey;
  v143 = *(_QWORD *)&v142[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = v144;
  *(_QWORD *)&v166.fields.fakeValue = v143;
  v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v166, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v145;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL),
        this->fields.categoryIdList = EquipCategoryIdList,
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&this->fields.categoryIdList,
          (int32_t)EquipCategoryIdList,
          v147,
          v148),
        (Instance = (int64_t)this->fields.iconLabelInfo1) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_148:
    sub_1B00F28(Instance, v45);
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

  if ( (byte_48E6192 & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, sort);
    sub_1B00CCC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_48E6192 = 1;
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
                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_33A8C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B00D74(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B00F30(RarityFilterKindList, RarityFilterKindList);
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
      sub_1B00F28(RarityFilterKindList, sort);
    }
  }
  return result;
}


void __fastcall SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(0LL, method);
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
  bool EventUpVal_38925380; // w0
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
  struct UserServantEntity_o *v52; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v55; // w1
  struct UserServantEntity_o *v56; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t v59; // w20
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v61; // x8
  __int64 collectionNo; // x10
  SvtEqCombineListViewItem_o *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v4 = this;
  if ( (byte_48E6191 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventGroupMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&System_Func_EventGroupEntity__bool__TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v9);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B00CCC(&Method_SvtEqCombineListViewItem__SetSortValue_b__51_0__, v12);
    sub_1B00CCC(&Method_SvtEqCombineListViewItem__SetSortValue_b__51_1__, v13);
    this = (SvtEqCombineListViewItem_o *)sub_1B00CCC(&SvtEqCombineListViewManager_TypeInfo, v14);
    byte_48E6191 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_157;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_64;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_157;
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              goto LABEL_157;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v24 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventGroupEntity__bool__TypeInfo);
              v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__51_0__;
LABEL_62:
              v30 = (System_Func_T__bool__o *)v24;
              System_Func_object__bool____ctor(v24, (Il2CppObject *)v4, *v25, 0LL);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v30,
                                                     (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_157:
        sub_1B00F28(this, sort);
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
      goto LABEL_157;
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_38925380(
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
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_157;
    v27 = (EventCampaignMaster_o *)this;
    v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v29;
    *(_QWORD *)&v67.fields.fakeValue = v28;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v67, 0LL);
    if ( !v27 )
      goto LABEL_157;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v27,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0LL);
LABEL_52:
    v4->fields.isEventUpVal = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_105;
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
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_157;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_157;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v24 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventGroupEntity__bool__TypeInfo);
      v25 = &Method_SvtEqCombineListViewItem__SetSortValue_b__51_1__;
      goto LABEL_62;
    }
  }
LABEL_63:
  if ( !v4->fields.isEventUpVal )
    goto LABEL_105;
LABEL_64:
  finishSetupInfo = v4->fields.finishSetupInfo;
  if ( finishSetupInfo )
  {
    servantEquipFilterEventIds = finishSetupInfo->fields.servantEquipFilterEventIds;
    if ( !servantEquipFilterEventIds )
      goto LABEL_157;
    if ( *(_QWORD *)&servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v33 = v4->fields.finishSetupInfo;
          if ( !v33 )
            goto LABEL_157;
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
            goto LABEL_157;
          EventUpVal_38925380 = UserServantEntity__getEventUpVal_38925380(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v33,
                                  v35,
                                  1,
                                  0LL);
          isEventUpVal = EventUpVal_38925380;
          v4->fields.isEventUpVal = EventUpVal_38925380;
LABEL_83:
          if ( isEventUpVal )
            goto LABEL_84;
LABEL_105:
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
    goto LABEL_105;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_157;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_117;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v43 = -10LL;
    }
    else
    {
      if ( type )
        goto LABEL_117;
      v43 = 10LL;
    }
    *p_sortValue0 = v43;
    goto LABEL_117;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped || v4->fields.isUseSupportEquip )
    {
      v44 = 20LL;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_103:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10LL;
        goto LABEL_117;
      }
      v44 = -10LL;
    }
    *p_sortValue0 = v44;
    goto LABEL_103;
  }
  if ( v4->fields.isSameSvt )
  {
    v41 = 20LL;
LABEL_113:
    *p_sortValue0 = v41;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_B71E70;
    goto LABEL_117;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v41 = -10LL;
  if ( isLock )
    goto LABEL_113;
  if ( !v4->fields.isNotSelection )
    v41 = -20LL;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_113;
LABEL_117:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v46 = v4->fields.userSvtEntity;
      if ( !v46 )
        goto LABEL_157;
      v47 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v66.fields.fakeValue = v47;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v65 = v66;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(
                                             &v65,
                                             0LL);
      v48 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v48 )
        goto LABEL_157;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_157;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v48->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_139;
    case 2:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = v4->fields.rarity;
      if ( !this )
        goto LABEL_157;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      goto LABEL_141;
    case 3:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_157;
      v50 = this->fields.bonusKind;
      v51 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v50;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v51 )
        goto LABEL_157;
      IconLabelInfo__Set_36930772(v51, 2, v50, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_144;
    case 5:
      v52 = v4->fields.userSvtEntity;
      if ( !v52 )
        goto LABEL_157;
      hp = v52->fields.hp;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_157;
      adjustHp = v52->fields.adjustHp;
      v55 = 3;
      goto LABEL_135;
    case 6:
      v56 = v4->fields.userSvtEntity;
      if ( !v56 )
        goto LABEL_157;
      hp = v56->fields.atk;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_157;
      adjustHp = v56->fields.adjustAtk;
      v55 = 5;
LABEL_135:
      IconLabelInfo__Set_36930772((IconLabelInfo_o *)this, v55, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_139;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_157;
      cost = servantEntity->fields.cost;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_157;
      IconLabelInfo__Set_36930772((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
LABEL_139:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_157;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_141:
      v59 = this->fields.bonusKind;
      break;
    case 8:
      v4->fields.sortValue1 = v4->fields.classId;
      goto LABEL_144;
    case 0xE:
      this = (SvtEqCombineListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_151;
      this = (SvtEqCombineListViewItem_o *)sort->fields.manager;
      if ( !this )
        goto LABEL_157;
      methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_157;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v39);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_151:
      v61 = v4->fields.servantEntity;
      if ( !v61 )
        goto LABEL_157;
      collectionNo = v61->fields.collectionNo;
      v63 = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v63 )
        goto LABEL_157;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v59 = v63->fields.bonusKind;
      this = v63;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
  if ( !iconLabelInfo1 )
    goto LABEL_157;
  IconLabelInfo__Set_36930772(iconLabelInfo1, 2, v59, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_144:
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


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__51_0(
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

  if ( (byte_48E6194 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_48E6194 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_38925380(
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
    sub_1B00F28(Master_object, v8);
  return UserServantEntity__getEventUpVal_38925380(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0LL);
}


bool __fastcall SvtEqCombineListViewItem___SetSortValue_b__51_1(
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

  if ( (byte_48E6195 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_48E6195 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v14, 0LL);
  if ( !entity || !v10 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_38925380(
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
    sub_1B00F28(Master_object, v8);
  return UserServantEntity__getEventUpVal_38925380(
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
    sub_1B00F28(0LL, method);
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
    sub_1B00F28(this, method);
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
  if ( (byte_48E6193 & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_48E6193 = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1B00F28(this, method);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v6, 0LL);
}


void __fastcall SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userSvtEntity = entity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)entity, (int32_t)method, v3);
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
    sub_1B00F28(0LL, value);
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