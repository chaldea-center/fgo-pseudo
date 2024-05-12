void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_438AE6A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    sub_B775C4(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    byte_438AE6A = 1;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2D16BA8 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  void *Instance; // x0
  __int64 v8; // x1
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

  if ( (byte_438AE68 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438AE68 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0LL);
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
        v22 = sub_B776C8(Instance);
        sub_B77668(v22, 0LL);
      }
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v11 + (int)v12 + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v14 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v14->fields.missionConditionDetailId, 1, 0LL);
      if ( !Instance )
        break;
      v15 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v15, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v23,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v25 = *(System_Collections_Generic_List_Enumerator_T__o *)v23;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v25.fields.current )
          sub_B7769C(0LL, v16);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v25.fields.current, 0LL);
        if ( !Entity )
          sub_B7769C(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_B7769C(IsMatchIndividuality, v19);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            v14,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          break;
        }
      }
      *(_DWORD *)&v23[4 * v13 + 24] = 164;
      v13 = ++v24;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
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
    sub_B7769C(Instance, v8);
  }
LABEL_33:
  if ( !v6 )
    goto LABEL_35;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_438AE69 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438AE69 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
LABEL_14:
    sub_B7769C(SupportRequestAllowed, v7);
  v8 = *((_DWORD *)SupportRequestAllowed + 6);
  v9 = SupportRequestAllowed;
  if ( v8 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v8 )
    {
      v13 = sub_B776C8(SupportRequestAllowed);
      sub_B77668(v13, 0LL);
    }
    v11 = *((_QWORD *)v9 + (int)v10 + 4);
    SupportRequestAllowed = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SupportRequestAllowed )
      goto LABEL_14;
    SupportRequestAllowed = DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SupportRequestAllowed,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_B7769C(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
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
  sub_B77560(p_method);
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_4388537 & 1) == 0 )
  {
    sub_B775C4(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_4388537 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostFunctionUtility_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  BoostFunctionUtility_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}