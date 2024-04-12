void __fastcall PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADC02 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
    byte_42ADC02 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    157,
    (const MethodInfo_23E223C *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
}


bool __fastcall PartialMaintenanceMaster__isChaliceMaintenaceEnd(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int64_t v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w23
  __int64 v10; // x10

  if ( (byte_42ADC03 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&PartialMaintenanceEntity_TypeInfo);
    byte_42ADC03 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v5 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v8,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Time )
        break;
      v10 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) < (unsigned int)v10
        || *(PartialMaintenanceEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v10 - 8) != PartialMaintenanceEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Time + 16) == 2 )
        v9 = v5 >= *(_QWORD *)(Time + 40);
      if ( ++v8 >= v7 )
        return v9;
    }
LABEL_19:
    sub_B52A5C(Time, v4);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x10

  if ( (byte_42ADC04 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&PartialMaintenanceEntity_TypeInfo);
    byte_42ADC04 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B52A5C(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = *(&PartialMaintenanceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (PartialMaintenanceEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == PartialMaintenanceEntity_TypeInfo
        && PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v10) )
      {
        return 1;
      }
    }
    if ( ++v8 >= v7 )
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