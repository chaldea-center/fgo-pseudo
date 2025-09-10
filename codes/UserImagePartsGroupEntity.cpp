void UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2819B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C2819B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4C28199 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_String_Join_int___);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C28199 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0) )
  {
    v6 = *defaultName;
    v7 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16105/*"_"*/,
           ImageValue,
           (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
    v8 = System_String__Concat_63496112(v6, (System_String_o *)StringLiteral_16105/*"_"*/, v7, 0);
    *defaultName = v8;
    sub_1C2D434((CGThumbnailListItem_o *)defaultName, (int32_t)v8, v9, v10);
  }
}


bool UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4C2819A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C2819A = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
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
  Il2CppObject *v4; // x1
  struct System_Int32_array *idxs; // x8
  ImagePartsGroupMaster_o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x2
  struct System_Int32_array *v9; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_int__o *v18; // x19
  UserImagePartsGroupEntity___c_c *v19; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v21; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C28198 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_ImagePartsGroupEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
    sub_1C2D490(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__);
    sub_1C2D490(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4C28198 = 1;
  }
  entity = 0;
  memset(&v33, 0, sizeof(v33));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v6 = Master_object;
  if ( !idxs->max_length )
    goto LABEL_37;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v9 = this->fields.idxs;
  if ( !v9 )
    goto LABEL_41;
  max_length = v9->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v4, v8);
      if ( !v6 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v6,
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
          return ImagePartsGroupMaster__GetDefaultImageValues(v6, this->fields.id, 0);
        if ( !v7 )
          break;
        v4 = (Il2CppObject *)entity;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v4,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v4;
          sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v4, v12, v13);
        }
      }
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_41:
    sub_1C2D6EC(Master_object, v4);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_41;
  if ( v7->fields._size >= 1 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    v19 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v19 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v19->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v21, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v23, v24);
    }
    System_Collections_Generic_List_object___Sort_58242632(
      v7,
      _9__3_0,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      v7,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v25 )
        break;
      if ( !v33.fields._current )
        sub_1C2D6EC(v25, v26);
      if ( !v18 )
        sub_1C2D6EC(v25, v26);
      monitor_high = HIDWORD(v33.fields._current[1].monitor);
      v28 = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++v18->fields._version;
      if ( !v28 )
        sub_1C2D6EC(v25, monitor_high);
      v30 = v18->fields._size;
      if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v18,
          monitor_high,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = v30 + 1;
        v28->m_Items[v30] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v6 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v6, this->fields.id, 0);
  }
  return v18;
}


void UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2819C & 1) == 0 )
  {
    sub_1C2D490(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4C2819C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}