void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC6BE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_49FC6BE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC6BC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_49FC6BC = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_int__o *v33; // x20
  void *list; // x0
  Il2CppClass *v35; // x1
  __int64 v36; // x2
  int v37; // w24
  int32_t v38; // w25
  int32_t v39; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  GachaStoryAdjustMaster___c_c *v45; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v47; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  int v51; // w27
  _DWORD *v52; // x19
  int32_t i; // w22
  _DWORD *v54; // x23
  int32_t v55; // w24
  int32_t v56; // w26
  int64_t v57; // x25
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w1
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  StoryGachaAdjustData_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3

  if ( (byte_49FC6BF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v8);
    sub_1B640C8(&CondType_TypeInfo, v9);
    sub_1B640C8(&GachaStoryAdjustEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v21);
    sub_1B640C8(&StoryGachaAdjustData_TypeInfo, v22);
    sub_1B640C8(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v23);
    sub_1B640C8(&GachaStoryAdjustMaster___c_TypeInfo, v24);
    byte_49FC6BF = 1;
  }
  v25 = (StoryGachaAdjustData_o *)sub_1B64314(StoryGachaAdjustData_TypeInfo, adjustData, *(_QWORD *)&gachaId);
  StoryGachaAdjustData___ctor(v25, 0LL);
  *adjustData = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)adjustData, (int32_t)v25, v26, v27);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v33 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v31, v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v37 = (int)list;
    v38 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v38,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v35 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(GachaStoryAdjustEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == gachaId )
      {
        if ( !v30 )
          break;
        items = v30->fields._items;
        v42 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v30->fields._version;
        if ( !items )
          break;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v44[4] = v35;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v35, v36, v39);
        }
      }
      if ( v37 == ++v38 )
        goto LABEL_17;
    }
LABEL_47:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v30 )
    goto LABEL_47;
  if ( !v30->fields._size )
    return 0;
  v45 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v45 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v45->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_GachaStoryAdjustEntity__TypeInfo, v35, v36);
    System_Comparison_object____ctor(_9__3_0, v47, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v49, v50);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v30,
    _9__3_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v51 = v30->fields._size;
  if ( v51 >= 1 )
  {
    v52 = 0LL;
    for ( i = 0; v51 != i; ++i )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v30,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      v54 = list;
      v56 = *((_DWORD *)list + 7);
      v55 = *((_DWORD *)list + 8);
      v57 = *((int *)list + 9);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(v56, v55, v57, 0, 0LL);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_47;
        v60 = v54[6];
        v61 = v33->fields._items;
        v62 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !v61 )
          goto LABEL_47;
        v63 = v33->fields._size;
        if ( (unsigned int)v63 >= v61->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v33,
            v60,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          if ( !v52 )
          {
LABEL_39:
            list = *adjustData;
            if ( !*adjustData )
              goto LABEL_47;
            *((_QWORD *)list + 2) = v54;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)list + 16), (int32_t)v54, v58, v59);
            v52 = v54;
            continue;
          }
        }
        else
        {
          v33->fields._size = v63 + 1;
          v61->m_Items[v63 + 1] = v60;
          if ( !v52 )
            goto LABEL_39;
        }
        if ( v52[5] < v54[5] )
        {
          list = *adjustData;
          if ( !*adjustData )
            goto LABEL_47;
          *((_QWORD *)list + 2) = v54;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)list + 16), (int32_t)v54, v58, v59);
        }
      }
    }
  }
  if ( !v33 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort(
    v33,
    (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
  v64 = *adjustData;
  list = System_Collections_Generic_List_int___ToArray(
           v33,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v64 )
    goto LABEL_47;
  v64->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->fields.adjustIds, (int32_t)list, v65, v66);
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

  if ( (byte_49FC6BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_49FC6BD = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC6C0 & 1) == 0 )
  {
    sub_1B640C8(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_49FC6C0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(GachaStoryAdjustMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.idx - b->fields.idx;
}