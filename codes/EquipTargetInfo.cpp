void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  if ( (byte_42B2643 & 1) == 0 )
  {
    sub_B52984(&EquipTargetInfo_TypeInfo);
    byte_42B2643 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_29472940(
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
    sub_B52920(
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


void __fastcall EquipTargetInfo___ctor_29473128(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int64_t UserId; // x0
  __int128 v13; // q1
  _DWORD *v14; // x22
  WarEntity_o *Entity; // x21
  int32_t v16; // w20
  int v17; // w21
  int v18; // w25
  int v19; // w22
  int v20; // w24
  EquipTargetInfo_c *v21; // x0
  int32_t v22; // w8
  __int64 v23; // x20
  __int64 v24; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  ServantSkillMaster_o *v28; // x20
  int64_t v29; // x20
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 i; // x23
  AddSkillInfoData_o *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x8
  unsigned __int64 v44; // x27
  struct AddSkillInfoData_array *v45; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42B2638 & 1) == 0 )
  {
    sub_B52984(&AddSkillInfoData_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&EquipTargetInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
    sub_B52984(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2638 = 1;
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
      sub_B52A5C(UserId, v11);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v48, 1LL, 0LL);
  v13 = *(_OWORD *)&v48.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v48.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v14 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_72;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_33;
  }
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_72;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
             svtId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_72;
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[1].klass), level, 0LL);
  if ( !v14 )
    goto LABEL_72;
  v16 = v14[9];
  if ( !UserId )
  {
    this->fields.hp = v16;
LABEL_33:
    v22 = v14[11];
    goto LABEL_34;
  }
  v18 = v14[10];
  v17 = v14[11];
  v19 = v14[12];
  v20 = *(_DWORD *)(UserId + 28);
  v21 = EquipTargetInfo_TypeInfo;
  if ( (BYTE3(EquipTargetInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v21 = EquipTargetInfo_TypeInfo;
  }
  this->fields.hp = v20 * (v18 - v16) / v21->static_fields->LOT_RATE + v16;
  v22 = v20 * (v19 - v17) / v21->static_fields->LOT_RATE + v17;
LABEL_34:
  this->fields.atk = v22;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AEB684(v24);
  UserId = **(_QWORD **)(v24 + 184);
  if ( !UserId )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)UserId,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v27;
  *(_QWORD *)&v49.fields.fakeValue = v26;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v49, 0LL);
  if ( !v28 )
    goto LABEL_72;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v28,
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
  v29 = UserId;
  if ( !*(_DWORD *)(UserId + 24) )
    goto LABEL_73;
  v30 = *(_QWORD *)(UserId + 32);
  if ( v30 )
    LODWORD(v30) = *(_DWORD *)(v30 + 28);
  this->fields.skillId1 = v30;
  if ( *(_DWORD *)(UserId + 24) <= 1u )
    goto LABEL_73;
  v31 = *(_QWORD *)(UserId + 40);
  if ( v31 )
    LODWORD(v31) = *(_DWORD *)(v31 + 28);
  this->fields.skillId2 = v31;
  if ( *(_DWORD *)(UserId + 24) <= 2u )
  {
LABEL_73:
    v47 = sub_B52A88(UserId);
    sub_B52A28(v47, 0LL);
  }
  v32 = *(_QWORD *)(UserId + 48);
  if ( v32 )
    LODWORD(v32) = *(_DWORD *)(v32 + 28);
  this->fields.skillId3 = v32;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v44 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v44 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v44 >= *(unsigned int *)(v29 + 24) )
      goto LABEL_73;
    if ( *(_QWORD *)(v29 + 8 * i) )
    {
      v41 = (AddSkillInfoData_o *)sub_B52A54(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v41, 0LL);
      if ( v44 >= *(unsigned int *)(v29 + 24) )
        goto LABEL_73;
      v42 = *(_QWORD *)(v29 + 8 * i);
      if ( !v42 || !v41 )
        goto LABEL_72;
      v41->fields.num = *(_DWORD *)(v42 + 20);
      if ( v44 >= *(unsigned int *)(v29 + 24) )
        goto LABEL_73;
      v43 = *(_QWORD *)(v29 + 8 * i);
      if ( !v43 )
        goto LABEL_72;
      v41->fields.skillId = *(_DWORD *)(v43 + 28);
      if ( !v33 )
        goto LABEL_72;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    }
  }
  if ( v33 )
  {
    v45 = (struct AddSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = v45;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v45 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)p_addSkills, (System_Int32_array **)v45, v34, v35, v36, v37, v38, v39);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B2642 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2642 = 1;
  }
  entity = 0LL;
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  if ( !v9 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v9,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_12:
    sub_B52A5C(Instance, v5);
  }
  return v3;
}


