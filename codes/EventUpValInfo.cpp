void __fastcall EventUpValInfo___ctor(
        EventUpValInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t npcFlag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventUpValInfo_Fields *p_fields; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42AF8E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_42AF8E6 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dropList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_B52920((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)setupInfo, v21, v22, v23, v24, v25, v26);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


void __fastcall EventUpValInfo__ClearEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.equipSvtId = 0;
}


EventDropItemUpValInfo_array *__fastcall EventUpValInfo__GetDropItemList(
        EventUpValInfo_o *this,
        int32_t member,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  EventDropUpValInfo_o *current; // x23
  unsigned int FuncType; // w0
  __int64 v9; // x1
  int32_t equipSvtId; // w21
  EventDropItemUpValInfo_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  ItemEntity_array *IndividualityList; // x0
  __int64 v15; // x1
  ItemEntity_array *v16; // x24
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  ItemEntity_o *v19; // x26
  EventDropItemUpValInfo_o *v20; // x25
  __int64 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v26; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AF8E8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B52984(&EventDropItemUpValInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8E8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v23 )
      break;
    current = (EventDropUpValInfo_o *)v30.fields.current;
    if ( !v30.fields.current )
      sub_B52A5C(v23, v24);
    FuncType = EventDropUpValInfo__GetFuncType((EventDropUpValInfo_o *)v30.fields.current, 0LL);
    if ( FuncType - 111 <= 0x15 && ((1 << (FuncType - 111)) & 0x240019) != 0
      || FuncType <= 0x10 && ((1 << FuncType) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v11 = (EventDropItemUpValInfo_o *)sub_B52A54(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v11, member, current, equipSvtId > 0, 0LL);
      if ( !v6 )
        sub_B52A5C(v12, v13);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B52A5C(0LL, v9);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_WarQuestSelectionMaster,
                            current->fields.individuality,
                            0LL);
      v16 = IndividualityList;
      if ( !IndividualityList )
        sub_B52A5C(0LL, v15);
      v17 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = 0LL;
        do
        {
          if ( v18 >= (unsigned int)v17 )
          {
            v26 = sub_B52A88(IndividualityList);
            sub_B52A28(v26, 0LL);
          }
          v19 = v16->m_Items[v18];
          v20 = (EventDropItemUpValInfo_o *)sub_B52A54(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_29662632(v20, member, current, v19, 0LL);
          if ( !v6 )
            sub_B52A5C(v21, v22);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
          LODWORD(v17) = v16->max_length;
          ++v18;
        }
        while ( (__int64)v18 < (int)v17 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v6 )
LABEL_29:
    sub_B52A5C(Instance, v5);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_42AF8E7 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    byte_42AF8E7 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_B52A5C(this, method);
  return dropList->fields._size < 1;
}


bool __fastcall EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v9; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF8E9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_42AF8E9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  dropList = this->fields.dropList;
  if ( !dropList )
    sub_B52A5C(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v10.fields.current )
      sub_B52A5C(v6, v7);
    monitor = v10.fields.current[1].monitor;
    if ( !monitor )
      sub_B52A5C(v6, v7);
    if ( monitor[4] == funcId )
    {
      v9 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.dropList;
      if ( !v9 )
        sub_B52A5C(0LL, v7);
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v9,
        (WarBoardManager_TaskList_o *)v10.fields.current,
        (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}