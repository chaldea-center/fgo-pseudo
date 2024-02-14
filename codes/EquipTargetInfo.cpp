void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216E1B & 1) == 0 )
  {
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v1);
    byte_4216E1B = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_28810360(
        EquipTargetInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int128 v11; // q1
  struct AddSkillInfoData_array *addSkills; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( equipTargetInfo )
  {
    this->fields.userId = equipTargetInfo->fields.userId;
    v11 = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&equipTargetInfo->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v11;
    this->fields.svtId = equipTargetInfo->fields.svtId;
    this->fields.limitCount = equipTargetInfo->fields.limitCount;
    this->fields.lv = equipTargetInfo->fields.lv;
    this->fields.exp = equipTargetInfo->fields.exp;
    this->fields.hp = equipTargetInfo->fields.hp;
    this->fields.atk = equipTargetInfo->fields.atk;
    this->fields.skillId1 = equipTargetInfo->fields.skillId1;
    this->fields.skillId2 = equipTargetInfo->fields.skillId2;
    this->fields.skillId3 = equipTargetInfo->fields.skillId3;
    this->fields.skillLv1 = equipTargetInfo->fields.skillLv1;
    this->fields.skillLv2 = equipTargetInfo->fields.skillLv2;
    this->fields.skillLv3 = equipTargetInfo->fields.skillLv3;
    addSkills = equipTargetInfo->fields.addSkills;
    this->fields.addSkills = addSkills;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.addSkills,
      (System_Int32_array **)addSkills,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    this->fields.updatedAt = equipTargetInfo->fields.updatedAt;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipTargetInfo___ctor_28810548(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  __int64 v26; // x1
  int64_t UserId; // x0
  __int128 v28; // q1
  _DWORD *v29; // x22
  WarEntity_o *Entity; // x21
  int32_t v31; // w20
  int v32; // w21
  int v33; // w25
  int v34; // w22
  int v35; // w24
  EquipTargetInfo_c *v36; // x0
  int32_t v37; // w8
  __int64 v38; // x20
  __int64 v39; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v41; // x21
  __int64 v42; // x22
  ServantSkillMaster_o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  int64_t v46; // x20
  __int64 v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x21
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 i; // x23
  AddSkillInfoData_o *v59; // x22
  __int64 v60; // x8
  __int64 v61; // x8
  unsigned __int64 v62; // x27
  struct AddSkillInfoData_array *v63; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  __int64 v65; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4216E10 & 1) == 0 )
  {
    sub_B0D8A4(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4216E10 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSetUserId )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !this )
LABEL_72:
      sub_B0D97C(UserId);
  }
  else
  {
    UserId = 1LL;
    if ( !this )
      goto LABEL_72;
  }
  this->fields.userId = UserId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v66, 1LL, 0LL);
  v28 = *(_OWORD *)&v66.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v66.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v29 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_72;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_33;
  }
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_72;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
             svtId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_72;
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[1].klass), level, 0LL);
  if ( !v29 )
    goto LABEL_72;
  v31 = v29[9];
  if ( !UserId )
  {
    this->fields.hp = v31;
LABEL_33:
    v37 = v29[11];
    goto LABEL_34;
  }
  v33 = v29[10];
  v32 = v29[11];
  v34 = v29[12];
  v35 = *(_DWORD *)(UserId + 28);
  v36 = EquipTargetInfo_TypeInfo;
  if ( (BYTE3(EquipTargetInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v36 = EquipTargetInfo_TypeInfo;
  }
  this->fields.hp = v35 * (v33 - v31) / v36->static_fields->LOT_RATE + v31;
  v37 = v35 * (v34 - v32) / v36->static_fields->LOT_RATE + v32;
LABEL_34:
  this->fields.atk = v37;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v39 = **(_QWORD **)(v38 + 192);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AA65A4(v39);
  UserId = **(_QWORD **)(v39 + 184);
  if ( !UserId )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)UserId,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v42 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v43 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v42;
  *(_QWORD *)&v67.fields.fakeValue = v41;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v67, 0LL);
  if ( !v43 )
    goto LABEL_72;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v43,
                      UserId,
                      this->fields.userId,
                      this->fields.lv,
                      this->fields.limitCount,
                      -1,
                      -1,
                      -1LL,
                      0LL);
  if ( !UserId )
    goto LABEL_72;
  v46 = UserId;
  if ( !*(_DWORD *)(UserId + 24) )
    goto LABEL_73;
  v47 = *(_QWORD *)(UserId + 32);
  if ( v47 )
    LODWORD(v47) = *(_DWORD *)(v47 + 28);
  this->fields.skillId1 = v47;
  if ( *(_DWORD *)(UserId + 24) <= 1u )
    goto LABEL_73;
  v48 = *(_QWORD *)(UserId + 40);
  if ( v48 )
    LODWORD(v48) = *(_DWORD *)(v48 + 28);
  this->fields.skillId2 = v48;
  if ( *(_DWORD *)(UserId + 24) <= 2u )
  {
LABEL_73:
    v65 = sub_B0D9A8(UserId);
    sub_B0D948(v65, 0LL);
  }
  v49 = *(_QWORD *)(UserId + 48);
  if ( v49 )
    LODWORD(v49) = *(_DWORD *)(v49 + 28);
  this->fields.skillId3 = v49;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AddSkillInfoData__TypeInfo,
                                                                                                  v44,
                                                                                                  v45);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v62 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v62 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v62 >= *(unsigned int *)(v46 + 24) )
      goto LABEL_73;
    if ( *(_QWORD *)(v46 + 8 * i) )
    {
      v59 = (AddSkillInfoData_o *)sub_B0D974(AddSkillInfoData_TypeInfo, v51, v52);
      AddSkillInfoData___ctor(v59, 0LL);
      if ( v62 >= *(unsigned int *)(v46 + 24) )
        goto LABEL_73;
      v60 = *(_QWORD *)(v46 + 8 * i);
      if ( !v60 || !v59 )
        goto LABEL_72;
      v59->fields.num = *(_DWORD *)(v60 + 20);
      if ( v62 >= *(unsigned int *)(v46 + 24) )
        goto LABEL_73;
      v61 = *(_QWORD *)(v46 + 8 * i);
      if ( !v61 )
        goto LABEL_72;
      v59->fields.skillId = *(_DWORD *)(v61 + 28);
      if ( !v50 )
        goto LABEL_72;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v50,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    }
  }
  if ( v50 )
  {
    v63 = (struct AddSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = v63;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v63 = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)p_addSkills, (System_Int32_array **)v63, v52, v53, v54, v55, v56, v57);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4216E1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4216E1A = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
  if ( !v12 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v12,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_12:
    sub_B0D97C(Instance);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipTargetInfo__getEventUpVal(
        EquipTargetInfo_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  DataManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 v19; // x28
  bool v20; // w27
  int32_t v21; // w1
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v23; // x26
  int32_t EventId; // w0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4216E17 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4216E17 = 1;
  }
  if ( setupInfo )
  {
    v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v12;
    *(_QWORD *)&v30.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
LABEL_25:
        sub_B0D97C(Instance);
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
      SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
      v19 = 0LL;
      v20 = 1;
      while ( 1 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v19 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
          break;
        if ( !SkillIdList )
          goto LABEL_25;
        if ( v19 >= SkillIdList->max_length )
          goto LABEL_26;
        v21 = SkillIdList->m_Items[v19 + 1];
        if ( v21 >= 1 )
        {
          if ( !SkillLevelList )
            goto LABEL_25;
          if ( v19 >= SkillLevelList->max_length )
          {
LABEL_26:
            v26 = sub_B0D9A8(Instance);
            sub_B0D948(v26, 0LL);
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v21,
                     SkillLevelList->m_Items[v19 + 1],
                     0LL);
          if ( Entity )
          {
            v23 = Entity;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            if ( SkillLvEntity__getEventUpVal(
                   v23,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   EventId,
                   1,
                   0,
                   0LL) )
            {
              return v20;
            }
          }
        }
        ++v19;
      }
    }
  }
  return 0;
}


