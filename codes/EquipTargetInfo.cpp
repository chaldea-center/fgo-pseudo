void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC506 & 1) == 0 )
  {
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v1);
    byte_40FC506 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_29329860(
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
    sub_B16F98(
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
void __fastcall EquipTargetInfo___ctor_29330048(
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
  WebViewManager_o *Instance; // x0
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v32; // x22
  WebViewManager_o *v33; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x0
  WarEntity_o *v35; // x21
  WebViewManager_o *v36; // x0
  ServantExpMaster_o *v37; // x0
  ServantExpEntity_o *v38; // x0
  int32_t hpBase; // w20
  int32_t v40; // w21
  int32_t hpMax; // w25
  int32_t atkMax; // w22
  int32_t curve; // w24
  EquipTargetInfo_c *v44; // x0
  int32_t atkBase; // w8
  __int64 v46; // x20
  __int64 v47; // x20
  DataManager_o *v48; // x0
  WarQuestSelectionMaster_o *v49; // x0
  __int64 v50; // x21
  __int64 v51; // x22
  ServantSkillMaster_o *v52; // x20
  int32_t v53; // w0
  _DWORD *UseEntityList; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  _DWORD *v59; // x20
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x21
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 i; // x23
  AddSkillInfoData_o *v70; // x22
  __int64 v71; // x8
  __int64 v72; // x8
  unsigned __int64 v73; // x27
  struct AddSkillInfoData_array *v74; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_40FC4FB & 1) == 0 )
  {
    sub_B16FFC(&AddSkillInfoData_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&BalanceConfig_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_40FC4FB = 1;
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
      sub_B170D4();
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v76, 1LL, 0LL);
  v28 = *(_OWORD *)&v76.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v76.fields.fakeValue;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_72;
  Entity = ServantLimitMaster__GetEntity(MasterData_WarQuestSelectionMaster, svtId, this->fields.limitCount, 0LL);
  v32 = Entity;
  if ( level == 1 )
  {
    if ( !Entity )
      goto LABEL_72;
    this->fields.hp = Entity->fields.hpBase;
    goto LABEL_33;
  }
  v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v33 )
    goto LABEL_72;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v33,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v34 )
    goto LABEL_72;
  v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v34,
          svtId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v36 )
    goto LABEL_72;
  v37 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v36,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !v35 )
    goto LABEL_72;
  if ( !v37 )
    goto LABEL_72;
  v38 = ServantExpMaster__GetEntity(v37, HIDWORD(v35[1].klass), level, 0LL);
  if ( !v32 )
    goto LABEL_72;
  hpBase = v32->fields.hpBase;
  if ( !v38 )
  {
    this->fields.hp = hpBase;
LABEL_33:
    atkBase = v32->fields.atkBase;
    goto LABEL_34;
  }
  hpMax = v32->fields.hpMax;
  v40 = v32->fields.atkBase;
  atkMax = v32->fields.atkMax;
  curve = v38->fields.curve;
  v44 = EquipTargetInfo_TypeInfo;
  if ( (BYTE3(EquipTargetInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v44 = EquipTargetInfo_TypeInfo;
  }
  this->fields.hp = curve * (hpMax - hpBase) / v44->static_fields->LOT_RATE + hpBase;
  atkBase = curve * (atkMax - v40) / v44->static_fields->LOT_RATE + v40;
LABEL_34:
  this->fields.atk = atkBase;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v46 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v47 = **(_QWORD **)(v46 + 192);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AAFCFC(v47);
  v48 = **(DataManager_o ***)(v47 + 184);
  if ( !v48 )
    goto LABEL_72;
  v49 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v48,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v51 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v52 = (ServantSkillMaster_o *)v49;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v51;
  *(_QWORD *)&v77.fields.fakeValue = v50;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v77, 0LL);
  if ( !v52 )
    goto LABEL_72;
  UseEntityList = ServantSkillMaster__getUseEntityList(
                    v52,
                    v53,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    -1,
                    -1,
                    -1LL,
                    0LL);
  if ( !UseEntityList )
    goto LABEL_72;
  v59 = UseEntityList;
  if ( !UseEntityList[6] )
    goto LABEL_73;
  v60 = *((_QWORD *)UseEntityList + 4);
  if ( v60 )
    LODWORD(v60) = *(_DWORD *)(v60 + 28);
  this->fields.skillId1 = v60;
  if ( UseEntityList[6] <= 1u )
    goto LABEL_73;
  v61 = *((_QWORD *)UseEntityList + 5);
  if ( v61 )
    LODWORD(v61) = *(_DWORD *)(v61 + 28);
  this->fields.skillId2 = v61;
  if ( UseEntityList[6] <= 2u )
  {
LABEL_73:
    sub_B17100(UseEntityList, v55, v56);
    sub_B170A0();
  }
  v62 = *((_QWORD *)UseEntityList + 6);
  if ( v62 )
    LODWORD(v62) = *(_DWORD *)(v62 + 28);
  this->fields.skillId3 = v62;
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AddSkillInfoData__TypeInfo,
                                                                                                  v55,
                                                                                                  v56,
                                                                                                  v57,
                                                                                                  v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UseEntityList = BalanceConfig_TypeInfo;
    v73 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UseEntityList = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v73 >= *(int *)(*((_QWORD *)UseEntityList + 23) + 44LL) )
      break;
    if ( v73 >= (unsigned int)v59[6] )
      goto LABEL_73;
    if ( *(_QWORD *)&v59[2 * i] )
    {
      v70 = (AddSkillInfoData_o *)sub_B170CC(AddSkillInfoData_TypeInfo, v55, v56, v64, v65);
      AddSkillInfoData___ctor(v70, 0LL);
      if ( v73 >= (unsigned int)v59[6] )
        goto LABEL_73;
      v71 = *(_QWORD *)&v59[2 * i];
      if ( !v71 || !v70 )
        goto LABEL_72;
      v70->fields.num = *(_DWORD *)(v71 + 20);
      if ( v73 >= (unsigned int)v59[6] )
        goto LABEL_73;
      v72 = *(_QWORD *)&v59[2 * i];
      if ( !v72 )
        goto LABEL_72;
      v70->fields.skillId = *(_DWORD *)(v72 + 28);
      if ( !v63 )
        goto LABEL_72;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v63,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    }
  }
  if ( v63 )
  {
    v74 = (struct AddSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = v74;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v74 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_addSkills, (System_Int32_array **)v74, v56, v64, v65, v66, v67, v68);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  int32_t v13; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40FC505 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FC505 = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !v12 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v12,
         &entity,
         v13,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_12:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 v21; // x28
  bool v22; // w27
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v24; // x26
  int32_t EventId; // w0
  BalanceConfig_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FC502 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&wearersSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FC502 = 1;
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
    *(_QWORD *)&v31.fields.currentCryptoKey = v12;
    *(_QWORD *)&v31.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
LABEL_25:
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
      SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
      v21 = 0LL;
      v22 = 1;
      while ( 1 )
      {
        v26 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v26 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v21 >= v26->static_fields->SvtEquipSkillListMax )
          break;
        if ( !SkillIdList )
          goto LABEL_25;
        if ( v21 >= SkillIdList->max_length )
          goto LABEL_26;
        v18 = (unsigned int)SkillIdList->m_Items[v21 + 1];
        if ( (int)v18 >= 1 )
        {
          if ( !SkillLevelList )
            goto LABEL_25;
          if ( v21 >= SkillLevelList->max_length )
          {
LABEL_26:
            sub_B17100(v26, v18, v19);
            sub_B170A0();
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v18,
                     SkillLevelList->m_Items[v21 + 1],
                     0LL);
          if ( Entity )
          {
            v24 = Entity;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            if ( SkillLvEntity__getEventUpVal(
                   v24,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   EventId,
                   1,
                   0,
                   0LL) )
            {
              return v22;
            }
          }
        }
        ++v21;
      }
    }
  }
  return 0;
}


