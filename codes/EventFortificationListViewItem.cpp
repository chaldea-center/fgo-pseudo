void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  const MethodInfo_36EE930 **v7; // x27
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
  IconLabelInfo_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  int64_t Instance; // x0
  __int64 v36; // x1
  struct UserServantEntity_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v38; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x24
  __int64 v40; // x25
  __int64 v41; // x26
  Il2CppObject *Entity; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct UserServantEntity_o *v45; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  UserServantEntity_o *v50; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v52; // x8
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q1
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  __int64 v57; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  bool v60; // w8
  const MethodInfo *v61; // x1
  bool v62; // w0
  int32_t v63; // w2
  int32_t v64; // w3
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  UserServantCollectionMaster_o *v67; // x22
  struct UserServantEntity_o *v68; // x8
  int64_t v69; // x23
  __int64 v70; // x24
  __int64 v71; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v73; // x23
  int64_t v74; // x22
  unsigned int v75; // w24
  __int64 v76; // x25
  __int64 v77; // x8
  const MethodInfo_36EE930 **v78; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v79; // x27
  unsigned int v80; // w29
  __int64 v81; // x8
  unsigned int v82; // w9
  __int64 v83; // x8
  struct UserServantEntity_o *v84; // x9
  __int128 v85; // q0
  __int64 v86; // x28
  int v87; // w22
  BalanceConfig_c *v88; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_String_o *v92; // x1
  int64_t v93; // x23
  int64_t v94; // x8
  struct ServantEntity_o *v95; // x9
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x21
  __int64 v98; // x22
  struct UserServantEntity_o *v99; // x8
  __int64 v100; // x22
  __int64 v101; // x23
  int32_t v102; // w0
  const MethodInfo *v103; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  v7 = (const MethodInfo_36EE930 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4A027FF & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, v14);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserDeckMaster___, v16);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B64A00(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_1B64A00(&IconLabelInfo_TypeInfo, v20);
    sub_1B64A00(&NetworkManager_TypeInfo, v21);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B64A00(&TutorialFlag_TypeInfo, v25);
    byte_4A027FF = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v26, v27, v28);
  v29 = (IconLabelInfo_o *)sub_1B64C4C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo2 = v29;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v29, v30, v31);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v33,
    v34);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v41 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = v41;
  *(_QWORD *)&v110.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v110, 0LL);
  if ( !v39 )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v39,
             Instance,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v43, v44);
  v45 = this->fields.userServantEntity;
  if ( !v45 )
    goto LABEL_85;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v45->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_85;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)Name, v48, v49);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v50 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v50 )
    goto LABEL_85;
  Rarity = UserServantEntity__getRarity(v50, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v52 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v52 )
    goto LABEL_85;
  Instance = UserServantEntity__IsChoice(v52, 0LL);
  v53 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v53 )
    goto LABEL_85;
  v54 = *(_OWORD *)&v53->fields.userId.fields.fakeValue;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v53->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v109;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v108, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_85;
  v55 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v56;
  v60 = v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v107, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v60;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetFortificationWorkItem,
    (int32_t)targetFortificationWorkItem,
    v58,
    v59);
  this->fields.svtTypeSetInMaster = -1;
  v62 = EventFortificationListViewItem__CheckFortificationAppointment(this, v61);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v62;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v63, v64);
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
  Instance = TutorialFlag__Get_37381564(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v99 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v101 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
  v100 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v101;
  *(_QWORD *)&v113.fields.fakeValue = v100;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v113, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v102, v103) )
    goto LABEL_30;
