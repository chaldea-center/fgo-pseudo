void EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int64_t Master_object; // x0
  __int64 v35; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x25
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x2
  DataManager_c *v45; // x0
  __int64 v46; // x2
  struct ServantEntity_o *v47; // x8
  ServantLimitMaster_o *v48; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v49; // x28
  __int64 v50; // x26
  __int64 v51; // x27
  int32_t v52; // w0
  __int64 v53; // x8
  int32_t v54; // w24
  int32_t v55; // w8
  bool IsLock; // w8
  __int64 v57; // x2
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q1
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  __int64 v62; // x24
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  _BOOL4 v69; // w8
  const MethodInfo *v70; // x1
  bool v71; // w0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x2
  __int64 v79; // x2
  struct UserServantEntity_o *v80; // x8
  UserServantCollectionMaster_o *v81; // x22
  __int128 v82; // q0
  __int128 v83; // q1
  int v84; // w8
  __int64 v85; // x2
  struct UserServantEntity_o *v86; // x8
  int64_t v87; // x23
  __int64 v88; // x24
  __int64 v89; // x25
  __int64 v90; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v92; // x2
  __int64 v93; // x23
  int64_t v94; // x22
  unsigned __int64 i; // x24
  __int64 v96; // x25
  __int64 v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v98; // x27
  unsigned int v99; // w29
  __int64 v100; // x8
  unsigned int v101; // w9
  __int64 v102; // x8
  struct UserServantEntity_o *v103; // x9
  __int128 v104; // q0
  __int128 v105; // q1
  __int64 v106; // x28
  int v107; // w9
  int v108; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v110; // x8
  __int64 rarity; // x22
  __int64 v112; // x2
  struct UserServantEntity_o *v113; // x8
  __int64 v114; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v115; // x0
  __int64 v116; // x21
  __int64 v117; // x22
  __int64 v118; // x2
  struct UserServantEntity_o *v119; // x8
  __int128 v120; // q0
  __int128 v121; // q1
  int v122; // w8
  int64_t v123; // x8
  struct UserServantEntity_o *v124; // x8
  __int64 v125; // x22
  __int64 v126; // x23
  int32_t v127; // w0
  const MethodInfo *v128; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_593251E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_593251E = 1;
  }
  v13 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  if ( !userServantEntity )
    goto LABEL_93;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !this->fields.servantEntity )
    goto LABEL_93;
  v45 = DataManager_TypeInfo;
  this->fields.classId = this->fields.servantEntity->fields.classId;
  if ( !*(&v45->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v45, v35, v44);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v47 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_93;
  v48 = (ServantLimitMaster_o *)Master_object;
  v49 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v50 = *(_QWORD *)&v47->fields.id.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v47->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v46);
  *(_QWORD *)&v136.fields.currentCryptoKey = v50;
  *(_QWORD *)&v136.fields.fakeValue = v51;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v136, 0);
  v53 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v137.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  v54 = v52;
  *(_QWORD *)&v137.fields.currentCryptoKey = v53;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v137, 0);
  if ( !v48 )
    goto LABEL_93;
  Master_object = (int64_t)ServantLimitMaster__GetEntity(v48, v54, Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  v55 = *(_DWORD *)(Master_object + 24);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.isParty = 0;
  this->fields.rarity = v55;
  if ( !Master_object )
    goto LABEL_93;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Master_object )
    goto LABEL_93;
  Master_object = UserServantEntity__IsChoice((UserServantEntity_o *)Master_object, 0);
  v58 = this->fields.userServantEntity;
  this->fields.isChoice = Master_object & 1;
  if ( !v58 )
    goto LABEL_93;
  v59 = *(_OWORD *)&v58->fields.userId.fields.fakeValue;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v58->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v59;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v57);
  v134 = v135;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v134, 0) == 0;
  Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_93;
  v60 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
  v62 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v133.fields.fakeValue = v61;
  v69 = v62 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v133, 0) && !this->fields.isNpc;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  this->fields.isPush = v69;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetFortificationWorkItem,
    (int32_t)targetFortificationWorkItem,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.svtTypeSetInMaster = -1;
  v71 = EventFortificationListViewItem__CheckFortificationAppointment(this, v70);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v71;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_93;
  Master_object = UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0);
  if ( (Master_object & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_29;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v35, v78);
  Master_object = TutorialFlag__Get_47357952(126, 0);
  if ( (Master_object & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v124 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v125 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
  v126 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v78);
  *(_QWORD *)&v140.fields.currentCryptoKey = v125;
  *(_QWORD *)&v140.fields.fakeValue = v126;
  v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v140, 0);
  if ( EventFortificationListViewItem__isNotSelect(this, v127, v128) )
    goto LABEL_30;
LABEL_31:
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v80 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v81 = (UserServantCollectionMaster_o *)Master_object;
  v82 = *(_OWORD *)&v80->fields.userId.fields.currentCryptoKey;
  v83 = *(_OWORD *)&v80->fields.userId.fields.fakeValue;
  v84 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v135.fields.currentCryptoKey = v82;
  *(_OWORD *)&v135.fields.fakeValue = v83;
  if ( !v84 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v79);
  v132 = v135;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v132, 0);
  v86 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v87 = Master_object;
  v88 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
  v89 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v85);
  *(_QWORD *)&v138.fields.currentCryptoKey = v88;
  *(_QWORD *)&v138.fields.fakeValue = v89;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v138, 0);
  if ( !v81 )
    goto LABEL_93;
  Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v81, v87, Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Master_object,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v90);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35, v90);
    Master_object = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_93;
  Master_object = (int64_t)UserDeckMaster__getDeckList(
                             (UserDeckMaster_o *)MasterData_object,
                             *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                             0);
  if ( !Master_object )
    goto LABEL_93;
  v93 = *(unsigned int *)(Master_object + 24);
  v94 = Master_object;
  if ( (int)v93 < 1 )
    goto LABEL_69;
  for ( i = 0; i != v93; ++i )
  {
    if ( i >= *(unsigned int *)(v94 + 24) )
LABEL_94:
      sub_21FFED4(Master_object);
    v96 = *(_QWORD *)(v94 + 8 * i + 32);
    if ( !v96 )
      goto LABEL_93;
    v97 = *(_QWORD *)(v96 + 48);
    if ( !v97 )
      goto LABEL_93;
    v98 = v49;
    v99 = 0;
    while ( 1 )
    {
      v100 = *(_QWORD *)(v97 + 16);
      if ( !v100 )
        goto LABEL_93;
      v101 = *(_DWORD *)(v100 + 24);
      if ( (int)v99 >= (int)v101 )
        break;
      if ( v99 >= v101 )
        goto LABEL_94;
      v102 = *(_QWORD *)(v100 + 8LL * (int)v99 + 32);
      if ( !v102 )
        goto LABEL_93;
      v103 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_93;
      v104 = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
      v105 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
      v106 = *(_QWORD *)(v102 + 24);
      v107 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v135.fields.currentCryptoKey = v104;
      *(_OWORD *)&v135.fields.fakeValue = v105;
      if ( !v107 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v92);
      v131 = v135;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v131, 0);
      if ( v106 == Master_object )
      {
        v49 = v98;
        this->fields.isParty = 1;
        goto LABEL_69;
      }
      v97 = *(_QWORD *)(v96 + 48);
      ++v99;
      if ( !v97 )
        goto LABEL_93;
    }
    v49 = v98;
    if ( this->fields.isParty )
      break;
  }
