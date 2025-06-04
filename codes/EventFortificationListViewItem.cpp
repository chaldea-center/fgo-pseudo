void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_38DFD48 **v7; // x27
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  IconLabelInfo_o *v26; // x20
  IconLabelInfo_o *v27; // x21
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  __int64 v30; // x1
  struct UserServantEntity_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v32; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x24
  __int64 v34; // x25
  __int64 v35; // x26
  struct UserServantEntity_o *v36; // x8
  ServantEntity_o *servantEntity; // x24
  UserServantEntity_o *v38; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v40; // x8
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  __int64 v45; // x24
  bool v46; // w8
  const MethodInfo *v47; // x1
  bool v48; // w0
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q0
  UserServantCollectionMaster_o *v51; // x22
  struct UserServantEntity_o *v52; // x8
  int64_t v53; // x23
  __int64 v54; // x24
  __int64 v55; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x23
  __int64 v60; // x22
  unsigned int v61; // w24
  __int64 v62; // x25
  __int64 v63; // x8
  const MethodInfo_38DFD48 **v64; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v65; // x27
  unsigned int v66; // w29
  __int64 v67; // x8
  unsigned int v68; // w9
  __int64 v69; // x8
  struct UserServantEntity_o *v70; // x9
  __int128 v71; // q0
  __int64 v72; // x28
  int v73; // w22
  BalanceConfig_c *v74; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v76; // x23
  int64_t v77; // x8
  struct ServantEntity_o *v78; // x9
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x21
  __int64 v81; // x22
  struct UserServantEntity_o *v82; // x8
  __int64 v83; // x22
  __int64 v84; // x23
  int32_t v85; // w0
  const MethodInfo *v86; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  v7 = (const MethodInfo_38DFD48 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4AFC48B & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v20);
    sub_1BC3008(&NetworkManager_TypeInfo, v21);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BC3008(&TutorialFlag_TypeInfo, v25);
    byte_4AFC48B = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1BC2FAC(&this->fields.iconLabelInfo1);
  v27 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo2 = v27;
  sub_1BC2FAC(&this->fields.iconLabelInfo2);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BC2FAC(&this->fields.userServantEntity);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v32 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v35 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v35;
  *(_QWORD *)&v93.fields.fakeValue = v34;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v93, 0LL);
  if ( !v33 )
    goto LABEL_89;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v33,
                                                           Instance,
                                                           (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = sub_1BC2FAC(&this->fields.servantEntity);
  v36 = this->fields.userServantEntity;
  if ( !v36 )
    goto LABEL_89;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v36->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_89;
  this->fields.servantName = ServantEntity__getName(servantEntity, Instance, -1, 0, 0LL);
  sub_1BC2FAC(&this->fields.servantName);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_89;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0LL);
  v38 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v38 )
    goto LABEL_89;
  Rarity = UserServantEntity__getRarity(v38, 0LL);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_89;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v40 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v40 )
    goto LABEL_89;
  Instance = UserServantEntity__IsChoice(v40, 0LL);
  v41 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v41 )
    goto LABEL_89;
  v42 = *(_OWORD *)&v41->fields.userId.fields.fakeValue;
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v41->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v92.fields.fakeValue = v42;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v91 = v92;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v91, 0LL) == 0;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_89;
  v43 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
  v45 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v90.fields.fakeValue = v44;
  v46 = v45 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v90, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v46;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1BC2FAC(&this->fields.targetFortificationWorkItem);
  this->fields.svtTypeSetInMaster = -1;
  v48 = EventFortificationListViewItem__CheckFortificationAppointment(this, v47);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v48;
  sub_1BC2FAC(&this->fields.setupInfo);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_89;
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_29;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = TutorialFlag__Get_39466584(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v84 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
  v83 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v84;
  *(_QWORD *)&v96.fields.fakeValue = v83;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v96, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v85, v86) )
    goto LABEL_30;
