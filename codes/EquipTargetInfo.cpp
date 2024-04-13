void __fastcall EquipTargetInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB861 & 1) == 0 )
  {
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v1, v2, v3);
    byte_42EB861 = 1;
  }
  EquipTargetInfo_TypeInfo->static_fields->LOT_RATE = 1000;
}


void __fastcall EquipTargetInfo___ctor(EquipTargetInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipTargetInfo___ctor_30730116(
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
    sub_B5D560(
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
void __fastcall EquipTargetInfo___ctor_30730304(
        EquipTargetInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        bool isSetUserId,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  __int64 v59; // x1
  int64_t UserId; // x0
  __int128 v61; // q1
  _DWORD *v62; // x22
  WarEntity_o *Entity; // x21
  int32_t v64; // w20
  int v65; // w21
  int v66; // w25
  int v67; // w22
  int v68; // w24
  EquipTargetInfo_c *v69; // x0
  int32_t v70; // w8
  __int64 v71; // x20
  __int64 v72; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v74; // x21
  __int64 v75; // x22
  ServantSkillMaster_o *v76; // x20
  int64_t v77; // x20
  __int64 v78; // x8
  __int64 v79; // x8
  __int64 v80; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 i; // x23
  AddSkillInfoData_o *v89; // x22
  __int64 v90; // x8
  __int64 v91; // x8
  unsigned __int64 v92; // x27
  struct AddSkillInfoData_array *v93; // x1
  struct AddSkillInfoData_array **p_addSkills; // x0
  __int64 v95; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_42EB856 & 1) == 0 )
  {
    sub_B5D5C4(&AddSkillInfoData_TypeInfo, svtId, limitCnt, *(_QWORD *)&level);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AddSkillInfoData__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AddSkillInfoData___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_AddSkillInfoData__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57, v58);
    byte_42EB856 = 1;
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
      sub_B5D69C(UserId, v59);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v96, 1LL, 0LL);
  v61 = *(_OWORD *)&v96.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = *(_OWORD *)&v96.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)UserId, svtId, this->fields.limitCount, 0LL);
  v62 = (_DWORD *)UserId;
  if ( level == 1 )
  {
    if ( !UserId )
      goto LABEL_72;
    this->fields.hp = *(_DWORD *)(UserId + 36);
    goto LABEL_33;
  }
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !UserId )
    goto LABEL_72;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
             svtId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  UserId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Entity )
    goto LABEL_72;
  if ( !UserId )
    goto LABEL_72;
  UserId = (int64_t)ServantExpMaster__GetEntity((ServantExpMaster_o *)UserId, HIDWORD(Entity[1].klass), level, 0LL);
  if ( !v62 )
    goto LABEL_72;
  v64 = v62[9];
  if ( !UserId )
  {
    this->fields.hp = v64;
LABEL_33:
    v70 = v62[11];
    goto LABEL_34;
  }
  v66 = v62[10];
  v65 = v62[11];
  v67 = v62[12];
  v68 = *(_DWORD *)(UserId + 28);
  v69 = EquipTargetInfo_TypeInfo;
  if ( (BYTE3(EquipTargetInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EquipTargetInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EquipTargetInfo_TypeInfo);
    v69 = EquipTargetInfo_TypeInfo;
  }
  this->fields.hp = v68 * (v66 - v64) / v69->static_fields->LOT_RATE + v64;
  v70 = v68 * (v67 - v65) / v69->static_fields->LOT_RATE + v65;
LABEL_34:
  this->fields.atk = v70;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v71 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v72 = **(_QWORD **)(v71 + 192);
  if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
    sub_AF52C4(v72);
  UserId = **(_QWORD **)(v72 + 184);
  if ( !UserId )
    goto LABEL_72;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)UserId,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v75 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v76 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v97.fields.currentCryptoKey = v75;
  *(_QWORD *)&v97.fields.fakeValue = v74;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97, 0LL);
  if ( !v76 )
    goto LABEL_72;
  UserId = (int64_t)ServantSkillMaster__getUseEntityList(
                      v76,
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
  v77 = UserId;
  if ( !*(_DWORD *)(UserId + 24) )
    goto LABEL_73;
  v78 = *(_QWORD *)(UserId + 32);
  if ( v78 )
    LODWORD(v78) = *(_DWORD *)(v78 + 28);
  this->fields.skillId1 = v78;
  if ( *(_DWORD *)(UserId + 24) <= 1u )
    goto LABEL_73;
  v79 = *(_QWORD *)(UserId + 40);
  if ( v79 )
    LODWORD(v79) = *(_DWORD *)(v79 + 28);
  this->fields.skillId2 = v79;
  if ( *(_DWORD *)(UserId + 24) <= 2u )
  {
LABEL_73:
    v95 = sub_B5D6C8(UserId);
    sub_B5D668(v95, 0LL);
  }
  v80 = *(_QWORD *)(UserId + 48);
  if ( v80 )
    LODWORD(v80) = *(_DWORD *)(v80 + 28);
  this->fields.skillId3 = v80;
  v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AddSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v81,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AddSkillInfoData___ctor__);
  for ( i = 7LL; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    v92 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v92 >= *(int *)(*(_QWORD *)(UserId + 184) + 44LL) )
      break;
    if ( v92 >= *(unsigned int *)(v77 + 24) )
      goto LABEL_73;
    if ( *(_QWORD *)(v77 + 8 * i) )
    {
      v89 = (AddSkillInfoData_o *)sub_B5D694(AddSkillInfoData_TypeInfo);
      AddSkillInfoData___ctor(v89, 0LL);
      if ( v92 >= *(unsigned int *)(v77 + 24) )
        goto LABEL_73;
      v90 = *(_QWORD *)(v77 + 8 * i);
      if ( !v90 || !v89 )
        goto LABEL_72;
      v89->fields.num = *(_DWORD *)(v90 + 20);
      if ( v92 >= *(unsigned int *)(v77 + 24) )
        goto LABEL_73;
      v91 = *(_QWORD *)(v77 + 8 * i);
      if ( !v91 )
        goto LABEL_72;
      v89->fields.skillId = *(_DWORD *)(v91 + 28);
      if ( !v81 )
        goto LABEL_72;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v81,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AddSkillInfoData__Add__);
    }
  }
  if ( v81 )
  {
    v93 = (struct AddSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v81,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AddSkillInfoData__ToArray__);
    this->fields.addSkills = v93;
    p_addSkills = &this->fields.addSkills;
  }
  else
  {
    this->fields.addSkills = 0LL;
    p_addSkills = &this->fields.addSkills;
    v93 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_addSkills, (System_Int32_array **)v93, v82, v83, v84, v85, v86, v87);
  this->fields.updatedAt = 0LL;
}