bool __fastcall EquipTargetInfo__getEventUpVal_28815196(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x21
  DataManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v19; // x25
  bool v20; // w24
  bool v21; // w22
  int32_t v22; // w1
  SkillLvEntity_o *Entity; // x0
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4216E18 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216E18 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v11;
  *(_QWORD *)&v25.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_27;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_B0D97C(Instance);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
  v19 = 0LL;
  v20 = 0;
  v21 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v19 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
      return v20;
    if ( !SkillIdList )
      goto LABEL_27;
    if ( v19 >= SkillIdList->max_length )
      goto LABEL_28;
    v22 = SkillIdList->m_Items[v19 + 1];
    if ( v22 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_27;
      if ( v19 >= SkillLevelList->max_length )
      {
LABEL_28:
        v24 = sub_B0D9A8(Instance);
        sub_B0D948(v24, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v22, SkillLevelList->m_Items[v19 + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26144328(Entity, eventUpVallInfo, 1, 0, v21, 0, 0LL) )
          v20 = 1;
      }
    }
    ++v19;
  }
}


bool __fastcall EquipTargetInfo__getExpInfo(
        EquipTargetInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x24
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v21; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v23; // x24
  int datalist; // w25
  bool result; // w0
  float v26; // s0
  int v27; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4216E19 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4216E19 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v14;
  *(_QWORD *)&v28.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL) < 1 )
  {
    result = 0;
    v26 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v18;
    *(_QWORD *)&v29.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
    if ( !v19 )
      goto LABEL_27;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v21) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v23 = (ServantExpMaster_o *)Instance;
      if ( lv >= 2 )
      {
        if ( !Entity )
          goto LABEL_27;
        if ( !Instance )
          goto LABEL_27;
        Instance = (DataManager_o *)ServantExpMaster__GetEntity(
                                      (ServantExpMaster_o *)Instance,
                                      HIDWORD(Entity[1].klass),
                                      lv - 1,
                                      0LL);
        if ( !Instance )
          goto LABEL_27;
        datalist = (int)Instance->fields.datalist;
      }
      else
      {
        if ( !Entity || !Instance )
          goto LABEL_27;
        datalist = 0;
      }
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v23, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v27 = (int)Instance->fields.datalist;
        result = 1;
        v26 = (float)*exp / (float)(v27 - datalist);
        goto LABEL_26;
      }
