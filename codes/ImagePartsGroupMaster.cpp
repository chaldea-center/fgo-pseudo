void __fastcall ImagePartsGroupMaster___ctor(ImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22279 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__, method);
    byte_4C22279 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string___ctor__);
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
  System_String_o *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C22275 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_String_Join_int___, *(_QWORD *)&id);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v7);
    byte_4C22275 = 1;
  }
  DefaultImageValues = (System_Collections_Generic_IEnumerable_T__o *)ImagePartsGroupMaster__GetDefaultImageValues(
                                                                        this,
                                                                        id,
                                                                        (const MethodInfo *)defaultName);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DefaultImageValues, 0LL) )
  {
    v9 = *defaultName;
    v10 = System_String__Join_int_(
            (System_String_o *)StringLiteral_16438/*"animationId"*/,
            DefaultImageValues,
            (const MethodInfo_3095570 *)Method_System_String_Join_int___);
    v11 = System_String__Concat_63379872(v9, (System_String_o *)StringLiteral_16438/*"animationId"*/, v10, 0LL);
    *defaultName = v11;
    sub_1C3B708((PartyOrganizationUtility_o *)defaultName, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  ImagePartsGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v7 = id;
  v8 = this;
  if ( (byte_4C22278 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1C3B764(&Method_System_String_Join_int___, v11);
    this = (ImagePartsGroupMaster_o *)sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v12);
    byte_4C22278 = 1;
  }
  entity = 0LL;
  if ( !idxs )
LABEL_21:
    sub_1C3B9C0(this, *(_QWORD *)&id);
  if ( !*(_QWORD *)&idxs->max_length )
    goto LABEL_19;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = *(_QWORD *)&idxs->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1C3B9C8(this, *(_QWORD *)&id);
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
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
            (System_String_o *)StringLiteral_16438/*"animationId"*/,
            (System_Collections_Generic_IEnumerable_T__o *)v13,
            (const MethodInfo_3095570 *)Method_System_String_Join_int___);
    v22 = System_String__Concat_63379872(v20, (System_String_o *)StringLiteral_16438/*"animationId"*/, v21, 0LL);
    *defaultName = v22;
    sub_1C3B708((PartyOrganizationUtility_o *)defaultName, (int64_t)v22, v23, v24, v25, v26, v27, v28);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v39; // x0
  ImagePartsGroupMaster___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x23
  System_Func_object__int__o *_9__2_1; // x24
  Il2CppObject *v43; // x25
  struct ImagePartsGroupMaster___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  __int64 v52; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x23
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v58; // x1
  __int64 v59; // x23
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x24
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x24
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  ImagePartsGroupEntity_o *v85; // x0
  const MethodInfo *v86; // x1
  ImagePartsGroupEntity_o *v87; // x25
  const MethodInfo *v88; // x2
  _BOOL8 IsOpen_40819452; // x0
  __int64 v90; // x1
  __int64 imageValue; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  System_String_o *v103; // x23
  System_String_o *v104; // x0
  System_String_o *v105; // x22
  System_String_o *v106; // x23
  int64_t v107; // x2
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  ImagePartsGroupMaster_o *v112; // [xsp+28h] [xbp-68h]

  if ( (byte_4C22274 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___, v8);
    sub_1C3B764(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo, v9);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__int__TypeInfo, v10);
    sub_1C3B764(&System_IDisposable_TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v14);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, v15);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1C3B764(&Method_System_String_Join_int___, v20);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__, v21);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__, v22);
    sub_1C3B764(&ImagePartsGroupMaster___c_TypeInfo, v23);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v24);
    sub_1C3B764(&StringLiteral_4511/*"CombineScene"*/, v25);
    byte_4C22274 = 1;
  }
  Entities = (System_Collections_ICollection_o *)ImagePartsGroupMaster__GetEntities(
                                                   this,
                                                   id,
                                                   (const MethodInfo *)defaultName);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    goto LABEL_88;
  v28 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v112 = this;
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
    _9__2_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v31,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_0__,
      0LL);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__2_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Entities,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_3014FAC *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
  v40 = ImagePartsGroupMaster___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
    v40 = ImagePartsGroupMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v40->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ImagePartsGroupMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v43,
      Method_ImagePartsGroupMaster___c__ConcatMaterialImageValues_b__2_1__,
      0LL);
    v44 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    v44->__9__2_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__2_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v44->__9__2_1, (int64_t)_9__2_1, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__OrderBy_object__int_(
          v41,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
  if ( !v51 )
    sub_1C3B9C0(0LL, v52);
  klass = v51->klass;
  v54 = v51;
  v55 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
    {
      --v55;
      p_offset += 4;
      if ( !v55 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C8D744(
                 v51,
                 System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                 0LL);
  }
  v59 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v54,
          *(_QWORD *)(p_method + 8));
  if ( !v59 )
    sub_1C3B9C0(0LL, v58);
  while ( 1 )
  {
    v60 = *(_QWORD *)v59;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_28;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_28:
      v63 = sub_1C8D744(v59, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) & 1) == 0 )
      break;
    v64 = *(_QWORD *)v59;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v66 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_35;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_35:
      v67 = sub_1C8D744(
              v59,
              System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
              0LL);
    }
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v59, *(_QWORD *)(v67 + 8));
    v70 = v68;
    if ( !v68 )
      sub_1C3B9C0(0LL, v69);
    v71 = *(_QWORD *)v68;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__c **)v73 - 1) != System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_42;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_42:
      v74 = sub_1C8D744(v68, System_Collections_Generic_IEnumerable_ImagePartsGroupEntity__TypeInfo, 0LL);
    }
    v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8));
    if ( !v76 )
      sub_1C3B9C0(0LL, v75);
    while ( 1 )
    {
      v77 = *(_QWORD *)v76;
      v78 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
      {
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v79 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v78;
          v79 += 4;
          if ( !v78 )
            goto LABEL_49;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_49:
        v80 = sub_1C8D744(v76, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8)) & 1) == 0 )
        break;
      v81 = *(_QWORD *)v76;
      v82 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
      {
        v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__c **)v83 - 1) != System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo )
        {
          --v82;
          v83 += 4;
          if ( !v82 )
            goto LABEL_56;
        }
        v84 = v81 + 16LL * *v83 + 312;
      }
      else
      {
LABEL_56:
        v84 = sub_1C8D744(v76, System_Collections_Generic_IEnumerator_ImagePartsGroupEntity__TypeInfo, 0LL);
      }
      v85 = (ImagePartsGroupEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v76, *(_QWORD *)(v84 + 8));
      v87 = v85;
      if ( !v85 )
        sub_1C3B9C0(0LL, v86);
      if ( ImagePartsGroupEntity__IsUseEquipImage(v85, v86) )
      {
        IsOpen_40819452 = ImagePartsGroupEntity__IsOpen_40819452(v87, 1, v88);
        if ( IsOpen_40819452 )
        {
          if ( !v28 )
            sub_1C3B9C0(IsOpen_40819452, v90);
          imageValue = (unsigned int)v87->fields.imageValue;
          items = v28->fields._items;
          v93 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1C3B9C0(IsOpen_40819452, imageValue);
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              imageValue,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
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
    v95 = *(_QWORD *)v76;
    v96 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
    {
      v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
      {
        --v96;
        v97 += 4;
        if ( !v96 )
          goto LABEL_70;
      }
      v98 = v95 + 16LL * *v97 + 312;
    }
    else
    {
LABEL_70:
      v98 = sub_1C8D744(v76, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v98)(v76, *(_QWORD *)(v98 + 8));
  }
  v99 = *(_QWORD *)v59;
  v100 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
  {
    v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
    {
      --v100;
      v101 += 4;
      if ( !v100 )
        goto LABEL_81;
    }
    v102 = v99 + 16LL * *v101 + 312;
  }
  else
  {
LABEL_81:
    v102 = sub_1C8D744(v59, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v102)(v59, *(_QWORD *)(v102 + 8));
  this = v112;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v28, 0LL) )
    goto LABEL_88;
  v103 = *defaultName;
  v104 = System_String__Join_int_(
           (System_String_o *)StringLiteral_16438/*"animationId"*/,
           (System_Collections_Generic_IEnumerable_T__o *)v28,
           (const MethodInfo_3095570 *)Method_System_String_Join_int___);
  v105 = System_String__Concat_63379872(v103, (System_String_o *)StringLiteral_16438/*"animationId"*/, v104, 0LL);
  v106 = System_String__Concat_63368612((System_String_o *)StringLiteral_4511/*"CombineScene"*/, v105, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v106, 0LL) )
  {
LABEL_88:
    ImagePartsGroupMaster__ConcatDefaultImageValues(this, id, defaultName, v27);
  }
  else
  {
    *defaultName = v105;
    sub_1C3B708((PartyOrganizationUtility_o *)defaultName, (int64_t)v105, v107, (int32_t)v27, v108, v109, v110, v111);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v35; // x0
  ImagePartsGroupMaster___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v39; // x22
  struct ImagePartsGroupMaster___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x20
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v54; // x1
  __int64 v55; // x20
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  ImagePartsGroupMaster___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x21
  System_Func_object__bool__o *_9__4_2; // x22
  Il2CppObject *v68; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  ImagePartsGroupMaster___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x21
  System_Func_object__int__o *_9__4_3; // x22
  Il2CppObject *v80; // x23
  struct ImagePartsGroupMaster___c_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0

  if ( (byte_4C22276 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v7);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v8);
    sub_1C3B764(&System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo, v9);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__int__TypeInfo, v10);
    sub_1C3B764(&System_IDisposable_TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo, v13);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__, v18);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__, v19);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__, v20);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__, v21);
    sub_1C3B764(&ImagePartsGroupMaster___c_TypeInfo, v22);
    byte_4C22276 = 1;
  }
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)ImagePartsGroupMaster__GetEntities(this, id, method);
  v24 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0LL) )
  {
    v24 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v24,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
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
      _9__4_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__4_0,
        v27,
        Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_0__,
        0LL);
      static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = System_Linq_Enumerable__GroupBy_object__int_(
            Entities,
            (System_Func_TSource__TKey__o *)_9__4_0,
            (const MethodInfo_3014FAC *)Method_System_Linq_Enumerable_GroupBy_ImagePartsGroupEntity__int___);
    v36 = ImagePartsGroupMaster___c_TypeInfo;
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
    if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
      v36 = ImagePartsGroupMaster___c_TypeInfo;
    }
    _9__4_1 = (System_Func_object__int__o *)v36->static_fields->__9__4_1;
    if ( !_9__4_1 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = ImagePartsGroupMaster___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__4_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_IGrouping_int__ImagePartsGroupEntity___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__4_1,
        v39,
        Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_1__,
        0LL);
      v40 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
      v40->__9__4_1 = (struct System_Func_IGrouping_int__ImagePartsGroupEntity___int__o *)_9__4_1;
      sub_1C3B708((PartyOrganizationUtility_o *)&v40->__9__4_1, (int64_t)_9__4_1, v41, v42, v43, v44, v45, v46);
    }
    v47 = System_Linq_Enumerable__OrderBy_object__int_(
            v37,
            (System_Func_TSource__TKey__o *)_9__4_1,
            (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_IGrouping_int__ImagePartsGroupEntity___int___);
    if ( !v47 )
      sub_1C3B9C0(0LL, v48);
    klass = v47->klass;
    v50 = v47;
    v51 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
      {
        --v51;
        p_offset += 4;
        if ( !v51 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_1C8D744(
                   v47,
                   System_Collections_Generic_IEnumerable_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                   0LL);
    }
    v55 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v50,
            *(_QWORD *)(p_method + 8));
    if ( !v55 )
      sub_1C3B9C0(0LL, v54);
    while ( 1 )
    {
      v56 = *(_QWORD *)v55;
      v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
      {
        v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v57;
          v58 += 4;
          if ( !v57 )
            goto LABEL_28;
        }
        v59 = v56 + 16LL * *v58 + 312;
      }
      else
      {
LABEL_28:
        v59 = sub_1C8D744(v55, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
        break;
      v60 = *(_QWORD *)v55;
      v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___c **)v62 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_35;
        }
        v63 = v60 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_35:
        v63 = sub_1C8D744(
                v55,
                System_Collections_Generic_IEnumerator_IGrouping_int__ImagePartsGroupEntity___TypeInfo,
                0LL);
      }
      v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
      v65 = ImagePartsGroupMaster___c_TypeInfo;
      v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v64;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v65 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_2 = (System_Func_object__bool__o *)v65->static_fields->__9__4_2;
      if ( !_9__4_2 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v68 = (Il2CppObject *)v65->static_fields->__9;
        _9__4_2 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__4_2,
          v68,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_2__,
          0LL);
        v69 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v69->__9__4_2 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__4_2;
        sub_1C3B708((PartyOrganizationUtility_o *)&v69->__9__4_2, (int64_t)_9__4_2, v70, v71, v72, v73, v74, v75);
      }
      v76 = System_Linq_Enumerable__Where_object_(
              v66,
              (System_Func_TSource__bool__o *)_9__4_2,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
      v77 = ImagePartsGroupMaster___c_TypeInfo;
      v78 = v76;
      if ( !ImagePartsGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImagePartsGroupMaster___c_TypeInfo);
        v77 = ImagePartsGroupMaster___c_TypeInfo;
      }
      _9__4_3 = (System_Func_object__int__o *)v77->static_fields->__9__4_3;
      if ( !_9__4_3 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = ImagePartsGroupMaster___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v77->static_fields->__9;
        _9__4_3 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__4_3,
          v80,
          Method_ImagePartsGroupMaster___c__GetDefaultImageValues_b__4_3__,
          0LL);
        v81 = ImagePartsGroupMaster___c_TypeInfo->static_fields;
        v81->__9__4_3 = (struct System_Func_ImagePartsGroupEntity__int__o *)_9__4_3;
        sub_1C3B708((PartyOrganizationUtility_o *)&v81->__9__4_3, (int64_t)_9__4_3, v82, v83, v84, v85, v86, v87);
      }
      v88 = System_Linq_Enumerable__Min_object_(
              v78,
              (System_Func_TSource__int__o *)_9__4_3,
              (const MethodInfo_3019C88 *)Method_System_Linq_Enumerable_Min_ImagePartsGroupEntity___);
      if ( !v24 )
        sub_1C3B9C0(v88, (unsigned int)v88);
      items = v24->fields._items;
      v90 = Method_System_Collections_Generic_List_int__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1C3B9C0(v88, (unsigned int)v88);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v24,
          v88,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v24->fields._size = size + 1;
        items->m_Items[size + 1] = v88;
      }
    }
    v92 = *(_QWORD *)v55;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_58;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_58:
      v95 = sub_1C8D744(v55, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v95)(v55, *(_QWORD *)(v95 + 8));
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

  if ( (byte_4C22277 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___, *(_QWORD *)&questId);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v5);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__, v6);
    sub_1C3B764(&ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo, v7);
    byte_4C22277 = 1;
  }
  v8 = sub_1C3B9B0(ImagePartsGroupMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_DWORD *)(v8 + 16) = questId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ImagePartsGroupMaster___c__DisplayClass6_0__GetDispDialogEntityFromQuestId_b__0__,
    0LL);
  return (ImagePartsGroupEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50415372(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                      (System_Func_TSource__bool__o *)v12,
                                      (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_ImagePartsGroupEntity___);
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

  if ( (byte_4C22272 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v5);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v6);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__, v7);
    sub_1C3B764(&ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo, v8);
    byte_4C22272 = 1;
  }
  v9 = sub_1C3B9B0(ImagePartsGroupMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_DWORD *)(v9 + 16) = id;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ImagePartsGroupMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v14,
                                          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
