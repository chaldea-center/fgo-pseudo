void EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_39E2904 **v7; // x27
  IconLabelInfo_o *v14; // x20
  IconLabelInfo_o *v15; // x21
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  struct UserServantEntity_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v19; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o *v24; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  UserServantEntity_o *v27; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  __int64 v34; // x24
  bool v35; // w8
  const MethodInfo *v36; // x1
  bool v37; // w0
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  UserServantCollectionMaster_o *v40; // x22
  struct UserServantEntity_o *v41; // x8
  int64_t v42; // x23
  __int64 v43; // x24
  __int64 v44; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v46; // x23
  __int64 v47; // x22
  unsigned int v48; // w24
  __int64 v49; // x25
  __int64 v50; // x8
  const MethodInfo_39E2904 **v51; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v52; // x27
  unsigned int v53; // w29
  __int64 v54; // x8
  unsigned int v55; // w9
  __int64 v56; // x8
  struct UserServantEntity_o *v57; // x9
  __int128 v58; // q0
  __int64 v59; // x28
  int v60; // w22
  BalanceConfig_c *v61; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct System_String_o *v63; // x1
  __int64 v64; // x23
  int64_t v65; // x8
  struct ServantEntity_o *v66; // x9
  struct UserServantEntity_o *v67; // x8
  __int64 v68; // x21
  __int64 v69; // x22
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  int64_t v72; // x8
  struct UserServantEntity_o *v73; // x8
  __int64 v74; // x22
  __int64 v75; // x23
  int32_t v76; // w0
  const MethodInfo *v77; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v7 = (const MethodInfo_39E2904 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4C31D14 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C31D14 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo1 = v14;
  sub_1C32BC4(&this->fields.iconLabelInfo1, v14);
  v15 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo2 = v15;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C32BC4(&this->fields.iconLabelInfo2, v15);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C32BC4(&this->fields.userServantEntity, userServantEntity);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v19 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v22;
  *(_QWORD *)&v85.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v85, 0);
  if ( !v20 )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  Instance = sub_1C32BC4(&this->fields.servantEntity, Entity);
  v24 = this->fields.userServantEntity;
  if ( !v24 )
    goto LABEL_92;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v24->fields.limitCount, 0);
  if ( !servantEntity )
    goto LABEL_92;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0, 0);
  this->fields.servantName = Name;
  sub_1C32BC4(&this->fields.servantName, Name);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0);
  v27 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v27 )
    goto LABEL_92;
  Rarity = UserServantEntity__getRarity(v27, 0);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v29 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v29 )
    goto LABEL_92;
  Instance = UserServantEntity__IsChoice(v29, 0);
  v30 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v30 )
    goto LABEL_92;
  v31 = *(_OWORD *)&v30->fields.userId.fields.fakeValue;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v30->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v84;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v83, 0) == 0;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_92;
  v32 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
  v34 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v33;
  v35 = v34 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v82, 0) && !this->fields.isNpc;
  this->fields.isPush = v35;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1C32BC4(&this->fields.targetFortificationWorkItem, targetFortificationWorkItem);
  this->fields.svtTypeSetInMaster = -1;
  v37 = EventFortificationListViewItem__CheckFortificationAppointment(this, v36);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v37;
  sub_1C32BC4(&this->fields.setupInfo, setupInfo);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
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
  Instance = TutorialFlag__Get_40328320(126, 0);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v73 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v75 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v75;
  *(_QWORD *)&v88.fields.fakeValue = v74;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v88, 0);
  if ( EventFortificationListViewItem__isNotSelect(this, v76, v77) )
    goto LABEL_30;
