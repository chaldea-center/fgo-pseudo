void EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_3A8C5A8 **v7; // x27
  IconLabelInfo_o *v14; // x20
  IconLabelInfo_o *v15; // x21
  struct UserServantEntity_o **p_userServantEntity; // x21
  int64_t Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v20; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  __int64 v22; // x25
  __int64 v23; // x26
  Il2CppObject *Entity; // x0
  UserServantEntity_o *v25; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v27; // x8
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q1
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q0
  __int64 v32; // x24
  bool v33; // w8
  const MethodInfo *v34; // x1
  bool v35; // w0
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q0
  UserServantCollectionMaster_o *v38; // x22
  struct UserServantEntity_o *v39; // x8
  int64_t v40; // x23
  __int64 v41; // x24
  __int64 v42; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v44; // x23
  int64_t v45; // x22
  unsigned int v46; // w24
  __int64 v47; // x25
  __int64 v48; // x8
  const MethodInfo_3A8C5A8 **v49; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v50; // x27
  unsigned int v51; // w29
  __int64 v52; // x8
  unsigned int v53; // w9
  __int64 v54; // x8
  struct UserServantEntity_o *v55; // x9
  __int128 v56; // q0
  __int64 v57; // x28
  int v58; // w22
  BalanceConfig_c *v59; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v61; // x8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x21
  __int64 v65; // x22
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  int64_t v68; // x8
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x22
  __int64 v71; // x23
  int32_t v72; // w0
  const MethodInfo *v73; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  v7 = (const MethodInfo_3A8C5A8 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4CE887F & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CE887F = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo1 = v14;
  sub_1C7BA8C(&this->fields.iconLabelInfo1, v14);
  v15 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo2 = v15;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C7BA8C(&this->fields.iconLabelInfo2, v15);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v20 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v81.fields.currentCryptoKey = v23;
  *(_QWORD *)&v81.fields.fakeValue = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v81, 0);
  if ( !v21 )
    goto LABEL_90;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v21,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C7BA8C(&this->fields.servantEntity, Entity);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_90;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0);
  v25 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v25 )
    goto LABEL_90;
  Rarity = UserServantEntity__getRarity(v25, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_90;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v27 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v27 )
    goto LABEL_90;
  Instance = UserServantEntity__IsChoice(v27, 0);
  v28 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v28 )
    goto LABEL_90;
  v29 = *(_OWORD *)&v28->fields.userId.fields.fakeValue;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v28->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v80;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v79, 0) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_90;
  v30 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
  v32 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v78.fields.fakeValue = v31;
  v33 = v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v78, 0) && !this->fields.isNpc;
  this->fields.isPush = v33;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1C7BA8C(&this->fields.targetFortificationWorkItem, targetFortificationWorkItem);
  this->fields.svtTypeSetInMaster = -1;
  v35 = EventFortificationListViewItem__CheckFortificationAppointment(this, v34);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v35;
  sub_1C7BA8C(&this->fields.setupInfo, setupInfo);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_90;
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_27;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = TutorialFlag__Get_40989036(126, 0);
  if ( (Instance & 1) != 0 )
  {
LABEL_28:
    this->fields.isCanNotSelect = 1;
    goto LABEL_29;
  }
LABEL_27:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_28;
  v69 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v71 = *(_QWORD *)&v69->fields.svtId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&v69->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v71;
  *(_QWORD *)&v84.fields.fakeValue = v70;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v84, 0);
  if ( EventFortificationListViewItem__isNotSelect(this, v72, v73) )
    goto LABEL_28;
