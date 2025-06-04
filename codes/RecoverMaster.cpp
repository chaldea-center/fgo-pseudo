void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B027B4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_4B027B4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
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
  System_Collections_Generic_List_object__o *v13; // x19
  Il2CppClass *v14; // x1
  void *list; // x0
  int32_t v16; // w22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B027B5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__, *(_QWORD *)&RecoverTarget);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__, v5);
    sub_1BC3008(&System_Comparison_RecoverEntity__TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v10);
    sub_1BC3008(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v11);
    sub_1BC3008(&RecoverMaster___c_TypeInfo, v12);
    byte_4B027B5 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v16,
             (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    if ( v13 )
    {
      v14 = (Il2CppClass *)list;
      if ( !list )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == RecoverTarget )
      {
        items = v13->fields._items;
        v20 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v22[4] = v14;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
        }
      }
    }
    list = this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_24;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v23;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v23, v26, v27);
  }
  if ( !v13 )
LABEL_24:
    sub_1BC3264(list, v14);
  System_Collections_Generic_List_object___Sort_57288964(
    v13,
    v23,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v13;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B027B6 & 1) == 0 )
  {
    sub_1BC3008(&RecoverMaster___c_TypeInfo, v1);
    byte_4B027B6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)RecoverMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall RecoverMaster___c___ctor(RecoverMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecoverMaster___c___getRecvEntityList_b__1_0(
        RecoverMaster___c_o *this,
        RecoverEntity_o *a,
        RecoverEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BC3264(this, a);
  return b->fields.priority - a->fields.priority;
}