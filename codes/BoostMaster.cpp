void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE59 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_4A5AE59 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  Il2CppObject *v8; // x23
  __int64 methodPtr_low; // x10
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5AE5A & 1) == 0 )
  {
    sub_1B885B0(&BoostEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4A5AE5A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v4);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v3 )
              break;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_BoostEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v15[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
            }
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w23
  Il2CppObject *v9; // x25
  int32_t i; // w24
  Il2CppObject *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A5AE5B & 1) == 0 )
  {
    sub_1B885B0(&BoostEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4A5AE5B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v5 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_25:
    sub_1B8880C(list, v6);
  }
  v8 = (int)list;
  v9 = 0LL;
  for ( i = 0; i != v8; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    v11 = v9;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_10;
    v9 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostEntity_TypeInfo )
    {
      goto LABEL_10;
    }
    if ( LODWORD(list->fields.items) != RecommendedBoostId )
    {
      if ( !v5 )
        goto LABEL_25;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v9;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v9, v12, v13);
      }
LABEL_10:
      v9 = v11;
      continue;
    }
  }
  if ( !v9 )
    goto LABEL_24;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v19 )
    goto LABEL_25;
  v22 = v19->fields._items;
  v23 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v19->fields._version;
  if ( !v22 )
    goto LABEL_25;
  v24 = v19->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v19->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v9, v20, v21);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v5 = v19;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}