void __fastcall PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185212 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__, method);
    byte_4185212 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    156,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
}


bool __fastcall PartialMaintenanceMaster__isChaliceMaintenaceEnd(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x20
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  bool v12; // w23
  __int64 v13; // x10

  if ( (byte_4185213 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&PartialMaintenanceEntity_TypeInfo, v5);
    byte_4185213 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Time )
        break;
      v13 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) < (unsigned int)v13
        || *(PartialMaintenanceEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v13 - 8) != PartialMaintenanceEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Time + 16) == 2 )
        v12 = v8 >= *(_QWORD *)(Time + 40);
      if ( ++v11 >= v10 )
        return v12;
    }
LABEL_19:
    sub_B2C434(Time, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x10

  if ( (byte_4185214 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mainteType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&PartialMaintenanceEntity_TypeInfo, v6);
    byte_4185214 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (PartialMaintenanceEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == PartialMaintenanceEntity_TypeInfo
        && PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v12) )
      {
        return 1;
      }
    }
    if ( ++v10 >= v9 )
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