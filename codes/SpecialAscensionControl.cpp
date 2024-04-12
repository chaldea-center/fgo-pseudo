void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B0A3C & 1) == 0 )
  {
    sub_B52984(&SpecialAscensionControl_TypeInfo);
    sub_B52984(&StringLiteral_3222/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/);
    byte_42B0A3C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SpecialAscensionControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_3222/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3222/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  __int64 v4; // x1
  UserServantEntity_o *v5; // x0

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    return 0;
  v5 = this->fields.baseUserServantEntity;
  if ( !v5 )
LABEL_9:
    sub_B52A5C(v5, v4);
  if ( !UserServantEntity__IsEventJoin(v5, 0LL) )
  {
    v5 = this->fields.baseUserServantEntity;
    if ( v5 )
      return !UserServantEntity__IsHeroine(v5, 0LL);
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

  if ( (byte_42B0A38 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B0A38 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v7, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  WarEntity_o *Entity; // x20
  CombineLimitEntity_o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42B0A3A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A3A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  if ( !v8
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v8,
                   (int32_t)Instance,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v12 = CombineLimitMaster__GetEntity(
                (CombineLimitMaster_o *)Instance,
                HIDWORD(Entity->fields.coordinates),
                limitCnt,
                0LL),
        v13 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__),
        !v12)
    || !v13 )
  {
LABEL_15:
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_List_int___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12->fields.itemIds,
    (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v13;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  ServantLimitMaster_o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w24
  const MethodInfo *v15; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42B0A39 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A39 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_12;
  v11 = (ServantLimitMaster_o *)Instance;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v15);
  if ( !v11
    || (Instance = ServantLimitMaster__GetEntity(v11, v14, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_12:
    sub_B52A5C(Instance, v10);
  }
  CheckCombineResStatus__getCombineResStatus(
    combineResStatus,
    afterHp,
    afterAtk,
    userServantEntity,
    *((_DWORD *)Instance + 7),
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x25
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  int64_t v9; // x22
  unsigned __int64 v10; // x26
  UserServantEntity_Fields *p_fields; // x27
  __int64 v12; // x23
  __int128 v13; // q0
  __int128 v14; // q0
  int64_t v15; // x0
  __int128 v16; // q0
  int64_t v17; // x24
  UserServantEntity_Fields *v18; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x27
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v27; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v30; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  bool v33; // w19
  int v34; // w8
  int v35; // w9
  __int64 v37; // x0
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-D0h] BYREF
  _DWORD v42[15]; // [xsp+60h] [xbp-B0h] BYREF
  int v43; // [xsp+9Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42B0A36 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A36 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = Instance;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    p_fields = &userSvtEntity->fields;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
        v37 = sub_B52A88(Instance);
        sub_B52A28(v37, 0LL);
      }
      v12 = *(_QWORD *)(v9 + 32 + 8 * v10);
      if ( v12 )
      {
        v13 = *(_OWORD *)(v12 + 64);
        *(_OWORD *)v42 = *(_OWORD *)(v12 + 48);
        *(_OWORD *)&v42[4] = v13;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v41 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v42;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v41, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_64;
            v14 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            *(_OWORD *)v42 = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v42[4] = v14;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v40 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v42;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v40, 0LL);
            v16 = *(_OWORD *)(v12 + 32);
            v17 = v15;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
            *(_OWORD *)&v39.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v39, 0LL);
            if ( v17 != Instance )
            {
              v18 = p_fields;
              v19 = v4;
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v45.fields.currentCryptoKey = v21;
              *(_QWORD *)&v45.fields.fakeValue = v20;
              v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v12 + 80),
                           0LL);
              v4 = v19;
              p_fields = v18;
              if ( v22 == (_DWORD)Instance )
              {
                if ( !v4 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v4,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v8) = *(_DWORD *)(v9 + 24);
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  if ( !v4 )
LABEL_64:
    sub_B52A5C(Instance, v7);
  if ( v4->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v44 = *(System_Collections_Generic_List_Enumerator_T__o *)v42;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B52A5C(v23, v24);
    if ( SHIDWORD(v44.fields.current[16].klass) >= 2
      || SLODWORD(v44.fields.current[17].monitor) > 1
      || SHIDWORD(v44.fields.current[17].monitor) > 1
      || SLODWORD(v44.fields.current[18].klass) > 1 )
    {
      goto LABEL_53;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v44.fields.current, 0LL);
    if ( !AppendSkillInfo )
      sub_B52A5C(0LL, v27);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_B52A5C(AppendSkillInfo, v27);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= max_length )
        {
          v38 = sub_B52A88(AppendSkillInfo);
          sub_B52A28(v38, 0LL);
        }
        if ( svtSkillLvList->m_Items[v30 + 1] >= 2 )
          break;
        if ( (int)++v30 >= max_length )
          goto LABEL_46;
      }
LABEL_53:
      v33 = 1;
      v34 = 357;
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
    *(_QWORD *)&v46.fields.currentCryptoKey = klass;
    *(_QWORD *)&v46.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_53;
    }
  }
  v33 = 0;
  v34 = 355;
