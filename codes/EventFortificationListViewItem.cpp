void EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_39D3CCC **v7; // x27
  IconLabelInfo_o *v14; // x20
  IconLabelInfo_o *v15; // x21
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v20; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  struct UserServantEntity_o *v24; // x8
  ServantEntity_o *servantEntity; // x24
  UserServantEntity_o *v26; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q0
  __int64 v33; // x24
  bool v34; // w8
  const MethodInfo *v35; // x1
  bool v36; // w0
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q0
  UserServantCollectionMaster_o *v39; // x22
  struct UserServantEntity_o *v40; // x8
  int64_t v41; // x23
  __int64 v42; // x24
  __int64 v43; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x23
  __int64 v48; // x22
  unsigned int v49; // w24
  __int64 v50; // x25
  __int64 v51; // x8
  const MethodInfo_39D3CCC **v52; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v53; // x27
  unsigned int v54; // w29
  __int64 v55; // x8
  unsigned int v56; // w9
  __int64 v57; // x8
  struct UserServantEntity_o *v58; // x9
  __int128 v59; // q0
  __int64 v60; // x28
  int v61; // w22
  BalanceConfig_c *v62; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
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

  v7 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4C21645 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C21645 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo1 = v14;
  sub_1C2D434(&this->fields.iconLabelInfo1);
  v15 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo2 = v15;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434(&this->fields.iconLabelInfo2);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C2D434(&this->fields.userServantEntity);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v20 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v23;
  *(_QWORD *)&v85.fields.fakeValue = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v85, 0);
  if ( !v21 )
    goto LABEL_92;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v21,
                                                           Instance,
                                                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = sub_1C2D434(&this->fields.servantEntity);
  v24 = this->fields.userServantEntity;
  if ( !v24 )
    goto LABEL_92;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24->fields.limitCount, 0);
  if ( !servantEntity )
    goto LABEL_92;
  this->fields.servantName = ServantEntity__getName(servantEntity, Instance, -1, 0, 0);
  sub_1C2D434(&this->fields.servantName);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0);
  v26 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v26 )
    goto LABEL_92;
  Rarity = UserServantEntity__getRarity(v26, 0);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v28 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v28 )
    goto LABEL_92;
  Instance = UserServantEntity__IsChoice(v28, 0);
  v29 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v29 )
    goto LABEL_92;
  v30 = *(_OWORD *)&v29->fields.userId.fields.fakeValue;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v29->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v84;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v83, 0) == 0;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_92;
  v31 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
  v33 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v32;
  v34 = v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v82, 0) && !this->fields.isNpc;
  this->fields.isPush = v34;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1C2D434(&this->fields.targetFortificationWorkItem);
  this->fields.svtTypeSetInMaster = -1;
  v36 = EventFortificationListViewItem__CheckFortificationAppointment(this, v35);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v36;
  sub_1C2D434(&this->fields.setupInfo);
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
  Instance = TutorialFlag__Get_40206092(126, 0);
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
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v88, 0);
  if ( EventFortificationListViewItem__isNotSelect(this, v76, v77) )
    goto LABEL_30;
LABEL_31:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v37 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v38 = *(_OWORD *)&v37->fields.userId.fields.fakeValue;
  v39 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v37->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v81, 0);
  v40 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v41 = Instance;
  v43 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v43;
  *(_QWORD *)&v86.fields.fakeValue = v42;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v86, 0);
  if ( !v39 )
    goto LABEL_92;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v39, v41, Instance, 0);
  if ( !Instance )
    goto LABEL_92;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  v47 = *(_QWORD *)(Instance + 24);
  v48 = Instance;
  if ( (int)v47 >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      v50 = *(_QWORD *)(v48 + 8LL * (int)v49 + 32);
      if ( !v50 )
        break;
      v51 = *(_QWORD *)(v50 + 48);
      if ( !v51 )
        break;
      v52 = v7;
      v53 = v20;
      v54 = 0;
      while ( 1 )
      {
        v55 = *(_QWORD *)(v51 + 16);
        if ( !v55 )
          goto LABEL_92;
        v56 = *(_DWORD *)(v55 + 24);
        if ( (int)v54 >= (int)v56 )
          break;
        if ( v54 >= v56 )
          goto LABEL_67;
        v57 = *(_QWORD *)(v55 + 8LL * (int)v54 + 32);
        if ( !v57 )
          goto LABEL_92;
        v58 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_92;
        v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
        v60 = *(_QWORD *)(v57 + 24);
        *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v84.fields.fakeValue = v59;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v80 = v84;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v80, 0);
        if ( v60 == Instance )
        {
          v20 = v53;
          v7 = v52;
          this->fields.isParty = 1;
          goto LABEL_69;
        }
        v51 = *(_QWORD *)(v50 + 48);
        ++v54;
        if ( !v51 )
          goto LABEL_92;
      }
      v20 = v53;
      v7 = v52;
      if ( this->fields.isParty )
        goto LABEL_69;
      if ( ++v49 == (_DWORD)v47 )
        goto LABEL_69;
      if ( v49 >= *(_DWORD *)(v48 + 24) )