LABEL_69:
  Master_object = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v108 = *(_DWORD *)(Master_object + 420);
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v108;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v92);
    Master_object = (int64_t)this->fields.userServantEntity;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v108;
    if ( !Master_object )
      goto LABEL_93;
  }
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 416);
  UserServantEntity__GetAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_93;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_93;
  v110 = *(int *)(Master_object + 52);
  Master_object = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v110;
  this->fields.sortValue1B = v110;
  if ( !Master_object )
    goto LABEL_93;
  rarity = (unsigned int)this->fields.rarity;
  Master_object = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_93;
  v113 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_93;
  v114 = *(int *)(Master_object + 208);
  v115 = *v49;
  this->fields.sortValue2 = (v114 << 16) | (rarity << 48) | v113->fields.lv;
  v116 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
  v117 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
  if ( !*(&v115->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v115, v35, v112);
  *(_QWORD *)&v139.fields.currentCryptoKey = v116;
  *(_QWORD *)&v139.fields.fakeValue = v117;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v139, 0);
  v119 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v119 )
    goto LABEL_93;
  v120 = *(_OWORD *)&v119->fields.id.fields.currentCryptoKey;
  v121 = *(_OWORD *)&v119->fields.id.fields.fakeValue;
  v122 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v135.fields.currentCryptoKey = v120;
  *(_OWORD *)&v135.fields.fakeValue = v121;
  if ( !v122 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v118);
  v130 = v135;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v130, 0);
  Master_object = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v123;
  this->fields.amountSortValue = -1;
  if ( !Master_object
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0), (Master_object = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_93:
    sub_21FFECC(Master_object, v35);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
}


