void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40FB13F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_BoostFunctionUtility___ctor__, method);
    sub_B16FFC(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v3);
    byte_40FB13F = 1;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x20
  WebViewManager_o *v23; // x0
  BoostMaster_o *v24; // x0
  const MethodInfo *v25; // x1
  BoostEntity_array *AvailableEntities; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int max_length; // w8
  BoostEntity_array *v30; // x21
  unsigned int v31; // w25
  int v32; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x22
  WebViewManager_o *v34; // x0
  SkillLvMaster_o *v35; // x0
  SkillLvEntity_o *v36; // x0
  System_Int32_array *funcId; // x23
  WebViewManager_o *v38; // x0
  FunctionMaster_o *v39; // x0
  System_Collections_Generic_List_FunctionEntity__o *FunctionEntitiesByIds; // x0
  System_Int32_array *QuestTargetValues; // x1
  int v42; // w8
  _BYTE v44[32]; // [xsp+8h] [xbp-98h] BYREF
  int v45; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40FB13D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BoostMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FB13D = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&questPhase,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, questPhase, 0LL);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_35;
  v24 = (BoostMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v23,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !v24 )
    goto LABEL_35;
  AvailableEntities = BoostMaster__GetAvailableEntities(v24, v25);
  if ( !AvailableEntities )
    goto LABEL_35;
  max_length = AvailableEntities->max_length;
  v30 = AvailableEntities;
  if ( max_length >= 1 )
  {
    v31 = 0;
    v32 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
      {
        sub_B17100(AvailableEntities, v27, v28);
        sub_B170A0();
      }
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30->m_Items[v31];
      v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        break;
      v35 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v34,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v33 )
        break;
      if ( !v35 )
        break;
      v36 = SkillLvMaster__GetEntity(v35, v33->fields.missionConditionDetailId, 1, 0LL);
      if ( !v36 )
        break;
      funcId = v36->fields.funcId;
      v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v38 )
        break;
      v39 = (FunctionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v38,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !v39 )
        break;
      FunctionEntitiesByIds = FunctionMaster__GetFunctionEntitiesByIds(v39, funcId, 0LL);
      if ( !FunctionEntitiesByIds )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v44,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FunctionEntitiesByIds,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v46 = *(System_Collections_Generic_List_Enumerator_T__o *)v44;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v46,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v46.fields.current )
          sub_B170D4();
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v46.fields.current, 0LL);
        if ( !Entity )
          sub_B170D4();
        if ( QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL) )
        {
          if ( !v19 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__);
          break;
        }
      }
      *(_DWORD *)&v44[4 * v32 + 24] = 164;
      v32 = ++v45;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v46,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      if ( v32 )
      {
        v42 = v32 - 1;
        if ( *(_DWORD *)&v44[4 * v32 + 20] == 164 )
        {
          --v32;
          v45 = v42;
        }
      }
      max_length = v30->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_33;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_33:
  if ( !v19 )
    goto LABEL_35;
  return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BoostEntity_array *SupportRequestAllowed; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  BoostEntity_array *v11; // x19
  unsigned int v12; // w20
  BoostEntity_o *v13; // x23
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FB13E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&questId);
    this = (BoostFunctionUtility_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB13E = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
LABEL_14:
    sub_B170D4();
  max_length = SupportRequestAllowed->max_length;
  v11 = SupportRequestAllowed;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      sub_B17100(SupportRequestAllowed, v8, v9);
      sub_B170A0();
    }
    v13 = v11->m_Items[v12];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !v13 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_14;
    SupportRequestAllowed = (BoostEntity_array *)CommonReleaseMaster__IsOpen(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v13->fields.commonReleaseId,
                                                   0LL,
                                                   0,
                                                   0LL);
    if ( ((unsigned __int8)SupportRequestAllowed & 1) != 0 )
      return 1;
    max_length = v11->max_length;
    if ( (int)++v12 >= max_length )
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

  if ( !userItemEntityList )
LABEL_11:
    sub_B170D4();
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, commonConsumeEntity, userItemEntityList);
      sub_B170A0();
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F709D & 1) == 0 )
  {
    sub_B16FFC(&BoostFunctionUtility_BoostResultKind_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&int_TypeInfo, v9);
    byte_40F709D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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