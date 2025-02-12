void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC859A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method);
    byte_4BC859A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8598 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_4BC8598 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_324D130 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
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
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BC859B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__, *(_QWORD *)&spot_id);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__, v5);
    sub_1C1ABD4(&System_Comparison_SpotImageEntity__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v11);
    sub_1C1ABD4(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v12);
    sub_1C1ABD4(&SpotImageMaster___c_TypeInfo, v13);
    byte_4BC859B = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__);
    if ( list )
    {
      v15 = (int64_t)list;
      if ( *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v14 )
          goto LABEL_24;
        items = v14->fields._items;
        v25 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v15;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), v15, v18, v19, v20, v21, v22, v23);
        }
      }
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_24;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = SpotImageMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0LL);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v28;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !v14 )
LABEL_24:
    sub_1C1AE30(list, v15);
  System_Collections_Generic_List_object___Sort_56877908(
    v14,
    v28,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotImageMaster__TryGetEntity(
        SpotImageMaster_o *this,
        SpotImageEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8599 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__, entity);
    byte_4BC8599 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC859C & 1) == 0 )
  {
    sub_1C1ABD4(&SpotImageMaster___c_TypeInfo, v1);
    byte_4BC859C = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SpotImageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SpotImageMaster___c___ctor(SpotImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SpotImageMaster___c___GetImageList_b__3_0(
        SpotImageMaster___c_o *this,
        SpotImageEntity_o *a,
        SpotImageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}