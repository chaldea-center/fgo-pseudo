void __fastcall CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188102 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__, method);
    byte_4188102 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    248,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
}


System_Int32_array *__fastcall CommandCodeMaster__GetCollectionList(
        CommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x23
  __int64 v15; // x10
  void *monitor; // x24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x25
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4188103 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&CommandCodeEntity_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4188103 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      v15 = *(&CommandCodeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (CommandCodeEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != CommandCodeEntity_TypeInfo )
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
      *(_QWORD *)&v21.fields.currentCryptoKey = klass;
      *(_QWORD *)&v21.fields.fakeValue = monitor;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                           v21,
                                                                                           0LL);
      if ( (int)list >= 1 )
      {
        items = v14->fields.items;
        syncRoot = v14->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v22.fields.currentCryptoKey = items;
        *(_QWORD *)&v22.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                             v22,
                                                                                             0LL);
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          (int32_t)list,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v13 >= Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_B2C434(list, method);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}