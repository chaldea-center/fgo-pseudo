void SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D315E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
    byte_4D315E3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D315E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
    byte_4D315E1 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_34681D4 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


SpotImageEntity_array *SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D315E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_SpotImageEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SpotImageEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SpotImageEntity__TypeInfo);
    sub_1C93AD4(&Method_SpotImageMaster___c__GetImageList_b__3_0__);
    sub_1C93AD4(&SpotImageMaster___c_TypeInfo);
    byte_4D315E4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v5 )
          goto LABEL_24;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_24;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = SpotImageMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v5 )
LABEL_24:
    sub_1C93D2C(list, v6);
  System_Collections_Generic_List_object___Sort_59225184(
    v5,
    v19,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool SpotImageMaster__TryGetEntity(
        SpotImageMaster_o *this,
        SpotImageEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D315E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
    byte_4D315E2 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void SpotImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D315E5 & 1) == 0 )
  {
    sub_1C93AD4(&SpotImageMaster___c_TypeInfo);
    byte_4D315E5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SpotImageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SpotImageMaster___c___ctor(SpotImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SpotImageMaster___c___GetImageList_b__3_0(
        SpotImageMaster___c_o *this,
        SpotImageEntity_o *a,
        SpotImageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}