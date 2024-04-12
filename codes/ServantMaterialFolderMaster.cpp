void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3C06 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
    byte_42B3C06 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    265,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w20
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  int32_t v8; // w23
  __int64 v9; // x10
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  v3 = id;
  if ( (byte_42B3C07 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantMaterialFolderEntity___ctor__);
    sub_B52984(&System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
    sub_B52984(&ServantMaterialFolderEntity_TypeInfo);
    sub_B52984(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__);
    sub_B52984(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_42B3C07 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v9 = *(&ServantMaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v9
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_24:
    sub_B52A5C(list, *(_QWORD *)&id);
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v12,
      Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantMaterialFolderEntity___ctor__);
    v13 = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD34E & 1) == 0 )
  {
    sub_B52984(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_42AD34E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}