void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37455 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_4B37455 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B37453 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B37453 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31D2248 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x21
  System_Collections_Generic_List_int__o *v33; // x20
  int64_t v34; // x1
  int64_t list; // x0
  int v36; // w24
  int32_t v37; // w25
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  GachaStoryAdjustMaster___c_c *v49; // x0
  System_Comparison_T__o *_9__3_0; // x22
  Il2CppObject *v51; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w27
  int64_t v60; // x19
  int32_t i; // w22
  int64_t v62; // x23
  int32_t v63; // w24
  int32_t v64; // w26
  int64_t v65; // x25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  StoryGachaAdjustData_o *v75; // x21
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7

  if ( (byte_4B37456 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v8);
    sub_1BD3458(&CondType_TypeInfo, v9);
    sub_1BD3458(&GachaStoryAdjustEntity_TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Sort__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v19);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1BD3458(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v21);
    sub_1BD3458(&StoryGachaAdjustData_TypeInfo, v22);
    sub_1BD3458(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v23);
    sub_1BD3458(&GachaStoryAdjustMaster___c_TypeInfo, v24);
    byte_4B37456 = 1;
  }
  v25 = (StoryGachaAdjustData_o *)sub_1BD36A4(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v25, 0LL);
  *adjustData = v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)adjustData, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v33 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_47;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v36 = list;
    v37 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v37,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v34 = list;
      methodPtr_low = LOBYTE(GachaStoryAdjustEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == gachaId )
      {
        if ( !v32 )
          break;
        items = v32->fields._items;
        v46 = Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)list,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v34;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v48 + 4), v34, v38, v39, v40, v41, v42, v43);
        }
      }
      if ( v36 == ++v37 )
        goto LABEL_17;
    }
LABEL_47:
    sub_1BD36B4(list, v34);
  }
LABEL_17:
  if ( !v32 )
    goto LABEL_47;
  if ( !v32->fields._size )
    return 0;
  v49 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v49 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v49->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = GachaStoryAdjustMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v51, Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, 0LL);
    static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v53, v54, v55, v56, v57, v58);
  }
  System_Collections_Generic_List_object___Sort_56371284(
    v32,
    _9__3_0,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  v59 = v32->fields._size;
  if ( v59 >= 1 )
  {
    v60 = 0LL;
    for ( i = 0; v59 != i; ++i )
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v32,
                        i,
                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
      if ( !list )
        goto LABEL_47;
      v62 = list;
      v64 = *(_DWORD *)(list + 28);
      v63 = *(_DWORD *)(list + 32);
      v65 = *(int *)(list + 36);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = CondType__IsOpen(v64, v63, v65, 0, 0LL, 0LL);
      if ( (list & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_47;
        v34 = *(unsigned int *)(v62 + 24);
        v72 = v33->fields._items;
        v73 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !v72 )
          goto LABEL_47;
        v74 = v33->fields._size;
        if ( (unsigned int)v74 >= v72->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v33,
            v34,
            *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          if ( !v60 )
          {
LABEL_39:
            list = (int64_t)*adjustData;
            if ( !*adjustData )
              goto LABEL_47;
            *(_QWORD *)(list + 16) = v62;
            sub_1BD33FC((PartyOrganizationUtility_o *)(list + 16), v62, v66, v67, v68, v69, v70, v71);
            v60 = v62;
            continue;
          }
        }
        else
        {
          v33->fields._size = v74 + 1;
          v72->m_Items[v74 + 1] = v34;
          if ( !v60 )
            goto LABEL_39;
        }
        if ( *(_DWORD *)(v60 + 20) < *(_DWORD *)(v62 + 20) )
        {
          list = (int64_t)*adjustData;
          if ( !*adjustData )
            goto LABEL_47;
          *(_QWORD *)(list + 16) = v62;
          sub_1BD33FC((PartyOrganizationUtility_o *)(list + 16), v62, v66, v67, v68, v69, v70, v71);
        }
      }
    }
  }
  if ( !v33 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort(
    v33,
    (const MethodInfo_35A56B0 *)Method_System_Collections_Generic_List_int__Sort__);
  v75 = *adjustData;
  list = (int64_t)System_Collections_Generic_List_int___ToArray(
                    v33,
                    (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v75 )
    goto LABEL_47;
  v75->fields.adjustIds = (struct System_Int32_array *)list;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v75->fields.adjustIds, list, v76, v77, v78, v79, v80, v81);
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

  if ( (byte_4B37454 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_4B37454 = 1;
  }
  PK = (Il2CppObject *)GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
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

  if ( (byte_4B37457 & 1) == 0 )
  {
    sub_1BD3458(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_4B37457 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaStoryAdjustMaster___c_TypeInfo->static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v2;
  sub_1BD33FC(
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
    sub_1BD36B4(this, a);
  return a->fields.idx - b->fields.idx;
}