LABEL_31:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v38 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v39 = *(_OWORD *)&v38->fields.userId.fields.fakeValue;
  v40 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v38->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v81, 0);
  v41 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v42 = Instance;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v44;
  *(_QWORD *)&v86.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v86, 0);
  if ( !v40 )
    goto LABEL_92;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v40, v42, Instance, 0);
  if ( !Instance )
    goto LABEL_92;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_92;
  Instance = (__int64)UserDeckMaster__getDeckList(
                        (UserDeckMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        0);
  if ( !Instance )
    goto LABEL_92;
  v46 = *(_QWORD *)(Instance + 24);
  v47 = Instance;
  if ( (int)v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      v49 = *(_QWORD *)(v47 + 8LL * (int)v48 + 32);
      if ( !v49 )
        break;
      v50 = *(_QWORD *)(v49 + 48);
      if ( !v50 )
        break;
      v51 = v7;
      v52 = v19;
      v53 = 0;
      while ( 1 )
      {
        v54 = *(_QWORD *)(v50 + 16);
        if ( !v54 )
          goto LABEL_92;
        v55 = *(_DWORD *)(v54 + 24);
        if ( (int)v53 >= (int)v55 )
          break;
        if ( v53 >= v55 )
          goto LABEL_67;
        v56 = *(_QWORD *)(v54 + 8LL * (int)v53 + 32);
        if ( !v56 )
          goto LABEL_92;
        v57 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_92;
        v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
        v59 = *(_QWORD *)(v56 + 24);
        *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v84.fields.fakeValue = v58;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v80 = v84;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v80, 0);
        if ( v59 == Instance )
        {
          v19 = v52;
          v7 = v51;
          this->fields.isParty = 1;
          goto LABEL_69;
        }
        v50 = *(_QWORD *)(v49 + 48);
        ++v53;
        if ( !v50 )
          goto LABEL_92;
      }
      v19 = v52;
      v7 = v51;
      if ( this->fields.isParty )
        goto LABEL_69;
      if ( ++v48 == (_DWORD)v46 )
        goto LABEL_69;
      if ( v48 >= *(_DWORD *)(v47 + 24) )
LABEL_67:
        sub_1C32E84(Instance);
    }
LABEL_92:
    sub_1C32E7C(Instance);
  }
LABEL_69:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v60 = *(_DWORD *)(Instance + 276);
  v61 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v61->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v60;
  if ( !Instance )
    goto LABEL_92;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v7);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_92;
  v63 = *(struct System_String_o **)(Instance + 24);
  v64 = Instance;
  this->fields.className = v63;
  Instance = sub_1C32BC4(&this->fields.className, v63);
  v65 = *(int *)(v64 + 52);
  v66 = this->fields.servantEntity;
  this->fields.priority = v65;
  this->fields.sortValue1B = v65;
  if ( !v66 )
    goto LABEL_92;
  v67 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  this->fields.sortValue2 = ((__int64)v66->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v67->fields.lv;
  v69 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
  if ( !(*v19)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v19);
  *(_QWORD *)&v87.fields.currentCryptoKey = v69;
  *(_QWORD *)&v87.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v87, 0);
  v70 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v70 )
    goto LABEL_92;
  v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v84;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v79, 0);
  Instance = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v72;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_92;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_92;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x1
  struct System_String_o *TargetTeamName; // x0
  const MethodInfo *v8; // x1
  struct System_String_o *TargetDetailName; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  bool v12; // w26
  EventFortificationMaster_o *v13; // x21
  char v14; // w8
  _BOOL8 v15; // x0
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v18; // x25
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x24
  _BOOL8 v21; // x0
  _BOOL8 v22; // x0
  struct System_String_o *name; // x1
  __int64 v24; // x0
  struct System_String_o *v25; // x1
  __int64 v26; // x0
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x0
  _BOOL8 v29; // x0
  struct System_String_o **p_myDetailName; // [xsp+0h] [xbp-C0h]
  struct System_String_o **p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v34; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v35; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C31D1B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_1C32C20(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__);
    sub_1C32C20(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D1B = 1;
  }
  userEventFortificationList = 0;
  memset(&v37, 0, sizeof(v37));
  v35 = 0;
  entity = 0;
  v34 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v5 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(this, v6);
    this->fields.myTeamName = TargetTeamName;
    sub_1C32BC4(&this->fields.myTeamName, TargetTeamName);
    TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(this, v8);
    this->fields.myDetailName = TargetDetailName;
    Instance = (DataManager_o *)sub_1C32BC4(&this->fields.myDetailName, TargetDetailName);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      if ( eventFortificationEntity )
        LODWORD(eventFortificationEntity) = eventFortificationEntity->fields.workType;
      v12 = 1;
      this->fields.myWorkType = (int)eventFortificationEntity;
      this->fields.svtTypeSetInMaster = 1;
      return v12;
    }
