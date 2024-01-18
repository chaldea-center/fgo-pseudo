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

  if ( (byte_418775A & 1) == 0 )
  {
    sub_B2C35C(&SpecialAscensionControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_3190/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v8);
    byte_418775A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SpecialAscensionControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_3190/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3190/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(v5, v4);
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

  if ( (byte_4187756 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4187756 = 1;
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
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
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
  __int64 v13; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  WarEntity_o *Entity; // x20
  CombineLimitEntity_o *v19; // x20
  System_Collections_Generic_List_int__o *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4187758 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineLimitMaster___, *(_QWORD *)&limitCnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4187758 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v17;
  *(_QWORD *)&v22.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v15,
                   (int32_t)Instance,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v19 = CombineLimitMaster__GetEntity(
                (CombineLimitMaster_o *)Instance,
                HIDWORD(Entity->fields.coordinates),
                limitCnt,
                0LL),
        v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__),
        !v19)
    || !v20 )
  {
LABEL_15:
    sub_B2C434(Instance, v13);
  }
  System_Collections_Generic_List_int___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v19->fields.itemIds,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  return v20;
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
  __int64 v12; // x1
  ServantLimitMaster_o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w24
  const MethodInfo *v17; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4187757 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, afterHp);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187757 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_12;
  v13 = (ServantLimitMaster_o *)Instance;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v17);
  if ( !v13
    || (Instance = ServantLimitMaster__GetEntity(v13, v16, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_12:
    sub_B2C434(Instance, v12);
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
  __int64 v19; // x1
  __int64 v20; // x8
  int64_t v21; // x22
  unsigned __int64 v22; // x26
  UserServantEntity_Fields *p_fields; // x27
  __int64 v24; // x23
  __int128 v25; // q0
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q0
  int64_t v29; // x24
  UserServantEntity_Fields *v30; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x27
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w24
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v39; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v42; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  bool v45; // w19
  int v46; // w8
  int v47; // w9
  __int64 v49; // x0
  __int64 v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-D0h] BYREF
  _DWORD v54[15]; // [xsp+60h] [xbp-B0h] BYREF
  int v55; // [xsp+9Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4187754 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4187754 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v55 = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v20 = *(_QWORD *)(Instance + 24);
  v21 = Instance;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    p_fields = &userSvtEntity->fields;
    do
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v49 = sub_B2C460(Instance);
        sub_B2C400(v49, 0LL);
      }
      v24 = *(_QWORD *)(v21 + 32 + 8 * v22);
      if ( v24 )
      {
        v25 = *(_OWORD *)(v24 + 64);
        *(_OWORD *)v54 = *(_OWORD *)(v24 + 48);
        *(_OWORD *)&v54[4] = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v53 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v54;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v53, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v24, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_64;
            v26 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            *(_OWORD *)v54 = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v54[4] = v26;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v52 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v54;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v52, 0LL);
            v28 = *(_OWORD *)(v24 + 32);
            v29 = v27;
            *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
            *(_OWORD *)&v51.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
            if ( v29 != Instance )
            {
              v30 = p_fields;
              v31 = v16;
              v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v57.fields.currentCryptoKey = v33;
              *(_QWORD *)&v57.fields.fakeValue = v32;
              v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v24 + 80),
                           0LL);
              v16 = v31;
              p_fields = v30;
              if ( v34 == (_DWORD)Instance )
              {
                if ( !v16 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v20) = *(_DWORD *)(v21 + 24);
      ++v22;
    }
    while ( (__int64)v22 < (int)v20 );
  }
  if ( !v16 )
LABEL_64:
    sub_B2C434(Instance, v19);
  if ( v16->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v56 = *(System_Collections_Generic_List_Enumerator_T__o *)v54;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v35 )
      break;
    current = v56.fields.current;
    if ( !v56.fields.current )
      sub_B2C434(v35, v36);
    if ( SHIDWORD(v56.fields.current[16].klass) >= 2
      || SLODWORD(v56.fields.current[17].monitor) > 1
      || SHIDWORD(v56.fields.current[17].monitor) > 1
      || SLODWORD(v56.fields.current[18].klass) > 1 )
    {
      goto LABEL_53;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v56.fields.current, 0LL);
    if ( !AppendSkillInfo )
      sub_B2C434(0LL, v39);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_B2C434(AppendSkillInfo, v39);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= max_length )
        {
          v50 = sub_B2C460(AppendSkillInfo);
          sub_B2C400(v50, 0LL);
        }
        if ( svtSkillLvList->m_Items[v42 + 1] >= 2 )
          break;
        if ( (int)++v42 >= max_length )
          goto LABEL_46;
      }
LABEL_53:
      v45 = 1;
      v46 = 357;
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
    *(_QWORD *)&v58.fields.currentCryptoKey = klass;
    *(_QWORD *)&v58.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_53;
    }
  }
  v45 = 0;
  v46 = 355;
