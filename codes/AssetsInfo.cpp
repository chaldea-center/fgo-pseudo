void AssetsInfo___ctor(AssetsInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB5622 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5622 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.sceneName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sceneName, v5, v2, v3);
  if ( !byte_4CAFAE9 )
  {
    sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
  }
  this->fields.scrollPos = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AssetsInfo__CacheAllAssetsInfo(AssetsInfo_o *this, const MethodInfo *method)
{
  ;
}


void AssetsInfo__CacheAssetInfo(
        AssetsInfo_o *this,
        System_Collections_Generic_List_AssetData__o *assetList,
        System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *info,
        const MethodInfo *method)
{
  unsigned int Count; // w0
  System_Object_array *v7; // x26
  System_Collections_Generic_List_object__o *v8; // x21
  AssetsInfo___c_c *v9; // x0
  System_Func_object__bool__o *_9__9_0; // x24
  Il2CppObject *v11; // x25
  struct AssetsInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetsInfo_c *klass; // x8
  AssetsInfo_o *v16; // x23
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x24
  Il2CppObject *v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  Il2CppObject *v40; // x25
  struct System_String_o *sceneName; // x27
  __int64 v42; // x26
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *Item; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v52; // x20
  Il2CppObject *v53; // x22
  System_Object_array *v54; // [xsp+0h] [xbp-70h]
  AssetsInfo_o *v55; // [xsp+8h] [xbp-68h]

  v55 = this;
  if ( (byte_4CB5620 & 1) == 0 )
  {
    sub_1C6BA08(&AssetsInfo_DataInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_AssetData___);
    sub_1C6BA08(&System_Func_AssetData__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_AssetData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_AssetData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_AssetsInfo___c__CacheAssetInfo_b__9_0__);
    this = (AssetsInfo_o *)sub_1C6BA08(&AssetsInfo___c_TypeInfo);
    byte_4CB5620 = 1;
  }
  if ( assetList )
  {
    if ( !info )
      goto LABEL_63;
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_34BB61C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    Count = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
              (const MethodInfo_37260A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    v7 = (System_Object_array *)sub_1C6BAB0(string___TypeInfo, Count);
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_34BB61C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___CopyTo(
      (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
      v7,
      0,
      (const MethodInfo_3725F98 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    v9 = AssetsInfo___c_TypeInfo;
    if ( !AssetsInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo___c_TypeInfo);
      v9 = AssetsInfo___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__bool__o *)v9->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = AssetsInfo___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__9_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssetData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__9_0, v11, Method_AssetsInfo___c__CacheAssetInfo_b__9_0__, 0);
      static_fields = AssetsInfo___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_AssetData__bool__o *)_9__9_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14);
    }
    this = (AssetsInfo_o *)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)assetList,
                             (System_Func_TSource__bool__o *)_9__9_0,
                             (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_AssetData___);
    if ( !this )
      goto LABEL_63;
    klass = this->klass;
    v16 = this;
    v17 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_AssetData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssetData__TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_18:
      v19 = sub_1C41D90(this, System_Collections_Generic_IEnumerable_AssetData__TypeInfo, 0);
    }
    v54 = v7;
    v21 = (*(__int64 (__fastcall **)(AssetsInfo_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
    if ( !v21 )
      sub_1C6BC60(0, v20);
    while ( 1 )
    {
      v22 = *(_QWORD *)v21;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_25;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_25:
        v25 = sub_1C41D90(v21, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v21;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_AssetData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_AssetData__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_32;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_32:
        v29 = sub_1C41D90(v21, System_Collections_Generic_IEnumerator_AssetData__TypeInfo, 0);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
      v34 = v30;
      if ( !v30 )
        sub_1C6BC60(0, v31);
      if ( !v8 )
        sub_1C6BC60(v30, v31);
      v35 = *(Il2CppObject **)(v30 + 24);
      items = v8->fields._items;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C6BC60(v30, v35);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v35,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v35, v32, v33);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)info,
              *(Il2CppObject **)(v34 + 24),
              (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__) )
      {
        v40 = *(Il2CppObject **)(v34 + 24);
        sceneName = v55->fields.sceneName;
        v42 = sub_1C6BC54(AssetsInfo_DataInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v42, 0);
        *(_QWORD *)(v42 + 16) = sceneName;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 16), (int32_t)sceneName, v43, v44);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)info,
          v40,
          (Il2CppObject *)v42,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)info,
               *(Il2CppObject **)(v34 + 24),
               (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
      if ( !Item )
        sub_1C6BC60(0, v46);
      LODWORD(Item[1].monitor) = *(_DWORD *)(v34 + 84);
    }
    v47 = *(_QWORD *)v21;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_48;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_48:
      v50 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
    }
    this = (AssetsInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v21, *(_QWORD *)(v50 + 8));
    if ( !v54 )
