void __fastcall CommandCodeMaster___ctor(CommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF55 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
    byte_4A5AF55 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int___ctor__);
}


System_Int32_array *__fastcall CommandCodeMaster__GetCollectionList(
        CommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_T__o *v7; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x24
  void *monitor; // x25
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *v12; // x24
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5AF56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommandCodeEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5AF56 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v7 = list;
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
      *(_QWORD *)&v17.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v17.fields.fakeValue = items;
      list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v17,
                                                                 0LL);
      if ( (int)list >= 1 )
      {
        v12 = v7->fields.items;
        klass = v7[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v12;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v18,
                                                                   0LL);
        if ( !v5 )
          break;
        v13 = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v13 )
          break;
        size = v5->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v13->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          v13->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, method);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}