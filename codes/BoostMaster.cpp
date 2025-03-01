void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD42B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_4BFD42B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    322,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v11; // w21
  int32_t v12; // w22
  Il2CppObject *v13; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BFD429 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v7);
    byte_4BFD429 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v13 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v9);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v13,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v13;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2E388(list, v9);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v8,
                                (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w23
  Il2CppObject *v15; // x22
  int32_t i; // w24
  Il2CppObject *v17; // x29
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4BFD42A & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__,
      *(_QWORD *)&RecommendedBoostId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v10);
    byte_4BFD42A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_21:
    if ( v11 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_22:
    sub_1C2E388(list, v12);
  }
  v14 = (int)list;
  v15 = 0LL;
  for ( i = 0; i != v14; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    v17 = v15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    if ( list )
    {
      v15 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == RecommendedBoostId )
        continue;
      if ( !v11 )
        goto LABEL_22;
      items = v11->fields._items;
      v25 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_22;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v15;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
      }
    }
    v15 = v17;
  }
  if ( !v15 )
    goto LABEL_21;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v28 )
    goto LABEL_22;
  v35 = v28->fields._items;
  v36 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v28->fields._version;
  if ( !v35 )
    goto LABEL_22;
  v37 = v28->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v15,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v28->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v15;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v15, v29, v30, v31, v32, v33, v34);
  }
  System_Collections_Generic_List_object___AddRange(
    v28,
    (System_Collections_Generic_IEnumerable_T__o *)v11,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v11 = v28;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}