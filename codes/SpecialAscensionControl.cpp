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

  if ( (byte_42152C8 & 1) == 0 )
  {
    sub_B0D8A4(&SpecialAscensionControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_3202/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v8);
    byte_42152C8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SpecialAscensionControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_3202/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3202/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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

  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity || UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    return 0;
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
LABEL_9:
    sub_B0D97C(v4);
  if ( !UserServantEntity__IsEventJoin(v4, 0LL) )
  {
    v4 = this->fields.baseUserServantEntity;
    if ( v4 )
      return !UserServantEntity__IsHeroine(v4, 0LL);
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

  if ( (byte_42152C4 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42152C4 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7, 0LL);
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
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  WarEntity_o *Entity; // x20
  CombineLimitEntity_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42152C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_42152C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  if ( !v14
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v14,
                   (int32_t)Instance,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v18 = CombineLimitMaster__GetEntity(
                (CombineLimitMaster_o *)Instance,
                HIDWORD(Entity->fields.coordinates),
                limitCnt,
                0LL),
        v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v19,
                                                          v20),
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__),
        !v18)
    || !v21 )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_int___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)v18->fields.itemIds,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v21;
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
  void *Instance; // x0
  ServantLimitMaster_o *v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w24
  const MethodInfo *v16; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42152C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_42152C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_12;
  v12 = (ServantLimitMaster_o *)Instance;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v16);
  if ( !v12
    || (Instance = ServantLimitMaster__GetEntity(v12, v15, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_12:
    sub_B0D97C(Instance);
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
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x25
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v19; // x8
  int64_t v20; // x22
  unsigned __int64 v21; // x26
  UserServantEntity_Fields *p_fields; // x27
  __int64 v23; // x23
  __int128 v24; // q0
  __int128 v25; // q0
  int64_t v26; // x0
  __int128 v27; // q0
  int64_t v28; // x24
  UserServantEntity_Fields *v29; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x27
  __int64 v31; // x24
  __int64 v32; // x25
  int32_t v33; // w24
  _BOOL8 v34; // x0
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v39; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  bool v42; // w19
  int v43; // w8
  int v44; // w9
  __int64 v46; // x0
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-D0h] BYREF
  _DWORD v51[15]; // [xsp+60h] [xbp-B0h] BYREF
  int v52; // [xsp+9Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42152C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_42152C2 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  userSvtEntity,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v19 = *(_QWORD *)(Instance + 24);
  v20 = Instance;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    p_fields = &userSvtEntity->fields;
    do
    {
      if ( v21 >= (unsigned int)v19 )
      {
        v46 = sub_B0D9A8(Instance);
        sub_B0D948(v46, 0LL);
      }
      v23 = *(_QWORD *)(v20 + 32 + 8 * v21);
      if ( v23 )
      {
        v24 = *(_OWORD *)(v23 + 64);
        *(_OWORD *)v51 = *(_OWORD *)(v23 + 48);
        *(_OWORD *)&v51[4] = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v50 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v51;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v23, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_64;
            v25 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            *(_OWORD *)v51 = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v51[4] = v25;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v49 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v51;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v49, 0LL);
            v27 = *(_OWORD *)(v23 + 32);
            v28 = v26;
            *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
            *(_OWORD *)&v48.fields.fakeValue = v27;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v48, 0LL);
            if ( v28 != Instance )
            {
              v29 = p_fields;
              v30 = v16;
              v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v54.fields.currentCryptoKey = v32;
              *(_QWORD *)&v54.fields.fakeValue = v31;
              v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v23 + 80),
                           0LL);
              v16 = v30;
              p_fields = v29;
              if ( v33 == (_DWORD)Instance )
              {
                if ( !v16 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v19) = *(_DWORD *)(v20 + 24);
      ++v21;
    }
    while ( (__int64)v21 < (int)v19 );
  }
  if ( !v16 )
LABEL_64:
    sub_B0D97C(Instance);
  if ( v16->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v51;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v34 )
      break;
    current = v53.fields.current;
    if ( !v53.fields.current )
      sub_B0D97C(v34);
    if ( SHIDWORD(v53.fields.current[16].klass) >= 2
      || SLODWORD(v53.fields.current[17].monitor) > 1
      || SHIDWORD(v53.fields.current[17].monitor) > 1
      || SLODWORD(v53.fields.current[18].klass) > 1 )
    {
      goto LABEL_53;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v53.fields.current, 0LL);
    if ( !AppendSkillInfo )
      sub_B0D97C(0LL);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_B0D97C(AppendSkillInfo);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        if ( v39 >= max_length )
        {
          v47 = sub_B0D9A8(AppendSkillInfo);
          sub_B0D948(v47, 0LL);
        }
        if ( svtSkillLvList->m_Items[v39 + 1] >= 2 )
          break;
        if ( (int)++v39 >= max_length )
          goto LABEL_46;
      }
