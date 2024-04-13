void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC50F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EC50F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    117,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x1
  void *list; // x0
  int32_t v39; // w22
  __int64 v40; // x10
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v43; // x21
  struct RecoverMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42EC510 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      RecoverTarget,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_RecoverEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_RecoverEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&RecoverEntity_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v30, v31, v32);
    sub_B5D5C4(&RecoverMaster___c_TypeInfo, v33, v34, v35);
    byte_42EC510 = 1;
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  v39 = 0;
  while ( v39 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v39,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (v40 = *(&RecoverEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v40) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v40 - 8) == RecoverEntity_TypeInfo )
        v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      else
        v37 = 0LL;
      if ( v36 )
      {
LABEL_10:
        if ( !v37 )
          goto LABEL_29;
        if ( v37->fields.missionConditionDetailId == RecoverTarget )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            v37,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RecoverEntity__Add__);
      }
    }
    else
    {
      v37 = 0LL;
      if ( v36 )
        goto LABEL_10;
    }
    list = this->fields.list;
    ++v39;
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
    v43 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v43,
      Method_RecoverMaster___c__getRecvEntityList_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_RecoverEntity___ctor__);
    v44 = RecoverMaster___c_TypeInfo->static_fields;
    v44->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v36 )
LABEL_29:
    sub_B5D69C(list, v37);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v36;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F46 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F46 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecoverMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}