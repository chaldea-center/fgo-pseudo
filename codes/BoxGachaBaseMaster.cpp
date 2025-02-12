void __fastcall BoxGachaBaseMaster___ctor(BoxGachaBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB43C7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__, method);
    byte_4BB43C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    129,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_o *__fastcall BoxGachaBaseMaster__GetEntity(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB43C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BB43C5 = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&no);
  return (BoxGachaBaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_323D0DC *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaBaseMaster__TryGetEntity(
        BoxGachaBaseMaster_o *this,
        BoxGachaBaseEntity_o **entity,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB43C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__, entity);
    byte_4BB43C6 = 1;
  }
  PK = (Il2CppObject *)BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
}


bool __fastcall BoxGachaBaseMaster__checkIsResetTarget(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BoxGachaBaseEntity_array *GachaBaseList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  BoxGachaBaseEntity_o *v7; // x10

  GachaBaseList = BoxGachaBaseMaster__getGachaBaseList(this, id, method);
  if ( !GachaBaseList )
    goto LABEL_12;
  max_length = GachaBaseList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1C13F88(GachaBaseList, v4);
      v7 = GachaBaseList->m_Items[v6];
      if ( !v7 )
        break;
      if ( !v7->fields.isRare && max_length != ++v6 )
        continue;
      return v6 < max_length;
    }
LABEL_12:
    sub_1C13F80(GachaBaseList, v4);
  }
  v6 = 0;
  return v6 < max_length;
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_array *__fastcall BoxGachaBaseMaster__getGachaBaseList(
        BoxGachaBaseMaster_o *this,
        int32_t id,
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
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct BoxGachaBaseMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BB43C8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__, *(_QWORD *)&id);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_BoxGachaBaseEntity__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo, v11);
    sub_1C13D24(&Method_BoxGachaBaseMaster___c__getGachaBaseList_b__3_0__, v12);
    sub_1C13D24(&BoxGachaBaseMaster___c_TypeInfo, v13);
    byte_4BB43C8 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaBaseEntity__get_Item__);
      if ( list )
      {
        v15 = (int64_t)list;
        if ( id < 1 || *((_DWORD *)list + 4) == id )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v27 = Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 4), v15, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C13F80(list, v15);
  }
LABEL_16:
  list = BoxGachaBaseMaster___c_TypeInfo;
  if ( !BoxGachaBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaBaseMaster___c_TypeInfo);
    list = BoxGachaBaseMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaBaseMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_BoxGachaBaseEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_BoxGachaBaseMaster___c__getGachaBaseList_b__3_0__, 0LL);
    static_fields = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_BoxGachaBaseEntity__o *)v30;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v14 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_56814736(
    v14,
    v30,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
  return (BoxGachaBaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
}


void __fastcall BoxGachaBaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB43C9 & 1) == 0 )
  {
    sub_1C13D24(&BoxGachaBaseMaster___c_TypeInfo, v1);
    byte_4BB43C9 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BoxGachaBaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaBaseMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaBaseMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BoxGachaBaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BoxGachaBaseMaster___c___ctor(BoxGachaBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoxGachaBaseMaster___c___getGachaBaseList_b__3_0(
        BoxGachaBaseMaster___c_o *this,
        BoxGachaBaseEntity_o *a,
        BoxGachaBaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}