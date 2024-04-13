void __fastcall SpecialAscensionControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9219 & 1) == 0 )
  {
    sub_B5D5C4(&SpecialAscensionControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_3255/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/, v8, v9, v10);
    byte_42E9219 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SpecialAscensionControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_3255/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3255/*"COMBINE_LIMIT_SPECIAL_PRIVILEGE_ID"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(v5, v4);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42E9215 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9215 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return this->fields.effectCnt + CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall SpecialAscensionControl__GetEffectRequestItemList(
        SpecialAscensionControl_o *this,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  WarEntity_o *Entity; // x20
  CombineLimitEntity_o *v34; // x20
  System_Collections_Generic_List_int__o *v35; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E9217 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineLimitMaster___, limitCnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E9217 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_15;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v32 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v32;
  *(_QWORD *)&v37.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v30
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v30,
                   (int32_t)Instance,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineLimitMaster___),
        !Entity)
    || !Instance
    || (v34 = CombineLimitMaster__GetEntity(
                (CombineLimitMaster_o *)Instance,
                HIDWORD(Entity->fields.coordinates),
                limitCnt,
                0LL),
        v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v35,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
        !v34)
    || !v35 )
  {
LABEL_15:
    sub_B5D69C(Instance, v28);
  }
  System_Collections_Generic_List_int___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)v34->fields.itemIds,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v35;
}


void __fastcall SpecialAscensionControl__GetHpAndAtk(
        SpecialAscensionControl_o *this,
        int32_t *afterHp,
        int32_t *afterAtk,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  void *Instance; // x0
  __int64 v16; // x1
  ServantLimitMaster_o *v17; // x23
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w24
  const MethodInfo *v21; // x1
  CheckCombineResStatus_o *combineResStatus; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E9216 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitMaster___,
      (_DWORD)afterHp,
      (_DWORD)afterAtk,
      userServantEntity);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E9216 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !userServantEntity )
    goto LABEL_12;
  v17 = (ServantLimitMaster_o *)Instance;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v19;
  *(_QWORD *)&v23.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  Instance = (void *)SpecialAscensionControl__GetEffectLimitCount(this, v21);
  if ( !v17
    || (Instance = ServantLimitMaster__GetEntity(v17, v20, (int)Instance - 1, 0LL)) == 0LL
    || (combineResStatus = this->fields.combineResStatus) == 0LL )
  {
LABEL_12:
    sub_B5D69C(Instance, v16);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x25
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v44; // x1
  __int64 v45; // x8
  int64_t v46; // x22
  unsigned __int64 v47; // x26
  UserServantEntity_Fields *p_fields; // x27
  __int64 v49; // x23
  __int128 v50; // q0
  __int128 v51; // q0
  int64_t v52; // x0
  __int128 v53; // q0
  int64_t v54; // x24
  UserServantEntity_Fields *v55; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x27
  __int64 v57; // x24
  __int64 v58; // x25
  int32_t v59; // w24
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *current; // x19
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v64; // x1
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v67; // w10
  void *monitor; // x20
  Il2CppClass *klass; // x21
  bool v70; // w19
  int v71; // w8
  int v72; // w9
  __int64 v74; // x0
  __int64 v75; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+40h] [xbp-D0h] BYREF
  _DWORD v79[15]; // [xsp+60h] [xbp-B0h] BYREF
  int v80; // [xsp+9Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_42E9213 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)userSvtEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E9213 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v45 = *(_QWORD *)(Instance + 24);
  v46 = Instance;
  if ( (int)v45 >= 1 )
  {
    v47 = 0LL;
    p_fields = &userSvtEntity->fields;
    do
    {
      if ( v47 >= (unsigned int)v45 )
      {
        v74 = sub_B5D6C8(Instance);
        sub_B5D668(v74, 0LL);
      }
      v49 = *(_QWORD *)(v46 + 32 + 8 * v47);
      if ( v49 )
      {
        v50 = *(_OWORD *)(v49 + 64);
        *(_OWORD *)v79 = *(_OWORD *)(v49 + 48);
        *(_OWORD *)&v79[4] = v50;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v78 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v79;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v78, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v49, 0LL);
          if ( (Instance & 1) == 0 )
          {
            if ( !userSvtEntity )
              goto LABEL_64;
            v51 = *(_OWORD *)&p_fields->id.fields.fakeValue;
            *(_OWORD *)v79 = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v79[4] = v51;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v77 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v79;
            v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v77, 0LL);
            v53 = *(_OWORD *)(v49 + 32);
            v54 = v52;
            *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
            *(_OWORD *)&v76.fields.fakeValue = v53;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v76, 0LL);
            if ( v54 != Instance )
            {
              v55 = p_fields;
              v56 = v41;
              v58 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v57 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v82.fields.currentCryptoKey = v58;
              *(_QWORD *)&v82.fields.fakeValue = v57;
              v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v49 + 80),
                           0LL);
              v41 = v56;
              p_fields = v55;
              if ( v59 == (_DWORD)Instance )
              {
                if ( !v41 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v41,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v45) = *(_DWORD *)(v46 + 24);
      ++v47;
    }
    while ( (__int64)v47 < (int)v45 );
  }
  if ( !v41 )
LABEL_64:
    sub_B5D69C(Instance, v44);
  if ( v41->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v79,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v81 = *(System_Collections_Generic_List_Enumerator_T__o *)v79;
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v60 )
      break;
    current = v81.fields.current;
    if ( !v81.fields.current )
      sub_B5D69C(v60, v61);
    if ( SHIDWORD(v81.fields.current[16].klass) >= 2
      || SLODWORD(v81.fields.current[17].monitor) > 1
      || SHIDWORD(v81.fields.current[17].monitor) > 1
      || SLODWORD(v81.fields.current[18].klass) > 1 )
    {
      goto LABEL_53;
    }
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)v81.fields.current, 0LL);
    if ( !AppendSkillInfo )
      sub_B5D69C(0LL, v64);
    svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      sub_B5D69C(AppendSkillInfo, v64);
    max_length = svtSkillLvList->max_length;
    if ( max_length >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= max_length )
        {
          v75 = sub_B5D6C8(AppendSkillInfo);
          sub_B5D668(v75, 0LL);
        }
        if ( svtSkillLvList->m_Items[v67 + 1] >= 2 )
          break;
        if ( (int)++v67 >= max_length )
          goto LABEL_46;
      }
LABEL_53:
      v70 = 1;
      v71 = 357;
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
    *(_QWORD *)&v83.fields.currentCryptoKey = klass;
    *(_QWORD *)&v83.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83, 0LL) >= 1
      || SLODWORD(current[17].klass) > 0
      || SHIDWORD(current[17].klass) > 0
      || SHIDWORD(current[16].klass) > 0 )
    {
      goto LABEL_53;
    }
  }
  v70 = 0;
  v71 = 355;
LABEL_54:
  v79[v80++ + 8] = v71;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  if ( !v80 )
    return 0;
  v72 = v79[v80 + 7];
  if ( v72 == 355 )
  {
    v70 = 0;
    goto LABEL_59;
  }
  if ( v72 == 357 )
  {
LABEL_59:
    --v80;
    return v70;
  }
  return 0;
}


bool __fastcall SpecialAscensionControl__HaveRequestItemAndQp(
        SpecialAscensionControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x20
  __int64 v64; // x21
  __int64 v65; // x23
  WarEntity_o *v66; // x19
  System_Collections_Generic_Dictionary_int__int__o *v67; // x20
  struct UserServantEntity_o *v68; // x8
  int32_t v69; // w22
  int v70; // w21
  struct System_Byte_array *masterDataBytes; // x21
  __int64 v72; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x25
  unsigned __int64 v74; // x19
  int32_t v75; // w23
  int32_t v76; // w24
  int32_t key; // w20
  int32_t key_high; // w25
  WebViewManager_o *v80; // x0
  __int64 v81; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v83; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v84; // q0
  UserItemMaster_o *v85; // x21
  int64_t v86; // x0
  __int64 v87; // x1
  _BOOL8 v88; // x0
  __int64 v89; // x1
  int v90; // w19
  __int64 v91; // x0
  UserServantEntity_o *v92; // [xsp+0h] [xbp-E0h]
  WarEntity_o *v93; // [xsp+8h] [xbp-D8h]
  int datalist; // [xsp+14h] [xbp-CCh]
  int32_t v95; // [xsp+18h] [xbp-C8h]
  int v96; // [xsp+1Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+40h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v100; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_42E9214 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineLimitMaster___, (_DWORD)userSvtEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v48, v49, v50);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    byte_42E9214 = 1;
  }
  memset(&v100, 0, 32);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_49;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v65 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v101.fields.currentCryptoKey = v65;
  *(_QWORD *)&v101.fields.fakeValue = v64;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v101, 0LL);
  if ( !v63 )
    goto LABEL_49;
  v66 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v63,
          (int32_t)Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v67 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v67,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v68 = this->fields.baseUserServantEntity;
  if ( !v68 )
    goto LABEL_49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v68->fields.limitCount,
                                0LL);
  if ( !v66 )
    goto LABEL_49;
  v69 = (int)Instance;
  v92 = userSvtEntity;
  if ( (int)Instance < SLODWORD(v66->fields.targetId) )
  {
    v70 = 0;
    v93 = v66;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
      if ( !Instance )
        goto LABEL_49;
      v96 = v70;
      Instance = (DataManager_o *)CombineLimitMaster__GetEntity(
                                    (CombineLimitMaster_o *)Instance,
                                    HIDWORD(v66->fields.coordinates),
                                    v69,
                                    0LL);
      if ( !Instance )
        goto LABEL_49;
      masterDataBytes = Instance->fields.masterDataBytes;
      v95 = v69;
      if ( !masterDataBytes )
        goto LABEL_49;
      v72 = *(_QWORD *)&masterDataBytes->max_length;
      datalist = (int)Instance->fields.datalist;
      if ( (int)v72 >= 1 )
        break;
LABEL_26:
      v66 = v93;
      ++v69;
      v70 = datalist + v96;
      if ( v95 + 1 >= SLODWORD(v93->fields.targetId) )
        goto LABEL_29;
    }
    lookup = Instance->fields.lookup;
    v74 = 0LL;
    while ( 1 )
    {
      if ( v74 >= (unsigned int)v72 )
        goto LABEL_50;
      if ( !lookup )
        break;
      if ( v74 >= LODWORD(lookup->fields.entries) )
      {
LABEL_50:
        v91 = sub_B5D6C8(Instance);
        sub_B5D668(v91, 0LL);
      }
      if ( !v67 )
        break;
      v75 = *(_DWORD *)&masterDataBytes->m_Items[4 * v74 + 4];
      v76 = *(&lookup->fields.count + v74);
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             v67,
             v75,
             (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v76 += System_Collections_Generic_Dictionary_int__int___get_Item(
                 v67,
                 v75,
                 (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        System_Collections_Generic_Dictionary_int__int___Remove(
          v67,
          v75,
          (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
      }
      System_Collections_Generic_Dictionary_int__int___Add(
        v67,
        v75,
        v76,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      LODWORD(v72) = masterDataBytes->max_length;
      if ( (__int64)++v74 >= (int)v72 )
        goto LABEL_26;
    }
LABEL_49:
    sub_B5D69C(Instance, v61);
  }
  v70 = 0;
LABEL_29:
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_49;
  if ( SLODWORD(Instance->fields.masterLoadThreads) < v70 )
    return 0;
  if ( !v67 )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v98,
    v67,
    (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v100.fields.dictionary = *(_OWORD *)&v98.fields.dictionary;
  v100.fields.current = v98.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v100,
            (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int32_t)v100.fields.current.fields.key;
    key_high = HIDWORD(v100.fields.current.fields.key);
    v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v80 )
      sub_B5D69C(0LL, v81);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v80,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !v92 )
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v83);
    v84 = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v92->fields.userId.fields.fakeValue;
    v85 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v98.fields.dictionary = *(_OWORD *)&v92->fields.userId.fields.currentCryptoKey;
    v98.fields.current = v84;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v98.fields.dictionary;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v97.fields.fakeValue = v98.fields.current;
    v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v97, 0LL);
    if ( !v85 )
      sub_B5D69C(v86, v87);
    v88 = UserItemMaster__TryGetEntity(v85, &entity, v86, key, 0LL);
    if ( v88 )
    {
      if ( !entity )
        sub_B5D69C(v88, v89);
      if ( entity->fields.itemId != key || entity->fields.num >= key_high )
        continue;
    }
    v90 = 9;
    goto LABEL_47;
  }
  v90 = 7;
LABEL_47:
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v100,
    (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  return v90 != 9;
}


void __fastcall SpecialAscensionControl__OnClickHelp(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *helpBtn; // x0
  int32_t v12; // w20
  System_Action_o *v13; // x21

  if ( (byte_42E9218 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineMenuControl_OnCloseHelp__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9218 = 1;
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
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  v12 = ((__int64 (__fastcall *)(SpecialAscensionControl_o *, void *))this->klass->vtable._6_GetTutorialOpenType.method)(
          this,
          this->klass[1]._1.image);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineMenuControl_OnCloseHelp__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v12, v13, 0LL);
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
      sub_B5D69C(HaveRequestItemAndQp, v10);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v10);
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
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t CardImageLimitCount; // w20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct UserServantEntity_o *v18; // x8
  ServantLimitImageMaster_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  int32_t v25; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UICharaGraphTexture_o **v34; // x0
  struct UICharaGraphTexture_o **v35; // x19
  UnityEngine_Object_o *v36; // x20
  struct UICharaGraphTexture_o *v37; // t1
  UnityEngine_Object_o *v38; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E9211 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E9211 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseUserServantEntity, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v18 = this->fields.baseUserServantEntity;
      if ( v18 )
      {
        v19 = (ServantLimitImageMaster_o *)Instance;
        v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v39.fields.currentCryptoKey = v21;
        *(_QWORD *)&v39.fields.fakeValue = v20;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
        if ( v19 )
        {
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v19,
                                         (int32_t)Instance,
                                         CardImageLimitCount,
                                         0LL);
          p_charaGraph = &this->fields.charaGraph;
          charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
          v25 = ServantImageLimitSealAfter;
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
            UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
LABEL_19:
            TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                                       this->fields.charaGraphBase,
                                       this->fields.baseUserServantEntity,
                                       v25,
                                       10,
                                       0LL,
                                       0,
                                       0LL);
            this->fields.charaGraph = TexturePrefab_26715804;
            v34 = &this->fields.charaGraph;
LABEL_29:
            sub_B5D560(
              (BattleServantConfConponent_o *)v34,
              (System_Int32_array **)TexturePrefab_26715804,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            return;
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(Instance, v17);
  }
  v37 = this->fields.charaGraph;
  v35 = &this->fields.charaGraph;
  v36 = (UnityEngine_Object_o *)v37;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*v35;
    if ( *v35 )
    {
      v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v38, 0LL);
      v34 = v35;
      TexturePrefab_26715804 = 0LL;
      *v35 = 0LL;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
}


void __fastcall SpecialAscensionControl__SetCombineInfo(SpecialAscensionControl_o *this, const MethodInfo *method)
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
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **baseUserServantEntity; // x1
  struct UserServantEntity_o *v23; // x8
  ServantLimitMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w22
  struct UserServantEntity_o *v28; // x8
  int32_t v29; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  int32_t adjustAtk; // w8
  int32_t afterAtk[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42E9212 & 1) == 0 )
  {
    sub_B5D5C4(&CombineSvtData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E9212 = 1;
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
  v15 = sub_B5D694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  baseUserServantEntity = (System_Int32_array **)this->fields.baseUserServantEntity;
  *(_QWORD *)(v15 + 16) = baseUserServantEntity;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), baseUserServantEntity, v16, v17, v18, v19, v20, v21);
  combineInfoComp = (CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)combineInfoComp,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = this->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_25;
  v24 = (ServantLimitMaster_o *)combineInfoComp;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v26;
  *(_QWORD *)&v35.fields.fakeValue = v25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v35,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v27 = (int)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  if ( !v24 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v24, v27, (int)combineInfoComp - 1, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v15 + 24) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.baseUserServantEntity;
  if ( !combineInfoComp )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__getLimitCntMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                0LL);
  *(_DWORD *)(v15 + 28) = (_DWORD)combineInfoComp;
  v28 = this->fields.baseUserServantEntity;
  if ( !v28 )
    goto LABEL_25;
  combineInfoComp = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v28->fields.svtId,
                                                0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_25;
  v29 = (int)combineInfoComp;
  LimitCntMax = UserServantEntity__getLimitCntMax(this->fields.baseUserServantEntity, 0LL);
  combineInfoComp = (CombineInfoComponent_o *)ServantLimitMaster__GetEntity(v24, v29, LimitCntMax, 0LL);
  if ( !combineInfoComp )
    goto LABEL_25;
  *(_DWORD *)(v15 + 32) = HIDWORD(combineInfoComp->fields.currentStatusInfo);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.combineResStatus;
  if ( !combineInfoComp )
    goto LABEL_25;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)combineInfoComp,
    &afterAtk[1],
    afterAtk,
    this->fields.baseUserServantEntity,
    *(_DWORD *)(v15 + 24),
    0LL);
  *(_DWORD *)(v15 + 44) = afterAtk[1];
  v31 = this->fields.baseUserServantEntity;
  if ( !v31
    || (*(_DWORD *)(v15 + 48) = v31->fields.adjustHp,
        *(_DWORD *)(v15 + 52) = afterAtk[0],
        (v32 = this->fields.baseUserServantEntity) == 0LL)
    || (adjustAtk = v32->fields.adjustAtk,
        *(_DWORD *)(v15 + 36) = 1065353216,
        *(_DWORD *)(v15 + 56) = adjustAtk,
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(combineInfoComp, method);
  }
  CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetExeBtnState(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtn; // x0
  UIWidget_o *v9; // x20
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19
  const MethodInfo *v11; // x1
  int v12; // s0
  int v16; // s0

  if ( (byte_42E920F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E920F = 1;
  }
  combineBtn = (UnityEngine_Component_o *)this->fields.combineBtn;
  if ( !combineBtn )
    goto LABEL_12;
  combineBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            combineBtn,
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v9 = (UIWidget_o *)combineBtn;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  if ( SpecialAscensionControl__CanExeSpecialAscension(this, v11) )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( v9 )
    {
      UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v12, 0LL);
      if ( Component_WebViewObject )
      {
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_WebViewObject, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(combineBtn, method);
  }
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_12;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
}


void __fastcall SpecialAscensionControl__SetStateInfoMsg(SpecialAscensionControl_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v22; // x20
  float v23; // s4
  float v24; // s5
  float v25; // s6
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 *v27; // x8
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9210 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_7366/*"INFO_MSG_SPECIAL_ASCENSION"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8926/*"MSG_LIMITUP_MAX"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E9210 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v29.fields.g = 0.87891;
  v29.fields.b = 0.98828;
  v22 = (UIWidget_o *)Component_WebViewObject;
  v29.fields.r = 0.0;
  *(_QWORD *)&v28.fields.r = 0LL;
  *(_QWORD *)&v28.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v29, v23, v24, v25, (const MethodInfo *)&v28);
  if ( !v22 )
    goto LABEL_21;
  UIWidget__set_color(v22, v28, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    if ( UserServantEntity__isLimitCountMax(baseUserServantEntity, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v22, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_8926/*"MSG_LIMITUP_MAX"*/;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_7366/*"INFO_MSG_SPECIAL_ASCENSION"*/;
  }
  detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
  if ( !this->fields.detailInfoLb )
