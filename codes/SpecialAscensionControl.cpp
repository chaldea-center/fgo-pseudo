void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F9D8B & 1) == 0 )
  {
    sub_B16FFC(&SpecialAscensionControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_3181, v8);
    byte_40F9D8B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SpecialAscensionControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_3181;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3181;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  SpecialAscensionControl_TypeInfo->static_fields->SPEND_QP_VAL = 0;
}


void __fastcall SpecialAscensionControl___ctor(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SpecialAscensionControl__CanExeSpecialAscension(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  UserServantEntity_o *v4; // x0
  UserServantEntity_o *v7; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    return 0;
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
LABEL_9:
    sub_B170D4();
  if ( !UserServantEntity__IsEventJoin(v4, 0LL) )
  {
    v7 = this->fields.baseUserServantEntity;
    if ( v7 )
      return !UserServantEntity__IsHeroine(v7, 0LL);
    goto LABEL_9;
  }
  return 0;
}


int32_t __fastcall SpecialAscensionControl__GetEffectLimitCount(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40F9D87 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F9D87 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w0
  WarEntity_o *Entity; // x20
  WebViewManager_o *v20; // x0
  CombineLimitMaster_o *v21; // x0
  CombineLimitEntity_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_int__o *v27; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_40F9D89 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F9D89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v15,
                   v18,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v21 = (CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v20,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !v21
    || (v22 = CombineLimitMaster__GetEntity(v21, HIDWORD(Entity->fields.coordinates), limitCnt, 0LL),
        v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v23,
                                                          v24,
                                                          v25,
                                                          v26),
        System_Collections_Generic_List_int____ctor(
          v27,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__),
        !v22)
    || !v27 )
  {
LABEL_15:
    sub_B170D4();
  }
  System_Collections_Generic_List_int___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.itemIds,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v27;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitMaster_o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w24
  const MethodInfo *v17; // x1
  int32_t EffectLimitCount; // w0
  ServantLimitEntity_o *Entity; // x0
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F9D88 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F9D88 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_12;
  v13 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  EffectLimitCount = SpecialAscensionControl__GetEffectLimitCount(this, v17);
  if ( !v13
    || (Entity = ServantLimitMaster__GetEntity(v13, v16, EffectLimitCount - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    Entity->fields.lvMax,
    0LL);
}


int32_t __fastcall SpecialAscensionControl__GetTutorialOpenType(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  return 58;
}


bool __fastcall SpecialAscensionControl__HaveCombineOtherServant(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x25
  int64_t UserId; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t AllList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  int64_t v26; // x22
  unsigned __int64 v27; // x26
  UserServantEntity_Fields *p_fields; // x27
  __int64 v29; // x23
  __int128 v30; // q0
  __int128 v31; // q0
  int64_t v32; // x0
  __int128 v33; // q0
  int64_t v34; // x24
  UserServantEntity_Fields *v35; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x27
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t v39; // w24
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v46; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  bool v49; // w19
  int v50; // w8
  int v51; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-D0h] BYREF
  _DWORD v56[15]; // [xsp+60h] [xbp-B0h] BYREF
  int v57; // [xsp+9Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_40F9D85 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40F9D85 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v57 = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  userSvtEntity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_64;
  AllList = (int64_t)UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !AllList )
    goto LABEL_64;
  v25 = *(_QWORD *)(AllList + 24);
  v26 = AllList;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    p_fields = &userSvtEntity->fields;
    do
    {
      if ( v27 >= (unsigned int)v25 )
      {
        sub_B17100(AllList, v23, v24);
        sub_B170A0();
      }
      v29 = *(_QWORD *)(v26 + 32 + 8 * v27);
      if ( v29 )
      {
        v30 = *(_OWORD *)(v29 + 64);
        *(_OWORD *)v56 = *(_OWORD *)(v29 + 48);
        *(_OWORD *)&v56[4] = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v55 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v56;
        AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v55, 0LL);
        if ( AllList == UserId )
        {
          AllList = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v29, 0LL);
          if ( (AllList & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_64;
            v31 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            *(_OWORD *)v56 = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v56[4] = v31;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v54 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v56;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v54, 0LL);
            v33 = *(_OWORD *)(v29 + 32);
            v34 = v32;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
            *(_OWORD *)&v53.fields.fakeValue = v33;
            AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v53, 0LL);
            if ( v34 != AllList )
            {
              v35 = p_fields;
              v36 = v18;
              v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v59.fields.currentCryptoKey = v38;
              *(_QWORD *)&v59.fields.fakeValue = v37;
              v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
              AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v29 + 80),
                          0LL);
              v18 = v36;
              p_fields = v35;
              if ( v39 == (_DWORD)AllList )
              {
                if ( !v18 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v25) = *(_DWORD *)(v26 + 24);
      ++v27;
    }
    while ( (__int64)v27 < (int)v25 );
  }
  if ( !v18 )
