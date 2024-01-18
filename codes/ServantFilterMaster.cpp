void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189F4B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_4189F4B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    202,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  if ( (byte_4189F4D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4189F4D = 1;
  }
  Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      id,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
  if ( !Entity )
    sub_B2C434(0LL, v9);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  return ServantFilterEntity__IsEnableServant(Entity, v12, v10);
}


bool __fastcall ServantFilterMaster__IsEnableServant_29288412(
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
  if ( (byte_4189F4E & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_B2C35C(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4189F4E = 1;
  }
  if ( !ids )
LABEL_13:
    sub_B2C434(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    this = (ServantFilterMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)v7,
                                      ids->m_Items[v9 + 1],
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  __int64 list; // x0
  int32_t v21; // w22
  int32_t v22; // w23
  const MethodInfo *v23; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x24
  __int64 v25; // x10
  int size; // w20
  ServantFilterMaster___c_c *v27; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x21
  Il2CppObject *v30; // x22
  struct ServantFilterMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array *v38; // x21
  __int64 v39; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x8
  __int64 v42; // x0

  if ( (byte_4189F4C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Comparison_ServantFilterEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_ServantFilterEntity__TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&ServantFilterEntity_TypeInfo, v14);
    sub_B2C35C(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v15);
    sub_B2C35C(&ServantFilterMaster___c_TypeInfo, v16);
    byte_4189F4C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_37;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        break;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v22,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v25 = *(&ServantFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v25
        || *(ServantFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v25 - 8) != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = ServantFilterEntity__IsEnable((ServantFilterEntity_o *)list, Time, v23);
      if ( (list & 1) != 0 )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          v24,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
      }
      if ( ++v22 >= v21 )
        goto LABEL_17;
    }
LABEL_37:
    sub_B2C434(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_37;
  size = v18->fields._size;
  if ( size >= 1 )
  {
    v27 = ServantFilterMaster___c_TypeInfo;
    if ( (BYTE3(ServantFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v27 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__1_0,
        v30,
        Method_ServantFilterMaster___c__getEnableIdList_b__1_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantFilterEntity___ctor__);
      v31 = ServantFilterMaster___c_TypeInfo->static_fields;
      v31->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->__9__1_0,
        (System_Int32_array **)_9__1_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
      (System_Comparison_T__o *)_9__1_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    list = sub_B2C374(int___TypeInfo, (unsigned int)size);
    v38 = (System_Int32_array *)list;
    v39 = 0LL;
    while ( 1 )
    {
      if ( v18->fields._size <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v40 = v18->fields._items->m_Items[v39];
      if ( !v40 || !list )
        break;
      if ( (unsigned int)v39 >= *(_DWORD *)(list + 24) )
      {
        v42 = sub_B2C460(list);
        sub_B2C400(v42, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v39++) = v40->fields.missionTargetId;
      if ( (int)v39 >= size )
        return v38;
    }
    goto LABEL_37;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853E8 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterMaster___c_TypeInfo, v1);
    byte_41853E8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}