bool __fastcall EquipTargetInfo__getEventUpVal_29334696(
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v15; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v21; // x25
  bool v22; // w24
  bool v23; // w22
  SkillLvEntity_o *Entity; // x0
  BalanceConfig_c *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FC503 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventUpVallInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC503 = 1;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v11;
  *(_QWORD *)&v26.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL) < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_27;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v15);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v17);
  v21 = 0LL;
  v22 = 0;
  v23 = isSupport;
  while ( 1 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v21 >= v25->static_fields->SvtEquipSkillListMax )
      return v22;
    if ( !SkillIdList )
      goto LABEL_27;
    if ( v21 >= SkillIdList->max_length )
      goto LABEL_28;
    v18 = (unsigned int)SkillIdList->m_Items[v21 + 1];
    if ( (int)v18 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_27;
      if ( v21 >= SkillLevelList->max_length )
      {
LABEL_28:
        sub_B17100(v25, v18, v19);
        sub_B170A0();
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v18, SkillLevelList->m_Items[v21 + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_23627436(Entity, eventUpVallInfo, 1, 0, v23, 0, 0LL) )
          v22 = 1;
      }
    }
    ++v21;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x23
  int32_t v20; // w0
  WarEntity_o *Entity; // x23
  const MethodInfo *v22; // x1
  WebViewManager_o *v23; // x0
  ServantExpMaster_o *v24; // x0
  int32_t lv; // w8
  ServantExpMaster_o *v26; // x24
  int32_t v27; // w25
  bool result; // w0
  float v29; // s0
  ServantExpEntity_o *v30; // x0
  ServantExpEntity_o *v31; // x0
  int32_t v32; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40FC504 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, exp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FC504 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v14;
  *(_QWORD *)&v33.fields.fakeValue = v13;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL) < 1 )
  {
    result = 0;
    v29 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v18;
    *(_QWORD *)&v34.fields.fakeValue = v17;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
    if ( !v19 )
      goto LABEL_27;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v19,
               v20,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v22) )
    {
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v23 )
        goto LABEL_27;
      v24 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v23,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v26 = v24;
      if ( lv >= 2 )
      {
        if ( !Entity )
          goto LABEL_27;
        if ( !v24 )
          goto LABEL_27;
        v30 = ServantExpMaster__GetEntity(v24, HIDWORD(Entity[1].klass), lv - 1, 0LL);
        if ( !v30 )
          goto LABEL_27;
        v27 = v30->fields.exp;
      }
      else
      {
        if ( !Entity || !v24 )
          goto LABEL_27;
        v27 = 0;
      }
      v31 = ServantExpMaster__GetEntity(v26, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - v27;
      if ( v31 )
      {
        *lateExp = v31->fields.exp - this->fields.exp;
        v32 = v31->fields.exp;
        result = 1;
        v29 = (float)*exp / (float)(v32 - v27);
        goto LABEL_26;
      }
LABEL_27:
      sub_B170D4();
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v29 = 1.0;
  }