LABEL_29:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v36 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v37 = *(_OWORD *)&v36->fields.userId.fields.fakeValue;
  v38 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v77 = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v77, 0);
  v39 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v40 = Instance;
  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v82.fields.currentCryptoKey = v42;
  *(_QWORD *)&v82.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v82, 0);
  if ( !v38 )
    goto LABEL_90;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v38, v40, Instance, 0);
  if ( !Instance )
    goto LABEL_90;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_90;
  Instance = (int64_t)UserDeckMaster__getDeckList(
                        (UserDeckMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        0);
  if ( !Instance )
    goto LABEL_90;
  v44 = *(_QWORD *)(Instance + 24);
  v45 = Instance;
  if ( (int)v44 >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      v47 = *(_QWORD *)(v45 + 8LL * (int)v46 + 32);
      if ( !v47 )
        break;
      v48 = *(_QWORD *)(v47 + 48);
      if ( !v48 )
        break;
      v49 = v7;
      v50 = v20;
      v51 = 0;
      while ( 1 )
      {
        v52 = *(_QWORD *)(v48 + 16);
        if ( !v52 )
          goto LABEL_90;
        v53 = *(_DWORD *)(v52 + 24);
        if ( (int)v51 >= (int)v53 )
          break;
        if ( v51 >= v53 )
          goto LABEL_65;
        v54 = *(_QWORD *)(v52 + 8LL * (int)v51 + 32);
        if ( !v54 )
          goto LABEL_90;
        v55 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_90;
        v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
        v57 = *(_QWORD *)(v54 + 24);
        *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v80.fields.fakeValue = v56;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v76 = v80;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v76, 0);
        if ( v57 == Instance )
        {
          v20 = v50;
          v7 = v49;
          this->fields.isParty = 1;
          goto LABEL_67;
        }
        v48 = *(_QWORD *)(v47 + 48);
        ++v51;
        if ( !v48 )
          goto LABEL_90;
      }
      v20 = v50;
      v7 = v49;
      if ( this->fields.isParty )
        goto LABEL_67;
      if ( ++v46 == (_DWORD)v44 )
        goto LABEL_67;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
LABEL_65:
        sub_1C7BD48(Instance);
    }
LABEL_90:
    sub_1C7BD40(Instance, v18);
  }
LABEL_67:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  v58 = *(_DWORD *)(Instance + 276);
  v59 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v59 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v59->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v58;
  if ( !Instance )
    goto LABEL_90;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v7);
  if ( !Instance )
    goto LABEL_90;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_90;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_90;
  v61 = *(int *)(Instance + 52);
  servantEntity = this->fields.servantEntity;
  this->fields.priority = v61;
  this->fields.sortValue1B = v61;
  if ( !servantEntity )
    goto LABEL_90;
  v63 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_90;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v63->fields.lv;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !(*v20)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v20);
  *(_QWORD *)&v83.fields.currentCryptoKey = v65;
  *(_QWORD *)&v83.fields.fakeValue = v64;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v83, 0);
  v66 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v66 )
    goto LABEL_90;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v75 = v80;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v75, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v68;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_90;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_90;
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
  struct System_String_o *TargetTeamName; // x0
  const MethodInfo *v8; // x1
  struct System_String_o *TargetDetailName; // x0
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  bool v12; // w26
  EventFortificationMaster_o *v13; // x21
  char v14; // w8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v19; // x25
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  struct System_String_o *name; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  struct System_String_o *v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  struct System_String_o **p_myDetailName; // [xsp+0h] [xbp-C0h]
  struct System_String_o **p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v43; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v44; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CE8885 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_1C7BAE8(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__);
    sub_1C7BAE8(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8885 = 1;
  }
  userEventFortificationList = 0;
  memset(&v46, 0, sizeof(v46));
  v44 = 0;
  entity = 0;
  v43 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v6 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    TargetTeamName = EventFortificationListViewItem__get_TargetTeamName(this, v4);
    this->fields.myTeamName = TargetTeamName;
    sub_1C7BA8C(&this->fields.myTeamName, TargetTeamName);
    TargetDetailName = EventFortificationListViewItem__get_TargetDetailName(this, v8);
    this->fields.myDetailName = TargetDetailName;
    Instance = (DataManager_o *)sub_1C7BA8C(&this->fields.myDetailName, TargetDetailName);
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
    sub_1C7BD40(Instance, v4);
  }
  v13 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = &this->fields.myDetailName;
  p_myTeamName = &this->fields.myTeamName;
  v14 = 0;
  v46 = v42;
