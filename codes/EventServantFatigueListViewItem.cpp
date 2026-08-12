void EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  IconLabelInfo_o *v19; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int64_t Master_object; // x0
  __int64 v35; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x2
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x23
  __int64 v47; // x29
  ServantEntity_o *v48; // x28
  struct System_String_o *Name; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x2
  struct ServantEntity_o *v57; // x8
  DataManager_c *v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  ServantLimitMaster_o *v60; // x27
  int32_t v61; // w28
  int32_t v62; // w8
  bool IsLock; // w8
  __int64 v64; // x2
  struct UserServantEntity_o *v65; // x9
  __int128 v66; // q1
  __int64 v67; // x23
  bool v68; // w8
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x2
  struct UserServantEntity_o *v82; // x8
  UserEventServantFatigueMaster_o *v83; // x25
  __int64 v84; // x23
  __int64 v85; // x26
  __int64 v86; // x2
  int64_t v87; // x23
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  __int128 v90; // q1
  int v91; // w8
  int64_t v92; // x0
  __int64 v93; // x2
  struct UserServantEntity_o *v94; // x8
  UserServantCollectionMaster_o *v95; // x23
  __int128 v96; // q0
  __int128 v97; // q1
  int v98; // w8
  __int64 v99; // x2
  struct UserServantEntity_o *v100; // x8
  int64_t v101; // x24
  __int64 v102; // x25
  __int64 v103; // x26
  __int64 v104; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v106; // x2
  __int64 v107; // x24
  int64_t v108; // x23
  unsigned __int64 v109; // x25
  __int64 v110; // x26
  __int64 v111; // x8
  unsigned int v112; // w29
  __int64 v113; // x8
  unsigned int v114; // w9
  __int64 v115; // x8
  struct UserServantEntity_o *v116; // x9
  __int128 v117; // q0
  __int128 v118; // q1
  __int64 v119; // x28
  int v120; // w9
  bool v121; // w8
  UserServantEntity_o *v122; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  __int64 v137; // x1
  __int64 v138; // x2
  BalanceConfig_c *v139; // x0
  int32_t adjustHp; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct System_String_o *v148; // x1
  int64_t v149; // x23
  int64_t v150; // x8
  __int64 rarity; // x21
  __int64 v152; // x2
  struct UserServantEntity_o *v153; // x8
  __int64 v154; // x21
  __int64 v155; // x22
  __int64 v156; // x2
  struct UserServantEntity_o *v157; // x8
  __int128 v158; // q0
  __int128 v159; // q1
  int v160; // w8
  int64_t v161; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+B0h] [xbp-90h]
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16

  if ( (byte_596AC71 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596AC71 = 1;
  }
  recoverAt = 0;
  v12 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.iconLabelInfo1 = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0);
  this->fields.iconLabelInfo2 = v19;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !userServantEntity )
    goto LABEL_102;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v45 = this->fields.userServantEntity;
  if ( !v45 )
    goto LABEL_102;
  v47 = *(_QWORD *)&v45->fields.limitCount.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v45->fields.limitCount.fields.fakeValue;
  v48 = *p_servantEntity;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v44);
  *(_QWORD *)&v170.fields.currentCryptoKey = v47;
  *(_QWORD *)&v170.fields.fakeValue = v46;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v170, 0);
  if ( !v48 )
    goto LABEL_102;
  Name = ServantEntity__getName(v48, Master_object, -1, 0, 0, 0);
  this->fields.servantName = Name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantName,
    (int32_t)Name,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v57 = this->fields.servantEntity;
  if ( !v57 )
    goto LABEL_102;
  v58 = DataManager_TypeInfo;
  this->fields.classId = v57->fields.classId;
  if ( !*(&v58->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v58, v35, v56);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v59 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_102;
  v60 = (ServantLimitMaster_o *)Master_object;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v59[1], 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                    userServantEntity->fields.limitCount,
                    0);
  if ( !v60 )
    goto LABEL_102;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v60, v61, Master_object, 0);
  if ( !Master_object )
    goto LABEL_102;
  v62 = *(_DWORD *)(Master_object + 24);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.isParty = 0;
  this->fields.rarity = v62;
  if ( !Master_object )
    goto LABEL_102;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Master_object )
    goto LABEL_102;
  this->fields.isChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Master_object, 0);
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_102;
  v65 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_102;
  v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
  v67 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v168.fields.fakeValue = v66;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v64);
  v167 = v168;
  v68 = v67 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v167, 0);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v68;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetRecoveryFatigueItem,
    (int32_t)targetRecoveryFatigueItem,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.isFatigueRecover = 0;
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.fatigueTime = -1;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_102;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0) )
    this->fields.isHeroineSvt = 1;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_102;
  v83 = (UserEventServantFatigueMaster_o *)Master_object;
  v84 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
  v85 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v81);
  *(_QWORD *)&v171.fields.currentCryptoKey = v84;
  *(_QWORD *)&v171.fields.fakeValue = v85;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v171, 0);
  if ( !v83 )
    goto LABEL_102;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v83,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Master_object,
         0) )
  {
    v87 = recoverAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v86);
    Master_object = NetworkManager__getTime(0);
    if ( v87 > Master_object )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v88 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_102;
      v89 = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
      v90 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
      v91 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v168.fields.currentCryptoKey = v89;
      *(_OWORD *)&v168.fields.fakeValue = v90;
      if ( !v91 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v86);
      v166 = v168;
      v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v166, 0);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v83, eventId, v92, 0);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v35, v86);
    if ( TutorialFlag__Get_47388504(126, 0) )
      this->fields.isCanNotSelect = 1;
  }
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v94 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_102;
  v95 = (UserServantCollectionMaster_o *)Master_object;
  v96 = *(_OWORD *)&v94->fields.userId.fields.currentCryptoKey;
  v97 = *(_OWORD *)&v94->fields.userId.fields.fakeValue;
  v98 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v168.fields.currentCryptoKey = v96;
  *(_OWORD *)&v168.fields.fakeValue = v97;
  if ( !v98 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v93);
  v165 = v168;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v165, 0);
  v100 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_102;
  v101 = Master_object;
  v102 = *(_QWORD *)&v100->fields.svtId.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v100->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v99);
  *(_QWORD *)&v172.fields.currentCryptoKey = v102;
  *(_QWORD *)&v172.fields.fakeValue = v103;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v172, 0);
  if ( !v95 )
    goto LABEL_102;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v95, v101, Master_object, 0);
  if ( !Master_object )
    goto LABEL_102;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Master_object,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v104);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v104);
    Master_object = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Master_object = (int64_t)UserDeckMaster__getDeckList(
                                   (UserDeckMaster_o *)MasterData_object,
                                   *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                                   0)) == 0 )
  {
LABEL_102:
    sub_2213CDC(Master_object, v35);
  }
  v107 = *(unsigned int *)(Master_object + 24);
  v108 = Master_object;
  if ( (int)v107 >= 1 )
  {
    v109 = 0;
    while ( 1 )
    {
      if ( v109 >= *(unsigned int *)(v108 + 24) )
LABEL_103:
        sub_2213CE4(Master_object);
      v110 = *(_QWORD *)(v108 + 8 * v109 + 32);
      if ( !v110 )
        goto LABEL_102;
      v111 = *(_QWORD *)(v110 + 48);
      if ( !v111 )
        goto LABEL_102;
      v112 = 0;
      while ( 1 )
      {
        v113 = *(_QWORD *)(v111 + 16);
        if ( !v113 )
          goto LABEL_102;
        v114 = *(_DWORD *)(v113 + 24);
        if ( (int)v112 >= (int)v114 )
          break;
        if ( v112 >= v114 )
          goto LABEL_103;
        v115 = *(_QWORD *)(v113 + 8LL * (int)v112 + 32);
        if ( !v115 )
          goto LABEL_102;
        v116 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_102;
        v117 = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
        v118 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
        v119 = *(_QWORD *)(v115 + 24);
        v120 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v168.fields.currentCryptoKey = v117;
        *(_OWORD *)&v168.fields.fakeValue = v118;
        if ( !v120 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v106);
        v164 = v168;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v164, 0);
        if ( v119 == Master_object )
        {
          this->fields.isParty = 1;
          goto LABEL_81;
        }
        v111 = *(_QWORD *)(v110 + 48);
        ++v112;
        if ( !v111 )
          goto LABEL_102;
      }
      if ( !this->fields.isParty && ++v109 != v107 )
        continue;
      break;
    }
  }
