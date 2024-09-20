void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_3739718 **v7; // x27
  IconLabelInfo_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  IconLabelInfo_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int64_t Instance; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v26; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  __int64 v28; // x25
  __int64 v29; // x26
  Il2CppObject *Entity; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct UserServantEntity_o *v33; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  UserServantEntity_o *v38; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v40; // x8
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  __int64 v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  bool v48; // w8
  const MethodInfo *v49; // x1
  bool v50; // w0
  int32_t v51; // w2
  int32_t v52; // w3
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  UserServantCollectionMaster_o *v55; // x22
  struct UserServantEntity_o *v56; // x8
  int64_t v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v61; // x23
  int64_t v62; // x22
  unsigned int v63; // w24
  __int64 v64; // x25
  __int64 v65; // x8
  const MethodInfo_3739718 **v66; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v67; // x27
  unsigned int v68; // w29
  __int64 v69; // x8
  unsigned int v70; // w9
  __int64 v71; // x8
  struct UserServantEntity_o *v72; // x9
  __int128 v73; // q0
  __int64 v74; // x28
  int v75; // w22
  BalanceConfig_c *v76; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_String_o *v80; // x1
  int64_t v81; // x23
  int64_t v82; // x8
  struct ServantEntity_o *v83; // x9
  struct UserServantEntity_o *v84; // x8
  __int64 v85; // x21
  __int64 v86; // x22
  struct UserServantEntity_o *v87; // x8
  __int64 v88; // x22
  __int64 v89; // x23
  int32_t v90; // w0
  const MethodInfo *v91; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  v7 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4A5EEC7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5EEC7 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v14, v15, v16);
  v17 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo2 = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v17, v18, v19);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v21,
    v22);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v26 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v29;
  *(_QWORD *)&v98.fields.fakeValue = v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v98, 0LL);
  if ( !v27 )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v27,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v31, v32);
  v33 = this->fields.userServantEntity;
  if ( !v33 )
    goto LABEL_85;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_85;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)Name, v36, v37);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v38 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v38 )
    goto LABEL_85;
  Rarity = UserServantEntity__getRarity(v38, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v40 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v40 )
    goto LABEL_85;
  Instance = UserServantEntity__IsChoice(v40, 0LL);
  v41 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v41 )
    goto LABEL_85;
  v42 = *(_OWORD *)&v41->fields.userId.fields.fakeValue;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v41->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v42;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v96 = v97;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v96, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_85;
  v43 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
  v45 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v44;
  v48 = v45 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v95, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v48;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem,
    (int32_t)targetFortificationWorkItem,
    v46,
    v47);
  this->fields.svtTypeSetInMaster = -1;
  v50 = EventFortificationListViewItem__CheckFortificationAppointment(this, v49);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v51, v52);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_85;
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
  Instance = TutorialFlag__Get_37688364(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v87 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
  v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v89;
  *(_QWORD *)&v101.fields.fakeValue = v88;
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v101, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v90, v91) )
    goto LABEL_30;
LABEL_31:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v54 = *(_OWORD *)&v53->fields.userId.fields.fakeValue;
  v55 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v53->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v94 = v97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v94, 0LL);
  v56 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v57 = Instance;
  v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v99.fields.currentCryptoKey = v59;
  *(_QWORD *)&v99.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v99, 0LL);
  if ( !v55 )
    goto LABEL_85;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v55, v57, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_85;
  Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  v61 = *(_QWORD *)(Instance + 24);
  v62 = Instance;
  if ( (int)v61 >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      v64 = *(_QWORD *)(v62 + 8LL * (int)v63 + 32);
      if ( !v64 )
        break;
      v65 = *(_QWORD *)(v64 + 48);
      if ( !v65 )
        break;
      v66 = v7;
      v67 = v26;
      v68 = 0;
      while ( 1 )
      {
        v69 = *(_QWORD *)(v65 + 16);
        if ( !v69 )
          goto LABEL_85;
        v70 = *(_DWORD *)(v69 + 24);
        if ( (int)v68 >= (int)v70 )
          break;
        if ( v68 >= v70 )
          goto LABEL_63;
        v71 = *(_QWORD *)(v69 + 8LL * (int)v68 + 32);
        if ( !v71 )
          goto LABEL_85;
        v72 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_85;
        v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
        v74 = *(_QWORD *)(v71 + 24);
        *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v97.fields.fakeValue = v73;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v93 = v97;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v93, 0LL);
        if ( v74 == Instance )
        {
          v26 = v67;
          v7 = v66;
          this->fields.isParty = 1;
          goto LABEL_65;
        }
        v65 = *(_QWORD *)(v64 + 48);
        ++v68;
        if ( !v65 )
          goto LABEL_85;
      }
      v26 = v67;
      v7 = v66;
      if ( this->fields.isParty )
        goto LABEL_65;
      if ( ++v63 == (_DWORD)v61 )
        goto LABEL_65;
      if ( v63 >= *(_DWORD *)(v62 + 24) )
