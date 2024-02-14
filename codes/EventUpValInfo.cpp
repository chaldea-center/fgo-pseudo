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

  if ( (byte_4215129 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo);
    sub_B0D8A4(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13);
    byte_4215129 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventDropUpValInfo__TypeInfo,
                                                                                                  setupInfo,
                                                                                                  *(_QWORD *)&svtId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v14;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)setupInfo, v22, v23, v24, v25, v26, v27);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  EventDropUpValInfo_o *current; // x23
  unsigned int FuncType; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t equipSvtId; // w21
  EventDropItemUpValInfo_o *v23; // x24
  __int64 v24; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  ItemEntity_array *v28; // x24
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  ItemEntity_o *v31; // x26
  EventDropItemUpValInfo_o *v32; // x25
  __int64 v33; // x0
  _BOOL8 v34; // x0
  __int64 v36; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_421512B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_B0D8A4(&EventDropItemUpValInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421512B = 1;
  }
  memset(&v40, 0, sizeof(v40));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v34 )
      break;
    current = (EventDropUpValInfo_o *)v40.fields.current;
    if ( !v40.fields.current )
      sub_B0D97C(v34);
    FuncType = EventDropUpValInfo__GetFuncType((EventDropUpValInfo_o *)v40.fields.current, 0LL);
    if ( FuncType - 111 <= 0x15 && ((1 << (FuncType - 111)) & 0x240019) != 0
      || FuncType <= 0x10 && ((1 << FuncType) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v23 = (EventDropItemUpValInfo_o *)sub_B0D974(EventDropItemUpValInfo_TypeInfo, v20, v21);
      EventDropItemUpValInfo___ctor(v23, member, current, equipSvtId > 0, 0LL);
      if ( !v17 )
        sub_B0D97C(v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(0LL);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_WarQuestSelectionMaster,
                            current->fields.individuality,
                            0LL);
      v28 = IndividualityList;
      if ( !IndividualityList )
        sub_B0D97C(0LL);
      v29 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v29 >= 1 )
      {
        v30 = 0LL;
        do
        {
          if ( v30 >= (unsigned int)v29 )
          {
            v36 = sub_B0D9A8(IndividualityList);
            sub_B0D948(v36, 0LL);
          }
          v31 = v28->m_Items[v30];
          v32 = (EventDropItemUpValInfo_o *)sub_B0D974(EventDropItemUpValInfo_TypeInfo, v26, v27);
          EventDropItemUpValInfo___ctor_28902220(v32, member, current, v31, 0LL);
          if ( !v17 )
            sub_B0D97C(v33);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
          LODWORD(v29) = v28->max_length;
          ++v30;
        }
        while ( (__int64)v30 < (int)v29 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v17 )
LABEL_29:
    sub_B0D97C(Instance);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_421512A & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 method);
    byte_421512A = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_B0D97C(this);
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
  _BOOL8 v10; // x0
  _DWORD *monitor; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421512C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, *(_QWORD *)&funcId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v8);
    byte_421512C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  dropList = this->fields.dropList;
  if ( !dropList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields.current )
      sub_B0D97C(v10);
    monitor = v13.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(v10);
    if ( monitor[4] == funcId )
    {
      v12 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.dropList;
      if ( !v12 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v12,
        (WarBoardManager_TaskList_o *)v13.fields.current,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}