LABEL_63:
      sub_1C6BC60(this, assetList);
    max_length = v54->max_length;
    if ( (int)max_length >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v52 >= (unsigned int)max_length )
          sub_1C6BC68(this);
        if ( !v8 )
          break;
        v53 = v54->m_Items[v52];
        this = (AssetsInfo_o *)System_Collections_Generic_List_object___Contains(
                                 v8,
                                 v53,
                                 (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                   (System_Collections_Generic_Dictionary_object__object__o *)info,
                                   v53,
                                   (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
        LODWORD(max_length) = v54->max_length;
        if ( (__int64)++v52 >= (int)max_length )
          return;
      }
      goto LABEL_63;
    }
  }
}


void AssetsInfo__OnGUI(AssetsInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  AssetsInfo_AssetsInfoData_o *currentAssets; // x0
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20
  System_String_o *Paths; // x0
  System_String_o *v9; // x20
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t sortType; // w8
  __int64 v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  long double v19; // q0
  __int64 v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w8
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  long double v31; // q0
  _QWORD *v32; // x21
  float y; // s8
  float x; // s9
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  long double v38; // q0
  UnityEngine_Vector2_o v39; // kr00_8
  _QWORD *v40; // x19
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB5621 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_GUILayoutOption___);
    sub_1C6BA08(&UnityEngine_GUILayoutOption___TypeInfo);
    sub_1C6BA08(&UnityEngine_GUI_TypeInfo);
    sub_1C6BA08(&StringLiteral_25531/*"ソート：シーン名"*/);
    sub_1C6BA08(&StringLiteral_1530/*"<Asset>\n"*/);
    sub_1C6BA08(&StringLiteral_25530/*"ソート：アセットパス"*/);
    sub_1C6BA08(&StringLiteral_25532/*"ソート：デフォルト"*/);
    sub_1C6BA08(&StringLiteral_48/*"\n\n<Resource>\n"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5621 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    currentAssets = this->fields.currentAssets;
    if ( !currentAssets )
      goto LABEL_59;
    currentAssets = (AssetsInfo_AssetsInfoData_o *)AssetsInfo_AssetsInfoData__GetPaths(
                                                     currentAssets,
                                                     this->fields.sortType,
                                                     v4);
    if ( !this->fields.currentResources )
      goto LABEL_59;
    v7 = (System_String_o *)currentAssets;
    Paths = AssetsInfo_AssetsInfoData__GetPaths(this->fields.currentResources, this->fields.sortType, v6);
    v9 = System_String__Concat_64007060(
           (System_String_o *)StringLiteral_1530/*"<Asset>\n"*/,
           v7,
           (System_String_o *)StringLiteral_48/*"\n\n<Resource>\n"*/,
           Paths,
           0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v45.fields.m_XMin = 5.0;
    v45.fields.m_YMin = 5.0;
    v45.fields.m_Height = 825.0;
    v45.fields.m_Width = 400.0;
    UnityEngine_GUI__Box(v45, (System_String_o *)StringLiteral_1/*""*/, 0);
    v11 = Method_System_Array_Empty_GUILayoutOption___;
    v12 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v12 )
    {
      sub_1C41AF8(Method_System_Array_Empty_GUILayoutOption___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C41A9C(inited);
    UnityEngine_GUILayout__BeginVertical(**(UnityEngine_GUILayoutOption_array ***)(v14 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    sortType = this->fields.sortType;
    if ( sortType == 1 )
    {
      v20 = sub_1C6BAB0(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v20 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v20 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v20 + 32) = currentAssets;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)currentAssets, v21, v22);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25530/*"ソート：アセットパス"*/,
             (UnityEngine_GUILayoutOption_array *)v20,
             0) )
      {
        v23 = 2;
LABEL_33:
        this->fields.sortType = v23;
      }
    }
    else
    {
      if ( sortType == 2 )
      {
        v16 = sub_1C6BAB0(UnityEngine_GUILayoutOption___TypeInfo, 1);
        currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 24) )
          {
            *(_QWORD *)(v16 + 32) = currentAssets;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)currentAssets, v17, v18);
            if ( UnityEngine_GUILayout__Button(
                   (System_String_o *)StringLiteral_25531/*"ソート：シーン名"*/,
                   (UnityEngine_GUILayoutOption_array *)v16,
                   0) )
            {
              this->fields.sortType = 0;
            }
            goto LABEL_34;
          }
