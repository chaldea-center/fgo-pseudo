void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAE2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_49FEAE2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    118,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *v15; // x1
  void *list; // x0
  int32_t v17; // w22
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20
  Il2CppObject *v26; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FEAE3 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&RecoverTarget);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&System_Comparison_RecoverEntity__TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v10);
    sub_1B64870(&RecoverEntity_TypeInfo, v11);
    sub_1B64870(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v12);
    sub_1B64870(&RecoverMaster___c_TypeInfo, v13);
    byte_49FEAE3 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_31;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (methodPtr_low = LOBYTE(RecoverEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == RecoverEntity_TypeInfo )
        v15 = (Il2CppObject *)list;
      else
        v15 = 0LL;
      if ( v14 )
      {
LABEL_15:
        if ( !v15 )
          goto LABEL_31;
        if ( HIDWORD(v15[1].klass) == RecoverTarget )
        {
          items = v14->fields._items;
          v22 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_31;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v15,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v15;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v15, v18, v19);
          }
        }
      }
    }
    else
    {
      v15 = 0LL;
      if ( v14 )
        goto LABEL_15;
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_31;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)list + 23);
    v25 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v25;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v25, v28, v29);
  }
  if ( !v14 )
LABEL_31:
    sub_1B64ACC(list, v15);
  System_Collections_Generic_List_object___Sort_55252244(
    v14,
    v25,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v14;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEAE4 & 1) == 0 )
  {
    sub_1B64870(&RecoverMaster___c_TypeInfo, v1);
    byte_49FEAE4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)RecoverMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, a);
  return b->fields.priority - a->fields.priority;
}