LABEL_64:
    sub_B170D4();
  if ( v18->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v58 = *(System_Collections_Generic_List_Enumerator_T__o *)v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
  {
    current = v58.fields.current;
    if ( !v58.fields.current )
      sub_B170D4();
    if ( SHIDWORD(v58.fields.current[16].klass) >= 2
      || SLODWORD(v58.fields.current[17].monitor) > 1
      || SHIDWORD(v58.fields.current[17].monitor) > 1
      || SLODWORD(v58.fields.current[18].klass) > 1 )
    {
      goto LABEL_53;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v58.fields.current, 0LL);
    if ( !AppendSkillInfo )
      sub_B170D4();
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_B170D4();
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= max_length )
        {
          sub_B17100(AppendSkillInfo, v42, v43);
          sub_B170A0();
        }
        if ( svtSkillLvList->m_Items[v46 + 1] >= 2 )
          break;
        if ( (int)++v46 >= max_length )
          goto LABEL_46;
      }
LABEL_53:
      v49 = 1;
      v50 = 357;
      goto LABEL_54;
    }
LABEL_46:
    klass = current[6].klass;
    monitor = current[6].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v60.fields.currentCryptoKey = klass;
    *(_QWORD *)&v60.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_53;
    }
  }
  v49 = 0;
  v50 = 355;