LABEL_31:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v49 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v50 = *(_OWORD *)&v49->fields.userId.fields.fakeValue;
  v51 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v49->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v92.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v89 = v92;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v89, 0LL);
  v52 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v53 = Instance;
  v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = v55;
  *(_QWORD *)&v94.fields.fakeValue = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v94, 0LL);
  if ( !v51 )
    goto LABEL_89;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v51, v53, Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v30);
    byte_4AFC1F1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_89;
  Instance = (__int64)UserDeckMaster__getDeckList(
                        (UserDeckMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        0LL);
  if ( !Instance )
    goto LABEL_89;
  v59 = *(_QWORD *)(Instance + 24);
  v60 = Instance;
  if ( (int)v59 >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v60 + 8LL * (int)v61 + 32);
      if ( !v62 )
        break;
      v63 = *(_QWORD *)(v62 + 48);
      if ( !v63 )
        break;
      v64 = v7;
      v65 = v32;
      v66 = 0;
      while ( 1 )
      {
        v67 = *(_QWORD *)(v63 + 16);
        if ( !v67 )
          goto LABEL_89;
        v68 = *(_DWORD *)(v67 + 24);
        if ( (int)v66 >= (int)v68 )
          break;
        if ( v66 >= v68 )
          goto LABEL_67;
        v69 = *(_QWORD *)(v67 + 8LL * (int)v66 + 32);
        if ( !v69 )
          goto LABEL_89;
        v70 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_89;
        v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
        v72 = *(_QWORD *)(v69 + 24);
        *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v92.fields.fakeValue = v71;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v88 = v92;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v88, 0LL);
        if ( v72 == Instance )
        {
          v32 = v65;
          v7 = v64;
          this->fields.isParty = 1;
          goto LABEL_69;
        }
        v63 = *(_QWORD *)(v62 + 48);
        ++v66;
        if ( !v63 )
          goto LABEL_89;
      }
      v32 = v65;
      v7 = v64;
      if ( this->fields.isParty )
        goto LABEL_69;
      if ( ++v61 == (_DWORD)v59 )
        goto LABEL_69;
      if ( v61 >= *(_DWORD *)(v60 + 24) )
LABEL_67:
        sub_1BC326C(Instance, v30, v57, v58);
    }
LABEL_89:
    sub_1BC3264(Instance, v30);
  }
LABEL_69:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  v73 = *(_DWORD *)(Instance + 276);
  v74 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v74 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v74->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v73;
  if ( !Instance )
    goto LABEL_89;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v7);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_89;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_89;
  v76 = Instance;
  this->fields.className = *(struct System_String_o **)(Instance + 24);
  Instance = sub_1BC2FAC(&this->fields.className);
  v77 = *(int *)(v76 + 52);
  v78 = this->fields.servantEntity;
  this->fields.priority = v77;
  this->fields.sortValue1B = v77;
  if ( !v78 )
    goto LABEL_89;
  v79 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_89;
  this->fields.sortValue2 = ((__int64)v78->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v79->fields.lv;
  v81 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
  if ( !(*v32)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v32);
  *(_QWORD *)&v95.fields.currentCryptoKey = v81;
  *(_QWORD *)&v95.fields.fakeValue = v80;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v95, 0LL);
  Instance = (__int64)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_89;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_89;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  bool v21; // w26
  EventFortificationMaster_o *v22; // x21
  char v23; // w8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v28; // x25
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x24
  _BOOL8 v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  struct System_String_o **p_myDetailName; // [xsp+0h] [xbp-C0h]
  struct System_String_o **p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v50; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v51; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4AFC492 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__, v9);
    sub_1BC3008(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v10);
    sub_1BC3008(&System_Func_SetSvtInfo__bool__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AFC492 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v53, 0, sizeof(v53));
  v51 = 0LL;
  entity = 0LL;
  v50 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v17 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    this->fields.myTeamName = EventFortificationListViewItem__get_TargetTeamName(this, v15);
    sub_1BC2FAC(&this->fields.myTeamName);
    this->fields.myDetailName = EventFortificationListViewItem__get_TargetDetailName(this, v18);
    Instance = (DataManager_o *)sub_1BC2FAC(&this->fields.myDetailName);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      if ( eventFortificationEntity )
        LODWORD(eventFortificationEntity) = eventFortificationEntity->fields.workType;
      v21 = 1;
      this->fields.myWorkType = (int)eventFortificationEntity;
      this->fields.svtTypeSetInMaster = 1;
      return v21;
    }
LABEL_36:
    sub_1BC3264(Instance, v15);
  }
  v22 = (EventFortificationMaster_o *)v17;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = &this->fields.myDetailName;
  p_myTeamName = &this->fields.myTeamName;
  v23 = 0;
  v53 = v49;
