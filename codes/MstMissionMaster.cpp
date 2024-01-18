void __fastcall MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185BD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__, method);
    byte_4185BD2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    154,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t __fastcall MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return *(&this->fields.revision + 1);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissions(
        MstMissionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  int64_t Time; // x0
  int64_t v12; // x1
  int64_t v13; // x21
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4185BD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v7);
    sub_B2C35C(&MstMissionEntity_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_4185BD4 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v13 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v14 = Time;
    v15 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v15,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v12 = Time;
        v16 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v16
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v16 - 8) == MstMissionEntity_TypeInfo
          && v13 >= *(_QWORD *)(Time + 24)
          && v13 < *(_QWORD *)(Time + 40) )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(Time, v12);
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (MstMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissionsWithTime(
        MstMissionMaster_o *this,
        int64_t *ratestStart,
        int64_t *fastestEnd,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x23
  int v19; // w24
  BalanceConfig_c *v20; // x8
  int32_t v21; // w25
  __int64 v22; // x10
  int64_t v23; // x9
  int64_t v24; // x8

  if ( (byte_4185BD5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, ratestStart);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v12);
    sub_B2C35C(&MstMissionEntity_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    byte_4185BD5 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v18 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *ratestStart = 0LL;
  v19 = Time;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  *fastestEnd = v20->static_fields->NoneExpireTime;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v21,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v17 = Time;
        v22 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v22
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v22 - 8) == MstMissionEntity_TypeInfo )
        {
          v23 = *(_QWORD *)(Time + 24);
          if ( v18 >= v23 && v18 < *(_QWORD *)(Time + 40) )
          {
            v24 = *(_QWORD *)(Time + 32);
            if ( v24 - v23 <= *(int *)(Time + 16) )
            {
              if ( v23 > *ratestStart )
              {
                *ratestStart = v23;
                v24 = *(_QWORD *)(Time + 32);
              }
              if ( *fastestEnd > v24 && v18 < v24 )
                *fastestEnd = v24;
            }
            if ( !v15 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      if ( ++v21 >= v19 )
        goto LABEL_27;
    }
LABEL_29:
    sub_B2C434(Time, v17);
  }
LABEL_27:
  if ( !v15 )
    goto LABEL_29;
  return (MstMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool __fastcall MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v9; // x21
  int32_t v10; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10

  if ( (byte_4185BD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&MstMissionEntity_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4185BD7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == MstMissionEntity_TypeInfo
        && v9 < (__int64)Item[1].monitor )
      {
        return 1;
      }
    }
    if ( ++v10 >= Count )
      return 0;
  }
}


bool __fastcall MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10

  if ( (byte_4185BD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&MstMissionEntity_TypeInfo, v4);
    byte_4185BD6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == MstMissionEntity_TypeInfo
        && MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        return 1;
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}


bool __fastcall MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10
  bool result; // w0
  int32_t v12; // w8

  if ( (byte_4185BD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&MstMissionEntity_TypeInfo, v4);
    byte_4185BD3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B2C434(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v12 = 0;
    result = 0;
  }
  else
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_16;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v8,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == MstMissionEntity_TypeInfo
          && MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
        {
          break;
        }
      }
      if ( ++v8 >= v7 )
      {
        result = 0;
        v12 = 2;
        goto LABEL_14;
      }
    }
    v12 = 1;
    result = 1;
  }
LABEL_14:
  *(&this->fields.revision + 1) = v12;
  return result;
}