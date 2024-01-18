void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A1D5 & 1) == 0 )
  {
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v1);
    byte_418A1D5 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_29550352(
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
    sub_B2C2F8(
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
void __fastcall EquipTargetInfo___ctor_29550540(
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
  __int64 v27; // x1
  int64_t UserId; // x0
  __int128 v29; // q1
  _DWORD *v30; // x22
  WarEntity_o *Entity; // x21
  int32_t v32; // w20
  int v33; // w21
  int v34; // w25
  int v35; // w22
  int v36; // w24
  EquipTargetInfo_c *v37; // x0
  int32_t v38; // w8
  __int64 v39; // x20
  __int64 v40; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v42; // x21
  __int64 v43; // x22
  ServantSkillMaster_o *v44; // x20
  int64_t v45; // x20
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 i; // x23
  AddSkillInfoData_o *v57; // x22
  __int64 v58; // x8
  __int64 v59; // x8
  unsigned __int64 v60; // x27
  struct AddSkillInfoData_array *v61; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_418A1CA & 1) == 0 )
  {
    sub_B2C35C(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&BalanceConfig_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_418A1CA = 1;
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
      sub_B2C434(UserId, v27);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v64, 1LL, 0LL);
  v29 = *(_OWORD *)&v64.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v64.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v29;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v30 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_72;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_33;
  }
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_72;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
             svtId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_72;
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[1].klass), level, 0LL);
  if ( !v30 )
    goto LABEL_72;
  v32 = v30[9];
  if ( !UserId )
  {
    this->fields.hp = v32;
LABEL_33:
    v38 = v30[11];
    goto LABEL_34;
  }
  v34 = v30[10];
  v33 = v30[11];
  v35 = v30[12];
  v36 = *(_DWORD *)(UserId + 28);
  v37 = EquipTargetInfo_TypeInfo;
  if ( (BYTE3(EquipTargetInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v37 = EquipTargetInfo_TypeInfo;
  }
  this->fields.hp = v36 * (v34 - v32) / v37->static_fields->LOT_RATE + v32;
  v38 = v36 * (v35 - v33) / v37->static_fields->LOT_RATE + v33;
LABEL_34:
  this->fields.atk = v38;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v40 = **(_QWORD **)(v39 + 192);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    sub_AC505C(v40);
  UserId = **(_QWORD **)(v40 + 184);
  if ( !UserId )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)UserId,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v44 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v43;
  *(_QWORD *)&v65.fields.fakeValue = v42;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v65, 0LL);
  if ( !v44 )
    goto LABEL_72;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v44,
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
  v45 = UserId;
  if ( !*(_DWORD *)(UserId + 24) )
    goto LABEL_73;
  v46 = *(_QWORD *)(UserId + 32);
  if ( v46 )
    LODWORD(v46) = *(_DWORD *)(v46 + 28);
  this->fields.skillId1 = v46;
  if ( *(_DWORD *)(UserId + 24) <= 1u )
    goto LABEL_73;
  v47 = *(_QWORD *)(UserId + 40);
  if ( v47 )
    LODWORD(v47) = *(_DWORD *)(v47 + 28);
  this->fields.skillId2 = v47;
  if ( *(_DWORD *)(UserId + 24) <= 2u )
  {
LABEL_73:
    v63 = sub_B2C460(UserId);
    sub_B2C400(v63, 0LL);
  }
  v48 = *(_QWORD *)(UserId + 48);
  if ( v48 )
    LODWORD(v48) = *(_DWORD *)(v48 + 28);
  this->fields.skillId3 = v48;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v60 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v60 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v60 >= *(unsigned int *)(v45 + 24) )
      goto LABEL_73;
    if ( *(_QWORD *)(v45 + 8 * i) )
    {
      v57 = (AddSkillInfoData_o *)sub_B2C42C(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v57, 0LL);
      if ( v60 >= *(unsigned int *)(v45 + 24) )
        goto LABEL_73;
      v58 = *(_QWORD *)(v45 + 8 * i);
      if ( !v58 || !v57 )
        goto LABEL_72;
      v57->fields.num = *(_DWORD *)(v58 + 20);
      if ( v60 >= *(unsigned int *)(v45 + 24) )
        goto LABEL_73;
      v59 = *(_QWORD *)(v45 + 8 * i);
      if ( !v59 )
        goto LABEL_72;
      v57->fields.skillId = *(_DWORD *)(v59 + 28);
      if ( !v49 )
        goto LABEL_72;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    }
  }
  if ( v49 )
  {
    v61 = (struct AddSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = v61;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v61 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_addSkills, (System_Int32_array **)v61, v50, v51, v52, v53, v54, v55);
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
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_418A1D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418A1D4 = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
  if ( !v13 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_12:
    sub_B2C434(Instance, v9);
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
  __int64 v14; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v16; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 v20; // x28
  bool v21; // w27
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v23; // x26
  int32_t EventId; // w0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418A1D1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418A1D1 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
LABEL_25:
        sub_B2C434(Instance, v14);
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillIdList = EquipTargetInfo__getSkillIdList(this, v16);
      SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v18);
      v20 = 0LL;
      v21 = 1;
      while ( 1 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v20 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
          break;
        if ( !SkillIdList )
          goto LABEL_25;
        if ( v20 >= SkillIdList->max_length )
          goto LABEL_26;
        v14 = (unsigned int)SkillIdList->m_Items[v20 + 1];
        if ( (int)v14 >= 1 )
        {
          if ( !SkillLevelList )
            goto LABEL_25;
          if ( v20 >= SkillLevelList->max_length )
          {
LABEL_26:
            v26 = sub_B2C460(Instance);
            sub_B2C400(v26, 0LL);
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v14,
                     SkillLevelList->m_Items[v20 + 1],
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
              return v21;
            }
          }
        }
        ++v20;
      }
    }
  }
  return 0;
}


