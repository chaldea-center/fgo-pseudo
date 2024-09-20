void __fastcall MstMissionDisplayInfoMaster___ctor(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
    byte_4A5B4F2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    160,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
}


bool __fastcall MstMissionDisplayInfoMaster__IsBefOpenTime(
        MstMissionDisplayInfoMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v6; // x21
  int32_t v7; // w22
  bool v8; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B4F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MstMissionDisplayInfoEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B4F4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo
        || v6 >= (__int64)Item[2].monitor )
      {
        v8 = ++v7 < Count;
        if ( Count != v7 )
          continue;
      }
      return v8;
    }
LABEL_17:
    sub_1B8880C(list, method);
  }
  return 0;
}


bool __fastcall MstMissionDisplayInfoMaster__IsOpenNow(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B4F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MstMissionDisplayInfoEntity_TypeInfo);
    byte_4A5B4F3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo
        || !MstMissionDisplayInfoEntity__isOpenNow((MstMissionDisplayInfoEntity_o *)Item, method) )
      {
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return v7;
    }
LABEL_15:
    sub_1B8880C(list, method);
  }
  return 0;
}