void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D66 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_4BC7D66 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    227,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7D64 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4BC7D64 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_324D130 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x21
  System_Collections_Generic_List_int__o *v32; // x20
  int64_t v33; // x1
  int64_t list; // x0
  int v35; // w24
  int32_t v36; // w25
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  GachaStoryAdjustMaster___c_c *v47; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v49; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int v57; // w27
  int64_t v58; // x19
  int32_t i; // w22
  int64_t v60; // x23
  int32_t v61; // w24
  int32_t v62; // w26
  int64_t v63; // x25
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  StoryGachaAdjustData_o *v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  StoryGachaAdjustData_o **v81; // [xsp+8h] [xbp-68h]

  if ( (byte_4BC7D67 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__, adjustData);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v8);
    sub_1C1ABD4(&CondType_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Sort__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v20);
    sub_1C1ABD4(&StoryGachaAdjustData_TypeInfo, v21);
    sub_1C1ABD4(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v22);
    sub_1C1ABD4(&GachaStoryAdjustMaster___c_TypeInfo, v23);
    byte_4BC7D67 = 1;
  }
  v24 = (StoryGachaAdjustData_o *)sub_1C1AE20(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v24, 0LL);
  *adjustData = v24;
  sub_1C1AB78((PartyOrganizationUtility_o *)adjustData, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_45;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v35 = list;
    v36 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v36,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        break;
      v33 = list;
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v31 )
          break;
        items = v31->fields._items;
        v44 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          break;
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v33;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 4), v33, v37, v38, v39, v40, v41, v42);
        }
      }
      if ( v35 == ++v36 )
        goto LABEL_15;
    }
LABEL_45:
    sub_1C1AE30(list, v33);
  }
LABEL_15:
  if ( !v31 )
    goto LABEL_45;
  if ( !v31->fields._size )
    return 0;
  v47 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v47 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  v81 = adjustData;
  _9__3_0 = (System_Comparison_T__o *)v47->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v49, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v51, v52, v53, v54, v55, v56);
  }
  System_Collections_Generic_List_object___Sort_56877908(
    v31,
    _9__3_0,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v57 = v31->fields._size;
  if ( v57 >= 1 )
  {
    v58 = 0LL;
    for ( i = 0; v57 != i; ++i )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v31,
                        i,
                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_45;
      v60 = list;
      v62 = *(_DWORD *)(list + 28);
      v61 = *(_DWORD *)(list + 32);
      v63 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v62, v61, v63, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_45;
        v33 = *(unsigned int *)(v60 + 24);
        v70 = v32->fields._items;
        v71 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !v70 )
          goto LABEL_45;
        v72 = v32->fields._size;
        if ( (unsigned int)v72 >= v70->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            v33,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          if ( !v58 )
          {
LABEL_37:
            list = (int64_t)*v81;
            if ( !*v81 )
              goto LABEL_45;
            *(_QWORD *)(list + 16) = v60;
            sub_1C1AB78((PartyOrganizationUtility_o *)(list + 16), v60, v64, v65, v66, v67, v68, v69);
            v58 = v60;
            continue;
          }
        }
        else
        {
          v32->fields._size = v72 + 1;
          v70->m_Items[v72 + 1] = v33;
          if ( !v58 )
            goto LABEL_37;
        }
        if ( *(_DWORD *)(v58 + 20) < *(_DWORD *)(v60 + 20) )
        {
          list = (int64_t)*v81;
          if ( !*v81 )
            goto LABEL_45;
          *(_QWORD *)(list + 16) = v60;
          sub_1C1AB78((PartyOrganizationUtility_o *)(list + 16), v60, v64, v65, v66, v67, v68, v69);
        }
      }
    }
  }
  if ( !v32 )
    goto LABEL_45;
  System_Collections_Generic_List_int___Sort(
    v32,
    (const MethodInfo_36211B0 *)Method_System_Collections_Generic_List_int__Sort__);
  v73 = *v81;
  list = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v32,
                    (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v73 )
    goto LABEL_45;
  v73->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v73->fields.adjustIds, list, v74, v75, v76, v77, v78, v79);
  if ( !*v81 )
    goto LABEL_45;
  return (*v81)->fields.targetEntity != 0LL;
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

  if ( (byte_4BC7D65 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_4BC7D65 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7D68 & 1) == 0 )
  {
    sub_1C1ABD4(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_4BC7D68 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return a->fields.idx - b->fields.idx;
}