void __fastcall PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDB9C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__, method);
    byte_4BFDB9C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
}


System_String_o *__fastcall PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__GetMaintenanceMessage(this, 6, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PartialMaintenanceMaster__GetMaintenanceMessage(
        PartialMaintenanceMaster_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x23

  if ( (byte_4BFDB9F & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__,
      *(_QWORD *)&mainteType);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__, v5);
    byte_4BFDB9F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C2E388(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
    if ( Item )
    {
      v12 = Item;
      if ( PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v11) )
        return (System_String_o *)v12[1].monitor;
    }
    if ( v8 == ++v9 )
      return 0LL;
  }
}


bool __fastcall PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__isMaintenanceNow(this, 6, v2);
}


bool __fastcall PartialMaintenanceMaster__isChaliceMaintenaceEnd(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  __int64 v6; // x1
  int64_t v7; // x20
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w24

  if ( (byte_4BFDB9D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    byte_4BFDB9D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_16;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v10,
                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
      if ( !Time )
        break;
      if ( *(_DWORD *)(Time + 16) == 2 )
        v11 = v7 >= *(_QWORD *)(Time + 40);
      if ( v9 == ++v10 )
        return v11;
    }
LABEL_16:
    sub_1C2E388(Time, v6);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  bool v10; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4BFDB9E & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__,
      *(_QWORD *)&mainteType);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__, v5);
    byte_4BFDB9E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
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
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
      if ( !Item || !PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v12) )
      {
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_13:
    sub_1C2E388(list, *(_QWORD *)&mainteType);
  }
  return 0;
}


bool __fastcall PartialMaintenanceMaster__isStoneGachaMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__isMaintenanceNow(this, 1, v2);
}