void RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D05F & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
    byte_4D2D05F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_345919C *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


System_Collections_Generic_List_RecoverEntity__o *RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2D060 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    sub_1C94098(&System_Comparison_RecoverEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_RecoverEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecoverEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_RecoverEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_RecoverEntity__TypeInfo);
    sub_1C94098(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__);
    sub_1C94098(&RecoverMaster___c_TypeInfo);
    byte_4D2D060 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    if ( v5 )
    {
      v6 = (Il2CppClass *)list;
      if ( !list )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == RecoverTarget )
      {
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_24;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v5 )
LABEL_24:
    sub_1C942F0(list, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v19,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v5;
}


void RecoverMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D061 & 1) == 0 )
  {
    sub_1C94098(&RecoverMaster___c_TypeInfo);
    byte_4D2D061 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RecoverMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}