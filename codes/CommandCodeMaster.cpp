void __fastcall CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DF56 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
    byte_438DF56 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    249,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
}


System_Int32_array *__fastcall CommandCodeMaster__GetCollectionList(
        CommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x23
  __int64 v8; // x10
  void *monitor; // x24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x25
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438DF57 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CommandCodeEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438DF57 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v6,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v7 = list;
      v8 = *(&CommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (CommandCodeEntity_c *)list->klass->_2.typeHierarchy[v8 - 1] != CommandCodeEntity_TypeInfo )
      {
        break;
      }
      klass = list[1].klass;
      monitor = list[1].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v14.fields.currentCryptoKey = klass;
      *(_QWORD *)&v14.fields.fakeValue = monitor;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                                           v14,
                                                                                           0LL);
      if ( (int)list >= 1 )
      {
        items = v7->fields.items;
        syncRoot = v7->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v15.fields.currentCryptoKey = items;
        *(_QWORD *)&v15.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                                             v15,
                                                                                             0LL);
        if ( !v5 )
          break;
        System_Collections_Generic_List_int___Add(
          v5,
          (int32_t)list,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v6 >= Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_B7769C(list, method);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}