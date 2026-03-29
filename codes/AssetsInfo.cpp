void AssetsInfo___ctor(AssetsInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2FD55 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FD55 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.sceneName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sceneName, v9, v2, v3, v4, v5, v6, v7);
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  AssetsInfo_c *klass; // x8
  AssetsInfo_o *v20; // x23
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x23
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x24
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  Il2CppObject *v48; // x25
  struct System_String_o *sceneName; // x27
  __int64 v50; // x26
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *Item; // x0
  __int64 v58; // x1
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v64; // x20
  Il2CppObject *v65; // x22
  System_Object_array *v66; // [xsp+0h] [xbp-70h]
  AssetsInfo_o *v67; // [xsp+8h] [xbp-68h]

  v67 = this;
  if ( (byte_4D2FD53 & 1) == 0 )
  {
    sub_1C93AD4(&AssetsInfo_DataInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_AssetData___);
    sub_1C93AD4(&System_Func_AssetData__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_AssetData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_AssetData__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Method_AssetsInfo___c__CacheAssetInfo_b__9_0__);
    this = (AssetsInfo_o *)sub_1C93AD4(&AssetsInfo___c_TypeInfo);
    byte_4D2FD53 = 1;
  }
  if ( assetList )
  {
    if ( !info )
      goto LABEL_63;
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    Count = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
              (const MethodInfo_379C854 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    v7 = (System_Object_array *)sub_1C93B7C(string___TypeInfo, Count);
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_63;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___CopyTo(
      (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
      v7,
      0,
      (const MethodInfo_379C748 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
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
      _9__9_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_AssetData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__9_0, v11, Method_AssetsInfo___c__CacheAssetInfo_b__9_0__, 0);
      static_fields = AssetsInfo___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_AssetData__bool__o *)_9__9_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0,
        (int32_t)_9__9_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    this = (AssetsInfo_o *)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)assetList,
                             (System_Func_TSource__bool__o *)_9__9_0,
                             (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_AssetData___);
    if ( !this )
      goto LABEL_63;
    klass = this->klass;
    v20 = this;
    v21 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_AssetData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssetData__TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_18:
      v23 = sub_1C69E5C(this, System_Collections_Generic_IEnumerable_AssetData__TypeInfo, 0);
    }
    v66 = v7;
    v25 = (*(__int64 (__fastcall **)(AssetsInfo_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
    if ( !v25 )
      sub_1C93D2C(0, v24);
    while ( 1 )
    {
      v26 = *(_QWORD *)v25;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_25;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_25:
        v29 = sub_1C69E5C(v25, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
        break;
      v30 = *(_QWORD *)v25;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_AssetData__c **)v32 - 1) != System_Collections_Generic_IEnumerator_AssetData__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_32;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_32:
        v33 = sub_1C69E5C(v25, System_Collections_Generic_IEnumerator_AssetData__TypeInfo, 0);
      }
      v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
      v42 = v34;
      if ( !v34 )
        sub_1C93D2C(0, v35);
      if ( !v8 )
        sub_1C93D2C(v34, v35);
      v43 = *(Il2CppObject **)(v34 + 24);
      items = v8->fields._items;
      v45 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C93D2C(v34, v43);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v43,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v43;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v43, v36, v37, v38, v39, v40, v41);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)info,
              *(Il2CppObject **)(v42 + 24),
              (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__) )
      {
        v48 = *(Il2CppObject **)(v42 + 24);
        sceneName = v67->fields.sceneName;
        v50 = sub_1C93D20(AssetsInfo_DataInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v50, 0);
        *(_QWORD *)(v50 + 16) = sceneName;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 16), (int32_t)sceneName, v51, v52, v53, v54, v55, v56);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)info,
          v48,
          (Il2CppObject *)v50,
          (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)info,
               *(Il2CppObject **)(v42 + 24),
               (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
      if ( !Item )
        sub_1C93D2C(0, v58);
      LODWORD(Item[1].monitor) = *(_DWORD *)(v42 + 84);
    }
    v59 = *(_QWORD *)v25;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_48;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_48:
      v62 = sub_1C69E5C(v25, System_IDisposable_TypeInfo, 0);
    }
    this = (AssetsInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v25, *(_QWORD *)(v62 + 8));
    if ( !v66 )
