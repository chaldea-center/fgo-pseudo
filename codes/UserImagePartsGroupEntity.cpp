void __fastcall UserImagePartsGroupEntity___ctor(UserImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B458ED & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B458ED = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4B458EB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_String_Join_int___, defaultName);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v5);
    byte_4B458EB = 1;
  }
  ImageValue = (System_Collections_Generic_IEnumerable_T__o *)UserImagePartsGroupEntity__GetImageValue(
                                                                this,
                                                                (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ImageValue, 0LL) )
  {
    v7 = *defaultName;
    v8 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16088/*"_"*/,
           ImageValue,
           (const MethodInfo_30DC2A4 *)Method_System_String_Join_int___);
    v9 = System_String__Concat_62610508(v7, (System_String_o *)StringLiteral_16088/*"_"*/, v8, 0LL);
    *defaultName = v9;
    sub_1BDB81C((CGThumbnailListItem_o *)defaultName, (int32_t)v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4B458EC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&index);
    byte_4B458EC = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v24; // x2
  struct System_Int32_array *v25; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_int__o *v34; // x19
  UserImagePartsGroupEntity___c_c *v35; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v37; // x22
  struct UserImagePartsGroupEntity___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  _BOOL8 v41; // x0
  __int64 v42; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-60h] BYREF
  ImagePartsGroupEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B458EA & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_ImagePartsGroupEntity__TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ImagePartsGroupEntity__get_Count__, v14);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo, v16);
    sub_1BDB878(&Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, v17);
    sub_1BDB878(&UserImagePartsGroupEntity___c_TypeInfo, v18);
    byte_4B458EA = 1;
  }
  entity = 0LL;
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  idxs = this->fields.idxs;
  if ( !idxs )
    goto LABEL_41;
  v22 = Master_object;
  if ( !*(_QWORD *)&idxs->max_length )
    goto LABEL_37;
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ImagePartsGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity___ctor__);
  v25 = this->fields.idxs;
  if ( !v25 )
    goto LABEL_41;
  v26 = *(_QWORD *)&v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        sub_1BDBADC(Master_object, v20, v24);
      if ( !v22 )
        break;
      Master_object = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                                   v22,
                                                   &entity,
                                                   this->fields.id,
                                                   v25->m_Items[v27 + 1],
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
        v31 = Method_System_Collections_Generic_List_ImagePartsGroupEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            v20,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v20, v28, v29);
        }
      }
      LODWORD(v26) = v25->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_21;
    }
LABEL_41:
    sub_1BDBAD4(Master_object, v20);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_41;
  if ( v23->fields._size >= 1 )
  {
    v34 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v34,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    v35 = UserImagePartsGroupEntity___c_TypeInfo;
    if ( !UserImagePartsGroupEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserImagePartsGroupEntity___c_TypeInfo);
      v35 = UserImagePartsGroupEntity___c_TypeInfo;
    }
    _9__3_0 = (System_Comparison_T__o *)v35->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = UserImagePartsGroupEntity___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_ImagePartsGroupEntity__TypeInfo);
      System_Comparison_object____ctor(_9__3_0, v37, Method_UserImagePartsGroupEntity___c__GetImageValue_b__3_0__, 0LL);
      static_fields = UserImagePartsGroupEntity___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_ImagePartsGroupEntity__o *)_9__3_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v39, v40);
    }
    System_Collections_Generic_List_object___Sort_57505928(
      v23,
      _9__3_0,
      (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      v23,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ImagePartsGroupEntity__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__MoveNext__);
      if ( !v41 )
        break;
      if ( !v49.fields._current )
        sub_1BDBAD4(v41, v42);
      if ( !v34 )
        sub_1BDBAD4(v41, v42);
      monitor_high = HIDWORD(v49.fields._current[1].monitor);
      v44 = v34->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v34->fields._version;
      if ( !v44 )
        sub_1BDBAD4(v41, monitor_high);
      v46 = v34->fields._size;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v34,
          monitor_high,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v34->fields._size = v46 + 1;
        v44->m_Items[v46 + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ImagePartsGroupEntity__Dispose__);
  }
  else
  {
LABEL_37:
    if ( !v22 )
      goto LABEL_41;
    return ImagePartsGroupMaster__GetDefaultImageValues(v22, this->fields.id, 0LL);
  }
  return v34;
}


void __fastcall UserImagePartsGroupEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B458EE & 1) == 0 )
  {
    sub_1BDB878(&UserImagePartsGroupEntity___c_TypeInfo, v1);
    byte_4B458EE = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(UserImagePartsGroupEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserImagePartsGroupEntity___c_TypeInfo->static_fields->__9 = (struct UserImagePartsGroupEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)UserImagePartsGroupEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, a);
  return a->fields.typeValue - b->fields.typeValue;
}