void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438EF0C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
    byte_438EF0C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    117,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct RecoverMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438EF0D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_RecoverEntity___ctor__);
    sub_B775C4(&System_Comparison_RecoverEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_RecoverEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_RecoverEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_RecoverEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_RecoverEntity__TypeInfo);
    sub_B775C4(&RecoverEntity_TypeInfo);
    sub_B775C4(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__);
    sub_B775C4(&RecoverMaster___c_TypeInfo);
    byte_438EF0D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v8,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (v9 = *(&RecoverEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v9) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) == RecoverEntity_TypeInfo )
        v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      else
        v6 = 0LL;
      if ( v5 )
      {
LABEL_10:
        if ( !v6 )
          goto LABEL_29;
        if ( v6->fields.missionConditionDetailId == RecoverTarget )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v6,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_RecoverEntity__Add__);
      }
    }
    else
    {
      v6 = 0LL;
      if ( v5 )
        goto LABEL_10;
    }
    list = this->fields.list;
    ++v8;
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v12,
      Method_RecoverMaster___c__getRecvEntityList_b__1_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_RecoverEntity___ctor__);
    v13 = RecoverMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v5 )
LABEL_29:
    sub_B7769C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v5;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct RecoverMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388A14 & 1) == 0 )
  {
    sub_B775C4(&RecoverMaster___c_TypeInfo);
    byte_4388A14 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = RecoverMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}