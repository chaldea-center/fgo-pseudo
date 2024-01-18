void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418587B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapFogData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_MapFogData__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v4);
    byte_418587B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapFogData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v5;
  sub_B2C2F8(&this->fields.fogList, v5);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  v10 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v11, v6, v7, v8, v9, (const MethodInfo *)&v10);
  this->fields.fogColor = v10;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
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

  if ( (byte_418587A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Nullable_Color__get_HasValue__, v6);
    byte_418587A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  fogList = this->fields.fogList;
  if ( !fogList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fogList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
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
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0

  if ( (byte_4185878 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapFogData__Add__, fogData);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapFogData__Contains__, v5);
    byte_4185878 = 1;
  }
  fogList = this->fields.fogList;
  if ( !fogList )
    goto LABEL_8;
  fogList = (struct System_Collections_Generic_List_MapFogData__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)fogList,
                                                                      (WarBoardManager_TaskList_o *)fogData,
                                                                      (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (fogList = this->fields.fogList) == 0LL) )
  {
LABEL_8:
    sub_B2C434(fogList, fogData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)fogData,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapFogData__Add__);
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0

  if ( (byte_4185879 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapFogData__Remove__, fogData);
    byte_4185879 = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    sub_B2C434(0LL, fogData);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    fogList,
    (WarBoardManager_TaskList_o *)fogData,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}