LABEL_53:
      v42 = 1;
      v43 = 357;
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
    *(_QWORD *)&v55.fields.currentCryptoKey = klass;
    *(_QWORD *)&v55.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_53;
    }
  }
  v42 = 0;
  v43 = 355;
LABEL_54:
  v51[v52++ + 8] = v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  if ( !v52 )
    return 0;
  v44 = v51[v52 + 7];
  if ( v44 == 355 )
  {
    v42 = 0;
    goto LABEL_59;
  }
  if ( v44 == 357 )
  {
LABEL_59:
    --v52;
    return v42;
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
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x23
  WarEntity_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_int__int__o *v31; // x20
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w22
  int v34; // w21
  struct System_Byte_array *masterDataBytes; // x21
  __int64 v36; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x25
  unsigned __int64 v38; // x19
  int32_t v39; // w23
  int32_t v40; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  WebViewManager_o *v44; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v46; // q0
  UserItemMaster_o *v47; // x21
  int64_t v48; // x0
  _BOOL8 v49; // x0
  int v50; // w19
  __int64 v51; // x0
  UserServantEntity_o *v52; // [xsp+0h] [xbp-E0h]
  WarEntity_o *v53; // [xsp+8h] [xbp-D8h]
  int datalist; // [xsp+14h] [xbp-CCh]
  int32_t v55; // [xsp+18h] [xbp-C8h]
  int v56; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42152C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_42152C3 = 1;
  }
  memset(&v60, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_49;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v27;
  *(_QWORD *)&v61.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v61, 0LL);
  if ( !v25 )
    goto LABEL_49;
  v28 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v25,
          (int32_t)Instance,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v29,
                                                               v30);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v32 = this->fields.baseUserServantEntity;
  if ( !v32 )
    goto LABEL_49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                v32->fields.limitCount,
                                0LL);
  if ( !v28 )
    goto LABEL_49;
  v33 = (int)Instance;
  v52 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v28->fields.targetId) )
  {
    v34 = 0;
    v53 = v28;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_49;
      v56 = v34;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v28->fields.coordinates),
                                    v33,
                                    0LL);
      if ( !Instance )
        goto LABEL_49;
      masterDataBytes = Instance->fields.masterDataBytes;
      v55 = v33;
      if ( !masterDataBytes )
        goto LABEL_49;
      v36 = *(_QWORD *)&masterDataBytes->max_length;
      datalist = (int)Instance->fields.datalist;
      if ( (int)v36 >= 1 )
        break;
LABEL_26:
      v28 = v53;
      ++v33;
      v34 = datalist + v56;
      if ( v55 + 1 >= SLODWORD(v53->fields.targetId) )
        goto LABEL_29;
    }
    lookup = Instance->fields.lookup;
    v38 = 0LL;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v36 )
        goto LABEL_50;
      if ( !lookup )
        break;
      if ( v38 >= LODWORD(lookup->fields.entries) )
      {
LABEL_50:
        v51 = sub_B0D9A8(Instance);
        sub_B0D948(v51, 0LL);
      }
      if ( !v31 )
        break;
      v39 = *(_DWORD *)&masterDataBytes->m_Items[4 * v38 + 4];
      v40 = *(&lookup->fields.count + v38);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v31,
             v39,
             (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v40 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v31,
                 v39,
                 (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v31,
          v39,
          (const MethodInfo_2E6B14C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v31,
        v39,
        v40,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v36) = masterDataBytes->max_length;
      if ( (__int64)++v38 >= (int)v36 )
        goto LABEL_26;
    }
LABEL_49:
    sub_B0D97C(Instance);
  }
  v34 = 0;
LABEL_29:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_49;
  if ( SLODWORD(Instance->fields.masterLoadThreads) < v34 )
    return 0;
  if ( !v31 )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v58,
    v31,
    (const MethodInfo_2E69DC8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v60.fields.dictionary = *(_OWORD *)&v58.fields.dictionary;
  v60.fields.current = v58.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v60,
            (const MethodInfo_280E1C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v60.fields.current.fields.key;
    key_high = HIDWORD(v60.fields.current.fields.key);
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v44 )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v44,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v52 )
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
    v46 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v52->fields.userId.fields.fakeValue;
    v47 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v58.fields.dictionary = *(_OWORD *)&v52->fields.userId.fields.currentCryptoKey;
    v58.fields.current = v46;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v58.fields.dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v57.fields.fakeValue = v58.fields.current;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v57, 0LL);
    if ( !v47 )
      sub_B0D97C(v48);
    v49 = UserItemMaster__TryGetEntity(v47, &entity, v48, key, 0LL);
    if ( v49 )
    {
      if ( !entity )
        sub_B0D97C(v49);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v50 = 9;
    goto LABEL_47;
  }
  v50 = 7;