bool EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x0
  struct System_String_o *TeamName; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_String_o *Name; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool v21; // w24
  EventFortificationMaster_o *v22; // x21
  char v23; // w8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x25
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_object__bool__o *v28; // x23
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_String_o *v42; // x1
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_String_o *v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  _BOOL8 v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+0h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v62; // [xsp+18h] [xbp-98h] BYREF
  EventFortificationEntity_o *v63; // [xsp+20h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5932524 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_21FFC50(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__);
    sub_21FFC50(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932524 = 1;
  }
  userEventFortificationList = 0;
  memset(&v65, 0, sizeof(v65));
  v63 = 0;
  entity = 0;
  v62 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0);
      this->fields.myTeamName = TeamName;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.myTeamName,
        (int32_t)TeamName,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0);
        this->fields.myDetailName = Name;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.myDetailName,
          (int32_t)Name,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          v21 = 1;
          this->fields.myWorkType = EventFortificationWorkItem__get_WorkType(
                                      (EventFortificationWorkItem_o *)Instance,
                                      0);
          this->fields.svtTypeSetInMaster = 1;
          return v21;
        }
      }
    }
LABEL_35:
    sub_21FFECC(Instance, v4);
  }
  v22 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  v65 = v61;
  v23 = 0;
  v61.fields._list = 0;
  *(_QWORD *)&v61.fields._index = &v65;
LABEL_16:
  v21 = v23;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_21FFECC(v24, v25);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v65.fields._current[2].monitor;
    v28 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__,
      0);
    v29 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            monitor,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v31 = v29;
    if ( v29 )
    {
      if ( !MasterData_object )
        sub_21FFECC(v29, v30);
      v32 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v29[1].klass,
              0);
      if ( v32 )
      {
        if ( !v22 )
          sub_21FFECC(v32, v33);
        v34 = EventFortificationMaster__TryGetEntity(v22, &v63, this->fields.eventId, HIDWORD(current[1].monitor), 0);
        if ( v34 )
        {
          if ( !v63 )
            sub_21FFECC(v34, v35);
          v42 = v63->fields.name;
          this->fields.myTeamName = v42;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.myTeamName,
            (int32_t)v42,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          if ( !entity )
            sub_21FFECC(v43, v44);
          v51 = entity->fields.name;
          this->fields.myDetailName = v51;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.myDetailName,
            (int32_t)v51,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          if ( !v63 )
            sub_21FFECC(v52, v53);
          this->fields.myWorkType = v63->fields.workType;
          v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v54 )
            sub_21FFECC(0, v55);
          v56 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v54,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v56 )
            sub_21FFECC(0, v57);
          v58 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v56,
                  &v62,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v31[1].klass,
                  0);
          v23 = 1;
          if ( v58 )
          {
            if ( !v62 )
              sub_21FFECC(v58, v59);
            this->fields.svtTypeSetInMaster = v62->fields.type;
            v23 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v21;
}


