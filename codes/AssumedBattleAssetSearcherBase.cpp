void __fastcall AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EBC7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v5, v6, v7);
    byte_42EBC7B = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetPathList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.audioPathList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_42EBC76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)path, (_DWORD)method, v3);
    byte_42EBC76 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_B5D69C(0LL, path);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assetPathList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_42EBC78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)path, (_DWORD)method, v3);
    byte_42EBC78 = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_B5D69C(0LL, path);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)audioPathList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_42EBC77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, (_DWORD)method, v2, v3);
    byte_42EBC77 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_B5D69C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)assetPathList,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_42EBC79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, (_DWORD)method, v2, v3);
    byte_42EBC79 = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_B5D69C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)audioPathList,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool __fastcall AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v4 = this;
  if ( (byte_42EBC7A & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_string__get_Count__,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42EBC7A = 1;
  }
  assetPathList = v4->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v4->fields.audioPathList) == 0LL )
    sub_B5D69C(this, method);
  return audioPathList->fields._size + assetPathList->fields._size > 0;
}


void __fastcall AssumedBattleAssetSearcherBase__SetManager(
        AssumedBattleAssetSearcherBase_o *this,
        AssumedBattleAssetLoadManager_o *manager,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.manager = manager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t __fastcall AssumedBattleAssetSearcherBase__get_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadStatus_k__BackingField;
}


void __fastcall AssumedBattleAssetSearcherBase__set_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LoadStatus_k__BackingField = value;
}