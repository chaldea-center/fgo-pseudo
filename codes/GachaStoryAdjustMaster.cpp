void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B40F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_4A5B40F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B40D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_4A5B40D = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  StoryGachaAdjustData_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  unsigned __int64 v12; // x1
  unsigned __int64 list; // x0
  int v14; // w24
  int32_t v15; // w25
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  GachaStoryAdjustMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v25; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w27
  _DWORD *v30; // x19
  int32_t i; // w22
  _DWORD *v32; // x23
  int32_t v33; // w24
  int32_t v34; // w26
  int64_t v35; // x25
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  StoryGachaAdjustData_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_4A5B410 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&GachaStoryAdjustEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_1B885B0(&StoryGachaAdjustData_TypeInfo);
    sub_1B885B0(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_1B885B0(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4A5B410 = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_1B887FC(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0LL);
  *adjustData = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)adjustData, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (unsigned __int64)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(GachaStoryAdjustEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_47:
    sub_1B8880C(list, v12);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_47;
  if ( !v10->fields._size )
    return 0;
  v23 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v23 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v23->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v25, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v27, v28);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    _9__3_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v29 = v10->fields._size;
  if ( v29 >= 1 )
  {
    v30 = 0LL;
    for ( i = 0; v29 != i; ++i )
    {
      list = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                 v10,
                                 i,
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      v32 = (_DWORD *)list;
      v34 = *(_DWORD *)(list + 28);
      v33 = *(_DWORD *)(list + 32);
      v35 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v34, v33, v35, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_47;
        v12 = (unsigned int)v32[6];
        v38 = v11->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v38 )
          goto LABEL_47;
        v40 = v11->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v12,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          if ( !v30 )
          {
LABEL_39:
            list = (unsigned __int64)*adjustData;
            if ( !*adjustData )
              goto LABEL_47;
            *(_QWORD *)(list + 16) = v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(list + 16), (int32_t)v32, v36, v37);
            v30 = v32;
            continue;
          }
        }
        else
        {
          v11->fields._size = v40 + 1;
          v38->m_Items[v40 + 1] = v12;
          if ( !v30 )
            goto LABEL_39;
        }
        if ( v30[5] < v32[5] )
        {
          list = (unsigned __int64)*adjustData;
          if ( !*adjustData )
            goto LABEL_47;
          *(_QWORD *)(list + 16) = v32;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(list + 16), (int32_t)v32, v36, v37);
        }
      }
    }
  }
  if ( !v11 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort(
    v11,
    (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
  v41 = *adjustData;
  list = (unsigned __int64)System_Collections_Generic_List_int___ToArray(
                             v11,
                             (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v41 )
    goto LABEL_47;
  v41->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->fields.adjustIds, list, v42, v43);
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

  if ( (byte_4A5B40E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_4A5B40E = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B411 & 1) == 0 )
  {
    sub_1B885B0(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_4A5B411 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.idx - b->fields.idx;
}