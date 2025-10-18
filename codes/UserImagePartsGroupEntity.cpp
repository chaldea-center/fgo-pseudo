void UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E97 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C43E97 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


void UserImagePartsGroupEntity__ConcatImageValues(
        UserImagePartsGroupEntity_o *this,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ImageValue; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C43E95 & 1) == 0 )
  {
    sub_1C37058(&Method_System_String_Join_int___);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    byte_4C43E95 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0) )
  {
    v6 = *defaultName;
    v7 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16109/*"_"*/,
           ImageValue,
           (const MethodInfo_3192EDC *)Method_System_String_Join_int___);
    v8 = System_String__Concat_63599904(v6, (System_String_o *)StringLiteral_16109/*"_"*/, v7, 0);
    *defaultName = v8;
    sub_1C36FFC((CGThumbnailListItem_o *)defaultName, (int32_t)v8, v9, v10);
  }
}


bool UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4C43E96 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C43E96 = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
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
  ImagePartsGroupMaster_o *Master_object; // x0
  struct System_Int32_array *idxs; // x8
  ImagePartsGroupMaster_o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  struct System_Int32_array *v7; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_int__o *v17; // x19
  UserImagePartsGroupEntity___c_c *v18; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v20; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  int32_t monitor_high; // w1
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C43E94 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_ImagePartsGroupEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
    sub_1C37058(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__);
    sub_1C37058(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4C43E94 = 1;
  }
  entity = 0;
  memset(&v31, 0, sizeof(v31));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v5 = Master_object;
  if ( !idxs->max_length )
    goto LABEL_37;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v7 = this->fields.idxs;
  if ( !v7 )
    goto LABEL_41;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C372BC(Master_object);
      if ( !v5 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v5,
                                                   &entity,
                                                   this->fields.id,
                                                   v7->m_Items[v9],
                                                   0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (ImagePartsGroupMaster_o *)entity;
        if ( !entity )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return ImagePartsGroupMaster__GetDefaultImageValues(v5, this->fields.id, 0);
        if ( !v6 )
          break;
        v12 = (Il2CppObject *)entity;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v12,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v12;
          sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
        }
      }
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_41:
    sub_1C372B4(Master_object);
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_41;
  if ( v6->fields._size >= 1 )
  {
    v17 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v17,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    v18 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v18 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v18->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v20, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v22, v23);
    }
    System_Collections_Generic_List_object___Sort_58346216(
      v6,
      _9__3_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      v6,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v24 )
        break;
      if ( !v31.fields._current )
        sub_1C372B4(v24);
      if ( !v17 )
        sub_1C372B4(v24);
      monitor_high = HIDWORD(v31.fields._current[1].monitor);
      v26 = v17->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !v26 )
        sub_1C372B4(v24);
      v28 = v17->fields._size;
      if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          monitor_high,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = v28 + 1;
        v26->m_Items[v28] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v5 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v5, this->fields.id, 0);
  }
  return v17;
}


void UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43E98 & 1) == 0 )
  {
    sub_1C37058(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4C43E98 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return a->fields.typeValue - b->fields.typeValue;
}