System_String_o *__fastcall EquipTargetInfo__GetSvtName(EquipTargetInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x19
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42EB860 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EB860 = 1;
  }
  entity = 0LL;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v22;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  if ( !v23 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v23,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
LABEL_12:
    sub_B5D69C(Instance, v19);
  }
  return v17;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x23
  __int64 v18; // x24
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v22; // x1
  System_Int32_array *SkillIdList; // x24
  const MethodInfo *v24; // x1
  System_Int32_array *SkillLevelList; // x25
  unsigned __int64 v26; // x28
  bool v27; // w27
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v29; // x26
  int32_t EventId; // w0
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42EB85D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, wearersSvtId, wearesLimitCount, *(_QWORD *)&wearesDispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EB85D = 1;
  }
  if ( setupInfo )
  {
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v18;
    *(_QWORD *)&v36.fields.fakeValue = v17;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
LABEL_25:
        sub_B5D69C(Instance, v20);
      MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillIdList = EquipTargetInfo__getSkillIdList(this, v22);
      SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v24);
      v26 = 0LL;
      v27 = 1;
      while ( 1 )
      {
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v26 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
          break;
        if ( !SkillIdList )
          goto LABEL_25;
        if ( v26 >= SkillIdList->max_length )
          goto LABEL_26;
        v20 = (unsigned int)SkillIdList->m_Items[v26 + 1];
        if ( (int)v20 >= 1 )
        {
          if ( !SkillLevelList )
            goto LABEL_25;
          if ( v26 >= SkillLevelList->max_length )
          {
LABEL_26:
            v32 = sub_B5D6C8(Instance);
            sub_B5D668(v32, 0LL);
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_25;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v20,
                     SkillLevelList->m_Items[v26 + 1],
                     0LL);
          if ( Entity )
          {
            v29 = Entity;
            EventId = EventUpValSetupInfo__get_EventId(setupInfo, 0LL);
            if ( SkillLvEntity__getEventUpVal(
                   v29,
                   wearersSvtId,
                   wearesLimitCount,
                   wearesDispLimitCount,
                   setupInfo,
                   EventId,
                   1,
                   0,
                   0LL) )
            {
              return v27;
            }
          }
        }
        ++v26;
      }
    }
  }
  return 0;
}


