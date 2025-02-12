void __fastcall RecoverMaster___ctor(RecoverMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4D0A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__, method);
    byte_4BB4D0A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_3236300 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int___ctor__);
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
  int64_t v14; // x1
  void *list; // x0
  int32_t v16; // w22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct RecoverMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB4D0B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__, *(_QWORD *)&RecoverTarget);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_RecoverEntity__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_RecoverEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_RecoverEntity__Sort__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_RecoverEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_RecoverEntity__TypeInfo, v10);
    sub_1C13D24(&Method_RecoverMaster___c__getRecvEntityList_b__1_0__, v11);
    sub_1C13D24(&RecoverMaster___c_TypeInfo, v12);
    byte_4BB4D0B = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RecoverEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RecoverEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v16,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_RecoverEntity__get_Item__);
    if ( v13 )
    {
      v14 = (int64_t)list;
      if ( !list )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == RecoverTarget )
      {
        items = v13->fields._items;
        v24 = Method_System_Collections_Generic_List_RecoverEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v14;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
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
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = RecoverMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)list + 23);
    v27 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_RecoverEntity__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_RecoverMaster___c__getRecvEntityList_b__1_0__, 0LL);
    static_fields = RecoverMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_RecoverEntity__o *)v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v27, v30, v31, v32, v33, v34, v35);
  }
  if ( !v13 )
LABEL_24:
    sub_1C13F80(list, v14);
  System_Collections_Generic_List_object___Sort_56814736(
    v13,
    v27,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_RecoverEntity__Sort__);
  return (System_Collections_Generic_List_RecoverEntity__o *)v13;
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

  if ( (byte_4BB4D0C & 1) == 0 )
  {
    sub_1C13D24(&RecoverMaster___c_TypeInfo, v1);
    byte_4BB4D0C = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(RecoverMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverMaster___c_TypeInfo->static_fields->__9 = (struct RecoverMaster___c_o *)v2;
  sub_1C13CC8(
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
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}