LABEL_67:
        sub_1C2D6F4(Instance, v18, v45, v46);
    }
LABEL_92:
    sub_1C2D6EC(Instance, v18);
  }
LABEL_69:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v61 = *(_DWORD *)(Instance + 276);
  v62 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v62->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v61;
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
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_92;
  v64 = Instance;
  this->fields.className = *(struct System_String_o **)(Instance + 24);
  Instance = sub_1C2D434(&this->fields.className);
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
  if ( !(*v20)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v20);
  *(_QWORD *)&v87.fields.currentCryptoKey = v69;
  *(_QWORD *)&v87.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v87, 0);
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
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v79, 0);
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
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x0
  const MethodInfo *v7; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  bool v10; // w26
  EventFortificationMaster_o *v11; // x21
  char v12; // w8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v17; // x25
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_String_o **p_myDetailName; // [xsp+0h] [xbp-C0h]
  struct System_String_o **p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v39; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v40; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2164C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_1C2D490(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__);
    sub_1C2D490(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2164C = 1;
  }
  userEventFortificationList = 0;
  memset(&v42, 0, sizeof(v42));
  v40 = 0;
  entity = 0;
  v39 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    this->fields.myTeamName = EventFortificationListViewItem__get_TargetTeamName(this, v4);
    sub_1C2D434(&this->fields.myTeamName);
    this->fields.myDetailName = EventFortificationListViewItem__get_TargetDetailName(this, v7);
    Instance = (DataManager_o *)sub_1C2D434(&this->fields.myDetailName);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      eventFortificationEntity = targetFortificationWorkItem->fields.eventFortificationEntity;
      if ( eventFortificationEntity )
        LODWORD(eventFortificationEntity) = eventFortificationEntity->fields.workType;
      v10 = 1;
      this->fields.myWorkType = (int)eventFortificationEntity;
      this->fields.svtTypeSetInMaster = 1;
      return v10;
    }
LABEL_36:
    sub_1C2D6EC(Instance, v4);
  }
  v11 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = &this->fields.myDetailName;
  p_myTeamName = &this->fields.myTeamName;
  v12 = 0;
  v42 = v38;
