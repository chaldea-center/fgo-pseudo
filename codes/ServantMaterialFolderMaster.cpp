void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B25C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_418B25C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    264,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  int32_t v19; // w23
  __int64 v20; // x10
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v23; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  v3 = id;
  if ( (byte_418B25D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ServantMaterialFolderEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v12);
    sub_B2C35C(&ServantMaterialFolderEntity_TypeInfo, v13);
    sub_B2C35C(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v14);
    sub_B2C35C(&ServantMaterialFolderMaster___c_TypeInfo, v15);
    byte_418B25D = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v20 = *(&ServantMaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v20
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v3 )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, *(_QWORD *)&id);
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
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v23,
      Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantMaterialFolderEntity___ctor__);
    v24 = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853F4 & 1) == 0 )
  {
    sub_B2C35C(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_41853F4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}