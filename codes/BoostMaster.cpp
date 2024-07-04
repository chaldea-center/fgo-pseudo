void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E250F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_48E250F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  Il2CppObject *v14; // x23
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E2510 & 1) == 0 )
  {
    sub_1B00CCC(&BoostEntity_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v8);
    byte_48E2510 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod(
                                                                     (BoostEntity_o *)list,
                                                                     v10);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v19 = Method_System_Collections_Generic_List_BoostEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v14,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v14;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
            }
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B00F28(list, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v15; // w23
  Il2CppObject *v16; // x25
  int32_t i; // w24
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_48E2511 & 1) == 0 )
  {
    sub_1B00CCC(&BoostEntity_TypeInfo, *(_QWORD *)&RecommendedBoostId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_48E2511 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v12 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_25:
    sub_1B00F28(list, v13);
  }
  v15 = (int)list;
  v16 = 0LL;
  for ( i = 0; i != v15; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    v18 = v16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_10;
    v16 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostEntity_TypeInfo )
    {
      goto LABEL_10;
    }
    if ( LODWORD(list->fields.items) != RecommendedBoostId )
    {
      if ( !v12 )
        goto LABEL_25;
      items = v12->fields._items;
      v23 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)list,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v16;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v19, v20);
      }
LABEL_10:
      v16 = v18;
      continue;
    }
  }
  if ( !v16 )
    goto LABEL_24;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v26 )
    goto LABEL_25;
  v29 = v26->fields._items;
  v30 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v26->fields._version;
  if ( !v29 )
    goto LABEL_25;
  v31 = v26->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v16,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v26->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v16;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v16, v27, v28);
  }
  System_Collections_Generic_List_object___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v12 = v26;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v12,
                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}