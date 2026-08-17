void ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970CE1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
    byte_5970CE1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    536,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
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
  System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970CDD & 1) == 0 )
  {
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5970CDD = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0) )
  {
    v8 = *defaultName;
    v9 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16746/*"_"*/,
           DefaultImageValues,
           (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
    v10 = System_String__Concat_75694928(v8, (System_String_o *)StringLiteral_16746/*"_"*/, v9, 0);
    *defaultName = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)defaultName, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = id;
  v8 = this;
  if ( (byte_5970CE0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_System_String_Join_int___);
    this = (ImagePartsGroupMaster_o *)sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5970CE0 = 1;
  }
  entity = 0;
  if ( !idxs )
LABEL_21:
    sub_2213CDC(this, *(_QWORD *)&id);
  if ( !idxs->max_length )
    goto LABEL_19;
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = idxs->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
        items = v9->fields._items;
        *(_QWORD *)&id = (unsigned int)entity->fields.imageValue;
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
            (System_String_o *)StringLiteral_16746/*"_"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
    v18 = System_String__Concat_75694928(v16, (System_String_o *)StringLiteral_16746/*"_"*/, v17, 0);
    *defaultName = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)defaultName, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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
  MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x22
  __int64 v10; // x1
  ImagePartsGroupMaster___c_c *v11; // x0
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__2_0; // x24
  Il2CppObject *v14; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v22; // x0
  __int64 v23; // x1
  ImagePartsGroupMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v26; // x9
  System_Func_object__int__o *_9__2_1; // x24
  Il2CppObject *v28; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x23
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 i; // x23
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x23
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x23
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  ImagePartsGroupEntity_o *v76; // x0
  const MethodInfo *v77; // x1
  ImagePartsGroupEntity_o *v78; // x23
  const MethodInfo *v79; // x2
  _BOOL8 IsOpen; // x0
  __int64 imageValue; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  System_String_o *v93; // x23
  System_String_o *v94; // x0
  System_String_o *v95; // x22
  __int64 v96; // x1
  System_String_o *v97; // x23
  System_String_o *v98; // x2
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  __int64 v103; // [xsp+40h] [xbp-70h]
  __int64 v104; // [xsp+48h] [xbp-68h]

  if ( (byte_5970CDC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_2213A60(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__);
    sub_2213A60(&ImagePartsGroupMaster___c_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_4556/*"CharaGraph/"*/);
    byte_5970CDC = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    goto LABEL_96;
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = ImagePartsGroupMaster___c_TypeInfo;
  if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v10);
    v11 = ImagePartsGroupMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v14,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0);
    v15 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v15->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__2_0, (int32_t)_9__2_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
  v24 = ImagePartsGroupMaster___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v23);
    v24 = ImagePartsGroupMaster___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__2_1 = (System_Func_object__int__o *)v26->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      v26 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v28,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0);
    v29 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v29->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__2_1, (int32_t)_9__2_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = System_Linq_Enumerable__OrderBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v36 )
    sub_2213CDC(0, v37);
  klass = v36->klass;
  v39 = v36;
  v40 = *(unsigned __int16 *)&v36->klass->_2.rank;
  if ( *(_WORD *)&v36->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_21;
    }
    v42 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v42 = sub_224BC3C(v36, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
  }
  v43 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
  v104 = v43;
  if ( !v43 )
    sub_2213CDC(v43, v44);
  for ( i = v43; ; i = v104 )
  {
    v46 = *(_QWORD *)i;
    v47 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_29;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_29:
      v49 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(i, *(_QWORD *)(v49 + 8));
    if ( (v50 & 1) == 0 )
      break;
    if ( !v104 )
      sub_2213CDC(v50, v51);
    v52 = *(_QWORD *)v104;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v104 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v104 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v54 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_37;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_37:
      v55 = sub_224BC3C(v104, System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v104, *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_2213CDC(0, v57);
    v59 = *(_QWORD *)v56;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v61 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_44;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_44:
      v62 = sub_224BC3C(v56, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0);
    }
    v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8));
    v65 = v63;
    v103 = v63;
    if ( !v63 )
      sub_2213CDC(0, v64);
    while ( 1 )
    {
      v66 = *(_QWORD *)v65;
      v67 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_51;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_51:
        v69 = sub_224BC3C(v65, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
      if ( (v70 & 1) == 0 )
        break;
      if ( !v103 )
        sub_2213CDC(v70, v71);
      v72 = *(_QWORD *)v103;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
      {
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v74 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_59;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_59:
        v75 = sub_224BC3C(v103, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0);
      }
      v76 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v103, *(_QWORD *)(v75 + 8));
      v78 = v76;
      if ( !v76 )
        sub_2213CDC(0, v77);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v76, v77) )
      {
        IsOpen = ImagePartsGroupEntity__IsOpen(v78, 1, v79);
        if ( IsOpen )
        {
          if ( !v9
            || (items = v9->fields._items,
                imageValue = (unsigned int)v78->fields.imageValue,
                v83 = Method_System_Collections_Generic_List_int__Add__,
                ++v9->fields._version,
                !items) )
          {
            sub_2213CDC(IsOpen, imageValue);
          }
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              imageValue,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = imageValue;
          }
          break;
        }
      }
      v65 = v103;
    }
    if ( v103 )
    {
      v85 = *(_QWORD *)v103;
      v86 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
      {
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
        {
          --v86;
          v87 += 4;
          if ( !v86 )
            goto LABEL_76;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_76:
        v88 = sub_224BC3C(v103, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v88)(v103, *(_QWORD *)(v88 + 8));
    }
  }
  if ( v104 )
  {
    v89 = *(_QWORD *)v104;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v104 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v104 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_88;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_88:
      v92 = sub_224BC3C(v104, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v92)(v104, *(_QWORD *)(v92 + 8));
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
    goto LABEL_96;
  v93 = *defaultName;
  v94 = System_String__Join_int_(
          (System_String_o *)StringLiteral_16746/*"_"*/,
          (System_Collections_Generic_IEnumerable_T__o *)v9,
          (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
  v95 = System_String__Concat_75694928(v93, (System_String_o *)StringLiteral_16746/*"_"*/, v94, 0);
  v97 = System_String__Concat_75651716((System_String_o *)StringLiteral_4556/*"CharaGraph/"*/, v95, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v96);
  if ( !AssetManager__isExistAssetStorage(v97, 0) )
  {
LABEL_96:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v8);
  }
  else
  {
    *defaultName = v95;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)defaultName,
      (int32_t)v95,
      v98,
      (System_String_o *)v8,
      v99,
      v100,
      v101,
      v102);
  }
}