LABEL_60:
          sub_1C6BC68(currentAssets);
        }
LABEL_59:
        sub_1C6BC60(currentAssets, v3);
      }
      v24 = sub_1C6BAB0(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v24 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v24 + 32) = currentAssets;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)currentAssets, v25, v26);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25532/*"ソート：デフォルト"*/,
             (UnityEngine_GUILayoutOption_array *)v24,
             0) )
      {
        v23 = 1;
        goto LABEL_33;
      }
    }
LABEL_34:
    v27 = Method_System_Array_Empty_GUILayoutOption___;
    v28 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v28 )
    {
      sub_1C41AF8(Method_System_Array_Empty_GUILayoutOption___);
      v28 = v27[7];
    }
    v29 = *(_QWORD *)(v28 + 16);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C41A9C(v19);
    if ( !*(_DWORD *)(v29 + 224) )
      v19 = j_il2cpp_runtime_class_init_0(v29);
    v30 = *(_QWORD *)(v27[7] + 16LL);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C41A9C(v19);
    UnityEngine_GUILayout__BeginHorizontal(**(UnityEngine_GUILayoutOption_array ***)(v30 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    v32 = Method_System_Array_Empty_GUILayoutOption___;
    x = this->fields.scrollPos.fields.x;
    y = this->fields.scrollPos.fields.y;
    v35 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v35 )
    {
      sub_1C41AF8(Method_System_Array_Empty_GUILayoutOption___);
      v35 = v32[7];
    }
    v36 = *(_QWORD *)(v35 + 16);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C41A9C(v31);
    if ( !*(_DWORD *)(v36 + 224) )
      v31 = j_il2cpp_runtime_class_init_0(v36);
    v37 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C41A9C(v31);
    v44.fields.x = x;
    v44.fields.y = y;
    v39 = UnityEngine_GUILayout__BeginScrollView(v44, **(UnityEngine_GUILayoutOption_array ***)(v37 + 184), 0);
    *(float *)&v38 = v39.fields.x;
    this->fields.scrollPos = v39;
    v40 = Method_System_Array_Empty_GUILayoutOption___;
    v41 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v41 )
    {
      sub_1C41AF8(Method_System_Array_Empty_GUILayoutOption___);
      v41 = v40[7];
    }
    v42 = *(_QWORD *)(v41 + 16);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C41A9C(v38);
    if ( !*(_DWORD *)(v42 + 224) )
      v38 = j_il2cpp_runtime_class_init_0(v42);
    v43 = *(_QWORD *)(v40[7] + 16LL);
    if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
      v43 = sub_1C41A9C(v38);
    UnityEngine_GUILayout__Label(v9, **(UnityEngine_GUILayoutOption_array ***)(v43 + 184), 0);
    UnityEngine_GUILayout__EndScrollView(0);
    UnityEngine_GUILayout__EndHorizontal(0);
    UnityEngine_GUILayout__Space(10.0, 0);
    UnityEngine_GUILayout__EndVertical(0);
  }
}


