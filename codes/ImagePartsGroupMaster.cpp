void ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30E50 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
    byte_4D30E50 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D30E4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_String_Join_int___);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D30E4C = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0) )
  {
    v8 = *defaultName;
    v9 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16207/*"_"*/,
           DefaultImageValues,
           (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
    v10 = System_String__Concat_64463988(v8, (System_String_o *)StringLiteral_16207/*"_"*/, v9, 0);
    *defaultName = v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)defaultName, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = id;
  v8 = this;
  if ( (byte_4D30E4F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_System_String_Join_int___);
    this = (ImagePartsGroupMaster_o *)sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D30E4F = 1;
  }
  entity = 0;
  if ( !idxs )
LABEL_21:
    sub_1C93D2C(this, *(_QWORD *)&id);
  if ( !idxs->max_length )
    goto LABEL_19;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = idxs->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C93D34(this);
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
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
            (System_String_o *)StringLiteral_16207/*"_"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
    v18 = System_String__Concat_64463988(v16, (System_String_o *)StringLiteral_16207/*"_"*/, v17, 0);
    *defaultName = v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)defaultName, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v20; // x0
  ImagePartsGroupMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  System_Func_object__int__o *_9__2_1; // x24
  Il2CppObject *v24; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x23
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x23
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x24
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x24
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  ImagePartsGroupEntity_o *v66; // x0
  const MethodInfo *v67; // x1
  ImagePartsGroupEntity_o *v68; // x25
  const MethodInfo *v69; // x2
  _BOOL8 IsOpen; // x0
  __int64 v71; // x1
  __int64 imageValue; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  System_String_o *v84; // x23
  System_String_o *v85; // x0
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  int32_t v88; // w2
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  ImagePartsGroupMaster_o *v93; // [xsp+28h] [xbp-68h]

  if ( (byte_4D30E4B & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C93AD4(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_System_String_Join_int___);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__);
    sub_1C93AD4(&ImagePartsGroupMaster___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_4405/*"CharaGraph/"*/);
    byte_4D30E4B = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    goto LABEL_88;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v93 = this;
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
    _9__2_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v12,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_31CE04C *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
  v21 = ImagePartsGroupMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v21 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v21->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v24,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0);
    v25 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v25->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25->__9__2_1, (int32_t)_9__2_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderBy_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v32 )
    sub_1C93D2C(0, v33);
  klass = v32->klass;
  v35 = v32;
  v36 = *(unsigned __int16 *)&v32->klass->_2.rank;
  if ( *(_WORD *)&v32->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_21;
    }
    v38 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v38 = sub_1C69E5C(v32, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
  }
  v40 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  if ( !v40 )
    sub_1C93D2C(0, v39);
  while ( 1 )
  {
    v41 = *(_QWORD *)v40;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_28;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_28:
      v44 = sub_1C69E5C(v40, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v40;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v47 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_35;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_35:
      v48 = sub_1C69E5C(v40, System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      sub_1C93D2C(0, v50);
    v52 = *(_QWORD *)v49;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v54 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_42;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_42:
      v55 = sub_1C69E5C(v49, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
    if ( !v57 )
      sub_1C93D2C(0, v56);
    while ( 1 )
    {
      v58 = *(_QWORD *)v57;
      v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
      {
        v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_49;
        }
        v61 = v58 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_49:
        v61 = sub_1C69E5C(v57, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
        break;
      v62 = *(_QWORD *)v57;
      v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
      {
        v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v64 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_56;
        }
        v65 = v62 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_56:
        v65 = sub_1C69E5C(v57, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0);
      }
      v66 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
      v68 = v66;
      if ( !v66 )
        sub_1C93D2C(0, v67);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v66, v67) )
      {
        IsOpen = ImagePartsGroupEntity__IsOpen(v68, 1, v69);
        if ( IsOpen )
        {
          if ( !v9 )
            sub_1C93D2C(IsOpen, v71);
          imageValue = (unsigned int)v68->fields.imageValue;
          items = v9->fields._items;
          v74 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C93D2C(IsOpen, imageValue);
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              imageValue,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
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
    v76 = *(_QWORD *)v57;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_70;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_70:
      v79 = sub_1C69E5C(v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v79)(v57, *(_QWORD *)(v79 + 8));
  }
  v80 = *(_QWORD *)v40;
  v81 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
  {
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      v82 += 4;
      if ( !v81 )
        goto LABEL_81;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_81:
    v83 = sub_1C69E5C(v40, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v83)(v40, *(_QWORD *)(v83 + 8));
  this = v93;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
    goto LABEL_88;
  v84 = *defaultName;
  v85 = System_String__Join_int_(
          (System_String_o *)StringLiteral_16207/*"_"*/,
          (System_Collections_Generic_IEnumerable_T__o *)v9,
          (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
  v86 = System_String__Concat_64463988(v84, (System_String_o *)StringLiteral_16207/*"_"*/, v85, 0);
  v87 = System_String__Concat_64425724((System_String_o *)StringLiteral_4405/*"CharaGraph/"*/, v86, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v87, 0) )
  {
LABEL_88:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v8);
  }
  else
  {
    *defaultName = v86;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)defaultName, (int32_t)v86, v88, (int32_t)v8, v89, v90, v91, v92);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v17; // x0
  ImagePartsGroupMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v21; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x20
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x20
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  ImagePartsGroupMaster___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__bool__o *_9__4_2; // x22
  Il2CppObject *v50; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  ImagePartsGroupMaster___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x21
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v62; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0

  if ( (byte_4D30E4D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__);
    sub_1C93AD4(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4D30E4D = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v6 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0) )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
      _9__4_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__4_0, v9, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, 0);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
        (int32_t)_9__4_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_31CE04C *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    v18 = ImagePartsGroupMaster___c_TypeInfo;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v18 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_1 = (System_Func_object__int__o *)v18->static_fields->__9__4_1;
    if ( !_9__4_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__4_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__4_1, v21, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, 0);
      v22 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v22->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->__9__4_1, (int32_t)_9__4_1, v23, v24, v25, v26, v27, v28);
    }
    v29 = System_Linq_Enumerable__OrderBy_object__int_(
            v19,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v29 )
      sub_1C93D2C(0, v30);
    klass = v29->klass;
    v32 = v29;
    v33 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_21;
      }
      v35 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_21:
      v35 = sub_1C69E5C(v29, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v35)(
            v32,
            *(_QWORD *)(v35 + 8));
    if ( !v37 )
      sub_1C93D2C(0, v36);
    while ( 1 )
    {
      v38 = *(_QWORD *)v37;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_28;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_28:
        v41 = sub_1C69E5C(v37, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
        break;
      v42 = *(_QWORD *)v37;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v44 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_35;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_35:
        v45 = sub_1C69E5C(
                v37,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0);
      }
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
      v47 = ImagePartsGroupMaster___c_TypeInfo;
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v47 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__bool__o *)v47->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v50 = (Il2CppObject *)v47->static_fields->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v50,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0);
        v51 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v51->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v51->__9__4_2, (int32_t)_9__4_2, v52, v53, v54, v55, v56, v57);
      }
      v58 = System_Linq_Enumerable__Where_object_(
              v48,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v59 = ImagePartsGroupMaster___c_TypeInfo;
      v60 = v58;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v59 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_3 = (System_Func_object__int__o *)v59->static_fields->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v62 = (Il2CppObject *)v59->static_fields->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v62,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0);
        v63 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v63->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v63->__9__4_3, (int32_t)_9__4_3, v64, v65, v66, v67, v68, v69);
      }
      v70 = System_Linq_Enumerable__Min_object_(
              v60,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_31D3230 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v6 )
        sub_1C93D2C(v70, (unsigned int)v70);
      items = v6->fields._items;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C93D2C(v70, (unsigned int)v70);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v70,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v70;
      }
    }
    v74 = *(_QWORD *)v37;
    v75 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_58;
      }
      v77 = v74 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_58:
      v77 = sub_1C69E5C(v37, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v77)(v37, *(_QWORD *)(v77 + 8));
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

  if ( (byte_4D30E4E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__);
    sub_1C93AD4(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
    byte_4D30E4E = 1;
  }
  v5 = sub_1C93D20(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = questId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v9,
                                      (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
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

  if ( (byte_4D30E49 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_1C93AD4(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
    byte_4D30E49 = 1;
  }
  v5 = sub_1C93D20(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = id;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v10,
                                          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D30E51 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
    byte_4D30E51 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_34681D4 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4D30E4A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__);
    sub_1C93AD4(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4D30E4A = 1;
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
    _9__1_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v9, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v17,
                                          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
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

  if ( (byte_4D30E52 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
    byte_4D30E52 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30E53 & 1) == 0 )
  {
    sub_1C93AD4(&ImagePartsGroupMaster___c_TypeInfo);
    byte_4D30E53 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D30E54 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C93AD4(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4D30E54 = 1;
  }
  if ( !typeValueGroup )
    sub_1C93D2C(this, typeValueGroup);
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
    v7 = sub_1C69E5C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
  }
  return (*(int32_t (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))v7)(
           typeValueGroup,
           *(_QWORD *)(v7 + 8));
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D30E55 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C93AD4(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_4D30E55 = 1;
  }
  if ( !typeValueGroup )
    sub_1C93D2C(this, typeValueGroup);
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
    v7 = sub_1C69E5C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
  }
  return (*(int32_t (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))v7)(
           typeValueGroup,
           *(_QWORD *)(v7 + 8));
}


bool ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_2(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.imageValue;
}


bool ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return ImagePartsGroupEntity__IsRelease(v, (const MethodInfo *)v);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}