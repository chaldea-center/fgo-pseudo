void __fastcall CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC51 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__, method);
    byte_49BAC51 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    256,
    (const MethodInfo_319B678 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v11; // x21
  int32_t v12; // w22
  System_Collections_ObjectModel_Collection_T__o *v13; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  void *monitor; // x25
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *v17; // x24
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49BAC52 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Item__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_49BAC52 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Count__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v13 = list;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v22.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                 v22,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        v17 = v13->fields.items;
        klass = v13[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v17;
        *(_QWORD *)&v23.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                   v23,
                                                                   0LL);
        if ( !v11 )
          break;
        v18 = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v18 )
          break;
        size = v11->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v18->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            (int32_t)list,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          v18->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v12 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B4D1EC(list, method);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}