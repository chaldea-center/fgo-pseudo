void __fastcall ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB1A3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__, method);
    byte_49BB1A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ImagePartsGroupMaster__ConcatDefaultImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *DefaultImageValues; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49BB19F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_String_Join_int___, *(_QWORD *)&id);
    sub_1B4CF90(&StringLiteral_15813/*"_"*/, v7);
    byte_49BB19F = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0LL) )
  {
    v9 = *defaultName;
    v10 = System_String__Join_int_(
            (System_String_o *)StringLiteral_15813/*"_"*/,
            DefaultImageValues,
            (const MethodInfo_2FA6008 *)Method_System_String_Join_int___);
    v11 = System_String__Concat_61131716(v9, (System_String_o *)StringLiteral_15813/*"_"*/, v10, 0LL);
    *defaultName = v11;
    sub_1B4CF34((CGThumbnailListItem_o *)defaultName, (int32_t)v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ImagePartsGroupMaster__ConcatImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_Int32_array *idxs,
        System_String_o **defaultName,
        const MethodInfo *method)
{
  int32_t v7; // w20
  ImagePartsGroupMaster_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x23
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = id;
  v8 = this;
  if ( (byte_49BB1A2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&Method_System_String_Join_int___, v11);
    this = (ImagePartsGroupMaster_o *)sub_1B4CF90(&StringLiteral_15813/*"_"*/, v12);
    byte_49BB1A2 = 1;
  }
  entity = 0LL;
  if ( !idxs )
LABEL_21:
    sub_1B4D1EC(this, *(_QWORD *)&id);
  if ( !*(_QWORD *)&idxs->max_length )
    goto LABEL_19;
  v13 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = *(_QWORD *)&idxs->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1B4D1F4(this, *(_QWORD *)&id);
      this = (ImagePartsGroupMaster_o *)ImagePartsGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          v7,
                                          idxs->m_Items[v16 + 1],
                                          v14);
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
        if ( !v13 )
          goto LABEL_21;
        *(_QWORD *)&id = (unsigned int)entity->fields.imageValue;
        items = v13->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            id,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = id;
        }
      }
      LODWORD(v15) = idxs->max_length;
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v13, 0LL) )
  {
    v20 = *defaultName;
    v21 = System_String__Join_int_(
            (System_String_o *)StringLiteral_15813/*"_"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v13,
            (const MethodInfo_2FA6008 *)Method_System_String_Join_int___);
    v22 = System_String__Concat_61131716(v20, (System_String_o *)StringLiteral_15813/*"_"*/, v21, 0LL);
    *defaultName = v22;
    sub_1B4CF34((CGThumbnailListItem_o *)defaultName, (int32_t)v22, v23, v24);
  }
  else
  {
LABEL_19:
    ImagePartsGroupMaster__ConcatDefaultImageValues(v8, v7, defaultName, (const MethodInfo *)defaultName);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ImagePartsGroupMaster__ConcatMaterialImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        System_String_o **defaultName,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_ICollection_o *Entities; // x23
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_int__o *v28; // x22
  ImagePartsGroupMaster___c_c *v29; // x0
  System_Func_object__int__o *_9__2_0; // x24
  Il2CppObject *v31; // x25
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v35; // x0
  ImagePartsGroupMaster___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  System_Func_object__int__o *_9__2_1; // x24
  Il2CppObject *v39; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x23
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v50; // x1
  __int64 v51; // x23
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x24
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x24
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  ImagePartsGroupEntity_o *v77; // x0
  const MethodInfo *v78; // x1
  ImagePartsGroupEntity_o *v79; // x25
  const MethodInfo *v80; // x2
  _BOOL8 IsOpen_39941844; // x0
  __int64 v82; // x1
  __int64 imageValue; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  System_String_o *v95; // x23
  System_String_o *v96; // x0
  System_String_o *v97; // x22
  System_String_o *v98; // x23
  int32_t v99; // w2
  ImagePartsGroupMaster_o *v100; // [xsp+28h] [xbp-68h]

  if ( (byte_49BB19E & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___, v8);
    sub_1B4CF90(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo, v9);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__int__TypeInfo, v10);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v11);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v13);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, v15);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B4CF90(&Method_System_String_Join_int___, v20);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__, v21);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__, v22);
    sub_1B4CF90(&ImagePartsGroupMaster___c_TypeInfo, v23);
    sub_1B4CF90(&StringLiteral_15813/*"_"*/, v24);
    sub_1B4CF90(&StringLiteral_4345/*"CharaGraph/"*/, v25);
    byte_49BB19E = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    goto LABEL_88;
  v28 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v100 = this;
  v29 = ImagePartsGroupMaster___c_TypeInfo;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v29 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v29->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v31,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0LL);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v33, v34);
  }
  v35 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_2F2885C *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
  v36 = ImagePartsGroupMaster___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v36 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v36->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v39,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0LL);
    v40 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v40->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v40->__9__2_1, (int32_t)_9__2_1, v41, v42);
  }
  v43 = System_Linq_Enumerable__OrderBy_object__int_(
          v37,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v43 )
    sub_1B4D1EC(0LL, v44);
  klass = v43->klass;
  v46 = v43;
  v47 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1B9D724(
                 v43,
                 System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                 0LL);
  }
  v51 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v46,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_1B4D1EC(0LL, v50);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_28;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_28:
      v55 = sub_1B9D724(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v51;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v58 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_35;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_35:
      v59 = sub_1B9D724(
              v51,
              System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
              0LL);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    v62 = v60;
    if ( !v60 )
      sub_1B4D1EC(0LL, v61);
    v63 = *(_QWORD *)v60;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v65 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_42;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_42:
      v66 = sub_1B9D724(v60, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0LL);
    }
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
    if ( !v68 )
      sub_1B4D1EC(0LL, v67);
    while ( 1 )
    {
      v69 = *(_QWORD *)v68;
      v70 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v70;
          v71 += 4;
          if ( !v70 )
            goto LABEL_49;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_49:
        v72 = sub_1B9D724(v68, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8)) & 1) == 0 )
        break;
      v73 = *(_QWORD *)v68;
      v74 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v75 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v74;
          v75 += 4;
          if ( !v74 )
            goto LABEL_56;
        }
        v76 = v73 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_56:
        v76 = sub_1B9D724(v68, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0LL);
      }
      v77 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v68, *(_QWORD *)(v76 + 8));
      v79 = v77;
      if ( !v77 )
        sub_1B4D1EC(0LL, v78);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v77, v78) )
      {
        IsOpen_39941844 = ImagePartsGroupEntity__IsOpen_39941844(v79, 1, v80);
        if ( IsOpen_39941844 )
        {
          if ( !v28 )
            sub_1B4D1EC(IsOpen_39941844, v82);
          imageValue = (unsigned int)v79->fields.imageValue;
          items = v28->fields._items;
          v85 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1B4D1EC(IsOpen_39941844, imageValue);
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              imageValue,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v28->fields._size = size + 1;
            items->m_Items[size + 1] = imageValue;
          }
          break;
        }
      }
    }
    v87 = *(_QWORD *)v68;
    v88 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
      {
        --v88;
        v89 += 4;
        if ( !v88 )
          goto LABEL_70;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_70:
      v90 = sub_1B9D724(v68, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v90)(v68, *(_QWORD *)(v90 + 8));
  }
  v91 = *(_QWORD *)v51;
  v92 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
  {
    v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
    {
      --v92;
      v93 += 4;
      if ( !v92 )
        goto LABEL_81;
    }
    v94 = v91 + 16LL * *v93 + 312;
  }
  else
  {
LABEL_81:
    v94 = sub_1B9D724(v51, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v94)(v51, *(_QWORD *)(v94 + 8));
  this = v100;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v28, 0LL) )
    goto LABEL_88;
  v95 = *defaultName;
  v96 = System_String__Join_int_(
          (System_String_o *)StringLiteral_15813/*"_"*/,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_2FA6008 *)Method_System_String_Join_int___);
  v97 = System_String__Concat_61131716(v95, (System_String_o *)StringLiteral_15813/*"_"*/, v96, 0LL);
  v98 = System_String__Concat_61093468((System_String_o *)StringLiteral_4345/*"CharaGraph/"*/, v97, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v98, 0LL) )
  {
LABEL_88:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v27);
  }
  else
  {
    *defaultName = v97;
    sub_1B4CF34((CGThumbnailListItem_o *)defaultName, (int32_t)v97, v99, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ImagePartsGroupMaster__GetDefaultImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Collections_Generic_List_int__o *v24; // x19
  ImagePartsGroupMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v27; // x22
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v31; // x0
  ImagePartsGroupMaster___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v35; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x20
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v46; // x1
  __int64 v47; // x20
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  ImagePartsGroupMaster___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  System_Func_object__bool__o *_9__4_2; // x22
  Il2CppObject *v60; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  ImagePartsGroupMaster___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x21
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v68; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0

  if ( (byte_49BB1A0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___, *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v7);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v8);
    sub_1B4CF90(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo, v9);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__int__TypeInfo, v10);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v11);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v13);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, v18);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, v19);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__, v20);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__, v21);
    sub_1B4CF90(&ImagePartsGroupMaster___c_TypeInfo, v22);
    byte_49BB1A0 = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v24 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0LL) )
  {
    v24 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v24,
      (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
    v25 = ImagePartsGroupMaster___c_TypeInfo;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v25 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__int__o *)v25->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__4_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__4_0,
        v27,
        Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__,
        0LL);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v29, v30);
    }
    v31 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_2F2885C *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    v32 = ImagePartsGroupMaster___c_TypeInfo;
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v32 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_1 = (System_Func_object__int__o *)v32->static_fields->__9__4_1;
    if ( !_9__4_1 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v32->static_fields->__9;
      _9__4_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__4_1,
        v35,
        Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__,
        0LL);
      v36 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v36->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&v36->__9__4_1, (int32_t)_9__4_1, v37, v38);
    }
    v39 = System_Linq_Enumerable__OrderBy_object__int_(
            v33,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v39 )
      sub_1B4D1EC(0LL, v40);
    klass = v39->klass;
    v42 = v39;
    v43 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_1B9D724(
                   v39,
                   System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                   0LL);
    }
    v47 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v42,
            *(_QWORD *)(p_method + 8));
    if ( !v47 )
      sub_1B4D1EC(0LL, v46);
    while ( 1 )
    {
      v48 = *(_QWORD *)v47;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_28;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_28:
        v51 = sub_1B9D724(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
        break;
      v52 = *(_QWORD *)v47;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v54 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_35;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_35:
        v55 = sub_1B9D724(
                v47,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0LL);
      }
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
      v57 = ImagePartsGroupMaster___c_TypeInfo;
      v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v57 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__bool__o *)v57->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v60 = (Il2CppObject *)v57->static_fields->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v60,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0LL);
        v61 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v61->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_1B4CF34((CGThumbnailListItem_o *)&v61->__9__4_2, (int32_t)_9__4_2, v62, v63);
      }
      v64 = System_Linq_Enumerable__Where_object_(
              v58,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v65 = ImagePartsGroupMaster___c_TypeInfo;
      v66 = v64;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v65 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_3 = (System_Func_object__int__o *)v65->static_fields->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v68 = (Il2CppObject *)v65->static_fields->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v68,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0LL);
        v69 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v69->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_1B4CF34((CGThumbnailListItem_o *)&v69->__9__4_3, (int32_t)_9__4_3, v70, v71);
      }
      v72 = System_Linq_Enumerable__Min_object_(
              v66,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_2F2D538 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v24 )
        sub_1B4D1EC(v72, (unsigned int)v72);
      items = v24->fields._items;
      v74 = Method_System_Collections_Generic_List_int__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1B4D1EC(v72, (unsigned int)v72);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v24,
          v72,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v24->fields._size = size + 1;
        items->m_Items[size + 1] = v72;
      }
    }
    v76 = *(_QWORD *)v47;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_58;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_58:
      v79 = sub_1B9D724(v47, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v79)(v47, *(_QWORD *)(v79 + 8));
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *__fastcall ImagePartsGroupMaster__GetDispDialogEntityFromQuestId(
        ImagePartsGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_49BB1A1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___, *(_QWORD *)&questId);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__, v6);
    sub_1B4CF90(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo, v7);
    byte_49BB1A1 = 1;
  }
  v8 = sub_1B4D1DC(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_DWORD *)(v8 + 16) = questId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0LL);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v12,
                                      (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_array *__fastcall ImagePartsGroupMaster__GetEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49BB19C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___, *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v5);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__, v7);
    sub_1B4CF90(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo, v8);
    byte_49BB19C = 1;
  }
  v9 = sub_1B4D1DC(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_DWORD *)(v9 + 16) = id;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v14,
                                          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *__fastcall ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB1A4 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49BB1A4 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31A2454 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_array *__fastcall ImagePartsGroupMaster__GetOpenEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ImagePartsGroupEntity_array *Entities; // x0
  ImagePartsGroupMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v13; // x21
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49BB19D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___, *(_QWORD *)&id);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v5);
    sub_1B4CF90(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, v7);
    sub_1B4CF90(&ImagePartsGroupMaster___c_TypeInfo, v8);
    byte_49BB19D = 1;
  }
  Entities = ImagePartsGroupMaster__GetEntities(this, id, method);
  v10 = ImagePartsGroupMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v10 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v13, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0LL);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v17,
                                          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


