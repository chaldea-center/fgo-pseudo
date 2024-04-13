void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  struct UnityEngine_Color_o v22; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBADB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapFogData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_MapFogData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v8, v9, v10);
    byte_42EBADB = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapFogData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fogList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v23.fields.r = 1.0;
  v23.fields.g = 1.0;
  v23.fields.b = 1.0;
  v23.fields.a = 1.0;
  v22 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v23, v18, v19, v20, v21, (const MethodInfo *)&v22);
  this->fields.fogColor = v22;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void __fastcall MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  System_Nullable_Color__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42EBADA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_Color__get_HasValue__, v14, v15, v16);
    byte_42EBADA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  fogList = this->fields.fogList;
  if ( !fogList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fogList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v23.fields.current;
    if ( v23.fields.current && MapFogData__get_HasRenderer((MapFogData_o *)v23.fields.current, v18) )
    {
      MapFogData__get_Color(&v22, (MapFogData_o *)current, v20);
      if ( v22.fields.has_value )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0

  if ( (byte_42EBAD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapFogData__Add__, (_DWORD)fogData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapFogData__Contains__, v6, v7, v8);
    byte_42EBAD8 = 1;
  }
  fogList = this->fields.fogList;
  if ( !fogList )
    goto LABEL_8;
  fogList = (struct System_Collections_Generic_List_MapFogData__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)fogList,
                                                                      (WarBoardManager_TaskList_o *)fogData,
                                                                      (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (fogList = this->fields.fogList) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(fogList, fogData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)fogData,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapFogData__Add__);
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0

  if ( (byte_42EBAD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapFogData__Remove__, (_DWORD)fogData, (_DWORD)method, v3);
    byte_42EBAD9 = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    sub_B5D69C(0LL, fogData);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    fogList,
    (WarBoardManager_TaskList_o *)fogData,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}