LABEL_81:
  v121 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
      && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v121;
  Master_object = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v122 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v122 )
    goto LABEL_102;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v122, -1, Master_object, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  Master_object = (int64_t)this->fields.userServantEntity;
  if ( !Master_object )
    goto LABEL_102;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v139 = BalanceConfig_TypeInfo;
  adjustHp = userServantEntity->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v137, v138);
    v139 = BalanceConfig_TypeInfo;
  }
  static_fields = v139->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userServantEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userServantEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_102;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_102;
  v148 = *(struct System_String_o **)(Master_object + 24);
  v149 = Master_object;
  this->fields.className = v148;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.className,
    (int32_t)v148,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  v150 = *(int *)(v149 + 52);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v150;
  this->fields.sortValue1B = v150;
  if ( !Master_object )
    goto LABEL_102;
  rarity = (unsigned int)this->fields.rarity;
  Master_object = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_102;
  v153 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_102;
  this->fields.sortValue2 = ((__int64)*(int *)(Master_object + 208) << 16) | (rarity << 48) | v153->fields.lv;
  v154 = *(_QWORD *)&v153->fields.svtId.fields.currentCryptoKey;
  v155 = *(_QWORD *)&v153->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v152);
  *(_QWORD *)&v173.fields.currentCryptoKey = v154;
  *(_QWORD *)&v173.fields.fakeValue = v155;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v173, 0);
  v157 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v157 )
    goto LABEL_102;
  v158 = *(_OWORD *)&v157->fields.id.fields.currentCryptoKey;
  v159 = *(_OWORD *)&v157->fields.id.fields.fakeValue;
  v160 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v168.fields.currentCryptoKey = v158;
  *(_OWORD *)&v168.fields.fakeValue = v159;
  if ( !v160 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v156);
  v163 = v168;
  v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v163, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v161;
  this->fields.amountSortValue = -1;
  if ( !Master_object )
    goto LABEL_102;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
  Master_object = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_102;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


