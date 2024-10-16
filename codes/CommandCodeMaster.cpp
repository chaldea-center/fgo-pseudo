void __fastcall CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B47 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__, method);
    byte_4AB5B47 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x24
  void *monitor; // x25
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *v19; // x24
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4AB5B48 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&CommandCodeEntity_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4AB5B48 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      methodPtr_low = LOBYTE(CommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CommandCodeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCodeEntity_TypeInfo )
      {
        break;
      }
      monitor = list[1].monitor;
      items = list[1].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v24.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                                 v24,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        v19 = v14->fields.items;
        klass = v14[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v19;
        *(_QWORD *)&v25.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                                   v25,
                                                                   0LL);
        if ( !v12 )
          break;
        v20 = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !v20 )
          break;
        size = v12->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v20->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            (int32_t)list,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          v20->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v13 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BAB678(list, method);
  }
LABEL_21:
  if ( !v12 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
}