void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method, v2);
    byte_4B15EE7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v20; // w21
  int32_t v21; // w22
  Il2CppObject *v22; // x23
  __int64 methodPtr_low; // x10
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B15EE5 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BoostEntity__TypeInfo, v15, v16);
    byte_4B15EE5 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v20 = (int)list;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoostEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod(
                                                                     (BoostEntity_o *)list,
                                                                     v18);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v31 = Method_System_Collections_Generic_List_BoostEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v22,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v22;
              sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v18);
  }
LABEL_17:
  if ( !v17 )
    goto LABEL_19;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v17,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v23; // w23
  Il2CppObject *v24; // x25
  int32_t i; // w24
  Il2CppObject *v26; // x22
  int64_t v27; // x2
  __int64 v28; // x3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4B15EE6 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostEntity_TypeInfo, *(_QWORD *)&RecommendedBoostId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BoostEntity__TypeInfo, v18, v19);
    byte_4B15EE6 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       *(_QWORD *)&RecommendedBoostId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_24:
    if ( v20 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_25:
    sub_1BCAA3C(list, v21);
  }
  v23 = (int)list;
  v24 = 0LL;
  for ( i = 0; i != v23; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    v26 = v24;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_10;
    v24 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(BoostEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BoostEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostEntity_TypeInfo )
    {
      goto LABEL_10;
    }
    if ( LODWORD(list->fields.items) != RecommendedBoostId )
    {
      if ( !v20 )
        goto LABEL_25;
      items = v20->fields._items;
      v35 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v24;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v24, v27, v28, v29, v30, v31, v32);
      }
LABEL_10:
      v24 = v26;
      continue;
    }
  }
  if ( !v24 )
    goto LABEL_24;
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       v21,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v38 )
    goto LABEL_25;
  v45 = v38->fields._items;
  v46 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v38->fields._version;
  if ( !v45 )
    goto LABEL_25;
  v47 = v38->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v38,
      v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v38->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v24, v39, v40, v41, v42, v43, v44);
  }
  System_Collections_Generic_List_object___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v20 = v38;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v20,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}