void ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C571CA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
    byte_4C571CA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
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

  if ( (byte_4C571C6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_String_Join_int___);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C571C6 = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0) )
  {
    v8 = *defaultName;
    v9 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16119/*"_"*/,
           DefaultImageValues,
           (const MethodInfo_31A4E30 *)Method_System_String_Join_int___);
    v10 = System_String__Concat_63674716(v8, (System_String_o *)StringLiteral_16119/*"_"*/, v9, 0);
    *defaultName = v10;
    sub_1C3E508((CGThumbnailListItem_o *)defaultName, (int32_t)v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void ImagePartsGroupMaster__ConcatImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_Int32_array *idxs,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  int32_t v7; // w20
  ImagePartsGroupMaster_o *v8; // x21
  System_Collections_Generic_List_int__o *v9; // x23
  const MethodInfo *v10; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = id;
  v8 = this;
  if ( (byte_4C571C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_System_String_Join_int___);
    this = (ImagePartsGroupMaster_o *)sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C571C9 = 1;
  }
  entity = 0;
  if ( !idxs )
LABEL_21:
    sub_1C3E7C0(this, *(_QWORD *)&id);
  if ( !idxs->max_length )
    goto LABEL_19;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = idxs->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C3E7C8(this, *(_QWORD *)&id);
      this = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(v8, &entity, v7, idxs->m_Items[v12], v10);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ImagePartsGroupMaster_o *)entity;
        if ( !entity )
          goto LABEL_21;
        this = (ImagePartsGroupMaster_o *)ImagePartsGroupEntity__IsUseEquipImage(entity, *(const MethodInfo **)&id);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_19;
        if ( !entity )
          goto LABEL_21;
        if ( !v9 )
          goto LABEL_21;
        *(_QWORD *)&id = (unsigned int)entity->fields.imageValue;
        items = v9->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            id,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = id;
        }
      }
      LODWORD(max_length) = idxs->max_length;
    }
    while ( (__int64)++v12 < (int)max_length );
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
  {
    v16 = *defaultName;
    v17 = System_String__Join_int_(
            (System_String_o *)StringLiteral_16119/*"_"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_31A4E30 *)Method_System_String_Join_int___);
    v18 = System_String__Concat_63674716(v16, (System_String_o *)StringLiteral_16119/*"_"*/, v17, 0);
    *defaultName = v18;
    sub_1C3E508((CGThumbnailListItem_o *)defaultName, (int32_t)v18, v19, v20);
  }
  else
  {
LABEL_19:
    ImagePartsGroupMaster__ConcatDefaultImageValues(v8, v7, defaultName, (const MethodInfo *)defaultName);
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
  __int64 v25; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x23
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x23
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x24
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x24
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  ImagePartsGroupEntity_o *v58; // x0
  const MethodInfo *v59; // x1
  ImagePartsGroupEntity_o *v60; // x25
  const MethodInfo *v61; // x2
  _BOOL8 IsOpen_42401492; // x0
  __int64 v63; // x1
  __int64 imageValue; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  System_String_o *v76; // x23
  System_String_o *v77; // x0
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  int32_t v80; // w2
  ImagePartsGroupMaster_o *v81; // [xsp+28h] [xbp-68h]

  if ( (byte_4C571C5 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C3E564(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_System_String_Join_int___);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__);
    sub_1C3E564(&ImagePartsGroupMaster___c_TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C571C5 = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    goto LABEL_88;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v81 = this;
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
    _9__2_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v12,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_3123F24 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
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
    _9__2_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v20,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0);
    v21 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v21->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v21->__9__2_1, (int32_t)_9__2_1, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderBy_object__int_(
          v18,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v24 )
    sub_1C3E7C0(0, v25);
  klass = v24->klass;
  v27 = v24;
  v28 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_21;
    }
    v30 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v30 = sub_1C8ED7C(v24, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v32 )
    sub_1C3E7C0(0, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_28;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_28:
      v36 = sub_1C8ED7C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v39 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_35;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_35:
      v40 = sub_1C8ED7C(v32, System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1C3E7C0(0, v42);
    v44 = *(_QWORD *)v41;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v46 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_42;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_42:
      v47 = sub_1C8ED7C(v41, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
    if ( !v49 )
      sub_1C3E7C0(0, v48);
    while ( 1 )
    {
      v50 = *(_QWORD *)v49;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_49;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_49:
        v53 = sub_1C8ED7C(v49, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v49;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_56;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_56:
        v57 = sub_1C8ED7C(v49, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0);
      }
      v58 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
      v60 = v58;
      if ( !v58 )
        sub_1C3E7C0(0, v59);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v58, v59) )
      {
        IsOpen_42401492 = ImagePartsGroupEntity__IsOpen_42401492(v60, 1, v61);
        if ( IsOpen_42401492 )
        {
          if ( !v9 )
            sub_1C3E7C0(IsOpen_42401492, v63);
          imageValue = (unsigned int)v60->fields.imageValue;
          items = v9->fields._items;
          v66 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C3E7C0(IsOpen_42401492, imageValue);
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              imageValue,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
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
    v68 = *(_QWORD *)v49;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_70;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_70:
      v71 = sub_1C8ED7C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v71)(v49, *(_QWORD *)(v71 + 8));
  }
  v72 = *(_QWORD *)v32;
  v73 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      --v73;
      v74 += 4;
      if ( !v73 )
        goto LABEL_81;
    }
    v75 = v72 + 16LL * *v74 + 312;
  }
  else
  {
LABEL_81:
    v75 = sub_1C8ED7C(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v75)(v32, *(_QWORD *)(v75 + 8));
  this = v81;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
    goto LABEL_88;
  v76 = *defaultName;
  v77 = System_String__Join_int_(
          (System_String_o *)StringLiteral_16119/*"_"*/,
          (System_Collections_Generic_IEnumerable_T__o *)v9,
          (const MethodInfo_31A4E30 *)Method_System_String_Join_int___);
  v78 = System_String__Concat_63674716(v76, (System_String_o *)StringLiteral_16119/*"_"*/, v77, 0);
  v79 = System_String__Concat_63636468((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v78, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v79, 0) )
  {
LABEL_88:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v8);
  }
  else
  {
    *defaultName = v78;
    sub_1C3E508((CGThumbnailListItem_o *)defaultName, (int32_t)v78, v80, v8);
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
  __int64 v22; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x20
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x20
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  ImagePartsGroupMaster___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Func_object__bool__o *_9__4_2; // x22
  Il2CppObject *v42; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  ImagePartsGroupMaster___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v50; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0

  if ( (byte_4C571C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__);
    sub_1C3E564(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C571C7 = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v6 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0) )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
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
      _9__4_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__4_0, v9, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, 0);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_3123F24 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
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
      _9__4_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__4_1, v17, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, 0);
      v18 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v18->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v18->__9__4_1, (int32_t)_9__4_1, v19, v20);
    }
    v21 = System_Linq_Enumerable__OrderBy_object__int_(
            v15,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v21 )
      sub_1C3E7C0(0, v22);
    klass = v21->klass;
    v24 = v21;
    v25 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_21;
      }
      v27 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_21:
      v27 = sub_1C8ED7C(v21, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v27)(
            v24,
            *(_QWORD *)(v27 + 8));
    if ( !v29 )
      sub_1C3E7C0(0, v28);
    while ( 1 )
    {
      v30 = *(_QWORD *)v29;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_28;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_28:
        v33 = sub_1C8ED7C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
        break;
      v34 = *(_QWORD *)v29;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v36 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_35;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_35:
        v37 = sub_1C8ED7C(
                v29,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
      v39 = ImagePartsGroupMaster___c_TypeInfo;
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v39 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__bool__o *)v39->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v39->static_fields->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v42,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0);
        v43 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v43->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v43->__9__4_2, (int32_t)_9__4_2, v44, v45);
      }
      v46 = System_Linq_Enumerable__Where_object_(
              v40,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v47 = ImagePartsGroupMaster___c_TypeInfo;
      v48 = v46;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v47 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_3 = (System_Func_object__int__o *)v47->static_fields->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v50 = (Il2CppObject *)v47->static_fields->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v50,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0);
        v51 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v51->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_1C3E508((CGThumbnailListItem_o *)&v51->__9__4_3, (int32_t)_9__4_3, v52, v53);
      }
      v54 = System_Linq_Enumerable__Min_object_(
              v48,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_3128C00 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v6 )
        sub_1C3E7C0(v54, (unsigned int)v54);
      items = v6->fields._items;
      v56 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C3E7C0(v54, (unsigned int)v54);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v54,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v54;
      }
    }
    v58 = *(_QWORD *)v29;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_58;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_58:
      v61 = sub_1C8ED7C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v61)(v29, *(_QWORD *)(v61 + 8));
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
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C571C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__);
    sub_1C3E564(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
    byte_4C571C8 = 1;
  }
  v5 = sub_1C3E7B0(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = questId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v9,
                                      (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
}


ImagePartsGroupEntity_array *ImagePartsGroupMaster__GetEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C571C3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_1C3E564(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C571C3 = 1;
  }
  v5 = sub_1C3E7B0(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = id;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v10,
                                          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C571CB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
    byte_4C571CB = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33B7A10 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
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

  if ( (byte_4C571C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C3E564(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C3E564(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__);
    sub_1C3E564(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C571C4 = 1;
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
    _9__1_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v9, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v13,
                                          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
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

  if ( (byte_4C571CC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
    byte_4C571CC = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C571CD & 1) == 0 )
  {
    sub_1C3E564(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4C571CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C571CE & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C3E564(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4C571CE = 1;
  }
  if ( !typeValueGroup )
    sub_1C3E7C0(this, typeValueGroup);
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
    v7 = sub_1C8ED7C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C571CF & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C3E564(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4C571CF = 1;
  }
  if ( !typeValueGroup )
    sub_1C3E7C0(this, typeValueGroup);
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
    v7 = sub_1C8ED7C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
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
    sub_1C3E7C0(this, 0);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.imageValue;
}


bool ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}