LABEL_31:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v65 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v66 = *(_OWORD *)&v65->fields.userId.fields.fakeValue;
  v67 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v65->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v106 = v109;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v106, 0LL);
  v68 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v69 = Instance;
  v71 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v71;
  *(_QWORD *)&v111.fields.fakeValue = v70;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v111, 0LL);
  if ( !v67 )
    goto LABEL_85;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v67, v69, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_85;
  Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  v73 = *(_QWORD *)(Instance + 24);
  v74 = Instance;
  if ( (int)v73 >= 1 )
  {
    v75 = 0;
    while ( 1 )
    {
      v76 = *(_QWORD *)(v74 + 8LL * (int)v75 + 32);
      if ( !v76 )
        break;
      v77 = *(_QWORD *)(v76 + 48);
      if ( !v77 )
        break;
      v78 = v7;
      v79 = v38;
      v80 = 0;
      while ( 1 )
      {
        v81 = *(_QWORD *)(v77 + 16);
        if ( !v81 )
          goto LABEL_85;
        v82 = *(_DWORD *)(v81 + 24);
        if ( (int)v80 >= (int)v82 )
          break;
        if ( v80 >= v82 )
          goto LABEL_63;
        v83 = *(_QWORD *)(v81 + 8LL * (int)v80 + 32);
        if ( !v83 )
          goto LABEL_85;
        v84 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_85;
        v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
        v86 = *(_QWORD *)(v83 + 24);
        *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v109.fields.fakeValue = v85;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v105 = v109;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v105, 0LL);
        if ( v86 == Instance )
        {
          v38 = v79;
          v7 = v78;
          this->fields.isParty = 1;
          goto LABEL_65;
        }
        v77 = *(_QWORD *)(v76 + 48);
        ++v80;
        if ( !v77 )
          goto LABEL_85;
      }
      v38 = v79;
      v7 = v78;
      if ( this->fields.isParty )
        goto LABEL_65;
      if ( ++v75 == (_DWORD)v73 )
        goto LABEL_65;
      if ( v75 >= *(_DWORD *)(v74 + 24) )
LABEL_63:
        sub_1B64C64(Instance, v36);
    }
LABEL_85:
    sub_1B64C5C(Instance, v36);
  }
LABEL_65:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v87 = *(_DWORD *)(Instance + 276);
  v88 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v88 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v88->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v87;
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
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_85;
  v92 = *(struct System_String_o **)(Instance + 24);
  v93 = Instance;
  this->fields.className = v92;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.className, (int32_t)v92, v90, v91);
  v94 = *(int *)(v93 + 48);
  v95 = this->fields.servantEntity;
  this->fields.priority = v94;
  this->fields.sortValue1B = v94;
  if ( !v95 )
    goto LABEL_85;
  v96 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  this->fields.sortValue2 = ((__int64)v95->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v96->fields.lv;
  v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
  if ( !(*v38)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v38);
  *(_QWORD *)&v112.fields.currentCryptoKey = v98;
  *(_QWORD *)&v112.fields.fakeValue = v97;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v112, 0LL);
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
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v17; // x0
  struct System_String_o *TeamName; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_String_o *Name; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  bool v24; // w26
  EventFortificationMaster_o *v25; // x21
  char v26; // w8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v31; // x25
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x24
  _BOOL8 v35; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_String_o *v41; // x1
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_String_o *v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  _BOOL8 v53; // x0
  __int64 v54; // x1
  ServantStatusBattleListViewItem_o *p_myDetailName; // [xsp+0h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v59; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v60; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A02806 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__, v9);
    sub_1B64A00(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v10);
    sub_1B64A00(&System_Func_SetSvtInfo__bool__TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A02806 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v62, 0, sizeof(v62));
  v60 = 0LL;
  entity = 0LL;
  v59 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v17 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.myTeamName, (int32_t)TeamName, v19, v20);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.myDetailName, (int32_t)Name, v22, v23);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          v24 = 1;
          this->fields.myWorkType = EventFortificationWorkItem__get_WorkType(
                                      (EventFortificationWorkItem_o *)Instance,
                                      0LL);
          this->fields.svtTypeSetInMaster = 1;
          return v24;
        }
      }
    }