bool EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  bool result; // w0
  __int64 bonusKindId; // x2
  unsigned int bonusKind2Id; // w9
  __int64 v9; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_5932522 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_21FFC50(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932522 = 1;
  }
  if ( !sort )
    goto LABEL_40;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( (unsigned int)bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = (unsigned int)v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( (_DWORD)bonusKindId == bonusKind2Id )
      {
LABEL_12:
        if ( bonusKind2 <= 3 )
        {
          if ( bonusKind2 )
          {
            if ( bonusKind2 == 3 )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
              this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              userServantEntity = v4->fields.userServantEntity;
              if ( userServantEntity )
              {
                v11 = (EventCampaignMaster_o *)this;
                v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
                v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v9);
                *(_QWORD *)&v17.fields.currentCryptoKey = v12;
                *(_QWORD *)&v17.fields.fakeValue = v13;
                this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                             v17,
                                                             0);
                if ( v11 )
                  return EventCampaignMaster__IsEnableServant(v11, (int32_t)this, v4->fields.bonusKindId, 0);
              }
              goto LABEL_40;
            }
          }
          else
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_40;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (EventFortificationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                         0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( EntitiesByGroupId )
              {
                if ( EntitiesByGroupId->fields._size >= 2 )
                {
                  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventGroupEntity__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v16,
                    (Il2CppObject *)v4,
                    Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__,
                    0);
                  return BasicHelper__Any_object_(
                           (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                           (System_Func_T__bool__o *)v16,
                           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventGroupEntity___);
                }
                return 0;
              }
              goto LABEL_40;
            }
          }
        }
        else
        {
          if ( (unsigned int)(bonusKind2 - 4) < 2 )
          {
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( this )
              return UserServantEntity__getEventUpVal(
                       (UserServantEntity_o *)this,
                       v4->fields.setupInfo,
                       bonusKindId,
                       0,
                       0);
LABEL_40:
            sub_21FFECC(this, sort);
          }
          if ( bonusKind2 == 7 )
          {
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( this )
            {
              this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
              v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
              if ( v14 )
              {
                if ( this )
                  return ServantFilterMaster__IsEnableServant(
                           (ServantFilterMaster_o *)this,
                           v14[5],
                           v4->fields.bonusKindId,
                           0);
              }
            }
            goto LABEL_40;
          }
        }
        return 0;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    goto LABEL_12;
  }
  return result;
}


void EventFortificationListViewItem__InitFortificationItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, method);
}


bool EventFortificationListViewItem__IsMatchServantFilter(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
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

  if ( (byte_5932521 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_5932521 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_40;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_40;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    sub_21FFED4(ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  return isChoice;
}


void EventFortificationListViewItem__ModifyChoiceItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_21FFECC(0, method);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
  this->fields.isChoice = IsChoice;
}


void EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
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
  const MethodInfo *v13; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewItem__UpdateServantInfoAndSortInfo(this, v9);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v10);
  EventFortificationListViewItem__ModifyLockItem(this, v11);
  EventFortificationListViewItem__ModifyChoiceItem(this, v12);
  EventFortificationListViewItem__ModifyPushItem(this, v13);
}


void EventFortificationListViewItem__ModifyLockItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsLock; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_21FFECC(0, method);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
  this->fields.isLock = IsLock;
}


void EventFortificationListViewItem__ModifyPushItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  bool v9; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_593251F & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593251F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_21FFECC(SelfUserGame, v4);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v10 = v11;
  v9 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v10, 0)
    && !this->fields.isNpc;
  this->fields.isPush = v9;
}