LABEL_63:
      sub_1C93D2C(this, assetList);
    max_length = v66->max_length;
    if ( (int)max_length >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( v64 >= (unsigned int)max_length )
          sub_1C93D34(this);
        if ( !v8 )
          break;
        v65 = v66->m_Items[v64];
        this = (AssetsInfo_o *)System_Collections_Generic_List_object___Contains(
                                 v8,
                                 v65,
                                 (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                   (System_Collections_Generic_Dictionary_object__object__o *)info,
                                   v65,
                                   (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
        LODWORD(max_length) = v66->max_length;
        if ( (__int64)++v64 >= (int)max_length )
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  long double v23; // q0
  __int64 v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w8
  __int64 v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  _QWORD *v39; // x21
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  long double v43; // q0
  _QWORD *v44; // x21
  float y; // s8
  float x; // s9
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  long double v50; // q0
  UnityEngine_Vector2_o v51; // kr00_8
  _QWORD *v52; // x19
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FD54 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_System_Array_Empty_GUILayoutOption___);
    sub_1C93AD4(&UnityEngine_GUILayoutOption___TypeInfo);
    sub_1C93AD4(&UnityEngine_GUI_TypeInfo);
    sub_1C93AD4(&StringLiteral_25747/*"ソート：シーン名"*/);
    sub_1C93AD4(&StringLiteral_1532/*"<Asset>\n"*/);
    sub_1C93AD4(&StringLiteral_25746/*"ソート：アセットパス"*/);
    sub_1C93AD4(&StringLiteral_25748/*"ソート：デフォルト"*/);
    sub_1C93AD4(&StringLiteral_48/*"\n\n<Resource>\n"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FD54 = 1;
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
    v9 = System_String__Concat_64465992(
           (System_String_o *)StringLiteral_1532/*"<Asset>\n"*/,
           v7,
           (System_String_o *)StringLiteral_48/*"\n\n<Resource>\n"*/,
           Paths,
           0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v57.fields.m_XMin = 5.0;
    v57.fields.m_YMin = 5.0;
    v57.fields.m_Height = 825.0;
    v57.fields.m_Width = 400.0;
    UnityEngine_GUI__Box(v57, (System_String_o *)StringLiteral_1/*""*/, 0);
    v11 = Method_System_Array_Empty_GUILayoutOption___;
    v12 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v12 )
    {
      sub_1C69BC4(Method_System_Array_Empty_GUILayoutOption___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C69B68(inited);
    UnityEngine_GUILayout__BeginVertical(**(UnityEngine_GUILayoutOption_array ***)(v14 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    sortType = this->fields.sortType;
    if ( sortType == 1 )
    {
      v24 = sub_1C93B7C(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v24 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v24 + 32) = currentAssets;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)currentAssets, v25, v26, v27, v28, v29, v30);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25746/*"ソート：アセットパス"*/,
             (UnityEngine_GUILayoutOption_array *)v24,
             0) )
      {
        v31 = 2;
LABEL_33:
        this->fields.sortType = v31;
      }
    }
    else
    {
      if ( sortType == 2 )
      {
        v16 = sub_1C93B7C(UnityEngine_GUILayoutOption___TypeInfo, 1);
        currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 24) )
          {
            *(_QWORD *)(v16 + 32) = currentAssets;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)currentAssets, v17, v18, v19, v20, v21, v22);
            if ( UnityEngine_GUILayout__Button(
                   (System_String_o *)StringLiteral_25747/*"ソート：シーン名"*/,
                   (UnityEngine_GUILayoutOption_array *)v16,
                   0) )
            {
              this->fields.sortType = 0;
            }
            goto LABEL_34;
          }
LABEL_60:
          sub_1C93D34(currentAssets);
        }
LABEL_59:
        sub_1C93D2C(currentAssets, v3);
      }
      v32 = sub_1C93B7C(UnityEngine_GUILayoutOption___TypeInfo, 1);
      currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
      if ( !v32 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v32 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v32 + 32) = currentAssets;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)currentAssets, v33, v34, v35, v36, v37, v38);
      if ( UnityEngine_GUILayout__Button(
             (System_String_o *)StringLiteral_25748/*"ソート：デフォルト"*/,
             (UnityEngine_GUILayoutOption_array *)v32,
             0) )
      {
        v31 = 1;
        goto LABEL_33;
      }
    }
