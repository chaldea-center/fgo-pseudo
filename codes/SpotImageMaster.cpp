void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method, v2);
    byte_4B16CA1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16C9F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__,
      *(_QWORD *)&spotId,
      *(_QWORD *)&priority);
    byte_4B16C9F = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t v29; // w22
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B16CA2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&spot_id,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_SpotImageEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&SpotImageEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v22, v23);
    sub_1BCA7E0(&SpotImageMaster___c_TypeInfo, v24, v25);
    byte_4B16CA2 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SpotImageEntity__TypeInfo,
                                                       *(_QWORD *)&spot_id,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v29 = 0;
  while ( v29 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v29,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v27 = (int64_t)list;
      methodPtr_low = LOBYTE(SpotImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v26 )
          goto LABEL_26;
        items = v26->fields._items;
        v40 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v32, v33, v34, v35, v36, v37);
        }
      }
    }
    list = this->fields.list;
    ++v29;
    if ( !list )
      goto LABEL_26;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo, v27);
    list = SpotImageMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = SpotImageMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_SpotImageEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0LL);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
LABEL_26:
    sub_1BCAA3C(list, v27);
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v26,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_4B16CA0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&spotId);
    byte_4B16CA0 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&SpotImageMaster___c_TypeInfo, v1, v2);
    byte_4B16CA3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SpotImageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SpotImageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}