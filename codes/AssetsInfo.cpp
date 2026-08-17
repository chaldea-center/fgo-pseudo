void AssetsInfo___ctor(AssetsInfo_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596FB18 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FB18 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.sceneName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sceneName, v9, v2, v3, v4, v5, v6, v7);
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x2
  AssetsInfo___c_c *v11; // x0
  struct AssetsInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__9_0; // x24
  Il2CppObject *v14; // x25
  struct AssetsInfo___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  AssetsInfo_c *klass; // x8
  AssetsInfo_o *v23; // x23
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x23
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  Il2CppObject *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x23
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  Il2CppObject *v51; // x24
  struct System_String_o *sceneName; // x26
  __int64 v53; // x25
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *Item; // x0
  __int64 v61; // x1
  int v62; // w8
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v68; // x20
  Il2CppObject *v69; // x22
  System_Object_array *v70; // [xsp+8h] [xbp-88h]
  AssetsInfo_o *v71; // [xsp+10h] [xbp-80h]
  __int64 v72; // [xsp+28h] [xbp-68h]

  v71 = this;
  if ( (byte_596FB16 & 1) == 0 )
  {
    sub_2213A60(&AssetsInfo_DataInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_AssetData___);
    sub_2213A60(&System_Func_AssetData__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_AssetData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_AssetData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_AssetsInfo___c__CacheAssetInfo_b__9_0__);
    this = (AssetsInfo_o *)sub_2213A60(&AssetsInfo___c_TypeInfo);
    byte_596FB16 = 1;
  }
  if ( assetList )
  {
    if ( !info )
      goto LABEL_68;
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_68;
    Count = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
              (const MethodInfo_4389820 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__get_Count__);
    v7 = (System_Object_array *)sub_2213B20(string___TypeInfo, Count);
    this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                             (System_Collections_Generic_Dictionary_object__object__o *)info,
                             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    if ( !this )
      goto LABEL_68;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___CopyTo(
      (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
      v7,
      0,
      (const MethodInfo_4389710 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_DataInfo__CopyTo__);
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    v11 = AssetsInfo___c_TypeInfo;
    if ( !*(&AssetsInfo___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo___c_TypeInfo, v9, v10);
      v11 = AssetsInfo___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__9_0 = (System_Func_object__bool__o *)static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v9, v10);
        static_fields = AssetsInfo___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__9_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AssetData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__9_0, v14, Method_AssetsInfo___c__CacheAssetInfo_b__9_0__, 0);
      v15 = AssetsInfo___c_TypeInfo->static_fields;
      v15->__9__9_0 = (struct System_Func_AssetData__bool__o *)_9__9_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
    }
    this = (AssetsInfo_o *)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)assetList,
                             (System_Func_TSource__bool__o *)_9__9_0,
                             (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_AssetData___);
    if ( !this )
      goto LABEL_68;
    klass = this->klass;
    v23 = this;
    v70 = v7;
    v24 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_AssetData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssetData__TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_18:
      v26 = sub_224BC3C(this, System_Collections_Generic_IEnumerable_AssetData__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(AssetsInfo_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
    v72 = v27;
    if ( !v27 )
      sub_2213CDC(v27, v28);
    v29 = v27;
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
            goto LABEL_26;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_26:
        v33 = sub_224BC3C(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      this = (AssetsInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( !v72 )
        sub_2213CDC(this, assetList);
      v34 = *(_QWORD *)v72;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_AssetData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_AssetData__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_34;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_34:
        v37 = sub_224BC3C(v72, System_Collections_Generic_IEnumerator_AssetData__TypeInfo, 0);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v72, *(_QWORD *)(v37 + 8));
      v46 = v38;
      if ( !v38 )
        sub_2213CDC(0, v39);
      if ( !v8
        || (items = v8->fields._items,
            v39 = *(Il2CppObject **)(v38 + 24),
            v48 = Method_System_Collections_Generic_List_string__Add__,
            ++v8->fields._version,
            !items) )
      {
        sub_2213CDC(v38, v39);
      }
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v39,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v39;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v39, v40, v41, v42, v43, v44, v45);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)info,
              *(Il2CppObject **)(v46 + 24),
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__ContainsKey__) )
      {
        v51 = *(Il2CppObject **)(v46 + 24);
        sceneName = v71->fields.sceneName;
        v53 = sub_2213CCC(AssetsInfo_DataInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v53, 0);
        *(_QWORD *)(v53 + 16) = sceneName;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 16), (int32_t)sceneName, v54, v55, v56, v57, v58, v59);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)info,
          v51,
          (Il2CppObject *)v53,
          (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__set_Item__);
      }
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)info,
               *(Il2CppObject **)(v46 + 24),
               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v61);
      v62 = *(_DWORD *)(v46 + 84);
      v29 = v72;
      LODWORD(Item[1].monitor) = v62;
    }
    if ( v72 )
    {
      v63 = *(_QWORD *)v72;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_52;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_52:
        v66 = sub_224BC3C(v72, System_IDisposable_TypeInfo, 0);
      }
      this = (AssetsInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v72, *(_QWORD *)(v66 + 8));
    }
    if ( !v70 )
