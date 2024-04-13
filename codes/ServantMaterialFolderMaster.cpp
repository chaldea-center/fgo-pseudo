void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC6F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC6F6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    265,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x19
  int32_t v42; // w23
  __int64 v43; // x10
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v46; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  v4 = id;
  if ( (byte_42EC6F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ServantMaterialFolderEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantMaterialFolderEntity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v33, v34, v35);
    sub_B5D5C4(&ServantMaterialFolderMaster___c_TypeInfo, v36, v37, v38);
    byte_42EC6F7 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v42,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v43 = *(&ServantMaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v43
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v43 - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v4 )
        {
          if ( !v41 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
        }
      }
      if ( ++v42 >= Count )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, *(_QWORD *)&id);
  }
LABEL_14:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaterialFolderMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaterialFolderMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v46,
      Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantMaterialFolderEntity___ctor__);
    v47 = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    v47->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v41 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D66 & 1) == 0 )
  {
    sub_B5D5C4(&ServantMaterialFolderMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D66 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantMaterialFolderMaster___c___ctor(
        ServantMaterialFolderMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantMaterialFolderMaster___c___GetEntityList_b__1_0(
        ServantMaterialFolderMaster___c_o *this,
        ServantMaterialFolderEntity_o *a,
        ServantMaterialFolderEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}