LABEL_54:
  v42[v43++ + 8] = v34;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  if ( !v43 )
    return 0;
  v35 = v42[v43 + 7];
  if ( v35 == 355 )
  {
    v33 = 0;
    goto LABEL_59;
  }
  if ( v35 == 357 )
  {
LABEL_59:
    --v43;
    return v33;
  }
  return 0;
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x23
  WarEntity_o *v11; // x19
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w22
  int v15; // w21
  struct System_Byte_array *masterDataBytes; // x21
  __int64 v17; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x25
  unsigned __int64 v19; // x19
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  WebViewManager_o *v25; // x0
  __int64 v26; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v29; // q0
  UserItemMaster_o *v30; // x21
  int64_t v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int v35; // w19
  __int64 v36; // x0
  UserServantEntity_o *v37; // [xsp+0h] [xbp-E0h]
  WarEntity_o *v38; // [xsp+8h] [xbp-D8h]
  int datalist; // [xsp+14h] [xbp-CCh]
  int32_t v40; // [xsp+18h] [xbp-C8h]
  int v41; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42B0A37 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A37 = 1;
  }
  memset(&v45, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_49;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v10;
  *(_QWORD *)&v46.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
  if ( !v8 )
    goto LABEL_49;
  v11 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v8,
          (int32_t)Instance,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v13 = this->fields.baseUserServantEntity;
  if ( !v13 )
    goto LABEL_49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                v13->fields.limitCount,
                                0LL);
  if ( !v11 )
    goto LABEL_49;
  v14 = (int)Instance;
  v37 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v11->fields.targetId) )
  {
    v15 = 0;
    v38 = v11;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_49;
      v41 = v15;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v11->fields.coordinates),
                                    v14,
                                    0LL);
      if ( !Instance )
        goto LABEL_49;
      masterDataBytes = Instance->fields.masterDataBytes;
      v40 = v14;
      if ( !masterDataBytes )
        goto LABEL_49;
      v17 = *(_QWORD *)&masterDataBytes->max_length;
      datalist = (int)Instance->fields.datalist;
      if ( (int)v17 >= 1 )
        break;
LABEL_26:
      v11 = v38;
      ++v14;
      v15 = datalist + v41;
      if ( v40 + 1 >= SLODWORD(v38->fields.targetId) )
        goto LABEL_29;
    }
    lookup = Instance->fields.lookup;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_50;
      if ( !lookup )
        break;
      if ( v19 >= LODWORD(lookup->fields.entries) )
      {
LABEL_50:
        v36 = sub_B52A88(Instance);
        sub_B52A28(v36, 0LL);
      }
      if ( !v12 )
        break;
      v20 = *(_DWORD *)&masterDataBytes->m_Items[4 * v19 + 4];
      v21 = *(&lookup->fields.count + v19);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v12,
             v20,
             (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v21 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v12,
                 v20,
                 (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v12,
          v20,
          (const MethodInfo_2F01394 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v12,
        v20,
        v21,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v17) = masterDataBytes->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_26;
    }
LABEL_49:
    sub_B52A5C(Instance, v6);
  }
  v15 = 0;
