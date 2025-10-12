void GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37CAB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_4C37CAB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37CA9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_4C37CA9 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
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
  void *list; // x0
  int v13; // w24
  int32_t v14; // w25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppClass *v17; // x1
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
  int32_t v37; // w1
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  StoryGachaAdjustData_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  StoryGachaAdjustData_o **v45; // [xsp+8h] [xbp-68h]

  if ( (byte_4C37CAC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    sub_1C32C20(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_1C32C20(&StoryGachaAdjustData_TypeInfo);
    sub_1C32C20(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_1C32C20(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4C37CAC = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_1C32E6C(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0);
  *adjustData = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)adjustData, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        break;
      v17 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == gachaId )
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v21[4] = v17;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_45:
    sub_1C32E7C(list);
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
  v45 = adjustData;
  _9__3_0 = (System_Comparison_T__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v24, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__3_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v28 = v10->fields._size;
  if ( v28 >= 1 )
  {
    v29 = 0;
    for ( i = 0; v28 != i; ++i )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v10,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v31 = list;
      v33 = *((_DWORD *)list + 7);
      v32 = *((_DWORD *)list + 8);
      v34 = *((int *)list + 9);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(v33, v32, v34, 0, 0, 0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_45;
        v37 = v31[6];
        v38 = v11->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v38 )
          goto LABEL_45;
        v40 = v11->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v37,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          if ( !v29 )
          {
LABEL_37:
            list = *v45;
            if ( !*v45 )
              goto LABEL_45;
            *((_QWORD *)list + 2) = v31;
            sub_1C32BC4((CGThumbnailListItem_o *)((char *)list + 16), (int32_t)v31, v35, v36);
            v29 = v31;
            continue;
          }
        }
        else
        {
          v11->fields._size = v40 + 1;
          v38->m_Items[v40] = v37;
          if ( !v29 )
            goto LABEL_37;
        }
        if ( v29[5] < v31[5] )
        {
          list = *v45;
          if ( !*v45 )
            goto LABEL_45;
          *((_QWORD *)list + 2) = v31;
          sub_1C32BC4((CGThumbnailListItem_o *)((char *)list + 16), (int32_t)v31, v35, v36);
        }
      }
    }
  }
  if ( !v11 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v11,
    (const MethodInfo_377D0DC *)Method_System_Collections_Generic_List_int__Sort__);
  v41 = *v45;
  list = System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v41 )
    goto LABEL_45;
  v41->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1C32BC4((CGThumbnailListItem_o *)&v41->fields.adjustIds, (int32_t)list, v42, v43);
  if ( !*v45 )
    goto LABEL_45;
  return (*v45)->fields.targetEntity != 0;
}


bool GachaStoryAdjustMaster__IsGachaIdAdjusted(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22

  if ( (byte_4C37CAD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    byte_4C37CAD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C32E7C(list);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
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

  if ( (byte_4C37CAA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_4C37CAA = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37CAE & 1) == 0 )
  {
    sub_1C32C20(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4C37CAE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return a->fields.idx - b->fields.idx;
}