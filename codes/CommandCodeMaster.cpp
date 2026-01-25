void CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE468 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
    byte_4CEE468 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    256,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
}


System_Int32_array *CommandCodeMaster__GetCollectionList(CommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_T__o *v7; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  void *monitor; // x25
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *v11; // x24
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CEE469 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEE469 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_CommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v7 = list;
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                 v16,
                                                                 0);
      if ( (int)list >= 1 )
      {
        v11 = v7->fields.items;
        klass = v7[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v11;
        *(_QWORD *)&v17.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                   v17,
                                                                   0);
        if ( !v5 )
          break;
        v12 = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v12 )
          break;
        size = v5->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= LODWORD(v12->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          v12->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C7BD40(list, method);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}