void PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30FA6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
    byte_4D30FA6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
}


System_String_o *PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__GetMaintenanceMessage(this, 6, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *PartialMaintenanceMaster__GetMaintenanceMessage(
        PartialMaintenanceMaster_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x23

  if ( (byte_4D30FA8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
    byte_4D30FA8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C93D2C(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
    if ( Item )
    {
      v11 = Item;
      if ( PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v10) )
        return (System_String_o *)v11[1].monitor;
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


bool PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return PartialMaintenanceMaster__isMaintenanceNow(this, 6, v2);
}


// local variable allocation has failed, the output may be wrong!
bool PartialMaintenanceMaster__isMaintenanceNow(
        PartialMaintenanceMaster_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4D30FA7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
    byte_4D30FA7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Count__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_PartialMaintenanceEntity__get_Item__);
      if ( !Item || !PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v11) )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C93D2C(list, *(_QWORD *)&mainteType);
  }
  return 0;
}