LABEL_16:
  v12 = v14;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1C7BD40(v15, v16);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v46.fields._current[2].monitor;
    v19 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__104_0__,
      0);
    v20 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
            monitor,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v22 = v20;
    if ( v20 )
    {
      if ( !MasterData_object )
        sub_1C7BD40(v20, v21);
      v23 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v20[1].klass,
              0);
      if ( v23 )
      {
        if ( !v13 )
          sub_1C7BD40(v23, v24);
        v25 = EventFortificationMaster__TryGetEntity(v13, &v44, this->fields.eventId, HIDWORD(current[1].monitor), 0);
        if ( v25 )
        {
          if ( !v44 )
            sub_1C7BD40(v25, v26);
          name = v44->fields.name;
          *p_myTeamName = name;
          v28 = sub_1C7BA8C(p_myTeamName, name);
          if ( !entity )
            sub_1C7BD40(v28, v29);
          v30 = entity->fields.name;
          *p_myDetailName = v30;
          v31 = sub_1C7BA8C(p_myDetailName, v30);
          if ( !v44 )
            sub_1C7BD40(v31, v32);
          this->fields.myWorkType = v44->fields.workType;
          v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v33 )
            sub_1C7BD40(0, v34);
          v35 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v33,
                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v35 )
            sub_1C7BD40(0, v36);
          v37 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v35,
                  &v43,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v22[1].klass,
                  0);
          v14 = 1;
          if ( v37 )
          {
            if ( !v43 )
              sub_1C7BD40(v37, v38);
            this->fields.svtTypeSetInMaster = v43->fields.type;
            v14 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
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
  if ( (byte_4CE8883 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_1C7BAE8(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventFortificationListViewItem_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8883 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1C7BD40(this, sort);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v10 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__44_0__,
                0);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_3159728 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
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
            if ( UserServantEntity__getEventUpVal((UserServantEntity_o *)this, v4->fields.setupInfo, bonusKindId, 0, 0) )
              return 1;
            goto LABEL_23;
          case 7u:
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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

  if ( (byte_4CE8882 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C7BAE8(&ServantEventBonusFilterController_TypeInfo);
    byte_4CE8882 = 1;
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
                               (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_40:
    sub_1C7BD40(ClassGroupFilterKindList, sort);
  if ( !LODWORD(ClassGroupFilterKindList->max_length) )
    sub_1C7BD48(ClassGroupFilterKindList);
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
    sub_1C7BD40(0, method);
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
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
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
    sub_1C7BD40(0, method);
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

  if ( (byte_4CE8880 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8880 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1C7BD40(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v9, 0)
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

  if ( (byte_4CE8881 & 1) == 0 )
  {
    sub_1C7BAE8(&EventFortificationListViewManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8881 = 1;
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
    sub_1C7BD40(IsBaseSvt, v9);
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
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v48, 0);
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
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v45, 0);
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
      IconLabelInfo__Set_41483756(iconLabelInfo1, 2, v21, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_71;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_83;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_43714172((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
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
      IconLabelInfo__Set_41483756(v27, v29, v26, v28, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
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
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v49, 0);
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
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)IsBaseSvt, v25, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
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
      IconLabelInfo__Set_41483756(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0, 0);
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
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
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
  if ( (byte_4CE8888 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8888 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0 )
    sub_1C7BD40(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v9, 0);
}


bool EventFortificationListViewItem___GetIsEventUpValShow_b__44_0(
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

  if ( (byte_4CE8887 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE8887 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1C7BD40(Master_object, v6);
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
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4CE8884 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8884 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C7BD40(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v7, 0);
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
    sub_1C7BD40(userServantEntity, method);
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
  struct EventFortificationWorkItem_o *targetFortificationWorkItem; // x8
  struct EventFortificationDetailEntity_o *eventFortificationDetailEntity; // x8

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem
    || (eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity) == 0 )
  {
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
  if ( (byte_4CE88EA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE88EA = 1;
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
    sub_1C7BD40(this, method);
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

  if ( (byte_4CE8886 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_1C7BAE8(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1C7BAE8(&Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__);
    sub_1C7BAE8(&EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
    byte_4CE8886 = 1;
  }
  eventFortificationSvtList = 0;
  memset(&v26, 0, sizeof(v26));
  v5 = sub_1C7BD34(EventFortificationListViewItem___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_DWORD *)(v5 + 16) = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0) )
    return 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C7BD40(v9, v10);
    if ( !HIDWORD(v26.fields._current[1].monitor) )
    {
      if ( !v8 )
        sub_1C7BD40(v9, v10);
      items = v8->fields._items;
      v13 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C7BD40(v9, v10);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          current,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v15[4] = (Il2CppClass *)current;
        sub_1C7BA8C(v15 + 4, current);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v17 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass105_0__isNotSelect_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v18,
                                                     (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1C7BD40(Master_object, v7);
  v19 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v26 = v25;
  do
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v20 )
      break;
    if ( !v26.fields._current )
      sub_1C7BD40(v20, v21);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1C7BD40(v20, v21);
    eventFortificationDetailEntity = targetFortificationWorkItem->fields.eventFortificationDetailEntity;
    if ( !eventFortificationDetailEntity )
      sub_1C7BD40(v20, v21);
  }
  while ( HIDWORD(v26.fields._current[1].klass) != eventFortificationDetailEntity->fields.fortificationIdx
       || LODWORD(v26.fields._current[1].monitor) != targetFortificationWorkItem->fields.position );
  v24 = !v20;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return v24 && SLODWORD(v19->fields._MasterName_k__BackingField) > 0;
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
    sub_1C7BD40(this, 0);
  return x->fields.svtId == this->fields.svtId;
}