LABEL_36:
    sub_1C32E7C(Instance);
  }
  v13 = (EventFortificationMaster_o *)v5;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = &this->fields.myDetailName;
  p_myTeamName = &this->fields.myTeamName;
  v14 = 0;
  v37 = v33;
LABEL_16:
  v12 = v14;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1C32E7C(v15);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v37.fields._current[2].monitor;
    v18 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0);
    v19 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            monitor,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v20 = v19;
    if ( v19 )
    {
      if ( !MasterData_object )
        sub_1C32E7C(v19);
      v21 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v19[1].klass,
              0);
      if ( v21 )
      {
        if ( !v13 )
          sub_1C32E7C(v21);
        v22 = EventFortificationMaster__TryGetEntity(v13, &v35, this->fields.eventId, HIDWORD(current[1].monitor), 0);
        if ( v22 )
        {
          if ( !v35 )
            sub_1C32E7C(v22);
          name = v35->fields.name;
          *p_myTeamName = name;
          v24 = sub_1C32BC4(p_myTeamName, name);
          if ( !entity )
            sub_1C32E7C(v24);
          v25 = entity->fields.name;
          *p_myDetailName = v25;
          v26 = sub_1C32BC4(p_myDetailName, v25);
          if ( !v35 )
            sub_1C32E7C(v26);
          this->fields.myWorkType = v35->fields.workType;
          v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v27 )
            sub_1C32E7C(0);
          v28 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v27,
                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v28 )
            sub_1C32E7C(0);
          v29 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v28,
                  &v34,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v20[1].klass,
                  0);
          v14 = 1;
          if ( v29 )
          {
            if ( !v34 )
              sub_1C32E7C(v29);
            this->fields.svtTypeSetInMaster = v34->fields.type;
            v14 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v12;
}


bool EventFortificationListViewItem__GetIsEventUpValShow(
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
  if ( (byte_4C31D18 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__);
    sub_1C32C20(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D18 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1C32E7C(this);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_36;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (EventFortificationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                         0);
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
              v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_30C6790 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                         v16,
                                                         0);
            if ( !v12 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v12, (int32_t)this, v4->fields.bonusKindId, 0);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal_43068196(
                   (UserServantEntity_o *)this,
                   v4->fields.setupInfo,
                   bonusKindId,
                   0,
                   0) )
            {
              return 1;
            }
            goto LABEL_23;
          case 7u:
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v15 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v15[5],
                     v4->fields.bonusKindId,
                     0);
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
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 v14; // w8

  if ( (byte_4C31D17 & 1) == 0 )
  {
    sub_1C32C20(&FilterKindList_TypeInfo);
    sub_1C32C20(&ListViewSort_FilterKind___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C32C20(&ServantEventBonusFilterController_TypeInfo);
    byte_4C31D17 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_40;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_40;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_40;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
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
    goto LABEL_40;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
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
    goto LABEL_40;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1C32CC8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_1C32E7C(ClassGroupFilterKindList);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    sub_1C32E84(ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v14 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v14;
}


void EventFortificationListViewItem__ModifyChoiceItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C32E7C(0);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1C32BC4(&this->fields.userServantEntity, userServantEntity);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v4);
  EventFortificationListViewItem__ModifyLockItem(this, v5);
  EventFortificationListViewItem__ModifyChoiceItem(this, v6);
  EventFortificationListViewItem__ModifyPushItem(this, v7);
}


