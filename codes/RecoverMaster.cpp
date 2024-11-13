void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method, v2);
    byte_4B167FB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    118,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_RecoverEntity__o *__fastcall RecoverMaster__getRecvEntityList(
        RecoverMaster_o *this,
        int32_t RecoverTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  int64_t v25; // x1
  void *list; // x0
  int32_t v27; // w22
  __int64 v28; // x2
  __int64 v29; // x3
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Comparison_T__o *v41; // x20
  Il2CppObject *v42; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B167FC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&RecoverTarget,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_RecoverEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&RecoverEntity_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v20, v21);
    sub_1BCA7E0(&RecoverMaster___c_TypeInfo, v22, v23);
    byte_4B167FC = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RecoverEntity__TypeInfo,
                                                       *(_QWORD *)&RecoverTarget,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  v27 = 0;
  while ( v27 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_31;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v27,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list
      && (methodPtr_low = LOBYTE(RecoverEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(RecoverEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == RecoverEntity_TypeInfo )
        v25 = (int64_t)list;
      else
        v25 = 0LL;
      if ( v24 )
      {
LABEL_15:
        if ( !v25 )
          goto LABEL_31;
        if ( *(_DWORD *)(v25 + 20) == RecoverTarget )
        {
          items = v24->fields._items;
          v38 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_31;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v25,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v25;
            sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v25, v30, v31, v32, v33, v34, v35);
          }
        }
      }
    }
    else
    {
      v25 = 0LL;
      if ( v24 )
        goto LABEL_15;
    }
    list = this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_31;
  }
  list = RecoverMaster___c_TypeInfo;
  if ( !RecoverMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecoverMaster___c_TypeInfo, v25);
    list = RecoverMaster___c_TypeInfo;
  }
  v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v41 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v25);
      list = RecoverMaster___c_TypeInfo;
    }
    v42 = (Il2CppObject *)**((_QWORD **)list + 23);
    v41 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_RecoverEntity__TypeInfo, v25, v28, v29);
    System_Comparison_object____ctor(v41, v42, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v41;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v41, v44, v45, v46, v47, v48, v49);
  }
  if ( !v24 )
LABEL_31:
    sub_1BCAA3C(list, v25);
  System_Collections_Generic_List_object___Sort_56244000(
    v24,
    v41,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v24;
}


void __fastcall RecoverMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B167FD & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverMaster___c_TypeInfo, v1, v2);
    byte_4B167FD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecoverMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecoverMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}