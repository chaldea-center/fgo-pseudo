void WarehouseListViewItem___ctor(
        WarehouseListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        EventUpValSetupInfo_o *setupinfo,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        System_Int64_array *recoverySvtList,
        bool isFavorite,
        const MethodInfo *method)
{
  IconLabelInfo_o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  IconLabelInfo_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int64_t Instance; // x0
  __int64 v44; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x2
  struct ServantEntity_o *v54; // x8
  __int64 v55; // x28
  __int64 v56; // x29
  int32_t v57; // w0
  const MethodInfo_47A29F8 *v58; // x8
  struct UserServantEntity_o *v59; // x8
  ServantLimitMaster_o *v60; // x28
  int32_t svtId; // w29
  const MethodInfo *v62; // x2
  struct ServantEntity_o *v63; // x8
  int32_t classId; // w8
  __int64 v65; // x2
  struct UserServantEntity_o *v66; // x9
  __int128 v67; // q1
  __int64 v68; // x21
  struct ServantEntity_o *v69; // x8
  int32_t v70; // w8
  bool IsLock; // w8
  bool IsChoice; // w10
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w8
  bool IsMaterialTd; // w0
  const MethodInfo_47A29F8 *v76; // x8
  __int64 v77; // x2
  struct UserServantEntity_o *v78; // x8
  UserServantCollectionMaster_o *v79; // x24
  __int128 v80; // q0
  __int128 v81; // q1
  int v82; // w8
  __int64 v83; // x2
  struct UserServantEntity_o *v84; // x8
  int64_t v85; // x28
  __int64 v86; // x21
  __int64 v87; // x29
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q1
  int64_t v90; // x24
  int max_length; // w8
  int32_t v92; // w10
  int v93; // w8
  int32_t v94; // w10
  __int64 Enumerator; // x0
  __int64 v96; // x1
  __int64 v97; // x25
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x2
  __int64 v104; // x25
  __int64 v105; // x8
  __int64 v106; // x9
  int *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x2
  __int64 v110; // x8
  __int128 v111; // q0
  __int128 v112; // q1
  int v113; // w8
  __int64 v114; // x26
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  System_Collections_Generic_IEnumerator_T__o *v119; // x0
  __int64 v120; // x1
  __int64 v121; // x26
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x2
  __int64 v128; // x26
  __int64 v129; // x8
  __int64 v130; // x9
  int *v131; // x10
  __int64 v132; // x0
  __int64 v133; // x27
  __int64 v134; // x8
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0
  __int64 v138; // x2
  __int64 v139; // x8
  int64_t v140; // x26
  unsigned __int64 v141; // x21
  __int64 v142; // x8
  __int128 v143; // q0
  __int128 v144; // q1
  int v145; // w8
  __int64 v146; // x2
  __int64 v147; // x8
  int64_t v148; // x25
  unsigned __int64 v149; // x21
  __int64 v150; // x8
  __int128 v151; // q0
  __int128 v152; // q1
  int v153; // w8
  int32_t adjustHp; // w21
  BalanceConfig_c *v155; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v157; // w8
  UserServantEntity_o *v158; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  const MethodInfo *v173; // x1
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  int v181; // w8
  int64_t *m_Items; // x9
  __int64 v183; // t1
  int64_t UserSvtId; // x0
  const MethodInfo_47A29F8 *v185; // x0
  int64_t v186; // x8
  __int64 rarity; // x21
  struct UserServantEntity_o *v188; // x9
  ServantEntity_o *v189; // x8
  __int64 v190; // x22
  __int64 lv; // x23
  __int64 v192; // x2
  struct UserServantEntity_o *v193; // x8
  __int64 v194; // x21
  __int64 v195; // x22
  __int64 v196; // x2
  struct UserServantEntity_o *v197; // x8
  __int128 v198; // q0
  __int128 v199; // q1
  int v200; // w8
  IconLabelInfo_o *iconLabelInfo1; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-190h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+20h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+80h] [xbp-120h] BYREF
  __int64 v208; // [xsp+A0h] [xbp-100h]
  __int64 *v209; // [xsp+A8h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v210; // [xsp+B0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v211; // [xsp+D0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v212; // [xsp+F0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v213; // [xsp+110h] [xbp-90h]
  __int64 v214; // [xsp+138h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16

  if ( (byte_596E4CE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596E4CE = 1;
  }
  v214 = 0;
  v16 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo1 = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo2 = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.index = index;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.setupInfo = setupinfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupinfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !userServantEntity )
    goto LABEL_188;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v54 = this->fields.servantEntity;
  if ( !v54 )
    goto LABEL_188;
  v55 = *(_QWORD *)&v54->fields.id.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v53);
  *(_QWORD *)&v215.fields.currentCryptoKey = v55;
  *(_QWORD *)&v215.fields.fakeValue = v56;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v215, 0);
  v58 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.svtId = v57;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v58);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v59 = this->fields.userServantEntity;
  if ( !v59 )
    goto LABEL_188;
  v60 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v59->fields.limitCount, 0);
  if ( !v60 )
    goto LABEL_188;
  ServantLimitMaster__GetEntity(v60, svtId, Instance, 0);
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v62);
  v63 = this->fields.servantEntity;
  if ( !v63 )
    goto LABEL_188;
  classId = v63->fields.classId;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.classId = classId;
  if ( !Instance )
    goto LABEL_188;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_188;
  v66 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  v68 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v213.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v213.fields.fakeValue = v67;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v65);
  v212 = v213;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v212, 0);
  v69 = this->fields.servantEntity;
  this->fields.isEnabled = 1;
  this->fields.isPush = v68 == Instance;
  if ( !v69 )
    goto LABEL_188;
  if ( v69->fields.type == 2 )
  {
    v70 = 1;
LABEL_22:
    this->fields.attribute = v70;
    goto LABEL_24;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0) )
  {
    v70 = 2;
    goto LABEL_22;
  }
  this->fields.attribute = 0;