LABEL_63:
        sub_1B88814(Instance, v24);
    }
LABEL_85:
    sub_1B8880C(Instance, v24);
  }
LABEL_65:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v75 = *(_DWORD *)(Instance + 276);
  v76 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v76 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v76->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v75;
  if ( !Instance )
    goto LABEL_85;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v7);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_85;
  v80 = *(struct System_String_o **)(Instance + 24);
  v81 = Instance;
  this->fields.className = v80;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.className, (int32_t)v80, v78, v79);
  v82 = *(int *)(v81 + 48);
  v83 = this->fields.servantEntity;
  this->fields.priority = v82;
  this->fields.sortValue1B = v82;
  if ( !v83 )
    goto LABEL_85;
  v84 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  this->fields.sortValue2 = ((__int64)v83->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v84->fields.lv;
  v86 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
  v85 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
  if ( !(*v26)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v26);
  *(_QWORD *)&v100.fields.currentCryptoKey = v86;
  *(_QWORD *)&v100.fields.fakeValue = v85;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v100, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_85;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_85;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x0
  struct System_String_o *TargetTeamName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  struct System_String_o *TargetDetailName; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  bool v16; // w26
  EventFortificationMaster_o *v17; // x21
  char v18; // w8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v23; // x25
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_String_o *name; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_String_o *v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  _BOOL8 v45; // x0
  __int64 v46; // x1
  ServantStatusBattleListViewItem_o *p_myDetailName; // [xsp+0h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v51; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v52; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5EECE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_1B885B0(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__);
    sub_1B885B0(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EECE = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v54, 0, sizeof(v54));
  v52 = 0LL;
  entity = 0LL;
  v51 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(this, v4);
    this->fields.myTeamName = TargetTeamName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.myTeamName, (int32_t)TargetTeamName, v8, v9);
    TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(this, v10);
    this->fields.myDetailName = TargetDetailName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.myDetailName, (int32_t)TargetDetailName, v12, v13);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      if ( eventFortificationEntity )
        LODWORD(eventFortificationEntity) = eventFortificationEntity->fields.workType;
      v16 = 1;
      this->fields.myWorkType = (int)eventFortificationEntity;
      this->fields.svtTypeSetInMaster = 1;
      return v16;
    }
LABEL_36:
    sub_1B8880C(Instance, v4);
  }
  v17 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = (ServantStatusBattleListViewItem_o *)&this->fields.myDetailName;
  p_myTeamName = (ServantStatusBattleListViewItem_o *)&this->fields.myTeamName;
  v18 = 0;
  v54 = v50;