LABEL_16:
  v10 = v12;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v13 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1C2D6EC(v13, v14);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v42.fields._current[2].monitor;
    v17 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0);
    v18 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            monitor,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v20 = v18;
    if ( v18 )
    {
      if ( !MasterData_object )
        sub_1C2D6EC(v18, v19);
      v21 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v18[1].klass,
              0);
      if ( v21 )
      {
        if ( !v11 )
          sub_1C2D6EC(v21, v22);
        v23 = EventFortificationMaster__TryGetEntity(v11, &v40, this->fields.eventId, HIDWORD(current[1].monitor), 0);
        if ( v23 )
        {
          if ( !v40 )
            sub_1C2D6EC(v23, v24);
          *p_myTeamName = v40->fields.name;
          v25 = sub_1C2D434(p_myTeamName);
          if ( !entity )
            sub_1C2D6EC(v25, v26);
          *p_myDetailName = entity->fields.name;
          v27 = sub_1C2D434(p_myDetailName);
          if ( !v40 )
            sub_1C2D6EC(v27, v28);
          this->fields.myWorkType = v40->fields.workType;
          v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v29 )
            sub_1C2D6EC(0, v30);
          v31 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v29,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v31 )
            sub_1C2D6EC(0, v32);
          v33 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v31,
                  &v39,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v20[1].klass,
                  0);
          v12 = 1;
          if ( v33 )
          {
            if ( !v39 )
              sub_1C2D6EC(v33, v34);
            this->fields.svtTypeSetInMaster = v39->fields.type;
            v12 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v10;
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
  if ( (byte_4C21649 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__);
    sub_1C2D490(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21649 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1C2D6EC(this, sort);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
            if ( UserServantEntity__getEventUpVal_42935000(
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
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  __int64 v14; // x2
  __int64 v15; // x3
  _BOOL4 v16; // w8

  if ( (byte_4C21648 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C21648 = 1;
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
                               (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    sub_1C2D6F4(ClassGroupFilterKindList, ClassGroupFilterKindList, v14, v15);
  ClassGroupFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v16 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v16;
}


void EventFortificationListViewItem__ModifyChoiceItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C2D6EC(0, method);
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
  sub_1C2D434(&this->fields.userServantEntity);
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
    sub_1C2D6EC(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void EventFortificationListViewItem__ModifyPushItem(EventFortificationListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  bool v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4C21646 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C21646 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1C2D6EC(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v9, 0)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
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
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v25; // w1
  int64_t v26; // x20
  IconLabelInfo_o *v27; // x21
  int32_t v28; // w3
  int32_t v29; // w1
  struct ServantEntity_o *v30; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v35; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  const MethodInfo *v40; // x2
  struct ServantEntity_o *v41; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v43; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4C21647 & 1) == 0 )
  {
    sub_1C2D490(&EventFortificationListViewManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C21647 = 1;
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
    sub_1C2D6EC(IsBaseSvt, v9);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | userServantEntity->fields.lv;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v16;
  *(_QWORD *)&v48.fields.fakeValue = v15;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v48, 0);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v17 = this->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_83;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v45 = v46;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v45, 0);
      v19 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v19 )
        goto LABEL_83;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v19->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_66;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_53;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v21 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v21;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_83;
      IconLabelInfo__Set_40696284(iconLabelInfo1, 2, v21, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_71;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_42942260((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = tdMaxLv[0];
      v25 = 33;
      goto LABEL_65;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v26 = *(int *)(IsBaseSvt + 268);
      v27 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v26;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v27 )
        goto LABEL_83;
      v28 = IsBaseSvt;
      v29 = 3;
      goto LABEL_48;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      v26 = *(int *)(IsBaseSvt + 264);
      v27 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v26;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v27 )
        goto LABEL_83;
      v28 = IsBaseSvt;
      v29 = 5;
LABEL_48:
      IconLabelInfo__Set_40696284(v27, v29, v26, v28, 0, 0, 0, 0, 0, 0);
      goto LABEL_66;
    case 7:
      v30 = this->fields.servantEntity;
      if ( !v30 )
        goto LABEL_83;
      cost = v30->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_83;
      IconLabelInfo__Set_40696284((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
      v25 = 32;
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
          v35 = sort->fields.manager;
        else
          v35 = 0;
      }
      else
      {
        v35 = 0;
      }
      v37 = this->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_83;
      v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v39;
      *(_QWORD *)&v49.fields.fakeValue = v38;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49, 0);
      if ( !v35 )
        goto LABEL_83;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v35,
                    IsBaseSvt,
                    v40);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_80:
      v41 = this->fields.servantEntity;
      if ( !v41 )
        goto LABEL_83;
      collectionNo = v41->fields.collectionNo;
      v43 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48))
                              | collectionNo;
      if ( !v43 )
        goto LABEL_83;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v43->fields.lv;
      IsBaseSvt = (int64_t)v43;
      goto LABEL_69;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v25 = 44;
      goto LABEL_65;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_83;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v25 = 45;
LABEL_65:
      IconLabelInfo__Set_40696284((IconLabelInfo_o *)IsBaseSvt, v25, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_40696284(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0, 0);
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
  sub_1C2D434(&this->fields.userServantEntity);
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
  if ( (byte_4C2164F & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2164F = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0 )
    sub_1C2D6EC(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v9, 0);
}


bool EventFortificationListViewItem___GetIsEventUpValShow_b__46_0(
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

  if ( (byte_4C2164E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2164E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = this->fields.userServantEntity;
  if ( !v11 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v11->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1C2D6EC(Master_object, v6);
  return UserServantEntity__getEventUpVal_42935000(
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
  if ( (byte_4C2164B & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2164B = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C2D6EC(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v7, 0);
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
    sub_1C2D6EC(userServantEntity, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  if ( (byte_4C216B1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C216B1 = 1;
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
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C2164A & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2164A = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C2D6EC(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


bool EventFortificationListViewItem__isNotSelect(
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
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  Il2CppClass **v15; // x0
  System_Func_object__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  EventFortificationSvtMaster_o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x10
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x11
  bool v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C2164D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_1C2D490(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1C2D490(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__);
    sub_1C2D490(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
    byte_4C2164D = 1;
  }
  eventFortificationSvtList = 0;
  memset(&v26, 0, sizeof(v26));
  v5 = sub_1C2D6DC(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0) )
    return 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C2D6EC(v9, v10);
    if ( !HIDWORD(v26.fields._current[1].monitor) )
    {
      if ( !v8 )
        sub_1C2D6EC(v9, v10);
      items = v8->fields._items;
      v13 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C2D6EC(v9, v10);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          current,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v15[4] = (Il2CppClass *)current;
        sub_1C2D434(v15 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v17 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v18,
                                                     (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1C2D6EC(Master_object, v7);
  v19 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v26 = v25;
  do
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v20 )
      break;
    if ( !v26.fields._current )
      sub_1C2D6EC(v20, v21);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1C2D6EC(v20, v21);
    eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      sub_1C2D6EC(v20, v21);
  }
  while ( HIDWORD(v26.fields._current[1].klass) != eventFortificationDetailEntity->fields.fortificationIdx
       || LODWORD(v26.fields._current[1].monitor) != targetFortificationWorkItem->fields.position );
  v24 = !v20;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return v24 && SLODWORD(v19->fields._MasterName_k__BackingField) > 0;
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
    sub_1C2D6EC(this, 0);
  return x->fields.svtId == this->fields.svtId;
}