LABEL_24:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_188;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isChoice = IsChoice;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_188;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !Instance )
    goto LABEL_188;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !Instance )
    goto LABEL_188;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0);
  v76 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isMaterialTdSvt = IsMaterialTd;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v76);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v78 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  v79 = (UserServantCollectionMaster_o *)Instance;
  v80 = *(_OWORD *)&v78->fields.userId.fields.currentCryptoKey;
  v81 = *(_OWORD *)&v78->fields.userId.fields.fakeValue;
  v82 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v213.fields.currentCryptoKey = v80;
  *(_OWORD *)&v213.fields.fakeValue = v81;
  if ( !v82 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v77);
  v211 = v213;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v211, 0);
  v84 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  v85 = Instance;
  v87 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
  v86 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v83);
  *(_QWORD *)&v216.fields.currentCryptoKey = v87;
  *(_QWORD *)&v216.fields.fakeValue = v86;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v216, 0);
  if ( !v79 )
    goto LABEL_188;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v79, v85, Instance, 0);
  if ( !Instance )
    goto LABEL_188;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v88 = this->fields.userServantEntity;
  *(_DWORD *)&this->fields.isUseRecommendSupport = 0;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v88 )
    goto LABEL_188;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  *(_OWORD *)&v210.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v210.fields.fakeValue = v89;
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v210, 0);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0;
  if ( !Instance )
    goto LABEL_188;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v92 = 0;
        while ( 1 )
        {
          if ( max_length == v92 )
            goto LABEL_189;
          if ( v90 == partyUserEquipList->m_Items[v92] )
            break;
          if ( (max_length & ~(max_length >> 31)) == ++v92 )
            goto LABEL_56;
        }
        this->fields.partyIndex = v92;
        this->fields.isPartyEquip = 1;
        this->fields.isUse = 1;
      }
LABEL_56:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
        if ( Instance )
        {
          Instance = *(_QWORD *)(Instance + 40);
          if ( Instance )
          {
            Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
            v214 = Enumerator;
            v208 = 0;
            v209 = &v214;
            if ( !Enumerator )
LABEL_81:
              sub_2213CDC(Enumerator, v96);
            v97 = Enumerator;
            while ( 1 )
            {
              v98 = *(_QWORD *)v97;
              v99 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
              {
                v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v100 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v99;
                  v100 += 4;
                  if ( !v99 )
                    goto LABEL_65;
                }
                v101 = v98 + 16LL * *v100 + 312;
              }
              else
              {
LABEL_65:
                v101 = sub_224BC3C(v97, System_Collections_IEnumerator_TypeInfo, 0);
              }
              v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
              if ( (v102 & 1) == 0 )
                break;
              v104 = v214;
              if ( !v214 )
                sub_2213CDC(v102, v96);
              v105 = *(_QWORD *)v214;
              v106 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
              {
                v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v107 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
                {
                  --v106;
                  v107 += 4;
                  if ( !v106 )
                    goto LABEL_73;
                }
                v108 = v105 + 16LL * *v107 + 312;
              }
              else
              {
LABEL_73:
                v108 = sub_224BC3C(v214, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
              }
              Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v108)(v104, *(_QWORD *)(v108 + 8));
              if ( !Enumerator )
                sub_2213CDC(0, v96);
              v110 = *(_QWORD *)(Enumerator + 32);
              if ( v110 )
              {
                v111 = *(_OWORD *)(v110 + 24);
                v112 = *(_OWORD *)(v110 + 40);
                v113 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v213.fields.currentCryptoKey = v111;
                *(_OWORD *)&v213.fields.fakeValue = v112;
                if ( !v113 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v96, v109);
                v207 = v213;
                Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v207, 0);
                if ( Enumerator == v90 )
                {
                  this->fields.isUseSupportEquip = 1;
                  break;
                }
              }
              v97 = v214;
              if ( !v214 )
                goto LABEL_81;
            }
            v114 = v214;
            if ( v214 )
            {
              v115 = *(_QWORD *)v214;
              v116 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
              {
                v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
                {
                  --v116;
                  v117 += 4;
                  if ( !v116 )
                    goto LABEL_89;
                }
                v118 = v115 + 16LL * *v117 + 312;
              }
              else
              {
LABEL_89:
                v118 = sub_224BC3C(v214, System_IDisposable_TypeInfo, 0);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
            }
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v96, v103);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
            if ( Instance )
            {
              this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                          (UserRecommendSupportMaster_o *)Instance,
                                                          v90,
                                                          1,
                                                          0);
              Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
              if ( Instance )
              {
                this->fields.isUseGrandEquip = UserServantGrandMaster__IsSettingEquip(
                                                 (UserServantGrandMaster_o *)Instance,
                                                 v90,
                                                 0);
                Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
                if ( Instance )
                {
                  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
                  if ( Instance )
                  {
                    v147 = *(_QWORD *)(Instance + 24);
                    v148 = Instance;
                    if ( (int)v147 >= 1 )
                    {
                      v149 = 0;
                      while ( 1 )
                      {
                        if ( v149 >= (unsigned int)v147 )
                          goto LABEL_189;
                        v150 = *(_QWORD *)(v148 + 32 + 8 * v149);
                        if ( v150 )
                        {
                          v151 = *(_OWORD *)(v150 + 16);
                          v152 = *(_OWORD *)(v150 + 32);
                          v153 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                          *(_OWORD *)&v213.fields.currentCryptoKey = v151;
                          *(_OWORD *)&v213.fields.fakeValue = v152;
                          if ( !v153 )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                              v44,
                              v146);
                          v206 = v213;
                          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v206, 0);
                          if ( Instance == v90 )
                            break;
                        }
                        LODWORD(v147) = *(_DWORD *)(v148 + 24);
                        if ( (__int64)++v149 >= (int)v147 )
                          goto LABEL_163;
                      }
                      this->fields.isWarehouseServantEquip = 1;
                    }
LABEL_163:
                    Instance = (int64_t)*p_userServantEntity;
                    if ( *p_userServantEntity )
                    {
                      EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                                              (UserServantEntity_o *)Instance,
                                              1,
                                              0);
                      this->fields.equipCategoryIdList = EquipCategoryIdList;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&this->fields.equipCategoryIdList,
                        (int32_t)EquipCategoryIdList,
                        v175,
                        v176,
                        v177,
                        v178,
                        v179,
                        v180);
                      goto LABEL_165;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_188:
    sub_2213CDC(Instance, v44);
  }
  if ( !partyUserServantList )
    goto LABEL_188;
  v93 = partyUserServantList->max_length;
  if ( v93 >= 1 )
  {
    v94 = 0;
    while ( 1 )
    {
      if ( v93 == v94 )
LABEL_189:
        sub_2213CE4(Instance);
      if ( v90 == partyUserServantList->m_Items[v94] )
        break;
      if ( (v93 & ~(v93 >> 31)) == ++v94 )
        goto LABEL_91;
    }
    this->fields.partyIndex = v94;
  }