bool __fastcall EquipTargetInfo__getEventUpVal_30734952(
        EquipTargetInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isSupport,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  __int64 v16; // x20
  __int64 v17; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v22; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v24; // x1
  System_Int32_array *SkillLevelList; // x23
  unsigned __int64 v26; // x25
  bool v27; // w24
  bool v28; // w22
  SkillLvEntity_o *Entity; // x0
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EB85E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventUpVallInfo, isSupport, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42EB85E = 1;
  }
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v17;
  *(_QWORD *)&v31.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( (int)Instance < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_27;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIconEquip((*eventUpVallInfo)->fields.npcFlag, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_B5D69C(Instance, v19);
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  SkillIdList = EquipTargetInfo__getSkillIdList(this, v22);
  SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v24);
  v26 = 0LL;
  v27 = 0;
  v28 = isSupport;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v26 >= SHIDWORD(Instance[1].fields.saveNameList[1].klass) )
      return v27;
    if ( !SkillIdList )
      goto LABEL_27;
    if ( v26 >= SkillIdList->max_length )
      goto LABEL_28;
    v19 = (unsigned int)SkillIdList->m_Items[v26 + 1];
    if ( (int)v19 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_27;
      if ( v26 >= SkillLevelList->max_length )
      {
LABEL_28:
        v30 = sub_B5D6C8(Instance);
        sub_B5D668(v30, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_27;
      Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v19, SkillLevelList->m_Items[v26 + 1], 0LL);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_26836992(Entity, eventUpVallInfo, 1, 0, v28, 0, 0LL) )
          v27 = 1;
      }
    }
    ++v26;
  }
}


bool __fastcall EquipTargetInfo__getExpInfo(
        EquipTargetInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x23
  __int64 v22; // x24
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x24
  __int64 v27; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x23
  WarEntity_o *Entity; // x23
  const MethodInfo *v30; // x1
  int32_t lv; // w8
  ServantExpMaster_o *v32; // x24
  int datalist; // w25
  bool result; // w0
  float v35; // s0
  int v36; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42EB85F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EB85F = 1;
  }
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v22;
  *(_QWORD *)&v37.fields.fakeValue = v21;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL) < 1 )
  {
    result = 0;
    v35 = 0.0;
    *exp = 0;
    *lateExp = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v27;
    *(_QWORD *)&v38.fields.fakeValue = v26;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v38, 0LL);
    if ( !v28 )
      goto LABEL_27;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v28,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this->fields.lv < EquipTargetInfo__getLevelMax(this, v30) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
      lv = this->fields.lv;
      v32 = (ServantExpMaster_o *)Instance;
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
      Instance = (DataManager_o *)ServantExpMaster__GetEntity(v32, HIDWORD(Entity[1].klass), this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v36 = (int)Instance->fields.datalist;
        result = 1;
        v35 = (float)*exp / (float)(v36 - datalist);
        goto LABEL_26;
      }
LABEL_27:
      sub_B5D69C(Instance, v24);
    }
    *exp = 0;
    *lateExp = 0;
    result = 1;
    v35 = 1.0;
  }
LABEL_26:
  *barExp = v35;
  return result;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpType(EquipTargetInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x19
  __int64 v15; // x20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v25; // x22
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42EB85C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB85C = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v28, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B5D69C(Instance, v17);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v19);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v21);
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
      v17 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v17 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v27 = sub_B5D6C8(Instance);
          sub_B5D668(v27, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, SkillLevelList->m_Items[i + 1], 0LL);
        if ( Entity )
        {
          v25 = Entity;
          if ( SkillLvEntity__getFriendPointUpVal(Entity, 0LL) >= 1 )
            return SkillLvEntity__getFriendPointUpType(v25, 0LL);
        }
      }
    }
  }
  return 0;
}


