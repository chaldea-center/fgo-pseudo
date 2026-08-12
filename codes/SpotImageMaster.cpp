void SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59714CD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
    byte_59714CD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59714CB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
    byte_59714CB = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
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
  struct SpotImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v21; // x21
  struct SpotImageMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_59714CE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__);
    sub_2213A60(&System_Comparison_SpotImageEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotImageEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SpotImageEntity__TypeInfo);
    sub_2213A60(&Method_SpotImageMaster___c__GetImageList_b__3_0__);
    sub_2213A60(&SpotImageMaster___c_TypeInfo);
    byte_59714CE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotImageEntity__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !*(&SpotImageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo, v6);
    list = SpotImageMaster___c_TypeInfo;
  }
  static_fields = (struct SpotImageMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v21, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0);
    v22 = SpotImageMaster___c_TypeInfo->static_fields;
    v22->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__3_0, (int32_t)_9__3_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_59714CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
    byte_59714CC = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void SpotImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59714CF & 1) == 0 )
  {
    sub_2213A60(&SpotImageMaster___c_TypeInfo);
    byte_59714CF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SpotImageMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}