LABEL_91:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_188;
  v119 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  v214 = (__int64)v119;
  v213.fields.currentCryptoKey = 0;
  v213.fields.hiddenValue = (int64_t)&v214;
  while ( 1 )
  {
    v121 = v214;
    if ( !v214 )
      sub_2213CDC(v119, v120);
    v122 = *(_QWORD *)v214;
    v123 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
    {
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v123;
        v124 += 4;
        if ( !v123 )
          goto LABEL_100;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_100:
      v125 = sub_224BC3C(v214, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
    if ( (v126 & 1) == 0 )
      break;
    v128 = v214;
    if ( !v214 )
      sub_2213CDC(v126, v120);
    v129 = *(_QWORD *)v214;
    v130 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
    {
      v131 = (int *)(*(_QWORD *)(v129 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v131 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v130;
        v131 += 4;
        if ( !v130 )
          goto LABEL_108;
      }
      v132 = v129 + 16LL * *v131 + 312;
    }
    else
    {
LABEL_108:
      v132 = sub_224BC3C(v214, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v119 = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v132)(
                                                            v128,
                                                            *(_QWORD *)(v132 + 8));
    if ( !v119 )
      sub_2213CDC(0, v120);
    if ( v119[3].monitor == (void *)v90 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v133 = v214;
  if ( v214 )
  {
    v134 = *(_QWORD *)v214;
    v135 = *(unsigned __int16 *)(*(_QWORD *)v214 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v214 + 302LL) )
    {
      v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
      {
        --v135;
        v136 += 4;
        if ( !v135 )
          goto LABEL_118;
      }
      v137 = v134 + 16LL * *v136 + 312;
    }
    else
    {
LABEL_118:
      v137 = sub_224BC3C(v214, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v137)(v133, *(_QWORD *)(v137 + 8));
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v120, v127);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_188;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(
                                         (UserRecommendSupportMaster_o *)Instance,
                                         v90,
                                         0,
                                         0);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Instance )
    goto LABEL_188;
  this->fields.isGrandServant = UserServantGrandMaster__IsSettingServant((UserServantGrandMaster_o *)Instance, v90, 0);
  this->fields.isWarehouseServant = 0;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_188;
  v139 = *(_QWORD *)(Instance + 24);
  v140 = Instance;
  if ( (int)v139 >= 1 )
  {
    v141 = 0;
    while ( 1 )
    {
      if ( v141 >= (unsigned int)v139 )
        goto LABEL_189;
      v142 = *(_QWORD *)(v140 + 32 + 8 * v141);
      if ( v142 )
      {
        v143 = *(_OWORD *)(v142 + 16);
        v144 = *(_OWORD *)(v142 + 32);
        v145 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v213.fields.currentCryptoKey = v143;
        *(_OWORD *)&v213.fields.fakeValue = v144;
        if ( !v145 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v138);
        v205 = v213;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v205, 0);
        if ( Instance == v90 )
          break;
      }
      LODWORD(v139) = *(_DWORD *)(v140 + 24);
      if ( (__int64)++v141 >= (int)v139 )
        goto LABEL_154;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_154:
  adjustHp = userServantEntity->fields.adjustHp;
  v155 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v138);
    v155 = BalanceConfig_TypeInfo;
  }
  static_fields = v155->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userServantEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userServantEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v157 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
      && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v157;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v158 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v158 )
    goto LABEL_188;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v158, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_188;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
LABEL_165:
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v181 = recoverySvtList->max_length;
    if ( v181 >= 1 )
    {
      m_Items = recoverySvtList->m_Items;
      while ( 1 )
      {
        v183 = *m_Items++;
        if ( v183 == v90 )
          break;
        if ( !--v181 )
          goto LABEL_172;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_172:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v173);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  v185 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.amountSortValue = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v185);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_188;
  v186 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v186;
  this->fields.sortValue1B = v186;
  if ( !Instance )
    goto LABEL_188;
  rarity = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_188;
  v188 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_188;
  v189 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_188;
  v190 = *(int *)(Instance + 208);
  lv = v188->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd(v189, 0);
  v193 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v190 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v193 )
    goto LABEL_188;
  v194 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
  v195 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v192);
  *(_QWORD *)&v217.fields.currentCryptoKey = v194;
  *(_QWORD *)&v217.fields.fakeValue = v195;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v217, 0);
  v197 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v197 )
    goto LABEL_188;
  v198 = *(_OWORD *)&v197->fields.id.fields.currentCryptoKey;
  v199 = *(_OWORD *)&v197->fields.id.fields.fakeValue;
  v200 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v213.fields.currentCryptoKey = v198;
  *(_OWORD *)&v213.fields.fakeValue = v199;
  if ( !v200 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v196);
  v204 = v213;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v204, 0);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValueLast = Instance;
  if ( !iconLabelInfo1 )
    goto LABEL_188;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_188;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void WarehouseListViewItem__Finalize(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool WarehouseListViewItem__IsMatchFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v8; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_2213CDC(0, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  _BOOL4 isChoice; // w8

  if ( (byte_596E4D2 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596E4D2 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_35;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v8->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v14->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_2213CDC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_2213CE4(RarityFilterKindList);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  return isChoice;
}


bool WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x2
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UserServantEntity_o *userServantEntity; // x21
  __int64 v22; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x21
  UserServantEntity_o *v27; // x0
  bool v28; // w8
  _BOOL4 v29; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0

  if ( (byte_596E4D1 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    byte_596E4D1 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_75;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_75;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v16);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19, v20);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_35;
  v27 = this->fields.userServantEntity;
  if ( v27 )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(v27, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_75;
      v28 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v28 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( ClassGroupFilterKindList )
    {
      v29 = v28;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( this->fields.isTransformed != v29 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
        this->fields.isTransformed = v29;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_75;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_75;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      goto LABEL_62;
    }
LABEL_75:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  }
LABEL_62:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_76;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_76:
    sub_2213CE4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v46 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v46 || !IsUnSelectedAllTargetFilters && !v46 )
  {
    if ( !IsMatchEffectCategory && !v48 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v48 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_35:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_76;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v22);
    v24 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v24->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0
  bool IsLock; // w8
  bool IsChoice; // w0

  WarehouseListViewItem__ModifyItem(this, userServantEntity, method);
  v5 = this->fields.userServantEntity;
  if ( !v5
    || (IsLock = UserServantEntity__IsLock(v5, 0), v5 = this->fields.userServantEntity,
                                                   this->fields.isLock = IsLock,
                                                   !v5) )
  {
    sub_2213CDC(v5, v4);
  }
  IsChoice = UserServantEntity__IsChoice(v5, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void WarehouseListViewItem__ModifyItem(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  struct ServantEntity_o *v22; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  struct ServantEntity_o *v25; // x8
  const MethodInfo_47A29F8 *v26; // x0
  int64_t lookup_high; // x8
  __int64 rarity; // x22
  ServantEntity_o *v29; // x8
  __int64 lv; // x20
  __int64 masterDataBytes_low; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_596E4CF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596E4CF = 1;
  }
  this->fields.userServantEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v10);
  if ( !userServantEntity )
    goto LABEL_14;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = this->fields.servantEntity;
  if ( !v22 )
    goto LABEL_14;
  v23 = *(_QWORD *)&v22->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v21);
  *(_QWORD *)&v32.fields.currentCryptoKey = v23;
  *(_QWORD *)&v32.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
  v25 = this->fields.servantEntity;
  this->fields.svtId = (int)Instance;
  if ( !v25 )
    goto LABEL_14;
  v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v25->fields.classId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v26);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.classId,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (lookup_high = SHIDWORD(Instance->fields.lookup),
        rarity = (unsigned int)this->fields.rarity,
        this->fields.priority = lookup_high,
        this->fields.sortValue1B = lookup_high,
        (Instance = (DataManager_o *)UserServantEntity__get_BaseServantEntity(userServantEntity, 0)) == 0)
    || (v29 = *p_servantEntity) == 0 )
  {
LABEL_14:
    sub_2213CDC(Instance, v12);
  }
  lv = userServantEntity->fields.lv;
  masterDataBytes_low = SLODWORD(Instance[1].fields.masterDataBytes);
  this->fields.sortValue2 = (masterDataBytes_low << 16)
                          | (rarity << 48)
                          | (2 * lv)
                          | ServantEntity__get_IsServantMaterialTd(v29, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewItem__Modify_45300132(
        WarehouseListViewItem_o *this,
        bool isFavorite,
        bool isPush,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsLock; // w8
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.isPush = isPush;
  if ( !userServantEntity
    || (IsLock = UserServantEntity__IsLock(userServantEntity, 0),
        userServantEntity = this->fields.userServantEntity,
        this->fields.isLock = IsLock,
        !userServantEntity) )
  {
    sub_2213CDC(userServantEntity, isFavorite);
  }
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void WarehouseListViewItem__SetOverwriteStatus(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (WarehouseListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_2213CDC(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool WarehouseListViewItem__SetSortValue(WarehouseListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  WarehouseListViewItem_o *v4; // x19
  int64_t *p_sortValue0; // x23
  int64_t priority; // x9
  EventUpValSetupInfo_o *setupInfo; // x4
  int bonusKind; // w8
  int32_t bonusKindId; // w8
  int32_t bonusKind2Id; // w8
  int32_t v11; // w5
  int32_t v12; // w9
  int32_t v13; // w8
  int32_t v14; // w9
  int32_t v15; // w8
  int32_t v16; // w9
  DataManager_c *v17; // x0
  int v18; // w9
  System_Collections_Generic_List_EventGroupEntity__o *v19; // x21
  System_Func_object__bool__o *v20; // x22
  bool v21; // w0
  bool IsEnableServant; // w0
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v24; // x22
  System_Int32_array *eventIdList; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v27; // x0
  intptr_t *v28; // x8
  System_Int32_array *v29; // x21
  System_Func_T__bool__o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // kr00_16
  DataManager_c *v36; // x0
  bool isChoice; // w21
  __int64 v38; // x2
  long double v39; // q0
  char v40; // w8
  __int64 v41; // x8
  char v42; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v44; // q1
  struct UserServantEntity_o *v45; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t sortStr1; // w21
  bool IsMaterialTd; // w8
  int64_t hpReinforceValue; // x2
  int64_t hp; // x20
  IconLabelInfo_o *v51; // x21
  __int64 v52; // x0
  __int64 v53; // x0
  WarehouseListViewItem_o *v54; // x20
  int32_t FirstOpenEventId; // w20
  __int64 monitor; // x8
  int64_t atk; // x20
  IconLabelInfo_o *v58; // x21
  IconLabelInfo_o *v59; // x19
  int64_t atkReinforceValue; // x2
  int32_t v61; // w2
  int64_t sortStr1_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t rarity; // x8
  int64_t cost; // x2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  WarehouseListViewManager_o *v69; // x20
  int64_t friendship; // x2
  IconLabelInfo_o *v71; // x20
  int32_t v72; // w21
  struct UserServantEntity_o *v73; // x8
  __int64 v74; // x21
  __int64 v75; // x22
  const MethodInfo *v76; // x2
  __int64 v77; // x20
  __int64 fortificationDetailName_low; // x9
  int32_t v79; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v3 = sort;
  v4 = this;
  if ( (byte_596E4D0 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WarehouseListViewItem__SetSortValue_b__71_0__);
    sub_2213A60(&Method_WarehouseListViewItem__SetSortValue_b__71_1__);
    sub_2213A60(&Method_WarehouseListViewItem__SetSortValue_b__71_2__);
    sub_2213A60(&Method_WarehouseListViewItem__SetSortValue_b__71_3__);
    this = (WarehouseListViewItem_o *)sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E4D0 = 1;
  }
  entity = 0;
  *(_QWORD *)tdMaxLv = 0;
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_216;
  if ( !v3->fields.isBonusKind )
    goto LABEL_87;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_216;
  if ( setupInfo->fields.isQuestStart )
  {
    bonusKind = v3->fields.bonusKind;
    if ( (unsigned int)(bonusKind - 4) >= 2 )
    {
      if ( bonusKind != 7 )
      {
        if ( !bonusKind )
        {
          if ( v4->fields.bonusKind )
          {
            bonusKindId = v3->fields.bonusKindId;
            goto LABEL_56;
          }
          bonusKindId = v3->fields.bonusKindId;
          if ( v4->fields.bonusKindId != bonusKindId )
          {
LABEL_56:
            v4->fields.bonusKind = 0;
            v4->fields.bonusKindId = bonusKindId;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
            this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( this )
            {
              EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                    (EventGroupMaster_o *)this,
                                    v4->fields.bonusKindId,
                                    0);
              this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                  0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !EntitiesByGroupId )
                  goto LABEL_216;
                if ( EntitiesByGroupId->fields._size >= 2 )
                {
                  v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v24,
                    (Il2CppObject *)v4,
                    Method_WarehouseListViewItem__SetSortValue_b__71_0__,
                    0);
                  v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                              (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                              (System_Func_T__bool__o *)v24,
                                              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
                }
              }
              goto LABEL_63;
            }
LABEL_216:
            sub_2213CDC(this, sort);
          }
LABEL_63:
          if ( !v4->fields.isEventUpVal )
            goto LABEL_100;
          goto LABEL_87;
        }
        if ( v3->fields.bonusKind2 == 8 )
        {
          if ( v4->fields.bonusKind == bonusKind )
          {
            v16 = v3->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v16 )
              goto LABEL_63;
          }
          else
          {
            v16 = v3->fields.bonusKindId;
          }
          eventIdList = setupInfo->fields.eventIdList;
          v4->fields.bonusKind = bonusKind;
          v4->fields.bonusKindId = v16;
          this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_216;
          this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
          if ( !this )
            goto LABEL_216;
          OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                    (EventBonusFilterMaster_o *)this,
                                    eventIdList,
                                    0);
          v27 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
          v28 = &Method_WarehouseListViewItem__SetSortValue_b__71_1__;
          goto LABEL_74;
        }
        if ( bonusKind != 3 )
          goto LABEL_87;
        if ( v4->fields.bonusKind == 3 )
        {
          v12 = v4->fields.bonusKindId;
          v13 = v3->fields.bonusKindId;
LABEL_38:
          if ( v12 == v13 )
            goto LABEL_63;
          goto LABEL_82;
        }
        v13 = v3->fields.bonusKindId;
        goto LABEL_82;
      }
      if ( v4->fields.bonusKind == 7 )
      {
        v14 = v4->fields.bonusKindId;
        v15 = v3->fields.bonusKindId;
        goto LABEL_53;
      }
      v15 = v3->fields.bonusKindId;
      goto LABEL_76;
    }
    if ( v4->fields.bonusKind == bonusKind )
      goto LABEL_63;
    v11 = v3->fields.bonusKindId;
    goto LABEL_49;
  }
  bonusKind = v3->fields.bonusKind2;
  if ( bonusKind > 3 )
  {
    if ( (unsigned int)(bonusKind - 4) >= 2 )
    {
      if ( bonusKind != 7 )
      {
        if ( bonusKind != 8 )
          goto LABEL_87;
        if ( v4->fields.bonusKind == 8 )
        {
          bonusKind2Id = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == bonusKind2Id )
            goto LABEL_63;
        }
        else
        {
          bonusKind2Id = v3->fields.bonusKind2Id;
        }
        v29 = setupInfo->fields.eventIdList;
        v4->fields.bonusKind = 8;
        v4->fields.bonusKindId = bonusKind2Id;
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_216;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_216;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  v29,
                                  0);
        v27 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
        v28 = &Method_WarehouseListViewItem__SetSortValue_b__71_3__;
LABEL_74:
        v30 = (System_Func_T__bool__o *)v27;
        System_Func_int__bool____ctor(v27, (Il2CppObject *)v4, *v28, 0);
        IsEnableServant = BasicHelper__Any_int__58784608(
                            OtherEventEquipIdList,
                            v30,
                            (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
        goto LABEL_86;
      }
      if ( v4->fields.bonusKind == 7 )
      {
        v14 = v4->fields.bonusKindId;
        v15 = v3->fields.bonusKind2Id;
LABEL_53:
        if ( v14 == v15 )
          goto LABEL_63;
        goto LABEL_76;
      }
      v15 = v3->fields.bonusKind2Id;
LABEL_76:
      v4->fields.bonusKind = 7;
      v4->fields.bonusKindId = v15;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_216;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
      sort = *(ListViewSort_o **)&v35.fields.fakeValue;
      this = *(WarehouseListViewItem_o **)&v35.fields.currentCryptoKey;
      if ( !MasterData_object )
        goto LABEL_216;
      IsEnableServant = ServantFilterMaster__IsEnableServant(
                          (ServantFilterMaster_o *)MasterData_object,
                          v35,
                          v4->fields.bonusKindId,
                          0);
      goto LABEL_86;
    }
    if ( v4->fields.bonusKind == bonusKind )
    {
      v11 = v3->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v11 )
        goto LABEL_63;
    }
    else
    {
      v11 = v3->fields.bonusKind2Id;
    }
LABEL_49:
    this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = v11;
    if ( !this )
      goto LABEL_216;
    IsEnableServant = UserServantEntity__getEventUpVal_50186380(
                        (UserServantEntity_o *)this,
                        -1,
                        0,
                        0,
                        setupInfo,
                        v11,
                        0,
                        0);
LABEL_86:
    v4->fields.isEventUpVal = IsEnableServant;
    if ( !IsEnableServant )
    {
LABEL_100:
      LOBYTE(this) = 0;
      return (char)this;
    }
    goto LABEL_87;
  }
  if ( bonusKind )
  {
    if ( bonusKind != 3 )
      goto LABEL_87;
    if ( v4->fields.bonusKind == 3 )
    {
      v12 = v4->fields.bonusKindId;
      v13 = v3->fields.bonusKind2Id;
      goto LABEL_38;
    }
    v13 = v3->fields.bonusKind2Id;
LABEL_82:
    v4->fields.bonusKindId = v13;
    v36 = DataManager_TypeInfo;
    v4->fields.bonusKind = 3;
    if ( !*(&v36->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v36, sort, method);
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_216;
    IsEnableServant = EventCampaignMaster__IsEnableServant(
                        (EventCampaignMaster_o *)this,
                        v4->fields.svtId,
                        v4->fields.bonusKindId,
                        0);
    goto LABEL_86;
  }
  v4->fields.bonusKind = 0;
  v17 = DataManager_TypeInfo;
  v18 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v4->fields.bonusKindId = v3->fields.bonusKind2Id;
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v17, sort, method);
  this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
  if ( !this )
    goto LABEL_216;
  v19 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
  this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v19 )
      goto LABEL_216;
    if ( v19->fields._size >= 2 )
    {
      v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v20, (Il2CppObject *)v4, Method_WarehouseListViewItem__SetSortValue_b__71_2__, 0);
      v21 = BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v19,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
      v4->fields.isEventUpVal = v21;
      if ( !v21 )
        goto LABEL_100;
    }
  }