LABEL_34:
    v39 = Method_System_Array_Empty_GUILayoutOption___;
    v40 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v40 )
    {
      sub_1C69BC4(Method_System_Array_Empty_GUILayoutOption___);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C69B68(v23);
    if ( !*(_DWORD *)(v41 + 224) )
      v23 = j_il2cpp_runtime_class_init_0(v41);
    v42 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C69B68(v23);
    UnityEngine_GUILayout__BeginHorizontal(**(UnityEngine_GUILayoutOption_array ***)(v42 + 184), 0);
    UnityEngine_GUILayout__Space(10.0, 0);
    v44 = Method_System_Array_Empty_GUILayoutOption___;
    x = this->fields.scrollPos.fields.x;
    y = this->fields.scrollPos.fields.y;
    v47 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v47 )
    {
      sub_1C69BC4(Method_System_Array_Empty_GUILayoutOption___);
      v47 = v44[7];
    }
    v48 = *(_QWORD *)(v47 + 16);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C69B68(v43);
    if ( !*(_DWORD *)(v48 + 224) )
      v43 = j_il2cpp_runtime_class_init_0(v48);
    v49 = *(_QWORD *)(v44[7] + 16LL);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1C69B68(v43);
    v56.fields.x = x;
    v56.fields.y = y;
    v51 = UnityEngine_GUILayout__BeginScrollView(v56, **(UnityEngine_GUILayoutOption_array ***)(v49 + 184), 0);
    *(float *)&v50 = v51.fields.x;
    this->fields.scrollPos = v51;
    v52 = Method_System_Array_Empty_GUILayoutOption___;
    v53 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
    if ( !v53 )
    {
      sub_1C69BC4(Method_System_Array_Empty_GUILayoutOption___);
      v53 = v52[7];
    }
    v54 = *(_QWORD *)(v53 + 16);
    if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
      v54 = sub_1C69B68(v50);
    if ( !*(_DWORD *)(v54 + 224) )
      v50 = j_il2cpp_runtime_class_init_0(v54);
    v55 = *(_QWORD *)(v52[7] + 16LL);
    if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
      v55 = sub_1C69B68(v50);
    UnityEngine_GUILayout__Label(v9, **(UnityEngine_GUILayoutOption_array ***)(v55 + 184), 0);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7

  if ( (byte_4D2FD59 & 1) == 0 )
  {
    sub_1C93AD4(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&StringLiteral_12947/*"ShopBanners/DownloadShopBanner"*/);
    sub_1C93AD4(&StringLiteral_4409/*"CharaGraphOption/CharaGraphOption"*/);
    sub_1C93AD4(&StringLiteral_8193/*"Items/DownloadItem"*/);
    sub_1C93AD4(&StringLiteral_4402/*"CharaFigure/8001000"*/);
    sub_1C93AD4(&StringLiteral_8982/*"Marks/DownloadMark"*/);
    sub_1C93AD4(&StringLiteral_6619/*"Faces/DownloadFace"*/);
    sub_1C93AD4(&StringLiteral_3064/*"Banner/DownloadBanner"*/);
    sub_1C93AD4(&StringLiteral_12990/*"SkillIcons/DownloadSkillIcon"*/);
    sub_1C93AD4(&StringLiteral_6139/*"EquipFaces/DownloadEquipFace"*/);
    sub_1C93AD4(&StringLiteral_4507/*"ClassIcons/DownloadClassIcons"*/);
    byte_4D2FD59 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v1 )
    goto LABEL_45;
  v3 = (Il2CppObject *)StringLiteral_6619/*"Faces/DownloadFace"*/;
  items = v1->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_45;
  size = v1->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 4), (int32_t)v3, v4, v5, v6, v7, v8, v9);
  }
  v3 = (Il2CppObject *)StringLiteral_6139/*"EquipFaces/DownloadEquipFace"*/;
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
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v1->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v3, v14, v15, v16, v17, v18, v19);
  }
  v3 = (Il2CppObject *)StringLiteral_8193/*"Items/DownloadItem"*/;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v3, v24, v25, v26, v27, v28, v29);
  }
  v3 = (Il2CppObject *)StringLiteral_4507/*"ClassIcons/DownloadClassIcons"*/;
  v40 = v1->fields._items;
  v41 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v40 )
    goto LABEL_45;
  v42 = v1->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v1->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v3, v34, v35, v36, v37, v38, v39);
  }
  v3 = (Il2CppObject *)StringLiteral_12990/*"SkillIcons/DownloadSkillIcon"*/;
  v50 = v1->fields._items;
  v51 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v50 )
    goto LABEL_45;
  v52 = v1->fields._size;
  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v1->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v3, v44, v45, v46, v47, v48, v49);
  }
  v3 = (Il2CppObject *)StringLiteral_3064/*"Banner/DownloadBanner"*/;
  v60 = v1->fields._items;
  v61 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v60 )
    goto LABEL_45;
  v62 = v1->fields._size;
  if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v1->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 4), (int32_t)v3, v54, v55, v56, v57, v58, v59);
  }
  v3 = (Il2CppObject *)StringLiteral_8982/*"Marks/DownloadMark"*/;
  v70 = v1->fields._items;
  v71 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v70 )
    goto LABEL_45;
  v72 = v1->fields._size;
  if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = &v70->obj.klass + v72;
    v1->fields._size = v72 + 1;
    v73[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v3, v64, v65, v66, v67, v68, v69);
  }
  v3 = (Il2CppObject *)StringLiteral_12947/*"ShopBanners/DownloadShopBanner"*/;
  v80 = v1->fields._items;
  v81 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v80 )
    goto LABEL_45;
  v82 = v1->fields._size;
  if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = &v80->obj.klass + v82;
    v1->fields._size = v82 + 1;
    v83[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v83 + 4), (int32_t)v3, v74, v75, v76, v77, v78, v79);
  }
  v3 = (Il2CppObject *)StringLiteral_4409/*"CharaGraphOption/CharaGraphOption"*/;
  v90 = v1->fields._items;
  v91 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v90 )
    goto LABEL_45;
  v92 = v1->fields._size;
  if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    v1->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v93 + 4), (int32_t)v3, v84, v85, v86, v87, v88, v89);
  }
  v3 = (Il2CppObject *)StringLiteral_4402/*"CharaFigure/8001000"*/;
  v100 = v1->fields._items;
  v101 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v100 )
