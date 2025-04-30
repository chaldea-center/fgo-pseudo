void __fastcall UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F2EB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_int___ctor__, method);
    byte_4A4F2EB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3211D9C *)Method_DataEntityBase_int___ctor__);
}


void __fastcall UserImagePartsGroupEntity__ConcatImageValues(
        UserImagePartsGroupEntity_o *this,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *ImageValue; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4F2E9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_String_Join_int___, defaultName);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v5);
    byte_4A4F2E9 = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0LL) )
  {
    v7 = *defaultName;
    v8 = System_String__Join_int_(
           (System_String_o *)StringLiteral_15886/*"_"*/,
           ImageValue,
           (const MethodInfo_3013FB8 *)Method_System_String_Join_int___);
    v9 = System_String__Concat_61683424(v7, (System_String_o *)StringLiteral_15886/*"_"*/, v8, 0LL);
    *defaultName = v9;
    sub_1B8635C((CGThumbnailListItem_o *)defaultName, (int32_t)v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4A4F2EA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&index);
    byte_4A4F2EA = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)idxs;
}


int32_t __fastcall UserImagePartsGroupEntity__CreatePrimaryKey(
        UserImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


System_Collections_Generic_List_int__o *__fastcall UserImagePartsGroupEntity__GetImageValue(
        UserImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  ImagePartsGroupMaster_o *Master_object; // x0
  Il2CppObject *v20; // x1
  struct System_Int32_array *idxs; // x8
  ImagePartsGroupMaster_o *v22; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  struct System_Int32_array *v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_int__o *v33; // x19
  UserImagePartsGroupEntity___c_c *v34; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v36; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A4F2E8 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_ImagePartsGroupEntity__TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__, v14);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo, v16);
    sub_1B863B8(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, v17);
    sub_1B863B8(&UserImagePartsGroupEntity___c_TypeInfo, v18);
    byte_4A4F2E8 = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v22 = Master_object;
  if ( !*(_QWORD *)&idxs->max_length )
    goto LABEL_37;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v24 = this->fields.idxs;
  if ( !v24 )
    goto LABEL_41;
  v25 = *(_QWORD *)&v24->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        sub_1B8661C(Master_object, v20);
      if ( !v22 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v22,
                                                   &entity,
                                                   this->fields.id,
                                                   v24->m_Items[v26 + 1],
                                                   0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (ImagePartsGroupMaster_o *)entity;
        if ( !entity )
          break;
        Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, 0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return ImagePartsGroupMaster__GetDefaultImageValues(v22, this->fields.id, 0LL);
        if ( !v23 )
          break;
        v20 = (Il2CppObject *)entity;
        items = v23->fields._items;
        v30 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            v20,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1B8635C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v20, v27, v28);
        }
      }
      LODWORD(v25) = v24->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_21;
    }
LABEL_41:
    sub_1B86614(Master_object, v20);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_41;
  if ( v23->fields._size >= 1 )
  {
    v33 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v34 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v34 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v34->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v36, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0LL);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v38, v39);
    }
    System_Collections_Generic_List_object___Sort_56615964(
      v23,
      _9__3_0,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      v23,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v48 = v47;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v40 )
        break;
      if ( !v48.fields._current )
        sub_1B86614(v40, v41);
      if ( !v33 )
        sub_1B86614(v40, v41);
      monitor_high = HIDWORD(v48.fields._current[1].monitor);
      v43 = v33->fields._items;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++v33->fields._version;
      if ( !v43 )
        sub_1B86614(v40, monitor_high);
      v45 = v33->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v33,
          monitor_high,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v33->fields._size = v45 + 1;
        v43->m_Items[v45 + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v22 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v22, this->fields.id, 0LL);
  }
  return v33;
}


void __fastcall UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F2EC & 1) == 0 )
  {
    sub_1B863B8(&UserImagePartsGroupEntity___c_TypeInfo, v1);
    byte_4A4F2EC = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserImagePartsGroupEntity___c___ctor(UserImagePartsGroupEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserImagePartsGroupEntity___c___GetImageValue_b__3_0(
        UserImagePartsGroupEntity___c_o *this,
        ImagePartsGroupEntity_o *a,
        ImagePartsGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}