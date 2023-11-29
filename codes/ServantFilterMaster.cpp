void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC727 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_40FC727 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    202,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
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
  const MethodInfo *v9; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_40FC729 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_40FC729 = 1;
  }
  Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      id,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
  if ( !Entity )
    sub_B170D4();
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  return ServantFilterEntity__IsEnableServant(Entity, v11, v9);
}


bool __fastcall ServantFilterMaster__IsEnableServant_29569248(
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
  ServantFilterEntity_o *Entity; // x0
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v7 = this;
  if ( (byte_40FC72A & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_B16FFC(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_40FC72A = 1;
  }
  if ( !ids )
LABEL_13:
    sub_B170D4();
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      sub_B17100(this, *(_QWORD *)&svtId.fields.currentCryptoKey, *(_QWORD *)&svtId.fields.fakeValue);
      sub_B170A0();
    }
    Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)v7,
                                        ids->m_Items[v9 + 1],
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_13;
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    this = (ServantFilterMaster_o *)ServantFilterEntity__IsEnableServant(Entity, v13, v11);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w22
  int32_t v30; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v33; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x24
  __int64 v35; // x10
  int size; // w20
  ServantFilterMaster___c_c *v37; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x21
  Il2CppObject *v40; // x22
  struct ServantFilterMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Int32_array *v52; // x21
  __int64 v53; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x8

  if ( (byte_40FC728 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Comparison_ServantFilterEntity___ctor__, v4);
    sub_B16FFC(&System_Comparison_ServantFilterEntity__TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&ServantFilterEntity_TypeInfo, v14);
    sub_B16FFC(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v15);
    sub_B16FFC(&ServantFilterMaster___c_TypeInfo, v16);
    byte_40FC728 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantFilterEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v31,
               v30,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v35 = *(&ServantFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v35
        || (ServantFilterEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      if ( ServantFilterEntity__IsEnable((ServantFilterEntity_o *)Item, Time, v33) )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          v34,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
      }
      if ( ++v30 >= v29 )
        goto LABEL_17;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_37;
  size = v22->fields._size;
  if ( size >= 1 )
  {
    v37 = ServantFilterMaster___c_TypeInfo;
    if ( (BYTE3(ServantFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v37 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_ServantFilterEntity__TypeInfo,
                                                                            v25,
                                                                            v26,
                                                                            v27,
                                                                            v28);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__1_0,
        v40,
        Method_ServantFilterMaster___c__getEnableIdList_b__1_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantFilterEntity___ctor__);
      v41 = ServantFilterMaster___c_TypeInfo->static_fields;
      v41->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v41->__9__1_0,
        (System_Int32_array **)_9__1_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
      (System_Comparison_T__o *)_9__1_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    v49 = sub_B17014(int___TypeInfo, (unsigned int)size, v48);
    v52 = (System_Int32_array *)v49;
    v53 = 0LL;
    while ( 1 )
    {
      if ( v22->fields._size <= (unsigned int)v53 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v54 = v22->fields._items->m_Items[v53];
      if ( !v54 || !v49 )
        break;
      if ( (unsigned int)v53 >= *(_DWORD *)(v49 + 24) )
      {
        sub_B17100(v49, v50, v51);
        sub_B170A0();
      }
      *(_DWORD *)(v49 + 32 + 4 * v53++) = v54->fields.missionTargetId;
      if ( (int)v53 >= size )
        return v52;
    }
    goto LABEL_37;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F762C & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterMaster___c_TypeInfo, v1);
    byte_40F762C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantFilterMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}