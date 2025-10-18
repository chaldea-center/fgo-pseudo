void SvtEqCombineListViewItem___ctor(
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
  IconLabelInfo_o *v17; // x20
  IconLabelInfo_o *v18; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  __int64 Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  __int64 v24; // x27
  __int64 v25; // x28
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  struct UserServantEntity_o *v28; // x8
  struct ServantEntity_o *servantEntity; // x8
  ServantLimitMaster_o *v30; // x21
  int32_t v31; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // q1
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x28
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w0
  UserServantEntity_o *v38; // x8
  bool IsChocolateSvtEquip; // w0
  int32_t v40; // w8
  UserServantEntity_o *v41; // x8
  UserServantEntity_o *v42; // x8
  UserServantEntity_o *v43; // x8
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  int64_t v46; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // q0
  int64_t v49; // x0
  __int128 v50; // q1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x29
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x8
  __int128 v62; // q0
  int64_t v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q0
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // q0
  UserRecommendSupportMaster_o *v72; // x21
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  UserServantGrandMaster_o *v75; // x21
  int32_t v76; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  __int64 v78; // x21
  __int64 v79; // x24
  int32_t v80; // w21
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  int64_t v83; // x0
  __int128 v84; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // q0
  int64_t v87; // x1
  System_Collections_Generic_IEnumerator_T__o *v88; // x23
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  System_Collections_Generic_IEnumerator_T__c *v93; // x8
  __int64 v94; // x9
  int32_t *v95; // x10
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x8
  __int128 v99; // q0
  int64_t v100; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // q0
  System_Collections_Generic_IEnumerator_T__c *v103; // x8
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // q0
  UserRecommendSupportMaster_o *v109; // x21
  struct UserServantEntity_o *v110; // x8
  __int128 v111; // q0
  UserServantGrandMaster_o *v112; // x21
  UserServantEntity_o *v113; // x8
  UserServantEntity_o *v114; // x8
  bool IsChoice; // w0
  bool isFriendShipSvtEq; // w8
  struct ServantEntity_o *v117; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  __int64 v119; // x21
  __int64 v120; // x22
  struct UserServantEntity_o *v121; // x8
  __int128 v122; // q0
  int64_t v123; // x8
  struct System_Int32_array *EquipCategoryIdList; // x0
  UserDeckMaster_o *MasterData_object; // [xsp+10h] [xbp-290h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+20h] [xbp-280h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+40h] [xbp-260h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+60h] [xbp-240h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+80h] [xbp-220h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+A0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+C0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+E0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+100h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+120h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+140h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+160h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+180h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+1A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+1C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+1E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+200h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+220h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_4C3D09A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D09A = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C36FFC(&this->fields.iconLabelInfo1, v17);
  v18 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo2 = v18;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C36FFC(&this->fields.iconLabelInfo2, v18);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  this->fields.type = type;
  this->fields.index = index;
  sub_1C36FFC(&this->fields.userSvtEntity, userSvtEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v25 = *(_QWORD *)&v22[5].fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v25;
  *(_QWORD *)&v144.fields.fakeValue = v24;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v144, 0);
  if ( !v23 )
    goto LABEL_163;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  Instance = sub_1C36FFC(&this->fields.servantEntity, Entity);
  v28 = this->fields.userSvtEntity;
  if ( !v28 )
    goto LABEL_163;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28->fields.svtId, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.svtId = Instance;
  if ( !servantEntity )
    goto LABEL_163;
  this->fields.classId = servantEntity->fields.classId;
  this->fields.setupInfo = setupInfo;
  sub_1C36FFC(&this->fields.setupInfo, setupInfo);
  this->fields.finishSetupInfo = finishSetupInfo;
  sub_1C36FFC(&this->fields.finishSetupInfo, finishSetupInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  MasterData_object = (UserDeckMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v30 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v31 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896((*p_userSvtEntity)[6], 0);
  if ( !v30 )
    goto LABEL_163;
  Instance = (__int64)ServantLimitMaster__GetEntity(v30, v31, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v32 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v33 = v32[4];
  v34 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v32[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v142 = v143;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v142, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v35 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896((*p_userSvtEntity)[5], 0);
  if ( !v34 )
    goto LABEL_163;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v34, v35, Instance, 0);
  if ( !Instance )
    goto LABEL_163;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  this->fields.partyIndex = -1;
  Instance = (__int64)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isChoice = 0;
  *(_WORD *)&this->fields.isBaseSvt = 0;
  this->fields.isLastSelectMaterial = 0;
  this->fields.isMaxSelect = 0;
  this->fields.isSvtEqMaterial = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__getLimitCntMax((UserServantEntity_o *)Instance, 0);
  v36 = this->fields.userSvtEntity;
  this->fields.maxLimitCnt = Instance;
  if ( !v36 )
    goto LABEL_163;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v36->fields.limitCount, 0);
  this->fields.dragSelectNum = -1;
  this->fields.currentLimitCnt = v37;
  this->fields.isCanNotLock = 0;
  *(_QWORD *)&this->fields.isBaseLvMax = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.isEventUpVal = 0;
  this->fields.isNotSelection = 0;
  if ( !Instance )
    goto LABEL_163;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v38 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v38 )
    goto LABEL_163;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v38, 0);
  v40 = this->fields.type;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v40 )
  {
    Instance = (__int64)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    Instance = UserServantEntity__isLevelMax((UserServantEntity_o *)Instance, 0);
    v41 = this->fields.userSvtEntity;
    this->fields.isLvMax = Instance & 1;
    if ( !v41 )
      goto LABEL_163;
    Instance = UserServantEntity__isLimitCountMax(v41, 0);
    v42 = this->fields.userSvtEntity;
    this->fields.isLimitCntMax = Instance & 1;
    if ( !v42 )
      goto LABEL_163;
    Instance = UserServantEntity__IsLock(v42, 0);
    v43 = this->fields.userSvtEntity;
    this->fields.isLock = Instance & 1;
    if ( !v43 )
      goto LABEL_163;
    Instance = UserServantEntity__IsChoice(v43, 0);
    v44 = this->fields.userSvtEntity;
    this->fields.isChoice = Instance & 1;
    if ( !v44 )
      goto LABEL_163;
    v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
    *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v143.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v141 = v143;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v141, 0);
    Instance = (__int64)MasterData_object;
    if ( !MasterData_object )
      goto LABEL_163;
    Instance = UserDeckMaster__IsEquip(MasterData_object, v46, 0);
    this->fields.isEquiped = Instance & 1;
    if ( baseUsrSvtData )
    {
      v47 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_163;
      v48 = v47[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v47[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v140 = v143;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v140, 0);
      v50 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v139.fields.fakeValue = v50;
      if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v139, 0) )
        this->fields.isBaseSvt = 1;
    }
    Instance = (__int64)*p_servantEntity;
    if ( !*p_servantEntity )
      goto LABEL_163;
    if ( ServantEntity__get_IsServantEquipMaterial((ServantEntity_o *)Instance, 0) )
      this->fields.isSvtEqMaterial = 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_163;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_163;
    Instance = *(_QWORD *)(Instance + 40);
    if ( !Instance )
      goto LABEL_163;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C372B4(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v53 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v53;
          p_offset += 4;
          if ( !v53 )
            goto LABEL_53;
        }
        v55 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_53:
        v55 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
              Enumerator,
              *(_QWORD *)(v55 + 8))
          & 1) == 0 )
        break;
      v56 = Enumerator->klass;
      v57 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v58 = &v56->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v58 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
        {
          --v57;
          v58 += 4;
          if ( !v57 )
            goto LABEL_60;
        }
        v59 = (__int64)&v56->vtable[*v58];
      }
      else
      {
LABEL_60:
        v59 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
      }
      v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
              Enumerator,
              *(_QWORD *)(v59 + 8));
      if ( !v60 )
        sub_1C372B4(0);
      v61 = *(_QWORD *)(v60 + 32);
      if ( v61 )
      {
        v62 = *(_OWORD *)(v61 + 40);
        *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)(v61 + 24);
        *(_OWORD *)&v143.fields.fakeValue = v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v138 = v143;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v138, 0);
        v64 = *p_userSvtEntity;
        if ( !*p_userSvtEntity )
          sub_1C372B4(v63);
        v65 = v64[2];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v137.fields.currentCryptoKey = v64[1];
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v137.fields.fakeValue = v65;
        if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v137, 0) )
        {
          this->fields.isUseSupportEquip = 1;
          break;
        }
      }
    }
    v66 = Enumerator->klass;
    v67 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v68 = &v66->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_73;
      }
      v69 = (__int64)&v66->vtable[*v68];
    }
    else
    {
LABEL_73:
      v69 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
      Enumerator,
      *(_QWORD *)(v69 + 8));
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    v70 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v71 = v70[2];
    v72 = (UserRecommendSupportMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v70[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v71;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v136 = v143;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v136, 0);
    if ( !v72 )
      goto LABEL_163;
    this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v72, Instance, 1, 0);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v73 = this->fields.userSvtEntity;
    if ( !v73 )
      goto LABEL_163;
    v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
    v75 = (UserServantGrandMaster_o *)Instance;
    *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v135.fields.fakeValue = v74;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v135, 0);
    if ( !v75 )
      goto LABEL_163;
    this->fields.isUseGrandServantEquip = UserServantGrandMaster__IsSettingEquip(v75, Instance, 0);
  }
  if ( type != 1 )
    goto LABEL_149;
  this->fields.isMaterialSvt = isMtSvt;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  if ( !*p_servantEntity || !*p_userSvtEntity || !Instance )
    goto LABEL_163;
  Instance = (__int64)CombineMaterialMaster__GetEntity(
                        (CombineMaterialMaster_o *)Instance,
                        (*p_servantEntity)->fields.combineMaterialId,
                        (*p_userSvtEntity)[16].fields.currentCryptoKey,
                        0);
  v76 = Instance ? *(_DWORD *)(Instance + 24) : 0;
  this->fields.materialExp = v76;
  if ( baseUsrSvtData )
  {
    v77 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_163;
    v79 = *(_QWORD *)&v77[5].fields.currentCryptoKey;
    v78 = *(_QWORD *)&v77[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v145.fields.currentCryptoKey = v79;
    *(_QWORD *)&v145.fields.fakeValue = v78;
    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v145, 0);
    if ( v80 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(baseUsrSvtData->fields.svtId, 0) )
    {
      Instance = UserServantEntity__isLimitCountMax(baseUsrSvtData, 0);
      v81 = this->fields.userSvtEntity;
      this->fields.isLimitCntMax = Instance & 1;
      this->fields.isLimitCntTarget = (Instance & 1) == 0;
      if ( !v81 )
        goto LABEL_163;
      v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
      *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v143.fields.fakeValue = v82;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v134 = v143;
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v134, 0);
      v84 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v133.fields.fakeValue = v84;
      if ( v83 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v133, 0) )
        this->fields.isSameSvt = 1;
    }
    Instance = UserServantEntity__isLevelMax(baseUsrSvtData, 0);
    this->fields.isBaseLvMax = Instance & 1;
  }
  else
  {
    this->fields.isLimitCntTarget = 0;
  }
  v85 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v86 = v85[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v85[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v86;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v132 = v143;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v132, 0);
  Instance = (__int64)MasterData_object;
  if ( !MasterData_object )
    goto LABEL_163;
  this->fields.isEquiped = UserDeckMaster__IsEquip_43014088(MasterData_object, v87, &this->fields.partyIndex, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_163;
  v88 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v88 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v89 = v88->klass;
    v90 = *(unsigned __int16 *)&v88->klass->_2.rank;
    if ( *(_WORD *)&v88->klass->_2.rank )
    {
      v91 = &v89->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v91 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_116;
      }
      v92 = (__int64)&v89->vtable[*v91];
    }
    else
    {
LABEL_116:
      v92 = sub_1C87870(v88, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
            v88,
            *(_QWORD *)(v92 + 8))
        & 1) == 0 )
      break;
    v93 = v88->klass;
    v94 = *(unsigned __int16 *)&v88->klass->_2.rank;
    if ( *(_WORD *)&v88->klass->_2.rank )
    {
      v95 = &v93->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v95 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v94;
        v95 += 4;
        if ( !v94 )
          goto LABEL_123;
      }
      v96 = (__int64)&v93->vtable[*v95];
    }
    else
    {
LABEL_123:
      v96 = sub_1C87870(v88, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v97 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v96)(
            v88,
            *(_QWORD *)(v96 + 8));
    if ( !v97 )
      sub_1C372B4(0);
    v98 = *(_QWORD *)(v97 + 32);
    if ( v98 )
    {
      v99 = *(_OWORD *)(v98 + 40);
      *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)(v98 + 24);
      *(_OWORD *)&v143.fields.fakeValue = v99;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v131 = v143;
      v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v131, 0);
      v101 = *p_userSvtEntity;
      if ( !*p_userSvtEntity )
        sub_1C372B4(v100);
      v102 = v101[2];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v130.fields.currentCryptoKey = v101[1];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v130.fields.fakeValue = v102;
      if ( v100 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v130, 0) )
      {
        this->fields.isUseSupportEquip = 1;
        break;
      }
    }
  }
  v103 = v88->klass;
  v104 = *(unsigned __int16 *)&v88->klass->_2.rank;
  if ( *(_WORD *)&v88->klass->_2.rank )
  {
    v105 = &v103->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
    {
      --v104;
      v105 += 4;
      if ( !v104 )
        goto LABEL_136;
    }
    v106 = (__int64)&v103->vtable[*v105];
  }
  else
  {
LABEL_136:
    v106 = sub_1C87870(v88, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v106)(v88, *(_QWORD *)(v106 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  v107 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  v108 = v107[2];
  v109 = (UserRecommendSupportMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.currentCryptoKey = v107[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v143.fields.fakeValue = v108;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v129 = v143;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v129, 0);
  if ( !v109 )
    goto LABEL_163;
  this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(v109, Instance, 1, 0);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v110 = this->fields.userSvtEntity;
  if ( !v110 )
    goto LABEL_163;
  v111 = *(_OWORD *)&v110->fields.id.fields.fakeValue;
  v112 = (UserServantGrandMaster_o *)Instance;
  *(_OWORD *)&v128.fields.currentCryptoKey = *(_OWORD *)&v110->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v128.fields.fakeValue = v111;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v128, 0);
  if ( !v112
    || (Instance = UserServantGrandMaster__IsSettingEquip(v112, Instance, 0),
        v113 = this->fields.userSvtEntity,
        this->fields.isUseGrandServantEquip = Instance & 1,
        !v113)
    || (Instance = UserServantEntity__IsLock(v113, 0),
        v114 = this->fields.userSvtEntity,
        this->fields.isLock = Instance & 1,
        !v114) )
  {
LABEL_163:
    sub_1C372B4(Instance);
  }
  IsChoice = UserServantEntity__IsChoice(v114, 0);
  isFriendShipSvtEq = this->fields.isFriendShipSvtEq;
  this->fields.isChoice = IsChoice;
  this->fields.isFavorite = isFavorite;
  this->fields.isNotSelection = isFriendShipSvtEq;
LABEL_149:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_163;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_163;
  v117 = this->fields.servantEntity;
  this->fields.sortValue1B = *(int *)(Instance + 52);
  if ( !v117 )
    goto LABEL_163;
  v118 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_163;
  this->fields.sortValue2 = ((__int64)v117->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v118[16].fields.currentCryptoKey;
  v120 = *(_QWORD *)&v118[5].fields.currentCryptoKey;
  v119 = *(_QWORD *)&v118[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v146.fields.currentCryptoKey = v120;
  *(_QWORD *)&v146.fields.fakeValue = v119;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v146, 0);
  v121 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v121 )
    goto LABEL_163;
  v122 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
  *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v143.fields.fakeValue = v122;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v127 = v143;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v127, 0);
  Instance = (__int64)this->fields.userSvtEntity;
  this->fields.sortValueLast = v123;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_163;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
  this->fields.categoryIdList = EquipCategoryIdList;
  sub_1C36FFC(&this->fields.categoryIdList, EquipCategoryIdList);
  Instance = (__int64)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_163;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_163;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void SvtEqCombineListViewItem__Finalize(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool SvtEqCombineListViewItem__IsMatchFilter(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v16; // w8

  if ( (byte_4C3D09C & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&ListViewSort_FilterKind___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C3D09C = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C37100(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C372BC(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        v16 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v16;
      }
LABEL_36:
      sub_1C372B4(RarityFilterKindList);
    }
  }
  return result;
}


void SvtEqCombineListViewItem__ModifyChoiceItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C372B4(0);
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
  this->fields.isSwapChoice = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewItem__ModifyItem(SvtEqCombineListViewItem_o *this, bool isFavorite, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isFavorite = isFavorite;
  SvtEqCombineListViewItem__ModifyLockItem(this, (const MethodInfo *)isFavorite);
  SvtEqCombineListViewItem__ModifyChoiceItem(this, v4);
}


void SvtEqCombineListViewItem__ModifyLockItem(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C372B4(0);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0);
  this->fields.isSwapLock = 0;
}


bool SvtEqCombineListViewItem__SetSortValue(
        SvtEqCombineListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v4; // x19
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t v8; // w8
  int32_t v9; // w9
  int32_t bonusKind2Id; // w5
  int32_t v11; // w9
  int32_t v12; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v14; // x0
  intptr_t *v15; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  System_Func_T__bool__o *v20; // x22
  struct EventUpValSetupInfo_o *finishSetupInfo; // x8
  struct System_Int32_array *servantEquipFilterEventIds; // x8
  EventUpValSetupInfo_o *v23; // x4
  int32_t v24; // w8
  int32_t v25; // w5
  int isEventUpVal; // w8
  bool EventUpVal_43170408; // w0
  _BOOL4 isChoice; // w21
  const MethodInfo *v29; // x2
  int64_t *p_sortValue0; // x8
  __int64 v31; // x9
  int32_t type; // w9
  __int64 v33; // x9
  __int64 v34; // x9
  bool isLock; // w10
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  struct UserServantEntity_o *v38; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t v40; // x20
  IconLabelInfo_o *v41; // x21
  int64_t v42; // x20
  IconLabelInfo_o *v43; // x21
  int32_t v44; // w3
  int32_t v45; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 naturalAligment; // x10
  struct ServantEntity_o *v50; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v52; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v4 = this;
  if ( (byte_4C3D09B & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__);
    sub_1C37058(&Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__);
    this = (SvtEqCombineListViewItem_o *)sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D09B = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_159;
  if ( !sort->fields.isBonusKind )
    goto LABEL_64;
  if ( v4->fields.isBaseSvt )
    goto LABEL_64;
  this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
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
        this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( this )
        {
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !EntitiesByGroupId )
              goto LABEL_159;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventGroupEntity__bool__TypeInfo);
              v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_0__;
LABEL_62:
              v20 = (System_Func_T__bool__o *)v14;
              System_Func_object__bool____ctor(v14, (Il2CppObject *)v4, *v15, 0);
              this = (SvtEqCombineListViewItem_o *)BasicHelper__Any_object_(
                                                     (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                                     v20,
                                                     (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_EventGroupEntity___);
              v4->fields.isEventUpVal = (unsigned __int8)this & 1;
              goto LABEL_63;
            }
          }
          goto LABEL_63;
        }
LABEL_159:
        sub_1C372B4(this);
      }
      if ( v4->fields.bonusKind == 3 )
      {
        v11 = v4->fields.bonusKindId;
        v12 = sort->fields.bonusKindId;
        goto LABEL_30;
      }
      v12 = sort->fields.bonusKindId;
      goto LABEL_45;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v9 = v4->fields.bonusKindId;
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
      v9 = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_23:
      if ( v9 == bonusKind2Id )
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
    this = (SvtEqCombineListViewItem_o *)UserServantEntity__getEventUpVal_43170408(
                                           (UserServantEntity_o *)this,
                                           -1,
                                           0,
                                           0,
                                           setupInfo,
                                           bonusKind2Id,
                                           0,
                                           0);
    goto LABEL_52;
  }
  if ( bonusKind == 3 )
  {
    if ( v4->fields.bonusKind == 3 )
    {
      v11 = v4->fields.bonusKindId;
      v12 = sort->fields.bonusKind2Id;
LABEL_30:
      if ( v11 == v12 )
        goto LABEL_63;
      goto LABEL_45;
    }
    v12 = sort->fields.bonusKind2Id;
LABEL_45:
    v4->fields.bonusKindId = v12;
    v4->fields.bonusKind = 3;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_159;
    v17 = (EventCampaignMaster_o *)this;
    v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v56.fields.currentCryptoKey = v19;
    *(_QWORD *)&v56.fields.fakeValue = v18;
    this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v56, 0);
    if ( !v17 )
      goto LABEL_159;
    this = (SvtEqCombineListViewItem_o *)EventCampaignMaster__IsEnableServant(
                                           v17,
                                           (int32_t)this,
                                           v4->fields.bonusKindId,
                                           0);
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
    v8 = sort->fields.bonusKind2Id;
  }
  else
  {
    v8 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v8 )
      goto LABEL_63;
  }
  v4->fields.bonusKind = 0;
  v4->fields.bonusKindId = v8;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SvtEqCombineListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_159;
  EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (SvtEqCombineListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                         0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EntitiesByGroupId )
      goto LABEL_159;
    if ( EntitiesByGroupId->fields._size >= 2 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventGroupEntity__bool__TypeInfo);
      v15 = &Method_SvtEqCombineListViewItem__SetSortValue_b__53_1__;
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
    if ( servantEquipFilterEventIds->max_length )
    {
      if ( !v4->fields.isBaseSvt )
      {
        this = (SvtEqCombineListViewItem_o *)ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v23 = v4->fields.finishSetupInfo;
          if ( !v23 )
            goto LABEL_159;
          if ( v23->fields.isQuestStart )
          {
            if ( sort->fields.bonusKind != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v25 = sort->fields.bonusKindId;
              goto LABEL_81;
            }
            v24 = v4->fields.bonusKindId;
            v25 = sort->fields.bonusKindId;
          }
          else
          {
            if ( sort->fields.bonusKind2 != 6 )
              goto LABEL_84;
            if ( v4->fields.bonusKind != 6 )
            {
              v25 = sort->fields.bonusKind2Id;
              goto LABEL_81;
            }
            v24 = v4->fields.bonusKindId;
            v25 = sort->fields.bonusKind2Id;
          }
          if ( v24 == v25 )
          {
            isEventUpVal = v4->fields.isEventUpVal;
            goto LABEL_83;
          }
LABEL_81:
          this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.bonusKind = 6;
          v4->fields.bonusKindId = v25;
          if ( !this )
            goto LABEL_159;
          EventUpVal_43170408 = UserServantEntity__getEventUpVal_43170408(
                                  (UserServantEntity_o *)this,
                                  -1,
                                  0,
                                  0,
                                  v23,
                                  v25,
                                  1,
                                  0);
          isEventUpVal = EventUpVal_43170408;
          v4->fields.isEventUpVal = EventUpVal_43170408;
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
    && !ListViewItem__get_IsSelect((ListViewItem_o *)v4, 0)
    && (((__int64 (__fastcall *)(SvtEqCombineListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          sort,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
  {
    goto LABEL_107;
  }
  this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_159;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0;
  if ( !sort->fields.isSmartSort )
  {
    if ( !isChoice || !sort->fields.isChoiceSort )
      goto LABEL_119;
    type = v4->fields.type;
    if ( type == 1 )
    {
      v33 = -10;
    }
    else
    {
      if ( type )
        goto LABEL_119;
      v33 = 10;
    }
    *p_sortValue0 = v33;
    goto LABEL_119;
  }
  if ( !v4->fields.type )
  {
    if ( v4->fields.isEquiped
      || v4->fields.isUseSupportEquip
      || v4->fields.isUseRecommendSupportEquip
      || v4->fields.isUseGrandServantEquip )
    {
      v34 = 20;
    }
    else
    {
      if ( !v4->fields.isLvMax || !v4->fields.isLimitCntMax )
      {
LABEL_105:
        if ( isChoice && sort->fields.isChoiceSort )
          v4->fields.sortValue0B = 10;
        goto LABEL_119;
      }
      v34 = -10;
    }
    *p_sortValue0 = v34;
    goto LABEL_105;
  }
  if ( v4->fields.isSameSvt )
  {
    v31 = 20;
LABEL_115:
    *p_sortValue0 = v31;
    if ( isChoice && sort->fields.isChoiceSort )
      *(_OWORD *)p_sortValue0 = xmmword_C0FF10;
    goto LABEL_119;
  }
  if ( v4->fields.isSwapLock )
    isLock = !v4->fields.isLock;
  else
    isLock = v4->fields.isLock;
  v31 = -10;
  if ( isLock )
    goto LABEL_115;
  if ( !v4->fields.isNotSelection )
    v31 = -20;
  if ( v4->fields.isNotSelection || isChoice )
    goto LABEL_115;
LABEL_119:
  this = (SvtEqCombineListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v36 = v4->fields.userSvtEntity;
      if ( !v36 )
        goto LABEL_159;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v37;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v55;
      this = (SvtEqCombineListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v54, 0);
      v38 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v38 )
        goto LABEL_159;
      this = (SvtEqCombineListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_159;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v38->fields.createdAt, 0, 0, 0, 0);
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
      v40 = *(int *)&this->fields.isSwapChoice;
      v41 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v40;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v41 )
        goto LABEL_159;
      IconLabelInfo__Set_40917868(v41, 2, v40, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_146;
    case 5:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v42 = this->fields.bonusKind;
      v43 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v42;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v43 )
        goto LABEL_159;
      v44 = (int)this;
      v45 = 3;
      goto LABEL_137;
    case 6:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      v42 = *(int *)&this->fields.isCanNotLock;
      v43 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v42;
      this = (SvtEqCombineListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v43 )
        goto LABEL_159;
      v44 = (int)this;
      v45 = 5;
LABEL_137:
      IconLabelInfo__Set_40917868(v43, v45, v42, v44, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_40917868((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
LABEL_141:
      this = (SvtEqCombineListViewItem_o *)v4->fields.userSvtEntity;
      if ( !this )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_143:
      lv = *(_DWORD *)&this->fields.isSwapChoice;
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
      naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SvtEqCombineListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
      {
        goto LABEL_159;
      }
      this = (SvtEqCombineListViewItem_o *)SvtEqCombineListViewManager__GetAmountSortValue(
                                             (SvtEqCombineListViewManager_o *)this,
                                             v4->fields.svtId,
                                             v29);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_153:
      v50 = v4->fields.servantEntity;
      if ( !v50 )
        goto LABEL_159;
      collectionNo = v50->fields.collectionNo;
      v52 = v4->fields.userSvtEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v52 )
        goto LABEL_159;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v52->fields.lv;
      this = (SvtEqCombineListViewItem_o *)v52;
      break;
    default:
      return (char)this;
  }
  this = (SvtEqCombineListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
  if ( !iconLabelInfo1 )
    goto LABEL_159;
  IconLabelInfo__Set_40917868(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_146:
  LOBYTE(this) = 1;
  return (char)this;
}


bool SvtEqCombineListViewItem__SwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool SvtEqCombineListViewItem__SwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool SvtEqCombineListViewItem___SetSortValue_b__53_0(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C3D09E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3D09E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v7 = Master_object;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  if ( !entity || !v7 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v7, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_43170408(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C372B4(Master_object);
  return UserServantEntity__getEventUpVal_43170408(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0);
}


bool SvtEqCombineListViewItem___SetSortValue_b__53_1(
        SvtEqCombineListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  EventCampaignMaster_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C3D09F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3D09F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_16;
  v7 = Master_object;
  v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  if ( !entity || !v7 )
    goto LABEL_16;
  if ( EventCampaignMaster__IsEnableServant(v7, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
    goto LABEL_16;
  if ( UserServantEntity__getEventUpVal_43170408(
         (UserServantEntity_o *)Master_object,
         -1,
         0,
         0,
         this->fields.setupInfo,
         entity->fields.eventId,
         0,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userSvtEntity;
  if ( !Master_object )
LABEL_16:
    sub_1C372B4(Master_object);
  return UserServantEntity__getEventUpVal_43170408(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.finishSetupInfo,
           entity->fields.eventId,
           1,
           0);
}


int32_t SvtEqCombineListViewItem__get_CombineQp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C372B4(0);
  return UserServantEntity__getCombineQpSvtEq(userSvtEntity, 0);
}


int32_t SvtEqCombineListViewItem__get_DragSelectNum(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


int32_t SvtEqCombineListViewItem__get_GetAddTotalExp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || (this = (SvtEqCombineListViewItem_o *)this->fields.userSvtEntity) == 0 )
    sub_1C372B4(this);
  return UserServantEntity__getAddTotalExp((UserServantEntity_o *)this, servantEntity->fields.combineMaterialId, 0);
}


int32_t SvtEqCombineListViewItem__get_GetCurrentLimitCnt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentLimitCnt;
}


int32_t SvtEqCombineListViewItem__get_GetMaterialExp(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.materialExp;
}


int32_t SvtEqCombineListViewItem__get_GetMaxLimitCnt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxLimitCnt;
}


IconLabelInfo_o *SvtEqCombineListViewItem__get_IconInfo1(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *SvtEqCombineListViewItem__get_IconInfo2(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool SvtEqCombineListViewItem__get_IsBaseLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseLvMax;
}


bool SvtEqCombineListViewItem__get_IsBaseSvt(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBaseSvt;
}


bool SvtEqCombineListViewItem__get_IsCanNotBaseSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.type )
    return 0;
  if ( this->fields.isLvMax && this->fields.isLimitCntMax )
    return 1;
  return this->fields.isSvtEqMaterial;
}


bool SvtEqCombineListViewItem__get_IsCanNotLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool SvtEqCombineListViewItem__get_IsCanNotSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock
      || this->fields.isChoice
      || this->fields.isMaxNextLv && !this->fields.isLimitCntTarget
      || this->fields.isBaseLvMax && !this->fields.isLimitCntTarget
      || this->fields.isNotSelection;
}


bool SvtEqCombineListViewItem__get_IsChocolateSvtEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool SvtEqCombineListViewItem__get_IsChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool SvtEqCombineListViewItem__get_IsDispChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool SvtEqCombineListViewItem__get_IsDispLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool SvtEqCombineListViewItem__get_IsDragSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool SvtEqCombineListViewItem__get_IsEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquiped;
}


bool SvtEqCombineListViewItem__get_IsFriendShipSvtEq(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool SvtEqCombineListViewItem__get_IsLimitCntMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntMax;
}


bool SvtEqCombineListViewItem__get_IsLimitTarget(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLimitCntTarget;
}


bool SvtEqCombineListViewItem__get_IsLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool SvtEqCombineListViewItem__get_IsLvMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLvMax;
}


bool SvtEqCombineListViewItem__get_IsMaxNextLv(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxNextLv;
}


bool SvtEqCombineListViewItem__get_IsMtSelect(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialSvt;
}


bool SvtEqCombineListViewItem__get_IsNotSelection(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSelection;
}


bool SvtEqCombineListViewItem__get_IsSelectMax(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaxSelect;
}


bool SvtEqCombineListViewItem__get_IsSvtEqMaterial(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSvtEqMaterial;
}


bool SvtEqCombineListViewItem__get_IsSwapChoice(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool SvtEqCombineListViewItem__get_IsSwapLock(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool SvtEqCombineListViewItem__get_IsUseGrandServantEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseGrandServantEquip;
}


bool SvtEqCombineListViewItem__get_IsUseRecommendSupportEquip(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool SvtEqCombineListViewItem__get_IsUseSupportEquip(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


int32_t SvtEqCombineListViewItem__get_ListType(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t SvtEqCombineListViewItem__get_PartyIndex(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t SvtEqCombineListViewItem__get_SvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t SvtEqCombineListViewItem__get_SvtRariry(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


UserServantEntity_o *SvtEqCombineListViewItem__get_UserSvtEntity(
        SvtEqCombineListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


int64_t SvtEqCombineListViewItem__get_UserSvtId(SvtEqCombineListViewItem_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C3D09D & 1) == 0 )
  {
    this = (SvtEqCombineListViewItem_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3D09D = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_1C372B4(this);
  v4 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v6, 0);
}


void SvtEqCombineListViewItem__setUserServantEntity(
        SvtEqCombineListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  this->fields.userSvtEntity = entity;
  sub_1C36FFC(&this->fields.userSvtEntity, entity);
}


void SvtEqCombineListViewItem__set_DragSelectNum(
        SvtEqCombineListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void SvtEqCombineListViewItem__set_IsCanNotLock(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void SvtEqCombineListViewItem__set_IsDragSelect(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1C372B4(0);
  this->fields.dragSelectNum = value - 1;
}


void SvtEqCombineListViewItem__set_IsMaxNextLv(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaxNextLv = value;
}


void SvtEqCombineListViewItem__set_IsMtSelect(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaterialSvt = value;
}


void SvtEqCombineListViewItem__set_IsSelectMax(SvtEqCombineListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isMaxSelect = value;
}