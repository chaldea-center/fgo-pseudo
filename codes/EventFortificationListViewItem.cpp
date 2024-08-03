// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_36EC03C **v7; // x27
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
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  IconLabelInfo_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  int64_t Instance; // x0
  struct UserServantEntity_o *v38; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v39; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  __int64 v41; // x25
  __int64 v42; // x26
  Il2CppObject *Entity; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct UserServantEntity_o *v46; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  UserServantEntity_o *v51; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q1
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  __int64 v58; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  bool v61; // w8
  const MethodInfo *v62; // x1
  bool v63; // w0
  int32_t v64; // w2
  int32_t v65; // w3
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  UserServantCollectionMaster_o *v68; // x22
  struct UserServantEntity_o *v69; // x8
  int64_t v70; // x23
  __int64 v71; // x24
  __int64 v72; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v74; // x1
  __int64 v75; // x23
  int64_t v76; // x22
  unsigned int v77; // w24
  __int64 v78; // x25
  __int64 v79; // x8
  const MethodInfo_36EC03C **v80; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v81; // x27
  unsigned int v82; // w29
  __int64 v83; // x8
  unsigned int v84; // w9
  __int64 v85; // x8
  struct UserServantEntity_o *v86; // x9
  __int128 v87; // q0
  __int64 v88; // x28
  int v89; // w22
  BalanceConfig_c *v90; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_String_o *v94; // x1
  int64_t v95; // x23
  int64_t v96; // x8
  struct ServantEntity_o *v97; // x9
  struct UserServantEntity_o *v98; // x8
  __int64 v99; // x21
  __int64 v100; // x22
  struct UserServantEntity_o *v101; // x8
  __int64 v102; // x22
  __int64 v103; // x23
  int32_t v104; // w0
  const MethodInfo *v105; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v7 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4A000DC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v20);
    sub_1B640C8(&NetworkManager_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&TutorialFlag_TypeInfo, v25);
    byte_4A000DC = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, userServantEntity, *(_QWORD *)&eventId);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v26, v27, v28);
  v31 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v29, v30);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo2 = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v31, v32, v33);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v35,
    v36);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v39 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v42 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v42;
  *(_QWORD *)&v112.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v112, 0LL);
  if ( !v40 )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v44, v45);
  v46 = this->fields.userServantEntity;
  if ( !v46 )
    goto LABEL_85;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_85;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)Name, v49, v50);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v51 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v51 )
    goto LABEL_85;
  Rarity = UserServantEntity__getRarity(v51, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v53 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v53 )
    goto LABEL_85;
  Instance = UserServantEntity__IsChoice(v53, 0LL);
  v54 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v54 )
    goto LABEL_85;
  v55 = *(_OWORD *)&v54->fields.userId.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v54->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v110, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_85;
  v56 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  v58 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v57;
  v61 = v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v109, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v61;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem,
    (int32_t)targetFortificationWorkItem,
    v59,
    v60);
  this->fields.svtTypeSetInMaster = -1;
  v63 = EventFortificationListViewItem__CheckFortificationAppointment(this, v62);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v64, v65);
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
  Instance = TutorialFlag__Get_37376848(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v101 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
  v102 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v103;
  *(_QWORD *)&v115.fields.fakeValue = v102;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v115, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v104, v105) )
    goto LABEL_30;
