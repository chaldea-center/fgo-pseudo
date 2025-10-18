void AssetsInfo___ctor(AssetsInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C42319 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42319 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.sceneName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sceneName, v5, v2, v3);
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
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
  __int64 v20; // x23
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x24
  Il2CppObject *v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  Il2CppObject *v38; // x25
  struct System_String_o *sceneName; // x27
  __int64 v40; // x26
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *Item; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v49; // x20
  Il2CppObject *v50; // x22
  System_Object_array *v51; // [xsp+0h] [xbp-70h]
  AssetsInfo_o *v52; // [xsp+8h] [xbp-68h]

  v52 = this;
  if ( (byte_4C42317 & 1) == 0 )
  {
    sub_1C37058(&AssetsInfo_DataInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_AssetData___);
    sub_1C37058(&System_Func_AssetData__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_AssetData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_AssetData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_AssetsInfo___c__CacheAssetInfo_b__9_0__);
    this = (AssetsInfo_o *)sub_1C37058(&AssetsInfo___c_TypeInfo);
    byte_4C42317 = 1;
  }
  if ( assetList )
  {
    if ( !info )
      goto LABEL_63;
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    Count = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
              (const MethodInfo_36C86E4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    v7 = (System_Object_array *)sub_1C37100(string___TypeInfo, Count);
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___CopyTo(
      (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
      v7,
      0,
      (const MethodInfo_36C85D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
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
      _9__9_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_AssetData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__9_0, v11, Method_AssetsInfo___c__CacheAssetInfo_b__9_0__, 0);
      static_fields = AssetsInfo___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_AssetData__bool__o *)_9__9_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14);
    }
    this = (AssetsInfo_o *)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)assetList,
                             (System_Func_TSource__bool__o *)_9__9_0,
                             (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_AssetData___);
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
      v19 = sub_1C87870(this, System_Collections_Generic_IEnumerable_AssetData__TypeInfo, 0);
    }
    v51 = v7;
    v20 = (*(__int64 (__fastcall **)(AssetsInfo_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_25;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_25:
        v24 = sub_1C87870(v20, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_AssetData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_AssetData__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_32;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_32:
        v28 = sub_1C87870(v20, System_Collections_Generic_IEnumerator_AssetData__TypeInfo, 0);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      v32 = v29;
      if ( !v29 )
        sub_1C372B4(0);
      if ( !v8 )
        sub_1C372B4(v29);
      v33 = *(Il2CppObject **)(v29 + 24);
      items = v8->fields._items;
      v35 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C372B4(v29);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v33,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v33, v30, v31);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)info,
              *(Il2CppObject **)(v32 + 24),
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__) )
      {
        v38 = *(Il2CppObject **)(v32 + 24);
        sceneName = v52->fields.sceneName;
        v40 = sub_1C372A4(AssetsInfo_DataInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v40, 0);
        *(_QWORD *)(v40 + 16) = sceneName;
        sub_1C36FFC((CGThumbnailListItem_o *)(v40 + 16), (int32_t)sceneName, v41, v42);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)info,
          v38,
          (Il2CppObject *)v40,
          (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)info,
               *(Il2CppObject **)(v32 + 24),
               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
      if ( !Item )
        sub_1C372B4(0);
      LODWORD(Item[1].monitor) = *(_DWORD *)(v32 + 84);
    }
    v44 = *(_QWORD *)v20;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_48;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_48:
      v47 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
    }
    this = (AssetsInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v20, *(_QWORD *)(v47 + 8));
    if ( !v51 )
LABEL_63:
      sub_1C372B4(this);
    max_length = v51->max_length;
    if ( (int)max_length >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= (unsigned int)max_length )
          sub_1C372BC(this);
        if ( !v8 )
          break;
        v50 = v51->m_Items[v49];
        this = (AssetsInfo_o *)System_Collections_Generic_List_object___Contains(
                                 v8,
                                 v50,
                                 (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                   (System_Collections_Generic_Dictionary_object__object__o *)info,
                                   v50,
                                   (const MethodInfo_3464B2C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
        LODWORD(max_length) = v51->max_length;
        if ( (__int64)++v49 >= (int)max_length )
          return;
      }
      goto LABEL_63;
    }
  }
}


