void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C7FB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_4B1C7FB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C7F9 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B1C7F9 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  StoryGachaAdjustData_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x21
  System_Collections_Generic_List_int__o *v28; // x20
  unsigned __int64 v29; // x1
  unsigned __int64 list; // x0
  int v31; // w24
  int32_t v32; // w25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  GachaStoryAdjustMaster___c_c *v39; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v41; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int v45; // w27
  _DWORD *v46; // x19
  int32_t i; // w22
  _DWORD *v48; // x23
  int32_t v49; // w24
  int32_t v50; // w26
  int64_t v51; // x25
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  StoryGachaAdjustData_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  StoryGachaAdjustData_o **v61; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1C7FC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__, adjustData);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__, v7);
    sub_1BCAFF8(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v8);
    sub_1BCAFF8(&CondType_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Sort__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1BCAFF8(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v20);
    sub_1BCAFF8(&StoryGachaAdjustData_TypeInfo, v21);
    sub_1BCAFF8(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v22);
    sub_1BCAFF8(&GachaStoryAdjustMaster___c_TypeInfo, v23);
    byte_4B1C7FC = 1;
  }
  v24 = (StoryGachaAdjustData_o *)sub_1BCB244(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v24, 0LL);
  *adjustData = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)adjustData, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v28 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = list;
    v32 = 0;
    while ( 1 )
    {
      list = (unsigned __int64)this->fields.list;
      if ( !list )
        break;
      list = (unsigned __int64)System_Collections_ObjectModel_Collection_object___get_Item(
                                 (System_Collections_ObjectModel_Collection_T__o *)list,
                                 v32,
                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        break;
      v29 = list;
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v27 )
          break;
        items = v27->fields._items;
        v36 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v29;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 4), v29, v33, v34);
        }
      }
      if ( v31 == ++v32 )
        goto LABEL_15;
    }
LABEL_45:
    sub_1BCB254(list, v29);
  }
LABEL_15:
  if ( !v27 )
    goto LABEL_45;
  if ( !v27->fields._size )
    return 0;
  v39 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v39 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  v61 = adjustData;
  _9__3_0 = (System_Comparison_T__o *)v39->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v41, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v43, v44);
  }
  System_Collections_Generic_List_object___Sort_57390740(
    v27,
    _9__3_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v45 = v27->fields._size;
  if ( v45 >= 1 )
  {
    v46 = 0LL;
    for ( i = 0; v45 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v27,
                                 i,
                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v48 = (_DWORD *)list;
      v50 = *(_DWORD *)(list + 28);
      v49 = *(_DWORD *)(list + 32);
      v51 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v50, v49, v51, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_45;
        v29 = (unsigned int)v48[6];
        v54 = v28->fields._items;
        v55 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !v54 )
          goto LABEL_45;
        v56 = v28->fields._size;
        if ( (unsigned int)v56 >= v54->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            v29,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          if ( !v46 )
          {
LABEL_37:
            list = (unsigned __int64)*v61;
            if ( !*v61 )
              goto LABEL_45;
            *(_QWORD *)(list + 16) = v48;
            sub_1BCAF9C((CGThumbnailListItem_o *)(list + 16), (int32_t)v48, v52, v53);
            v46 = v48;
            continue;
          }
        }
        else
        {
          v28->fields._size = v56 + 1;
          v54->m_Items[v56 + 1] = v29;
          if ( !v46 )
            goto LABEL_37;
        }
        if ( v46[5] < v48[5] )
        {
          list = (unsigned __int64)*v61;
          if ( !*v61 )
            goto LABEL_45;
          *(_QWORD *)(list + 16) = v48;
          sub_1BCAF9C((CGThumbnailListItem_o *)(list + 16), (int32_t)v48, v52, v53);
        }
      }
    }
  }
  if ( !v28 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v28,
    (const MethodInfo_369E4F0 *)Method_System_Collections_Generic_List_int__Sort__);
  v57 = *v61;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v28,
                             (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v57 )
    goto LABEL_45;
  v57->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v57->fields.adjustIds, list, v58, v59);
  if ( !*v61 )
    goto LABEL_45;
  return (*v61)->fields.targetEntity != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaStoryAdjustMaster__TryGetEntity(
        GachaStoryAdjustMaster_o *this,
        GachaStoryAdjustEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C7FA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_4B1C7FA = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C7FD & 1) == 0 )
  {
    sub_1BCAFF8(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_4B1C7FD = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall GachaStoryAdjustMaster___c___ctor(GachaStoryAdjustMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaStoryAdjustMaster___c___GetValidData_b__3_0(
        GachaStoryAdjustMaster___c_o *this,
        GachaStoryAdjustEntity_o *a,
        GachaStoryAdjustEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.idx - b->fields.idx;
}