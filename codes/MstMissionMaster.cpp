void __fastcall MstMissionMaster___ctor(MstMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7492 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7492 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    155,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int___ctor__);
}


int32_t __fastcall MstMissionMaster__GetCurrentType(MstMissionMaster_o *this, const MethodInfo *method)
{
  return *(&this->fields.revision + 1);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissions(
        MstMissionMaster_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  int64_t Time; // x0
  int64_t v28; // x1
  int64_t v29; // x21
  int32_t v30; // w22
  int32_t v31; // w23
  __int64 v32; // x10

  if ( (byte_42E7494 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&MstMissionEntity_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    byte_42E7494 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v29 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v30 = Time;
    v31 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v31,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v28 = Time;
        v32 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v32
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v32 - 8) == MstMissionEntity_TypeInfo
          && v29 >= *(_QWORD *)(Time + 24)
          && v29 < *(_QWORD *)(Time + 40) )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(Time, v28);
  }
LABEL_18:
  if ( !v26 )
    goto LABEL_20;
  return (MstMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


MstMissionEntity_array *__fastcall MstMissionMaster__GetEnableMissionsWithTime(
        MstMissionMaster_o *this,
        int64_t *ratestStart,
        int64_t *fastestEnd,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  int64_t Time; // x0
  int64_t v33; // x1
  int64_t v34; // x23
  int v35; // w24
  BalanceConfig_c *v36; // x8
  int32_t v37; // w25
  __int64 v38; // x10
  int64_t v39; // x9
  int64_t v40; // x8

  if ( (byte_42E7495 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)ratestStart, (_DWORD)fastestEnd, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&MstMissionEntity_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    byte_42E7495 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v34 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *ratestStart = 0LL;
  v35 = Time;
  v36 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  *fastestEnd = v36->static_fields->NoneExpireTime;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v37,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v33 = Time;
        v38 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v38
          && *(MstMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v38 - 8) == MstMissionEntity_TypeInfo )
        {
          v39 = *(_QWORD *)(Time + 24);
          if ( v34 >= v39 && v34 < *(_QWORD *)(Time + 40) )
          {
            v40 = *(_QWORD *)(Time + 32);
            if ( v40 - v39 <= *(int *)(Time + 16) )
            {
              if ( v39 > *ratestStart )
              {
                *ratestStart = v39;
                v40 = *(_QWORD *)(Time + 32);
              }
              if ( *fastestEnd > v40 && v34 < v40 )
                *fastestEnd = v40;
            }
            if ( !v31 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      if ( ++v37 >= v35 )
        goto LABEL_27;
    }
LABEL_29:
    sub_B5D69C(Time, v33);
  }
LABEL_27:
  if ( !v31 )
    goto LABEL_29;
  return (MstMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MstMissionEntity__ToArray__);
}


bool __fastcall MstMissionMaster__IsBefOpenTime(MstMissionMaster_o *this, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  int64_t Time; // x0
  int64_t v17; // x21
  int32_t v18; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_42E7497 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&MstMissionEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42E7497 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v17 = Time;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v18,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == MstMissionEntity_TypeInfo
        && v17 < (__int64)Item[1].monitor )
      {
        return 1;
      }
    }
    if ( ++v18 >= Count )
      return 0;
  }
}


bool __fastcall MstMissionMaster__IsOpenNow(MstMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w20
  int32_t v14; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10

  if ( (byte_42E7496 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&MstMissionEntity_TypeInfo, v8, v9, v10);
    byte_42E7496 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == MstMissionEntity_TypeInfo
        && MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
      {
        return 1;
      }
    }
    if ( ++v14 >= v13 )
      return 0;
  }
}


bool __fastcall MstMissionMaster__preProcess(MstMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w20
  int32_t v14; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  bool result; // w0
  int32_t v18; // w8

  if ( (byte_42E7493 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&MstMissionEntity_TypeInfo, v8, v9, v10);
    byte_42E7493 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B5D69C(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
    v18 = 0;
    result = 0;
  }
  else
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_16;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v14,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = *(&MstMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (MstMissionEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == MstMissionEntity_TypeInfo
          && MstMissionEntity__isOpenNow((MstMissionEntity_o *)Item, method) )
        {
          break;
        }
      }
      if ( ++v14 >= v13 )
      {
        result = 0;
        v18 = 2;
        goto LABEL_14;
      }
    }
    v18 = 1;
    result = 1;
  }
LABEL_14:
  *(&this->fields.revision + 1) = v18;
  return result;
}