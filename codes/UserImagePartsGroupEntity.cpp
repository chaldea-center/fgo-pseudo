void UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59395E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59395E5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


void UserImagePartsGroupEntity__ConcatImageValues(
        UserImagePartsGroupEntity_o *this,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ImageValue; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59395E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_59395E3 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0) )
  {
    v6 = *defaultName;
    v7 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16714/*"_"*/,
           ImageValue,
           (const MethodInfo_3957568 *)Method_System_String_Join_int___);
    v8 = System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_16714/*"_"*/, v7, 0);
    *defaultName = v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)defaultName, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


bool UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_59395E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_59395E4 = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)idxs;
}


int32_t UserImagePartsGroupEntity__CreatePrimaryKey(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Collections_Generic_List_int__o *UserImagePartsGroupEntity__GetImageValue(
        UserImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  ImagePartsGroupMaster_o *Master_object; // x0
  Il2CppObject *v5; // x1
  struct System_Int32_array *idxs; // x8
  ImagePartsGroupMaster_o *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  struct System_Int32_array *v9; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_int__o *v22; // x19
  __int64 v23; // x1
  UserImagePartsGroupEntity___c_c *v24; // x0
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v27; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  _BOOL8 v35; // x0
  __int64 v36; // x1
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+10h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_59395E2 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ImagePartsGroupEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
    sub_21FFC50(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__);
    sub_21FFC50(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_59395E2 = 1;
  }
  entity = 0;
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v41, 0, sizeof(v41));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_43;
  v7 = Master_object;
  if ( idxs->max_length )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
    v9 = this->fields.idxs;
    if ( !v9 )
      goto LABEL_43;
    max_length = v9->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          sub_21FFED4(Master_object);
        if ( !v7 )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                     v7,
                                                     &entity,
                                                     this->fields.id,
                                                     v9->m_Items[v11],
                                                     0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ImagePartsGroupMaster_o *)entity;
          if ( !entity )
            break;
          Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, 0);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            return ImagePartsGroupMaster__GetDefaultImageValues(v7, this->fields.id, 0);
          if ( !v8 )
            break;
          items = v8->fields._items;
          v5 = (Il2CppObject *)entity;
          v19 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v5,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v5, v12, v13, v14, v15, v16, v17);
          }
        }
        LODWORD(max_length) = v9->max_length;
        if ( (__int64)++v11 >= (int)max_length )
          goto LABEL_21;
      }
LABEL_43:
      sub_21FFECC(Master_object, v5);
    }
LABEL_21:
    if ( !v8 )
      goto LABEL_43;
    if ( v8->fields._size < 1 )
    {
      if ( !v7 )
        goto LABEL_43;
      return ImagePartsGroupMaster__GetDefaultImageValues(v7, this->fields.id, 0);
    }
    else
    {
      v22 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v22,
        (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
      v24 = UserImagePartsGroupEntity___c_TypeInfo;
      if ( !*(&UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo, v23);
        v24 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v23);
          static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ImagePartsGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__3_0, v27, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0);
        v28 = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
        v28->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__3_0, (int32_t)_9__3_0, v29, v30, v31, v32, v33, v34);
      }
      System_Collections_Generic_List_object___Sort_71636404(
        v8,
        _9__3_0,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        v8,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
        if ( !v35 )
          break;
        if ( !v41.fields._current )
          sub_21FFECC(v35, v36);
        if ( !v22
          || (v37 = v22->fields._items,
              v36 = *(unsigned int *)((char *)&v41.fields._current->klass + (unsigned __int64)off_18 + 4),
              v38 = Method_System_Collections_Generic_List_int__Add__,
              ++v22->fields._version,
              !v37) )
        {
          sub_21FFECC(v35, v36);
        }
        v39 = v22->fields._size;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v22,
            v36,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v22->fields._size = v39 + 1;
          v37->m_Items[v39] = v36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
    }
    return v22;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_43;
    return ImagePartsGroupMaster__GetDefaultImageValues(Master_object, this->fields.id, 0);
  }
}


void UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59395E6 & 1) == 0 )
  {
    sub_21FFC50(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_59395E6 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserImagePartsGroupEntity___c___ctor(UserImagePartsGroupEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserImagePartsGroupEntity___c___GetImageValue_b__3_0(
        UserImagePartsGroupEntity___c_o *this,
        ImagePartsGroupEntity_o *a,
        ImagePartsGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}