System_Collections_Generic_List_int__o *ImagePartsGroupMaster__GetDefaultImageValues(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x1
  ImagePartsGroupMaster___c_c *v8; // x0
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x21
  Il2CppObject *v11; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v19; // x0
  __int64 v20; // x1
  ImagePartsGroupMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  struct ImagePartsGroupMaster___c_StaticFields *v23; // x9
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v25; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x20
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 i; // x20
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  ImagePartsGroupMaster___c_c *v55; // x0
  struct ImagePartsGroupMaster___c_StaticFields *v56; // x8
  System_Func_object__bool__o *_9__4_2; // x21
  Il2CppObject *v58; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x20
  ImagePartsGroupMaster___c_c *v68; // x0
  struct ImagePartsGroupMaster___c_StaticFields *v69; // x8
  System_Func_object__int__o *_9__4_3; // x21
  Il2CppObject *v71; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v88; // [xsp+18h] [xbp-68h]

  if ( (byte_5970CDE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__);
    sub_2213A60(&ImagePartsGroupMaster___c_TypeInfo);
    byte_5970CDE = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v6 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0) )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = ImagePartsGroupMaster___c_TypeInfo;
    if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v7);
      v8 = ImagePartsGroupMaster___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__4_0, v11, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, 0);
      v12 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v12->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__4_0, (int32_t)_9__4_0, v13, v14, v15, v16, v17, v18);
    }
    v19 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    v21 = ImagePartsGroupMaster___c_TypeInfo;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v20);
      v21 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v23 = v21->static_fields;
    _9__4_1 = (System_Func_object__int__o *)v23->__9__4_1;
    if ( !_9__4_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v20);
        v23 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)v23->__9;
      _9__4_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__4_1, v25, Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, 0);
      v26 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v26->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__4_1, (int32_t)_9__4_1, v27, v28, v29, v30, v31, v32);
    }
    v33 = System_Linq_Enumerable__OrderBy_object__int_(
            v22,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v33 )
      sub_2213CDC(0, v34);
    klass = v33->klass;
    v36 = v33;
    v37 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_21;
      }
      v39 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_21:
      v39 = sub_224BC3C(v33, System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, 0);
    }
    v40 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v39)(
            v36,
            *(_QWORD *)(v39 + 8));
    v88 = v40;
    if ( !v40 )
      sub_2213CDC(0, v41);
    for ( i = v40; ; i = v88 )
    {
      v43 = *(_QWORD *)i;
      v44 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
      if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_29;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_29:
        v46 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(i, *(_QWORD *)(v46 + 8));
      if ( (v47 & 1) == 0 )
        break;
      if ( !v88 )
        sub_2213CDC(v47, v48);
      v49 = *(_QWORD *)v88;
      v50 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
      {
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v51 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v50;
          v51 += 4;
          if ( !v50 )
            goto LABEL_37;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_37:
        v52 = sub_224BC3C(
                v88,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0);
      }
      v54 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(
                                                                   v88,
                                                                   *(_QWORD *)(v52 + 8));
      v55 = ImagePartsGroupMaster___c_TypeInfo;
      if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v53);
        v55 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v56 = v55->static_fields;
      _9__4_2 = (System_Func_object__bool__o *)v56->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !*(&v55->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v55, v53);
          v56 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)v56->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v58,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0);
        v59 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v59->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v59->__9__4_2, (int32_t)_9__4_2, v60, v61, v62, v63, v64, v65);
      }
      v67 = System_Linq_Enumerable__Where_object_(
              v54,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v68 = ImagePartsGroupMaster___c_TypeInfo;
      if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v66);
        v68 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v69 = v68->static_fields;
      _9__4_3 = (System_Func_object__int__o *)v69->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !*(&v68->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v68, v66);
          v69 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        }
        v71 = (Il2CppObject *)v69->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v71,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0);
        v72 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v72->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->__9__4_3, (int32_t)_9__4_3, v73, v74, v75, v76, v77, v78);
      }
      v79 = System_Linq_Enumerable__Min_object_(
              v67,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_38883F4 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v6
        || (items = v6->fields._items,
            v81 = Method_System_Collections_Generic_List_int__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v79, (unsigned int)v79);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v79,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = v79;
      }
    }
    if ( v88 )
    {
      v83 = *(_QWORD *)v88;
      v84 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
      {
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
        {
          --v84;
          v85 += 4;
          if ( !v84 )
            goto LABEL_63;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_63:
        v86 = sub_224BC3C(v88, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v86)(v88, *(_QWORD *)(v86 + 8));
    }
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5970CDF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__);
    sub_2213A60(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
    byte_5970CDF = 1;
  }
  v5 = sub_2213CCC(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = questId;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v9,
                                      (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
}


ImagePartsGroupEntity_array *ImagePartsGroupMaster__GetEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_ImagePartsGroupEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_5970CDA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_2213A60(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
    byte_5970CDA = 1;
  }
  v5 = sub_2213CCC(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_ImagePartsGroupEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = id;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v11,
                                          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970CE2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
    byte_5970CE2 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3F157EC *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
}


ImagePartsGroupEntity_array *ImagePartsGroupMaster__GetOpenEntities(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ImagePartsGroupEntity_array *Entities; // x0
  __int64 v6; // x1
  ImagePartsGroupMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct ImagePartsGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct ImagePartsGroupMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5970CDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__);
    sub_2213A60(&ImagePartsGroupMaster___c_TypeInfo);
    byte_5970CDB = 1;
  }
  Entities = ImagePartsGroupMaster__GetEntities(this, id, method);
  v7 = ImagePartsGroupMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !*(&ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo, v6);
    v7 = ImagePartsGroupMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__1_0 = (System_Func_object__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v11, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0);
    v12 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v12->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__1_0, (int32_t)_9__1_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v19,
                                          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
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

  if ( (byte_5970CE3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
    byte_5970CE3 = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970CE4 & 1) == 0 )
  {
    sub_2213A60(&ImagePartsGroupMaster___c_TypeInfo);
    byte_5970CE4 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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

  if ( (byte_5970CE5 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_2213A60(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_5970CE5 = 1;
  }
  if ( !typeValueGroup )
    sub_2213CDC(this, typeValueGroup);
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
    v7 = sub_224BC3C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
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
    sub_2213CDC(this, 0);
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

  if ( (byte_5970CE6 & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_2213A60(&System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo);
    byte_5970CE6 = 1;
  }
  if ( !typeValueGroup )
    sub_2213CDC(this, typeValueGroup);
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
    v7 = sub_224BC3C(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0);
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
    sub_2213CDC(this, 0);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.imageValue;
}


bool ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}