LABEL_47:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v60,
    (const MethodInfo_280E30C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v50 != 9;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21

  if ( (byte_42152C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineMenuControl_OnCloseHelp__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42152C7 = 1;
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v6 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v6, v9, 0LL);
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
      sub_B0D97C(HaveRequestItemAndQp);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *v9; // x8
  ServantLimitImageMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v16; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24036516; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UICharaGraphTexture_o **v25; // x0
  struct UICharaGraphTexture_o **v26; // x19
  UnityEngine_Object_o *v27; // x20
  struct UICharaGraphTexture_o *v28; // t1
  UnityEngine_Object_o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42152C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42152C0 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v9 = this->fields.baseUserServantEntity;
      if ( v9 )
      {
        v10 = (ServantLimitImageMaster_o *)Instance;
        v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v30.fields.currentCryptoKey = v12;
        *(_QWORD *)&v30.fields.fakeValue = v11;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
        if ( v10 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v10,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v16 = ServantImageLimitSealAfter;
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
            UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
LABEL_19:
            TexturePrefab_24036516 = CharaGraphManager__CreateTexturePrefab_24036516(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v16,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_24036516;
            v25 = &this->fields.charaGraph;
LABEL_29:
            sub_B0D840(
              (BattleServantConfConponent_o *)v25,
              (System_Int32_array **)TexturePrefab_24036516,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            return;
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(Instance);
  }
  v28 = this->fields.charaGraph;
  v26 = &this->fields.charaGraph;
  v27 = (UnityEngine_Object_o *)v28;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v26;
    if ( *v26 )
    {
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v29, 0LL);
      v25 = v26;
      TexturePrefab_24036516 = 0LL;
      *v26 = 0LL;
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  struct UserServantEntity_o *v18; // x8
  ServantLimitMaster_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w22
  struct UserServantEntity_o *v23; // x8
  int32_t v24; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v26; // x8
  struct UserServantEntity_o *v27; // x8
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42152C1 & 1) == 0 )
  {
    sub_B0D8A4(&CombineSvtData_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42152C1 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_25;
  CombineInfoComponent__initStatusInfo(combineInfoComp, 4, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return;
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_25;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, baseUserServantEntity, 0LL);
  v10 = sub_B0D974(CombineSvtData_TypeInfo, v8, v9);
  CombineSvtData___ctor((CombineSvtData_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  v17 = (System_Int32_array **)this->fields.baseUserServantEntity;
  *(_QWORD *)(v10 + 16) = v17;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), v17, v11, v12, v13, v14, v15, v16);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = this->fields.baseUserServantEntity;
  if ( !v18 )
    goto LABEL_25;
  v19 = (ServantLimitMaster_o *)combineInfoComp;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v21;
  *(_QWORD *)&v30.fields.fakeValue = v20;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v30,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v22 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v19 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v19, v22, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v10 + 24) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v10 + 28) = (_DWORD)combineInfoComp;
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v23->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v24 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v19, v24, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v10 + 32) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_25;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v10 + 24),
    0LL);
  *(_DWORD *)(v10 + 44) = afterAtk[1];
  v26 = this->fields.baseUserServantEntity;
  if ( !v26
    || (*(_DWORD *)(v10 + 48) = v26->fields.adjustHp,
        *(_DWORD *)(v10 + 52) = afterAtk[0],
        (v27 = this->fields.baseUserServantEntity) == 0LL)
    || (adjustAtk = v27->fields.adjustAtk,
        *(_DWORD *)(v10 + 36) = 1065353216,
        *(_DWORD *)(v10 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(combineInfoComp);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v5; // x20
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19
  const MethodInfo *v7; // x1
  int v8; // s0
  int v12; // s0

  if ( (byte_42152BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_42152BE = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            combineBtn,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtn;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                                         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  if ( SpecialAscensionControl__CanExeSpecialAscension(this, v7) )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( v5 )
    {
      UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v8, 0LL);
      if ( Component_WebViewObject )
      {
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_WebViewObject, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(combineBtn);
  }
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_12;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v12, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
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
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42152BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v4);
    sub_B0D8A4(&StringLiteral_7304/*"INFO_MSG_SPECIAL_ASCENSION"*/, v5);
    sub_B0D8A4(&StringLiteral_8858/*"MSG_LIMITUP_MAX"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_42152BF = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v17.fields.g = 0.87891;
  v17.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v17.fields.r = 0.0;
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(v17, v11, v12, v13, (const MethodInfo *)&v16);
  if ( !v10 )
    goto LABEL_21;
  UIWidget__set_color(v10, v16, 0LL);
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
      v15 = &StringLiteral_8858/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_7304/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
  if ( !this->fields.detailInfoLb )
LABEL_21:
    sub_B0D97C(detailInfoLb);
  UILabel__set_text(this->fields.detailInfoLb, (System_String_o *)detailInfoLb, 0LL);
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
  UIWidget_o *v10; // x20
  int v11; // s0
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v17; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42152BD & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&SpecialAscensionControl_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_8863/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v4);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v5);
    byte_42152BD = 1;
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_20;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  v10 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !v10 )
    goto LABEL_20;
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v11, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_38473032(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9289/*"N0"*/,
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8863/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_20:
    sub_B0D97C(baseSelectInfoLb);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v17);
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

  if ( (byte_42152BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_42152BC = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              transform,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}