LABEL_35:
    sub_1B64C5C(Instance, v15);
  }
  v25 = (EventFortificationMaster_o *)v17;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = (ServantStatusBattleListViewItem_o *)&this->fields.myDetailName;
  p_myTeamName = (ServantStatusBattleListViewItem_o *)&this->fields.myTeamName;
  v26 = 0;
  v62 = v58;
LABEL_16:
  v24 = v26;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v62.fields._current;
    if ( !v62.fields._current )
      sub_1B64C5C(v27, v28);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v62.fields._current[2].monitor;
    v31 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0LL);
    v32 = System_Linq_Enumerable__FirstOrDefault_object__48628184(
            monitor,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v34 = v32;
    if ( v32 )
    {
      if ( !MasterData_object )
        sub_1B64C5C(v32, v33);
      v35 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v32[1].klass,
              0LL);
      if ( v35 )
      {
        if ( !v25 )
          sub_1B64C5C(v35, v36);
        v37 = EventFortificationMaster__TryGetEntity(v25, &v60, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v37 )
        {
          if ( !v60 )
            sub_1B64C5C(v37, v38);
          v41 = v60->fields.name;
          p_myTeamName->klass = (ServantStatusBattleListViewItem_c *)v41;
          sub_1B649A4(p_myTeamName, (int32_t)v41, v39, v40);
          if ( !entity )
            sub_1B64C5C(v42, v43);
          v46 = entity->fields.name;
          p_myDetailName->klass = (ServantStatusBattleListViewItem_c *)v46;
          sub_1B649A4(p_myDetailName, (int32_t)v46, v44, v45);
          if ( !v60 )
            sub_1B64C5C(v47, v48);
          this->fields.myWorkType = v60->fields.workType;
          v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v49 )
            sub_1B64C5C(0LL, v50);
          v51 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v49,
                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v51 )
            sub_1B64C5C(0LL, v52);
          v53 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v51,
                  &v59,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v34[1].klass,
                  0LL);
          v26 = 1;
          if ( v53 )
          {
            if ( !v59 )
              sub_1B64C5C(v53, v54);
            this->fields.svtTypeSetInMaster = v59->fields.type;
            v26 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v24;
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
  if ( (byte_4A02803 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B64A00(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__, v9);
    sub_1B64A00(&System_Func_EventGroupEntity__bool__TypeInfo, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v11);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    this = (EventFortificationListViewItem_o *)sub_1B64A00(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v13);
    byte_4A02803 = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1B64C5C(this, sort);
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
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v19 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v19,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v19,
                         (const MethodInfo_2E27164 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
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
            if ( UserServantEntity__getEventUpVal_39876556(
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
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  _BOOL4 v17; // w8

  if ( (byte_4A02802 & 1) == 0 )
  {
    sub_1B64A00(&FilterKindList_TypeInfo, sort);
    sub_1B64A00(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B64A00(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4A02802 = 1;
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
                               (const MethodInfo_3496BF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_3496BF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3496BF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3496BF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1B64AA8(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_38:
    sub_1B64C5C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
    sub_1B64C64(ClassGroupFilterKindList, ClassGroupFilterKindList);
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
    sub_1B64C5C(0LL, method);
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
  sub_1B649A4(
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
    sub_1B64C5C(0LL, method);
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

  if ( (byte_4A02800 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A02800 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1B64C5C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v9, 0LL)
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
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v27; // w1
  struct UserServantEntity_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  struct ServantEntity_o *v30; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v35; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  struct ServantEntity_o *v40; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4A02801 & 1) == 0 )
  {
    sub_1B64A00(&EventFortificationListViewManager_TypeInfo, sort);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4A02801 = 1;
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
    sub_1B64C5C(IsBaseSvt, v11);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v18;
  *(_QWORD *)&v47.fields.fakeValue = v17;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v47, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v19 = this->fields.userServantEntity;
      if ( !v19 )
        goto LABEL_82;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v44, 0LL);
      v21 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v21 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v21->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_52;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      v23 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v23;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__Set_37830092(iconLabelInfo1, 2, v23, IsBaseSvt, 0, 0, 0, 0, 0LL);
      goto LABEL_70;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_39883788((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = tdMaxLv[0];
      v27 = 33;
      goto LABEL_64;
    case 5:
      v28 = this->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_82;
      hp = v28->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v28->fields.adjustHp;
      v27 = 3;
      goto LABEL_64;
    case 6:
      v29 = this->fields.userServantEntity;
      if ( !v29 )
        goto LABEL_82;
      hp = v29->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v29->fields.adjustAtk;
      v27 = 5;
      goto LABEL_64;
    case 7:
      v30 = this->fields.servantEntity;
      if ( !v30 )
        goto LABEL_82;
      cost = v30->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_37830092((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      v27 = 32;
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
          v35 = sort->fields.manager;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      v37 = this->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_82;
      v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v39;
      *(_QWORD *)&v48.fields.fakeValue = v38;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v48, 0LL);
      if ( !v35 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v35,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v40 = this->fields.servantEntity;
      if ( !v40 )
        goto LABEL_82;
      collectionNo = v40->fields.collectionNo;
      v42 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v42 )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v42->fields.lv;
      IsBaseSvt = (int64_t)v42;
      goto LABEL_68;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v27 = 44;
      goto LABEL_64;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v27 = 45;
LABEL_64:
      IconLabelInfo__Set_37830092((IconLabelInfo_o *)IsBaseSvt, v27, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37830092(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  sub_1B649A4(
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
  if ( (byte_4A02809 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B64A00(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 info);
    byte_4A02809 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_1B64C5C(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v9, 0LL);
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

  if ( (byte_4A02808 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A02808 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v16, 0LL);
  if ( !entity || !v11 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1B64C5C(Master_object, v9);
  return UserServantEntity__getEventUpVal_39876556(
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
  if ( (byte_4A02805 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B64A00(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4A02805 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64C5C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v7, 0LL);
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
    sub_1B64C5C(userServantEntity, method);
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
    sub_1B64C5C(0LL, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1B64C5C(0LL, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1B64C5C(0LL, method);
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
  if ( (byte_4A02804 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1B64A00(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_4A02804 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64C5C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v6, 0LL);
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
  System_Collections_Generic_List_object__o *v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Func_object__bool__o *v33; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  EventFortificationSvtMaster_o *v35; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  bool v38; // w21
  Il2CppObject *v39; // x22
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w23
  __int64 FortificationIdx; // x0
  __int64 v43; // x1
  struct EventFortificationWorkItem_o *v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A02807 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v10);
    sub_1B64A00(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v15);
    sub_1B64A00(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v16);
    sub_1B64A00(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v17);
    sub_1B64A00(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v18);
    byte_4A02807 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v46, 0, sizeof(v46));
  v19 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_1B64C4C(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_35;
  v19->fields.svtId = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B64C5C(v23, v24);
    if ( !HIDWORD(v46.fields._current[1].monitor) )
    {
      if ( !v22 )
        sub_1B64C5C(v23, v24);
      items = v22->fields._items;
      v29 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B64C5C(v23, v24);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          current,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v31[4] = (Il2CppClass *)current;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)current, v25, v26);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v33 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v19,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v34,
                                                     (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1B64C5C(Master_object, v21);
  v35 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    v38 = v36;
    if ( !v36 )
      break;
    v39 = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B64C5C(v36, v37);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1B64C5C(0LL, v37);
    klass_high = HIDWORD(v46.fields._current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v44 = this->fields.targetFortificationWorkItem;
      if ( !v44 )
        sub_1B64C5C(FortificationIdx, v43);
      if ( LODWORD(v39[1].monitor) == v44->fields.position )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return !v38 && SLODWORD(v35->fields._MasterName_k__BackingField) > 0;
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
    sub_1B64C5C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}