LABEL_87:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          v3,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
    goto LABEL_100;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !this )
    goto LABEL_216;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  *p_sortValue0 = 0;
  v4->fields.sortValue0B = 0;
  if ( !v3->fields.isSmartSort )
  {
    v40 = !isChoice;
    if ( !v3->fields.isChoiceSort )
      v40 = 1;
    if ( (v40 & 1) != 0 )
      goto LABEL_121;
    goto LABEL_120;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_216;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseGrandEquip )
      {
        if ( !v4->fields.isUseSupportEquip )
        {
          if ( !v4->fields.isUseRecommendSupportEquip )
            goto LABEL_116;
LABEL_114:
          v41 = -50;
          goto LABEL_115;
        }
        goto LABEL_110;
      }
      goto LABEL_108;
    }
    goto LABEL_106;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
  {
LABEL_106:
    v41 = -20;
    goto LABEL_115;
  }
  if ( v4->fields.isGrandServant )
  {
LABEL_108:
    v41 = -30;
    goto LABEL_115;
  }
  if ( v4->fields.isUseSupport )
  {
LABEL_110:
    v41 = -40;
    goto LABEL_115;
  }
  if ( !v4->fields.isUseRecommendSupport )
  {
    if ( !v4->fields.attribute )
    {
      if ( v4->fields.isFavorite )
      {
        v41 = -60;
      }
      else if ( v4->fields.isPush )
      {
        v41 = -65;
      }
      else
      {
        if ( !WarehouseListViewItem__get_IsProtected(v4, (const MethodInfo *)sort) && !v4->fields.isFortification )
          goto LABEL_116;
        v41 = -10;
      }
      goto LABEL_115;
    }
    goto LABEL_114;
  }
  v41 = -45;
