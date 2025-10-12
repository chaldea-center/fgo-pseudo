void ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37E1C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
    byte_4C37E1C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
}


void ImagePartsGroupMaster__ConcatDefaultImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *DefaultImageValues; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C37E18 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C37E18 = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0) )
  {
    v8 = *defaultName;
    v9 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16107/*"_"*/,
           DefaultImageValues,
           (const MethodInfo_3188674 *)Method_System_String_Join_int___);
    v10 = System_String__Concat_63556792(v8, (System_String_o *)StringLiteral_16107/*"_"*/, v9, 0);
    *defaultName = v10;
    sub_1C32BC4((CGThumbnailListItem_o *)defaultName, (int32_t)v10, v11, v12);
  }
}


void ImagePartsGroupMaster__ConcatImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_Int32_array *idxs,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  ImagePartsGroupMaster_o *v8; // x21
  System_Collections_Generic_List_int__o *v9; // x23
  const MethodInfo *v10; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x24
  const MethodInfo *v13; // x1
  int32_t imageValue; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4C37E1B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    this = (ImagePartsGroupMaster_o *)sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C37E1B = 1;
  }
  entity = 0;
  if ( !idxs )
LABEL_21:
    sub_1C32E7C(this);
  if ( !idxs->max_length )
    goto LABEL_19;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = idxs->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C32E84(this);
      this = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(v8, &entity, id, idxs->m_Items[v12], v10);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ImagePartsGroupMaster_o *)entity;
        if ( !entity )
          goto LABEL_21;
        this = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, v13);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_19;
        if ( !entity )
          goto LABEL_21;
        if ( !v9 )
          goto LABEL_21;
        imageValue = entity->fields.imageValue;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            imageValue,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = imageValue;
        }
      }
      LODWORD(max_length) = idxs->max_length;
    }
    while ( (__int64)++v12 < (int)max_length );
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
  {
    v18 = *defaultName;
    v19 = System_String__Join_int_(
            (System_String_o *)StringLiteral_16107/*"_"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_3188674 *)Method_System_String_Join_int___);
    v20 = System_String__Concat_63556792(v18, (System_String_o *)StringLiteral_16107/*"_"*/, v19, 0);
    *defaultName = v20;
    sub_1C32BC4((CGThumbnailListItem_o *)defaultName, (int32_t)v20, v21, v22);
  }
  else
  {
LABEL_19:
    ImagePartsGroupMaster__ConcatDefaultImageValues(v8, id, defaultName, (const MethodInfo *)defaultName);
  }
}


