void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4217B69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_4217B69 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    116,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  void *list; // x0
  int32_t v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v24; // x21
  struct RecoverMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4217B6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&RecoverTarget);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_RecoverEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_RecoverEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v11);
    sub_B0D8A4(&RecoverEntity_TypeInfo, v12);
    sub_B0D8A4(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v13);
    sub_B0D8A4(&RecoverMaster___c_TypeInfo, v14);
    byte_4217B6A = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_RecoverEntity__TypeInfo,
                                                                                                  *(_QWORD *)&RecoverTarget,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v17,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (v20 = *(&RecoverEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v20) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) == RecoverEntity_TypeInfo )
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      else
        v21 = 0LL;
      if ( v15 )
      {
LABEL_10:
        if ( !v21 )
          goto LABEL_29;
        if ( v21->fields.missionConditionDetailId == RecoverTarget )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v21,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_RecoverEntity__Add__);
      }
    }
    else
    {
      v21 = 0LL;
      if ( v15 )
        goto LABEL_10;
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_29;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( (BYTE3(RecoverMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  static_fields = (struct RecoverMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = RecoverMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_RecoverEntity__TypeInfo,
                                                                          v18,
                                                                          v19);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v24,
      Method_RecoverMaster___c__getRecvEntityList_b__1_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_RecoverEntity___ctor__);
    v25 = RecoverMaster___c_TypeInfo->static_fields;
    v25->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v15 )
LABEL_29:
    sub_B0D97C(list);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v15;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct RecoverMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212522 & 1) == 0 )
  {
    sub_B0D8A4(&RecoverMaster___c_TypeInfo, v1);
    byte_4212522 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RecoverMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RecoverMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}