void AssetsInfo__OnGUI(AssetsInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  AssetsInfo_AssetsInfoData_o *currentAssets; // x0
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20
  System_String_o *Paths; // x0
  System_String_o *v8; // x20
  long double inited; // q0
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t sortType; // w8
  __int64 v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double v18; // q0
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w8
  __int64 v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  long double v30; // q0
  _QWORD *v31; // x21
  float y; // s8
  float x; // s9
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  long double v37; // q0
  UnityEngine_Vector2_o v38; // kr00_8
  _QWORD *v39; // x19
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C42318 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_System_Array_Empty_GUILayoutOption___);
    sub_1C37058(&UnityEngine_GUILayoutOption___TypeInfo);
    sub_1C37058(&UnityEngine_GUI_TypeInfo);
    sub_1C37058(&StringLiteral_25421/*"ソート：シーン名"*/);
    sub_1C37058(&StringLiteral_1538/*"<Asset>\n"*/);
    sub_1C37058(&StringLiteral_25420/*"ソート：アセットパス"*/);
    sub_1C37058(&StringLiteral_25422/*"ソート：デフォルト"*/);
    sub_1C37058(&StringLiteral_48/*"\n\n<Resource>\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42318 = 1;
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
                                                     v3);
    if ( !this->fields.currentResources )
      goto LABEL_59;
    v6 = (System_String_o *)currentAssets;
    Paths = AssetsInfo_AssetsInfoData__GetPaths(this->fields.currentResources, this->fields.sortType, v5);
    v8 = System_String__Concat_63601908(
           (System_String_o *)StringLiteral_1538/*"<Asset>\n"*/,
           v6,
           (System_String_o *)StringLiteral_48/*"\n\n<Resource>\n"*/,
           Paths,
           0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v44.fields.m_XMin = 5.0;
    v44.fields.m_YMin = 5.0;
    v44.fields.m_Height = 825.0;
    v44.fields.m_Width = 400.0;
    UnityEngine_GUI__Box(v44, (System_String_o *)StringLiteral_1/*""*/, 0);
    v10 = Method_System_Array_Empty_GUILayoutOption___;
    v11 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v11 )
    {
      sub_1C877C8(Method_System_Array_Empty_GUILayoutOption___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C8776C(inited);
    UnityEngine_GUILayout__BeginVertical(**(UnityEngine_GUILayoutOption_array ***)(v13 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    sortType = this->fields.sortType;
    if ( sortType == 1 )
    {
      v19 = sub_1C37100(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v19 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v19 + 32) = currentAssets;
      sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)currentAssets, v20, v21);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25420/*"ソート：アセットパス"*/,
             (UnityEngine_GUILayoutOption_array *)v19,
             0) )
      {
        v22 = 2;
LABEL_33:
        this->fields.sortType = v22;
      }
    }
    else
    {
      if ( sortType == 2 )
      {
        v15 = sub_1C37100(UnityEngine_GUILayoutOption___TypeInfo, 1);
        currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 24) )
          {
            *(_QWORD *)(v15 + 32) = currentAssets;
            sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)currentAssets, v16, v17);
            if ( UnityEngine_GUILayout__Button(
                   (System_String_o *)StringLiteral_25421/*"ソート：シーン名"*/,
                   (UnityEngine_GUILayoutOption_array *)v15,
                   0) )
            {
              this->fields.sortType = 0;
            }
            goto LABEL_34;
          }
LABEL_60:
          sub_1C372BC(currentAssets);
        }
LABEL_59:
        sub_1C372B4(currentAssets);
      }
      v23 = sub_1C37100(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v23 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v23 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v23 + 32) = currentAssets;
      sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)currentAssets, v24, v25);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25422/*"ソート：デフォルト"*/,
             (UnityEngine_GUILayoutOption_array *)v23,
             0) )
      {
        v22 = 1;
        goto LABEL_33;
      }
    }