int32_t __fastcall EquipTargetInfo__getFriendPointUpVal(EquipTargetInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x19
  __int64 v15; // x20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v21; // x1
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x22
  SkillLvEntity_o *Entity; // x0
  int32_t result; // w0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42EB85B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB85B = 1;
  }
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL) >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_B5D69C(Instance, v17);
    MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v19);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v21);
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
      v17 = (unsigned int)SkillIdList->m_Items[i + 1];
      if ( (int)v17 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_24;
        if ( i >= SkillLevelList->max_length )
        {
LABEL_25:
          v26 = sub_B5D6C8(Instance);
          sub_B5D668(v26, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v17, SkillLevelList->m_Items[i + 1], 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x21
  void *Instance; // x0
  __int64 v14; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x21
  __int64 v17; // x22
  ServantLimitMaster_o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EB857 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB857 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v18 || (Instance = ServantLimitMaster__GetEntity(v18, (int32_t)Instance, this->fields.limitCount, 0LL)) == 0LL )
LABEL_15:
    sub_B5D69C(Instance, v14);
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall EquipTargetInfo__getServantLevel(EquipTargetInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillIdList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v12; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  unsigned __int64 v14; // x22
  __int64 v15; // x23
  struct AddSkillInfoData_array *v16; // x9
  AddSkillInfoData_o *v17; // x9
  __int64 v19; // x0

  if ( (byte_42EB858 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42EB858 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtEquipSkillListMax);
  if ( !v9 )
LABEL_23:
    sub_B5D69C(v9, v10);
  namespaze = (unsigned int)v9->_1.namespaze;
  v12 = (System_Int32_array *)v9;
  if ( !namespaze
    || (LODWORD(v9->_1.byval_arg.data) = this->fields.skillId1, namespaze == 1)
    || (HIDWORD(v9->_1.byval_arg.data) = this->fields.skillId2, namespaze <= 2) )
  {
LABEL_25:
    v19 = sub_B5D6C8(v9);
    sub_B5D668(v19, 0LL);
  }
  v9->_1.byval_arg.bits = this->fields.skillId3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v14 = 0LL;
    v15 = 0x300000000LL;
    while ( (__int64)v14 < (int)addSkills->max_length )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v9->static_fields->SvtEquipSkillListMax > (int)v14 + 3 )
      {
        v16 = this->fields.addSkills;
        if ( !v16 )
          goto LABEL_23;
        if ( v14 >= v16->max_length )
          goto LABEL_25;
        v17 = v16->m_Items[v14];
        if ( !v17 )
          goto LABEL_23;
        if ( v14 + 3 >= v12->max_length )
          goto LABEL_25;
        *(int32_t *)((char *)&v12->m_Items[1] + (v15 >> 30)) = v17->fields.skillId;
      }
      addSkills = this->fields.addSkills;
      ++v14;
      v15 += 0x100000000LL;
      if ( !addSkills )
        goto LABEL_23;
    }
  }
  return v12;
}


