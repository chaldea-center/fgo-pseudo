void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD2D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_40FD2D0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    116,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v26; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x1
  RecoverMaster___c_c *v28; // x0
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v31; // x21
  struct RecoverMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FD2D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&RecoverTarget);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_RecoverEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_RecoverEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v13);
    sub_B16FFC(&RecoverEntity_TypeInfo, v14);
    sub_B16FFC(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v15);
    sub_B16FFC(&RecoverMaster___c_TypeInfo, v16);
    byte_40FD2D1 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_RecoverEntity__TypeInfo,
                                                                                                  *(_QWORD *)&RecoverTarget,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v24 )
      goto LABEL_29;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v24,
             v19,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item
      && (v26 = *(&RecoverEntity_TypeInfo->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
    {
      if ( (RecoverEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == RecoverEntity_TypeInfo )
        v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      else
        v27 = 0LL;
      if ( v17 )
      {
LABEL_10:
        if ( !v27 )
          goto LABEL_29;
        if ( v27->fields.missionConditionDetailId == RecoverTarget )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            v27,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RecoverEntity__Add__);
      }
    }
    else
    {
      v27 = 0LL;
      if ( v17 )
        goto LABEL_10;
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_29;
  }
  v28 = RecoverMaster___c_TypeInfo;
  if ( (BYTE3(RecoverMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    v28 = RecoverMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = RecoverMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_RecoverEntity__TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v31,
      Method_RecoverMaster___c__getRecvEntityList_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_RecoverEntity___ctor__);
    v32 = RecoverMaster___c_TypeInfo->static_fields;
    v32->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v17 )
LABEL_29:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v17;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F741F & 1) == 0 )
  {
    sub_B16FFC(&RecoverMaster___c_TypeInfo, v1);
    byte_40F741F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RecoverMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecoverMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall RecoverMaster___c___ctor(RecoverMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecoverMaster___c___getRecvEntityList_b__1_0(
        RecoverMaster___c_o *this,
        RecoverEntity_o *a,
        RecoverEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}