LABEL_16:
  v21 = v23;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_1BC3264(v24, v25);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v53.fields._current[2].monitor;
    v28 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0LL);
    v29 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            monitor,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v31 = v29;
    if ( v29 )
    {
      if ( !MasterData_object )
        sub_1BC3264(v29, v30);
      v32 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v29[1].klass,
              0LL);
      if ( v32 )
      {
        if ( !v22 )
          sub_1BC3264(v32, v33);
        v34 = EventFortificationMaster__TryGetEntity(v22, &v51, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v34 )
        {
          if ( !v51 )
            sub_1BC3264(v34, v35);
          *p_myTeamName = v51->fields.name;
          v36 = sub_1BC2FAC(p_myTeamName);
          if ( !entity )
            sub_1BC3264(v36, v37);
          *p_myDetailName = entity->fields.name;
          v38 = sub_1BC2FAC(p_myDetailName);
          if ( !v51 )
            sub_1BC3264(v38, v39);
          this->fields.myWorkType = v51->fields.workType;
          v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v40 )
            sub_1BC3264(0LL, v41);
          v42 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v40,
                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v42 )
            sub_1BC3264(0LL, v43);
          v44 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v42,
                  &v50,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v31[1].klass,
                  0LL);
          v23 = 1;
          if ( v44 )
          {
            if ( !v50 )
              sub_1BC3264(v44, v45);
            this->fields.svtTypeSetInMaster = v50->fields.type;
            v23 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v21;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v19; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v4 = this;
  if ( (byte_4AFC48F & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__, v9);
    sub_1BC3008(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    this = (EventFortificationListViewItem_o *)sub_1BC3008(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v13);
    byte_4AFC48F = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1BC3264(this, sort);
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( bonusKindId == bonusKind2Id )
      {
LABEL_12:
        switch ( bonusKind2 )
        {
          case 0u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_36;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0LL);
            this = (EventFortificationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_23;
            if ( !EntitiesByGroupId )
              goto LABEL_36;
            if ( EntitiesByGroupId->fields._size < 2 )
            {
LABEL_23:
              result = 0;
            }
            else
            {
              v19 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v19,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v19,
                         (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_36;
            v21 = (EventCampaignMaster_o *)this;
            v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v25.fields.currentCryptoKey = v23;
            *(_QWORD *)&v25.fields.fakeValue = v22;
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                         v25,
                                                         0LL);
            if ( !v21 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v21, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal_42144440(
                   (UserServantEntity_o *)this,
                   v4->fields.setupInfo,
                   bonusKindId,
                   0LL,
                   0LL) )
            {
              return 1;
            }
            goto LABEL_23;
          case 7u:
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v24 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v24[5],
                     v4->fields.bonusKindId,
                     0LL);
          default:
            goto LABEL_23;
        }
        return result;
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


void __fastcall EventFortificationListViewItem__InitFortificationItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, method);
}


bool __fastcall EventFortificationListViewItem__IsMatchServantFilter(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  _BOOL4 v19; // w8

  if ( (byte_4AFC48E & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BC3008(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4AFC48E = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_40;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_40;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_1BC3264(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
    sub_1BC326C(ClassGroupFilterKindList, ClassGroupFilterKindList, v17, v18);
  ClassGroupFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v19 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v19;
}


void __fastcall EventFortificationListViewItem__ModifyChoiceItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BC3264(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1BC2FAC(&this->fields.userServantEntity);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v4);
  EventFortificationListViewItem__ModifyLockItem(this, v5);
  EventFortificationListViewItem__ModifyChoiceItem(this, v6);
  EventFortificationListViewItem__ModifyPushItem(this, v7);
}


void __fastcall EventFortificationListViewItem__ModifyLockItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  bool v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFC48C & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4AFC48C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1BC3264(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v9, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t *p_sortValue0; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int64_t IsBaseSvt; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v14; // w9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q1
  struct UserServantEntity_o *v21; // x8
  int64_t rarity; // x8
  int64_t v23; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v27; // w1
  int64_t v28; // x20
  IconLabelInfo_o *v29; // x21
  int32_t v30; // w3
  int32_t v31; // w1
  struct ServantEntity_o *v32; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v37; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  const MethodInfo *v42; // x2
  struct ServantEntity_o *v43; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4AFC48D & 1) == 0 )
  {
    sub_1BC3008(&EventFortificationListViewManager_TypeInfo, sort);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4AFC48D = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v9)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v8), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v12), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v14 = !this->fields.isChoice;
  else
    v14 = this->fields.isChoice;
  if ( v14 )
  {
    if ( !sort )
      goto LABEL_83;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  else if ( !sort )
  {
    goto LABEL_83;
  }
  if ( sort->fields.isSmartSort )
  {
    if ( isChoice && sort->fields.isChoiceSort )
      this->fields.sortValue0B = 10LL;
    if ( this->fields.isCanNotSelect )
      *p_sortValue0 = -30LL;
  }
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0LL),
        servantEntity = this->fields.servantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !servantEntity)
    || (userServantEntity = this->fields.userServantEntity) == 0LL )
  {
LABEL_83:
    sub_1BC3264(IsBaseSvt, v11);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v18;
  *(_QWORD *)&v50.fields.fakeValue = v17;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v50, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v19 = this->fields.userServantEntity;
      if ( !v19 )
        goto LABEL_83;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v48.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v47 = v48;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v47, 0LL);
      v21 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v21 )
        goto LABEL_83;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v21->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_66;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_53;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v23 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v23;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_83;
      IconLabelInfo__Set_39947860(iconLabelInfo1, 2, v23, IsBaseSvt, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_71;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_42151700((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = tdMaxLv[0];
      v27 = 33;
      goto LABEL_65;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v28 = *(int *)(IsBaseSvt + 268);
      v29 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !v29 )
        goto LABEL_83;
      v30 = IsBaseSvt;
      v31 = 3;
      goto LABEL_48;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v28 = *(int *)(IsBaseSvt + 264);
      v29 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !v29 )
        goto LABEL_83;
      v30 = IsBaseSvt;
      v31 = 5;
LABEL_48:
      IconLabelInfo__Set_39947860(v29, v31, v28, v30, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_66;
    case 7:
      v32 = this->fields.servantEntity;
      if ( !v32 )
        goto LABEL_83;
      cost = v32->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__Set_39947860((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_66;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_53:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_68;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.friendshipMax;
      v27 = 32;
      goto LABEL_65;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_80;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewManager_TypeInfo )
          v37 = sort->fields.manager;
        else
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      v39 = this->fields.userServantEntity;
      if ( !v39 )
        goto LABEL_83;
      v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v41;
      *(_QWORD *)&v51.fields.fakeValue = v40;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v51, 0LL);
      if ( !v37 )
        goto LABEL_83;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v37,
                    IsBaseSvt,
                    v42);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_80:
      v43 = this->fields.servantEntity;
      if ( !v43 )
        goto LABEL_83;
      collectionNo = v43->fields.collectionNo;
      v45 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v45 )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v45->fields.lv;
      IsBaseSvt = (int64_t)v45;
      goto LABEL_69;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v27 = 44;
      goto LABEL_65;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v27 = 45;