bool EventServantFatigueListViewItem__GetIsEventUpValShow(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  __int64 bonusKindId; // x2
  unsigned int bonusKind2Id; // w9
  __int64 v8; // x2
  struct UserServantEntity_o *v9; // x8
  EventCampaignMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x2
  struct ServantEntity_o *v20; // x8
  EventServantFatigueMaster_o *v21; // x20
  int32_t v22; // w19
  __int64 v23; // x21
  __int64 v24; // x22
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v26; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_596AC75 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantFatigueMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventServantFatigueListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC75 = 1;
  }
  if ( !sort )
    goto LABEL_52;
  if ( !sort->fields.isBonusKind )
  {
LABEL_42:
    LOBYTE(this) = 1;
    return (char)this;
  }
  bonusKind2 = sort->fields.bonusKind2;
  this = (EventServantFatigueListViewItem_o *)(&dword_0 + 1);
  if ( (unsigned int)bonusKind2 > 7 || ((1 << bonusKind2) & 0xB9) == 0 )
    return (char)this;
  if ( v4->fields.bonusKind == bonusKind2 )
  {
    bonusKindId = (unsigned int)v4->fields.bonusKindId;
    bonusKind2Id = sort->fields.bonusKind2Id;
    if ( (_DWORD)bonusKindId == bonusKind2Id )
      goto LABEL_12;
  }
  else
  {
    bonusKind2Id = sort->fields.bonusKind2Id;
  }
  bonusKindId = bonusKind2Id;
  v4->fields.bonusKind = bonusKind2;
  v4->fields.bonusKindId = bonusKind2Id;