LABEL_68:
      sub_2213CDC(this, assetList);
    max_length = v70->max_length;
    if ( (int)max_length >= 1 )
    {
      v68 = 0;
      while ( 1 )
      {
        if ( v68 >= (unsigned int)max_length )
          sub_2213CE4(this);
        if ( !v8 )
          break;
        v69 = v70->m_Items[v68];
        this = (AssetsInfo_o *)System_Collections_Generic_List_object___Contains(
                                 v8,
                                 v69,
                                 (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          this = (AssetsInfo_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                   (System_Collections_Generic_Dictionary_object__object__o *)info,
                                   v69,
                                   (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__Remove__);
        LODWORD(max_length) = v70->max_length;
        if ( (__int64)++v68 >= (int)max_length )
          return;
      }
      goto LABEL_68;
    }
  }
}


void AssetsInfo__OnGUI(AssetsInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetsInfo_AssetsInfoData_o *v4; // x1
  const MethodInfo *v5; // x2
  AssetsInfo_AssetsInfoData_o *currentAssets; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x20
  System_String_o *Paths; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  long double v15; // q0
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t sortType; // w23
  __int64 v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  long double v30; // q0
  int32_t v31; // w8
  _QWORD *v32; // x21
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  long double v38; // q0
  _QWORD *v39; // x21
  float x; // s8
  float y; // s9
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  UnityEngine_Vector2_o v45; // x1
  UnityEngine_Vector2_o v46; // x2
  long double v47; // q0
  UnityEngine_Vector2_o v48; // kr00_8
  _QWORD *v49; // x21
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FB17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_GUILayoutOption___);
    sub_2213A60(&UnityEngine_GUILayoutOption___TypeInfo);
    sub_2213A60(&UnityEngine_GUI_TypeInfo);
    sub_2213A60(&StringLiteral_26822/*"ソート：シーン名"*/);
    sub_2213A60(&StringLiteral_1618/*"<Asset>\n"*/);
    sub_2213A60(&StringLiteral_26821/*"ソート：アセットパス"*/);
    sub_2213A60(&StringLiteral_26823/*"ソート：デフォルト"*/);
    sub_2213A60(&StringLiteral_48/*"\n\n<Resource>\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FB17 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    currentAssets = this->fields.currentAssets;
    if ( currentAssets )
    {
      currentAssets = (AssetsInfo_AssetsInfoData_o *)AssetsInfo_AssetsInfoData__GetPaths(
                                                       currentAssets,
                                                       this->fields.sortType,
                                                       v5);
      if ( this->fields.currentResources )
      {
        v8 = (System_String_o *)currentAssets;
        Paths = AssetsInfo_AssetsInfoData__GetPaths(this->fields.currentResources, this->fields.sortType, v7);
        v12 = System_String__Concat_75696856(
                (System_String_o *)StringLiteral_1618/*"<Asset>\n"*/,
                v8,
                (System_String_o *)StringLiteral_48/*"\n\n<Resource>\n"*/,
                Paths,
                0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v10, v11);
        v54.fields.m_XMin = 5.0;
        v54.fields.m_YMin = 5.0;
        v54.fields.m_Height = 825.0;
        v54.fields.m_Width = 400.0;
        UnityEngine_GUI__Box(v54, (System_String_o *)StringLiteral_1/*""*/, 0);
        v16 = Method_System_Array_Empty_GUILayoutOption___;
        v17 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
        if ( !v17 )
        {
          sub_224B964(Method_System_Array_Empty_GUILayoutOption___);
          v17 = v16[7];
        }
        v18 = *(_QWORD *)(v17 + 16);
        if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
          v18 = sub_224B908(v15);
        if ( !*(_DWORD *)(v18 + 228) )
          *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v18, v13, v14);
        v19 = *(_QWORD *)(v16[7] + 16LL);
        if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
          v19 = sub_224B908(v15);
        UnityEngine_GUILayout__BeginVertical(**(UnityEngine_GUILayoutOption_array ***)(v19 + 184), 0);
        UnityEngine_GUILayout__Space(10.0, 0);
        sortType = this->fields.sortType;
        v21 = sub_2213B20(UnityEngine_GUILayoutOption___TypeInfo, 1);
        currentAssets = (AssetsInfo_AssetsInfoData_o *)UnityEngine_GUILayout__Height(40.0, 0);
        v4 = currentAssets;
        if ( sortType == 1 )
        {
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 24) )
            {
              *(_QWORD *)(v21 + 32) = currentAssets;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v21 + 32),
                (int32_t)currentAssets,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              if ( UnityEngine_GUILayout__Button(
                     (System_String_o *)StringLiteral_26821/*"ソート：アセットパス"*/,
                     (UnityEngine_GUILayoutOption_array *)v21,
                     0) )
              {
                v31 = 2;
                goto LABEL_33;
              }
