void __fastcall MstMissionDisplayInfoMaster___ctor(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0242A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__, method);
    byte_4B0242A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    164,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
}


bool __fastcall MstMissionDisplayInfoMaster__IsBefOpenTime(
        MstMissionDisplayInfoMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v8; // x21
  int32_t v9; // w22
  bool v10; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4B0242C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4B0242C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
      if ( !Item || v8 >= (__int64)Item[2].monitor )
      {
        v10 = ++v9 < Count;
        if ( Count != v9 )
          continue;
      }
      return v10;
    }
LABEL_15:
    sub_1BC3264(list, method);
  }
  return 0;
}


bool __fastcall MstMissionDisplayInfoMaster__IsOpenNow(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  bool v8; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4B0242B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__, v3);
    byte_4B0242B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
      if ( !Item || !MstMissionDisplayInfoEntity__isOpenNow((MstMissionDisplayInfoEntity_o *)Item, method) )
      {
        v8 = ++v7 < v6;
        if ( v6 != v7 )
          continue;
      }
      return v8;
    }
LABEL_13:
    sub_1BC3264(list, method);
  }
  return 0;
}