LABEL_29:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_49;
  if ( SLODWORD(Instance->fields.masterLoadThreads) < v15 )
    return 0;
  if ( !v12 )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v43,
    v12,
    (const MethodInfo_2F00010 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v45.fields.dictionary = *(_OWORD *)&v43.fields.dictionary;
  v45.fields.current = v43.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v45,
            (const MethodInfo_2886FC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v45.fields.current.fields.key;
    key_high = HIDWORD(v45.fields.current.fields.key);
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v25,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v37 )
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v28);
    v29 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v37->fields.userId.fields.fakeValue;
    v30 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v43.fields.dictionary = *(_OWORD *)&v37->fields.userId.fields.currentCryptoKey;
    v43.fields.current = v29;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v43.fields.dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v42.fields.fakeValue = v43.fields.current;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v42, 0LL);
    if ( !v30 )
      sub_B52A5C(v31, v32);
    v33 = UserItemMaster__TryGetEntity(v30, &entity, v31, key, 0LL);
    if ( v33 )
    {
      if ( !entity )
        sub_B52A5C(v33, v34);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v35 = 9;
    goto LABEL_47;
  }
  v35 = 7;
LABEL_47:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v45,
    (const MethodInfo_2887108 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v35 != 9;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v4; // w20
  System_Action_o *v5; // x21

  if ( (byte_42B0A3B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnCloseHelp__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0A3B = 1;
  }
  if ( !this->fields.helpSeSilent )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v4 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v4, v5, 0LL);
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
  _BOOL8 HaveRequestItemAndQp; // x0
  __int64 v10; // x1

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
      sub_B52A5C(HaveRequestItemAndQp, v10);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  this->fields.baseUserServantEntity = selectBaseSvt;
  sub_B52920(
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
    sub_B52A5C(0LL, v10);
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, this->fields.baseUserServantEntity == 0LL, 0LL);
  SpecialAscensionControl__SetBaseSvtCardImg(this, v12);
  SpecialAscensionControl__SetCombineInfo(this, v13);
  SpecialAscensionControl__SetExeBtnState(this, v14);
  this->fields.effectCnt = 0;
}


bool __fastcall SpecialAscensionControl__SelectedBaseSvt(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  return this->fields.baseUserServantEntity != 0LL;
}


void __fastcall SpecialAscensionControl__SetBaseSvtCardImg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *v7; // x8
  ServantLimitImageMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v14; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24904472; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UICharaGraphTexture_o **v23; // x0
  struct UICharaGraphTexture_o **v24; // x19
  UnityEngine_Object_o *v25; // x20
  struct UICharaGraphTexture_o *v26; // t1
  UnityEngine_Object_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42B0A34 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A34 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v7 = this->fields.baseUserServantEntity;
      if ( v7 )
      {
        v8 = (ServantLimitImageMaster_o *)Instance;
        v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
        v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v10;
        *(_QWORD *)&v28.fields.fakeValue = v9;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
        if ( v8 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v8,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v14 = ServantImageLimitSealAfter;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
            goto LABEL_19;
          Instance = (DataManager_o *)*p_charaGraph;
          if ( *p_charaGraph )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
LABEL_19:
            TexturePrefab_24904472 = CharaGraphManager__CreateTexturePrefab_24904472(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v14,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_24904472;
            v23 = &this->fields.charaGraph;
LABEL_29:
            sub_B52920(
              (BattleServantConfConponent_o *)v23,
              (System_Int32_array **)TexturePrefab_24904472,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            return;
          }
        }
      }
    }