LABEL_12:
  if ( bonusKind2 > 3 )
  {
    if ( (unsigned int)(bonusKind2 - 4) < 2 )
    {
      this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_52;
      this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal(
                                                    (UserServantEntity_o *)this,
                                                    v4->fields.setupInfo,
                                                    bonusKindId,
                                                    0,
                                                    0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_42;
      goto LABEL_31;
    }
    if ( bonusKind2 == 7 )
    {
      this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_52;
      this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !userServantEntity || !this )
        goto LABEL_52;
      LOBYTE(this) = ServantFilterMaster__IsEnableServant(
                       (ServantFilterMaster_o *)this,
                       userServantEntity[5],
                       v4->fields.bonusKindId,
                       0);
      return (char)this;
    }
LABEL_31:
    servantEntity = v4->fields.servantEntity;
    if ( servantEntity )
    {
      v15 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, bonusKindId);
      *(_QWORD *)&v29.fields.currentCryptoKey = v15;
      *(_QWORD *)&v29.fields.fakeValue = v16;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0) < 1 )
        goto LABEL_50;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
      this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
      v20 = v4->fields.servantEntity;
      if ( v20 )
      {
        v21 = (EventServantFatigueMaster_o *)this;
        v22 = v4->fields.bonusKindId;
        v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
        v24 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v19);
        *(_QWORD *)&v30.fields.currentCryptoKey = v23;
        *(_QWORD *)&v30.fields.fakeValue = v24;
        this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                      v30,
                                                      0);
        if ( v21 )
        {
          if ( EventServantFatigueMaster__IsBonusFilterTarget(v21, v22, (int32_t)this, 0) )
            goto LABEL_42;
LABEL_50:
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
    }
    goto LABEL_52;
  }
  if ( !bonusKind2 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
    this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
    if ( this )
    {
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
      this = (EventServantFatigueListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                    (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                    0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_50;
      if ( EntitiesByGroupId )
      {
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v26 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v26,
            (Il2CppObject *)v4,
            Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__,
            0);
          LOBYTE(this) = BasicHelper__Any_object_(
                           (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                           (System_Func_T__bool__o *)v26,
                           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
          return (char)this;
        }
        goto LABEL_50;
      }
    }
LABEL_52:
    sub_2213CDC(this, sort);
  }
  if ( bonusKind2 != 3 )
    goto LABEL_31;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
  this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v9 = v4->fields.userServantEntity;
  if ( !v9 )
    goto LABEL_52;
  v10 = (EventCampaignMaster_o *)this;
  v11 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v8);
  *(_QWORD *)&v28.fields.currentCryptoKey = v11;
  *(_QWORD *)&v28.fields.fakeValue = v12;
  this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v28,
                                                0);
  if ( !v10 )
    goto LABEL_52;
  LOBYTE(this) = EventCampaignMaster__IsEnableServant(v10, (int32_t)this, v4->fields.bonusKindId, 0);
  return (char)this;
}


bool EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  __int64 v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventServantRecoveryFatigueItem_o *v6; // x20
  bool v7; // w25
  unsigned __int64 v8; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w21
  ServantEntity_o *servantEntity; // x22
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_596AC77 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AC77 = 1;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                                     targetRecoveryFatigueItem,
                                                                     0);
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  m_CancellationTokenSource = targetRecoveryFatigueItem->fields.m_CancellationTokenSource;
  v6 = targetRecoveryFatigueItem;
  v7 = (int)m_CancellationTokenSource > 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(targetRecoveryFatigueItem);
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      v12 = *((_DWORD *)&v6->fields.baseButton + v8);
      servantEntity = this->fields.servantEntity;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v4);
      *(_QWORD *)&v17.fields.currentCryptoKey = v10;
      *(_QWORD *)&v17.fields.fakeValue = v11;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                         v17,
                                                                         0);
      v14 = this->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)targetRecoveryFatigueItem;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                         v14->fields.dispLimitCount,
                                                                         0);
      if ( !servantEntity )
        break;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)ServantEntity__IsIndividuality(
                                                                         servantEntity,
                                                                         v15,
                                                                         (int32_t)targetRecoveryFatigueItem,
                                                                         v12,
                                                                         0);
      if ( ((unsigned __int8)targetRecoveryFatigueItem & 1) == 0 )
      {
        LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
        v7 = (__int64)++v8 < (int)m_CancellationTokenSource;
        if ( (__int64)v8 < (int)m_CancellationTokenSource )
          continue;
      }
      return v7;
    }
