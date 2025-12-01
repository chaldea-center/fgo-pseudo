void ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7E14 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
    byte_4CC7E14 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    479,
    (const MethodInfo_340B614 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  ServantProfilePushMaster___c_c *v19; // x0
  System_Func_object__int__o *_9__0_0; // x19
  Il2CppObject *v21; // x21
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  ServantProfilePushMaster___c_c *v30; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v33; // x21
  struct ServantProfilePushMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_4CC7E13 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
    sub_1C713B0(&System_Func_ServantProfilePushEntity__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
    sub_1C713B0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__);
    sub_1C713B0(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__);
    sub_1C713B0(&ServantProfilePushMaster___c_TypeInfo);
    byte_4CC7E13 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v6,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantProfilePushEntity__get_Item__);
      if ( Item )
      {
        v8 = Item;
        list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)ServantProfilePushEntity__TimeCheck(
                                                                                          (ServantProfilePushEntity_o *)Item,
                                                                                          method);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v8,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_15;
    }
LABEL_28:
    sub_1C71608(list, method);
  }
LABEL_15:
  v19 = ServantProfilePushMaster___c_TypeInfo;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v19 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v19->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantProfilePushMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v21, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, 0);
    static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v30 = ServantProfilePushMaster___c_TypeInfo;
  v31 = v29;
  if ( !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v30 = ServantProfilePushMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v30->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ServantProfilePushMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v33, Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, 0);
    v34 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v34->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v34->__9__0_1, (int32_t)_9__0_1, v35, v36, v37, v38, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_318A150 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v41,
                                             (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7E15 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
    byte_4CC7E15 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_340D938 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantProfilePushMaster__TryGetEntity(
        ServantProfilePushMaster_o *this,
        ServantProfilePushEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7E16 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
    byte_4CC7E16 = 1;
  }
  PK = (Il2CppObject *)ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7E17 & 1) == 0 )
  {
    sub_1C713B0(&ServantProfilePushMaster___c_TypeInfo);
    byte_4CC7E17 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantProfilePushMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantProfilePushMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantProfilePushMaster___c___ctor(ServantProfilePushMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantProfilePushMaster___c___GetAvaiableEntities_b__0_0(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return a->fields.priority;
}


int32_t ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return a->fields.idx;
}