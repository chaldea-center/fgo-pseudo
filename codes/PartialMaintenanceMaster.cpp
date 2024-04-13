void __fastcall PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6399 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6399 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    157,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
}


bool __fastcall PartialMaintenanceMaster__isChaliceMaintenaceEnd(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Time; // x0
  __int64 v15; // x1
  int64_t v16; // x20
  int32_t Count; // w0
  int32_t v18; // w21
  int32_t v19; // w22
  bool v20; // w23
  __int64 v21; // x10

  if ( (byte_42E639A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&PartialMaintenanceEntity_TypeInfo, v11, v12, v13);
    byte_42E639A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v16 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v19,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Time )
        break;
      v21 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) < (unsigned int)v21
        || *(PartialMaintenanceEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v21 - 8) != PartialMaintenanceEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Time + 16) == 2 )
        v20 = v16 >= *(_QWORD *)(Time + 40);
      if ( ++v19 >= v18 )
        return v20;
    }
LABEL_19:
    sub_B5D69C(Time, v15);
  }
  return 1;
}


bool __fastcall PartialMaintenanceMaster__isChaliceMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__isMaintenanceNow(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartialMaintenanceMaster__isMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x10

  if ( (byte_42E639B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      mainteType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&PartialMaintenanceEntity_TypeInfo, v9, v10, v11);
    byte_42E639B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v15,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (PartialMaintenanceEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == PartialMaintenanceEntity_TypeInfo
        && PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v17) )
      {
        return 1;
      }
    }
    if ( ++v15 >= v14 )
      return 0;
  }
}


bool __fastcall PartialMaintenanceMaster__isStoneGachaMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__isMaintenanceNow(this, 1, v2);
}