void AssetsInfo_AssetsInfoData___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  __int64 v2; // x0
  Il2CppObject *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3

  if ( (byte_4CB5626 & 1) == 0 )
  {
    sub_1C6BA08(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_12853/*"ShopBanners/DownloadShopBanner"*/);
    sub_1C6BA08(&StringLiteral_4379/*"CharaGraphOption/CharaGraphOption"*/);
    sub_1C6BA08(&StringLiteral_8143/*"Items/DownloadItem"*/);
    sub_1C6BA08(&StringLiteral_4372/*"CharaFigure/8001000"*/);
    sub_1C6BA08(&StringLiteral_8928/*"Marks/DownloadMark"*/);
    sub_1C6BA08(&StringLiteral_6581/*"Faces/DownloadFace"*/);
    sub_1C6BA08(&StringLiteral_3042/*"Banner/DownloadBanner"*/);
    sub_1C6BA08(&StringLiteral_12897/*"SkillIcons/DownloadSkillIcon"*/);
    sub_1C6BA08(&StringLiteral_6100/*"EquipFaces/DownloadEquipFace"*/);
    sub_1C6BA08(&StringLiteral_4477/*"ClassIcons/DownloadClassIcons"*/);
    byte_4CB5626 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v1 )
    goto LABEL_45;
  v3 = (Il2CppObject *)StringLiteral_6581/*"Faces/DownloadFace"*/;
  items = v1->fields._items;
  v7 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_45;
  size = v1->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v9[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 4), (int32_t)v3, v4, v5);
  }
  v3 = (Il2CppObject *)StringLiteral_6100/*"EquipFaces/DownloadEquipFace"*/;
  v12 = v1->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v12 )
    goto LABEL_45;
  v14 = v1->fields._size;
  if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + v14;
    v1->fields._size = v14 + 1;
    v15[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v3, v10, v11);
  }
  v3 = (Il2CppObject *)StringLiteral_8143/*"Items/DownloadItem"*/;
  v18 = v1->fields._items;
  v19 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v18 )
    goto LABEL_45;
  v20 = v1->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->obj.klass + v20;
    v1->fields._size = v20 + 1;
    v21[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v3, v16, v17);
  }
  v3 = (Il2CppObject *)StringLiteral_4477/*"ClassIcons/DownloadClassIcons"*/;
  v24 = v1->fields._items;
  v25 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v24 )
    goto LABEL_45;
  v26 = v1->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v1->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v3, v22, v23);
  }
  v3 = (Il2CppObject *)StringLiteral_12897/*"SkillIcons/DownloadSkillIcon"*/;
  v30 = v1->fields._items;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v30 )
    goto LABEL_45;
  v32 = v1->fields._size;
  if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v3, v28, v29);
  }
  v3 = (Il2CppObject *)StringLiteral_3042/*"Banner/DownloadBanner"*/;
  v36 = v1->fields._items;
  v37 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v36 )
    goto LABEL_45;
  v38 = v1->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v1->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v3, v34, v35);
  }
  v3 = (Il2CppObject *)StringLiteral_8928/*"Marks/DownloadMark"*/;
  v42 = v1->fields._items;
  v43 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v42 )
    goto LABEL_45;
  v44 = v1->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v1->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v3, v40, v41);
  }
  v3 = (Il2CppObject *)StringLiteral_12853/*"ShopBanners/DownloadShopBanner"*/;
  v48 = v1->fields._items;
  v49 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v48 )
    goto LABEL_45;
  v50 = v1->fields._size;
  if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v48->obj.klass + v50;
    v1->fields._size = v50 + 1;
    v51[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v3, v46, v47);
  }
  v3 = (Il2CppObject *)StringLiteral_4379/*"CharaGraphOption/CharaGraphOption"*/;
  v54 = v1->fields._items;
  v55 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v54 )
    goto LABEL_45;
  v56 = v1->fields._size;
  if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v1->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v3, v52, v53);
  }
  v3 = (Il2CppObject *)StringLiteral_4372/*"CharaFigure/8001000"*/;
  v60 = v1->fields._items;
  v61 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v60 )