LABEL_115:
  *p_sortValue0 = v41;
LABEL_116:
  v42 = !isChoice;
  if ( !v3->fields.isChoiceSort )
    v42 = 1;
  if ( (v42 & 1) != 0 )
    goto LABEL_121;
  *p_sortValue0 = -60;
  p_sortValue0 = &v4->fields.sortValue0B;
LABEL_120:
  *p_sortValue0 = -10;
LABEL_121:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_216;
      v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v82.fields.fakeValue = v44;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v38);
      v81 = v82;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v81, 0);
      v45 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v45 )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v45->fields.createdAt, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      sortStr1 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(iconLabelInfo2, 2, sortStr1, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      goto LABEL_170;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      sortStr1_low = SLODWORD(this[1].fields.sortStr1);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortStr1_low;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(iconLabelInfo1, 2, sortStr1_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_207;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      v61 = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 33, v61, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      goto LABEL_177;
    case 5:
      hp = v4->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_216;
      v51 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v51 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(v51, 3, hp, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_156;
    case 6:
      atk = v4->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = atk;
      if ( !this )
        goto LABEL_216;
      v58 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v58 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(v58, 5, atk, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_156:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      v59 = v4->fields.iconLabelInfo2;
      goto LABEL_205;
    case 7:
      cost = v4->fields.cost;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_177;
    case 8:
      rarity = -v4->fields.priority;
LABEL_170:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_203;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 32, friendship, v4->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
      goto LABEL_177;
    case 0xE:
      amountSortValue = v4->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_200;
      manager = v3->fields.manager;
      if ( manager
        && (naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewManager_TypeInfo )
          v69 = (WarehouseListViewManager_o *)v3->fields.manager;
        else
          v69 = 0;
      }
      else
      {
        v69 = 0;
      }
      v73 = v4->fields.userServantEntity;
      if ( v73 )
      {
        v74 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v75 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v38);
        *(_QWORD *)&v85.fields.currentCryptoKey = v74;
        *(_QWORD *)&v85.fields.fakeValue = v75;
        this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v85, 0);
        if ( v69 )
        {
          amountSortValue = WarehouseListViewManager__GetAmountSortValue(v69, (int32_t)this, v76);
          v4->fields.amountSortValue = amountSortValue;
LABEL_200:
          this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            v77 = v4->fields.rarity;
            this = (WarehouseListViewItem_o *)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)this, 0);
            if ( this )
            {
              fortificationDetailName_low = SLODWORD(this->fields.fortificationDetailName);
              this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
              rarity = ((v77 << 32) + (amountSortValue << 48)) | fortificationDetailName_low;
LABEL_203:
              v4->fields.sortValue1 = rarity;
              if ( this )
                goto LABEL_204;
            }
          }
        }
      }
      goto LABEL_216;
    case 0xF:
      hpReinforceValue = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)this,
        44,
        hpReinforceValue,
        v4->fields.nowMaxHpReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_177;
    case 0x10:
      atkReinforceValue = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = atkReinforceValue;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)this,
        45,
        atkReinforceValue,
        v4->fields.nowMaxAtkReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