void ImagePartsGroupMaster__ConcatMaterialImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *Entities; // x23
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x22
  ImagePartsGroupMaster___c_c *v10; // x0
  System_Func_object__int__o *_9__2_0; // x24
  Il2CppObject *v12; // x25
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v16; // x0
  ImagePartsGroupMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x23
  System_Func_object__int__o *_9__2_1; // x24
  Il2CppObject *v20; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x23
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x23
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x24
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x24
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  ImagePartsGroupEntity_o *v54; // x0
  const MethodInfo *v55; // x1
  ImagePartsGroupEntity_o *v56; // x25
  const MethodInfo *v57; // x2
  _BOOL8 IsOpen_42247840; // x0
  int32_t imageValue; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  System_String_o *v71; // x23
  System_String_o *v72; // x0
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  int32_t v75; // w2
  ImagePartsGroupMaster_o *v76; // [xsp+28h] [xbp-68h]

  if ( (byte_4C37E17 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C32C20(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__);
    sub_1C32C20(&ImagePartsGroupMaster___c_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C37E17 = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    goto LABEL_88;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v76 = this;
  v10 = ImagePartsGroupMaster___c_TypeInfo;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v10 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v10->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v12,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
  v17 = ImagePartsGroupMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v17 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v17->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v20,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0);
    v21 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v21->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v21->__9__2_1, (int32_t)_9__2_1, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderBy_object__int_(
          v18,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v24 )
    sub_1C32E7C(0);
  klass = v24->klass;
  v26 = v24;
  v27 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_21;
    }
    v29 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v29 = sub_1C83438(v24, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v30 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_28:
      v34 = sub_1C83438(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v37 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_35:
      v38 = sub_1C83438(v30, System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    v40 = v39;
    if ( !v39 )
      sub_1C32E7C(0);
    v41 = *(_QWORD *)v39;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_42;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_42:
      v44 = sub_1C83438(v39, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v46 = *(_QWORD *)v45;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_49;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_49:
        v49 = sub_1C83438(v45, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v50 = *(_QWORD *)v45;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v52 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_56;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_56:
        v53 = sub_1C83438(v45, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0);
      }
      v54 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
      v56 = v54;
      if ( !v54 )
        sub_1C32E7C(0);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v54, v55) )
      {
        IsOpen_42247840 = ImagePartsGroupEntity__IsOpen_42247840(v56, 1, v57);
        if ( IsOpen_42247840 )
        {
          if ( !v9 )
            sub_1C32E7C(IsOpen_42247840);
          imageValue = v56->fields.imageValue;
          items = v9->fields._items;
          v61 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C32E7C(IsOpen_42247840);
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              imageValue,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = imageValue;
          }
          break;
        }
      }
    }
    v63 = *(_QWORD *)v45;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_70;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_70:
      v66 = sub_1C83438(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v45, *(_QWORD *)(v66 + 8));
  }
  v67 = *(_QWORD *)v30;
  v68 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_81;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_81:
    v70 = sub_1C83438(v30, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v70)(v30, *(_QWORD *)(v70 + 8));
  this = v76;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
    goto LABEL_88;
  v71 = *defaultName;
  v72 = System_String__Join_int_(
          (System_String_o *)StringLiteral_16107/*"_"*/,
          (System_Collections_Generic_IEnumerable_T__o *)v9,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  v73 = System_String__Concat_63556792(v71, (System_String_o *)StringLiteral_16107/*"_"*/, v72, 0);
  v74 = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v73, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v74, 0) )
  {
LABEL_88:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v8);
  }
  else
  {
    *defaultName = v73;
    sub_1C32BC4((CGThumbnailListItem_o *)defaultName, (int32_t)v73, v75, v8);
  }
}


System_Collections_Generic_List_int__o *ImagePartsGroupMaster__GetDefaultImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  ImagePartsGroupMaster___c_c *v7; // x0
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v9; // x22
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v13; // x0
  ImagePartsGroupMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v17; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x20
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  ImagePartsGroupMaster___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_object__bool__o *_9__4_2; // x22
  Il2CppObject *v40; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  ImagePartsGroupMaster___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v48; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0

  if ( (byte_4C37E19 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__);
    sub_1C32C20(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C37E19 = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v6 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0) )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    v7 = ImagePartsGroupMaster___c_TypeInfo;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v7 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__int__o *)v7->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__4_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__4_0, v9, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, 0);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    v14 = ImagePartsGroupMaster___c_TypeInfo;
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v14 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_1 = (System_Func_object__int__o *)v14->static_fields->__9__4_1;
    if ( !_9__4_1 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__4_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__4_1, v17, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, 0);
      v18 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v18->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v18->__9__4_1, (int32_t)_9__4_1, v19, v20);
    }
    v21 = System_Linq_Enumerable__OrderBy_object__int_(
            v15,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v21 )
      sub_1C32E7C(0);
    klass = v21->klass;
    v23 = v21;
    v24 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_21;
      }
      v26 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_21:
      v26 = sub_1C83438(v21, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v26)(
            v23,
            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v28 = *(_QWORD *)v27;
      v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_28;
        }
        v31 = v28 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_28:
        v31 = sub_1C83438(v27, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
        break;
      v32 = *(_QWORD *)v27;
      v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v34 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_35;
        }
        v35 = v32 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_35:
        v35 = sub_1C83438(
                v27,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
      v37 = ImagePartsGroupMaster___c_TypeInfo;
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v37 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__bool__o *)v37->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v40,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0);
        v41 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v41->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v41->__9__4_2, (int32_t)_9__4_2, v42, v43);
      }
      v44 = System_Linq_Enumerable__Where_object_(
              v38,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v45 = ImagePartsGroupMaster___c_TypeInfo;
      v46 = v44;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v45 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_3 = (System_Func_object__int__o *)v45->static_fields->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v48,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0);
        v49 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v49->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v49->__9__4_3, (int32_t)_9__4_3, v50, v51);
      }
      v52 = System_Linq_Enumerable__Min_object_(
              v46,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_310C4A4 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v6 )
        sub_1C32E7C(v52);
      items = v6->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C32E7C(v52);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v52,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v52;
      }
    }
    v56 = *(_QWORD *)v27;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_58;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_58:
      v59 = sub_1C83438(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v27, *(_QWORD *)(v59 + 8));
  }
  return v6;
}


