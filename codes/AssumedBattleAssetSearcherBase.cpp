void __fastcall AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41897EC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_41897EC = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetPathList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_41897E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, path);
    byte_41897E9 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_B2C434(0LL, path);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assetPathList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)path,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_41897EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_41897EA = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_B2C434(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)assetPathList,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool __fastcall AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v2; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8

  v2 = this;
  if ( (byte_41897EB & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_string__get_Count__,
                                                 method);
    byte_41897EB = 1;
  }
  assetPathList = v2->fields.assetPathList;
  if ( !assetPathList )
    sub_B2C434(this, method);
  return assetPathList->fields._size > 0;
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
  sub_B2C2F8(
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