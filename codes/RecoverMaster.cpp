void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AD2E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_418AD2E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    116,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
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
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x1
  void *list; // x0
  int32_t v18; // w22
  __int64 v19; // x10
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v22; // x21
  struct RecoverMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418AD2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&RecoverTarget);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_RecoverEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_RecoverEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v11);
    sub_B2C35C(&RecoverEntity_TypeInfo, v12);
    sub_B2C35C(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v13);
    sub_B2C35C(&RecoverMaster___c_TypeInfo, v14);
    byte_418AD2F = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (v19 = *(&RecoverEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v19) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) == RecoverEntity_TypeInfo )
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      else
        v16 = 0LL;
      if ( v15 )
      {
LABEL_10:
        if ( !v16 )
          goto LABEL_29;
        if ( v16->fields.missionConditionDetailId == RecoverTarget )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v16,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RecoverEntity__Add__);
      }
    }
    else
    {
      v16 = 0LL;
      if ( v15 )
        goto LABEL_10;
    }
    list = this->fields.list;
    ++v18;
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
    v22 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v22,
      Method_RecoverMaster___c__getRecvEntityList_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_RecoverEntity___ctor__);
    v23 = RecoverMaster___c_TypeInfo->static_fields;
    v23->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v23->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v15 )
LABEL_29:
    sub_B2C434(list, v16);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v15;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct RecoverMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185651 & 1) == 0 )
  {
    sub_B2C35C(&RecoverMaster___c_TypeInfo, v1);
    byte_4185651 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = RecoverMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}