LABEL_31:
    sub_B52A5C(Instance, v6);
  }
  v26 = this->fields.charaGraph;
  v24 = &this->fields.charaGraph;
  v25 = (UnityEngine_Object_o *)v26;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v24;
    if ( *v24 )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v27, 0LL);
      v23 = v24;
      TexturePrefab_24904472 = 0LL;
      *v24 = 0LL;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **baseUserServantEntity; // x1
  struct UserServantEntity_o *v12; // x8
  ServantLimitMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w22
  struct UserServantEntity_o *v17; // x8
  int32_t v18; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42B0A35 & 1) == 0 )
  {
    sub_B52984(&CombineSvtData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A35 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_25;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, 0LL);
  method = (const MethodInfo *)this->fields.baseUserServantEntity;
  if ( !method )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_25;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, (UserServantEntity_o *)method, 0LL);
  v4 = sub_B52A54(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_25;
  baseUserServantEntity = (System_Int32_array **)this->fields.baseUserServantEntity;
  *(_QWORD *)(v4 + 16) = baseUserServantEntity;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 16), baseUserServantEntity, v5, v6, v7, v8, v9, v10);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v12 = this->fields.baseUserServantEntity;
  if ( !v12 )
    goto LABEL_25;
  v13 = (ServantLimitMaster_o *)combineInfoComp;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v24,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v16 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v13 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v13, v16, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v4 + 24) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v4 + 28) = (_DWORD)combineInfoComp;
  v17 = this->fields.baseUserServantEntity;
  if ( !v17 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v17->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v18 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v13, v18, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v4 + 32) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_25;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v4 + 24),
    0LL);
  *(_DWORD *)(v4 + 44) = afterAtk[1];
  v20 = this->fields.baseUserServantEntity;
  if ( !v20
    || (*(_DWORD *)(v4 + 48) = v20->fields.adjustHp,
        *(_DWORD *)(v4 + 52) = afterAtk[0],
        (v21 = this->fields.baseUserServantEntity) == 0LL)
    || (adjustAtk = v21->fields.adjustAtk,
        *(_DWORD *)(v4 + 36) = 1065353216,
        *(_DWORD *)(v4 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v4; // x20
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19
  const MethodInfo *v6; // x1
  int v7; // s0
  int v11; // s0

  if ( (byte_42B0A32 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B0A32 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            combineBtn,
                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtn;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  if ( SpecialAscensionControl__CanExeSpecialAscension(this, v6) )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( v4 )
    {
      UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v7, 0LL);
      if ( Component_WebViewObject )
      {
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_WebViewObject, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(combineBtn, method);
  }
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_12;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v11, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v5; // x20
  float v6; // s4
  float v7; // s5
  float v8; // s6
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v10; // x8
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B0A33 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_7330/*"INFO_MSG_SPECIAL_ASCENSION"*/);
    sub_B52984(&StringLiteral_8889/*"MSG_LIMITUP_MAX"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0A33 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v12.fields.g = 0.87891;
  v12.fields.b = 0.98828;
  v5 = (UIWidget_o *)Component_WebViewObject;
  v12.fields.r = 0.0;
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_Color___ctor_41463668(v12, v6, v7, v8, (const MethodInfo *)&v11);
  if ( !v5 )
    goto LABEL_21;
  UIWidget__set_color(v5, v11, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v5, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_8889/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_7330/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
  if ( !this->fields.detailInfoLb )
LABEL_21:
    sub_B52A5C(detailInfoLb, method);
  UILabel__set_text(this->fields.detailInfoLb, (System_String_o *)detailInfoLb, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  SpecialAscensionControl_c *klass; // x8
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UILabel_o *qpLb; // x20
  SpecialAscensionControl_c *v7; // x0
  UIWidget_o *v8; // x20
  int v9; // s0
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v15; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0A31 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SpecialAscensionControl_TypeInfo);
    sub_B52984(&StringLiteral_8894/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B0A31 = 1;
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
  v7 = SpecialAscensionControl_TypeInfo;
  if ( (BYTE3(SpecialAscensionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v7 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v7->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_20;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  v8 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_20;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)baseSelectInfoLb,
                                                   0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)baseSelectInfoLb,
                                                   0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  baseSelectInfoLb = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSelectInfoLb, 0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  haveQpLb = this->fields.haveQpLb;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseSelectInfoLb )
    goto LABEL_20;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_39387012(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9323/*"N0"*/,
                                                   0LL);
  if ( !haveQpLb )
    goto LABEL_20;
  UILabel__set_text(haveQpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  this->fields.pushExeButton = 0;
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8894/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_20:
    sub_B52A5C(baseSelectInfoLb, v4);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v15);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B0A30 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    byte_42B0A30 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B52A5C(0LL, v4);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              transform,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}