LABEL_34:
    v26 = Method_System_Array_Empty_GUILayoutOption___;
    v27 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v27 )
    {
      sub_1C877C8(Method_System_Array_Empty_GUILayoutOption___);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C8776C(v18);
    if ( !*(_DWORD *)(v28 + 224) )
      v18 = j_il2cpp_runtime_class_init_0(v28);
    v29 = *(_QWORD *)(v26[7] + 16LL);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C8776C(v18);
    UnityEngine_GUILayout__BeginHorizontal(**(UnityEngine_GUILayoutOption_array ***)(v29 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    v31 = Method_System_Array_Empty_GUILayoutOption___;
    x = this->fields.scrollPos.fields.x;
    y = this->fields.scrollPos.fields.y;
    v34 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v34 )
    {
      sub_1C877C8(Method_System_Array_Empty_GUILayoutOption___);
      v34 = v31[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C8776C(v30);
    if ( !*(_DWORD *)(v35 + 224) )
      v30 = j_il2cpp_runtime_class_init_0(v35);
    v36 = *(_QWORD *)(v31[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C8776C(v30);
    v43.fields.x = x;
    v43.fields.y = y;
    v38 = UnityEngine_GUILayout__BeginScrollView(v43, **(UnityEngine_GUILayoutOption_array ***)(v36 + 184), 0);
    *(float *)&v37 = v38.fields.x;
    this->fields.scrollPos = v38;
    v39 = Method_System_Array_Empty_GUILayoutOption___;
    v40 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v40 )
    {
      sub_1C877C8(Method_System_Array_Empty_GUILayoutOption___);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C8776C(v37);
    if ( !*(_DWORD *)(v41 + 224) )
      v37 = j_il2cpp_runtime_class_init_0(v41);
    v42 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C8776C(v37);
    UnityEngine_GUILayout__Label(v8, **(UnityEngine_GUILayoutOption_array ***)(v42 + 184), 0);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  Il2CppObject *v5; // x1
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x1
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x1
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x1
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x1
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x1
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x1
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3

  if ( (byte_4C4231D & 1) == 0 )
  {
    sub_1C37058(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&StringLiteral_12849/*"ShopBanners/DownloadShopBanner"*/);
    sub_1C37058(&StringLiteral_4389/*"CharaGraphOption/CharaGraphOption"*/);
    sub_1C37058(&StringLiteral_8145/*"Items/DownloadItem"*/);
    sub_1C37058(&StringLiteral_4382/*"CharaFigure/8001000"*/);
    sub_1C37058(&StringLiteral_8931/*"Marks/DownloadMark"*/);
    sub_1C37058(&StringLiteral_6589/*"Faces/DownloadFace"*/);
    sub_1C37058(&StringLiteral_3050/*"Banner/DownloadBanner"*/);
    sub_1C37058(&StringLiteral_12893/*"SkillIcons/DownloadSkillIcon"*/);
    sub_1C37058(&StringLiteral_6110/*"EquipFaces/DownloadEquipFace"*/);
    sub_1C37058(&StringLiteral_4487/*"ClassIcons/DownloadClassIcons"*/);
    byte_4C4231D = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v1 )
    goto LABEL_45;
  v5 = (Il2CppObject *)StringLiteral_6589/*"Faces/DownloadFace"*/;
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
      v5,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v9[4] = (Il2CppClass *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 4), (int32_t)v5, v3, v4);
  }
  v12 = (Il2CppObject *)StringLiteral_6110/*"EquipFaces/DownloadEquipFace"*/;
  v13 = v1->fields._items;
  v14 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v13 )
    goto LABEL_45;
  v15 = v1->fields._size;
  if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v12,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &v13->obj.klass + v15;
    v1->fields._size = v15 + 1;
    v16[4] = (Il2CppClass *)v12;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
  }
  v19 = (Il2CppObject *)StringLiteral_8145/*"Items/DownloadItem"*/;
  v20 = v1->fields._items;
  v21 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v20 )
    goto LABEL_45;
  v22 = v1->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v19,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v1->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
  }
  v26 = (Il2CppObject *)StringLiteral_4487/*"ClassIcons/DownloadClassIcons"*/;
  v27 = v1->fields._items;
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v27 )
    goto LABEL_45;
  v29 = v1->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v26,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    v1->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v26;
    sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
  }
  v33 = (Il2CppObject *)StringLiteral_12893/*"SkillIcons/DownloadSkillIcon"*/;
  v34 = v1->fields._items;
  v35 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v34 )
    goto LABEL_45;
  v36 = v1->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v33,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v1->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v33;
    sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v33, v31, v32);
  }
  v40 = (Il2CppObject *)StringLiteral_3050/*"Banner/DownloadBanner"*/;
  v41 = v1->fields._items;
  v42 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v41 )
    goto LABEL_45;
  v43 = v1->fields._size;
  if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v40,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &v41->obj.klass + v43;
    v1->fields._size = v43 + 1;
    v44[4] = (Il2CppClass *)v40;
    sub_1C36FFC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v40, v38, v39);
  }
  v47 = (Il2CppObject *)StringLiteral_8931/*"Marks/DownloadMark"*/;
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
      v47,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v48->obj.klass + v50;
    v1->fields._size = v50 + 1;
    v51[4] = (Il2CppClass *)v47;
    sub_1C36FFC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v47, v45, v46);
  }
  v54 = (Il2CppObject *)StringLiteral_12849/*"ShopBanners/DownloadShopBanner"*/;
  v55 = v1->fields._items;
  v56 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v55 )
    goto LABEL_45;
  v57 = v1->fields._size;
  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v54,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v1->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v54;
    sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v54, v52, v53);
  }
  v61 = (Il2CppObject *)StringLiteral_4389/*"CharaGraphOption/CharaGraphOption"*/;
  v62 = v1->fields._items;
  v63 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v62 )
    goto LABEL_45;
  v64 = v1->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v61,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v1->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v61;
    sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
  }
  v68 = (Il2CppObject *)StringLiteral_4382/*"CharaFigure/8001000"*/;
  v69 = v1->fields._items;
  v70 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v69 )