bool __fastcall EquipTargetInfo__getEventUpVal_29555188(
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
  __int64 v13; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v16; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v20; // x25
  bool v21; // w24
  bool v22; // w22
  SkillLvEntity_o *Entity; // x0
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_418A1D2 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A1D2 = 1;
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_27;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_B2C434(Instance, v13);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v16);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v18);
  v20 = 0LL;
  v21 = 0;
  v22 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v20 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
      return v21;
    if ( !SkillIdList )
      goto LABEL_27;
    if ( v20 >= SkillIdList->max_length )
      goto LABEL_28;
    v13 = (unsigned int)SkillIdList->m_Items[v20 + 1];
    if ( (int)v13 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_27;
      if ( v20 >= SkillLevelList->max_length )
      {
LABEL_28:
        v24 = sub_B2C460(Instance);
        sub_B2C400(v24, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v13, SkillLevelList->m_Items[v20 + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_23801352(Entity, eventUpVallInfo, 1, 0, v22, 0, 0LL) )
          v21 = 1;
      }
    }
    ++v20;
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
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x24
  __int64 v19; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v22; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v24; // x24
  int datalist; // w25
  bool result; // w0
  float v27; // s0
  int v28; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418A1D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418A1D3 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v14;
  *(_QWORD *)&v29.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL) < 1 )
  {
    result = 0;
    v27 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
    if ( !v20 )
      goto LABEL_27;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v22) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v24 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v24, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v28 = (int)Instance->fields.datalist;
        result = 1;
        v27 = (float)*exp / (float)(v28 - datalist);
        goto LABEL_26;
      }
LABEL_27:
      sub_B2C434(Instance, v16);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v27 = 1.0;
  }
