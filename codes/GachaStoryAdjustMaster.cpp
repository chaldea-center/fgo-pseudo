void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method, v2);
    byte_4B164A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B164A1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId,
      *(_QWORD *)&idx);
    byte_4B164A1 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  StoryGachaAdjustData_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_int__o *v57; // x20
  int64_t v58; // x1
  int64_t list; // x0
  int64_t v60; // x2
  __int64 v61; // x3
  int v62; // w24
  int32_t v63; // w25
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  GachaStoryAdjustMaster___c_c *v73; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v75; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int v83; // w27
  int64_t v84; // x19
  int32_t i; // w22
  int64_t v86; // x23
  int32_t v87; // w24
  int32_t v88; // w26
  int64_t v89; // x25
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Int32_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  StoryGachaAdjustData_o *v99; // x21
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4B164A4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      adjustData,
      *(_QWORD *)&gachaId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&GachaStoryAdjustEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&StoryGachaAdjustData_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v39, v40);
    sub_1BCA7E0(&GachaStoryAdjustMaster___c_TypeInfo, v41, v42);
    byte_4B164A4 = 1;
  }
  v43 = (StoryGachaAdjustData_o *)sub_1BCAA2C(StoryGachaAdjustData_TypeInfo, adjustData, *(_QWORD *)&gachaId, method);
  StoryGachaAdjustData___ctor(v43, 0LL);
  *adjustData = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)adjustData, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v57 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v54,
                                                    v55,
                                                    v56);
  System_Collections_Generic_List_int____ctor(
    v57,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v62 = list;
    v63 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v63,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v58 = list;
      methodPtr_low = LOBYTE(GachaStoryAdjustEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v53 )
          break;
        items = v53->fields._items;
        v70 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v53->fields._version;
        if ( !items )
          break;
        size = v53->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &items->obj.klass + size;
          v53->fields._size = size + 1;
          v72[4] = (Il2CppClass *)v58;
          sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v58, v60, v61, v64, v65, v66, v67);
        }
      }
      if ( v62 == ++v63 )
        goto LABEL_17;
    }
LABEL_47:
    sub_1BCAA3C(list, v58);
  }
LABEL_17:
  if ( !v53 )
    goto LABEL_47;
  if ( !v53->fields._size )
    return 0;
  v73 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo, v58);
    v73 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v73->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73, v58);
      v73 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GachaStoryAdjustEntity__TypeInfo, v58, v60, v61);
    System_Comparison_object____ctor(_9__3_0, v75, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v77, v78, v79, v80, v81, v82);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v53,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v83 = v53->fields._size;
  if ( v83 >= 1 )
  {
    v84 = 0LL;
    for ( i = 0; v83 != i; ++i )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v53,
                        i,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      v86 = list;
      v88 = *(_DWORD *)(list + 28);
      v87 = *(_DWORD *)(list + 32);
      v89 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v58);
      list = CondType__IsOpen(v88, v87, v89, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v57 )
          goto LABEL_47;
        v58 = *(unsigned int *)(v86 + 24);
        v96 = v57->fields._items;
        v97 = Method_System_Collections_Generic_List_int__Add__;
        ++v57->fields._version;
        if ( !v96 )
          goto LABEL_47;
        v98 = v57->fields._size;
        if ( (unsigned int)v98 >= v96->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v57,
            v58,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          if ( !v84 )
          {
LABEL_39:
            list = (int64_t)*adjustData;
            if ( !*adjustData )
              goto LABEL_47;
            *(_QWORD *)(list + 16) = v86;
            sub_1BCA784((PartyOrganizationUtility_o *)(list + 16), v86, v90, v91, v92, v93, v94, v95);
            v84 = v86;
            continue;
          }
        }
        else
        {
          v57->fields._size = v98 + 1;
          v96->m_Items[v98 + 1] = v58;
          if ( !v84 )
            goto LABEL_39;
        }
        if ( *(_DWORD *)(v84 + 20) < *(_DWORD *)(v86 + 20) )
        {
          list = (int64_t)*adjustData;
          if ( !*adjustData )
            goto LABEL_47;
          *(_QWORD *)(list + 16) = v86;
          sub_1BCA784((PartyOrganizationUtility_o *)(list + 16), v86, v90, v91, v92, v93, v94, v95);
        }
      }
    }
  }
  if ( !v57 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort(
    v57,
    (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
  v99 = *adjustData;
  list = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v57,
                    (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v99 )
    goto LABEL_47;
  v99->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1BCA784((PartyOrganizationUtility_o *)&v99->fields.adjustIds, list, v100, v101, v102, v103, v104, v105);
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

  if ( (byte_4B164A2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&gachaId);
    byte_4B164A2 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B164A5 & 1) == 0 )
  {
    sub_1BCA7E0(&GachaStoryAdjustMaster___c_TypeInfo, v1, v2);
    byte_4B164A5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(GachaStoryAdjustMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.idx - b->fields.idx;
}