LABEL_31:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v66 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v67 = *(_OWORD *)&v66->fields.userId.fields.fakeValue;
  v68 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v66->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v111;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v108, 0LL);
  v69 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v70 = Instance;
  v72 = *(_QWORD *)&v69->fields.svtId.fields.currentCryptoKey;
  v71 = *(_QWORD *)&v69->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v72;
  *(_QWORD *)&v113.fields.fakeValue = v71;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v113, 0LL);
  if ( !v68 )
    goto LABEL_85;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v68, v70, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_85;
  Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  v75 = *(_QWORD *)(Instance + 24);
  v76 = Instance;
  if ( (int)v75 >= 1 )
  {
    v77 = 0;
    while ( 1 )
    {
      v78 = *(_QWORD *)(v76 + 8LL * (int)v77 + 32);
      if ( !v78 )
        break;
      v79 = *(_QWORD *)(v78 + 48);
      if ( !v79 )
        break;
      v80 = v7;
      v81 = v39;
      v82 = 0;
      while ( 1 )
      {
        v83 = *(_QWORD *)(v79 + 16);
        if ( !v83 )
          goto LABEL_85;
        v84 = *(_DWORD *)(v83 + 24);
        if ( (int)v82 >= (int)v84 )
          break;
        if ( v82 >= v84 )
          goto LABEL_63;
        v85 = *(_QWORD *)(v83 + 8LL * (int)v82 + 32);
        if ( !v85 )
          goto LABEL_85;
        v86 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_85;
        v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
        v88 = *(_QWORD *)(v85 + 24);
        *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v111.fields.fakeValue = v87;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v107 = v111;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v107, 0LL);
        if ( v88 == Instance )
        {
          v39 = v81;
          v7 = v80;
          this->fields.isParty = 1;
          goto LABEL_65;
        }
        v79 = *(_QWORD *)(v78 + 48);
        ++v82;
        if ( !v79 )
          goto LABEL_85;
      }
      v39 = v81;
      v7 = v80;
      if ( this->fields.isParty )
        goto LABEL_65;
      if ( ++v77 == (_DWORD)v75 )
        goto LABEL_65;
      if ( v77 >= *(_DWORD *)(v76 + 24) )
LABEL_63:
        sub_1B6432C(Instance, v74);
    }
LABEL_85:
    sub_1B64324(Instance);
  }
LABEL_65:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v89 = *(_DWORD *)(Instance + 276);
  v90 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v90 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v90->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v89;
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
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_85;
  v94 = *(struct System_String_o **)(Instance + 24);
  v95 = Instance;
  this->fields.className = v94;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.className, (int32_t)v94, v92, v93);
  v96 = *(int *)(v95 + 48);
  v97 = this->fields.servantEntity;
  this->fields.priority = v96;
  this->fields.sortValue1B = v96;
  if ( !v97 )
    goto LABEL_85;
  v98 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  this->fields.sortValue2 = ((__int64)v97->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v98->fields.lv;
  v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
  if ( !(*v39)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v39);
  *(_QWORD *)&v114.fields.currentCryptoKey = v100;
  *(_QWORD *)&v114.fields.fakeValue = v99;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v114, 0LL);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v16; // x0
  struct System_String_o *TeamName; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_String_o *Name; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  bool v23; // w26
  EventFortificationMaster_o *v24; // x21
  char v25; // w8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v31; // x25
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x24
  _BOOL8 v34; // x0
  _BOOL8 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_String_o *v38; // x1
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_String_o *v42; // x1
  __int64 v43; // x0
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  _BOOL8 v46; // x0
  ServantStatusBattleListViewItem_o *p_myDetailName; // [xsp+0h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v51; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v52; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A000E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__, v9);
    sub_1B640C8(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v10);
    sub_1B640C8(&System_Func_SetSvtInfo__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A000E3 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v54, 0, sizeof(v54));
  v52 = 0LL;
  entity = 0LL;
  v51 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v16 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.myTeamName, (int32_t)TeamName, v18, v19);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.myDetailName, (int32_t)Name, v21, v22);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          v23 = 1;
          this->fields.myWorkType = EventFortificationWorkItem__get_WorkType(
                                      (EventFortificationWorkItem_o *)Instance,
                                      0LL);
          this->fields.svtTypeSetInMaster = 1;
          return v23;
        }
      }
    }
LABEL_35:
    sub_1B64324(Instance);
  }
  v24 = (EventFortificationMaster_o *)v16;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = (ServantStatusBattleListViewItem_o *)&this->fields.myDetailName;
  p_myTeamName = (ServantStatusBattleListViewItem_o *)&this->fields.myTeamName;
  v25 = 0;
  v54 = v50;