LABEL_16:
  v16 = v18;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1B8880C(v19, v20);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v54.fields._current[2].monitor;
    v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0LL);
    v24 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            monitor,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v26 = v24;
    if ( v24 )
    {
      if ( !MasterData_object )
        sub_1B8880C(v24, v25);
      v27 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v24[1].klass,
              0LL);
      if ( v27 )
      {
        if ( !v17 )
          sub_1B8880C(v27, v28);
        v29 = EventFortificationMaster__TryGetEntity(v17, &v52, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v29 )
        {
          if ( !v52 )
            sub_1B8880C(v29, v30);
          name = v52->fields.name;
          p_myTeamName->klass = (ServantStatusBattleListViewItem_c *)name;
          sub_1B88554(p_myTeamName, (int32_t)name, v31, v32);
          if ( !entity )
            sub_1B8880C(v34, v35);
          v38 = entity->fields.name;
          p_myDetailName->klass = (ServantStatusBattleListViewItem_c *)v38;
          sub_1B88554(p_myDetailName, (int32_t)v38, v36, v37);
          if ( !v52 )
            sub_1B8880C(v39, v40);
          this->fields.myWorkType = v52->fields.workType;
          v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v41 )
            sub_1B8880C(0LL, v42);
          v43 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v41,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v43 )
            sub_1B8880C(0LL, v44);
          v45 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v43,
                  &v51,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v26[1].klass,
                  0LL);
          v18 = 1;
          if ( v45 )
          {
            if ( !v51 )
              sub_1B8880C(v45, v46);
            this->fields.svtTypeSetInMaster = v51->fields.type;
            v18 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v16;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v10; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4A5EECB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EECB = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1B8880C(this, sort);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_36;
            v12 = (EventCampaignMaster_o *)this;
            v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v14;
            *(_QWORD *)&v16.fields.fakeValue = v13;
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                         v16,
                                                         0LL);
            if ( !v12 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v12, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal_40205120(
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
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v15 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v15[5],
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
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 v14; // w8

  if ( (byte_4A5EECA & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5EECA = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_38;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_38:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
    sub_1B88814(ClassGroupFilterKindList, ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v14 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v14;
}


void __fastcall EventFortificationListViewItem__ModifyChoiceItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v5);
  EventFortificationListViewItem__ModifyLockItem(this, v6);
  EventFortificationListViewItem__ModifyChoiceItem(this, v7);
  EventFortificationListViewItem__ModifyPushItem(this, v8);
}


void __fastcall EventFortificationListViewItem__ModifyLockItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5EEC8 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EEC8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1B8880C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v9, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
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
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  struct UserServantEntity_o *v19; // x8
  int64_t rarity; // x8
  int64_t v21; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v25; // w1
  struct UserServantEntity_o *v26; // x8
  struct UserServantEntity_o *v27; // x8
  struct ServantEntity_o *v28; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v33; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v35; // x8
  __int64 v36; // x21
  __int64 v37; // x22
  const MethodInfo *v38; // x2
  struct ServantEntity_o *v39; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4A5EEC9 & 1) == 0 )
  {
    sub_1B885B0(&EventFortificationListViewManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EEC9 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
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
      goto LABEL_82;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  else if ( !sort )
  {
    goto LABEL_82;
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
LABEL_82:
    sub_1B8880C(IsBaseSvt, v9);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v16;
  *(_QWORD *)&v46.fields.fakeValue = v15;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v17 = this->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_82;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v44;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
      v19 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v19 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v19->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_52;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      v21 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v21;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v21, IsBaseSvt, 0, 0, 0, 0, 0LL);
      goto LABEL_70;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = tdMaxLv[0];
      v25 = 33;
      goto LABEL_64;
    case 5:
      v26 = this->fields.userServantEntity;
      if ( !v26 )
        goto LABEL_82;
      hp = v26->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v26->fields.adjustHp;
      v25 = 3;
      goto LABEL_64;
    case 6:
      v27 = this->fields.userServantEntity;
      if ( !v27 )
        goto LABEL_82;
      hp = v27->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v27->fields.adjustAtk;
      v25 = 5;
      goto LABEL_64;
    case 7:
      v28 = this->fields.servantEntity;
      if ( !v28 )
        goto LABEL_82;
      cost = v28->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_52:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_67;
    case 0xA:
      hp = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.friendshipMax;
      v25 = 32;
      goto LABEL_64;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewManager_TypeInfo )
          v33 = sort->fields.manager;
        else
          v33 = 0LL;
      }
      else
      {
        v33 = 0LL;
      }
      v35 = this->fields.userServantEntity;
      if ( !v35 )
        goto LABEL_82;
      v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = v37;
      *(_QWORD *)&v47.fields.fakeValue = v36;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v47, 0LL);
      if ( !v33 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v33,
                    IsBaseSvt,
                    v38);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v39 = this->fields.servantEntity;
      if ( !v39 )
        goto LABEL_82;
      collectionNo = v39->fields.collectionNo;
      v41 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v41 )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v41->fields.lv;
      IsBaseSvt = (int64_t)v41;
      goto LABEL_68;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v25 = 44;
      goto LABEL_64;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v25 = 45;
LABEL_64:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)IsBaseSvt, v25, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_65:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_67:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_68:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_82;
      IconLabelInfo__Set_38140136(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
LABEL_70:
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
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v5);
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
  if ( (byte_4A5EED1 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EED1 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_1B8880C(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v9, 0LL);
}


bool __fastcall EventFortificationListViewItem___GetIsEventUpValShow_b__46_0(
        EventFortificationListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  struct UserServantEntity_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5EED0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EED0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v8 = Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = this->fields.userServantEntity;
  if ( !v11 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v11->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205120(
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
  if ( (byte_4A5EECD & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EECD = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL);
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
    sub_1B8880C(userServantEntity, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  if ( (byte_4A5EF33 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EF33 = 1;
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5EECC & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EECC = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  Il2CppClass **v17; // x0
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  EventFortificationSvtMaster_o *v21; // x20
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x10
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x11
  bool v26; // w19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5EECF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_1B885B0(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1B885B0(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__);
    sub_1B885B0(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
    byte_4A5EECF = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v28, 0, sizeof(v28));
  v5 = sub_1B887FC(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v28,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1B8880C(v9, v10);
    if ( !HIDWORD(v28.fields._current[1].monitor) )
    {
      if ( !v8 )
        sub_1B8880C(v9, v10);
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1B8880C(v9, v10);
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v17[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)current, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v19 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v20,
                                                     (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1B8880C(Master_object, v7);
  v21 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v28 = v27;
  do
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !v28.fields._current )
      sub_1B8880C(v22, v23);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1B8880C(v22, v23);
    eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      sub_1B8880C(v22, v23);
  }
  while ( HIDWORD(v28.fields._current[1].klass) != eventFortificationDetailEntity->fields.fortificationIdx
       || LODWORD(v28.fields._current[1].monitor) != targetFortificationWorkItem->fields.position );
  v26 = !v22;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return v26 && SLODWORD(v21->fields._MasterName_k__BackingField) > 0;
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
    sub_1B8880C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}