LABEL_21:
    sub_B5D69C(detailInfoLb, method);
  UILabel__set_text(this->fields.detailInfoLb, (System_String_o *)detailInfoLb, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionControl__SetUp(SpecialAscensionControl_o *this, const MethodInfo *method)
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
  SpecialAscensionControl_c *klass; // x8
  __int64 v15; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UILabel_o *qpLb; // x20
  SpecialAscensionControl_c *v18; // x0
  UIWidget_o *v19; // x20
  int v20; // s0
  UILabel_o *haveQpLb; // x20
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v26; // x2
  int32_t SPEND_QP_VAL; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E920E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SpecialAscensionControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8931/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v11, v12, v13);
    byte_42E920E = 1;
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
  v18 = SpecialAscensionControl_TypeInfo;
  if ( (BYTE3(SpecialAscensionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpecialAscensionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpecialAscensionControl_TypeInfo);
    v18 = SpecialAscensionControl_TypeInfo;
  }
  SPEND_QP_VAL = v18->static_fields->SPEND_QP_VAL;
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&SPEND_QP_VAL, 0LL);
  if ( !qpLb )
    goto LABEL_20;
  UILabel__set_text(qpLb, (System_String_o *)baseSelectInfoLb, 0LL);
  v19 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
  if ( !v19 )
    goto LABEL_20;
  UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Int32__ToString_39741776(
                                                   (int)baseSelectInfoLb + 96,
                                                   (System_String_o *)StringLiteral_9361/*"N0"*/,
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
  baseSelectInfoLb = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8931/*"MSG_PRESELECT_BASE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !preSelectBaseLb )
LABEL_20:
    sub_B5D69C(baseSelectInfoLb, v15);
  UILabel__set_text(preSelectBaseLb, (System_String_o *)baseSelectInfoLb, 0LL);
  SpecialAscensionControl__Refresh(this, 0LL, v26);
}


void __fastcall SpecialAscensionControl__Start(SpecialAscensionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v6; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E920D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, (_DWORD)method, v2, v3);
    byte_42E920D = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v6);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              transform,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)Component_WebViewObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}