LABEL_177:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_216;
      v71 = v4->fields.iconLabelInfo2;
      v72 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v71 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(v71, 2, v72, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_216;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
        goto LABEL_185;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_216;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0) )
        goto LABEL_185;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_216;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0) )
        goto LABEL_207;
LABEL_185:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_216;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      goto LABEL_207;
    case 0x18:
      v52 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_WORD *)(v52 + 309) & 1) == 0 )
        v52 = sub_224B908(v39);
      v53 = *(_QWORD *)(*(_QWORD *)(v52 + 192) + 16LL);
      if ( (*(_WORD *)(v53 + 309) & 1) == 0 )
        v53 = sub_224B908(v39);
      this = **(WarehouseListViewItem_o ***)(v53 + 184);
      if ( !this )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0);
      if ( !this )
        goto LABEL_216;
      v54 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_189:
        v4->fields.sortValue1 = monitor;
        goto LABEL_190;
      }
      this = (WarehouseListViewItem_o *)sub_200A4F4(Method_SingletonMonoBehaviour_DataManager__getInstance__);
      if ( !this )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v54->fields.sortIndex )
        sub_2213CE4(this);
      if ( !this )
        goto LABEL_216;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v54->fields.sortValue0, 0);
      this = (WarehouseListViewItem_o *)sub_200A4F4(Method_SingletonMonoBehaviour_DataManager__getInstance__);
      if ( !this )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_216;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_216;
        monitor = (__int64)entity[5].monitor;
        goto LABEL_189;
      }
