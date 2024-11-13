void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method, v2);
    byte_4B16AD0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    473,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  __int64 v35; // x3
  int32_t v36; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v38; // x23
  __int64 methodPtr_low; // x10
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  ServantProfilePushMaster___c_c *v48; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v50; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  ServantProfilePushMaster___c_c *v62; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v65; // x21
  struct ServantProfilePushMaster___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0

  if ( (byte_4B16ACF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_ServantProfilePushEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantProfilePushEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v22, v23);
    sub_1BCA7E0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v24, v25);
    sub_1BCA7E0(&ServantProfilePushMaster___c_TypeInfo, v26, v27);
    byte_4B16ACF = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v36,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v38 = Item;
        methodPtr_low = LOBYTE(ServantProfilePushEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   method);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v33 )
              break;
            items = v33->fields._items;
            v45 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              break;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                v38,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v38;
              sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v38, v34, v35, v40, v41, v42, v43);
            }
          }
        }
      }
      if ( Count == ++v36 )
        goto LABEL_17;
    }
LABEL_30:
    sub_1BCAA3C(list, method);
  }
LABEL_17:
  v48 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo, method);
    v48 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v48->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48, method);
      v48 = ServantProfilePushMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantProfilePushEntity__int__TypeInfo,
                                              method,
                                              v34,
                                              v35);
    System_Func_object__int____ctor(
      _9__0_0,
      v50,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      0LL);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v62 = ServantProfilePushMaster___c_TypeInfo;
  v63 = v58;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo, v59);
    v62 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v62->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v59);
      v62 = ServantProfilePushMaster___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantProfilePushEntity__int__TypeInfo,
                                              v59,
                                              v60,
                                              v61);
    System_Func_object__int____ctor(
      _9__0_1,
      v65,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      0LL);
    v66 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v66->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__0_1, (int64_t)_9__0_1, v67, v68, v69, v70, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v63,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v73,
                                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16AD1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&idx);
    byte_4B16AD1 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantProfilePushMaster__TryGetEntity(
        ServantProfilePushMaster_o *this,
        ServantProfilePushEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16AD2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16AD2 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16AD3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfilePushMaster___c_TypeInfo, v1, v2);
    byte_4B16AD3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantProfilePushMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantProfilePushMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantProfilePushMaster___c___ctor(ServantProfilePushMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_0(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.idx;
}