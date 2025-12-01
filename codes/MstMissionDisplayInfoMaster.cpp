void MstMissionDisplayInfoMaster___ctor(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC790E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
    byte_4CC790E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    164,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
}


bool MstMissionDisplayInfoMaster__IsBefOpenTime(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  bool v8; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4CC7910 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC7910 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v6 = Time;
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
      if ( !Item || v6 >= (__int64)Item[2].monitor )
      {
        v8 = ++v7 < Count;
        if ( Count != v7 )
          continue;
      }
      return v8;
    }
LABEL_15:
    sub_1C71608(list, method);
  }
  return 0;
}


bool MstMissionDisplayInfoMaster__IsOpenNow(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4CC790F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
    byte_4CC790F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v6,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Item__);
      if ( !Item || !MstMissionDisplayInfoEntity__isOpenNow((MstMissionDisplayInfoEntity_o *)Item, method) )
      {
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return v7;
    }
LABEL_13:
    sub_1C71608(list, method);
  }
  return 0;
}