LABEL_45:
    sub_1C6BC60(v2, v3);
  v62 = v1->fields._size;
  if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v1->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v3, v58, v59);
  }
  AssetsInfo_AssetsInfoData_TypeInfo->static_fields->IGNORE_LIST = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetsInfo_AssetsInfoData_TypeInfo->static_fields, (int32_t)v1, v64, v65);
}


void AssetsInfo_AssetsInfoData___ctor(AssetsInfo_AssetsInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5625 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
    byte_4CB5625 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
  this->fields.assets = (struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *AssetsInfo_AssetsInfoData__GetPaths(
        AssetsInfo_AssetsInfoData_o *this,
        int32_t sortType,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x19
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *assets; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  AssetsInfo_AssetsInfoData___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x22
  System_Func_object__bool__o *_9__2_0; // x23
  Il2CppObject *v12; // x24
  struct AssetsInfo_AssetsInfoData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x22
  AssetsInfo_AssetsInfoData___c_c *v17; // x0
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v19; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Func_object__object__o *v23; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  AssetsInfo_AssetsInfoData___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x21
  System_Func_object__object__o *_9__2_3; // x22
  Il2CppObject *v28; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x21
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x22
  struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *v48; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v50; // x1
  System_String_o *Info; // x0
  System_String_o *v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  if ( (byte_4CB5624 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_string__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ThenBy_string__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C6BA08(&System_Func_string__string__TypeInfo);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__);
    sub_1C6BA08(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__);
    sub_1C6BA08(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__);
    sub_1C6BA08(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB5624 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  assets = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assets;
  if ( !assets )
    goto LABEL_63;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           assets,
           (const MethodInfo_34BB61C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
  v9 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
    v9 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v12, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__, 0);
    static_fields = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_string__bool__o *)_9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v14, v15);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                        v10,
                                                                        (System_Func_TSource__bool__o *)_9__2_0,
                                                                        (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_string___);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  if ( sortType == 2 )
  {
    v23 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
    System_Func_object__object____ctor(
      v23,
      (Il2CppObject *)this,
      Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__,
      0);
    v24 = System_Linq_Enumerable__OrderBy_object__object_(
            v16,
            (System_Func_TSource__TKey__o *)v23,
            (const MethodInfo_316AC70 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
    v25 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    v26 = v24;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v25 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_3 = (System_Func_object__object__o *)v25->static_fields->__9__2_3;
    if ( !_9__2_3 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__2_3 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_3, v28, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__, 0);
      v29 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v29->__9__2_3 = (struct System_Func_string__string__o *)_9__2_3;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v29->__9__2_3, (int32_t)_9__2_3, v30, v31);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ThenBy_object__object_(
                                                                          v26,
                                                                          (System_Func_TSource__TKey__o *)_9__2_3,
                                                                          (const MethodInfo_317A544 *)Method_System_Linq_Enumerable_ThenBy_string__string___);
    goto LABEL_26;
  }
  if ( sortType == 1 )
  {
    v17 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v17 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v17->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v19, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__, 0);
      v20 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v20->__9__2_1 = (struct System_Func_string__string__o *)_9__2_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v20->__9__2_1, (int32_t)_9__2_1, v21, v22);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__OrderBy_object__object_(
                                                                          v16,
                                                                          (System_Func_TSource__TKey__o *)_9__2_1,
                                                                          (const MethodInfo_316AC70 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
LABEL_26:
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  }
  if ( !v16 )
    goto LABEL_63;
  klass = v16->klass;
  v33 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_32:
    v35 = sub_1C41D90(v16, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v35)(
          v16,
          *(_QWORD *)(v35 + 8));
  if ( !v37 )
    sub_1C6BC60(0, v36);
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
          goto LABEL_39;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_39:
      v41 = sub_1C41D90(v37, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v42 = *(_QWORD *)v37;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v44 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_46;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_46:
      v45 = sub_1C41D90(v37, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v47 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
    v48 = this->fields.assets;
    if ( !v48 )
      sub_1C6BC60(0, v46);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v48,
             v47,
             (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    if ( !Item )
      sub_1C6BC60(0, v50);
    Info = AssetsInfo_DataInfo__GetInfo((AssetsInfo_DataInfo_o *)Item, v50);
    v52 = System_String__Concat_64005056((System_String_o *)v47, (System_String_o *)StringLiteral_1449/*":"*/, Info, 0);
    if ( !v5 )
      sub_1C6BC60(v52, v52);
    System_Text_StringBuilder__AppendLine_64051976(v5, v52, 0);
  }
  v53 = *(_QWORD *)v37;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_56;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_56:
    v56 = sub_1C41D90(v37, System_IDisposable_TypeInfo, 0);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(
                                                                        v37,
                                                                        *(_QWORD *)(v56 + 8));
  if ( !v5 )
LABEL_63:
    sub_1C6BC60(assets, v6);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
                              v5,
                              v5->klass->vtable._3_ToString.method);
}


System_String_o *AssetsInfo_AssetsInfoData___GetPaths_b__2_2(
        AssetsInfo_AssetsInfoData_o *this,
        System_String_o *k,
        const MethodInfo *method)
{
  void *assets; // x0

  if ( (byte_4CB5627 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    byte_4CB5627 = 1;
  }
  assets = this->fields.assets;
  if ( !assets
    || (assets = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)assets,
                   (Il2CppObject *)k,
                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__)) == 0 )
  {
    sub_1C6BC60(assets, k);
  }
  return (System_String_o *)*((_QWORD *)assets + 2);
}


void AssetsInfo_AssetsInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5628 & 1) == 0 )
  {
    sub_1C6BA08(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    byte_4CB5628 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssetsInfo_AssetsInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields->__9 = (struct AssetsInfo_AssetsInfoData___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetsInfo_AssetsInfoData___c___ctor(AssetsInfo_AssetsInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetsInfo_AssetsInfoData___c___GetPaths_b__2_0(
        AssetsInfo_AssetsInfoData___c_o *this,
        System_String_o *k,
        const MethodInfo *method)
{
  AssetsInfo_AssetsInfoData_c *v4; // x0
  System_Collections_Generic_List_object__o *IGNORE_LIST; // x0

  if ( (byte_4CB5629 & 1) == 0 )
  {
    sub_1C6BA08(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CB5629 = 1;
  }
  v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  if ( !AssetsInfo_AssetsInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData_TypeInfo);
    v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  }
  IGNORE_LIST = (System_Collections_Generic_List_object__o *)v4->static_fields->IGNORE_LIST;
  if ( !IGNORE_LIST )
    sub_1C6BC60(0, k);
  return !System_Collections_Generic_List_object___Contains(
            IGNORE_LIST,
            (Il2CppObject *)k,
            (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
}


System_String_o *AssetsInfo_AssetsInfoData___c___GetPaths_b__2_1(
        AssetsInfo_AssetsInfoData___c_o *this,
        System_String_o *k,
        const MethodInfo *method)
{
  return k;
}


System_String_o *AssetsInfo_AssetsInfoData___c___GetPaths_b__2_3(
        AssetsInfo_AssetsInfoData___c_o *this,
        System_String_o *k,
        const MethodInfo *method)
{
  return k;
}


void AssetsInfo_DataInfo___ctor(AssetsInfo_DataInfo_o *this, System_String_o *scene, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.initScene = scene;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)scene, v5, v6);
}


System_String_o *AssetsInfo_DataInfo__GetInfo(AssetsInfo_DataInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB5623 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_748/*"({0}) - {1}"*/);
    byte_4CB5623 = 1;
  }
  count = this->fields.count;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
  return System_String__Format_64008100(
           (System_String_o *)StringLiteral_748/*"({0}) - {1}"*/,
           v3,
           (Il2CppObject *)this->fields.initScene,
           0);
}


void AssetsInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB562A & 1) == 0 )
  {
    sub_1C6BA08(&AssetsInfo___c_TypeInfo);
    byte_4CB562A = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssetsInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo___c_TypeInfo->static_fields->__9 = (struct AssetsInfo___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetsInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetsInfo___c___ctor(AssetsInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetsInfo___c___CacheAssetInfo_b__9_0(AssetsInfo___c_o *this, AssetData_o *a, const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return !AssetData__get_IsEmpty(a, 0);
}