LABEL_34:
              v32 = Method_System_Array_Empty_GUILayoutOption___;
              v33 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
              if ( !v33 )
              {
                sub_224B964(Method_System_Array_Empty_GUILayoutOption___);
                v33 = v32[7];
              }
              v34 = *(_QWORD *)(v33 + 16);
              if ( (*(_WORD *)(v34 + 309) & 1) == 0 )
                v34 = sub_224B908(v30);
              if ( !*(_DWORD *)(v34 + 228) )
                *(__n128 *)&v30 = j_il2cpp_runtime_class_init_0(v34, v28, v29);
              v35 = *(_QWORD *)(v32[7] + 16LL);
              if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
                v35 = sub_224B908(v30);
              UnityEngine_GUILayout__BeginHorizontal(**(UnityEngine_GUILayoutOption_array ***)(v35 + 184), 0);
              UnityEngine_GUILayout__Space(10.0, 0);
              v39 = Method_System_Array_Empty_GUILayoutOption___;
              x = this->fields.scrollPos.fields.x;
              y = this->fields.scrollPos.fields.y;
              v42 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
              if ( !v42 )
              {
                sub_224B964(Method_System_Array_Empty_GUILayoutOption___);
                v42 = v39[7];
              }
              v43 = *(_QWORD *)(v42 + 16);
              if ( (*(_WORD *)(v43 + 309) & 1) == 0 )
                v43 = sub_224B908(v38);
              if ( !*(_DWORD *)(v43 + 228) )
                *(__n128 *)&v38 = j_il2cpp_runtime_class_init_0(v43, v36, v37);
              v44 = *(_QWORD *)(v39[7] + 16LL);
              if ( (*(_WORD *)(v44 + 309) & 1) == 0 )
                v44 = sub_224B908(v38);
              v53.fields.x = x;
              v53.fields.y = y;
              v48 = UnityEngine_GUILayout__BeginScrollView(v53, **(UnityEngine_GUILayoutOption_array ***)(v44 + 184), 0);
              *(float *)&v47 = v48.fields.x;
              v49 = Method_System_Array_Empty_GUILayoutOption___;
              this->fields.scrollPos = v48;
              v50 = v49[7];
              if ( !v50 )
              {
                sub_224B964(v49);
                v50 = v49[7];
              }
              v51 = *(_QWORD *)(v50 + 16);
              if ( (*(_WORD *)(v51 + 309) & 1) == 0 )
                v51 = sub_224B908(v47);
              if ( !*(_DWORD *)(v51 + 228) )
                *(__n128 *)&v47 = ((__n128 (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
                                    v51,
                                    v45,
                                    v46);
              v52 = *(_QWORD *)(v49[7] + 16LL);
              if ( (*(_WORD *)(v52 + 309) & 1) == 0 )
                v52 = sub_224B908(v47);
              UnityEngine_GUILayout__Label(v12, **(UnityEngine_GUILayoutOption_array ***)(v52 + 184), 0);
              UnityEngine_GUILayout__EndScrollView(0);
              UnityEngine_GUILayout__EndHorizontal(0);
              UnityEngine_GUILayout__Space(10.0, 0);
              UnityEngine_GUILayout__EndVertical(0);
              return;
            }
LABEL_60:
            sub_2213CE4(currentAssets);
          }
        }
        else if ( sortType == 2 )
        {
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 24) )
            {
              *(_QWORD *)(v21 + 32) = currentAssets;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v21 + 32),
                (int32_t)currentAssets,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              if ( UnityEngine_GUILayout__Button(
                     (System_String_o *)StringLiteral_26822/*"ソート：シーン名"*/,
                     (UnityEngine_GUILayoutOption_array *)v21,
                     0) )
              {
                v31 = 0;
LABEL_33:
                this->fields.sortType = v31;
                goto LABEL_34;
              }
              goto LABEL_34;
            }
            goto LABEL_60;
          }
        }
        else if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 24) )
          {
            *(_QWORD *)(v21 + 32) = currentAssets;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v21 + 32),
              (int32_t)currentAssets,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            if ( UnityEngine_GUILayout__Button(
                   (System_String_o *)StringLiteral_26823/*"ソート：デフォルト"*/,
                   (UnityEngine_GUILayoutOption_array *)v21,
                   0) )
            {
              v31 = 1;
              goto LABEL_33;
            }
            goto LABEL_34;
          }
          goto LABEL_60;
        }
      }
    }
    sub_2213CDC(currentAssets, v4);
  }
}