LABEL_54:
  v56[v57++ + 8] = v50;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  if ( !v57 )
    return 0;
  v51 = v56[v57 + 7];
  if ( v51 == 355 )
  {
    v49 = 0;
    goto LABEL_59;
  }
  if ( v51 == 357 )
  {
LABEL_59:
    --v57;
    return v49;
  }
  return 0;
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x23
  int32_t v29; // w0
  WarEntity_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_int__int__o *v35; // x20
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w0
  int32_t v38; // w22
  int32_t v39; // w21
  WebViewManager_o *v40; // x0
  CombineLimitMaster_o *v41; // x0
  CombineLimitEntity_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Int32_array *itemIds; // x21
  __int64 v46; // x8
  struct System_Int32_array *itemNums; // x25
  unsigned __int64 v48; // x19
  int32_t v49; // w23
  int32_t v50; // w24
  UserGameEntity_o *SelfUserGame; // x0
  int32_t key; // w20
  int32_t key_high; // w25
  WebViewManager_o *v55; // x0
  WarQuestSelectionMaster_o *v56; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v57; // q0
  UserItemMaster_o *v58; // x21
  int64_t v59; // x0
  int v60; // w19
  UserServantEntity_o *v61; // [xsp+0h] [xbp-E0h]
  WarEntity_o *v62; // [xsp+8h] [xbp-D8h]
  int32_t qp; // [xsp+14h] [xbp-CCh]
  int32_t v64; // [xsp+18h] [xbp-C8h]
  int32_t v65; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_40F9D86 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F9D86 = 1;
  }
  memset(&v69, 0, 32);
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_49;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v28;
  *(_QWORD *)&v70.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70, 0LL);
  if ( !v26 )
    goto LABEL_49;
  v30 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v26,
          v29,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v35 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v31,
                                                               v32,
                                                               v33,
                                                               v34);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v35,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v36 = this->fields.baseUserServantEntity;
  if ( !v36 )
    goto LABEL_49;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36->fields.limitCount, 0LL);
  if ( !v30 )
    goto LABEL_49;
  v38 = v37;
  v61 = userSvtEntity;
  if ( v37 < SLODWORD(v30->fields.targetId) )
  {
    v39 = 0;
    v62 = v30;
    while ( 1 )
    {
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v40 )
        goto LABEL_49;
      v41 = (CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v40,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !v41 )
        goto LABEL_49;
      v65 = v39;
      v42 = CombineLimitMaster__GetEntity(v41, HIDWORD(v30->fields.coordinates), v38, 0LL);
      if ( !v42 )
        goto LABEL_49;
      itemIds = v42->fields.itemIds;
      v64 = v38;
      if ( !itemIds )
        goto LABEL_49;
      v46 = *(_QWORD *)&itemIds->max_length;
      qp = v42->fields.qp;
      if ( (int)v46 >= 1 )
        break;
LABEL_26:
      v30 = v62;
      ++v38;
      v39 = qp + v65;
      if ( v64 + 1 >= SLODWORD(v62->fields.targetId) )
        goto LABEL_29;
    }
    itemNums = v42->fields.itemNums;
    v48 = 0LL;
    while ( 1 )
    {
      if ( v48 >= (unsigned int)v46 )
        goto LABEL_50;
      if ( !itemNums )
        break;
      if ( v48 >= itemNums->max_length )
      {
LABEL_50:
        sub_B17100(v42, v43, v44);
        sub_B170A0();
      }
      if ( !v35 )
        break;
      v49 = itemIds->m_Items[v48 + 1];
      v50 = itemNums->m_Items[v48 + 1];
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v35,
             v49,
             (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v50 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v35,
                 v49,
                 (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v35,
          v49,
          (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v35,
        v49,
        v50,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v46) = itemIds->max_length;
      if ( (__int64)++v48 >= (int)v46 )
        goto LABEL_26;
    }
LABEL_49:
    sub_B170D4();
  }
  v39 = 0;
LABEL_29:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_49;
  if ( SelfUserGame->fields.qp < v39 )
    return 0;
  if ( !v35 )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v67,
    v35,
    (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v69.fields.dictionary = *(_OWORD *)&v67.fields.dictionary;
  v69.fields.current = v67.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v69,
            (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v69.fields.current.fields.key;
    key_high = HIDWORD(v69.fields.current.fields.key);
    v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v55 )
      sub_B170D4();
    v56 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v55,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v61 )
      sub_B170D4();
    v57 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v61->fields.userId.fields.fakeValue;
    v58 = (UserItemMaster_o *)v56;
    *(_OWORD *)&v67.fields.dictionary = *(_OWORD *)&v61->fields.userId.fields.currentCryptoKey;
    v67.fields.current = v57;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v67.fields.dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v66.fields.fakeValue = v67.fields.current;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v66, 0LL);
    if ( !v58 )
      sub_B170D4();
    if ( UserItemMaster__TryGetEntity(v58, &entity, v59, key, 0LL) )
    {
      if ( !entity )
        sub_B170D4();
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v60 = 9;
    goto LABEL_47;
  }
  v60 = 7;
LABEL_47:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v69,
    (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v60 != 9;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40F9D8A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineMenuControl_OnCloseHelp__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9D8A = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, method);
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v6 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v6, v11, 0LL);
}


void __fastcall SpecialAscensionControl__OnClickSpecialAscension(
        SpecialAscensionControl_o *this,
        const MethodInfo *method)
{
  _BOOL8 CanExeSpecialAscension; // x0
  const MethodInfo *v4; // x2
  UserServantEntity_o *baseUserServantEntity; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x19
  bool HaveCombineOtherServant; // w22
  const MethodInfo *v8; // x2
  bool HaveRequestItemAndQp; // w0

  CanExeSpecialAscension = SpecialAscensionControl__CanExeSpecialAscension(this, method);
  if ( CanExeSpecialAscension )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    exeCombineDlg = this->fields.exeCombineDlg;
    this->fields.pushExeButton = 1;
    HaveCombineOtherServant = SpecialAscensionControl__HaveCombineOtherServant(
                                (SpecialAscensionControl_o *)CanExeSpecialAscension,
                                baseUserServantEntity,
                                v4);
    HaveRequestItemAndQp = SpecialAscensionControl__HaveRequestItemAndQp(this, this->fields.baseUserServantEntity, v8);
    if ( !exeCombineDlg )
      sub_B170D4();
    SetRarityDialogControl__SetSpecialAscension(
      exeCombineDlg,
      baseUserServantEntity,
      1,
      HaveCombineOtherServant,
      HaveRequestItemAndQp,
      0LL);
  }
}


