void UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D77A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D77A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2D778 & 1) == 0 )
  {
    sub_1C94098(&Method_System_String_Join_int___);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    byte_4D2D778 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0) )
  {
    v6 = *defaultName;
    v7 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16163/*"_"*/,
           ImageValue,
           (const MethodInfo_32487F4 *)Method_System_String_Join_int___);
    v8 = System_String__Concat_64456008(v6, (System_String_o *)StringLiteral_16163/*"_"*/, v7, 0);
    *defaultName = v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)defaultName, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


bool UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4D2D779 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2D779 = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
  struct System_Int32_array *v8; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_int__o *v21; // x19
  UserImagePartsGroupEntity___c_c *v22; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v24; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4D2D777 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_ImagePartsGroupEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
    sub_1C94098(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__);
    sub_1C94098(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4D2D777 = 1;
  }
  entity = 0;
  memset(&v40, 0, sizeof(v40));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v6 = Master_object;
  if ( !idxs->max_length )
    goto LABEL_37;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v8 = this->fields.idxs;
  if ( !v8 )
    goto LABEL_41;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C942F8(Master_object);
      if ( !v6 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v6,
                                                   &entity,
                                                   this->fields.id,
                                                   v8->m_Items[v10],
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
        v18 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v4,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v4;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v4, v11, v12, v13, v14, v15, v16);
        }
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_41:
    sub_1C942F0(Master_object, v4);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_41;
  if ( v7->fields._size >= 1 )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    v22 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v22 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v22->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v24, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
        (int32_t)_9__3_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    System_Collections_Generic_List_object___Sort_59164920(
      v7,
      _9__3_0,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      v7,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v40 = v39;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v40,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v32 )
        break;
      if ( !v40.fields._current )
        sub_1C942F0(v32, v33);
      if ( !v21 )
        sub_1C942F0(v32, v33);
      monitor_high = HIDWORD(v40.fields._current[1].monitor);
      v35 = v21->fields._items;
      v36 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !v35 )
        sub_1C942F0(v32, monitor_high);
      v37 = v21->fields._size;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          monitor_high,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v37 + 1;
        v35->m_Items[v37] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v40,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v6 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v6, this->fields.id, 0);
  }
  return v21;
}


void UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D77B & 1) == 0 )
  {
    sub_1C94098(&UserImagePartsGroupEntity___c_TypeInfo);
    byte_4D2D77B = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}