bool __fastcall ImagePartsGroupMaster__IsContainDispDialogEntityFromQuestId(
        ImagePartsGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  return ImagePartsGroupMaster__GetDispDialogEntityFromQuestId(this, questId, method) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ImagePartsGroupMaster__TryGetEntity(
        ImagePartsGroupMaster_o *this,
        ImagePartsGroupEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB1A5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__, entity);
    byte_49BB1A5 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void __fastcall ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB1A6 & 1) == 0 )
  {
    sub_1B4CF90(&ImagePartsGroupMaster___c_TypeInfo, v1);
    byte_49BB1A6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ImagePartsGroupMaster___c___ctor(ImagePartsGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ImagePartsGroupMaster___c___ConcatMaterialImageValues_b__2_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.typeValue;
}


int32_t __fastcall ImagePartsGroupMaster___c___ConcatMaterialImageValues_b__2_1(
        ImagePartsGroupMaster___c_o *this,
        System_Linq_IGrouping_int__ImagePartsGroupEntity__o *typeValueGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__ImagePartsGroupEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BB1A7 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1B4CF90(
                                            &System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo,
                                            typeValueGroup);
    byte_49BB1A7 = 1;
  }
  if ( !typeValueGroup )
    sub_1B4D1EC(this, typeValueGroup);
  klass = typeValueGroup->klass;
  v5 = *(unsigned __int16 *)(&typeValueGroup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&typeValueGroup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ImagePartsGroupEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B9D724(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))p_method)(
           typeValueGroup,
           *(_QWORD *)(p_method + 8));
}