LABEL_45:
    sub_1C372B4(v2);
  v71 = v1->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v68,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v1->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v68;
    sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v68, v66, v67);
  }
  AssetsInfo_AssetsInfoData_TypeInfo->static_fields->IGNORE_LIST = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetsInfo_AssetsInfoData_TypeInfo->static_fields, (int32_t)v1, v73, v74);
}


void AssetsInfo_AssetsInfoData___ctor(AssetsInfo_AssetsInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4231C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
    byte_4C4231C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
  this->fields.assets = (struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *AssetsInfo_AssetsInfoData__GetPaths(
        AssetsInfo_AssetsInfoData_o *this,
        int32_t sortType,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x19
  System_Collections_Generic_Dictionary_object__object__o *assets; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  AssetsInfo_AssetsInfoData___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x22
  System_Func_object__bool__o *_9__2_0; // x23
  Il2CppObject *v11; // x24
  struct AssetsInfo_AssetsInfoData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  AssetsInfo_AssetsInfoData___c_c *v16; // x0
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v18; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Func_object__object__o *v22; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x0
  AssetsInfo_AssetsInfoData___c_c *v24; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x21
  System_Func_object__object__o *_9__2_3; // x22
  Il2CppObject *v27; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x21
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  Il2CppObject *v44; // x22
  struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *v45; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v47; // x1
  System_String_o *Info; // x0
  System_String_o *v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0

  if ( (byte_4C4231B & 1) == 0 )
  {
    sub_1C37058(&Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_string__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_string__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C37058(&System_Func_string__string__TypeInfo);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__);
    sub_1C37058(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__);
    sub_1C37058(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__);
    sub_1C37058(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C4231B = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  assets = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assets;
  if ( !assets )
    goto LABEL_63;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           assets,
           (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
  v8 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
    v8 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v8->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v11, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__, 0);
    static_fields = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_string__bool__o *)_9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v13, v14);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                        v9,
                                                                        (System_Func_TSource__bool__o *)_9__2_0,
                                                                        (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_string___);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  if ( sortType == 2 )
  {
    v22 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo);
    System_Func_object__object____ctor(
      v22,
      (Il2CppObject *)this,
      Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__,
      0);
    v23 = System_Linq_Enumerable__OrderBy_object__object_(
            v15,
            (System_Func_TSource__TKey__o *)v22,
            (const MethodInfo_3117484 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
    v24 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    v25 = v23;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v24 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_3 = (System_Func_object__object__o *)v24->static_fields->__9__2_3;
    if ( !_9__2_3 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v24->static_fields->__9;
      _9__2_3 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_3, v27, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__, 0);
      v28 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v28->__9__2_3 = (struct System_Func_string__string__o *)_9__2_3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28->__9__2_3, (int32_t)_9__2_3, v29, v30);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ThenBy_object__object_(
                                                                          v25,
                                                                          (System_Func_TSource__TKey__o *)_9__2_3,
                                                                          (const MethodInfo_31265F0 *)Method_System_Linq_Enumerable_ThenBy_string__string___);
    goto LABEL_26;
  }
  if ( sortType == 1 )
  {
    v16 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v16 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v16->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v18, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__, 0);
      v19 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v19->__9__2_1 = (struct System_Func_string__string__o *)_9__2_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v19->__9__2_1, (int32_t)_9__2_1, v20, v21);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__OrderBy_object__object_(
                                                                          v15,
                                                                          (System_Func_TSource__TKey__o *)_9__2_1,
                                                                          (const MethodInfo_3117484 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
LABEL_26:
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  }
  if ( !v15 )
    goto LABEL_63;
  klass = v15->klass;
  v32 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_32:
    v34 = sub_1C87870(v15, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v34)(
          v15,
          *(_QWORD *)(v34 + 8));
  if ( !v35 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_39;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_39:
      v39 = sub_1C87870(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v42 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_46;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_46:
      v43 = sub_1C87870(v35, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v44 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v45 = this->fields.assets;
    if ( !v45 )
      sub_1C372B4(0);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v45,
             v44,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    if ( !Item )
      sub_1C372B4(0);
    Info = AssetsInfo_DataInfo__GetInfo((AssetsInfo_DataInfo_o *)Item, v47);
    v49 = System_String__Concat_63599904((System_String_o *)v44, (System_String_o *)StringLiteral_1457/*":"*/, Info, 0);
    if ( !v5 )
      sub_1C372B4(v49);
    System_Text_StringBuilder__AppendLine_63647944(v5, v49, 0);
  }
  v50 = *(_QWORD *)v35;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
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
    v53 = sub_1C87870(v35, System_IDisposable_TypeInfo, 0);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(
                                                                        v35,
                                                                        *(_QWORD *)(v53 + 8));
  if ( !v5 )
LABEL_63:
    sub_1C372B4(assets);
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

  if ( (byte_4C4231E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    byte_4C4231E = 1;
  }
  assets = this->fields.assets;
  if ( !assets
    || (assets = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)assets,
                   (Il2CppObject *)k,
                   (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__)) == 0 )
  {
    sub_1C372B4(assets);
  }
  return (System_String_o *)*((_QWORD *)assets + 2);
}


void AssetsInfo_AssetsInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4231F & 1) == 0 )
  {
    sub_1C37058(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    byte_4C4231F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AssetsInfo_AssetsInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields->__9 = (struct AssetsInfo_AssetsInfoData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C42320 & 1) == 0 )
  {
    sub_1C37058(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C42320 = 1;
  }
  v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  if ( !AssetsInfo_AssetsInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData_TypeInfo);
    v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  }
  IGNORE_LIST = (System_Collections_Generic_List_object__o *)v4->static_fields->IGNORE_LIST;
  if ( !IGNORE_LIST )
    sub_1C372B4(0);
  return !System_Collections_Generic_List_object___Contains(
            IGNORE_LIST,
            (Il2CppObject *)k,
            (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)scene, v5, v6);
}


System_String_o *AssetsInfo_DataInfo__GetInfo(AssetsInfo_DataInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4231A & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_752/*"({0}) - {1}"*/);
    byte_4C4231A = 1;
  }
  count = this->fields.count;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v2, v3, v4, v5, v6, v7);
  return System_String__Format_63602948(
           (System_String_o *)StringLiteral_752/*"({0}) - {1}"*/,
           v9,
           (Il2CppObject *)this->fields.initScene,
           0);
}


void AssetsInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42321 & 1) == 0 )
  {
    sub_1C37058(&AssetsInfo___c_TypeInfo);
    byte_4C42321 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AssetsInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo___c_TypeInfo->static_fields->__9 = (struct AssetsInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetsInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetsInfo___c___ctor(AssetsInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetsInfo___c___CacheAssetInfo_b__9_0(AssetsInfo___c_o *this, AssetData_o *a, const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return !AssetData__get_IsEmpty(a, 0);
}