void EventFortificationListViewItem__ModifyLockItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C32E7C(0);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void EventFortificationListViewItem__ModifyPushItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  bool v7; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4C31D15 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D15 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1C32E7C(SelfUserGame);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  v7 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v8, 0)
    && !this->fields.isNpc;
  this->fields.isPush = v7;
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
  const MethodInfo *v9; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v11; // w9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  int64_t rarity; // x8
  int64_t v20; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v24; // w1
  int64_t v25; // x20
  IconLabelInfo_o *v26; // x21
  int32_t v27; // w3
  int32_t v28; // w1
  struct ServantEntity_o *v29; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v34; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  const MethodInfo *v39; // x2
  struct ServantEntity_o *v40; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4C31D16 & 1) == 0 )
  {
    sub_1C32C20(&EventFortificationListViewManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D16 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = -1;
  this->fields.sortValue0 = 0;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v9), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v11 = !this->fields.isChoice;
  else
    v11 = this->fields.isChoice;
  if ( v11 )
  {
    if ( !sort )
      goto LABEL_83;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10;
  }
  else if ( !sort )
  {
    goto LABEL_83;
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
        servantEntity = this->fields.servantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !servantEntity)
    || (userServantEntity = this->fields.userServantEntity) == 0 )
  {
LABEL_83:
    sub_1C32E7C(IsBaseSvt);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | userServantEntity->fields.lv;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v15;
  *(_QWORD *)&v47.fields.fakeValue = v14;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v47, 0);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v16 = this->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_83;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v44, 0);
      v18 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v18 )
        goto LABEL_83;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v18->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_66;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_53;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v20 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v20;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_83;
      IconLabelInfo__Set_40818388(iconLabelInfo1, 2, v20, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_71;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_43075456((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = tdMaxLv[0];
      v24 = 33;
      goto LABEL_65;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v25 = *(int *)(IsBaseSvt + 268);
      v26 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v25;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v26 )
        goto LABEL_83;
      v27 = IsBaseSvt;
      v28 = 3;
      goto LABEL_48;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v25 = *(int *)(IsBaseSvt + 264);
      v26 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v25;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v26 )
        goto LABEL_83;
      v27 = IsBaseSvt;
      v28 = 5;
LABEL_48:
      IconLabelInfo__Set_40818388(v26, v28, v25, v27, 0, 0, 0, 0, 0, 0);
      goto LABEL_66;
    case 7:
      v29 = this->fields.servantEntity;
      if ( !v29 )
        goto LABEL_83;
      cost = v29->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__Set_40818388((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
      v24 = 32;
      goto LABEL_65;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_80;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = EventFortificationListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewManager_TypeInfo )
          v34 = sort->fields.manager;
        else
          v34 = 0;
      }
      else
      {
        v34 = 0;
      }
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_83;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v38;
      *(_QWORD *)&v48.fields.fakeValue = v37;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v48, 0);
      if ( !v34 )
        goto LABEL_83;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v34,
                    IsBaseSvt,
                    v39);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_80:
      v40 = this->fields.servantEntity;
      if ( !v40 )
        goto LABEL_83;
      collectionNo = v40->fields.collectionNo;
      v42 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48))
                              | collectionNo;
      if ( !v42 )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v42->fields.lv;
      IsBaseSvt = (int64_t)v42;
      goto LABEL_69;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v24 = 44;
      goto LABEL_65;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v24 = 45;