LABEL_45:
    sub_1C93D2C(v2, v3);
  v102 = v1->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
  }
  else
  {
    v103 = &v100->obj.klass + v102;
    v1->fields._size = v102 + 1;
    v103[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v103 + 4), (int32_t)v3, v94, v95, v96, v97, v98, v99);
  }
  AssetsInfo_AssetsInfoData_TypeInfo->static_fields->IGNORE_LIST = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AssetsInfo_AssetsInfoData_TypeInfo->static_fields,
    (int32_t)v1,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
}


void AssetsInfo_AssetsInfoData___ctor(AssetsInfo_AssetsInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FD58 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
    byte_4D2FD58 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
  this->fields.assets = (struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  AssetsInfo_AssetsInfoData___c_c *v21; // x0
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v23; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Func_object__object__o *v31; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  AssetsInfo_AssetsInfoData___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x21
  System_Func_object__object__o *_9__2_3; // x22
  Il2CppObject *v36; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x22
  struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *v60; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v62; // x1
  System_String_o *Info; // x0
  System_String_o *v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  if ( (byte_4D2FD57 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_string__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_string__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C93AD4(&System_Func_string__string__TypeInfo);
    sub_1C93AD4(&System_Func_string__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__);
    sub_1C93AD4(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__);
    sub_1C93AD4(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__);
    sub_1C93AD4(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D2FD57 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  assets = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assets;
  if ( !assets )
    goto LABEL_63;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           assets,
           (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
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
    _9__2_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v12, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__, 0);
    static_fields = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_string__bool__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                        v10,
                                                                        (System_Func_TSource__bool__o *)_9__2_0,
                                                                        (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_string___);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  if ( sortType == 2 )
  {
    v31 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo);
    System_Func_object__object____ctor(
      v31,
      (Il2CppObject *)this,
      Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__,
      0);
    v32 = System_Linq_Enumerable__OrderBy_object__object_(
            v20,
            (System_Func_TSource__TKey__o *)v31,
            (const MethodInfo_31D39A8 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
    v33 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    v34 = v32;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v33 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_3 = (System_Func_object__object__o *)v33->static_fields->__9__2_3;
    if ( !_9__2_3 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__2_3 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_3, v36, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__, 0);
      v37 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v37->__9__2_3 = (struct System_Func_string__string__o *)_9__2_3;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->__9__2_3, (int32_t)_9__2_3, v38, v39, v40, v41, v42, v43);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ThenBy_object__object_(
                                                                          v34,
                                                                          (System_Func_TSource__TKey__o *)_9__2_3,
                                                                          (const MethodInfo_31E3014 *)Method_System_Linq_Enumerable_ThenBy_string__string___);
    goto LABEL_26;
  }
  if ( sortType == 1 )
  {
    v21 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    if ( !AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo);
      v21 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v21->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = AssetsInfo_AssetsInfoData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v23, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__, 0);
      v24 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v24->__9__2_1 = (struct System_Func_string__string__o *)_9__2_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->__9__2_1, (int32_t)_9__2_1, v25, v26, v27, v28, v29, v30);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__OrderBy_object__object_(
                                                                          v20,
                                                                          (System_Func_TSource__TKey__o *)_9__2_1,
                                                                          (const MethodInfo_31D39A8 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
LABEL_26:
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  }
  if ( !v20 )
    goto LABEL_63;
  klass = v20->klass;
  v45 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_32;
    }
    v47 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_32:
    v47 = sub_1C69E5C(v20, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v47)(
          v20,
          *(_QWORD *)(v47 + 8));
  if ( !v49 )
    sub_1C93D2C(0, v48);
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
          goto LABEL_39;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_39:
      v53 = sub_1C69E5C(v49, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v49;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v56 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_46;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_46:
      v57 = sub_1C69E5C(v49, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v59 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
    v60 = this->fields.assets;
    if ( !v60 )
      sub_1C93D2C(0, v58);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v60,
             v59,
             (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    if ( !Item )
      sub_1C93D2C(0, v62);
    Info = AssetsInfo_DataInfo__GetInfo((AssetsInfo_DataInfo_o *)Item, v62);
    v64 = System_String__Concat_64463988((System_String_o *)v59, (System_String_o *)StringLiteral_1451/*":"*/, Info, 0);
    if ( !v5 )
      sub_1C93D2C(v64, v64);
    System_Text_StringBuilder__AppendLine_64510908(v5, v64, 0);
  }
  v65 = *(_QWORD *)v49;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_56;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_56:
    v68 = sub_1C69E5C(v49, System_IDisposable_TypeInfo, 0);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(
                                                                        v49,
                                                                        *(_QWORD *)(v68 + 8));
  if ( !v5 )
LABEL_63:
    sub_1C93D2C(assets, v6);
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
           v5,
           v5->klass->vtable._3_ToString.method);
}


System_String_o *AssetsInfo_AssetsInfoData___GetPaths_b__2_2(
        AssetsInfo_AssetsInfoData_o *this,
        System_String_o *k,
        const MethodInfo *method)
{
  void *assets; // x0

  if ( (byte_4D2FD5A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    byte_4D2FD5A = 1;
  }
  assets = this->fields.assets;
  if ( !assets
    || (assets = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)assets,
                   (Il2CppObject *)k,
                   (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__)) == 0 )
  {
    sub_1C93D2C(assets, k);
  }
  return (System_String_o *)*((_QWORD *)assets + 2);
}


void AssetsInfo_AssetsInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FD5B & 1) == 0 )
  {
    sub_1C93AD4(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    byte_4D2FD5B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(AssetsInfo_AssetsInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields->__9 = (struct AssetsInfo_AssetsInfoData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D2FD5C & 1) == 0 )
  {
    sub_1C93AD4(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4D2FD5C = 1;
  }
  v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  if ( !AssetsInfo_AssetsInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData_TypeInfo);
    v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  }
  IGNORE_LIST = (System_Collections_Generic_List_object__o *)v4->static_fields->IGNORE_LIST;
  if ( !IGNORE_LIST )
    sub_1C93D2C(0, k);
  return !System_Collections_Generic_List_object___Contains(
            IGNORE_LIST,
            (Il2CppObject *)k,
            (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.initScene = scene;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)scene, v5, v6, v7, v8, v9, v10);
}


System_String_o *AssetsInfo_DataInfo__GetInfo(AssetsInfo_DataInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FD56 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_749/*"({0}) - {1}"*/);
    byte_4D2FD56 = 1;
  }
  count = this->fields.count;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
  return System_String__Format_64467032(
           (System_String_o *)StringLiteral_749/*"({0}) - {1}"*/,
           v3,
           (Il2CppObject *)this->fields.initScene,
           0);
}


void AssetsInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FD5D & 1) == 0 )
  {
    sub_1C93AD4(&AssetsInfo___c_TypeInfo);
    byte_4D2FD5D = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(AssetsInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo___c_TypeInfo->static_fields->__9 = (struct AssetsInfo___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AssetsInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssetsInfo___c___ctor(AssetsInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetsInfo___c___CacheAssetInfo_b__9_0(AssetsInfo___c_o *this, AssetData_o *a, const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return !AssetData__get_IsEmpty(a, 0);
}