LABEL_54:
  v54[v55++ + 8] = v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  if ( !v55 )
    return 0;
  v47 = v54[v55 + 7];
  if ( v47 == 355 )
  {
    v45 = 0;
    goto LABEL_59;
  }
  if ( v47 == 357 )
  {
LABEL_59:
    --v55;
    return v45;
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
  __int64 v24; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x23
  WarEntity_o *v29; // x19
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w22
  int v33; // w21
  struct System_Byte_array *masterDataBytes; // x21
  __int64 v35; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x25
  unsigned __int64 v37; // x19
  int32_t v38; // w23
  int32_t v39; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  WebViewManager_o *v43; // x0
  __int64 v44; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v47; // q0
  UserItemMaster_o *v48; // x21
  int64_t v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  int v53; // w19
  __int64 v54; // x0
  UserServantEntity_o *v55; // [xsp+0h] [xbp-E0h]
  WarEntity_o *v56; // [xsp+8h] [xbp-D8h]
  int datalist; // [xsp+14h] [xbp-CCh]
  int32_t v58; // [xsp+18h] [xbp-C8h]
  int v59; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4187755 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineLimitMaster___, userSvtEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4187755 = 1;
  }
  memset(&v63, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_49;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v28;
  *(_QWORD *)&v64.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
  if ( !v26 )
    goto LABEL_49;
  v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v26,
          (int32_t)Instance,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v31 = this->fields.baseUserServantEntity;
  if ( !v31 )
    goto LABEL_49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v31->fields.limitCount,
                                0LL);
  if ( !v29 )
    goto LABEL_49;
  v32 = (int)Instance;
  v55 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v29->fields.targetId) )
  {
    v33 = 0;
    v56 = v29;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_49;
      v59 = v33;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v29->fields.coordinates),
                                    v32,
                                    0LL);
      if ( !Instance )
        goto LABEL_49;
      masterDataBytes = Instance->fields.masterDataBytes;
      v58 = v32;
      if ( !masterDataBytes )
        goto LABEL_49;
      v35 = *(_QWORD *)&masterDataBytes->max_length;
      datalist = (int)Instance->fields.datalist;
      if ( (int)v35 >= 1 )
        break;
LABEL_26:
      v29 = v56;
      ++v32;
      v33 = datalist + v59;
      if ( v58 + 1 >= SLODWORD(v56->fields.targetId) )
        goto LABEL_29;
    }
    lookup = Instance->fields.lookup;
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v35 )
        goto LABEL_50;
      if ( !lookup )
        break;
      if ( v37 >= LODWORD(lookup->fields.entries) )
      {
LABEL_50:
        v54 = sub_B2C460(Instance);
        sub_B2C400(v54, 0LL);
      }
      if ( !v30 )
        break;
      v38 = *(_DWORD *)&masterDataBytes->m_Items[4 * v37 + 4];
      v39 = *(&lookup->fields.count + v37);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v30,
             v38,
             (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v39 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v30,
                 v38,
                 (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v30,
          v38,
          (const MethodInfo_2E25E38 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v30,
        v38,
        v39,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v35) = masterDataBytes->max_length;
      if ( (__int64)++v37 >= (int)v35 )
        goto LABEL_26;
    }
LABEL_49:
    sub_B2C434(Instance, v24);
  }
  v33 = 0;
LABEL_29:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_49;
  if ( SLODWORD(Instance->fields.masterLoadThreads) < v33 )
    return 0;
  if ( !v30 )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v61,
    v30,
    (const MethodInfo_2E24AB4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v63.fields.dictionary = *(_OWORD *)&v61.fields.dictionary;
  v63.fields.current = v61.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v63,
            (const MethodInfo_256852C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v63.fields.current.fields.key;
    key_high = HIDWORD(v63.fields.current.fields.key);
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v43 )
      sub_B2C434(0LL, v44);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v43,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v55 )
      sub_B2C434(MasterData_WarQuestSelectionMaster, v46);
    v47 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v55->fields.userId.fields.fakeValue;
    v48 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v61.fields.dictionary = *(_OWORD *)&v55->fields.userId.fields.currentCryptoKey;
    v61.fields.current = v47;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v61.fields.dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v60.fields.fakeValue = v61.fields.current;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v60, 0LL);
    if ( !v48 )
      sub_B2C434(v49, v50);
    v51 = UserItemMaster__TryGetEntity(v48, &entity, v49, key, 0LL);
    if ( v51 )
    {
      if ( !entity )
        sub_B2C434(v51, v52);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v53 = 9;
    goto LABEL_47;
  }
  v53 = 7;