bool __fastcall EquipTargetInfo__getEventUpVal(
        EquipTargetInfo_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v8; // x23
  __int64 v9; // x24
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v13; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v15; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 v17; // x28
  bool v18; // w27
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v20; // x26
  int32_t EventId; // w0
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42B263F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B263F = 1;
  }
  if ( setupInfo )
  {
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v9;
    *(_QWORD *)&v27.fields.fakeValue = v8;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
LABEL_25:
        sub_B52A5C(Instance, v11);
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillIdList = EquipTargetInfo__getSkillIdList(this, v13);
      SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v15);
      v17 = 0LL;
      v18 = 1;
      while ( 1 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v17 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
          break;
        if ( !SkillIdList )
          goto LABEL_25;
        if ( v17 >= SkillIdList->max_length )
          goto LABEL_26;
        v11 = (unsigned int)SkillIdList->m_Items[v17 + 1];
        if ( (int)v11 >= 1 )
        {
          if ( !SkillLevelList )
            goto LABEL_25;
          if ( v17 >= SkillLevelList->max_length )
          {
LABEL_26:
            v23 = sub_B52A88(Instance);
            sub_B52A28(v23, 0LL);
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v11,
                     SkillLevelList->m_Items[v17 + 1],
                     0LL);
          if ( Entity )
          {
            v20 = Entity;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            if ( SkillLvEntity__getEventUpVal(
                   v20,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   EventId,
                   1,
                   0,
                   0LL) )
            {
              return v18;
            }
          }
        }
        ++v17;
      }
    }
  }
  return 0;
}


bool __fastcall EquipTargetInfo__getEventUpVal_29477776(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v15; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v17; // x25
  bool v18; // w24
  bool v19; // w22
  SkillLvEntity_o *Entity; // x0
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42B2640 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2640 = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v8;
  *(_QWORD *)&v22.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_27;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_B52A5C(Instance, v10);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v13);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v15);
  v17 = 0LL;
  v18 = 0;
  v19 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
      return v18;
    if ( !SkillIdList )
      goto LABEL_27;
    if ( v17 >= SkillIdList->max_length )
      goto LABEL_28;
    v10 = (unsigned int)SkillIdList->m_Items[v17 + 1];
    if ( (int)v10 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_27;
      if ( v17 >= SkillLevelList->max_length )
      {
LABEL_28:
        v21 = sub_B52A88(Instance);
        sub_B52A28(v21, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v10, SkillLevelList->m_Items[v17 + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26552708(Entity, eventUpVallInfo, 1, 0, v19, 0, 0LL) )
          v18 = 1;
      }
    }
    ++v17;
  }
}


bool __fastcall EquipTargetInfo__getExpInfo(
        EquipTargetInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v18; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v20; // x24
  int datalist; // w25
  bool result; // w0
  float v23; // s0
  int v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42B2641 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2641 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v10;
  *(_QWORD *)&v25.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL) < 1 )
  {
    result = 0;
    v23 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v15;
    *(_QWORD *)&v26.fields.fakeValue = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v26, 0LL);
    if ( !v16 )
      goto LABEL_27;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v18) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v20 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v20, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v24 = (int)Instance->fields.datalist;
        result = 1;
        v23 = (float)*exp / (float)(v24 - datalist);
        goto LABEL_26;
      }
LABEL_27:
      sub_B52A5C(Instance, v12);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v23 = 1.0;
  }
