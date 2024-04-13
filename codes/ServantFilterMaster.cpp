void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAD63 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    203,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42EAD65 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
      svtId.fields.currentCryptoKey,
      svtId.fields.fakeValue,
      *(_QWORD *)&id);
    byte_42EAD65 = 1;
  }
  Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      id,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
  if ( !Entity )
    sub_B5D69C(0LL, v9);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  return ServantFilterEntity__IsEnableServant(Entity, v12, v10);
}


bool __fastcall ServantFilterMaster__IsEnableServant_29306520(
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
  if ( (byte_42EAD66 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_B5D5C4(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      svtId.fields.currentCryptoKey,
                                      svtId.fields.fakeValue,
                                      ids);
    byte_42EAD66 = 1;
  }
  if ( !ids )
LABEL_13:
    sub_B5D69C(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
    }
    this = (ServantFilterMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)v7,
                                      ids->m_Items[v9 + 1],
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  __int64 v49; // x1
  __int64 list; // x0
  int32_t v51; // w22
  int32_t v52; // w23
  const MethodInfo *v53; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x24
  __int64 v55; // x10
  int size; // w20
  ServantFilterMaster___c_c *v57; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x21
  Il2CppObject *v60; // x22
  struct ServantFilterMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array *v68; // x21
  __int64 v69; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x8
  __int64 v72; // x0

  if ( (byte_42EAD64 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_ServantFilterEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_ServantFilterEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&ServantFilterEntity_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v41, v42, v43);
    sub_B5D5C4(&ServantFilterMaster___c_TypeInfo, v44, v45, v46);
    byte_42EAD64 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_37;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v51 = list;
    v52 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        break;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v52,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v55 = *(&ServantFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v55
        || *(ServantFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v55 - 8) != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = ServantFilterEntity__IsEnable((ServantFilterEntity_o *)list, Time, v53);
      if ( (list & 1) != 0 )
      {
        if ( !v48 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v48,
          v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
      }
      if ( ++v52 >= v51 )
        goto LABEL_17;
    }
LABEL_37:
    sub_B5D69C(list, v49);
  }
LABEL_17:
  if ( !v48 )
    goto LABEL_37;
  size = v48->fields._size;
  if ( size >= 1 )
  {
    v57 = ServantFilterMaster___c_TypeInfo;
    if ( (BYTE3(ServantFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v57 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v57->static_fields;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v60 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__1_0,
        v60,
        Method_ServantFilterMaster___c__getEnableIdList_b__1_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantFilterEntity___ctor__);
      v61 = ServantFilterMaster___c_TypeInfo->static_fields;
      v61->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v61->__9__1_0,
        (System_Int32_array **)_9__1_0,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v48,
      (System_Comparison_T__o *)_9__1_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    list = sub_B5D5DC(int___TypeInfo, (unsigned int)size);
    v68 = (System_Int32_array *)list;
    v69 = 0LL;
    while ( 1 )
    {
      if ( v48->fields._size <= (unsigned int)v69 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v70 = v48->fields._items->m_Items[v69];
      if ( !v70 || !list )
        break;
      if ( (unsigned int)v69 >= *(_DWORD *)(list + 24) )
      {
        v72 = sub_B5D6C8(list);
        sub_B5D668(v72, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v69++) = v70->fields.missionTargetId;
      if ( (int)v69 >= size )
        return v68;
    }
    goto LABEL_37;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D5A & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D5A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantFilterMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}