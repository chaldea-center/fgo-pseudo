void __fastcall MstMissionDisplayInfoMaster___ctor(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E2D2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__, method);
    byte_4A2E2D2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    160,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
}


bool __fastcall MstMissionDisplayInfoMaster__IsBefOpenTime(
        MstMissionDisplayInfoMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v9; // x21
  int32_t v10; // w22
  bool v11; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A2E2D4 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&MstMissionDisplayInfoEntity_TypeInfo, v4);
    sub_1B761C0(&NetworkManager_TypeInfo, v5);
    byte_4A2E2D4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v9 = Time;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo
        || v9 >= (__int64)Item[2].monitor )
      {
        v11 = ++v10 < Count;
        if ( Count != v10 )
          continue;
      }
      return v11;
    }
LABEL_17:
    sub_1B7641C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionDisplayInfoMaster__IsOpenNow(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  bool v9; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A2E2D3 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&MstMissionDisplayInfoEntity_TypeInfo, v4);
    byte_4A2E2D3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo
        || !MstMissionDisplayInfoEntity__isOpenNow((MstMissionDisplayInfoEntity_o *)Item, method) )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_1B7641C(list, method);
  }
  return 0;
}