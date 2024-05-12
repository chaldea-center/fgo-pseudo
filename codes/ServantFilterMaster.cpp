void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D4AF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
    byte_438D4AF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    203,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


bool __fastcall ServantFilterMaster__IsEnableServant(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  ServantFilterEntity_o *Entity; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_438D4B1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    byte_438D4B1 = 1;
  }
  Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      id,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
  if ( !Entity )
    sub_B7769C(0LL, v9);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  return ServantFilterEntity__IsEnableServant(Entity, v12, v10);
}


bool __fastcall ServantFilterMaster__IsEnableServant_29315236(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  ServantFilterMaster_o *v7; // x22
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  const MethodInfo *v10; // x3
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v7 = this;
  if ( (byte_438D4B2 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_B775C4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    byte_438D4B2 = 1;
  }
  if ( !ids )
LABEL_13:
    sub_B7769C(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
    }
    this = (ServantFilterMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)v7,
                                      ids->m_Items[v9 + 1],
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_13;
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    this = (ServantFilterMaster_o *)ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)this, v13, v10);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v8) = ids->max_length;
    if ( (__int64)++v9 >= (int)v8 )
      return 0;
  }
}


System_Int32_array *__fastcall ServantFilterMaster__getEnableIdList(
        ServantFilterMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  __int64 v5; // x1
  __int64 list; // x0
  int32_t v7; // w22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10
  int size; // w20
  ServantFilterMaster___c_c *v13; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x21
  Il2CppObject *v16; // x22
  struct ServantFilterMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array *v24; // x21
  __int64 v25; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x8
  __int64 v28; // x0

  if ( (byte_438D4B0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_ServantFilterEntity___ctor__);
    sub_B775C4(&System_Comparison_ServantFilterEntity__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ServantFilterEntity_TypeInfo);
    sub_B775C4(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__);
    sub_B775C4(&ServantFilterMaster___c_TypeInfo);
    byte_438D4B0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_37;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = list;
    v8 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        break;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v8,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v11 = *(&ServantFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
        || *(ServantFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = ServantFilterEntity__IsEnable((ServantFilterEntity_o *)list, Time, v9);
      if ( (list & 1) != 0 )
      {
        if ( !v4 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v4,
          v10,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
      }
      if ( ++v8 >= v7 )
        goto LABEL_17;
    }
LABEL_37:
    sub_B7769C(list, v5);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_37;
  size = v4->fields._size;
  if ( size >= 1 )
  {
    v13 = ServantFilterMaster___c_TypeInfo;
    if ( (BYTE3(ServantFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v13 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__1_0,
        v16,
        Method_ServantFilterMaster___c__getEnableIdList_b__1_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_ServantFilterEntity___ctor__);
      v17 = ServantFilterMaster___c_TypeInfo->static_fields;
      v17->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v17->__9__1_0,
        (System_Int32_array **)_9__1_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
      (System_Comparison_T__o *)_9__1_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    list = sub_B775DC(int___TypeInfo, (unsigned int)size);
    v24 = (System_Int32_array *)list;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v4->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v26 = v4->fields._items->m_Items[v25];
      if ( !v26 || !list )
        break;
      if ( (unsigned int)v25 >= *(_DWORD *)(list + 24) )
      {
        v28 = sub_B776C8(list);
        sub_B77668(v28, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v25++) = v26->fields.missionTargetId;
      if ( (int)v25 >= size )
        return v24;
    }
    goto LABEL_37;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438881A & 1) == 0 )
  {
    sub_B775C4(&ServantFilterMaster___c_TypeInfo);
    byte_438881A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ServantFilterMaster___c___ctor(ServantFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantFilterMaster___c___getEnableIdList_b__1_0(
        ServantFilterMaster___c_o *this,
        ServantFilterEntity_o *a,
        ServantFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7769C(this, a);
  return a->fields.priority - b->fields.priority;
}