ImagePartsGroupEntity_o *__fastcall ImagePartsGroupMaster__GetEntity(
        ImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2227A & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4C2227A = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (ImagePartsGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_329F900 *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__GetEntity__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4C22273 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___, v5);
    sub_1C3B764(&System_Func_ImagePartsGroupEntity__bool__TypeInfo, v6);
    sub_1C3B764(&Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, v7);
    sub_1C3B764(&ImagePartsGroupMaster___c_TypeInfo, v8);
    byte_4C22273 = 1;
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
    _9__1_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v13, Method_ImagePartsGroupMaster___c__GetOpenEntities_b__1_0__, 0LL);
    static_fields = ImagePartsGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__1_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  return (ImagePartsGroupEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                          v21,
                                          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
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

  if ( (byte_4C2227B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__, entity);
    byte_4C2227B = 1;
  }
  PK = (Il2CppObject *)ImagePartsGroupEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ImagePartsGroupMaster__ImagePartsGroupEntity__string__TryGetEntity__);
}


void __fastcall ImagePartsGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2227C & 1) == 0 )
  {
    sub_1C3B764(&ImagePartsGroupMaster___c_TypeInfo, v1);
    byte_4C2227C = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ImagePartsGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ImagePartsGroupMaster___c_TypeInfo->static_fields->__9 = (struct ImagePartsGroupMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ImagePartsGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C2227D & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C3B764(
                                            &System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo,
                                            typeValueGroup);
    byte_4C2227D = 1;
  }
  if ( !typeValueGroup )
    sub_1C3B9C0(this, typeValueGroup);
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
    p_method = sub_1C8D744(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C2227E & 1) == 0 )
  {
    this = (ImagePartsGroupMaster___c_o *)sub_1C3B764(
                                            &System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo,
                                            typeValueGroup);
    byte_4C2227E = 1;
  }
  if ( !typeValueGroup )
    sub_1C3B9C0(this, typeValueGroup);
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
    p_method = sub_1C8D744(typeValueGroup, System_Linq_IGrouping_int__ImagePartsGroupEntity__TypeInfo, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return ImagePartsGroupEntity__IsUseEquipImage(entity, (const MethodInfo *)entity);
}


int32_t __fastcall ImagePartsGroupMaster___c___GetDefaultImageValues_b__4_3(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.imageValue;
}


bool __fastcall ImagePartsGroupMaster___c___GetOpenEntities_b__1_0(
        ImagePartsGroupMaster___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return v->fields.condType == 1
      && v->fields.condId == this->fields.questId
      && ImagePartsGroupEntity__ExistsSkill(v, (const MethodInfo *)v);
}