LABEL_16:
    sub_2213CDC(targetRecoveryFatigueItem, method);
  }
  return v7;
}


bool EventServantFatigueListViewItem__IsMatchIndividuality_38906088(
        EventServantFatigueListViewItem_o *this,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  __int64 v5; // x2
  __int64 v6; // x8
  EventServantFatigueListViewItem_o *v7; // x20
  bool v8; // w25
  unsigned __int64 v9; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w21
  ServantEntity_o *servantEntity; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_596AC78 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AC78 = 1;
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  this = (EventServantFatigueListViewItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                targetRecoveryFatigueItem,
                                                0);
  if ( !this )
    goto LABEL_16;
  v6 = *(_QWORD *)&this->fields.sortIndex;
  v7 = this;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
        sub_2213CE4(this);
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      v13 = *((_DWORD *)&v7->fields.sortValue0 + v9);
      servantEntity = v4->fields.servantEntity;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          targetRecoveryFatigueItem,
          v5);
      *(_QWORD *)&v18.fields.currentCryptoKey = v11;
      *(_QWORD *)&v18.fields.fakeValue = v12;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                    v18,
                                                    0);
      v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v15 )
        break;
      v16 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                    v15[8],
                                                    0);
      if ( !servantEntity )
        break;
      this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                    servantEntity,
                                                    v16,
                                                    (int32_t)this,
                                                    v13,
                                                    0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v6) = v7->fields.sortIndex;
        v8 = (__int64)++v9 < (int)v6;
        if ( (__int64)v9 < (int)v6 )
          continue;
      }
      return v8;
    }
LABEL_16:
    sub_2213CDC(this, targetRecoveryFatigueItem);
  }
  return v8;
}


bool EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
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
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 isChoice; // w8
  __int64 v20; // x2
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  bool v25; // w8
  _BOOL4 v26; // w22
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  if ( (byte_596AC74 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    byte_596AC74 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_70;
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
      goto LABEL_70;
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
    goto LABEL_70;
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
    goto LABEL_70;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v16, v17);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_71;
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
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_39;
  v24 = this->fields.userServantEntity;
  if ( !v24 )
    goto LABEL_57;
  if ( UserServantEntity__get_IsSaveTransformServant(v24, 0) )
  {
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_70;
    v25 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
  }
  else
  {
    v25 = 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
  if ( !ClassGroupFilterKindList )
LABEL_70:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  v26 = v25;
  DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                            (UserServantEntity_o *)ClassGroupFilterKindList,
                                            -1,
                                            0,
                                            0);
  if ( this->fields.isTransformed != v26 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
  {
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    this->fields.isTransformed = v26;
    this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
    if ( !ClassGroupFilterKindList )
      goto LABEL_70;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                            (UserServantEntity_o *)ClassGroupFilterKindList,
                            -1,
                            DispLimitCountStageSealAfterIndexZero,
                            0);
    this->fields.skillCategoryIdList = SkillCategoryIdList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
      (int32_t)SkillCategoryIdList,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_70;
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     this->fields.dispLimitCount,
                                     0);
    this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
      (int32_t)TreasureDeviceCategoryIdList,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
LABEL_57:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_71;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_71:
    sub_2213CE4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v43 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v43 || !IsUnSelectedAllTargetFilters && !v43 )
  {
    if ( !IsMatchEffectCategory && !v45 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v45 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_39:
  v21 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v20);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(0, method);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void EventServantFatigueListViewItem__ModifyItem(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

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
  EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(this, v9);
  EventServantFatigueListViewItem__ModifyLockItem(this, v10);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v11);
  EventServantFatigueListViewItem__ModifyPushItem(this, v12);
}


void EventServantFatigueListViewItem__ModifyLockItem(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsLock; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(0, method);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void EventServantFatigueListViewItem__ModifyPushItem(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_596AC72 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596AC72 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_2213CDC(SelfUserGame, v4);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v9 = v10;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v9, 0);
}


