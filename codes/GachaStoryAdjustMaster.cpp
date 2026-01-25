void GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA5C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_4CEEA5C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEA5A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_4CEEA5A = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3432DB4 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  StoryGachaAdjustData_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x21
  System_Collections_Generic_List_int__o *v15; // x20
  unsigned __int64 v16; // x1
  unsigned __int64 list; // x0
  int v18; // w24
  int32_t v19; // w25
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  GachaStoryAdjustMaster___c_c *v30; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v32; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int v40; // w27
  _DWORD *v41; // x19
  int32_t i; // w22
  _DWORD *v43; // x23
  int32_t v44; // w24
  int32_t v45; // w26
  int64_t v46; // x25
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  StoryGachaAdjustData_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  StoryGachaAdjustData_o **v64; // [xsp+8h] [xbp-68h]

  if ( (byte_4CEEA5D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    sub_1C7BAE8(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_1C7BAE8(&StoryGachaAdjustData_TypeInfo);
    sub_1C7BAE8(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_1C7BAE8(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4CEEA5D = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_1C7BD34(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0);
  *adjustData = v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)adjustData, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = list;
    v19 = 0;
    while ( 1 )
    {
      list = (unsigned __int64)this->fields.list;
      if ( !list )
        break;
      list = (unsigned __int64)System_Collections_ObjectModel_Collection_object___get_Item(
                                 (System_Collections_ObjectModel_Collection_T__o *)list,
                                 v19,
                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        break;
      v16 = list;
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v27 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v16;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 4), v16, v20, v21, v22, v23, v24, v25);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_45:
    sub_1C7BD40(list, v16);
  }
LABEL_15:
  if ( !v14 )
    goto LABEL_45;
  if ( !v14->fields._size )
    return 0;
  v30 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v30 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  v64 = adjustData;
  _9__3_0 = (System_Comparison_T__o *)v30->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v32, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v34, v35, v36, v37, v38, v39);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v14,
    _9__3_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v40 = v14->fields._size;
  if ( v40 >= 1 )
  {
    v41 = 0;
    for ( i = 0; v40 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v14,
                                 i,
                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v43 = (_DWORD *)list;
      v45 = *(_DWORD *)(list + 28);
      v44 = *(_DWORD *)(list + 32);
      v46 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v45, v44, v46, 0, 0, 0);
      if ( (list & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_45;
        v16 = (unsigned int)v43[6];
        v53 = v15->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v53 )
          goto LABEL_45;
        v55 = v15->fields._size;
        if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            v16,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          if ( !v41 )
          {
LABEL_37:
            list = (unsigned __int64)*v64;
            if ( !*v64 )
              goto LABEL_45;
            *(_QWORD *)(list + 16) = v43;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(list + 16), (int32_t)v43, v47, v48, v49, v50, v51, v52);
            v41 = v43;
            continue;
          }
        }
        else
        {
          v15->fields._size = v55 + 1;
          v53->m_Items[v55] = v16;
          if ( !v41 )
            goto LABEL_37;
        }
        if ( v41[5] < v43[5] )
        {
          list = (unsigned __int64)*v64;
          if ( !*v64 )
            goto LABEL_45;
          *(_QWORD *)(list + 16) = v43;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(list + 16), (int32_t)v43, v47, v48, v49, v50, v51, v52);
        }
      }
    }
  }
  if ( !v15 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v15,
    (const MethodInfo_382371C *)Method_System_Collections_Generic_List_int__Sort__);
  v56 = *v64;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v15,
                             (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v56 )
    goto LABEL_45;
  v56->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v56->fields.adjustIds, list, v57, v58, v59, v60, v61, v62);
  if ( !*v64 )
    goto LABEL_45;
  return (*v64)->fields.targetEntity != 0;
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

  if ( (byte_4CEEA5E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    byte_4CEEA5E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C7BD40(list, *(_QWORD *)&gachaId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
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

  if ( (byte_4CEEA5B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_4CEEA5B = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEA5F & 1) == 0 )
  {
    sub_1C7BAE8(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4CEEA5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, a);
  return a->fields.idx - b->fields.idx;
}