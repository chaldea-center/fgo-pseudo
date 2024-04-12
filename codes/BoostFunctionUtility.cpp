void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_42AFF25 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    sub_B52984(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    byte_42AFF25 = 1;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2B7641C *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  void *Instance; // x0
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *Entity; // x20
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w25
  int v13; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x22
  System_Int32_array *v15; // x23
  __int64 v16; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v19; // x1
  int v20; // w8
  __int64 v22; // x0
  _BYTE v23[32]; // [xsp+8h] [xbp-98h] BYREF
  int v24; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AFF23 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFF23 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, v8);
  if ( !Instance )
    goto LABEL_35;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v22 = sub_B52A88(Instance);
        sub_B52A28(v22, 0LL);
      }
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v11 + (int)v12 + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v14 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v14->fields.missionConditionDetailId, 1, 0LL);
      if ( !Instance )
        break;
      v15 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v15, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v23,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v25 = *(System_Collections_Generic_List_Enumerator_T__o *)v23;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v25.fields.current )
          sub_B52A5C(0LL, v16);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v25.fields.current, 0LL);
        if ( !Entity )
          sub_B52A5C(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_B52A5C(IsMatchIndividuality, v19);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            v14,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          break;
        }
      }
      *(_DWORD *)&v23[4 * v13 + 24] = 164;
      v13 = ++v24;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      if ( v13 )
      {
        v20 = v13 - 1;
        if ( *(_DWORD *)&v23[4 * v13 + 20] == 164 )
        {
          --v13;
          v24 = v20;
        }
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_33;
    }
LABEL_35:
    sub_B52A5C(Instance, v8);
  }
LABEL_33:
  if ( !v6 )
    goto LABEL_35;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *SupportRequestAllowed; // x0
  __int64 v7; // x1
  int v8; // w8
  void *v9; // x19
  unsigned int v10; // w20
  __int64 v11; // x23
  __int64 v13; // x0

  if ( (byte_42AFF24 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFF24 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
LABEL_14:
    sub_B52A5C(SupportRequestAllowed, v7);
  v8 = *((_DWORD *)SupportRequestAllowed + 6);
  v9 = SupportRequestAllowed;
  if ( v8 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v8 )
    {
      v13 = sub_B52A88(SupportRequestAllowed);
      sub_B52A28(v13, 0LL);
    }
    v11 = *((_QWORD *)v9 + (int)v10 + 4);
    SupportRequestAllowed = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SupportRequestAllowed )
      goto LABEL_14;
    SupportRequestAllowed = DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SupportRequestAllowed,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !v11 || !SupportRequestAllowed )
      goto LABEL_14;
    SupportRequestAllowed = (void *)CommonReleaseMaster__IsOpen(
                                      (CommonReleaseMaster_o *)SupportRequestAllowed,
                                      *(_DWORD *)(v11 + 32),
                                      0LL,
                                      0,
                                      0LL);
    if ( ((unsigned __int8)SupportRequestAllowed & 1) != 0 )
      return 1;
    v8 = *((_DWORD *)v9 + 6);
    if ( (int)++v10 >= v8 )
      return 0;
  }
}


bool __fastcall BoostFunctionUtility__IsEnoughUserItem(
        BoostFunctionUtility_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w9
  UserItemEntity_o *v6; // x10
  __int64 v8; // x0

  if ( !userItemEntityList )
LABEL_11:
    sub_B52A5C(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    if ( !commonConsumeEntity )
      goto LABEL_11;
    v6 = userItemEntityList->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( commonConsumeEntity->fields.objectId == v6->fields.itemId )
      return commonConsumeEntity->fields.num <= v6->fields.num;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostFunctionUtility_CallbackFunc___ctor(
        BoostFunctionUtility_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = index;
  v12 = result;
  if ( (byte_42AD676 & 1) == 0 )
  {
    sub_B52984(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42AD676 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostFunctionUtility_CallbackFunc__Invoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BoostFunctionUtility_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostFunctionUtility_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  BoostFunctionUtility_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BoostFunctionUtility_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}