LABEL_26:
  *barExp = v27;
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
  __int64 v9; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v17; // x22
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_418A1D0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A1D0 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B2C434(Instance, v9);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v11);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v13);
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
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v19 = sub_B2C460(Instance);
          sub_B2C400(v19, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v9, SkillLevelList->m_Items[i + 1], 0LL);
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
  __int64 v9; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_418A1CF & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A1CF = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B2C434(Instance, v9);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v11);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v13);
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
      v9 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v18 = sub_B2C460(Instance);
          sub_B2C400(v18, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v9, SkillLevelList->m_Items[i + 1], 0LL);
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
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitMaster_o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_418A1CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A1CB = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  if ( !v12 || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_15:
    sub_B2C434(Instance, v8);
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
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  struct AddSkillInfoData_array *v12; // x9
  AddSkillInfoData_o *v13; // x9
  __int64 v15; // x0

  if ( (byte_418A1CC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418A1CC = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_23:
    sub_B2C434(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_25:
    v15 = sub_B2C460(v5);
    sub_B2C400(v15, 0LL);
  }
  v5->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v10 = 0LL;
    v11 = 0x300000000LL;
    while ( (__int64)v10 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v10 + 3 )
      {
        v12 = this->fields.addSkills;
        if ( !v12 )
          goto LABEL_23;
        if ( v10 >= v12->max_length )
          goto LABEL_25;
        v13 = v12->m_Items[v10];
        if ( !v13 )
          goto LABEL_23;
        if ( v10 + 3 >= v8->max_length )
          goto LABEL_25;
        *(int32_t *)((char *)&v8->m_Items[1] + (v11 >> 30)) = v13->fields.skillId;
      }
      addSkills = this->fields.addSkills;
      ++v10;
      v11 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_23;
    }
  }
  return v8;
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
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 v22; // x20
  DataManager_o *v23; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v25; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v27; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v29; // x26
  il2cpp_array_size_t v30; // w28
  int32_t *v31; // x27
  WarEntity_o *Entity; // x0
  SkillEntity_o *v33; // x24
  __int64 v34; // x23
  int32_t v35; // w1
  System_Int32_array **EffectTitle; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  SkillInfo_array *v50; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  Il2CppClass **v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_418A1CE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B2C35C(&SkillInfo___TypeInfo, v8);
    sub_B2C35C(&SkillInfo_TypeInfo, v9);
    byte_418A1CE = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v19;
  *(_QWORD *)&v61.fields.fakeValue = v18;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL) >= 1 )
  {
    v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v22 = **(_QWORD **)(v21 + 192);
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_AC505C(v22);
    v23 = **(DataManager_o ***)(v22 + 184);
    if ( !v23 )
LABEL_35:
      sub_B2C434(v23, v20);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          v23,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v25);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v27);
    v29 = 0LL;
    v30 = 0;
    v31 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v23 = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v29 >= SHIDWORD(v23[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_35;
      if ( v29 >= SkillIdList->max_length )
      {
LABEL_36:
        v58 = sub_B2C460(v23);
        sub_B2C400(v58, 0LL);
      }
      v20 = (unsigned int)v31[v29];
      if ( (int)v20 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_35;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v20,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v33 = (SkillEntity_o *)Entity;
          v34 = sub_B2C42C(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v34, 0LL);
          if ( v29 >= SkillIdList->max_length )
            goto LABEL_36;
          if ( !v34 )
            goto LABEL_35;
          *(_DWORD *)(v34 + 16) = v31[v29];
          if ( !SkillLevelList )
            goto LABEL_35;
          if ( v29 >= SkillLevelList->max_length )
            goto LABEL_36;
          v35 = SkillLevelList->m_Items[v29 + 1];
          *(_DWORD *)(v34 + 20) = v35;
          *(_DWORD *)(v34 + 24) = SkillEntity__getEffectChargeTurn(v33, v35, 0LL);
          EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v33, 0, 0LL);
          *(_QWORD *)(v34 + 32) = EffectTitle;
          sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 32), EffectTitle, v37, v38, v39, v40, v41, v42);
          EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v33, *(_DWORD *)(v34 + 20), 0LL);
          *(_QWORD *)(v34 + 40) = EffectExplanation;
          sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 40), EffectExplanation, v44, v45, v46, v47, v48, v49);
          *(_BYTE *)(v34 + 56) = 1;
          v50 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_35;
          v23 = (DataManager_o *)sub_B2C41C(v34, v50->obj.klass->_1.element_class);
          if ( !v23 )
          {
            v59 = sub_B2C454(0LL);
            sub_B2C400(v59, 0LL);
          }
          if ( v30 >= v50->max_length )
            goto LABEL_36;
          v57 = &v50->obj.klass + (int)v30;
          v57[4] = (Il2CppClass *)v34;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v57 + 4),
            (System_Int32_array **)v34,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          ++v30;
        }
      }
      ++v29;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v10; // x25
  __int64 v11; // x22
  __int64 v13; // x0

  if ( (byte_418A1CD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418A1CD = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
LABEL_20:
    sub_B2C434(v5, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_22:
    v13 = sub_B2C460(v5);
    sub_B2C400(v13, 0LL);
  }
  v5->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v10 = 0LL;
    v11 = 0x300000000LL;
    while ( v10 < (int)addSkills->max_length )
    {
      v5 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v5 = BalanceConfig_TypeInfo;
      }
      if ( v5->static_fields->SvtEquipSkillListMax > (int)v10 + 3 )
      {
        if ( v10 + 3 >= (unsigned __int64)v8->max_length )
          goto LABEL_22;
        *(int32_t *)((char *)&v8->m_Items[1] + (v11 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v11 += 0x100000000LL;
      ++v10;
      if ( !addSkills )
        goto LABEL_20;
    }
  }
  return v8;
}