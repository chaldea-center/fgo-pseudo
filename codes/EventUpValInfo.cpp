// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo___ctor(
        EventUpValInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t npcFlag,
        const MethodInfo *method)
{
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x25
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventUpValInfo_Fields *p_fields; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F9C3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo);
    sub_B16FFC(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13);
    byte_40F9C3C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventDropUpValInfo__TypeInfo,
                                                                                                  setupInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&limitCount,
                                                                                                  *(_QWORD *)&dispLimitCount);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dropList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)setupInfo, v22, v23, v24, v25, v26, v27);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


void __fastcall EventUpValInfo__ClearEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.equipSvtId = 0;
}


// local variable allocation has failed, the output may be wrong!
EventDropItemUpValInfo_array *__fastcall EventUpValInfo__GetDropItemList(
        EventUpValInfo_o *this,
        int32_t member,
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
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  EventDropUpValInfo_o *current; // x23
  unsigned int FuncType; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t equipSvtId; // w21
  EventDropItemUpValInfo_o *v28; // x24
  ItemEntity_array *IndividualityList; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ItemEntity_array *v34; // x24
  __int64 v35; // x8
  unsigned __int64 v36; // x27
  ItemEntity_o *v37; // x26
  EventDropItemUpValInfo_o *v38; // x25
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F9C3E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_B16FFC(&EventDropItemUpValInfo_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9C3E = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  dropList = this->fields.dropList;
  if ( !dropList )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
  {
    current = (EventDropUpValInfo_o *)v43.fields.current;
    if ( !v43.fields.current )
      sub_B170D4();
    FuncType = EventDropUpValInfo__GetFuncType((EventDropUpValInfo_o *)v43.fields.current, 0LL);
    if ( FuncType - 111 <= 0x15 && ((1 << (FuncType - 111)) & 0x240019) != 0
      || FuncType <= 0x10 && ((1 << FuncType) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v28 = (EventDropItemUpValInfo_o *)sub_B170CC(EventDropItemUpValInfo_TypeInfo, v23, v24, v25, v26);
      EventDropItemUpValInfo___ctor(v28, member, current, equipSvtId > 0, 0LL);
      if ( !v19 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_WarQuestSelectionMaster,
                            current->fields.individuality,
                            0LL);
      v34 = IndividualityList;
      if ( !IndividualityList )
        sub_B170D4();
      v35 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v35 >= 1 )
      {
        v36 = 0LL;
        do
        {
          if ( v36 >= (unsigned int)v35 )
          {
            sub_B17100(IndividualityList, v30, v31);
            sub_B170A0();
          }
          v37 = v34->m_Items[v36];
          v38 = (EventDropItemUpValInfo_o *)sub_B170CC(EventDropItemUpValInfo_TypeInfo, v30, v31, v32, v33);
          EventDropItemUpValInfo___ctor_29425368(v38, member, current, v37, 0LL);
          if ( !v19 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
          LODWORD(v35) = v34->max_length;
          ++v36;
        }
        while ( (__int64)v36 < (int)v35 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v19 )
LABEL_29:
    sub_B170D4();
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  if ( (byte_40F9C3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, method);
    byte_40F9C3D = 1;
  }
  dropList = this->fields.dropList;
  if ( !dropList )
    sub_B170D4();
  return dropList->fields._size < 1;
}


bool __fastcall EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  _DWORD *monitor; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9C3F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, *(_QWORD *)&funcId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v8);
    byte_40F9C3F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  dropList = this->fields.dropList;
  if ( !dropList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B170D4();
    monitor = v12.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    if ( monitor[4] == funcId )
    {
      v11 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.dropList;
      if ( !v11 )
        sub_B170D4();
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v11,
        (WarBoardManager_TaskList_o *)v12.fields.current,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}