void RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938ED0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
    byte_5938ED0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct RecoverMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v21; // x21
  struct RecoverMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5938ED1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    sub_21FFC50(&System_Comparison_RecoverEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RecoverEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_RecoverEntity__TypeInfo);
    sub_21FFC50(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__);
    sub_21FFC50(&RecoverMaster___c_TypeInfo);
    byte_5938ED1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    if ( v5 )
    {
      v6 = (Il2CppClass *)list;
      if ( !list )
        goto LABEL_15;
      if ( *((_DWORD *)list + 5) == RecoverTarget )
      {
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !*(&RecoverMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo, v6);
    list = RecoverMaster___c_TypeInfo;
  }
  static_fields = (struct RecoverMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = RecoverMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v21, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0);
    v22 = RecoverMaster___c_TypeInfo->static_fields;
    v22->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__1_0, (int32_t)_9__1_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__1_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v5;
}


void RecoverMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938ED2 & 1) == 0 )
  {
    sub_21FFC50(&RecoverMaster___c_TypeInfo);
    byte_5938ED2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RecoverMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}