bool EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t *p_sortValue0; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int64_t IsBaseSvt; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v12; // w9
  __int64 rarity; // x21
  __int64 v14; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v16; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v17; // x0
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w0
  __int64 v21; // x2
  int32_t sortKind; // w8
  int64_t v23; // x9
  int64_t v24; // x20
  IconLabelInfo_o *v25; // x21
  int64_t friendship; // x2
  int64_t v27; // x20
  struct IconLabelInfo_o *v28; // x21
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v30; // w1
  int64_t atkReinforceValue; // x2
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t v37; // w2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v41; // x20
  int64_t v42; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x21
  __int64 v48; // x22
  const MethodInfo *v49; // x2
  __int64 v50; // x20
  __int64 v51; // x9
  int32_t v52; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_5932520 & 1) == 0 )
  {
    sub_21FFC50(&EventFortificationListViewManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932520 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  p_sortValue0 = &this->fields.sortValue0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = -1;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v10), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v12 = !this->fields.isChoice;
  else
    v12 = this->fields.isChoice;
  if ( v12 )
  {
    if ( !sort )
      goto LABEL_98;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10;
  }
  else if ( !sort )
  {
    goto LABEL_98;
  }
  if ( sort->fields.isSmartSort )
  {
    if ( isChoice && sort->fields.isChoiceSort )
      this->fields.sortValue0B = 10;
    if ( this->fields.isCanNotSelect )
      *p_sortValue0 = -30;
  }
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0),
        IsBaseSvt = (int64_t)this->fields.userServantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !IsBaseSvt)
    || (rarity = (unsigned int)this->fields.rarity,
        (IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0)) == 0)
    || (userServantEntity = this->fields.userServantEntity) == 0 )
  {
LABEL_98:
    sub_21FFECC(IsBaseSvt, v9);
  }
  v16 = (__int64)*(int *)(IsBaseSvt + 208) << 16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = v16 | (rarity << 48) | userServantEntity->fields.lv;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&v17->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v17, v9, v14);
  *(_QWORD *)&v57.fields.currentCryptoKey = v18;
  *(_QWORD *)&v57.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0);
  sortKind = sort->fields.sortKind;
  v23 = v20;
  IsBaseSvt = 1;
  this->fields.sortValue2B = v23;
  if ( sortKind > 6 )
  {
    if ( sortKind <= 13 )
    {
      switch ( sortKind )
      {
        case 7:
          servantEntity = this->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_98;
          cost = servantEntity->fields.cost;
          IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = cost;
          if ( !IsBaseSvt )
            goto LABEL_98;
          IconLabelInfo__Set_47932852((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
          break;
        case 8:
          v42 = -this->fields.priority;
          goto LABEL_71;
        case 10:
          friendship = this->fields.friendship;
          IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
          this->fields.sortValue1 = friendship;
          if ( !IsBaseSvt )
            goto LABEL_98;
          IconLabelInfo__Set_47932852(
            (IconLabelInfo_o *)IsBaseSvt,
            32,
            friendship,
            this->fields.friendshipMax,
            0,
            0,
            0,
            0,
            0,
            0);
          break;
        default:
          return IsBaseSvt;
      }
LABEL_79:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_94:
      v52 = *(_DWORD *)(IsBaseSvt + 400);
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( iconLabelInfo2 )
      {
        IconLabelInfo__Set_47932852(iconLabelInfo2, 2, v52, IsBaseSvt, 0, 0, 0, 0, 0, 0);
        goto LABEL_96;
      }
      goto LABEL_98;
    }
    if ( sortKind == 14 )
    {
      amountSortValue = this->fields.amountSortValue;
      if ( amountSortValue < 0 )
      {
        manager = sort->fields.manager;
        if ( manager
          && (naturalAligment = EventFortificationListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewManager_TypeInfo )
            v41 = sort->fields.manager;
          else
            v41 = 0;
        }
        else
        {
          v41 = 0;
        }
        v46 = this->fields.userServantEntity;
        if ( !v46 )
          goto LABEL_98;
        v47 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v21);
        *(_QWORD *)&v58.fields.currentCryptoKey = v47;
        *(_QWORD *)&v58.fields.fakeValue = v48;
        IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
        if ( !v41 )
          goto LABEL_98;
        amountSortValue = EventFortificationListViewManager__GetAmountSortValue(
                            (EventFortificationListViewManager_o *)v41,
                            IsBaseSvt,
                            v49);
        this->fields.amountSortValue = amountSortValue;
      }
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v50 = this->fields.rarity;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_98;
      v51 = *(int *)(IsBaseSvt + 208);
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v42 = ((v50 << 32) + (amountSortValue << 48)) | v51;
      goto LABEL_92;
    }
    if ( sortKind != 15 )
    {
      if ( sortKind != 16 )
        return IsBaseSvt;
      atkReinforceValue = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = atkReinforceValue;
      if ( !IsBaseSvt )
        goto LABEL_98;
      IconLabelInfo__Set_47932852(
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
      goto LABEL_79;
    }
    hpReinforceValue = this->fields.hpReinforceValue;
    IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
    this->fields.sortValue1 = hpReinforceValue;
    if ( !IsBaseSvt )
      goto LABEL_98;
    nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
    v30 = 44;
LABEL_78:
    IconLabelInfo__Set_47932852(
      (IconLabelInfo_o *)IsBaseSvt,
      v30,
      hpReinforceValue,
      nowMaxHpReinforceValue,
      0,
      0,
      0,
      0,
      0,
      0);
    goto LABEL_79;
  }
  if ( sortKind > 3 )
  {
    if ( sortKind == 4 )
    {
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 436);
      UserServantEntity__getTreasureDeviceInfo_50128532((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      v37 = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_98;
      IconLabelInfo__Set_47932852((IconLabelInfo_o *)IsBaseSvt, 33, v37, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      goto LABEL_79;
    }
    if ( sortKind == 5 )
    {
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v27 = *(int *)(IsBaseSvt + 412);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v27;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_98;
      nowMaxHpReinforceValue = IsBaseSvt;
      IsBaseSvt = (int64_t)iconLabelInfo1;
      v30 = 3;
    }
    else
    {
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v27 = *(int *)(IsBaseSvt + 408);
      v28 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v27;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v28 )
        goto LABEL_98;
      nowMaxHpReinforceValue = IsBaseSvt;
      IsBaseSvt = (int64_t)v28;
      v30 = 5;
    }
    LODWORD(hpReinforceValue) = v27;
    goto LABEL_78;
  }
  switch ( sortKind )
  {
    case 1:
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_98;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v33;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v21);
      v54 = v55;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
      v34 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v34 )
        goto LABEL_98;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_98;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v34->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_79;
    case 2:
      v42 = this->fields.rarity;
LABEL_71:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
LABEL_92:
      this->fields.sortValue1 = v42;
      if ( !IsBaseSvt )
        goto LABEL_98;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_94;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( IsBaseSvt )
      {
        v24 = *(int *)(IsBaseSvt + 400);
        v25 = this->fields.iconLabelInfo1;
        this->fields.sortValue1 = v24;
        IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
        if ( v25 )
        {
          IconLabelInfo__Set_47932852(v25, 2, v24, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_96:
          LOBYTE(IsBaseSvt) = 1;
          return IsBaseSvt;
        }
      }
      goto LABEL_98;
  }
  return IsBaseSvt;
}


void EventFortificationListViewItem__SetUserServantEntity(
        EventFortificationListViewItem_o *this,
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

  this->fields.userServantEntity = userServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventFortificationListViewItem__UpdateServantInfoAndSortInfo(this, v9);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v10);
}