LABEL_26:
  *barExp = v23;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v8; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v14; // x22
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42B263E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B263E = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v4;
  *(_QWORD *)&v17.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B52A5C(Instance, v6);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v8);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v10);
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
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v16 = sub_B52A88(Instance);
          sub_B52A28(v16, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v6, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v14 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v14, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v8; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42B263D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B263D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B52A5C(Instance, v6);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v8);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v10);
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
      v6 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v6 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v15 = sub_B52A88(Instance);
          sub_B52A28(v15, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v6, SkillLevelList->m_Items[i + 1], 0LL);
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
  __int64 v3; // x20
  __int64 v4; // x21
  void *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42B2639 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2639 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  if ( !v10 || (Instance = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_15:
    sub_B52A5C(Instance, v6);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  struct AddSkillInfoData_array *v11; // x9
  AddSkillInfoData_o *v12; // x9
  __int64 v14; // x0

  if ( (byte_42B263A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42B263A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B5299C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_23:
    sub_B52A5C(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_25:
    v14 = sub_B52A88(v4);
    sub_B52A28(v14, 0LL);
  }
  v4->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( (__int64)v9 < (int)addSkills->max_length )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
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
  BalanceConfig_c *v4; // x0
  SkillInfo_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x20
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x20
  DataManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v19; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v23; // x26
  il2cpp_array_size_t v24; // w28
  int32_t *v25; // x27
  WarEntity_o *Entity; // x0
  SkillEntity_o *v27; // x24
  __int64 v28; // x23
  int32_t v29; // w1
  System_Int32_array **EffectTitle; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  SkillInfo_array *v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  Il2CppClass **v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42B263C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&SkillInfo___TypeInfo);
    sub_B52984(&SkillInfo_TypeInfo);
    byte_42B263C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v5;
  sub_B52920((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v13;
  *(_QWORD *)&v55.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v55, 0LL) >= 1 )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v16 = **(_QWORD **)(v15 + 192);
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AEB684(v16);
    v17 = **(DataManager_o ***)(v16 + 184);
    if ( !v17 )
LABEL_35:
      sub_B52A5C(v17, v14);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          v17,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v19);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v21);
    v23 = 0LL;
    v24 = 0;
    v25 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v17 = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v23 >= SHIDWORD(v17[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_35;
      if ( v23 >= SkillIdList->max_length )
      {
LABEL_36:
        v52 = sub_B52A88(v17);
        sub_B52A28(v52, 0LL);
      }
      v14 = (unsigned int)v25[v23];
      if ( (int)v14 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_35;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v14,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v27 = (SkillEntity_o *)Entity;
          v28 = sub_B52A54(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v28, 0LL);
          if ( v23 >= SkillIdList->max_length )
            goto LABEL_36;
          if ( !v28 )
            goto LABEL_35;
          *(_DWORD *)(v28 + 16) = v25[v23];
          if ( !SkillLevelList )
            goto LABEL_35;
          if ( v23 >= SkillLevelList->max_length )
            goto LABEL_36;
          v29 = SkillLevelList->m_Items[v23 + 1];
          *(_DWORD *)(v28 + 20) = v29;
          *(_DWORD *)(v28 + 24) = SkillEntity__getEffectChargeTurn(v27, v29, 0LL);
          EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v27, 0, 0LL);
          *(_QWORD *)(v28 + 32) = EffectTitle;
          sub_B52920((BattleServantConfConponent_o *)(v28 + 32), EffectTitle, v31, v32, v33, v34, v35, v36);
          EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v27, *(_DWORD *)(v28 + 20), 0LL);
          *(_QWORD *)(v28 + 40) = EffectExplanation;
          sub_B52920((BattleServantConfConponent_o *)(v28 + 40), EffectExplanation, v38, v39, v40, v41, v42, v43);
          *(_BYTE *)(v28 + 56) = 1;
          v44 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_35;
          v17 = (DataManager_o *)sub_B52A44(v28, v44->obj.klass->_1.element_class);
          if ( !v17 )
          {
            v53 = sub_B52A7C(0LL);
            sub_B52A28(v53, 0LL);
          }
          if ( v24 >= v44->max_length )
            goto LABEL_36;
          v51 = &v44->obj.klass + (int)v24;
          v51[4] = (Il2CppClass *)v28;
          sub_B52920(
            (BattleServantConfConponent_o *)(v51 + 4),
            (System_Int32_array **)v28,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          ++v24;
        }
      }
      ++v23;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v9; // x25
  __int64 v10; // x22
  __int64 v12; // x0

  if ( (byte_42B263B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42B263B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B5299C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
LABEL_20:
    sub_B52A5C(v4, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_22:
    v12 = sub_B52A88(v4);
    sub_B52A28(v12, 0LL);
  }
  v4->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v9 = 0LL;
    v10 = 0x300000000LL;
    while ( v9 < (int)addSkills->max_length )
    {
      v4 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( v4->static_fields->SvtEquipSkillListMax > (int)v9 + 3 )
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