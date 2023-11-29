void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD6E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_40FD6E5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    264,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v30; // x10
  ServantMaterialFolderMaster___c_c *v31; // x0
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v34; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FD6E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_ServantMaterialFolderEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v12);
    sub_B16FFC(&ServantMaterialFolderEntity_TypeInfo, v13);
    sub_B16FFC(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v14);
    sub_B16FFC(&ServantMaterialFolderMaster___c_TypeInfo, v15);
    byte_40FD6E6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v28 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v28,
                                                                      v27,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v30 = *(&ServantMaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
          && (ServantMaterialFolderEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == ServantMaterialFolderEntity_TypeInfo
          && Item->fields.missionTargetId == id )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v31 = ServantMaterialFolderMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaterialFolderMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    v31 = ServantMaterialFolderMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantMaterialFolderEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v34,
      Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantMaterialFolderEntity___ctor__);
    v35 = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    v35->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v22 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7638 & 1) == 0 )
  {
    sub_B16FFC(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_40F7638 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantMaterialFolderMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}