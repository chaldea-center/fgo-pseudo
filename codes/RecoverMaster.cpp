void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B74A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
    byte_4A5B74A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    118,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5B74B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_RecoverEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecoverEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecoverEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecoverEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RecoverEntity__TypeInfo);
    sub_1B885B0(&RecoverEntity_TypeInfo);
    sub_1B885B0(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__);
    sub_1B885B0(&RecoverMaster___c_TypeInfo);
    byte_4A5B74B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_31;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (methodPtr_low = LOBYTE(RecoverEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == RecoverEntity_TypeInfo )
        v6 = (Il2CppObject *)list;
      else
        v6 = 0LL;
      if ( v5 )
      {
LABEL_15:
        if ( !v6 )
          goto LABEL_31;
        if ( HIDWORD(v6[1].klass) == RecoverTarget )
        {
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_31;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v6,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
          }
        }
      }
    }
    else
    {
      v6 = 0LL;
      if ( v5 )
        goto LABEL_15;
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_31;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo);
    list = RecoverMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v16, v17, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v16, v19, v20);
  }
  if ( !v5 )
LABEL_31:
    sub_1B8880C(list, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v16,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v5;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B74C & 1) == 0 )
  {
    sub_1B885B0(&RecoverMaster___c_TypeInfo);
    byte_4A5B74C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)RecoverMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}