bool EventFortificationListViewItem__SwapChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
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


bool EventFortificationListViewItem__SwapLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
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


void EventFortificationListViewItem__UpdateServantInfoAndSortInfo(
        EventFortificationListViewItem_o *this,
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
  const MethodInfo_476E8C0 *v23; // x0
  int64_t v24; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_5932526 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932526 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_20;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_21FFBF4(
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
  userServantEntity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
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
  userServantEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
  v20 = this->fields.userServantEntity;
  if ( !v20 )
    goto LABEL_20;
  v21 = (int)userServantEntity;
  userServantEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                v20->fields.limitCount,
                                0);
  if ( !v17 )
    goto LABEL_20;
  userServantEntity = ServantLimitMaster__GetEntity(v17, v21, (int32_t)userServantEntity, 0);
  if ( !userServantEntity )
    goto LABEL_20;
  v22 = *((_DWORD *)userServantEntity + 6);
  v23 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.rarity = v22;
  userServantEntity = SingletonMonoBehaviour_object___get_Instance(v23);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = DataManager__GetMasterData_object_(
                        (DataManager_o *)userServantEntity,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)userServantEntity,
                        this->fields.classId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    sub_21FFECC(userServantEntity, method);
  }
  this->fields.sortValue2 = ((__int64)*((int *)userServantEntity + 52) << 16) | (rarity << 48) | v26->fields.lv;
}


bool EventFortificationListViewItem___CheckFortificationAppointment_b__104_0(
        EventFortificationListViewItem_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t userSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_5932528 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932528 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0 )
    sub_21FFECC(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, info, method);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v9, 0);
}