int32_t __fastcall ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.typeValue;
}


int32_t __fastcall ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_1(
        ImagePartsGroupMaster___c_o *this,
        System_Linq_IGrouping_int__ImagePartsGroupEntity__o *typeValueGroup,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__ImagePartsGroupEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BB1A8 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1B4CF90(
                                            &System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo,
                                            typeValueGroup);
    byte_49BB1A8 = 1;
  }
  if ( !typeValueGroup )
    sub_1B4D1EC(this, typeValueGroup);
  klass = typeValueGroup->klass;
  v5 = *(unsigned __int16 *)(&typeValueGroup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&typeValueGroup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__ImagePartsGroupEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B9D724(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__ImagePartsGroupEntity__o *, _QWORD))p_method)(
           typeValueGroup,
           *(_QWORD *)(p_method + 8));
}


bool __fastcall ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_2(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t __fastcall ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.imageValue;
}


bool __fastcall ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B4D1EC(this, 0LL);
  return ImagePartsGroupEntity__IsOpen(v, (const MethodInfo *)v);
}


void __fastcall ImagePartsGroupMaster___c__DisplayClass0_0___ctor(
        ImagePartsGroupMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ImagePartsGroupMaster___c__DisplayClass0_0___GetEntities_b__0(
        ImagePartsGroupMaster___c__DisplayClass0_0_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B4D1EC(this, 0LL);
  return v->fields.id == this->fields.id;
}


void __fastcall ImagePartsGroupMaster___c__DisplayClass6_0___ctor(
        ImagePartsGroupMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ImagePartsGroupMaster___c__DisplayClass6_0___GetDispDialogEntityFromQuestId_b__0(
        ImagePartsGroupMaster___c__DisplayClass6_0_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B4D1EC(this, 0LL);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}