LABEL_65:
      IconLabelInfo__Set_40818388((IconLabelInfo_o *)IsBaseSvt, v24, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_66:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_68:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_69:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_83;
      IconLabelInfo__Set_40818388(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_71:
      LOBYTE(IsBaseSvt) = 1;
      break;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void EventFortificationListViewItem__SetUserServantEntity(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1C32BC4(&this->fields.userServantEntity, userServantEntity);
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v4);
}


bool EventFortificationListViewItem__SwapChoice(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool EventFortificationListViewItem__SwapLock(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool EventFortificationListViewItem___CheckFortificationAppointment_b__114_0(
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
  if ( (byte_4C31D1E & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D1E = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0 )
    sub_1C32E7C(this);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v9, 0);
}


bool EventFortificationListViewItem___GetIsEventUpValShow_b__46_0(
        EventFortificationListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  struct UserServantEntity_o *v10; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C31D1D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C31D1D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v7 = Master_object;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v12, 0);
  if ( !entity || !v7 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v7, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v10 = this->fields.userServantEntity;
  if ( !v10 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v10->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1C32E7C(Master_object);
  return UserServantEntity__getEventUpVal_43068196(
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


System_String_o *EventFortificationListViewItem__get_ClassName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.className;
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
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C31D1A & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D1A = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C32E7C(this);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v7, 0);
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
    sub_1C32E7C(userServantEntity);
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


int32_t EventFortificationListViewItem__get_Rarity(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *EventFortificationListViewItem__get_ServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


System_String_o *EventFortificationListViewItem__get_ServantName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantName;
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
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem
    || (eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity) == 0 )
  {
    sub_1C32E7C(this);
  }
  return eventFortificationDetailEntity->fields.name;
}


System_String_o *EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x19
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  System_String_o **p_name; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1C32E7C(this);
  if ( (byte_4C31D80 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31D80 = 1;
  }
  eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    p_name = &eventFortificationEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


int32_t EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1C32E7C(this);
  eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
  if ( eventFortificationEntity )
    return eventFortificationEntity->fields.workType;
  else
    return 0;
}


UserServantEntity_o *EventFortificationListViewItem__get_UserServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t EventFortificationListViewItem__get_UserSvtId(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C31D19 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31D19 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C32E7C(this);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


bool EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  System_Collections_Generic_List_object__o *v7; // x21
  _BOOL8 v8; // x0
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v11; // x10
  __int64 size; // x11
  Il2CppClass **v13; // x0
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  EventFortificationSvtMaster_o *v17; // x20
  _BOOL8 v18; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x10
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x11
  bool v21; // w19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C31D1C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_1C32C20(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1C32C20(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__);
    sub_1C32C20(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
    byte_4C31D1C = 1;
  }
  eventFortificationSvtList = 0;
  memset(&v23, 0, sizeof(v23));
  v5 = sub_1C32E6C(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0) )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C32E7C(v8);
    if ( !HIDWORD(v23.fields._current[1].monitor) )
    {
      if ( !v7 )
        sub_1C32E7C(v8);
      items = v7->fields._items;
      v11 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C32E7C(v8);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          current,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v13 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v13[4] = (Il2CppClass *)current;
        sub_1C32BC4(v13 + 4, current);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v16,
                                                     (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1C32E7C(Master_object);
  v17 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v23 = v22;
  do
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v18 )
      break;
    if ( !v23.fields._current )
      sub_1C32E7C(v18);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1C32E7C(v18);
    eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      sub_1C32E7C(v18);
  }
  while ( HIDWORD(v23.fields._current[1].klass) != eventFortificationDetailEntity->fields.fortificationIdx
       || LODWORD(v23.fields._current[1].monitor) != targetFortificationWorkItem->fields.position );
  v21 = !v18;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return v21 && SLODWORD(v17->fields._MasterName_k__BackingField) > 0;
}


void EventFortificationListViewItem__set_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void EventFortificationListViewItem___c__DisplayClass115_0___ctor(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationListViewItem___c__DisplayClass115_0___isNotSelect_b__0(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        EventFortificationSvtEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.svtId == this->fields.svtId;
}