void __fastcall EquipTargetInfo__getSkillInfo(
        EquipTargetInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BalanceConfig_c *v23; // x0
  SkillInfo_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x20
  __int64 v32; // x21
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x20
  DataManager_o *v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v38; // x1
  System_Int32_array *SkillIdList; // x21
  const MethodInfo *v40; // x1
  System_Int32_array *SkillLevelList; // x22
  unsigned __int64 v42; // x26
  il2cpp_array_size_t v43; // w28
  int32_t *v44; // x27
  WarEntity_o *Entity; // x0
  SkillEntity_o *v46; // x24
  __int64 v47; // x23
  int32_t v48; // w1
  System_Int32_array **EffectTitle; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **EffectExplanation; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  SkillInfo_array *v63; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppClass **v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_42EB85A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    sub_B5D5C4(&SkillInfo___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SkillInfo_TypeInfo, v20, v21, v22);
    byte_42EB85A = 1;
  }
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  v24 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v23->static_fields->SvtEquipSkillListMax);
  *skillInfoList = v24;
  sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v74.fields.currentCryptoKey = v32;
  *(_QWORD *)&v74.fields.fakeValue = v31;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL) >= 1 )
  {
    v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v35 = **(_QWORD **)(v34 + 192);
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AF52C4(v35);
    v36 = **(DataManager_o ***)(v35 + 184);
    if ( !v36 )
LABEL_35:
      sub_B5D69C(v36, v33);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          v36,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
    SkillIdList = EquipTargetInfo__getSkillIdList(this, v38);
    SkillLevelList = EquipTargetInfo__getSkillLevelList(this, v40);
    v42 = 0LL;
    v43 = 0;
    v44 = &SkillIdList->m_Items[1];
    while ( 1 )
    {
      v36 = (DataManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v42 >= SHIDWORD(v36[1].fields.saveNameList[1].klass) )
        break;
      if ( !SkillIdList )
        goto LABEL_35;
      if ( v42 >= SkillIdList->max_length )
      {
LABEL_36:
        v71 = sub_B5D6C8(v36);
        sub_B5D668(v71, 0LL);
      }
      v33 = (unsigned int)v44[v42];
      if ( (int)v33 >= 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_35;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v33,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v46 = (SkillEntity_o *)Entity;
          v47 = sub_B5D694(SkillInfo_TypeInfo);
          SkillInfo___ctor((SkillInfo_o *)v47, 0LL);
          if ( v42 >= SkillIdList->max_length )
            goto LABEL_36;
          if ( !v47 )
            goto LABEL_35;
          *(_DWORD *)(v47 + 16) = v44[v42];
          if ( !SkillLevelList )
            goto LABEL_35;
          if ( v42 >= SkillLevelList->max_length )
            goto LABEL_36;
          v48 = SkillLevelList->m_Items[v42 + 1];
          *(_DWORD *)(v47 + 20) = v48;
          *(_DWORD *)(v47 + 24) = SkillEntity__getEffectChargeTurn(v46, v48, 0LL);
          EffectTitle = (System_Int32_array **)SkillEntity__getEffectTitle(v46, 0, 0LL);
          *(_QWORD *)(v47 + 32) = EffectTitle;
          sub_B5D560((BattleServantConfConponent_o *)(v47 + 32), EffectTitle, v50, v51, v52, v53, v54, v55);
          EffectExplanation = (System_Int32_array **)SkillEntity__getEffectExplanation(v46, *(_DWORD *)(v47 + 20), 0LL);
          *(_QWORD *)(v47 + 40) = EffectExplanation;
          sub_B5D560((BattleServantConfConponent_o *)(v47 + 40), EffectExplanation, v57, v58, v59, v60, v61, v62);
          *(_BYTE *)(v47 + 56) = 1;
          v63 = *skillInfoList;
          if ( !*skillInfoList )
            goto LABEL_35;
          v36 = (DataManager_o *)sub_B5D684(v47, v63->obj.klass->_1.element_class);
          if ( !v36 )
          {
            v72 = sub_B5D6BC(0LL);
            sub_B5D668(v72, 0LL);
          }
          if ( v43 >= v63->max_length )
            goto LABEL_36;
          v70 = &v63->obj.klass + (int)v43;
          v70[4] = (Il2CppClass *)v47;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v70 + 4),
            (System_Int32_array **)v47,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          ++v43;
        }
      }
      ++v42;
    }
  }
}


System_Int32_array *__fastcall EquipTargetInfo__getSkillLevelList(EquipTargetInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v12; // x20
  struct AddSkillInfoData_array *addSkills; // x8
  __int64 v14; // x25
  __int64 v15; // x22
  __int64 v17; // x0

  if ( (byte_42EB859 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42EB859 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtEquipSkillListMax);
  if ( !v9 )
LABEL_20:
    sub_B5D69C(v9, v10);
  namespaze = (unsigned int)v9->_1.namespaze;
  v12 = (System_Int32_array *)v9;
  if ( !namespaze
    || (LODWORD(v9->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v9->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_22:
    v17 = sub_B5D6C8(v9);
    sub_B5D668(v17, 0LL);
  }
  v9->_1.byval_arg.bits = this->fields.skillLv3;
  addSkills = this->fields.addSkills;
  if ( addSkills )
  {
    v14 = 0LL;
    v15 = 0x300000000LL;
    while ( v14 < (int)addSkills->max_length )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v9->static_fields->SvtEquipSkillListMax > (int)v14 + 3 )
      {
        if ( v14 + 3 >= (unsigned __int64)v12->max_length )
          goto LABEL_22;
        *(int32_t *)((char *)&v12->m_Items[1] + (v15 >> 30)) = 1;
      }
      addSkills = this->fields.addSkills;
      v15 += 0x100000000LL;
      ++v14;
      if ( !addSkills )
        goto LABEL_20;
    }
  }
  return v12;
}