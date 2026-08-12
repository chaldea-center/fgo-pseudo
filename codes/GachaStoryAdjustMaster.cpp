void GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C54 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_5970C54 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970C52 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_5970C52 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  StoryGachaAdjustData_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x21
  System_Collections_Generic_List_int__o *v15; // x20
  unsigned __int64 v16; // x1
  unsigned __int64 list; // x0
  int v18; // w24
  int32_t v19; // w25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  GachaStoryAdjustMaster___c_c *v30; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v33; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int v41; // w27
  _DWORD *v42; // x28
  int32_t i; // w22
  _DWORD *v44; // x23
  int32_t v45; // w24
  int32_t v46; // w25
  int64_t v47; // x26
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  void **v57; // x8
  StoryGachaAdjustData_o *v58; // x21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  StoryGachaAdjustData_o **v66; // [xsp+8h] [xbp-68h]

  if ( (byte_5970C55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    sub_2213A60(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_2213A60(&StoryGachaAdjustData_TypeInfo);
    sub_2213A60(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_2213A60(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_5970C55 = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_2213CCC(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0);
  *adjustData = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)adjustData, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
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
                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), v16, v20, v21, v22, v23, v24, v25);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_45:
    sub_2213CDC(list, v16);
  }
LABEL_15:
  if ( !v14 )
    goto LABEL_45;
  if ( !v14->fields._size )
    return 0;
  v66 = adjustData;
  v30 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !*(&GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo, v16);
    v30 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v16);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v33, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0);
    v34 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->__9__3_0, (int32_t)_9__3_0, v35, v36, v37, v38, v39, v40);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v14,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v41 = v14->fields._size;
  if ( v41 >= 1 )
  {
    v42 = 0;
    for ( i = 0; v41 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v14,
                                 i,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v44 = (_DWORD *)list;
      v45 = *(_DWORD *)(list + 28);
      v46 = *(_DWORD *)(list + 32);
      v47 = *(int *)(list + 36);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v16);
      list = CondType__IsOpen(v45, v46, v47, 0, 0, 0);
      if ( (list & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_45;
        v54 = v15->fields._items;
        v16 = (unsigned int)v44[6];
        v55 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v54 )
          goto LABEL_45;
        v56 = v15->fields._size;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            v16,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          if ( !v42 )
          {
LABEL_36:
            v57 = (void **)v66;
            v42 = v44;
            goto LABEL_37;
          }
        }
        else
        {
          v15->fields._size = v56 + 1;
          v54->m_Items[v56] = v16;
          if ( !v42 )
            goto LABEL_36;
        }
        if ( v42[5] < v44[5] )
        {
          v57 = (void **)v66;
LABEL_37:
          list = (unsigned __int64)*v57;
          if ( !*v57 )
            goto LABEL_45;
          *(_QWORD *)(list + 16) = v44;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(list + 16), (int32_t)v44, v48, v49, v50, v51, v52, v53);
        }
      }
    }
  }
  if ( !v15 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v15,
    (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
  v58 = *v66;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v15,
                             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v58 )
    goto LABEL_45;
  v58->fields.adjustIds = (struct System_Int32_array *)list;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->fields.adjustIds, list, v59, v60, v61, v62, v63, v64);
  if ( !*v66 )
    goto LABEL_45;
  return (*v66)->fields.targetEntity != 0;
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

  if ( (byte_5970C56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
    byte_5970C56 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_2213CDC(list, *(_QWORD *)&gachaId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
    if ( v6 >= Count )
      return v6 < Count;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
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

  if ( (byte_5970C53 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_5970C53 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970C57 & 1) == 0 )
  {
    sub_2213A60(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_5970C57 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.idx - b->fields.idx;
}