LABEL_27:
      sub_B0D97C(Instance);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v26 = 1.0;
  }
LABEL_26:
  *barExp = v26;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  int32_t v15; // w1
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v17; // x22
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4216E16 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216E16 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v7;
  *(_QWORD *)&v20.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B0D97C(Instance);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v10);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v15 = SkillIdList->m_Items[i + 1];
      if ( v15 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v19 = sub_B0D9A8(Instance);
          sub_B0D948(v19, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v15, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v17 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v17, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  int32_t v15; // w1
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4216E15 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4216E15 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B0D97C(Instance);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v10);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v15 = SkillIdList->m_Items[i + 1];
      if ( v15 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v18 = sub_B0D9A8(Instance);
          sub_B0D948(v18, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v15, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          result = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
          if ( result > 0 )
            return result;
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getLevelMax(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4216E11 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4216E11 = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  if ( !v11 || (Instance = ServantLimitMaster__GetEntity(v11, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_15:
    sub_B0D97C(Instance);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  struct AddSkillInfoData_array *v11; // x9
  AddSkillInfoData_o *v12; // x9
  __int64 v14; // x0

  if ( (byte_4216E12 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_4216E12 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_23:
    sub_B0D97C(v5);
  namespaze = (unsigned int)v5->_1.namespaze;
  v7 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_25:
    v14 = sub_B0D9A8(v5);
    sub_B0D948(v14, 0LL);
  }
  v5->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( (__int64)v9 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
      {
        v11 = this->fields.addSkills;
        if ( !v11 )
          goto LABEL_23;
        if ( v9 >= v11->max_length )
          goto LABEL_25;
        v12 = v11->m_Items[v9];
        if ( !v12 )
          goto LABEL_23;
        if ( v9 + 3 >= v7->max_length )
          goto LABEL_25;
        *(int32_t *)((char *)&v7->m_Items[1] + (v10 >> 30)) = v12->fields.skillId;
      }
      addSkills = this->fields.addSkills;
      ++v9;
      v10 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_23;
    }
  }
  return v7;
}


void __fastcall EquipTargetInfo__getSkillInfo(
        EquipTargetInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x20
  __int64 v19; // x21
  __int64 v20; // x20
  __int64 v21; // x20
  DataManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v24; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v26; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v28; // x26
  il2cpp_array_size_t v29; // w28
  int32_t *v30; // x27
  int32_t v31; // w1
  WarEntity_o *Entity; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  SkillEntity_o *v35; // x24
  __int64 v36; // x23
  int32_t v37; // w1
  System_Int32_array **EffectTitle; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  SkillInfo_array *v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  Il2CppClass **v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4216E14 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B0D8A4(&SkillInfo___TypeInfo, v8);
    sub_B0D8A4(&SkillInfo_TypeInfo, v9);
    byte_4216E14 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v19;
  *(_QWORD *)&v63.fields.fakeValue = v18;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v63, 0LL) >= 1 )
  {
    v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v21 = **(_QWORD **)(v20 + 192);
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_AA65A4(v21);
    v22 = **(DataManager_o ***)(v21 + 184);
    if ( !v22 )
LABEL_35:
      sub_B0D97C(v22);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          v22,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v24);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v26);
    v28 = 0LL;
    v29 = 0;
    v30 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v22 = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= SHIDWORD(v22[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_35;
      if ( v28 >= SkillIdList->max_length )
      {
LABEL_36:
        v60 = sub_B0D9A8(v22);
        sub_B0D948(v60, 0LL);
      }
      v31 = v30[v28];
      if ( v31 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_35;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v31,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v35 = (SkillEntity_o *)Entity;
          v36 = sub_B0D974(SkillInfo_TypeInfo, v33, v34);
          SkillInfo___ctor((SkillInfo_o *)v36, 0LL);
          if ( v28 >= SkillIdList->max_length )
            goto LABEL_36;
          if ( !v36 )
            goto LABEL_35;
          *(_DWORD *)(v36 + 16) = v30[v28];
          if ( !SkillLevelList )
            goto LABEL_35;
          if ( v28 >= SkillLevelList->max_length )
            goto LABEL_36;
          v37 = SkillLevelList->m_Items[v28 + 1];
          *(_DWORD *)(v36 + 20) = v37;
          *(_DWORD *)(v36 + 24) = SkillEntity__getEffectChargeTurn(v35, v37, 0LL);
          EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v35, 0, 0LL);
          *(_QWORD *)(v36 + 32) = EffectTitle;
          sub_B0D840((BattleServantConfConponent_o *)(v36 + 32), EffectTitle, v39, v40, v41, v42, v43, v44);
          EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v35, *(_DWORD *)(v36 + 20), 0LL);
          *(_QWORD *)(v36 + 40) = EffectExplanation;
          sub_B0D840((BattleServantConfConponent_o *)(v36 + 40), EffectExplanation, v46, v47, v48, v49, v50, v51);
          *(_BYTE *)(v36 + 56) = 1;
          v52 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_35;
          v22 = (DataManager_o *)sub_B0D964(v36, v52->obj.klass->_1.element_class);
          if ( !v22 )
          {
            v61 = sub_B0D99C(0LL);
            sub_B0D948(v61, 0LL);
          }
          if ( v29 >= v52->max_length )
            goto LABEL_36;
          v59 = &v52->obj.klass + (int)v29;
          v59[4] = (Il2CppClass *)v36;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v59 + 4),
            (System_Int32_array **)v36,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          ++v29;
        }
      }
      ++v28;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v9; // x25
  __int64 v10; // x22
  __int64 v12; // x0

  if ( (byte_4216E13 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_4216E13 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B0D8BC(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_20:
    sub_B0D97C(v5);
  namespaze = (unsigned int)v5->_1.namespaze;
  v7 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_22:
    v12 = sub_B0D9A8(v5);
    sub_B0D948(v12, 0LL);
  }
  v5->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( v9 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
      {
        if ( v9 + 3 >= (unsigned __int64)v7->max_length )
          goto LABEL_22;
        *(int32_t *)((char *)&v7->m_Items[1] + (v10 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v10 += 0x100000000LL;
      ++v9;
      if ( !addSkills )
        goto LABEL_20;
    }
  }
  return v7;
}