void __fastcall SpecialAscensionControl__Refresh(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *selectBaseSvt,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)selectBaseSvt,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SpecialAscensionControl__SetStateInfoMsg(this, v9);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0LL, 0LL);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v11);
  SpecialAscensionControl__SetCombineInfo(this, v12);
  SpecialAscensionControl__SetExeBtnState(this, v13);
  this->fields.effectCnt = 0;
}


bool __fastcall SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0LL;
}


void __fastcall SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v10; // x8
  ServantLimitImageMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Component_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v18; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UICharaGraphTexture_o **v27; // x0
  UnityEngine_Component_o **v28; // x19
  UnityEngine_Object_o *v29; // x20
  struct UICharaGraphTexture_o *v30; // t1
  UnityEngine_Object_o *v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40F9D83 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9D83 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v10 = this->fields.baseUserServantEntity;
      if ( v10 )
      {
        v11 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
        v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v32.fields.currentCryptoKey = v13;
        *(_QWORD *)&v32.fields.fakeValue = v12;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
        if ( v11 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v11,
                                         v14,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v18 = ServantImageLimitSealAfter;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
            goto LABEL_19;
          if ( *p_charaGraph )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
LABEL_19:
            TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v18,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_26882832;
            v27 = &this->fields.charaGraph;
LABEL_29:
            sub_B16F98(
              (BattleServantConfConponent_o *)v27,
              (System_Int32_array **)TexturePrefab_26882832,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            return;
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  v30 = this->fields.charaGraph;
  v28 = (UnityEngine_Component_o **)&this->fields.charaGraph;
  v29 = (UnityEngine_Object_o *)v30;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    if ( *v28 )
    {
      v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v28, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v31, 0LL);
      v27 = (struct UICharaGraphTexture_o **)v28;
      TexturePrefab_26882832 = 0LL;
      *v28 = 0LL;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  UserServantEntity_o *baseUserServantEntity; // x1
  CombineInfoComponent_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v23; // x8
  ServantLimitMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  int32_t v28; // w22
  int32_t LimitCntMax; // w0
  ServantLimitEntity_o *Entity; // x0
  UserServantEntity_o *v31; // x0
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w0
  int32_t v34; // w22
  int32_t v35; // w0
  ServantLimitEntity_o *v36; // x0
  CheckCombineResStatus_o *combineResStatus; // x0
  struct UserServantEntity_o *v38; // x8
  struct UserServantEntity_o *v39; // x8
  int32_t adjustAtk; // w8
  CombineInfoComponent_o *v41; // x0
  int32_t afterAtk[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_40F9D84 & 1) == 0 )
  {
    sub_B16FFC(&CombineSvtData_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9D84 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_25;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return;
  v8 = this->fields.combineInfoComp;
  if ( !v8 )
    goto LABEL_25;
  CombineInfoComponent__setCurrentStatusInfo(v8, baseUserServantEntity, 0LL);
  v13 = sub_B170CC(CombineSvtData_TypeInfo, v9, v10, v11, v12);
  CombineSvtData___ctor((CombineSvtData_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v20 = (System_Int32_array **)this->fields.baseUserServantEntity;
  *(_QWORD *)(v13 + 16) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), v20, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_25;
  v24 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v26;
  *(_QWORD *)&v43.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v28 = v27;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v24 )
    goto LABEL_25;
  Entity = ServantLimitMaster__GetEntity(v24, v28, LimitCntMax - 1, 0LL);
  if ( !Entity )
    goto LABEL_25;
  *(_DWORD *)(v13 + 24) = Entity->fields.lvMax;
  v31 = this->fields.baseUserServantEntity;
  if ( !v31 )
    goto LABEL_25;
  *(_DWORD *)(v13 + 28) = UserServantEntity__getLimitCntMax(v31, 0LL);
  v32 = this->fields.baseUserServantEntity;
  if ( !v32 )
    goto LABEL_25;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32->fields.svtId, 0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v34 = v33;
  v35 = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  v36 = ServantLimitMaster__GetEntity(v24, v34, v35, 0LL);
  if ( !v36 )
    goto LABEL_25;
  *(_DWORD *)(v13 + 32) = v36->fields.lvMax;
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_25;
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v13 + 24),
    0LL);
  *(_DWORD *)(v13 + 44) = afterAtk[1];
  v38 = this->fields.baseUserServantEntity;
  if ( !v38
    || (*(_DWORD *)(v13 + 48) = v38->fields.adjustHp,
        *(_DWORD *)(v13 + 52) = afterAtk[0],
        (v39 = this->fields.baseUserServantEntity) == 0LL)
    || (adjustAtk = v39->fields.adjustAtk,
        *(_DWORD *)(v13 + 36) = 1065353216,
        *(_DWORD *)(v13 + 56) = adjustAtk,
        (v41 = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  CombineInfoComponent__setCombineResStatusInfo(v41, (CombineSvtData_o *)v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtn; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  UnityEngine_Behaviour_o *v7; // x19
  const MethodInfo *v8; // x1
  int v9; // s0
  int v13; // s0

  if ( (byte_40F9D81 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40F9D81 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtn,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  if ( SpecialAscensionControl__CanExeSpecialAscension(this, v8) )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( v6 )
    {
      UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v9, 0LL);
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_12;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v13, 0LL);
  if ( !v7 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v10; // x20
  float v11; // s4
  float v12; // s5
  float v13; // s6
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v15; // x8
  System_String_o *v16; // x0
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9D82 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5746, v4);
    sub_B16FFC(&StringLiteral_7256, v5);
    sub_B16FFC(&StringLiteral_8806, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F9D82 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v18.fields.g = 0.87891;
  v18.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v18.fields.r = 0.0;
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v18, v11, v12, v13, (const MethodInfo *)&v17);
  if ( !v10 )
    goto LABEL_21;
  UIWidget__set_color(v10, v17, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v10, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_8806;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_5746;
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_7256;
  }
  v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
  if ( !this->fields.detailInfoLb )
LABEL_21:
    sub_B170D4();
  UILabel__set_text(this->fields.detailInfoLb, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SpecialAscensionControl_c *klass; // x8
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UILabel_o *qpLb; // x20
  SpecialAscensionControl_c *v9; // x0
  System_String_o *v10; // x0
  UIWidget_o *v11; // x20
  int v12; // s0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *haveQpLb; // x20
  UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v22; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9D80 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SpecialAscensionControl_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8811, v4);
    sub_B16FFC(&StringLiteral_9236, v5);
    byte_40F9D80 = 1;
  }
  SPEND_QP_VAL = 0;
  klass = this->klass;
  this->fields.helpSeSilent = 1;
  ((void (__fastcall *)(SpecialAscensionControl_o *, Il2CppMethodPointer))klass->vtable._5_OnClickHelp.method)(
    this,
    klass->vtable._6_GetTutorialOpenType.methodPtr);
  this->fields.helpSeSilent = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  this->fields.isSelectBase = 0;
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  qpLb = this->fields.qpLb;
  v9 = SpecialAscensionControl_TypeInfo;
  if ( (BYTE3(SpecialAscensionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v9 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v9->static_fields->SPEND_QP_VAL;
  v10 = System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_20;
  UILabel__set_text(qpLb, v10, 0LL);
  v11 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
  if ( !v11 )
    goto LABEL_20;
  UIWidget__set_color(v11, *(UnityEngine_Color_o *)&v12, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !v16 )
    goto LABEL_20;
  transform = UnityEngine_Component__get_transform(v16, 0LL);
  if ( !transform )
    goto LABEL_20;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  haveQpLb = this->fields.haveQpLb;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_20;
  v22 = System_Int32__ToString_38275808((int)SelfUserGame + 96, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !haveQpLb )
    goto LABEL_20;
  UILabel__set_text(haveQpLb, v22, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8811, 0LL);
  if ( !preSelectBaseLb )
LABEL_20:
    sub_B170D4();
  UILabel__set_text(preSelectBaseLb, v24, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v25);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F9D7F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_40F9D7F = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              transform,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}