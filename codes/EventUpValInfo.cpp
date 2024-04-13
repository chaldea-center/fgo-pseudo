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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventUpValInfo_Fields *p_fields; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E84FD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__,
      (_DWORD)setupInfo,
      svtId,
      *(_QWORD *)&limitCount);
    sub_B5D5C4(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13, v14, v15);
    byte_42E84FD = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dropList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_B5D560((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)setupInfo, v24, v25, v26, v27, v28, v29);
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
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  EventDropUpValInfo_o *current; // x23
  unsigned int FuncType; // w0
  __int64 v40; // x1
  int32_t equipSvtId; // w21
  EventDropItemUpValInfo_o *v42; // x24
  __int64 v43; // x0
  __int64 v44; // x1
  ItemEntity_array *IndividualityList; // x0
  __int64 v46; // x1
  ItemEntity_array *v47; // x24
  __int64 v48; // x8
  unsigned __int64 v49; // x27
  ItemEntity_o *v50; // x26
  EventDropItemUpValInfo_o *v51; // x25
  __int64 v52; // x0
  __int64 v53; // x1
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v57; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E84FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, member, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v11, v12, v13);
    sub_B5D5C4(&EventDropItemUpValInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E84FF = 1;
  }
  memset(&v61, 0, sizeof(v61));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_29;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v54 )
      break;
    current = (EventDropUpValInfo_o *)v61.fields.current;
    if ( !v61.fields.current )
      sub_B5D69C(v54, v55);
    FuncType = EventDropUpValInfo__GetFuncType((EventDropUpValInfo_o *)v61.fields.current, 0LL);
    if ( FuncType - 111 <= 0x15 && ((1 << (FuncType - 111)) & 0x240019) != 0
      || FuncType <= 0x10 && ((1 << FuncType) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v42 = (EventDropItemUpValInfo_o *)sub_B5D694(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v42, member, current, equipSvtId > 0, 0LL);
      if ( !v37 )
        sub_B5D69C(v43, v44);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    }
    else
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(0LL, v40);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_WarQuestSelectionMaster,
                            current->fields.individuality,
                            0LL);
      v47 = IndividualityList;
      if ( !IndividualityList )
        sub_B5D69C(0LL, v46);
      v48 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v48 >= 1 )
      {
        v49 = 0LL;
        do
        {
          if ( v49 >= (unsigned int)v48 )
          {
            v57 = sub_B5D6C8(IndividualityList);
            sub_B5D668(v57, 0LL);
          }
          v50 = v47->m_Items[v49];
          v51 = (EventDropItemUpValInfo_o *)sub_B5D694(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_29835280(v51, member, current, v50, 0LL);
          if ( !v37 )
            sub_B5D69C(v52, v53);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v37,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
          LODWORD(v48) = v47->max_length;
          ++v49;
        }
        while ( (__int64)v49 < (int)v48 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v37 )
LABEL_29:
    sub_B5D69C(Instance, v36);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v4 = this;
  if ( (byte_42E84FE & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 (_DWORD)method,
                                 v2,
                                 v3);
    byte_42E84FE = 1;
  }
  dropList = v4->fields.dropList;
  if ( !dropList )
    sub_B5D69C(this, method);
  return dropList->fields._size < 1;
}


bool __fastcall EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
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
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8500 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__,
      funcId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v15, v16, v17);
    byte_42E8500 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  dropList = this->fields.dropList;
  if ( !dropList )
    sub_B5D69C(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v19 )
      break;
    if ( !v23.fields.current )
      sub_B5D69C(v19, v20);
    monitor = v23.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(v19, v20);
    if ( monitor[4] == funcId )
    {
      v22 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.dropList;
      if ( !v22 )
        sub_B5D69C(0LL, v20);
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v22,
        (WarBoardManager_TaskList_o *)v23.fields.current,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}