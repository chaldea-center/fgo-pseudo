void GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB65C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_4CB65C2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB65C0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_4CB65C0 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33FDB94 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  StoryGachaAdjustData_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  unsigned __int64 v12; // x1
  unsigned __int64 list; // x0
  int v14; // w24
  int32_t v15; // w25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  GachaStoryAdjustMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v24; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w27
  _DWORD *v29; // x19
  int32_t i; // w22
  _DWORD *v31; // x23
  int32_t v32; // w24
  int32_t v33; // w26
  int64_t v34; // x25
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  StoryGachaAdjustData_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  StoryGachaAdjustData_o **v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB65C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_1C6BA08(&StoryGachaAdjustData_TypeInfo);
    sub_1C6BA08(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_1C6BA08(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4CB65C3 = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_1C6BC54(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0);
  *adjustData = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)adjustData, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (unsigned __int64)this->fields.list;
      if ( !list )
        break;
      list = (unsigned __int64)System_Collections_ObjectModel_Collection_object___get_Item(
                                 (System_Collections_ObjectModel_Collection_T__o *)list,
                                 v15,
                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        break;
      v12 = list;
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v19 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_15;
    }
LABEL_45:
    sub_1C6BC60(list, v12);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_45;
  if ( !v10->fields._size )
    return 0;
  v22 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v22 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  v44 = adjustData;
  _9__3_0 = (System_Comparison_T__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v24, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_58729528(
    v10,
    _9__3_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v28 = v10->fields._size;
  if ( v28 >= 1 )
  {
    v29 = 0;
    for ( i = 0; v28 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v10,
                                 i,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v31 = (_DWORD *)list;
      v33 = *(_DWORD *)(list + 28);
      v32 = *(_DWORD *)(list + 32);
      v34 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v33, v32, v34, 0, 0, 0);
      if ( (list & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_45;
        v12 = (unsigned int)v31[6];
        v37 = v11->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v37 )
          goto LABEL_45;
        v39 = v11->fields._size;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v12,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          if ( !v29 )
          {
LABEL_37:
            list = (unsigned __int64)*v44;
            if ( !*v44 )
              goto LABEL_45;
            *(_QWORD *)(list + 16) = v31;
            sub_1C6B9AC((CGThumbnailListItem_o *)(list + 16), (int32_t)v31, v35, v36);
            v29 = v31;
            continue;
          }
        }
        else
        {
          v11->fields._size = v39 + 1;
          v37->m_Items[v39] = v12;
          if ( !v29 )
            goto LABEL_37;
        }
        if ( v29[5] < v31[5] )
        {
          list = (unsigned __int64)*v44;
          if ( !*v44 )
            goto LABEL_45;
          *(_QWORD *)(list + 16) = v31;
          sub_1C6B9AC((CGThumbnailListItem_o *)(list + 16), (int32_t)v31, v35, v36);
        }
      }
    }
  }
  if ( !v11 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v11,
    (const MethodInfo_37E5294 *)Method_System_Collections_Generic_List_int__Sort__);
  v40 = *v44;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v11,
                             (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v40 )
    goto LABEL_45;
  v40->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v40->fields.adjustIds, list, v41, v42);
  if ( !*v44 )
    goto LABEL_45;
  return (*v44)->fields.targetEntity != 0;
}


// local variable allocation has failed, the output may be wrong!
bool GachaStoryAdjustMaster__IsGachaIdAdjusted(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22

  if ( (byte_4CB65C4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    byte_4CB65C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C6BC60(list, *(_QWORD *)&gachaId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( list )
      {
        if ( LODWORD(list->fields.items) == gachaId )
          return v6 < Count;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v6;
        if ( list )
          continue;
      }
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
bool GachaStoryAdjustMaster__TryGetEntity(
        GachaStoryAdjustMaster_o *this,
        GachaStoryAdjustEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB65C1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_4CB65C1 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB65C5 & 1) == 0 )
  {
    sub_1C6BA08(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4CB65C5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void GachaStoryAdjustMaster___c___ctor(GachaStoryAdjustMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GachaStoryAdjustMaster___c___GetValidData_b__3_0(
        GachaStoryAdjustMaster___c_o *this,
        GachaStoryAdjustEntity_o *a,
        GachaStoryAdjustEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.idx - b->fields.idx;
}