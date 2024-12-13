void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B377B0 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_4B377B0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    118,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
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
  int64_t v15; // x1
  void *list; // x0
  int32_t v17; // w22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B377B1 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&RecoverTarget);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_RecoverEntity__TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v10);
    sub_1BD3458(&RecoverEntity_TypeInfo, v11);
    sub_1BD3458(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v12);
    sub_1BD3458(&RecoverMaster___c_TypeInfo, v13);
    byte_4B377B1 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_31;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (methodPtr_low = LOBYTE(RecoverEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == RecoverEntity_TypeInfo )
        v15 = (int64_t)list;
      else
        v15 = 0LL;
      if ( v14 )
      {
LABEL_15:
        if ( !v15 )
          goto LABEL_31;
        if ( *(_DWORD *)(v15 + 20) == RecoverTarget )
        {
          items = v14->fields._items;
          v26 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_31;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v15,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v15;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 4), v15, v18, v19, v20, v21, v22, v23);
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
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v29;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v14 )
LABEL_31:
    sub_1BD36B4(list, v15);
  System_Collections_Generic_List_object___Sort_56371284(
    v14,
    v29,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v14;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B377B2 & 1) == 0 )
  {
    sub_1BD3458(&RecoverMaster___c_TypeInfo, v1);
    byte_4B377B2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)RecoverMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, a);
  return b->fields.priority - a->fields.priority;
}