LABEL_47:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v63,
    (const MethodInfo_2568674 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v53 != 9;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v6; // w20
  System_Action_o *v7; // x21

  if ( (byte_4187759 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineMenuControl_OnCloseHelp__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187759 = 1;
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
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v6 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
         this,
         this->klass[1]._1.image);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v6, v7, 0LL);
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
      sub_B2C434(HaveRequestItemAndQp, v10);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *v10; // x8
  ServantLimitImageMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v17; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_25402508; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UICharaGraphTexture_o **v26; // x0
  struct UICharaGraphTexture_o **v27; // x19
  UnityEngine_Object_o *v28; // x20
  struct UICharaGraphTexture_o *v29; // t1
  UnityEngine_Object_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4187752 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187752 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v10 = this->fields.baseUserServantEntity;
      if ( v10 )
      {
        v11 = (ServantLimitImageMaster_o *)Instance;
        v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v31.fields.currentCryptoKey = v13;
        *(_QWORD *)&v31.fields.fakeValue = v12;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
        if ( v11 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v11,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v17 = ServantImageLimitSealAfter;
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
            UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
LABEL_19:
            TexturePrefab_25402508 = CharaGraphManager__CreateTexturePrefab_25402508(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v17,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_25402508;
            v26 = &this->fields.charaGraph;
LABEL_29:
            sub_B2C2F8(
              (BattleServantConfConponent_o *)v26,
              (System_Int32_array **)TexturePrefab_25402508,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            return;
          }
        }
      }
    }
LABEL_31:
    sub_B2C434(Instance, v9);
  }
  v29 = this->fields.charaGraph;
  v27 = &this->fields.charaGraph;
  v28 = (UnityEngine_Object_o *)v29;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v27;
    if ( *v27 )
    {
      v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v30, 0LL);
      v26 = v27;
      TexturePrefab_25402508 = 0LL;
      *v27 = 0LL;
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
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **baseUserServantEntity; // x1
  struct UserServantEntity_o *v15; // x8
  ServantLimitMaster_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w22
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4187753 & 1) == 0 )
  {
    sub_B2C35C(&CombineSvtData_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187753 = 1;
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
  v7 = sub_B2C42C(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_25;
  baseUserServantEntity = (System_Int32_array **)this->fields.baseUserServantEntity;
  *(_QWORD *)(v7 + 16) = baseUserServantEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), baseUserServantEntity, v8, v9, v10, v11, v12, v13);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v15 = this->fields.baseUserServantEntity;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitMaster_o *)combineInfoComp;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v27,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v19 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v16 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v16, v19, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v7 + 24) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v7 + 28) = (_DWORD)combineInfoComp;
  v20 = this->fields.baseUserServantEntity;
  if ( !v20 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v20->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v21 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v16, v21, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v7 + 32) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_25;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v7 + 24),
    0LL);
  *(_DWORD *)(v7 + 44) = afterAtk[1];
  v23 = this->fields.baseUserServantEntity;
  if ( !v23
    || (*(_DWORD *)(v7 + 48) = v23->fields.adjustHp,
        *(_DWORD *)(v7 + 52) = afterAtk[0],
        (v24 = this->fields.baseUserServantEntity) == 0LL)
    || (adjustAtk = v24->fields.adjustAtk,
        *(_DWORD *)(v7 + 36) = 1065353216,
        *(_DWORD *)(v7 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_25:
    sub_B2C434(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v7, 0LL);
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

  if ( (byte_4187750 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4187750 = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            combineBtn,
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtn;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_B2C434(combineBtn, method);
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

  if ( (byte_4187751 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, v4);
    sub_B2C35C(&StringLiteral_7284/*"INFO_MSG_SPECIAL_ASCENSION"*/, v5);
    sub_B2C35C(&StringLiteral_8835/*"MSG_LIMITUP_MAX"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4187751 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v17.fields.g = 0.87891;
  v17.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v17.fields.r = 0.0;
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(v17, v11, v12, v13, (const MethodInfo *)&v16);
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
      v15 = &StringLiteral_8835/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_7284/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
  if ( !this->fields.detailInfoLb )
LABEL_21:
    sub_B2C434(detailInfoLb, method);
  UILabel__set_text(this->fields.detailInfoLb, (System_String_o *)detailInfoLb, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SpecialAscensionControl_c *klass; // x8
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UILabel_o *qpLb; // x20
  SpecialAscensionControl_c *v10; // x0
  UIWidget_o *v11; // x20
  int v12; // s0
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v18; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418774F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&SpecialAscensionControl_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8840/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v4);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v5);
    byte_418774F = 1;
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
  v10 = SpecialAscensionControl_TypeInfo;
  if ( (BYTE3(SpecialAscensionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v10 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v10->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_20;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  v11 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
  if ( !v11 )
    goto LABEL_20;
  UIWidget__set_color(v11, *(UnityEngine_Color_o *)&v12, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_38381416(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9266/*"N0"*/,
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_20:
    sub_B2C434(baseSelectInfoLb, v7);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v18);
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

  if ( (byte_418774E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    byte_418774E = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              transform,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}