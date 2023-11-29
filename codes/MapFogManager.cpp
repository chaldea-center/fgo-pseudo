void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  float v15; // s4
  float v16; // s5
  float v17; // s6
  float v18; // s7
  struct UnityEngine_Color_o v19; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB5C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapFogData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_MapFogData__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v7);
    byte_40FB5C0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_MapFogData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fogList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  v19 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v20, v15, v16, v17, v18, (const MethodInfo *)&v19);
  this->fields.fogColor = v19;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
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

  if ( (byte_40FB5BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Nullable_Color__get_HasValue__, v6);
    byte_40FB5BF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  fogList = this->fields.fogList;
  if ( !fogList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fogList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_MapFogData__o *v8; // x0

  if ( (byte_40FB5BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapFogData__Add__, fogData);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapFogData__Contains__, v5);
    byte_40FB5BD = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    goto LABEL_8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         fogList,
         (WarBoardManager_TaskList_o *)fogData,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_MapFogData__Contains__) )
  {
    return;
  }
  if ( !fogData || (MapFogData__ApplyColor(fogData, this->fields.fogColor, v7), (v8 = this->fields.fogList) == 0LL) )
LABEL_8:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)fogData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapFogData__Add__);
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0

  if ( (byte_40FB5BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MapFogData__Remove__, fogData);
    byte_40FB5BE = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    fogList,
    (WarBoardManager_TaskList_o *)fogData,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}