void AssetsInfo_AssetsInfoData___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  __int64 v2; // x0
  Il2CppObject *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7

  if ( (byte_596FB1C & 1) == 0 )
  {
    sub_2213A60(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_13392/*"ShopBanners/DownloadShopBanner"*/);
    sub_2213A60(&StringLiteral_4560/*"CharaGraphOption/CharaGraphOption"*/);
    sub_2213A60(&StringLiteral_8492/*"Items/DownloadItem"*/);
    sub_2213A60(&StringLiteral_4553/*"CharaFigure/8001000"*/);
    sub_2213A60(&StringLiteral_9299/*"Marks/DownloadMark"*/);
    sub_2213A60(&StringLiteral_6874/*"Faces/DownloadFace"*/);
    sub_2213A60(&StringLiteral_3172/*"Banner/DownloadBanner"*/);
    sub_2213A60(&StringLiteral_13437/*"SkillIcons/DownloadSkillIcon"*/);
    sub_2213A60(&StringLiteral_6367/*"EquipFaces/DownloadEquipFace"*/);
    sub_2213A60(&StringLiteral_4660/*"ClassIcons/DownloadClassIcons"*/);
    byte_596FB1C = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v1 )
    goto LABEL_45;
  items = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_6874/*"Faces/DownloadFace"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 4), (int32_t)v3, v4, v5, v6, v7, v8, v9);
  }
  v20 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_6367/*"EquipFaces/DownloadEquipFace"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v1->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v3, v14, v15, v16, v17, v18, v19);
  }
  v30 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_8492/*"Items/DownloadItem"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v3, v24, v25, v26, v27, v28, v29);
  }
  v40 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_4660/*"ClassIcons/DownloadClassIcons"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v1->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v3, v34, v35, v36, v37, v38, v39);
  }
  v50 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_13437/*"SkillIcons/DownloadSkillIcon"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v1->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v3, v44, v45, v46, v47, v48, v49);
  }
  v60 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_3172/*"Banner/DownloadBanner"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj.klass + v62;
    v1->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v3, v54, v55, v56, v57, v58, v59);
  }
  v70 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_9299/*"Marks/DownloadMark"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = &v70->obj.klass + v72;
    v1->fields._size = v72 + 1;
    v73[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), (int32_t)v3, v64, v65, v66, v67, v68, v69);
  }
  v80 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_13392/*"ShopBanners/DownloadShopBanner"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = &v80->obj.klass + v82;
    v1->fields._size = v82 + 1;
    v83[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v83 + 4), (int32_t)v3, v74, v75, v76, v77, v78, v79);
  }
  v90 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_4560/*"CharaGraphOption/CharaGraphOption"*/;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    v1->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 4), (int32_t)v3, v84, v85, v86, v87, v88, v89);
  }
  v100 = v1->fields._items;
  v3 = (Il2CppObject *)StringLiteral_4553/*"CharaFigure/8001000"*/;
  v101 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v100 )
