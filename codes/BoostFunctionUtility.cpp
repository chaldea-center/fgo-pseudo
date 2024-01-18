void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4187E10 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility___ctor__, method);
    sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v3);
    byte_4187E10 = 1;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *Instance; // x0
  const MethodInfo *v20; // x1
  QuestPhaseEntity_o *Entity; // x20
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w25
  int v25; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x22
  System_Int32_array *v27; // x23
  __int64 v28; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v31; // x1
  int v32; // w8
  __int64 v34; // x0
  _BYTE v35[32]; // [xsp+8h] [xbp-98h] BYREF
  int v36; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4187E0E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BoostMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4187E0E = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v36 = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, v20);
  if ( !Instance )
    goto LABEL_35;
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 >= 1 )
  {
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      if ( v24 >= v22 )
      {
        v34 = sub_B2C460(Instance);
        sub_B2C400(v34, 0LL);
      }
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v23 + (int)v24 + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v26 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v26->fields.missionConditionDetailId, 1, 0LL);
      if ( !Instance )
        break;
      v27 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v27, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v35,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v37 = *(System_Collections_Generic_List_Enumerator_T__o *)v35;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v37,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v37.fields.current )
          sub_B2C434(0LL, v28);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v37.fields.current, 0LL);
        if ( !Entity )
          sub_B2C434(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v18 )
            sub_B2C434(IsMatchIndividuality, v31);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v26,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          break;
        }
      }
      *(_DWORD *)&v35[4 * v25 + 24] = 164;
      v25 = ++v36;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v37,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      if ( v25 )
      {
        v32 = v25 - 1;
        if ( *(_DWORD *)&v35[4 * v25 + 20] == 164 )
        {
          --v25;
          v36 = v32;
        }
      }
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_33;
    }
LABEL_35:
    sub_B2C434(Instance, v20);
  }
LABEL_33:
  if ( !v18 )
    goto LABEL_35;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  void *SupportRequestAllowed; // x0
  __int64 v8; // x1
  int v9; // w8
  void *v10; // x19
  unsigned int v11; // w20
  __int64 v12; // x23
  __int64 v14; // x0

  if ( (byte_4187E0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&questId);
    this = (BoostFunctionUtility_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187E0F = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
LABEL_14:
    sub_B2C434(SupportRequestAllowed, v8);
  v9 = *((_DWORD *)SupportRequestAllowed + 6);
  v10 = SupportRequestAllowed;
  if ( v9 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v9 )
    {
      v14 = sub_B2C460(SupportRequestAllowed);
      sub_B2C400(v14, 0LL);
    }
    v12 = *((_QWORD *)v10 + (int)v11 + 4);
    SupportRequestAllowed = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SupportRequestAllowed )
      goto LABEL_14;
    SupportRequestAllowed = DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SupportRequestAllowed,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !v12 || !SupportRequestAllowed )
      goto LABEL_14;
    SupportRequestAllowed = (void *)CommonReleaseMaster__IsOpen(
                                      (CommonReleaseMaster_o *)SupportRequestAllowed,
                                      *(_DWORD *)(v12 + 32),
                                      0LL,
                                      0,
                                      0LL);
    if ( ((unsigned __int8)SupportRequestAllowed & 1) != 0 )
      return 1;
    v9 = *((_DWORD *)v10 + 6);
    if ( (int)++v11 >= v9 )
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
    sub_B2C434(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_4184EA5 & 1) == 0 )
  {
    sub_B2C35C(&BoostFunctionUtility_BoostResultKind_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&int_TypeInfo, v9);
    byte_4184EA5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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