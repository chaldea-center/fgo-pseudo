void __fastcall MstMissionDisplayInfoMaster___ctor(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7DA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__, method);
    byte_40F7DA8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    158,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int___ctor__);
}


bool __fastcall MstMissionDisplayInfoMaster__IsBefOpenTime(
        MstMissionDisplayInfoMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v9; // x21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_40F7DAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40F7DAA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v9 = Time;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == MstMissionDisplayInfoEntity_TypeInfo
        && v9 < (__int64)Item[2].monitor )
      {
        return 1;
      }
    }
    if ( ++v10 >= Count )
      return 0;
  }
}


bool __fastcall MstMissionDisplayInfoMaster__IsOpenNow(MstMissionDisplayInfoMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x10

  if ( (byte_40F7DA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v4);
    byte_40F7DA9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v9 )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v9,
             v8,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (MstMissionDisplayInfoEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == MstMissionDisplayInfoEntity_TypeInfo
        && MstMissionDisplayInfoEntity__isOpenNow((MstMissionDisplayInfoEntity_o *)Item, v11) )
      {
        return 1;
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}