LABEL_45:
    sub_2213CDC(v2, v3);
  v102 = v1->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      v3,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
  }
  else
  {
    v103 = &v100->obj.klass + v102;
    v1->fields._size = v102 + 1;
    v103[4] = (Il2CppClass *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v103 + 4), (int32_t)v3, v94, v95, v96, v97, v98, v99);
  }
  AssetsInfo_AssetsInfoData_TypeInfo->static_fields->IGNORE_LIST = (struct System_Collections_Generic_List_string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssetsInfo_AssetsInfoData_TypeInfo->static_fields,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FB1B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
    byte_596FB1B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo___ctor__);
  this->fields.assets = (struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v9; // x1
  __int64 v10; // x2
  AssetsInfo_AssetsInfoData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x22
  struct AssetsInfo_AssetsInfoData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__2_0; // x23
  Il2CppObject *v15; // x24
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  AssetsInfo_AssetsInfoData___c_c *v25; // x0
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v26; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v28; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Func_object__object__o *v36; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  AssetsInfo_AssetsInfoData___c_c *v40; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x21
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v42; // x9
  System_Func_object__object__o *_9__2_3; // x22
  Il2CppObject *v44; // x23
  struct AssetsInfo_AssetsInfoData___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v57; // x1
  System_Text_StringBuilder_c *v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  System_Text_StringBuilder_c *v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x21
  struct System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__o *v68; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v70; // x1
  System_String_o *Info; // x0
  System_String_o *v72; // x0
  System_Text_StringBuilder_c *v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  System_Text_StringBuilder_o *v78; // [xsp+18h] [xbp-58h]

  if ( (byte_596FB1A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_string__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_string__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_string___);
    sub_2213A60(&System_Func_string__string__TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__);
    sub_2213A60(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__);
    sub_2213A60(&Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__);
    sub_2213A60(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_596FB1A = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  assets = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assets;
  if ( !assets )
    goto LABEL_65;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           assets,
           (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Keys__);
  v11 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !*(&AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo, v9, v10);
    v11 = AssetsInfo_AssetsInfoData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__2_0 = (System_Func_object__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9, v10);
      static_fields = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v15, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_0__, 0);
    v16 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
    v16->__9__2_0 = (struct System_Func_string__bool__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__2_0, (int32_t)_9__2_0, v17, v18, v19, v20, v21, v22);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                        v12,
                                                                        (System_Func_TSource__bool__o *)_9__2_0,
                                                                        (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_string___);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  if ( sortType == 2 )
  {
    v36 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo);
    System_Func_object__object____ctor(
      v36,
      (Il2CppObject *)this,
      Method_AssetsInfo_AssetsInfoData__GetPaths_b__2_2__,
      0);
    v37 = System_Linq_Enumerable__OrderBy_object__object_(
            v24,
            (System_Func_TSource__TKey__o *)v36,
            (const MethodInfo_3888C80 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
    v40 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    v41 = v37;
    if ( !*(&AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo, v38, v39);
      v40 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    v42 = v40->static_fields;
    _9__2_3 = (System_Func_object__object__o *)v42->__9__2_3;
    if ( !_9__2_3 )
    {
      if ( !*(&v40->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v40, v38, v39);
        v42 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__2_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_3, v44, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_3__, 0);
      v45 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v45->__9__2_3 = (struct System_Func_string__string__o *)_9__2_3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__2_3, (int32_t)_9__2_3, v46, v47, v48, v49, v50, v51);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ThenBy_object__object_(
                                                                          v41,
                                                                          (System_Func_TSource__TKey__o *)_9__2_3,
                                                                          (const MethodInfo_389AC90 *)Method_System_Linq_Enumerable_ThenBy_string__string___);
    goto LABEL_26;
  }
  if ( sortType == 1 )
  {
    v25 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    if ( !*(&AssetsInfo_AssetsInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData___c_TypeInfo, v6, v23);
      v25 = AssetsInfo_AssetsInfoData___c_TypeInfo;
    }
    v26 = v25->static_fields;
    _9__2_1 = (System_Func_object__object__o *)v26->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v6, v23);
        v26 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v26->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v28, Method_AssetsInfo_AssetsInfoData___c__GetPaths_b__2_1__, 0);
      v29 = AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields;
      v29->__9__2_1 = (struct System_Func_string__string__o *)_9__2_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__2_1, (int32_t)_9__2_1, v30, v31, v32, v33, v34, v35);
    }
    assets = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__OrderBy_object__object_(
                                                                          v24,
                                                                          (System_Func_TSource__TKey__o *)_9__2_1,
                                                                          (const MethodInfo_3888C80 *)Method_System_Linq_Enumerable_OrderBy_string__string___);
LABEL_26:
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)assets;
  }
  if ( !v24 )
    goto LABEL_65;
  klass = v24->klass;
  v53 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_32;
    }
    v55 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_32:
    v55 = sub_224BC3C(v24, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  appended = (System_Text_StringBuilder_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v55)(
                                              v24,
                                              *(_QWORD *)(v55 + 8));
  v78 = appended;
  while ( 1 )
  {
    if ( !v78 )
      sub_2213CDC(appended, v57);
    v58 = v78->klass;
    v59 = *(unsigned __int16 *)&v78->klass->_2.rank;
    if ( *(_WORD *)&v78->klass->_2.rank )
    {
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_40;
      }
      v61 = (__int64)&v58->vtable + 16 * *v60;
    }
    else
    {
LABEL_40:
      v61 = sub_224BC3C(v78, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Text_StringBuilder_o *, _QWORD))v61)(v78, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = v78->klass;
    v63 = *(unsigned __int16 *)&v78->klass->_2.rank;
    if ( *(_WORD *)&v78->klass->_2.rank )
    {
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v64 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_47;
      }
      v65 = (__int64)&v62->vtable + 16 * *v64;
    }
    else
    {
LABEL_47:
      v65 = sub_224BC3C(v78, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v67 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Text_StringBuilder_o *, _QWORD))v65)(
                            v78,
                            *(_QWORD *)(v65 + 8));
    v68 = this->fields.assets;
    if ( !v68 )
      sub_2213CDC(0, v66);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v68,
             v67,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    if ( !Item )
      sub_2213CDC(0, v70);
    Info = AssetsInfo_DataInfo__GetInfo((AssetsInfo_DataInfo_o *)Item, v70);
    v72 = System_String__Concat_75694928((System_String_o *)v67, (System_String_o *)StringLiteral_1533/*":"*/, Info, 0);
    if ( !v5 )
      sub_2213CDC(v72, v72);
    appended = System_Text_StringBuilder__AppendLine_75736300(v5, v72, 0);
  }
  v73 = v78->klass;
  v74 = *(unsigned __int16 *)&v78->klass->_2.rank;
  if ( *(_WORD *)&v78->klass->_2.rank )
  {
    v75 = &v73->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_57;
    }
    v76 = (__int64)&v73->vtable + 16 * *v75;
  }
  else
  {
LABEL_57:
    v76 = sub_224BC3C(v78, System_IDisposable_TypeInfo, 0);
  }
  assets = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Text_StringBuilder_o *, _QWORD))v76)(
                                                                        v78,
                                                                        *(_QWORD *)(v76 + 8));
  if ( !v5 )