bool EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t *p_sortValue0; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 naturalAligment; // x11
  bool v16; // w0
  __int64 v17; // x8
  bool v18; // zf
  __int64 v19; // x9
  bool IsMatchIndividuality_38906088; // w0
  _BOOL4 isChoiceSort; // w9
  __int64 rarity; // x21
  __int64 v23; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v25; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v26; // x0
  __int64 v27; // x21
  __int64 v28; // x22
  __int64 v29; // x2
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  int64_t hpReinforceValue; // x2
  int64_t v34; // x20
  struct IconLabelInfo_o *v35; // x21
  int32_t friendshipMax; // w3
  int32_t v37; // w1
  int64_t priority; // x9
  __int64 v39; // x21
  int64_t v40; // x8
  int64_t v41; // x20
  __int64 v42; // x8
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct IconLabelInfo_o *v44; // x21
  int64_t friendship; // x2
  int64_t atkReinforceValue; // x2
  int32_t v47; // w2
  int64_t v48; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *v52; // x8
  __int64 v53; // x11
  struct ListViewManager_o *v54; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct UserServantEntity_o *v56; // x8
  __int64 v57; // x21
  __int64 v58; // x22
  const MethodInfo *v59; // x2
  __int64 v60; // x20
  __int64 v61; // x9
  int32_t v62; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_596AC73 & 1) == 0 )
  {
    sub_2213A60(&EventServantFatigueListViewManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596AC73 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  p_sortValue0 = &this->fields.sortValue0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = -1;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v10), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    isChoice = !this->fields.isChoice;
  if ( isChoice )
  {
    if ( !sort )
      goto LABEL_104;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10;
  }
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v9);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v13 = 30;
  }
  else
  {
    if ( !sort )
      goto LABEL_104;
    if ( !sort->fields.isSmartSort )
      goto LABEL_37;
    manager = (EventServantRecoveryFatigueItem_o **)sort->fields.manager;
    if ( manager )
    {
      naturalAligment = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment;
      if ( LOBYTE((*manager)[2].klass) >= (unsigned int)naturalAligment )
      {
        if ( *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.emptySprite + naturalAligment - 1) != EventServantFatigueListViewManager_TypeInfo )
          manager = 0;
      }
      else
      {
        manager = 0;
      }
    }
    if ( this->fields.fatigueTime < 1 )
    {
      if ( !manager )
        goto LABEL_104;
      IsMatchIndividuality_38906088 = EventServantFatigueListViewItem__IsMatchIndividuality_38906088(
                                        this,
                                        manager[67],
                                        v12);
      v17 = -20;
      v18 = !IsMatchIndividuality_38906088;
      v19 = -10;
    }
    else
    {
      if ( !manager )
        goto LABEL_104;
      v16 = EventServantFatigueListViewItem__IsMatchIndividuality_38906088(this, manager[67], v12);
      v17 = 10;
      v18 = !v16;
      v19 = 20;
    }
    if ( !v18 )
      v17 = v19;
    isChoiceSort = sort->fields.isChoiceSort;
    *p_sortValue0 = v17;
    if ( isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_37;
    v13 = -30;
  }
  *p_sortValue0 = v13;