LABEL_65:
      IconLabelInfo__Set_39947860((IconLabelInfo_o *)IsBaseSvt, v27, friendship, friendshipMax, 0, 0, 0, 0, 0, 0LL);
LABEL_66:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_68:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_69:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_83;
      IconLabelInfo__Set_39947860(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0, 0LL);
LABEL_71:
      LOBYTE(IsBaseSvt) = 1;
      break;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void __fastcall EventFortificationListViewItem__SetUserServantEntity(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1BC2FAC(&this->fields.userServantEntity);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v4);
}


bool __fastcall EventFortificationListViewItem__SwapChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall EventFortificationListViewItem__SwapLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall EventFortificationListViewItem___CheckFortificationAppointment_b__114_0(
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
  if ( (byte_4AFC495 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BC3008(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 info);
    byte_4AFC495 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_1BC3264(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v9, 0LL);
}


bool __fastcall EventFortificationListViewItem___GetIsEventUpValShow_b__46_0(
        EventFortificationListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4AFC494 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4AFC494 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v11 = Master_object;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  if ( !entity || !v11 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v14 = this->fields.userServantEntity;
  if ( !v14 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v14->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1BC3264(Master_object, v9);
  return UserServantEntity__getEventUpVal_42144440(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_AddPoint(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationDataLogic__CalculationGetPoint(this->fields.userServantEntity, this->fields.eventId, v2);
}


System_String_o *__fastcall EventFortificationListViewItem__get_ClassName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.className;
}


int32_t __fastcall EventFortificationListViewItem__get_EventId(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}


IconLabelInfo_o *__fastcall EventFortificationListViewItem__get_IconInfo1(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall EventFortificationListViewItem__get_IconInfo2(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall EventFortificationListViewItem__get_IsAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAppointment;
}


bool __fastcall EventFortificationListViewItem__get_IsBaseSvt(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4AFC491 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BC3008(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4AFC491 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BC3264(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v7, 0LL);
}


bool __fastcall EventFortificationListViewItem__get_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall EventFortificationListViewItem__get_IsCanNotSelect(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool __fastcall EventFortificationListViewItem__get_IsCanNotSelectPush(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_1BC3264(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0LL);
}


bool __fastcall EventFortificationListViewItem__get_IsChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsDispChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsDispLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall EventFortificationListViewItem__get_IsHeroineSvt(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool __fastcall EventFortificationListViewItem__get_IsLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall EventFortificationListViewItem__get_IsNpc(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool __fastcall EventFortificationListViewItem__get_IsParty(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall EventFortificationListViewItem__get_IsPush(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall EventFortificationListViewItem__get_IsSwapChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsSwapLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


System_String_o *__fastcall EventFortificationListViewItem__get_MyDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myDetailName;
}


System_String_o *__fastcall EventFortificationListViewItem__get_MyTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myTeamName;
}


int32_t __fastcall EventFortificationListViewItem__get_MyWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myWorkType;
}


int32_t __fastcall EventFortificationListViewItem__get_Rarity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall EventFortificationListViewItem__get_ServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


System_String_o *__fastcall EventFortificationListViewItem__get_ServantName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantName;
}


int32_t __fastcall EventFortificationListViewItem__get_SvtTypeDataSetInMaster(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtTypeSetInMaster;
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem
    || (eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  return eventFortificationDetailEntity->fields.name;
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x19
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1BC3264(this, method);
  if ( (byte_4AFC4F7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFC4F7 = 1;
  }
  eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    p_name = &eventFortificationEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1BC3264(this, method);
  eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    return eventFortificationEntity->fields.workType;
  else
    return 0;
}


UserServantEntity_o *__fastcall EventFortificationListViewItem__get_UserServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall EventFortificationListViewItem__get_UserSvtId(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4AFC490 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BC3008(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4AFC490 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BC3264(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Func_object__bool__o *v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  EventFortificationSvtMaster_o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x10
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x11
  bool v38; // w19
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4AFC493 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v10);
    sub_1BC3008(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v16);
    sub_1BC3008(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v17);
    sub_1BC3008(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v18);
    byte_4AFC493 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v40, 0, sizeof(v40));
  v19 = sub_1BC3254(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_35;
  *(_DWORD *)(v19 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1BC3264(v23, v24);
    if ( !HIDWORD(v40.fields._current[1].monitor) )
    {
      if ( !v22 )
        sub_1BC3264(v23, v24);
      items = v22->fields._items;
      v27 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BC3264(v23, v24);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          current,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v29[4] = (Il2CppClass *)current;
        sub_1BC2FAC(v29 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v31 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v19,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v32,
                                                     (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1BC3264(Master_object, v21);
  v33 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v40 = v39;
  do
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v34 )
      break;
    if ( !v40.fields._current )
      sub_1BC3264(v34, v35);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1BC3264(v34, v35);
    eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      sub_1BC3264(v34, v35);
  }
  while ( HIDWORD(v40.fields._current[1].klass) != eventFortificationDetailEntity->fields.fortificationIdx
       || LODWORD(v40.fields._current[1].monitor) != targetFortificationWorkItem->fields.position );
  v38 = !v34;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return v38 && SLODWORD(v33->fields._MasterName_k__BackingField) > 0;
}


void __fastcall EventFortificationListViewItem__set_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void __fastcall EventFortificationListViewItem___c__DisplayClass115_0___ctor(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationListViewItem___c__DisplayClass115_0___isNotSelect_b__0(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        EventFortificationSvtEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}