LABEL_65:
    sub_2213CDC(assets, v6);
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

  if ( (byte_596FB1D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__);
    byte_596FB1D = 1;
  }
  assets = this->fields.assets;
  if ( !assets
    || (assets = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)assets,
                   (Il2CppObject *)k,
                   (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__AssetsInfo_DataInfo__get_Item__)) == 0 )
  {
    sub_2213CDC(assets, k);
  }
  return (System_String_o *)*((_QWORD *)assets + 2);
}


void AssetsInfo_AssetsInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FB1E & 1) == 0 )
  {
    sub_2213A60(&AssetsInfo_AssetsInfoData___c_TypeInfo);
    byte_596FB1E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssetsInfo_AssetsInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields->__9 = (struct AssetsInfo_AssetsInfoData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssetsInfo_AssetsInfoData___c_TypeInfo->static_fields,
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

  if ( (byte_596FB1F & 1) == 0 )
  {
    sub_2213A60(&AssetsInfo_AssetsInfoData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    byte_596FB1F = 1;
  }
  v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  if ( !*(&AssetsInfo_AssetsInfoData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetsInfo_AssetsInfoData_TypeInfo, k, method);
    v4 = AssetsInfo_AssetsInfoData_TypeInfo;
  }
  IGNORE_LIST = (System_Collections_Generic_List_object__o *)v4->static_fields->IGNORE_LIST;
  if ( !IGNORE_LIST )
    sub_2213CDC(0, k);
  return !System_Collections_Generic_List_object___Contains(
            IGNORE_LIST,
            (Il2CppObject *)k,
            (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.initScene = scene;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)scene, v5, v6, v7, v8, v9, v10);
}


System_String_o *AssetsInfo_DataInfo__GetInfo(AssetsInfo_DataInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596FB19 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_781/*"({0}) - {1}"*/);
    byte_596FB19 = 1;
  }
  count = this->fields.count;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &count);
  return System_String__Format_75697880(
           (System_String_o *)StringLiteral_781/*"({0}) - {1}"*/,
           v3,
           (Il2CppObject *)this->fields.initScene,
           0);
}


void AssetsInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FB20 & 1) == 0 )
  {
    sub_2213A60(&AssetsInfo___c_TypeInfo);
    byte_596FB20 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssetsInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetsInfo___c_TypeInfo->static_fields->__9 = (struct AssetsInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssetsInfo___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return !AssetData__get_IsEmpty(a, 0);
}