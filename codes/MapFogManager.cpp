void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  struct UnityEngine_Color_o v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B3014 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapFogData___ctor__);
    sub_B52984(&System_Collections_Generic_List_MapFogData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_MapFogManager___ctor__);
    byte_42B3014 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapFogData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.fogList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  v14 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v15, v10, v11, v12, v13, (const MethodInfo *)&v14);
  this->fields.fogColor = v14;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void __fastcall MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Nullable_Color__o v8; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42B3013 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
    sub_B52984(&Method_System_Nullable_Color__get_HasValue__);
    byte_42B3013 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  fogList = this->fields.fogList;
  if ( !fogList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fogList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v9.fields.current;
    if ( v9.fields.current && MapFogData__get_HasRenderer((MapFogData_o *)v9.fields.current, v4) )
    {
      MapFogData__get_Color(&v8, (MapFogData_o *)current, v6);
      if ( v8.fields.has_value )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v7);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0

  if ( (byte_42B3011 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapFogData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapFogData__Contains__);
    byte_42B3011 = 1;
  }
  fogList = this->fields.fogList;
  if ( !fogList )
    goto LABEL_8;
  fogList = (struct System_Collections_Generic_List_MapFogData__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)fogList,
                                                                      (WarBoardManager_TaskList_o *)fogData,
                                                                      (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (fogList = this->fields.fogList) == 0LL) )
  {
LABEL_8:
    sub_B52A5C(fogList, fogData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)fogData,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapFogData__Add__);
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *fogList; // x0

  if ( (byte_42B3012 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MapFogData__Remove__);
    byte_42B3012 = 1;
  }
  fogList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.fogList;
  if ( !fogList )
    sub_B52A5C(0LL, fogData);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    fogList,
    (WarBoardManager_TaskList_o *)fogData,
    (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}