LABEL_37:
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt )
    goto LABEL_104;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0);
  IsBaseSvt = (int64_t)this->fields.userServantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !IsBaseSvt )
    goto LABEL_104;
  rarity = (unsigned int)this->fields.rarity;
  IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
  if ( !IsBaseSvt )
    goto LABEL_104;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_104;
  v25 = (__int64)*(int *)(IsBaseSvt + 208) << 16;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = v25 | (rarity << 48) | userServantEntity->fields.lv;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&v26->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v26, v9, v23);
  *(_QWORD *)&v67.fields.currentCryptoKey = v27;
  *(_QWORD *)&v67.fields.fakeValue = v28;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_104:
    sub_2213CDC(IsBaseSvt, v9);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_104;
      v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
      *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v65.fields.fakeValue = v31;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v29);
      v64 = v65;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v64, 0);
      v32 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v32 )
        goto LABEL_104;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_104;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v32->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_86;
    case 2:
      v48 = this->fields.rarity;
      goto LABEL_78;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      v41 = *(int *)(IsBaseSvt + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v41;
      goto LABEL_71;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 436);
      UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      v47 = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_104;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)IsBaseSvt, 33, v47, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      goto LABEL_86;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      v34 = *(int *)(IsBaseSvt + 412);
      v35 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v34;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v35 )
        goto LABEL_104;
      friendshipMax = IsBaseSvt;
      IsBaseSvt = (int64_t)v35;
      v37 = 3;
      goto LABEL_63;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      v34 = *(int *)(IsBaseSvt + 408);
      v44 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v34;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v44 )
        goto LABEL_104;
      friendshipMax = IsBaseSvt;
      IsBaseSvt = (int64_t)v44;
      v37 = 5;
LABEL_63:
      LODWORD(friendship) = v34;
      goto LABEL_85;
    case 7:
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_104;
      cost = servantEntity->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_104;
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_86;
    case 8:
      v48 = -this->fields.priority;
LABEL_78:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_99;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_104;
      friendshipMax = this->fields.friendshipMax;
      v37 = 32;
LABEL_85:
      IconLabelInfo__Set_47880948((IconLabelInfo_o *)IsBaseSvt, v37, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
      goto LABEL_86;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v52 = sort->fields.manager;
      if ( v52
        && (v53 = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment,
            v52->klass->_2.naturalAligment >= (unsigned int)v53) )
      {
        if ( (EventServantFatigueListViewManager_c *)v52->klass->_2.typeHierarchy[v53 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v54 = sort->fields.manager;
        else
          v54 = 0;
      }
      else
      {
        v54 = 0;
      }
      v56 = this->fields.userServantEntity;
      if ( !v56 )
        goto LABEL_104;
      v57 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
      v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v29);
      *(_QWORD *)&v68.fields.currentCryptoKey = v57;
      *(_QWORD *)&v68.fields.fakeValue = v58;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
      if ( !v54 )
        goto LABEL_104;
      amountSortValue = EventServantFatigueListViewManager__GetAmountSortValue(
                          (EventServantFatigueListViewManager_o *)v54,
                          IsBaseSvt,
                          v59);
      this->fields.amountSortValue = amountSortValue;
LABEL_96:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      v60 = this->fields.rarity;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_104;
      v61 = *(int *)(IsBaseSvt + 208);
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v48 = ((v60 << 32) + (amountSortValue << 48)) | v61;
LABEL_99:
      this->fields.sortValue1 = v48;
      if ( !IsBaseSvt )
        goto LABEL_104;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_101;
    case 0xF:
      hpReinforceValue = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hpReinforceValue;
      if ( !IsBaseSvt )
        goto LABEL_104;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)IsBaseSvt,
        44,
        hpReinforceValue,
        this->fields.nowMaxHpReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_86;
    case 0x10:
      atkReinforceValue = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = atkReinforceValue;
      if ( !IsBaseSvt )
        goto LABEL_104;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)IsBaseSvt,
        45,
        atkReinforceValue,
        this->fields.nowMaxAtkReinforceValue,
        0,
        0,
        0,
        0,
        0,
        0);
