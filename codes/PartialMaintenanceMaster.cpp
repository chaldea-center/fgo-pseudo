void __fastcall PartialMaintenanceMaster___ctor(PartialMaintenanceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B569 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
    byte_4A5B569 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    158,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_PartialMaintenanceMaster__PartialMaintenanceEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B56C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&PartialMaintenanceEntity_TypeInfo);
    byte_4A5B56C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B8880C(list, *(_QWORD *)&mainteType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = Item;
      methodPtr_low = LOBYTE(PartialMaintenanceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (PartialMaintenanceEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == PartialMaintenanceEntity_TypeInfo
        && PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v10) )
      {
        return (System_String_o *)v11[1].monitor;
      }
    }
    if ( v7 == ++v8 )
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
  int64_t Time; // x0
  __int64 v4; // x1
  int64_t v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B56A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PartialMaintenanceEntity_TypeInfo);
    byte_4A5B56A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_18;
  v5 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v8,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Time )
        break;
      methodPtr_low = LOBYTE(PartialMaintenanceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) < (unsigned int)methodPtr_low
        || *(PartialMaintenanceEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) != PartialMaintenanceEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Time + 16) == 2 )
        v9 = v5 >= *(_QWORD *)(Time + 40);
      if ( v7 == ++v8 )
        return v9;
    }
LABEL_18:
    sub_1B8880C(Time, v4);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w25
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x2
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B56B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&PartialMaintenanceEntity_TypeInfo);
    byte_4A5B56B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(PartialMaintenanceEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (PartialMaintenanceEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != PartialMaintenanceEntity_TypeInfo
        || !PartialMaintenanceEntity__isMaintenanceNow((PartialMaintenanceEntity_o *)Item, mainteType, v11) )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&mainteType);
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