void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  struct UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42129B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapFogData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_MapFogData__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v5);
    byte_42129B6 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_MapFogData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fogList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v18.fields.r = 1.0;
  v18.fields.g = 1.0;
  v18.fields.b = 1.0;
  v18.fields.a = 1.0;
  v17 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v18, v13, v14, v15, v16, (const MethodInfo *)&v17);
  this->fields.fogColor = v17;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void __fastcall MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Nullable_Color__o v12; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42129B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Nullable_Color__get_HasValue__, v6);
    byte_42129B5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  fogList = this->fields.fogList;
  if ( !fogList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fogList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v13.fields.current;
    if ( v13.fields.current && MapFogData__get_HasRenderer((MapFogData_o *)v13.fields.current, v8) )
    {
      MapFogData__get_Color(&v12, (MapFogData_o *)current, v10);
      if ( v12.fields.has_value )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v11);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42129B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapFogData__Add__, fogData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapFogData__Contains__, v5);
    byte_42129B3 = 1;
  }
  fogList = this->fields.fogList;
  if ( !fogList )
    goto LABEL_8;
  fogList = (struct System_Collections_Generic_List_MapFogData__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)fogList,
                                                                      (WarBoardManager_TaskList_o *)fogData,
                                                                      (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData || (MapFogData__ApplyColor(fogData, this->fields.fogColor, v7), (fogList = this->fields.fogList) == 0LL) )
LABEL_8:
    sub_B0D97C(fogList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)fogData,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapFogData__Add__);
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0

  if ( (byte_42129B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapFogData__Remove__, fogData);
    byte_42129B4 = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    fogList,
    (WarBoardManager_TaskList_o *)fogData,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}