LABEL_16:
  v23 = v25;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v26 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1B64324(v26);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v54.fields._current[2].monitor;
    v31 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SetSvtInfo__bool__TypeInfo, v27, v28);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0LL);
    v32 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            monitor,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v33 = v32;
    if ( v32 )
    {
      if ( !MasterData_object )
        sub_1B64324(v32);
      v34 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v32[1].klass,
              0LL);
      if ( v34 )
      {
        if ( !v24 )
          sub_1B64324(v34);
        v35 = EventFortificationMaster__TryGetEntity(v24, &v52, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v35 )
        {
          if ( !v52 )
            sub_1B64324(v35);
          v38 = v52->fields.name;
          p_myTeamName->klass = (ServantStatusBattleListViewItem_c *)v38;
          sub_1B6406C(p_myTeamName, (int32_t)v38, v36, v37);
          if ( !entity )
            sub_1B64324(v39);
          v42 = entity->fields.name;
          p_myDetailName->klass = (ServantStatusBattleListViewItem_c *)v42;
          sub_1B6406C(p_myDetailName, (int32_t)v42, v40, v41);
          if ( !v52 )
            sub_1B64324(v43);
          this->fields.myWorkType = v52->fields.workType;
          v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v44 )
            sub_1B64324(0LL);
          v45 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v44,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v45 )
            sub_1B64324(0LL);
          v46 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v45,
                  &v51,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v33[1].klass,
                  0LL);
          v25 = 1;
          if ( v46 )
          {
            if ( !v51 )
              sub_1B64324(v46);
            this->fields.svtTypeSetInMaster = v51->fields.type;
            v25 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v23;
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_object__bool__o *v21; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v4 = this;
  if ( (byte_4A000E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__, v9);
    sub_1B640C8(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    this = (EventFortificationListViewItem_o *)sub_1B640C8(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v13);
    byte_4A000E0 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1B64324(this);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventGroupEntity__bool__TypeInfo, v19, v20);
              System_Func_object__bool____ctor(
                v21,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v21,
                         (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_36;
            v23 = (EventCampaignMaster_o *)this;
            v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v27.fields.currentCryptoKey = v25;
            *(_QWORD *)&v27.fields.fakeValue = v24;
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                         v27,
                                                         0LL);
            if ( !v23 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v23, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal_39871536(
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
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v26 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v26[5],
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
  _BOOL4 v17; // w8

  if ( (byte_4A000DF & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4A000DF = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
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
      goto LABEL_38;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_38;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_38;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_38:
    sub_1B64324(ClassGroupFilterKindList);
  if ( !ClassGroupFilterKindList->max_length )
    sub_1B6432C(ClassGroupFilterKindList, ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v17 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v17;
}


void __fastcall EventFortificationListViewItem__ModifyChoiceItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64324(0LL);
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
  sub_1B6406C(
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
    sub_1B64324(0LL);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  bool v7; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4A000DD & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A000DD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1B64324(SelfUserGame);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  v7 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v8, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v7;
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
  const MethodInfo *v11; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v13; // w9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  struct UserServantEntity_o *v20; // x8
  int64_t rarity; // x8
  int64_t v22; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v26; // w1
  struct UserServantEntity_o *v27; // x8
  struct UserServantEntity_o *v28; // x8
  struct ServantEntity_o *v29; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v34; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  struct ServantEntity_o *v39; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4A000DE & 1) == 0 )
  {
    sub_1B640C8(&EventFortificationListViewManager_TypeInfo, sort);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4A000DE = 1;
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
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v11), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v13 = !this->fields.isChoice;
  else
    v13 = this->fields.isChoice;
  if ( v13 )
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
    sub_1B64324(IsBaseSvt);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v17;
  *(_QWORD *)&v46.fields.fakeValue = v16;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v18 = this->fields.userServantEntity;
      if ( !v18 )
        goto LABEL_82;
      v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v44;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v43, 0LL);
      v20 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v20 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v20->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_52;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      v22 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v22;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__Set_37825360(iconLabelInfo1, 2, v22, IsBaseSvt, 0, 0, 0, 0, 0LL);
      goto LABEL_70;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_39878768((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = tdMaxLv[0];
      v26 = 33;
      goto LABEL_64;
    case 5:
      v27 = this->fields.userServantEntity;
      if ( !v27 )
        goto LABEL_82;
      hp = v27->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v27->fields.adjustHp;
      v26 = 3;
      goto LABEL_64;
    case 6:
      v28 = this->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_82;
      hp = v28->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v28->fields.adjustAtk;
      v26 = 5;
      goto LABEL_64;
    case 7:
      v29 = this->fields.servantEntity;
      if ( !v29 )
        goto LABEL_82;
      cost = v29->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_37825360((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      v26 = 32;
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
          v34 = sort->fields.manager;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_82;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = v38;
      *(_QWORD *)&v47.fields.fakeValue = v37;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
      if ( !v34 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v34,
                    IsBaseSvt,
                    0LL);
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
      v26 = 44;
      goto LABEL_64;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v26 = 45;
LABEL_64:
      IconLabelInfo__Set_37825360((IconLabelInfo_o *)IsBaseSvt, v26, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37825360(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  sub_1B6406C(
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
  if ( (byte_4A000E6 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B640C8(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 info);
    byte_4A000E6 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_1B64324(this);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v9, 0LL);
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
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  struct UserServantEntity_o *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A000E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A000E5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v10 = Master_object;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  if ( !entity || !v10 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v13 = this->fields.userServantEntity;
  if ( !v13 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v13->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1B64324(Master_object);
  return UserServantEntity__getEventUpVal_39871536(
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
  if ( (byte_4A000E2 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B640C8(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4A000E2 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64324(this);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v7, 0LL);
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
    sub_1B64324(userServantEntity);
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
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1B64324(0LL);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1B64324(0LL);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1B64324(0LL);
  return EventFortificationWorkItem__get_WorkType(targetFortificationWorkItem, 0LL);
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
  if ( (byte_4A000E1 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B640C8(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4A000E1 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64324(this);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v6, 0LL);
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
  EventFortificationListViewItem___c__DisplayClass115_0_o *v19; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x21
  _BOOL8 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_object__bool__o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  EventFortificationSvtMaster_o *v37; // x20
  _BOOL8 v38; // x0
  bool v39; // w21
  Il2CppObject *v40; // x22
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w23
  __int64 FortificationIdx; // x0
  struct EventFortificationWorkItem_o *v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A000E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v10);
    sub_1B640C8(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v16);
    sub_1B640C8(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v17);
    sub_1B640C8(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v18);
    byte_4A000E4 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v46, 0, sizeof(v46));
  v19 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_1B64314(
                                                                     EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo,
                                                                     *(_QWORD *)&svtId,
                                                                     method);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_35;
  v19->fields.svtId = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B64324(v24);
    if ( !HIDWORD(v46.fields._current[1].monitor) )
    {
      if ( !v23 )
        sub_1B64324(v24);
      items = v23->fields._items;
      v29 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1B64324(v24);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v31[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)current, v25, v26);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventFortificationSvtEntity__bool__TypeInfo, v33, v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v19,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v36,
                                                     (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1B64324(Master_object);
  v37 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    v39 = v38;
    if ( !v38 )
      break;
    v40 = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B64324(v38);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1B64324(0LL);
    klass_high = HIDWORD(v46.fields._current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v44 = this->fields.targetFortificationWorkItem;
      if ( !v44 )
        sub_1B64324(FortificationIdx);
      if ( LODWORD(v40[1].monitor) == v44->fields.position )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return !v39 && SLODWORD(v37->fields._MasterName_k__BackingField) > 0;
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
    sub_1B64324(this);
  return x->fields.svtId == this->fields.svtId;
}