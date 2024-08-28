void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FD82 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_4A1FD82 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A1FD80 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4A1FD80 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30F8AB8 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
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
  __int64 v24; // x1
  StoryGachaAdjustData_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_object__o *v28; // x21
  System_Collections_Generic_List_int__o *v29; // x20
  unsigned __int64 v30; // x1
  unsigned __int64 list; // x0
  int v32; // w24
  int32_t v33; // w25
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  GachaStoryAdjustMaster___c_c *v41; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v43; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int v47; // w27
  _DWORD *v48; // x19
  int32_t i; // w22
  _DWORD *v50; // x23
  int32_t v51; // w24
  int32_t v52; // w26
  int64_t v53; // x25
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  StoryGachaAdjustData_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3

  if ( (byte_4A1FD83 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B715CC(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v8);
    sub_1B715CC(&CondType_TypeInfo, v9);
    sub_1B715CC(&GachaStoryAdjustEntity_TypeInfo, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Sort__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v19);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B715CC(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v21);
    sub_1B715CC(&StoryGachaAdjustData_TypeInfo, v22);
    sub_1B715CC(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v23);
    sub_1B715CC(&GachaStoryAdjustMaster___c_TypeInfo, v24);
    byte_4A1FD83 = 1;
  }
  v25 = (StoryGachaAdjustData_o *)sub_1B71818(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v25, 0LL);
  *adjustData = v25;
  sub_1B71570((ServantStatusBattleListViewItem_o *)adjustData, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v32 = list;
    v33 = 0;
    while ( 1 )
    {
      list = (unsigned __int64)this->fields.list;
      if ( !list )
        break;
      list = (unsigned __int64)System_Collections_ObjectModel_Collection_object___get_Item(
                                 (System_Collections_ObjectModel_Collection_T__o *)list,
                                 v33,
                                 (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v30 = list;
      methodPtr_low = LOBYTE(GachaStoryAdjustEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v28 )
          break;
        items = v28->fields._items;
        v38 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v28->fields._version;
        if ( !items )
          break;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)list,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v30;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 4), v30, v34, v35);
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_47:
    sub_1B71828(list, v30);
  }
LABEL_17:
  if ( !v28 )
    goto LABEL_47;
  if ( !v28->fields._size )
    return 0;
  v41 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v41 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v41->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v43, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v45, v46);
  }
  System_Collections_Generic_List_object___Sort_55385380(
    v28,
    _9__3_0,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v47 = v28->fields._size;
  if ( v47 >= 1 )
  {
    v48 = 0LL;
    for ( i = 0; v47 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v28,
                                 i,
                                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      v50 = (_DWORD *)list;
      v52 = *(_DWORD *)(list + 28);
      v51 = *(_DWORD *)(list + 32);
      v53 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v52, v51, v53, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_47;
        v30 = (unsigned int)v50[6];
        v56 = v29->fields._items;
        v57 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !v56 )
          goto LABEL_47;
        v58 = v29->fields._size;
        if ( (unsigned int)v58 >= v56->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            v30,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          if ( !v48 )
          {
LABEL_39:
            list = (unsigned __int64)*adjustData;
            if ( !*adjustData )
              goto LABEL_47;
            *(_QWORD *)(list + 16) = v50;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(list + 16), (int32_t)v50, v54, v55);
            v48 = v50;
            continue;
          }
        }
        else
        {
          v29->fields._size = v58 + 1;
          v56->m_Items[v58 + 1] = v30;
          if ( !v48 )
            goto LABEL_39;
        }
        if ( v48[5] < v50[5] )
        {
          list = (unsigned __int64)*adjustData;
          if ( !*adjustData )
            goto LABEL_47;
          *(_QWORD *)(list + 16) = v50;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(list + 16), (int32_t)v50, v54, v55);
        }
      }
    }
  }
  if ( !v29 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort(
    v29,
    (const MethodInfo_34B4B80 *)Method_System_Collections_Generic_List_int__Sort__);
  v59 = *adjustData;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v29,
                             (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v59 )
    goto LABEL_47;
  v59->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.adjustIds, list, v60, v61);
  if ( !*adjustData )
    goto LABEL_47;
  return (*adjustData)->fields.targetEntity != 0LL;
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

  if ( (byte_4A1FD81 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_4A1FD81 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1FD84 & 1) == 0 )
  {
    sub_1B715CC(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_4A1FD84 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B71828(this, a);
  return a->fields.idx - b->fields.idx;
}