LABEL_86:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_101:
      v62 = *(_DWORD *)(IsBaseSvt + 400);
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_104;
      IconLabelInfo__Set_47880948(iconLabelInfo2, 2, v62, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_103:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_104;
      priority = this->fields.priority;
      v39 = (unsigned int)this->fields.rarity;
      this->fields.sortValue1B = *(int *)(IsBaseSvt + 400);
      this->fields.sortValue2 = priority;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_104;
      v40 = IsBaseSvt;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_104;
      v41 = *(int *)(IsBaseSvt + 400);
      v42 = ((__int64)*(int *)(v40 + 208) << 16) | (v39 << 48);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = v42 | v41;
LABEL_71:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_104;
      IconLabelInfo__Set_47880948(iconLabelInfo1, 2, v41, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_103;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void EventServantFatigueListViewItem__SetUserServantEntity(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

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
  EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(this, v9);
}


bool EventServantFatigueListViewItem__SwapChoice(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
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


bool EventServantFatigueListViewItem__SwapLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
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


void EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  void *userServantEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  DataManager_c *v13; // x0
  int v14; // w9
  __int64 v15; // x2
  struct ServantEntity_o *v16; // x8
  ServantLimitMaster_o *v17; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w21
  int32_t v22; // w9
  const MethodInfo_47A29F8 *v23; // x0
  int64_t v24; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_596AC79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AC79 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_20;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !this->fields.servantEntity )
    goto LABEL_20;
  v13 = DataManager_TypeInfo;
  v14 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.classId = this->fields.servantEntity->fields.classId;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(v13, method, v12);
  userServantEntity = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v16 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_20;
  v17 = (ServantLimitMaster_o *)userServantEntity;
  v18 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v15);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  userServantEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  v20 = this->fields.userServantEntity;
  if ( !v20 )
    goto LABEL_20;
  v21 = (int)userServantEntity;
  userServantEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                v20->fields.limitCount,
                                0);
  if ( !v17 )
    goto LABEL_20;
  userServantEntity = ServantLimitMaster__GetEntity(v17, v21, (int32_t)userServantEntity, 0);
  if ( !userServantEntity )
    goto LABEL_20;
  v22 = *((_DWORD *)userServantEntity + 6);
  v23 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.rarity = v22;
  userServantEntity = SingletonMonoBehaviour_object___get_Instance(v23);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = DataManager__GetMasterData_object_(
                        (DataManager_o *)userServantEntity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userServantEntity,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userServantEntity
    || (v24 = *((int *)userServantEntity + 13),
        userServantEntity = this->fields.userServantEntity,
        this->fields.priority = v24,
        this->fields.sortValue1B = v24,
        !userServantEntity)
    || (rarity = (unsigned int)this->fields.rarity,
        (userServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)userServantEntity, 0)) == 0)
    || (v26 = this->fields.userServantEntity) == 0 )
  {
LABEL_20:
    sub_2213CDC(userServantEntity, method);
  }
  this->fields.sortValue2 = ((__int64)*((int *)userServantEntity + 52) << 16) | (rarity << 48) | v26->fields.lv;
}


bool EventServantFatigueListViewItem___GetIsEventUpValShow_b__44_0(
        EventServantFatigueListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596AC7A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AC7A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v9 = Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  if ( !entity || !v9 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v9, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v14 = this->fields.userServantEntity;
  if ( !v14 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v14->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_2213CDC(Master_object, v6);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


int64_t EventServantFatigueListViewItem__get_FatigueTime(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


IconLabelInfo_o *EventServantFatigueListViewItem__get_IconInfo1(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *EventServantFatigueListViewItem__get_IconInfo2(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool EventServantFatigueListViewItem__get_IsBaseSvt(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventServantFatigueListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_596AC76 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596AC76 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_2213CDC(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v3->fields.baseUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v8 = v9;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v8, 0);
}


bool EventServantFatigueListViewItem__get_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool EventServantFatigueListViewItem__get_IsCanNotSelect(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool EventServantFatigueListViewItem__get_IsCanNotSelectPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_2213CDC(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0);
}


bool EventServantFatigueListViewItem__get_IsChoice(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool EventServantFatigueListViewItem__get_IsDispChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool EventServantFatigueListViewItem__get_IsDispLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool EventServantFatigueListViewItem__get_IsFatigueRecover(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigueRecover;
}


bool EventServantFatigueListViewItem__get_IsHeroineSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool EventServantFatigueListViewItem__get_IsLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool EventServantFatigueListViewItem__get_IsParty(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool EventServantFatigueListViewItem__get_IsPush(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool EventServantFatigueListViewItem__get_IsSwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool EventServantFatigueListViewItem__get_IsSwapLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t EventServantFatigueListViewItem__get_Rarity(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *EventServantFatigueListViewItem__get_ServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *EventServantFatigueListViewItem__get_UserServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}