LABEL_190:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_216;
LABEL_204:
      v59 = v4->fields.iconLabelInfo1;
LABEL_205:
      v79 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v59 )
        goto LABEL_216;
      IconLabelInfo__Set_47880948(v59, 2, v79, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_207:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
}


bool WarehouseListViewItem__SwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool WarehouseListViewItem__SwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


bool WarehouseListViewItem___SetSortValue_b__71_0(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16

  if ( (byte_596E4D4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596E4D4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v6 = *(_QWORD *)&v13.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v13.fields.currentCryptoKey;
  if ( !v11 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v11, v13, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_2213CDC(Master_object, v6);
  return UserServantEntity__getEventUpVal_50186380(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__71_1(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool WarehouseListViewItem___SetSortValue_b__71_2(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // kr00_16

  if ( (byte_596E4D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596E4D5 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v6 = *(_QWORD *)&v13.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v13.fields.currentCryptoKey;
  if ( !v11 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v11, v13, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_2213CDC(Master_object, v6);
  return UserServantEntity__getEventUpVal_50186380(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__71_3(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.svtId == x;
}


int32_t WarehouseListViewItem__get_Attribute(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute;
}


int32_t WarehouseListViewItem__get_DragSelectNum(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *WarehouseListViewItem__get_FortificationDetailName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *WarehouseListViewItem__get_FortificationName(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *WarehouseListViewItem__get_IconInfo1(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *WarehouseListViewItem__get_IconInfo2(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isFavorite
    || (this->fields.partyIndex & 0x80000000) == 0
    || this->fields.isPartyEquip
    || this->fields.attribute
    || this->fields.isUseSupport
    || this->fields.isUseSupportEquip
    || this->fields.isUseRecommendSupport
    || this->fields.isUseRecommendSupportEquip
    || this->fields.isFatigueRecovery
    || this->fields.isFortification )
  {
    return 1;
  }
  if ( this->fields.isPush || WarehouseListViewItem__get_IsProtected(this, method) || this->fields.isGrandServant )
    return 1;
  return this->fields.isUseGrandEquip;
}


bool WarehouseListViewItem__get_IsChocolateSvtEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool WarehouseListViewItem__get_IsChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool WarehouseListViewItem__get_IsDispChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool WarehouseListViewItem__get_IsDragSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool WarehouseListViewItem__get_IsEnabled(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool WarehouseListViewItem__get_IsEventJoin(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool WarehouseListViewItem__get_IsFatigueRecovery(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFatigueRecovery;
}


bool WarehouseListViewItem__get_IsFavorite(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool WarehouseListViewItem__get_IsFortification(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool WarehouseListViewItem__get_IsFriendShipSvtEq(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool WarehouseListViewItem__get_IsGrandServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGrandServant;
}


bool WarehouseListViewItem__get_IsLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool WarehouseListViewItem__get_IsMaterialTdSvt(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool WarehouseListViewItem__get_IsNeedAdjustIconLabelScale(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool WarehouseListViewItem__get_IsOrganization(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_2213CDC(0, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0);
}


bool WarehouseListViewItem__get_IsParty(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool WarehouseListViewItem__get_IsPartyEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool WarehouseListViewItem__get_IsProtected(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  __int64 v5; // x1
  UserServantEntity_o *v6; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity || this->fields.isWarehouseServant )
    return 0;
  if ( UserServantEntity__IsProtectedEventServant(userServantEntity, 0) )
    return 1;
  v6 = this->fields.userServantEntity;
  if ( !v6 )
    sub_2213CDC(0, v5);
  return UserServantEntity__IsNotSendStorageServant(v6, 0);
}


bool WarehouseListViewItem__get_IsPush(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool WarehouseListViewItem__get_IsPushMode(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool WarehouseListViewItem__get_IsSellEnableServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool WarehouseListViewItem__get_IsSwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool WarehouseListViewItem__get_IsSwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool WarehouseListViewItem__get_IsUse(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


bool WarehouseListViewItem__get_IsUseGrandEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseGrandEquip;
}


bool WarehouseListViewItem__get_IsUseRecommendSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool WarehouseListViewItem__get_IsUseRecommendSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
}


bool WarehouseListViewItem__get_IsUseSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


bool WarehouseListViewItem__get_IsUseSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


ServantEntity_o *WarehouseListViewItem__get_Servant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t WarehouseListViewItem__get_SvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *WarehouseListViewItem__get_UserServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t WarehouseListViewItem__get_UserSvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596E4D3 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596E4D3 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
}


void WarehouseListViewItem__set_DragSelectNum(WarehouseListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewItem__set_IsDragSelect(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_2213CDC(0, value);
  this->fields.dragSelectNum = value - 1;
}


void WarehouseListViewItem__set_IsEnabled(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void WarehouseListViewItem__set_IsPush(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void WarehouseListViewItem__set_IsPushMode(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}