bool EventFortificationListViewItem___GetIsEventUpValShow_b__44_0(
        EventFortificationListViewItem_o *this,
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

  if ( (byte_5932527 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932527 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
  if ( !entity || !v9 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v9, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_21FFECC(Master_object, v6);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


int32_t EventFortificationListViewItem__get_AddPoint(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationDataLogic__CalculationGetPoint(this->fields.userServantEntity, this->fields.eventId, v2);
}


int32_t EventFortificationListViewItem__get_EventId(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


IconLabelInfo_o *EventFortificationListViewItem__get_IconInfo1(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *EventFortificationListViewItem__get_IconInfo2(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool EventFortificationListViewItem__get_IsAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAppointment;
}


bool EventFortificationListViewItem__get_IsBaseSvt(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventFortificationListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_5932523 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932523 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_21FFECC(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v3->fields.baseUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v8 = v9;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v8, 0);
}


bool EventFortificationListViewItem__get_IsCanNotLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool EventFortificationListViewItem__get_IsCanNotSelect(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool EventFortificationListViewItem__get_IsCanNotSelectPush(
        EventFortificationListViewItem_o *this,
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
    sub_21FFECC(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0);
}


bool EventFortificationListViewItem__get_IsChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool EventFortificationListViewItem__get_IsDispChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool EventFortificationListViewItem__get_IsDispLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool EventFortificationListViewItem__get_IsHeroineSvt(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool EventFortificationListViewItem__get_IsLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool EventFortificationListViewItem__get_IsNpc(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool EventFortificationListViewItem__get_IsParty(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool EventFortificationListViewItem__get_IsPush(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool EventFortificationListViewItem__get_IsSwapChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool EventFortificationListViewItem__get_IsSwapLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


System_String_o *EventFortificationListViewItem__get_MyDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myDetailName;
}


System_String_o *EventFortificationListViewItem__get_MyTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myTeamName;
}


int32_t EventFortificationListViewItem__get_MyWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myWorkType;
}


ServantEntity_o *EventFortificationListViewItem__get_ServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t EventFortificationListViewItem__get_SvtTypeDataSetInMaster(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtTypeSetInMaster;
}


System_String_o *EventFortificationListViewItem__get_TargetDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_21FFECC(0, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0);
}


System_String_o *EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_21FFECC(0, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0);
}


int32_t EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_21FFECC(0, method);
  return EventFortificationWorkItem__get_WorkType(targetFortificationWorkItem, 0);
}


UserServantEntity_o *EventFortificationListViewItem__get_UserServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


bool EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x21
  _BOOL8 v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Func_object__bool__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  EventFortificationSvtMaster_o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  bool v28; // w21
  Il2CppObject *v29; // x22
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w24
  __int64 FortificationIdx; // x0
  __int64 v33; // x1
  struct EventFortificationWorkItem_o *v34; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_5932525 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_21FFC50(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_21FFC50(&Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__);
    sub_21FFC50(&EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
    byte_5932525 = 1;
  }
  eventFortificationSvtList = 0;
  memset(&v36, 0, sizeof(v36));
  v5 = sub_21FFEBC(EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_34;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0) )
    return 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v36 = v35;
  v35.fields._list = 0;
  *(_QWORD *)&v35.fields._index = &v36;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_21FFECC(v10, 0);
    if ( !HIDWORD(v36.fields._current[1].monitor) )
    {
      if ( !v9
        || (items = v9->fields._items,
            v19 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_21FFECC(v10, current);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          current,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)current, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v23 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__,
    0);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v24,
                                                     (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_34:
    sub_21FFECC(Master_object, v7);
  v25 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v36 = v35;
  v35.fields._list = 0;
  *(_QWORD *)&v35.fields._index = &v36;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    v28 = v26;
    if ( !v26 )
      break;
    v29 = v36.fields._current;
    if ( !v36.fields._current )
      sub_21FFECC(v26, v27);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_21FFECC(0, v27);
    klass_high = HIDWORD(v36.fields._current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v34 = this->fields.targetFortificationWorkItem;
      if ( !v34 )
        sub_21FFECC(FortificationIdx, v33);
      if ( LODWORD(v29[1].monitor) == v34->fields.position )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return !v28 && SLODWORD(v25->fields._MasterName_k__BackingField) > 0;
}


void EventFortificationListViewItem__set_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void EventFortificationListViewItem___c__DisplayClass105_0___ctor(
        EventFortificationListViewItem___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationListViewItem___c__DisplayClass105_0___isNotSelect_b__0(
        EventFortificationListViewItem___c__DisplayClass105_0_o *this,
        EventFortificationSvtEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.svtId == this->fields.svtId;
}