LABEL_26:
  *barExp = v29;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x20
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v18; // x22
  BalanceConfig_c *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FC501 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC501 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v7;
  *(_QWORD *)&v21.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL) >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v10);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= v19->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          sub_B17100(v19, v13, v14);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v13, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v18 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v18, 0LL);
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v10; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  BalanceConfig_c *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FC500 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC500 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v10);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v12);
    for ( i = 0LL; ; ++i )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= v19->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_24;
      if ( i >= SkillIdList->max_length )
        goto LABEL_25;
      v13 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          sub_B17100(v19, v13, v14);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v13, SkillLevelList->m_Items[i + 1], 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  int32_t v12; // w0
  ServantLimitEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40FC4FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC4FC = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v6;
  *(_QWORD *)&v15.fields.fakeValue = v5;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !v11 || (Entity = ServantLimitMaster__GetEntity(v11, v12, this->fields.limitCount, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  return Entity->fields.lvMax;
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v12; // x22
  __int64 v13; // x23
  struct AddSkillInfoData_array *v14; // x9
  AddSkillInfoData_o *v15; // x9

  if ( (byte_40FC4FD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FC4FD = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtEquipSkillListMax, v2);
  if ( !v6 )
LABEL_23:
    sub_B170D4();
  namespaze = (unsigned int)v6->_1.namespaze;
  v10 = (System_Int32_array *)v6;
  if ( !namespaze
    || (LODWORD(v6->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v6->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_25:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v6->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v12 = 0LL;
    v13 = 0x300000000LL;
    while ( (__int64)v12 < (int)addSkills->max_length )
    {
      v6 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( v6->static_fields->SvtEquipSkillListMax > (int)v12 + 3 )
      {
        v14 = this->fields.addSkills;
        if ( !v14 )
          goto LABEL_23;
        if ( v12 >= v14->max_length )
          goto LABEL_25;
        v15 = v14->m_Items[v12];
        if ( !v15 )
          goto LABEL_23;
        if ( v12 + 3 >= v10->max_length )
          goto LABEL_25;
        *(int32_t *)((char *)&v10->m_Items[1] + (v13 >> 30)) = v15->fields.skillId;
      }
      addSkills = this->fields.addSkills;
      ++v12;
      v13 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_23;
    }
  }
  return v10;
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
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v30; // x26
  il2cpp_array_size_t v31; // w28
  int32_t *v32; // x27
  WarEntity_o *Entity; // x0
  __int64 v34; // x3
  __int64 v35; // x4
  SkillEntity_o *v36; // x24
  __int64 v37; // x23
  BalanceConfig_c *v38; // x0
  int32_t v39; // w1
  System_Int32_array **EffectTitle; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  SkillInfo_array *v54; // x24
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  Il2CppClass **v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40FC4FF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    sub_B16FFC(&SkillInfo___TypeInfo, v8);
    sub_B16FFC(&SkillInfo_TypeInfo, v9);
    byte_40FC4FF = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (SkillInfo_array *)sub_B17014(
                             SkillInfo___TypeInfo,
                             (unsigned int)v10->static_fields->SvtEquipSkillListMax,
                             method);
  *skillInfoList = v11;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v19;
  *(_QWORD *)&v62.fields.fakeValue = v18;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL) >= 1 )
  {
    v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v21 = **(_QWORD **)(v20 + 192);
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_AAFCFC(v21);
    v22 = **(DataManager_o ***)(v21 + 184);
    if ( !v22 )
LABEL_35:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          v22,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v24);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v26);
    v30 = 0LL;
    v31 = 0;
    v32 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v38 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v30 >= v38->static_fields->SvtEquipSkillListMax )
        break;
      if ( !SkillIdList )
        goto LABEL_35;
      if ( v30 >= SkillIdList->max_length )
      {
LABEL_36:
        sub_B17100(v38, v27, v28);
        sub_B170A0();
      }
      v27 = (unsigned int)v32[v30];
      if ( (int)v27 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_35;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v27,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v36 = (SkillEntity_o *)Entity;
          v37 = sub_B170CC(SkillInfo_TypeInfo, v27, v28, v34, v35);
          SkillInfo___ctor((SkillInfo_o *)v37, 0LL);
          if ( v30 >= SkillIdList->max_length )
            goto LABEL_36;
          if ( !v37 )
            goto LABEL_35;
          *(_DWORD *)(v37 + 16) = v32[v30];
          if ( !SkillLevelList )
            goto LABEL_35;
          if ( v30 >= SkillLevelList->max_length )
            goto LABEL_36;
          v39 = SkillLevelList->m_Items[v30 + 1];
          *(_DWORD *)(v37 + 20) = v39;
          *(_DWORD *)(v37 + 24) = SkillEntity__getEffectChargeTurn(v36, v39, 0LL);
          EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v36, 0, 0LL);
          *(_QWORD *)(v37 + 32) = EffectTitle;
          sub_B16F98((BattleServantConfConponent_o *)(v37 + 32), EffectTitle, v41, v42, v43, v44, v45, v46);
          EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v36, *(_DWORD *)(v37 + 20), 0LL);
          *(_QWORD *)(v37 + 40) = EffectExplanation;
          sub_B16F98((BattleServantConfConponent_o *)(v37 + 40), EffectExplanation, v48, v49, v50, v51, v52, v53);
          *(_BYTE *)(v37 + 56) = 1;
          v54 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_35;
          v38 = (BalanceConfig_c *)sub_B170BC(v37, v54->obj.klass->_1.element_class);
          if ( !v38 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
          if ( v31 >= v54->max_length )
            goto LABEL_36;
          v60 = &v54->obj.klass + (int)v31;
          v60[4] = (Il2CppClass *)v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v60 + 4),
            (System_Int32_array **)v37,
            v28,
            v55,
            v56,
            v57,
            v58,
            v59);
          ++v31;
        }
      }
      ++v30;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v12; // x25
  __int64 v13; // x22

  if ( (byte_40FC4FE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FC4FE = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtEquipSkillListMax, v2);
  if ( !v6 )
LABEL_20:
    sub_B170D4();
  namespaze = (unsigned int)v6->_1.namespaze;
  v10 = (System_Int32_array *)v6;
  if ( !namespaze
    || (LODWORD(v6->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v6->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_22:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v6->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v12 = 0LL;
    v13 = 0x300000000LL;
    while ( v12 < (int)addSkills->max_length )
    {
      v6 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      if ( v6->static_fields->SvtEquipSkillListMax > (int)v12 + 3 )
      {
        if ( v12 + 3 >= (unsigned __int64)v10->max_length )
          goto LABEL_22;
        *(int32_t *)((char *)&v10->m_Items[1] + (v13 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v13 += 0x100000000LL;
      ++v12;
      if ( !addSkills )
        goto LABEL_20;
    }
  }
  return v10;
}