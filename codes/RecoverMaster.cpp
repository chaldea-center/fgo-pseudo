void RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43791 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
    byte_4C43791 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


System_Collections_Generic_List_RecoverEntity__o *RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppClass *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Comparison_T__o *v15; // x20
  Il2CppObject *v16; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C43792 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    sub_1C37058(&System_Comparison_RecoverEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_RecoverEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_RecoverEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_RecoverEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_RecoverEntity__TypeInfo);
    sub_1C37058(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__);
    sub_1C37058(&RecoverMaster___c_TypeInfo);
    byte_4C43792 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v7,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    if ( v5 )
    {
      v10 = (Il2CppClass *)list;
      if ( !list )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == RecoverTarget )
      {
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_24;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)list + 23);
    v15 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v15, v16, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v15, v18, v19);
  }
  if ( !v5 )
LABEL_24:
    sub_1C372B4(list);
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v15,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v5;
}


void RecoverMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43793 & 1) == 0 )
  {
    sub_1C37058(&RecoverMaster___c_TypeInfo);
    byte_4C43793 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RecoverMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void RecoverMaster___c___ctor(RecoverMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RecoverMaster___c___getRecvEntityList_b__1_0(
        RecoverMaster___c_o *this,
        RecoverEntity_o *a,
        RecoverEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}