ImagePartsGroupEntity_o *ImagePartsGroupMaster__GetDispDialogEntityFromQuestId(
        ImagePartsGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C37E1A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__);
    sub_1C32C20(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
    byte_4C37E1A = 1;
  }
  v5 = sub_1C32E6C(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = questId;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v8,
                                      (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
}


ImagePartsGroupEntity_array *ImagePartsGroupMaster__GetEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C37E15 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_1C32C20(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C37E15 = 1;
  }
  v5 = sub_1C32E6C(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = id;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v9,
                                          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37E1D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
    byte_4C37E1D = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_339B2F0 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
}


ImagePartsGroupEntity_array *ImagePartsGroupMaster__GetOpenEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ImagePartsGroupEntity_array *Entities; // x0
  ImagePartsGroupMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v9; // x21
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4C37E16 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C32C20(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C32C20(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__);
    sub_1C32C20(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C37E16 = 1;
  }
  Entities = ImagePartsGroupMaster__GetEntities(this, id, method);
  v6 = ImagePartsGroupMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v6 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v6->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v9, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v13,
                                          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


bool ImagePartsGroupMaster__IsContainDispDialogEntityFromQuestId(
        ImagePartsGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  return ImagePartsGroupMaster__GetDispDialogEntityFromQuestId(this, questId, method) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ImagePartsGroupMaster__TryGetEntity(
        ImagePartsGroupMaster_o *this,
        ImagePartsGroupEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37E1E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
    byte_4C37E1E = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37E1F & 1) == 0 )
  {
    sub_1C32C20(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C37E1F = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ImagePartsGroupMaster___c___ctor(ImagePartsGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ImagePartsGroupMaster___c___ConcatMaterialImageValues_b__2_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.typeValue;
}


int32_t ImagePartsGroupMaster___c___ConcatMaterialImageValues_b__2_1(
        ImagePartsGroupMaster___c_o *this,
        System_Linq_IGrouping_int__ImagePartsGroupEntity__o *typeValueGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__ImagePartsGroupEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C37E20 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C32C20(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4C37E20 = 1;
  }
  if ( !typeValueGroup )
    sub_1C32E7C(this);
  klass = typeValueGroup->klass;
  v5 = *(unsigned __int16 *)&typeValueGroup->klass->_2.rank;
  if ( *(_WORD *)&typeValueGroup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ImagePartsGroupEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))v7)(
           typeValueGroup,
           *(_QWORD *)(v7 + 8));
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.typeValue;
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_1(
        ImagePartsGroupMaster___c_o *this,
        System_Linq_IGrouping_int__ImagePartsGroupEntity__o *typeValueGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__ImagePartsGroupEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C37E21 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C32C20(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4C37E21 = 1;
  }
  if ( !typeValueGroup )
    sub_1C32E7C(this);
  klass = typeValueGroup->klass;
  v5 = *(unsigned __int16 *)&typeValueGroup->klass->_2.rank;
  if ( *(_WORD *)&typeValueGroup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ImagePartsGroupEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))v7)(
           typeValueGroup,
           *(_QWORD *)(v7 + 8));
}


bool ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_2(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.imageValue;
}


bool ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return ImagePartsGroupEntity__IsOpen(v, (const MethodInfo *)v);
}


void ImagePartsGroupMaster___c__DisplayClass0_0___ctor(
        ImagePartsGroupMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ImagePartsGroupMaster___c__DisplayClass0_0___GetEntities_b__0(
        ImagePartsGroupMaster___c__DisplayClass0_0_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.id == this->fields.id;
}


void ImagePartsGroupMaster___c__DisplayClass6_0___ctor(
        ImagePartsGroupMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ImagePartsGroupMaster___c__DisplayClass6_0___GetDispDialogEntityFromQuestId_b__0(
        ImagePartsGroupMaster___c__DisplayClass6_0_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}