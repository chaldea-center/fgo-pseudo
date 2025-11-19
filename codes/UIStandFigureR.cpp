void UIStandFigureR___ctor(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB7C40 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4CB7C40 = 1;
  }
  this->fields.alphaMaskStart = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.formAssetList = (struct System_Collections_Generic_List_AssetData__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.formAssetList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIStandFigureR__CancelPreloadFormAssets(UIStandFigureR_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.callbackFuncAfterLoadForms = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFuncAfterLoadForms, 0, v2, v3);
}


System_Collections_IEnumerator_o *UIStandFigureR__ChangeCrossFade(
        UIStandFigureR_o *this,
        float time,
        UnityEngine_RenderTexture_o *fadeInRenderTex,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB7C3B & 1) == 0 )
  {
    sub_1C6BA08(&UIStandFigureR__ChangeCrossFade_d__92_TypeInfo);
    byte_4CB7C3B = 1;
  }
  v7 = sub_1C6BC54(UIStandFigureR__ChangeCrossFade_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(float *)(v7 + 40) = time;
  *(_QWORD *)(v7 + 48) = fadeInRenderTex;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)fadeInRenderTex, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void UIStandFigureR__EndCrossFade(
        UIStandFigureR_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x21
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x8
  UnityEngine_Object_o *drawCall; // x21
  struct UITexture_o *v10; // x8
  struct UIDrawCall_o *v11; // x8
  UnityEngine_Object_o *mDynamicMat; // x21
  struct UITexture_o *v13; // x8
  struct UIDrawCall_o *v14; // x8
  const MethodInfo *v15; // x1

  if ( (byte_4CB7C3C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C3C = 1;
  }
  this->fields.isCrossFade = 0;
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0, 0);
  if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
  {
    v8 = this->fields.bodyTexture;
    if ( !v8 )
      goto LABEL_23;
    drawCall = (UnityEngine_Object_o *)v8->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
    {
      v10 = this->fields.bodyTexture;
      if ( !v10 )
        goto LABEL_23;
      v11 = v10->fields.drawCall;
      if ( !v11 )
        goto LABEL_23;
      mDynamicMat = (UnityEngine_Object_o *)v11->fields.mDynamicMat;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0);
      if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
      {
        v13 = this->fields.bodyTexture;
        if ( !v13 )
          goto LABEL_23;
        v14 = v13->fields.drawCall;
        if ( !v14 )
          goto LABEL_23;
        BodyTextureMaterial = v14->fields.mDynamicMat;
        if ( !BodyTextureMaterial )
          goto LABEL_23;
        UnityEngine_Material__SetTexture_71523824(
          BodyTextureMaterial,
          this->fields.mainTexId,
          (UnityEngine_Texture_o *)renderTex,
          0);
      }
    }
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( BodyTextureMaterial )
    {
      ((void (__fastcall *)(UnityEngine_Material_o *, UnityEngine_RenderTexture_o *, void *))BodyTextureMaterial->klass[1].vtable._3_ToString.method)(
        BodyTextureMaterial,
        renderTex,
        BodyTextureMaterial->klass[2]._1.image);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v15);
      if ( BodyTextureMaterial )
      {
        UnityEngine_Material__SetFloat_71528744(BodyTextureMaterial, this->fields.blendId, 0.0, 0);
        return;
      }
    }
LABEL_23:
    sub_1C6BC60(BodyTextureMaterial, v7);
  }
}


void UIStandFigureR__EndLoadAsset(UIStandFigureR_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UIStandFigureR_o *v4; // x19
  System_String_o *loadName; // x1
  Il2CppObject *current; // x22
  const MethodInfo *v7; // x3
  int32_t m_CancellationTokenSource; // w2
  int v9; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4CB7C2B & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Clear__);
    this = (UIStandFigureR_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4CB7C2B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData )
      goto LABEL_22;
    this = (UIStandFigureR_o *)assetData->fields.name;
    if ( !this )
      goto LABEL_22;
    if ( !System_String__Equals_64002112((System_String_o *)this, loadName, 0) )
      return;
    this = (UIStandFigureR_o *)v4->fields.formAssetList;
    if ( !this )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v20.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40765532((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    this = (UIStandFigureR_o *)v4->fields.formAssetList;
    if ( !this )
      goto LABEL_22;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    v9 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
    LODWORD(this->fields.m_CancellationTokenSource) = 0;
    HIDWORD(this->fields.m_CancellationTokenSource) = v9;
    if ( m_CancellationTokenSource >= 1 )
    {
      System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
      this = (UIStandFigureR_o *)v4->fields.formAssetList;
      if ( !this )
        goto LABEL_22;
    }
    m_CachedPtr = this->fields.m_CachedPtr;
    v11 = Method_System_Collections_Generic_List_AssetData__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
LABEL_22:
      sub_1C6BC60(this, loadName);
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)assetData,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v13 + 32) = assetData;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)assetData, m_CancellationTokenSource, v7);
    }
    v4->fields.loadName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.loadName, 0, v14, v15);
    v4->fields.assetData = assetData;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.assetData, (int32_t)assetData, v16, v17);
    v4->fields.isAssetLoaded = 1;
    UIStandFigureR__RequestRenderAsset(v4, v18);
  }
}


void UIStandFigureR__EndLoadAssetWithEffect(
        UIStandFigureR_o *this,
        AssetData_o *assetData,
        bool waitToStartRenderWhileAssetLoadBusy,
        const MethodInfo *method)
{
  UIStandFigureR_o *v6; // x19
  System_String_o *loadName; // x1
  Il2CppObject *current; // x23
  const MethodInfo *v9; // x3
  int32_t m_CancellationTokenSource; // w2
  int v11; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_4CB7C2C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    this = (UIStandFigureR_o *)sub_1C6BA08(&Method_UIStandFigureR_RequestRenderAssetWithEffect__);
    byte_4CB7C2C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  loadName = v6->fields.loadName;
  if ( loadName )
  {
    if ( !assetData )
      goto LABEL_29;
    this = (UIStandFigureR_o *)assetData->fields.name;
    if ( !this )
      goto LABEL_29;
    if ( System_String__Equals_64002112((System_String_o *)this, loadName, 0) )
    {
      this = (UIStandFigureR_o *)v6->fields.formAssetList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
        v25 = v24;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
        {
          current = v25.fields._current;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40765532((AssetData_o *)current, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
        this = (UIStandFigureR_o *)v6->fields.formAssetList;
        if ( this )
        {
          m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
          v11 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
          LODWORD(this->fields.m_CancellationTokenSource) = 0;
          HIDWORD(this->fields.m_CancellationTokenSource) = v11;
          if ( m_CancellationTokenSource < 1
            || (System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0),
                (this = (UIStandFigureR_o *)v6->fields.formAssetList) != 0) )
          {
            m_CachedPtr = this->fields.m_CachedPtr;
            v13 = Method_System_Collections_Generic_List_AssetData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( m_CachedPtr )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)assetData,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                v15 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v15 + 32) = assetData;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)assetData, m_CancellationTokenSource, v9);
              }
              v6->fields.loadName = 0;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.loadName, 0, v16, v17);
              v6->fields.assetData = assetData;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.assetData, (int32_t)assetData, v18, v19);
              v6->fields.isAssetLoaded = 1;
              this = (UIStandFigureR_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
              if ( this )
              {
                if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0)
                  && waitToStartRenderWhileAssetLoadBusy )
                {
                  v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(v21, (Il2CppObject *)v6, Method_UIStandFigureR_RequestRenderAssetWithEffect__, 0);
                  v23 = UIStandFigureR__WaitWhileLoading(v21, v22);
                  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)v6, v23, 0);
                }
                else
                {
                  UIStandFigureR__RequestRenderAssetWithEffect(v6, v20);
                }
                return;
              }
            }
          }
        }
      }
LABEL_29:
      sub_1C6BC60(this, loadName);
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40765532(assetData, 0);
}


void UIStandFigureR__EndLoadFormAsset(UIStandFigureR_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *name; // x0
  struct AssetData_o *loadName; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct AssetData_o **v10; // x20
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x23
  System_Predicate_object__o *v12; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  struct AssetData_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1

  if ( (byte_4CB7C34 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_1C6BA08(&System_Predicate_AssetData__TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass80_0__EndLoadFormAsset_b__0__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass80_0_TypeInfo);
    byte_4CB7C34 = 1;
  }
  v5 = sub_1C6BC54(UIStandFigureR___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = assetData;
  v10 = (struct AssetData_o **)(v5 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)assetData, v8, v9);
  loadName = (struct AssetData_o *)this->fields.loadName;
  if ( loadName )
  {
    if ( !*v10 )
      goto LABEL_17;
    name = (System_Collections_Generic_List_object__o *)(*v10)->fields.name;
    if ( !name )
      goto LABEL_17;
    if ( System_String__Equals_64002112((System_String_o *)name, (System_String_o *)loadName, 0) )
    {
      formAssetList = this->fields.formAssetList;
      v12 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_AssetData__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v5,
        Method_UIStandFigureR___c__DisplayClass80_0__EndLoadFormAsset_b__0__,
        0);
      if ( formAssetList )
      {
        if ( System_Collections_Generic_List_object___Exists(
               (System_Collections_Generic_List_object__o *)formAssetList,
               (System_Predicate_T__o *)v12,
               (const MethodInfo_3800FA0 *)Method_System_Collections_Generic_List_AssetData__Exists__) )
        {
LABEL_16:
          this->fields.loadName = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, 0, v13, v14);
          v19 = *v10;
          this->fields.assetData = *v10;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)v19, v20, v21);
          UIStandFigureR__RequestRenderAsset(this, v22);
          return;
        }
        name = (System_Collections_Generic_List_object__o *)this->fields.formAssetList;
        if ( name )
        {
          loadName = *v10;
          items = name->fields._items;
          v16 = Method_System_Collections_Generic_List_AssetData__Add__;
          ++name->fields._version;
          if ( items )
          {
            size = name->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                name,
                (Il2CppObject *)loadName,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              name->fields._size = size + 1;
              v18[4] = (Il2CppClass *)loadName;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)loadName, v13, v14);
            }
            goto LABEL_16;
          }
        }
      }
LABEL_17:
      sub_1C6BC60(name, loadName);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__EndRenderAsset(
        UIStandFigureR_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x21
  UnityEngine_Object_o *renderTexture; // x22
  const MethodInfo *mainTexId; // x1
  UnityEngine_Object_o *currentBodyTexture; // x22
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v15; // x3
  int32_t imageId; // w24
  int32_t formId; // w23
  int32_t offsetKind; // w22
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Vector2_o CharacterOffset; // kr00_8 OVERLAPPED
  int v21; // s2
  float v22; // s2 OVERLAPPED
  float v23; // s3
  float v24; // s1
  int v25; // s0
  struct SvtMultiPortraitEntity_o *svtMultiPortraitEntity; // x8
  struct System_Int32_array *commonPosition; // x8
  struct SvtMultiPortraitEntity_o *v28; // x8
  struct System_Int32_array *v29; // x8
  int v30; // s11
  int v31; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  struct SvtMultiPortraitEntity_o *v35; // x8
  struct System_Int32_array *withMasterPhotoPosition; // x9
  struct System_Int32_array *v37; // x8
  int v38; // s11
  int v39; // w21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v41; // s9
  float v42; // s10
  float v43; // s8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  _BOOL4 isRetryRender; // w8
  float crossFadeTime; // s0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v49; // x20
  struct System_Action_o *callbackFunc; // t1
  UnityEngine_Object_o *v51; // x22
  bool v52; // w22
  const MethodInfo *v53; // x1
  UnityEngine_Texture_o *v54; // x2
  const MethodInfo *v55; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7C30 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C30 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
      StandFigureManager__Release(this->fields.renderTexture, 0);
    if ( this->fields.isCrossFade )
    {
      currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
        UIStandFigureR__StopCrossFade(this, mainTexId);
    }
    if ( this->fields.crossFadeTime <= 0.0 || this->fields.isRetryRender )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
      if ( !BodyTextureMaterial )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Material_o *, UnityEngine_RenderTexture_o *, void *))BodyTextureMaterial->klass[1].vtable._3_ToString.method)(
        BodyTextureMaterial,
        renderTex,
        BodyTextureMaterial->klass[2]._1.image);
    }
    else
    {
      v51 = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v52 = UnityEngine_Object__op_Inequality(v51, 0, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v53);
      mainTexId = (const MethodInfo *)(unsigned int)this->fields.mainTexId;
      if ( v52 )
      {
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        v54 = (UnityEngine_Texture_o *)this->fields.currentBodyTexture;
      }
      else
      {
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        v54 = (UnityEngine_Texture_o *)renderTex;
      }
      UnityEngine_Material__SetTexture_71523824(BodyTextureMaterial, (int32_t)mainTexId, v54, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v55);
      if ( !BodyTextureMaterial )
LABEL_71:
        sub_1C6BC60(BodyTextureMaterial, mainTexId);
      UnityEngine_Material__SetTexture_71523824(
        BodyTextureMaterial,
        this->fields.mainTex2Id,
        (UnityEngine_Texture_o *)renderTex,
        0);
    }
    this->fields.currentBodyTexture = renderTex;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentBodyTexture, (int32_t)renderTex, v10, v11);
    this->fields.renderTexture = renderTex;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderTexture, (int32_t)renderTex, v12, v13);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_71;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)BodyTextureMaterial, 0);
    imageId = this->fields.imageId;
    formId = this->fields.formId;
    offsetKind = this->fields.offsetKind;
    v19 = transform;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    CharacterOffset = UIStandFigureRender__GetCharacterOffset(imageId, formId, offsetKind, v15);
    if ( !v19 )
      goto LABEL_71;
    v21 = 0;
    UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&CharacterOffset.fields.x, 0);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_71;
    v22 = 1.0;
    v23 = 1.0;
    if ( this->fields.textureHeight <= 1024 )
      v24 = -0.25;
    else
      v24 = 0.0;
    v25 = 0;
    UITexture__set_uvRect((UITexture_o *)BodyTextureMaterial, *(UnityEngine_Rect_o *)(&v22 - 2), 0);
    svtMultiPortraitEntity = this->fields.svtMultiPortraitEntity;
    if ( svtMultiPortraitEntity )
    {
      commonPosition = svtMultiPortraitEntity->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, 0);
        v28 = this->fields.svtMultiPortraitEntity;
        if ( !v28 )
          goto LABEL_71;
        v29 = v28->fields.commonPosition;
        if ( !v29 )
          goto LABEL_71;
        if ( LODWORD(v29->max_length) < 2 )
          goto LABEL_72;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        v31 = v29->m_Items[0];
        v30 = v29->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_71;
        v57.fields.x = x + (float)v31;
        v57.fields.y = y + (float)v30;
        v57.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v57, 0);
      }
      if ( this->fields.isPhotoWithMaster )
      {
        v35 = this->fields.svtMultiPortraitEntity;
        if ( !v35 )
          goto LABEL_71;
        withMasterPhotoPosition = v35->fields.withMasterPhotoPosition;
        if ( withMasterPhotoPosition )
        {
          if ( SLODWORD(withMasterPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_4CAFC09 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
              byte_4CAFC09 = 1;
              v35 = this->fields.svtMultiPortraitEntity;
            }
            if ( !v35 )
              goto LABEL_71;
            v37 = v35->fields.withMasterPhotoPosition;
            if ( !v37 )
              goto LABEL_71;
            if ( LODWORD(v37->max_length) >= 2 )
            {
              v38 = v37->m_Items[0];
              v39 = v37->m_Items[1];
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              v41 = static_fields->zeroVector.fields.x;
              v42 = static_fields->zeroVector.fields.y;
              v43 = static_fields->zeroVector.fields.z;
              BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
              if ( !BodyTextureMaterial )
                goto LABEL_71;
              v58.fields.x = v41 + (float)v38;
              v58.fields.y = v42 + (float)v39;
              v58.fields.z = v43;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v58, 0);
              goto LABEL_50;
            }
LABEL_72:
            sub_1C6BC68(BodyTextureMaterial);
          }
        }
      }
    }
LABEL_50:
    UIStandFigureR__SetConstantOffset(this, mainTexId);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( BodyTextureMaterial )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)BodyTextureMaterial,
                                                        0);
      if ( BodyTextureMaterial )
      {
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)BodyTextureMaterial, 0) )
          goto LABEL_56;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( BodyTextureMaterial )
        {
          BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)BodyTextureMaterial,
                                                            0);
          if ( BodyTextureMaterial )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BodyTextureMaterial, 1, 0);
LABEL_56:
            isRetryRender = this->fields.isRetryRender;
            this->fields.isBusyRender = 0;
            if ( isRetryRender )
            {
              this->fields.isRetryRender = 0;
              UIStandFigureR__RequestRenderAsset(this, mainTexId);
            }
            else
            {
              crossFadeTime = this->fields.crossFadeTime;
              if ( crossFadeTime > 0.0 )
                UIStandFigureR__StartCrossFade(this, crossFadeTime, renderTex, v44);
              callbackFunc = this->fields.callbackFunc;
              p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
              v49 = callbackFunc;
              if ( callbackFunc )
              {
                p_callbackFunc->klass = 0;
                sub_1C6B9AC(p_callbackFunc, 0, (int32_t)v44, v45);
                ((void (__fastcall *)(intptr_t, intptr_t))v49->fields.invoke_impl)(
                  v49->fields.method_code,
                  v49->fields.method);
              }
            }
            return;
          }
        }
      }
    }
    goto LABEL_71;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__EndRenderAssetWithEffect(
        UIStandFigureR_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x21
  const MethodInfo *mainTexId; // x1
  UnityEngine_Object_o *currentBodyTexture; // x21
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x3
  int32_t imageId; // w24
  int32_t formId; // w23
  int32_t offsetKind; // w22
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Vector2_o CharacterOffset; // kr00_8 OVERLAPPED
  int v20; // s2
  float v21; // s2 OVERLAPPED
  float v22; // s3
  float v23; // s1
  int v24; // s0
  struct SvtMultiPortraitEntity_o *svtMultiPortraitEntity; // x8
  struct System_Int32_array *commonPosition; // x8
  struct SvtMultiPortraitEntity_o *v27; // x8
  struct System_Int32_array *v28; // x8
  int v29; // s11
  int v30; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  struct SvtMultiPortraitEntity_o *v34; // x8
  struct System_Int32_array *withMasterPhotoPosition; // x9
  struct System_Int32_array *v36; // x8
  int v37; // s11
  int v38; // w21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v40; // s9
  float v41; // s10
  float v42; // s8
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  _BOOL4 isRetryRender; // w8
  float crossFadeTime; // s0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v48; // x20
  struct System_Action_o *callbackFunc; // t1
  UnityEngine_Object_o *v50; // x21
  bool v51; // w21
  const MethodInfo *v52; // x1
  UnityEngine_Texture_o *v53; // x2
  const MethodInfo *v54; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7C31 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C31 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    if ( this->fields.isCrossFade )
    {
      currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
        UIStandFigureR__StopCrossFade(this, mainTexId);
    }
    if ( this->fields.crossFadeTime <= 0.0 || this->fields.isRetryRender )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
      if ( !BodyTextureMaterial )
        goto LABEL_67;
      ((void (__fastcall *)(UnityEngine_Material_o *, UnityEngine_RenderTexture_o *, void *))BodyTextureMaterial->klass[1].vtable._3_ToString.method)(
        BodyTextureMaterial,
        renderTex,
        BodyTextureMaterial->klass[2]._1.image);
    }
    else
    {
      v50 = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v51 = UnityEngine_Object__op_Inequality(v50, 0, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v52);
      mainTexId = (const MethodInfo *)(unsigned int)this->fields.mainTexId;
      if ( v51 )
      {
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        v53 = (UnityEngine_Texture_o *)this->fields.currentBodyTexture;
      }
      else
      {
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        v53 = (UnityEngine_Texture_o *)renderTex;
      }
      UnityEngine_Material__SetTexture_71523824(BodyTextureMaterial, (int32_t)mainTexId, v53, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v54);
      if ( !BodyTextureMaterial )
LABEL_67:
        sub_1C6BC60(BodyTextureMaterial, mainTexId);
      UnityEngine_Material__SetTexture_71523824(
        BodyTextureMaterial,
        this->fields.mainTex2Id,
        (UnityEngine_Texture_o *)renderTex,
        0);
    }
    this->fields.currentBodyTexture = renderTex;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentBodyTexture, (int32_t)renderTex, v9, v10);
    this->fields.renderTexture = renderTex;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderTexture, (int32_t)renderTex, v11, v12);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_67;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)BodyTextureMaterial, 0);
    imageId = this->fields.imageId;
    formId = this->fields.formId;
    offsetKind = this->fields.offsetKind;
    v18 = transform;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    CharacterOffset = UIStandFigureRender__GetCharacterOffset(imageId, formId, offsetKind, v14);
    if ( !v18 )
      goto LABEL_67;
    v20 = 0;
    UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&CharacterOffset.fields.x, 0);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_67;
    v21 = 1.0;
    v22 = 1.0;
    if ( this->fields.textureHeight <= 1024 )
      v23 = -0.25;
    else
      v23 = 0.0;
    v24 = 0;
    UITexture__set_uvRect((UITexture_o *)BodyTextureMaterial, *(UnityEngine_Rect_o *)(&v21 - 2), 0);
    svtMultiPortraitEntity = this->fields.svtMultiPortraitEntity;
    if ( svtMultiPortraitEntity )
    {
      commonPosition = svtMultiPortraitEntity->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, 0);
        v27 = this->fields.svtMultiPortraitEntity;
        if ( !v27 )
          goto LABEL_67;
        v28 = v27->fields.commonPosition;
        if ( !v28 )
          goto LABEL_67;
        if ( LODWORD(v28->max_length) < 2 )
          goto LABEL_68;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        v30 = v28->m_Items[0];
        v29 = v28->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_67;
        v56.fields.x = x + (float)v30;
        v56.fields.y = y + (float)v29;
        v56.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v56, 0);
      }
      if ( this->fields.isPhotoWithMaster )
      {
        v34 = this->fields.svtMultiPortraitEntity;
        if ( !v34 )
          goto LABEL_67;
        withMasterPhotoPosition = v34->fields.withMasterPhotoPosition;
        if ( withMasterPhotoPosition )
        {
          if ( SLODWORD(withMasterPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_4CAFC09 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
              byte_4CAFC09 = 1;
              v34 = this->fields.svtMultiPortraitEntity;
            }
            if ( !v34 )
              goto LABEL_67;
            v36 = v34->fields.withMasterPhotoPosition;
            if ( !v36 )
              goto LABEL_67;
            if ( LODWORD(v36->max_length) >= 2 )
            {
              v37 = v36->m_Items[0];
              v38 = v36->m_Items[1];
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              v40 = static_fields->zeroVector.fields.x;
              v41 = static_fields->zeroVector.fields.y;
              v42 = static_fields->zeroVector.fields.z;
              BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
              if ( !BodyTextureMaterial )
                goto LABEL_67;
              v57.fields.x = v40 + (float)v37;
              v57.fields.y = v41 + (float)v38;
              v57.fields.z = v42;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v57, 0);
              goto LABEL_46;
            }
LABEL_68:
            sub_1C6BC68(BodyTextureMaterial);
          }
        }
      }
    }
LABEL_46:
    UIStandFigureR__SetConstantOffset(this, mainTexId);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( BodyTextureMaterial )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)BodyTextureMaterial,
                                                        0);
      if ( BodyTextureMaterial )
      {
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)BodyTextureMaterial, 0) )
          goto LABEL_52;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( BodyTextureMaterial )
        {
          BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)BodyTextureMaterial,
                                                            0);
          if ( BodyTextureMaterial )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BodyTextureMaterial, 1, 0);
LABEL_52:
            isRetryRender = this->fields.isRetryRender;
            this->fields.isBusyRender = 0;
            if ( isRetryRender )
            {
              this->fields.isRetryRender = 0;
              UIStandFigureR__RequestRenderAssetWithEffect(this, mainTexId);
            }
            else
            {
              crossFadeTime = this->fields.crossFadeTime;
              if ( crossFadeTime > 0.0 )
                UIStandFigureR__StartCrossFade(this, crossFadeTime, renderTex, v43);
              callbackFunc = this->fields.callbackFunc;
              p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
              v48 = callbackFunc;
              if ( callbackFunc )
              {
                p_callbackFunc->klass = 0;
                sub_1C6B9AC(p_callbackFunc, 0, (int32_t)v43, v44);
                ((void (__fastcall *)(intptr_t, intptr_t))v48->fields.invoke_impl)(
                  v48->fields.method_code,
                  v48->fields.method);
              }
            }
            return;
          }
        }
      }
    }
    goto LABEL_67;
  }
}


void UIStandFigureR__EnqueueRenderInfo(UIStandFigureR_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UIStandFigureR_WaitRenderInfo_o *renderInfo; // x8
  UnityEngine_RenderTexture_o *RenderText_k__BackingField; // x21
  int32_t ImageId_k__BackingField; // w22
  int32_t FaceType_k__BackingField; // w23
  int32_t FormId_k__BackingField; // w24
  int32_t MultiPortraitIndex_k__BackingField; // w25
  UnityEngine_Texture2D_array *TextureList_k__BackingField; // x26
  StandFigureRenderWaitStatus_EndHandler_o *v12; // x27

  if ( (byte_4CB7C3F & 1) == 0 )
  {
    sub_1C6BA08(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndRenderAssetWithEffect__);
    byte_4CB7C3F = 1;
  }
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    RenderText_k__BackingField = renderInfo->fields._RenderText_k__BackingField;
    ImageId_k__BackingField = renderInfo->fields._ImageId_k__BackingField;
    FaceType_k__BackingField = renderInfo->fields._FaceType_k__BackingField;
    FormId_k__BackingField = renderInfo->fields._FormId_k__BackingField;
    MultiPortraitIndex_k__BackingField = renderInfo->fields._MultiPortraitIndex_k__BackingField;
    TextureList_k__BackingField = renderInfo->fields._TextureList_k__BackingField;
    v12 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_1C6BC54(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    StandFigureRenderWaitStatus_EndHandler___ctor(
      v12,
      (Il2CppObject *)this,
      Method_UIStandFigureR_EndRenderAssetWithEffect__,
      0);
    StandFigureManager__RenderWithEffect(
      RenderText_k__BackingField,
      ImageId_k__BackingField,
      FaceType_k__BackingField,
      FormId_k__BackingField,
      MultiPortraitIndex_k__BackingField,
      TextureList_k__BackingField,
      v12,
      0);
  }
  this->fields.renderInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderInfo, 0, v2, v3);
  *(_WORD *)&this->fields.isCommitEnqueue = 0;
}


void UIStandFigureR__KillLoading(UIStandFigureR_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_o **p_loadName; // x19

  this->fields.loadName = 0;
  p_loadName = &this->fields.loadName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, 0, v2, v3);
  *((_WORD *)p_loadName + 18) = 0;
}


// attributes: thunk
void UIStandFigureR__OnDestroy(UIStandFigureR_o *this, const MethodInfo *method)
{
  UIStandFigureR__ReleaseCharacter(this, method);
}


void UIStandFigureR__OnEndPreloadForms(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *loadNameList; // x0
  System_String_array *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x23
  System_Predicate_object__o *v12; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  struct System_Collections_Generic_List_string__o *v19; // x8
  int32_t v20; // w2
  int v21; // w9
  struct System_Action_o *v22; // x8
  CGThumbnailListItem_o *p_callbackFuncAfterLoadForms; // x19
  struct System_Action_o *callbackFuncAfterLoadForms; // t1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4CB7C37 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&System_Predicate_AssetData__TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass84_0__OnEndPreloadForms_b__0__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass84_0_TypeInfo);
    byte_4CB7C37 = 1;
  }
  loadNameList = (System_Collections_Generic_List_object__o *)this->fields.loadNameList;
  if ( !loadNameList )
    goto LABEL_25;
  v4 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                loadNameList,
                                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  loadNameList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_40773704(v4, 0);
  if ( !loadNameList )
    goto LABEL_25;
  v5 = loadNameList;
  if ( loadNameList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C6BC54(UIStandFigureR___c__DisplayClass84_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      if ( v6 >= (unsigned int)v5->fields._size )
        sub_1C6BC68(loadNameList);
      if ( !v7 )
        break;
      v10 = *((_QWORD *)&v5->fields._syncRoot + v6);
      *(_QWORD *)(v7 + 16) = v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), v10, v8, v9);
      formAssetList = this->fields.formAssetList;
      v12 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_AssetData__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v7,
        Method_UIStandFigureR___c__DisplayClass84_0__OnEndPreloadForms_b__0__,
        0);
      if ( !formAssetList )
        break;
      loadNameList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Exists(
                                                                    (System_Collections_Generic_List_object__o *)formAssetList,
                                                                    (System_Predicate_T__o *)v12,
                                                                    (const MethodInfo_3800FA0 *)Method_System_Collections_Generic_List_AssetData__Exists__);
      if ( ((unsigned __int8)loadNameList & 1) == 0 )
      {
        loadNameList = (System_Collections_Generic_List_object__o *)this->fields.formAssetList;
        if ( !loadNameList )
          break;
        method = *(const MethodInfo **)(v7 + 16);
        items = loadNameList->fields._items;
        v16 = Method_System_Collections_Generic_List_AssetData__Add__;
        ++loadNameList->fields._version;
        if ( !items )
          break;
        size = loadNameList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            loadNameList,
            (Il2CppObject *)method,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          loadNameList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)method;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)method, v13, v14);
        }
      }
      if ( (__int64)++v6 >= v5->fields._size )
        goto LABEL_19;
    }
LABEL_25:
    sub_1C6BC60(loadNameList, method);
  }
LABEL_19:
  v19 = this->fields.loadNameList;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, v20, 0);
  callbackFuncAfterLoadForms = this->fields.callbackFuncAfterLoadForms;
  p_callbackFuncAfterLoadForms = (CGThumbnailListItem_o *)&this->fields.callbackFuncAfterLoadForms;
  v22 = callbackFuncAfterLoadForms;
  if ( callbackFuncAfterLoadForms )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
    p_callbackFuncAfterLoadForms->klass = 0;
    sub_1C6B9AC(p_callbackFuncAfterLoadForms, 0, v25, v26);
  }
}


void UIStandFigureR__OnValidate(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *BodyTextureMaterial; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Material_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  _BOOL4 useAlphaMask; // w20
  const MethodInfo *v11; // x1

  if ( (byte_4CB7C22 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16380/*"_USE_ALPHA"*/);
    byte_4CB7C22 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
    {
      BodyTextureMaterial = (UnityEngine_Object_o *)UIStandFigureR__get_BodyTextureMaterial(this, v4);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(BodyTextureMaterial, 0, 0) )
      {
        gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v6);
        if ( !gameObject )
          goto LABEL_24;
        UnityEngine_Material__SetFloat_71528744(
          gameObject,
          this->fields.alphaMaskStartId,
          this->fields.alphaMaskStart,
          0);
        gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v9);
        if ( !gameObject )
          goto LABEL_24;
        UnityEngine_Material__SetFloat_71528744(
          gameObject,
          this->fields.alphaMaskLengthId,
          this->fields.alphaMaskLength,
          0);
        useAlphaMask = this->fields.useAlphaMask;
        gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v11);
        if ( !gameObject )
          goto LABEL_24;
        if ( useAlphaMask )
          UnityEngine_Material__EnableKeyword(gameObject, (System_String_o *)StringLiteral_16380/*"_USE_ALPHA"*/, 0);
        else
          UnityEngine_Material__DisableKeyword(gameObject, (System_String_o *)StringLiteral_16380/*"_USE_ALPHA"*/, 0);
        gameObject = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !gameObject
          || (gameObject = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0)) == 0
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
              (gameObject = (UnityEngine_Material_o *)this->fields.bodyTexture) == 0)
          || (gameObject = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0)) == 0 )
        {
LABEL_24:
          sub_1C6BC60(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
    }
  }
}


void UIStandFigureR__PlayAnimation(
        UIStandFigureR_o *this,
        System_String_o *animationName,
        float playDelayTime,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v10; // x1
  UnityEngine_Animation_o *v11; // x0
  UnityEngine_Object_o *Clip; // x22
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4CB7C3D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C3D = 1;
  }
  if ( System_String__IsNullOrEmpty(animationName, 0) )
    goto LABEL_12;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(animationComponent, 0, 0) )
    goto LABEL_12;
  v11 = this->fields.animationComponent;
  if ( !v11 )
    sub_1C6BC60(0, v10);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(v11, animationName, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
  {
LABEL_12:
    ActionExtensions__Call(endCallback, 0);
  }
  else
  {
    v14 = UIStandFigureR__PlayAnimationProc(this, animationName, playDelayTime, endCallback, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v14, 0);
  }
}


System_Collections_IEnumerator_o *UIStandFigureR__PlayAnimationProc(
        UIStandFigureR_o *this,
        System_String_o *animationName,
        float playDelayTime,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CB7C3E & 1) == 0 )
  {
    sub_1C6BA08(&UIStandFigureR__PlayAnimationProc_d__96_TypeInfo);
    byte_4CB7C3E = 1;
  }
  v9 = sub_1C6BC54(UIStandFigureR__PlayAnimationProc_d__96_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = animationName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)animationName, v12, v13);
  *(float *)(v9 + 48) = playDelayTime;
  *(_QWORD *)(v9 + 64) = endCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)endCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


void UIStandFigureR__PreloadFormAssets(
        UIStandFigureR_o *this,
        System_Collections_Generic_List_int__o *formIdList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UIStandFigureR_o *v6; // x19
  struct System_Collections_Generic_List_string__o *loadNameList; // x8
  int32_t size; // w2
  int v9; // w9
  int32_t current; // w22
  __int64 v11; // x21
  const MethodInfo *v12; // x2
  int32_t imageId; // w23
  System_String_o *AssetNameWithForm; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *formAssetList; // x23
  System_Predicate_object__o *v18; // x24
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x23
  System_Predicate_object__o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_array *v36; // x20
  System_Action_o *v37; // x21
  System_Action_o *v38; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4CB7C35 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Exists__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&System_Predicate_AssetData__TypeInfo);
    sub_1C6BA08(&System_Predicate_string__TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass81_0__PreloadFormAssets_b__0__);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass81_0__PreloadFormAssets_b__1__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass81_0_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_OnEndPreloadForms__);
    this = (UIStandFigureR_o *)sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C35 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  loadNameList = v6->fields.loadNameList;
  if ( !loadNameList )
    goto LABEL_30;
  size = loadNameList->fields._size;
  v9 = loadNameList->fields._version + 1;
  loadNameList->fields._size = 0;
  loadNameList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadNameList->fields._items, 0, size, 0);
  v38 = callbackFunc;
  if ( !formIdList )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    formIdList,
    (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v40.fields._current;
    v11 = sub_1C6BC54(UIStandFigureR___c__DisplayClass81_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    imageId = v6->fields.imageId;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, current, v12);
    if ( !v11 )
      sub_1C6BC60(AssetNameWithForm, AssetNameWithForm);
    *(_QWORD *)(v11 + 16) = AssetNameWithForm;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)AssetNameWithForm, v15, v16);
    formAssetList = (System_Collections_Generic_List_object__o *)v6->fields.formAssetList;
    v18 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_AssetData__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v11,
      Method_UIStandFigureR___c__DisplayClass81_0__PreloadFormAssets_b__0__,
      0);
    if ( !formAssetList )
      sub_1C6BC60(v19, v20);
    if ( !System_Collections_Generic_List_object___Exists(
            formAssetList,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_3800FA0 *)Method_System_Collections_Generic_List_AssetData__Exists__) )
    {
      v21 = (System_Collections_Generic_List_object__o *)v6->fields.loadNameList;
      v22 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v22,
        (Il2CppObject *)v11,
        Method_UIStandFigureR___c__DisplayClass81_0__PreloadFormAssets_b__1__,
        0);
      if ( !v21 )
        sub_1C6BC60(v23, v24);
      if ( !System_Collections_Generic_List_object___Exists(
              v21,
              (System_Predicate_T__o *)v22,
              (const MethodInfo_3800FA0 *)Method_System_Collections_Generic_List_string__Exists__) )
      {
        v28 = (System_Collections_Generic_List_object__o *)v6->fields.loadNameList;
        if ( !v28 )
          sub_1C6BC60(0, v25);
        v29 = *(Il2CppObject **)(v11 + 16);
        items = v28->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v28->fields._version;
        if ( !items )
          sub_1C6BC60(v28, v29);
        v32 = v28->fields._size;
        if ( (unsigned int)v32 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v29,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + v32;
          v28->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v29;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v29, v26, v27);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v6->fields.callbackFuncAfterLoadForms = v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.callbackFuncAfterLoadForms, (int32_t)v38, v34, v35);
  this = (UIStandFigureR_o *)v6->fields.loadNameList;
  if ( !this )
LABEL_30:
    sub_1C6BC60(this, formIdList);
  v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)this,
                                 (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v37 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v6, Method_UIStandFigureR_OnEndPreloadForms__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40772344(v36, v37, 1, 0);
}


void UIStandFigureR__ReleaseBodyRenderTexture(UIStandFigureR_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x0
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_o *v7; // x8
  UnityEngine_RenderTexture_o *renderTexture; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB7C26 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C6BA08(&StandFigureCamera_TypeInfo);
    byte_4CB7C26 = 1;
  }
  renderTexture = 0;
  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_19;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 bodyTexture,
                                 bodyTexture->klass->vtable._26_get_mainTexture.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    bodyTexture = this->fields.bodyTexture;
    if ( !bodyTexture )
      goto LABEL_19;
    v5 = ((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._26_get_mainTexture.methodPtr)(
           bodyTexture,
           bodyTexture->klass->vtable._26_get_mainTexture.method);
    if ( v5 )
    {
      naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v5 + 304LL) >= (unsigned int)naturalAligment )
      {
        v7 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo
           ? (UnityEngine_RenderTexture_o *)v5
           : 0LL;
        renderTexture = v7;
        if ( v7 )
        {
          if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
          StandFigureCamera__ClearAndReleaseTemporary(&renderTexture, 1, 1, 0);
          bodyTexture = this->fields.bodyTexture;
          if ( bodyTexture )
          {
            ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))bodyTexture->klass->vtable._27_set_mainTexture.methodPtr)(
              bodyTexture,
              0,
              bodyTexture->klass->vtable._27_set_mainTexture.method);
            return;
          }
LABEL_19:
          sub_1C6BC60(bodyTexture, method);
        }
      }
    }
  }
}


void UIStandFigureR__ReleaseCharacter(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  void *formAssetList; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v7; // x2
  UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *renderTexture; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_RenderTexture_o **p_currentBodyTexture; // x20
  UnityEngine_Object_o *currentBodyTexture; // x21
  long double v14; // q0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x20
  System_Object_array *v20; // x20
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_AssetData__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  System_String_o *loadName; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_array *v28; // x20
  int32_t v29; // w2
  int v30; // w8

  if ( (byte_4CB7C23 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_4CB7C23 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    formAssetList = this->fields.bodyTexture;
    if ( !formAssetList )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)formAssetList,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      formAssetList = this->fields.bodyTexture;
      if ( !formAssetList )
        goto LABEL_48;
      formAssetList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)formAssetList, 0);
      if ( !formAssetList )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)formAssetList, 0, 0);
    }
    formAssetList = this->fields.bodyTexture;
    if ( !formAssetList )
      goto LABEL_48;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)formAssetList + 744LL))(
      formAssetList,
      0,
      *(_QWORD *)(*(_QWORD *)formAssetList + 752LL));
    UIStandFigureR__set_BodyTextureMaterial(this, 0, v7);
  }
  p_renderTexture = &this->fields.renderTexture;
  renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
  {
    StandFigureManager__Release(*p_renderTexture, 0);
    *p_renderTexture = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderTexture, 0, v10, v11);
  }
  p_currentBodyTexture = &this->fields.currentBodyTexture;
  currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
  {
    StandFigureManager__Release(*p_currentBodyTexture, 0);
    *p_currentBodyTexture = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentBodyTexture, 0, v15, v16);
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C41A9C(v14);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C41A9C(v14);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v19, 0) )
  {
    formAssetList = this->fields.formAssetList;
    if ( formAssetList )
    {
      v20 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)formAssetList,
              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_AssetData__ToArray__);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40765740((AssetData_array *)v20, 0);
      v22 = this->fields.formAssetList;
      if ( v22 )
      {
        size = v22->fields._size;
        v24 = v22->fields._version + 1;
        v22->fields._size = 0;
        v22->fields._version = v24;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
        this->fields.assetData = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, 0, size, v21);
        loadName = this->fields.loadName;
        if ( loadName )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAssetStorage(loadName, 0);
          this->fields.loadName = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, 0, v26, v27);
        }
        formAssetList = this->fields.loadNameList;
        if ( formAssetList )
        {
          if ( *((int *)formAssetList + 6) < 1 )
            goto LABEL_45;
          v28 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)formAssetList,
                                         (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAssetStorage_40774692(v28, 0);
          formAssetList = this->fields.loadNameList;
          if ( formAssetList )
          {
LABEL_45:
            v29 = *((_DWORD *)formAssetList + 6);
            v30 = *((_DWORD *)formAssetList + 7) + 1;
            *((_DWORD *)formAssetList + 6) = 0;
            *((_DWORD *)formAssetList + 7) = v30;
            if ( v29 >= 1 )
              System_Array__Clear(*((System_Array_o **)formAssetList + 2), 0, v29, 0);
            return;
          }
        }
      }
    }
LABEL_48:
    sub_1C6BC60(formAssetList, v4);
  }
}


void UIStandFigureR__RemoveCallback(UIStandFigureR_o *this, System_Action_o *removeCallback, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *callbackFunc; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1

  if ( (byte_4CB7C36 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB7C36 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)removeCallback, 0);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1C6BFFC(v7);
LABEL_7:
    p_callbackFunc->klass = (CGThumbnailListItem_c *)v10;
  }
  sub_1C6B9AC(p_callbackFunc, (int32_t)v10, v8, v9);
}


void UIStandFigureR__RequestRenderAsset(UIStandFigureR_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_RenderTexture_o *renderTexture; // x20
  __int64 v6; // d0
  const MethodInfo *v7; // x2
  AssetData_o *assetData; // x21
  UnityEngine_Texture2D_array *TextureList; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_array *v11; // x21
  int32_t imageId; // w22
  int32_t faceType; // w23
  int32_t formId; // w24
  StandFigureRenderWaitStatus_EndHandler_o *v15; // x25

  if ( (byte_4CB7C2E & 1) == 0 )
  {
    sub_1C6BA08(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndRenderAsset__);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C2E = 1;
  }
  if ( this->fields.isBusyRender )
  {
    this->fields.isRetryRender = 1;
  }
  else
  {
    renderTexture = this->fields.renderTexture;
    v6 = *(_QWORD *)&this->fields.faceType;
    this->fields.isBusyRender = 1;
    this->fields.renderTexture = 0;
    *(_QWORD *)&this->fields.oldFaceType = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderTexture, 0, v2, v3);
    assetData = this->fields.assetData;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    TextureList = UIStandFigureRender__GetTextureList(assetData, 0, v7);
    if ( !TextureList )
      goto LABEL_11;
    v11 = TextureList;
    if ( !LODWORD(TextureList->max_length) )
      sub_1C6BC68(TextureList);
    TextureList = (UnityEngine_Texture2D_array *)TextureList->m_Items[0];
    if ( !TextureList )
LABEL_11:
      sub_1C6BC60(TextureList, v10);
    this->fields.textureHeight = ((__int64 (__fastcall *)(UnityEngine_Texture2D_array *, const MethodInfo *))TextureList->obj.klass->vtable[6].methodPtr)(
                                   TextureList,
                                   TextureList->obj.klass->vtable[6].method);
    imageId = this->fields.imageId;
    faceType = this->fields.faceType;
    formId = this->fields.formId;
    v15 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_1C6BC54(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    StandFigureRenderWaitStatus_EndHandler___ctor(v15, (Il2CppObject *)this, Method_UIStandFigureR_EndRenderAsset__, 0);
    StandFigureManager__Render_40982984(renderTexture, imageId, faceType, formId, v11, v15, 0);
  }
}


void UIStandFigureR__RequestRenderAssetWithEffect(UIStandFigureR_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_RenderTexture_o *renderTexture; // x20
  __int64 v6; // d0
  const MethodInfo *v7; // x2
  AssetData_o *assetData; // x21
  UnityEngine_Texture2D_array *TextureList; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_array *v11; // x21
  int32_t v12; // w0
  _BOOL4 isCommitEnqueue; // w8
  int32_t imageId; // w22
  int32_t faceType; // w23
  int32_t formId; // w24
  int32_t MultiPortraitIndex_k__BackingField; // w25
  UIStandFigureR_WaitRenderInfo_o *v18; // x26
  const MethodInfo *v19; // x7
  struct UIStandFigureR_WaitRenderInfo_o **p_renderInfo; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  StandFigureRenderWaitStatus_EndHandler_o *v23; // x26

  if ( (byte_4CB7C2F & 1) == 0 )
  {
    sub_1C6BA08(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndRenderAssetWithEffect__);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    sub_1C6BA08(&UIStandFigureR_WaitRenderInfo_TypeInfo);
    byte_4CB7C2F = 1;
  }
  if ( this->fields.isBusyRender )
  {
    this->fields.isRetryRender = 1;
  }
  else
  {
    renderTexture = this->fields.renderTexture;
    v6 = *(_QWORD *)&this->fields.faceType;
    this->fields.isBusyRender = 1;
    this->fields.renderTexture = 0;
    *(_QWORD *)&this->fields.oldFaceType = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderTexture, 0, v2, v3);
    assetData = this->fields.assetData;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    TextureList = UIStandFigureRender__GetTextureList(assetData, 0, v7);
    if ( !TextureList )
      goto LABEL_13;
    v11 = TextureList;
    if ( !LODWORD(TextureList->max_length) )
      sub_1C6BC68(TextureList);
    TextureList = (UnityEngine_Texture2D_array *)TextureList->m_Items[0];
    if ( !TextureList )
LABEL_13:
      sub_1C6BC60(TextureList, v10);
    v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_array *, const MethodInfo *))TextureList->obj.klass->vtable[6].methodPtr)(
            TextureList,
            TextureList->obj.klass->vtable[6].method);
    isCommitEnqueue = this->fields.isCommitEnqueue;
    imageId = this->fields.imageId;
    faceType = this->fields.faceType;
    formId = this->fields.formId;
    MultiPortraitIndex_k__BackingField = this->fields._MultiPortraitIndex_k__BackingField;
    this->fields.textureHeight = v12;
    if ( isCommitEnqueue )
    {
      v18 = (UIStandFigureR_WaitRenderInfo_o *)sub_1C6BC54(UIStandFigureR_WaitRenderInfo_TypeInfo);
      UIStandFigureR_WaitRenderInfo___ctor(
        v18,
        renderTexture,
        imageId,
        faceType,
        formId,
        MultiPortraitIndex_k__BackingField,
        v11,
        v19);
      this->fields.renderInfo = v18;
      p_renderInfo = &this->fields.renderInfo;
      sub_1C6B9AC((CGThumbnailListItem_o *)p_renderInfo, (int32_t)v18, v21, v22);
      *((_BYTE *)p_renderInfo + 17) = 1;
    }
    else
    {
      v23 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_1C6BC54(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
      StandFigureRenderWaitStatus_EndHandler___ctor(
        v23,
        (Il2CppObject *)this,
        Method_UIStandFigureR_EndRenderAssetWithEffect__,
        0);
      StandFigureManager__RenderWithEffect(
        renderTexture,
        imageId,
        faceType,
        formId,
        MultiPortraitIndex_k__BackingField,
        v11,
        v23,
        0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__SetActive(UIStandFigureR_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C6BC60(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


void UIStandFigureR__SetAlpha(UIStandFigureR_o *this, float a, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0

  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C6BC60(0, method);
  ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *, float))bodyTexture->klass->vtable._8_set_alpha.methodPtr)(
    bodyTexture,
    bodyTexture->klass->vtable._8_set_alpha.method,
    a);
}


void UIStandFigureR__SetCharacter(
        UIStandFigureR_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w2
  const MethodInfo *v15; // x7
  float v16; // s0

  if ( (byte_4CB7C24 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    byte_4CB7C24 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureR__SetCharacter_44302244(this, svtId, ImageLimitCount, offsetKind, faceType, 0, v16, callbackFunc, v15);
}


// local variable allocation has failed, the output may be wrong!
bool UIStandFigureR__SetCharacterForImageId(
        UIStandFigureR_o *this,
        int32_t imageId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        System_Action_o *callbackFunc,
        bool isPhotoWithMaster,
        const MethodInfo *method)
{
  bool v15; // w25
  struct System_String_o *AssetNameWithForm; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Delegate_o *v23; // x8
  System_Action_c *v24; // x1
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_4CB7C28 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndLoadAsset__);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C28 = 1;
  }
  v15 = isPhotoWithMaster;
  if ( (byte_4CB7C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C2A = 1;
  }
  this->fields.crossFadeTime = 0.0;
  this->fields.imageId = imageId;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, *(const MethodInfo **)&offsetKind);
  this->fields.loadName = AssetNameWithForm;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetNameWithForm, v17, v18);
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.isPhotoWithMaster = v15;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    v20 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v23 = v20;
    if ( v20 )
    {
      v24 = System_Action_TypeInfo;
      if ( (System_Action_c *)v20->klass == System_Action_TypeInfo )
      {
        *p_callbackFunc = (struct System_Action_o *)v20;
        if ( (System_Action_c *)v20->klass == v24 )
          goto LABEL_13;
      }
      sub_1C6BFFC(v20);
    }
    *p_callbackFunc = (struct System_Action_o *)v23;
LABEL_13:
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v23, v21, v22);
  }
  loadName = this->fields.loadName;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(loadName, v26, 1, 0);
}


bool UIStandFigureR__SetCharacterForImageIdWithEffect(
        UIStandFigureR_o *this,
        int32_t imageId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        int32_t multiPortraitIndex,
        System_Action_o *callbackFunc,
        bool isPhotoWithMaster,
        bool waitToStartRenderWhileAssetLoadBusy,
        bool isCommitEnqueue,
        const MethodInfo *method)
{
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct System_String_o *AssetNameWithForm; // x0
  struct System_String_o **p_loadName; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v30; // t1
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Delegate_o *v34; // x8
  System_Action_c *v35; // x1
  System_String_o *v36; // x19
  AssetLoader_LoadEndDataHandler_o *v37; // x20

  if ( (byte_4CB7C29 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass67_0__SetCharacterForImageIdWithEffect_g__OnLoadFinished_0__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass67_0_TypeInfo);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C29 = 1;
  }
  v17 = sub_1C6BC54(UIStandFigureR___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C6BC60(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_BYTE *)(v17 + 24) = waitToStartRenderWhileAssetLoadBusy;
  this->fields.renderInfo = 0;
  this->fields.isQueuerable = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.renderInfo, 0, v22, v23);
  if ( (byte_4CB7C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C2A = 1;
  }
  this->fields.crossFadeTime = 0.0;
  this->fields.imageId = imageId;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, v24);
  this->fields.loadName = AssetNameWithForm;
  p_loadName = &this->fields.loadName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetNameWithForm, v27, v28);
  this->fields.formId = formId;
  this->fields.isPhotoWithMaster = isPhotoWithMaster;
  this->fields.isCommitEnqueue = isCommitEnqueue;
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields._MultiPortraitIndex_k__BackingField = multiPortraitIndex;
  if ( callbackFunc )
  {
    v30 = (System_Delegate_o *)this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v31 = System_Delegate__Combine(v30, (System_Delegate_o *)callbackFunc, 0);
    v34 = v31;
    if ( v31 )
    {
      v35 = System_Action_TypeInfo;
      if ( (System_Action_c *)v31->klass == System_Action_TypeInfo )
      {
        p_callbackFunc->klass = (CGThumbnailListItem_c *)v31;
        if ( (System_Action_c *)v31->klass == v35 )
          goto LABEL_14;
      }
      sub_1C6BFFC(v31);
    }
    p_callbackFunc->klass = (CGThumbnailListItem_c *)v34;
LABEL_14:
    sub_1C6B9AC(p_callbackFunc, (int32_t)v34, v32, v33);
  }
  v36 = *p_loadName;
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v17,
    Method_UIStandFigureR___c__DisplayClass67_0__SetCharacterForImageIdWithEffect_g__OnLoadFinished_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v36, v37, 3, 0);
}


void UIStandFigureR__SetCharacterWithEffect(
        UIStandFigureR_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        float fadeTime,
        System_Action_o *callbackFunc,
        bool waitToStartRenderWhileAssetLoadBusy,
        const MethodInfo *method)
{
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t Id; // w0
  const MethodInfo *v24; // x2
  int32_t v25; // w25
  struct System_String_o *AssetNameWithForm; // x0
  struct System_String_o **p_loadName; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Action_o **p_callbackFunc; // x19
  System_Delegate_o *v31; // t1
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Delegate_o *v35; // x8
  System_Action_c *v36; // x1
  System_String_o *v37; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x20

  if ( (byte_4CB7C27 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass65_0__SetCharacterWithEffect_g__OnLoadFinished_0__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass65_0_TypeInfo);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C27 = 1;
  }
  v18 = sub_1C6BC54(UIStandFigureR___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    sub_1C6BC60(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_BYTE *)(v18 + 24) = waitToStartRenderWhileAssetLoadBusy;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  this->fields.imageId = Id;
  v25 = Id;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(v25, formId, v24);
  this->fields.loadName = AssetNameWithForm;
  p_loadName = &this->fields.loadName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetNameWithForm, v28, v29);
  if ( (byte_4CB7C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C2A = 1;
  }
  v31 = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc + 10) = 0;
  *((_DWORD *)p_callbackFunc - 13) = offsetKind;
  *((_DWORD *)p_callbackFunc - 12) = faceType;
  *((_DWORD *)p_callbackFunc - 11) = formId;
  *((_BYTE *)p_callbackFunc - 56) = 0;
  v32 = System_Delegate__Combine(v31, (System_Delegate_o *)callbackFunc, 0);
  v35 = v32;
  if ( !v32 )
    goto LABEL_12;
  v36 = System_Action_TypeInfo;
  if ( (System_Action_c *)v32->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v32, (System_Action_c *)v32->klass != v36) )
  {
    sub_1C6BFFC(v32);
LABEL_12:
    *p_callbackFunc = (struct System_Action_o *)v35;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)v35, v33, v34);
  v37 = *p_loadName;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v18,
    Method_UIStandFigureR___c__DisplayClass65_0__SetCharacterWithEffect_g__OnLoadFinished_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v37, v38, 3, 0);
}


void UIStandFigureR__SetCharacter_44302232(
        UIStandFigureR_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  float v8; // s0

  UIStandFigureR__SetCharacter_44302244(this, svtId, imageLimitCount, offsetKind, faceType, 0, v8, callbackFunc, v7);
}


void UIStandFigureR__SetCharacter_44302244(
        UIStandFigureR_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        float fadeTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w24
  struct System_String_o *AssetNameWithForm; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Delegate_o *v22; // x0
  struct System_Action_o **p_callbackFunc; // x24
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Delegate_o *v27; // x8
  System_Action_c *v28; // x1
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_4CB7C25 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndLoadAsset__);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C25 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  this->fields.imageId = Id;
  v18 = Id;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(v18, formId, v17);
  this->fields.loadName = AssetNameWithForm;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetNameWithForm, v20, v21);
  if ( (byte_4CB7C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C2A = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  v22 = (System_Delegate_o *)this->fields.callbackFunc;
  this->fields.crossFadeTime = 0.0;
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.isPhotoWithMaster = 0;
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)callbackFunc, 0);
  v27 = v24;
  if ( !v24 )
    goto LABEL_11;
  v28 = System_Action_TypeInfo;
  if ( (System_Action_c *)v24->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v24, (System_Action_c *)v24->klass != v28) )
  {
    sub_1C6BFFC(v24);
LABEL_11:
    *p_callbackFunc = (struct System_Action_o *)v27;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v27, v25, v26);
  loadName = this->fields.loadName;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(loadName, v30, 1, 0);
}


void UIStandFigureR__SetConstantOffset(UIStandFigureR_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Object_o *v6; // x20
  BalanceConfig_c *v7; // x0
  System_Object_array *UIStandFigureROffsetEffectNames; // x20
  System_Func_object__bool__o *v9; // x21
  __int64 v10; // x21
  int v11; // w8
  unsigned int v12; // w22
  void *v13; // x20
  int32_t v14; // s11
  int v15; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  int32_t v19; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7C3A & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_Any_string____78571208);
    sub_1C6BA08(&FSUtility_TypeInfo);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR__SetConstantOffset_b__90_0__);
    byte_4CB7C3A = 1;
  }
  *(_QWORD *)result = 0;
  v19 = 0;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_40;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(parent, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_40;
      transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !transform )
        goto LABEL_40;
      v6 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
      {
        v7 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v7 = BalanceConfig_TypeInfo;
        }
        UIStandFigureROffsetEffectNames = (System_Object_array *)v7->static_fields->UIStandFigureROffsetEffectNames;
        v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)this,
          Method_UIStandFigureR__SetConstantOffset_b__90_0__,
          0);
        if ( BasicHelper__Any_object__51528924(
               UIStandFigureROffsetEffectNames,
               (System_Func_T__bool__o *)v9,
               (const MethodInfo_31244DC *)Method_BasicHelper_Any_string____78571208) )
        {
          transform = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            transform = BalanceConfig_TypeInfo;
          }
          v10 = *(_QWORD *)(*((_QWORD *)transform + 23) + 928LL);
          if ( !v10 )
            goto LABEL_40;
          v11 = *(_DWORD *)(v10 + 24);
          if ( v11 >= 1 )
          {
            v12 = 0;
            while ( 1 )
            {
              if ( v12 >= v11 )
LABEL_41:
                sub_1C6BC68(transform);
              transform = *(void **)(v10 + 8LL * (int)v12 + 32);
              if ( !transform )
                goto LABEL_40;
              transform = System_String__Split((System_String_o *)transform, 0x3Au, 0, 0);
              if ( !transform )
                goto LABEL_40;
              v13 = transform;
              if ( *((int *)transform + 6) >= 3 )
              {
                result[1] = 0;
                transform = (void *)System_Int32__TryParse(*((System_String_o **)transform + 4), &result[1], 0);
                if ( ((unsigned __int8)transform & 1) != 0 && result[1] == this->fields.imageId )
                {
                  v19 = 0;
                  result[0] = 0;
                  if ( *((_DWORD *)v13 + 6) <= 1u )
                    goto LABEL_41;
                  transform = (void *)System_Int32__TryParse(*((System_String_o **)v13 + 5), result, 0);
                  if ( ((unsigned __int8)transform & 1) != 0 )
                    break;
                  if ( *((_DWORD *)v13 + 6) <= 2u )
                    goto LABEL_41;
                  transform = (void *)System_Int32__TryParse(*((System_String_o **)v13 + 6), &v19, 0);
                  if ( ((unsigned __int8)transform & 1) != 0 )
                    break;
                }
              }
              v11 = *(_DWORD *)(v10 + 24);
              if ( (int)++v12 >= v11 )
                return;
            }
            transform = this->fields.bodyTexture;
            if ( transform )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
              if ( transform )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
                transform = this->fields.bodyTexture;
                if ( transform )
                {
                  v14 = v19;
                  v15 = result[0];
                  x = localPosition.fields.x;
                  y = localPosition.fields.y;
                  z = localPosition.fields.z;
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
                  if ( transform )
                  {
                    v22.fields.x = x + (float)v15;
                    v22.fields.y = y + (float)v14;
                    v22.fields.z = z;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0);
                    return;
                  }
                }
              }
            }
LABEL_40:
            sub_1C6BC60(transform, v4);
          }
        }
      }
    }
  }
}


void UIStandFigureR__SetCrossFadeTime(UIStandFigureR_o *this, float fadeTime, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20

  if ( (byte_4CB7C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C2A = 1;
  }
  if ( fadeTime <= 0.0
    || this->fields.oldFaceType == this->fields.faceType && this->fields.oldFormId == this->fields.formId )
  {
    goto LABEL_9;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
LABEL_9:
    fadeTime = 0.0;
  this->fields.crossFadeTime = fadeTime;
}


void UIStandFigureR__SetDepth(UIStandFigureR_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C6BC60(0, d);
  UIWidget__set_depth(bodyTexture, d, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__SetFace(UIStandFigureR_o *this, int32_t faceType, float fadeTime, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  this->fields.faceType = faceType;
  UIStandFigureR__SetCrossFadeTime(this, fadeTime, *(const MethodInfo **)&faceType);
  if ( !this->fields.loadName )
    UIStandFigureR__RequestRenderAsset(this, v5);
}


void UIStandFigureR__SetFace_44313348(
        UIStandFigureR_o *this,
        int32_t faceType,
        System_Action_o *callbackFunc,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Delegate_o *v13; // x8
  System_Action_c *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CB7C32 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB7C32 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v13 = v10;
  if ( !v10 )
    goto LABEL_7;
  v14 = System_Action_TypeInfo;
  if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v14) )
  {
    sub_1C6BFFC(v10);
LABEL_7:
    *p_callbackFunc = (struct System_Action_o *)v13;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v13, v11, v12);
  UIStandFigureR__SetFace(this, faceType, fadeTime, v15);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__SetFace_44313536(
        UIStandFigureR_o *this,
        int32_t faceType,
        int32_t formId,
        System_Action_o *callbackFunc,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x23
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Delegate_o *v15; // x8
  System_Action_c *v16; // x1
  int32_t imageId; // w21
  struct System_String_o *AssetNameWithForm; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x20
  System_Predicate_object__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x2
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_4CB7C33 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Find__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&System_Predicate_AssetData__TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR_EndLoadFormAsset__);
    sub_1C6BA08(&Method_UIStandFigureR__SetFace_b__79_0__);
    sub_1C6BA08(&UIStandFigureRender_TypeInfo);
    byte_4CB7C33 = 1;
  }
  if ( this->fields.formId == formId )
  {
    UIStandFigureR__SetFace_44313348(this, faceType, callbackFunc, fadeTime, (const MethodInfo *)callbackFunc);
    return;
  }
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    v12 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v15 = v12;
    if ( v12 )
    {
      v16 = System_Action_TypeInfo;
      if ( (System_Action_c *)v12->klass == System_Action_TypeInfo )
      {
        *p_callbackFunc = (struct System_Action_o *)v12;
        if ( (System_Action_c *)v12->klass == v16 )
          goto LABEL_11;
      }
      sub_1C6BFFC(v12);
    }
    *p_callbackFunc = (struct System_Action_o *)v15;
LABEL_11:
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v15, v13, v14);
  }
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  imageId = this->fields.imageId;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, *(const MethodInfo **)&formId);
  this->fields.loadName = AssetNameWithForm;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetNameWithForm, v19, v20);
  UIStandFigureR__SetCrossFadeTime(this, fadeTime, v21);
  formAssetList = this->fields.formAssetList;
  v23 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_AssetData__TypeInfo);
  System_Predicate_object____ctor(v23, (Il2CppObject *)this, Method_UIStandFigureR__SetFace_b__79_0__, 0);
  if ( !formAssetList )
    sub_1C6BC60(v24, v25);
  v26 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)formAssetList,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_AssetData__Find__);
  if ( v26 )
  {
    UIStandFigureR__EndLoadFormAsset(this, (AssetData_o *)v26, v27);
  }
  else
  {
    loadName = this->fields.loadName;
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v29, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadFormAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(loadName, v29, 1, 0);
  }
}


void UIStandFigureR__SetLayer(UIStandFigureR_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIStandFigureR__SetLayer_44316712(this, transform, layer, v8);
  }
}


void UIStandFigureR__SetLayer_44316712(
        UIStandFigureR_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIStandFigureR_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4CB7C39 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    this = (UIStandFigureR_o *)sub_1C6BA08(&UnityEngine_Transform_TypeInfo);
    byte_4CB7C39 = 1;
  }
  if ( !tf || (this = (UIStandFigureR_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
LABEL_33:
    sub_1C6BC60(this, tf);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C6BFFC(v17);
        goto LABEL_33;
      }
    }
    UIStandFigureR__SetLayer_44316712(v6, v17, layer, v18);
  }
  v20 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}


void UIStandFigureR__SetMaterial(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x20
  UnityEngine_Material_o *v4; // x21
  const MethodInfo *v5; // x2

  if ( (byte_4CB7C38 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&StringLiteral_16259/*"_MainTex2"*/);
    sub_1C6BA08(&StringLiteral_4933/*"Custom/Sprites-StandFigureRender"*/);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_16117/*"_AlphaMaskLength"*/);
    sub_1C6BA08(&StringLiteral_16130/*"_Blend"*/);
    sub_1C6BA08(&StringLiteral_16118/*"_AlphaMaskStart"*/);
    byte_4CB7C38 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4933/*"Custom/Sprites-StandFigureRender"*/, 0);
  v4 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v4, v3, 0);
  UIStandFigureR__set_BodyTextureMaterial(this, v4, v5);
  this->fields.blendId = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16130/*"_Blend"*/, 0);
  this->fields.mainTexId = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16258/*"_MainTex"*/, 0);
  this->fields.mainTex2Id = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16259/*"_MainTex2"*/, 0);
  this->fields.alphaMaskStartId = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16118/*"_AlphaMaskStart"*/, 0);
  this->fields.alphaMaskLengthId = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16117/*"_AlphaMaskLength"*/, 0);
}


void UIStandFigureR__SetSvtMultiPortraitEntity(
        UIStandFigureR_o *this,
        SvtMultiPortraitEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.svtMultiPortraitEntity = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtMultiPortraitEntity, (int32_t)entity, (int32_t)method, v3);
}


void UIStandFigureR__StartCrossFade(
        UIStandFigureR_o *this,
        float fadeTime,
        UnityEngine_RenderTexture_o *fadeInRenderTex,
        const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v5 = UIStandFigureR__ChangeCrossFade(this, fadeTime, fadeInRenderTex, method);
  this->fields.fadeCoroutine = v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fadeCoroutine, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, this->fields.fadeCoroutine, 0);
}


void UIStandFigureR__StopCrossFade(UIStandFigureR_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_IEnumerator_o *fadeCoroutine; // x1

  fadeCoroutine = this->fields.fadeCoroutine;
  if ( fadeCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, fadeCoroutine, 0);
  UIStandFigureR__EndCrossFade(this, this->fields.currentBodyTexture, v2);
}


System_Collections_IEnumerator_o *UIStandFigureR__WaitWhileLoading(
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB7C2D & 1) == 0 )
  {
    sub_1C6BA08(&UIStandFigureR__WaitWhileLoading_d__71_TypeInfo);
    byte_4CB7C2D = 1;
  }
  v3 = sub_1C6BC54(UIStandFigureR__WaitWhileLoading_d__71_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)finishCallback, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool UIStandFigureR___SetConstantOffset_b__90_0(
        UIStandFigureR_o *this,
        System_String_o *offsetEffectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0
    || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0)) == 0 )
  {
    sub_1C6BC60(transform, v5);
  }
  return System_String__Contains((System_String_o *)transform, offsetEffectName, 0);
}


bool UIStandFigureR___SetFace_b__79_0(UIStandFigureR_o *this, AssetData_o *a, const MethodInfo *method)
{
  System_String_o *name; // x8

  if ( !a || (name = a->fields.name) == 0 )
    sub_1C6BC60(this, a);
  return System_String__Equals_64002112(name, this->fields.loadName, 0);
}


UnityEngine_Material_o *UIStandFigureR__get_BodyTextureMaterial(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Material_o **p_bodyTextureMaterial; // x19
  UnityEngine_Object_o *bodyTextureMaterial; // x21
  __int64 v5; // x1
  struct UITexture_o *bodyTexture; // x0
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB7C20 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C20 = 1;
  }
  p_bodyTextureMaterial = &this->fields.bodyTextureMaterial;
  bodyTextureMaterial = (UnityEngine_Object_o *)this->fields.bodyTextureMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bodyTextureMaterial, 0, 0) )
  {
    bodyTexture = this->fields.bodyTexture;
    if ( !bodyTexture )
      sub_1C6BC60(0, v5);
    v7 = ((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._24_get_material.methodPtr)(
           bodyTexture,
           bodyTexture->klass->vtable._24_get_material.method);
    *p_bodyTextureMaterial = (UnityEngine_Material_o *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bodyTextureMaterial, v7, v8, v9);
  }
  return *p_bodyTextureMaterial;
}


int32_t UIStandFigureR__get_FormId(UIStandFigureR_o *this, const MethodInfo *method)
{
  return this->fields.formId;
}


int32_t UIStandFigureR__get_Id(UIStandFigureR_o *this, const MethodInfo *method)
{
  return this->fields.imageId;
}


bool UIStandFigureR__get_IsLoad(UIStandFigureR_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}


int32_t UIStandFigureR__get_MultiPortraitIndex(UIStandFigureR_o *this, const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField;
}


UITexture_o *UIStandFigureR__get_Texture(UIStandFigureR_o *this, const MethodInfo *method)
{
  return this->fields.bodyTexture;
}


void UIStandFigureR__set_BodyTextureMaterial(
        UIStandFigureR_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_bodyTextureMaterial; // x21
  UnityEngine_Object_o *bodyTextureMaterial; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x1
  struct UITexture_o *bodyTexture; // x0

  if ( (byte_4CB7C21 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7C21 = 1;
  }
  p_bodyTextureMaterial = &this->fields.bodyTextureMaterial;
  bodyTextureMaterial = (UnityEngine_Object_o *)this->fields.bodyTextureMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTextureMaterial, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)*p_bodyTextureMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v9, 0);
  }
  this->fields.bodyTextureMaterial = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bodyTextureMaterial, (int32_t)value, v7, v8);
  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C6BC60(0, v10);
  ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
    bodyTexture,
    *p_bodyTextureMaterial,
    bodyTexture->klass->vtable._25_set_material.method);
}


void UIStandFigureR__set_MultiPortraitIndex(UIStandFigureR_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MultiPortraitIndex_k__BackingField = value;
}


void UIStandFigureR_WaitRenderInfo___ctor(
        UIStandFigureR_WaitRenderInfo_o *this,
        UnityEngine_RenderTexture_o *renderText,
        int32_t imageId,
        int32_t faceType,
        int32_t formId,
        int32_t multiPortraitIndex,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  UIStandFigureR_WaitRenderInfo_o *v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields._RenderText_k__BackingField = renderText;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->fields, (int32_t)renderText, v15, v16);
  v14->fields._TextureList_k__BackingField = textureList;
  v14 = (UIStandFigureR_WaitRenderInfo_o *)((char *)v14 + 40);
  v14[-1].fields._FormId_k__BackingField = imageId;
  v14[-1].fields._MultiPortraitIndex_k__BackingField = faceType;
  LODWORD(v14[-1].fields._TextureList_k__BackingField) = formId;
  HIDWORD(v14[-1].fields._TextureList_k__BackingField) = multiPortraitIndex;
  sub_1C6B9AC((CGThumbnailListItem_o *)v14, (int32_t)textureList, v17, v18);
}


int32_t UIStandFigureR_WaitRenderInfo__get_FaceType(UIStandFigureR_WaitRenderInfo_o *this, const MethodInfo *method)
{
  return this->fields._FaceType_k__BackingField;
}


int32_t UIStandFigureR_WaitRenderInfo__get_FormId(UIStandFigureR_WaitRenderInfo_o *this, const MethodInfo *method)
{
  return this->fields._FormId_k__BackingField;
}


int32_t UIStandFigureR_WaitRenderInfo__get_ImageId(UIStandFigureR_WaitRenderInfo_o *this, const MethodInfo *method)
{
  return this->fields._ImageId_k__BackingField;
}


int32_t UIStandFigureR_WaitRenderInfo__get_MultiPortraitIndex(
        UIStandFigureR_WaitRenderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField;
}


UnityEngine_RenderTexture_o *UIStandFigureR_WaitRenderInfo__get_RenderText(
        UIStandFigureR_WaitRenderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RenderText_k__BackingField;
}


UnityEngine_Texture2D_array *UIStandFigureR_WaitRenderInfo__get_TextureList(
        UIStandFigureR_WaitRenderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TextureList_k__BackingField;
}


void UIStandFigureR_WaitRenderInfo__set_FaceType(
        UIStandFigureR_WaitRenderInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FaceType_k__BackingField = value;
}


void UIStandFigureR_WaitRenderInfo__set_FormId(
        UIStandFigureR_WaitRenderInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FormId_k__BackingField = value;
}


void UIStandFigureR_WaitRenderInfo__set_ImageId(
        UIStandFigureR_WaitRenderInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageId_k__BackingField = value;
}


void UIStandFigureR_WaitRenderInfo__set_MultiPortraitIndex(
        UIStandFigureR_WaitRenderInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MultiPortraitIndex_k__BackingField = value;
}


void UIStandFigureR_WaitRenderInfo__set_RenderText(
        UIStandFigureR_WaitRenderInfo_o *this,
        UnityEngine_RenderTexture_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RenderText_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void UIStandFigureR_WaitRenderInfo__set_TextureList(
        UIStandFigureR_WaitRenderInfo_o *this,
        UnityEngine_Texture2D_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TextureList_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._TextureList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void UIStandFigureR__ChangeCrossFade_d__92___ctor(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__ChangeCrossFade_d__92__MoveNext(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        const MethodInfo *method)
{
  UIStandFigureR__ChangeCrossFade_d__92_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureR_o *_4__this; // x20
  const MethodInfo *v5; // x2
  float total_5__2; // s8
  float v7; // s8
  float time; // s9
  float v9; // s8
  struct UITexture_o *bodyTexture; // x8
  UnityEngine_Object_o *drawCall; // x21
  struct UITexture_o *v12; // x8
  struct UIDrawCall_o *v13; // x8
  UnityEngine_Object_o *mDynamicMat; // x21
  struct UITexture_o *v15; // x8
  struct UIDrawCall_o *v16; // x8
  UnityEngine_WaitForFixedUpdate_o *v17; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4CB7C41 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureR__ChangeCrossFade_d__92_o *)sub_1C6BA08(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    byte_4CB7C41 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    total_5__2 = v2->fields._total_5__2;
    v2->fields.__1__state = -1;
    v7 = total_5__2 + RealTime__get_deltaTime(0);
    v2->fields._total_5__2 = v7;
    if ( _4__this )
    {
      time = v2->fields.time;
      this = (UIStandFigureR__ChangeCrossFade_d__92_o *)UIStandFigureR__get_BodyTextureMaterial(_4__this, method);
      if ( this )
      {
        v9 = v7 / time;
        UnityEngine_Material__SetFloat_71528744((UnityEngine_Material_o *)this, _4__this->fields.blendId, v9, 0);
        bodyTexture = _4__this->fields.bodyTexture;
        if ( bodyTexture )
        {
          drawCall = (UnityEngine_Object_o *)bodyTexture->fields.drawCall;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (UIStandFigureR__ChangeCrossFade_d__92_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_23;
          v12 = _4__this->fields.bodyTexture;
          if ( v12 )
          {
            v13 = v12->fields.drawCall;
            if ( v13 )
            {
              mDynamicMat = (UnityEngine_Object_o *)v13->fields.mDynamicMat;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (UIStandFigureR__ChangeCrossFade_d__92_o *)UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_23;
              v15 = _4__this->fields.bodyTexture;
              if ( v15 )
              {
                v16 = v15->fields.drawCall;
                if ( v16 )
                {
                  this = (UIStandFigureR__ChangeCrossFade_d__92_o *)v16->fields.mDynamicMat;
                  if ( this )
                  {
                    UnityEngine_Material__SetFloat_71528744(
                      (UnityEngine_Material_o *)this,
                      _4__this->fields.blendId,
                      v9,
                      0);
                    goto LABEL_23;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C6BC60(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  _4__this->fields.isCrossFade = 1;
  v2->fields._total_5__2 = 0.0;
  this = (UIStandFigureR__ChangeCrossFade_d__92_o *)_4__this->fields.bodyTexture;
  if ( !this )
    goto LABEL_27;
  UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
LABEL_23:
  if ( v2->fields._total_5__2 < v2->fields.time )
  {
    v17 = (UnityEngine_WaitForFixedUpdate_o *)sub_1C6BC54(UnityEngine_WaitForFixedUpdate_TypeInfo);
    UnityEngine_WaitForFixedUpdate___ctor(v17, 0);
    v2->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1C6B9AC(p__2__current, (int32_t)v17, v19, v20);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  UIStandFigureR__EndCrossFade(_4__this, v2->fields.fadeInRenderTex, v5);
  return 0;
}


Il2CppObject *UIStandFigureR__ChangeCrossFade_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__ChangeCrossFade_d__92__System_Collections_IEnumerator_Reset(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_UIStandFigureR__ChangeCrossFade_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *UIStandFigureR__ChangeCrossFade_d__92__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__ChangeCrossFade_d__92__System_IDisposable_Dispose(
        UIStandFigureR__ChangeCrossFade_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR__PlayAnimationProc_d__96___ctor(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__PlayAnimationProc_d__96__MoveNext(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        const MethodInfo *method)
{
  UIStandFigureR__PlayAnimationProc_d__96_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureR_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIStandFigureR_o *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *animationName; // x1
  float playDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  System_Action_o *endCallback; // x0
  struct UIStandFigureR___c__DisplayClass96_0_o *_8__1; // x8
  Il2CppObject *v22; // x20
  System_Func_bool__o *v23; // x21
  UnityEngine_WaitUntil_o *v24; // x20
  CGThumbnailListItem_o *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v2 = this;
  if ( (byte_4CB7C42 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_UIStandFigureR___c__DisplayClass96_0__PlayAnimationProc_b__0__);
    sub_1C6BA08(&UIStandFigureR___c__DisplayClass96_0_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (UIStandFigureR__PlayAnimationProc_d__96_o *)sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CB7C42 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    endCallback = v2->fields.endCallback;
    v2->fields.__1__state = -1;
LABEL_19:
    ActionExtensions__Call(endCallback, 0);
    return 0;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C6BC54(UIStandFigureR___c__DisplayClass96_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct UIStandFigureR___c__DisplayClass96_0_o *)v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7);
    this = (UIStandFigureR__PlayAnimationProc_d__96_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v10 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v10, v8, v9);
    this = (UIStandFigureR__PlayAnimationProc_d__96_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animationName = (Il2CppObject *)v2->fields.animationName;
    this->fields.__2__current = animationName;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)animationName, v11, v12);
    playDelayTime = v2->fields.playDelayTime;
    if ( playDelayTime > 0.0 )
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, playDelayTime, 0);
      v2->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v15, v17, v18);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_12:
    if ( _4__this )
    {
      this = (UIStandFigureR__PlayAnimationProc_d__96_o *)_4__this->fields.animationComponent;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (UIStandFigureR__PlayAnimationProc_d__96_o *)_4__this->fields.animationComponent;
          if ( this )
          {
            UnityEngine_Animation__Play_71403152((UnityEngine_Animation_o *)this, _8__1->fields.animationName, 0);
            if ( v2->fields.endCallback )
            {
              v22 = (Il2CppObject *)v2->fields.__8__1;
              v23 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v23,
                v22,
                Method_UIStandFigureR___c__DisplayClass96_0__PlayAnimationProc_b__0__,
                0);
              v24 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v24, v23, 0);
              v2->fields.__2__current = (Il2CppObject *)v24;
              v25 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C6B9AC(v25, (int32_t)v24, v26, v27);
              LODWORD(v25[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
              return 1;
            }
            endCallback = 0;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_21:
    sub_1C6BC60(this, method);
  }
  return 0;
}


Il2CppObject *UIStandFigureR__PlayAnimationProc_d__96__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__PlayAnimationProc_d__96__System_Collections_IEnumerator_Reset(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_UIStandFigureR__PlayAnimationProc_d__96_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *UIStandFigureR__PlayAnimationProc_d__96__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__PlayAnimationProc_d__96__System_IDisposable_Dispose(
        UIStandFigureR__PlayAnimationProc_d__96_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR__WaitWhileLoading_d__71___ctor(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__WaitWhileLoading_d__71__MoveNext(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *finishCallback; // x8
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitWhile_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB7C43 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetManager_LoadIsBusy__);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CB7C43 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
    if ( finishCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))finishCallback->fields.invoke_impl)(
        finishCallback->fields.method_code,
        finishCallback->fields.method);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v9 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, 0, Method_AssetManager_LoadIsBusy__, 0);
  v10 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v10, v9, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v10, v11, v12);
  this->fields.__1__state = 2;
  return 1;
}


Il2CppObject *UIStandFigureR__WaitWhileLoading_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__WaitWhileLoading_d__71__System_Collections_IEnumerator_Reset(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_UIStandFigureR__WaitWhileLoading_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *UIStandFigureR__WaitWhileLoading_d__71__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__WaitWhileLoading_d__71__System_IDisposable_Dispose(
        UIStandFigureR__WaitWhileLoading_d__71_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR___c__DisplayClass65_0___ctor(
        UIStandFigureR___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIStandFigureR___c__DisplayClass65_0___SetCharacterWithEffect_g__OnLoadFinished_0(
        UIStandFigureR___c__DisplayClass65_0_o *this,
        AssetData_o *inAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, inAssetData);
  UIStandFigureR__EndLoadAssetWithEffect(
    this->fields.__4__this,
    inAssetData,
    this->fields.waitToStartRenderWhileAssetLoadBusy,
    v3);
}


void UIStandFigureR___c__DisplayClass67_0___ctor(
        UIStandFigureR___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIStandFigureR___c__DisplayClass67_0___SetCharacterForImageIdWithEffect_g__OnLoadFinished_0(
        UIStandFigureR___c__DisplayClass67_0_o *this,
        AssetData_o *inAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, inAssetData);
  UIStandFigureR__EndLoadAssetWithEffect(
    this->fields.__4__this,
    inAssetData,
    this->fields.waitToStartRenderWhileAssetLoadBusy,
    v3);
}


void UIStandFigureR___c__DisplayClass80_0___ctor(
        UIStandFigureR___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass80_0___EndLoadFormAsset_b__0(
        UIStandFigureR___c__DisplayClass80_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  struct AssetData_o *assetData; // x8

  if ( !a
    || (assetData = this->fields.assetData) == 0
    || (this = (UIStandFigureR___c__DisplayClass80_0_o *)a->fields.name) == 0 )
  {
    sub_1C6BC60(this, a);
  }
  return System_String__Equals_64002112((System_String_o *)this, assetData->fields.name, 0);
}


void UIStandFigureR___c__DisplayClass81_0___ctor(
        UIStandFigureR___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass81_0___PreloadFormAssets_b__0(
        UIStandFigureR___c__DisplayClass81_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  System_String_o *name; // x8

  if ( !a || (name = a->fields.name) == 0 )
    sub_1C6BC60(this, a);
  return System_String__Equals_64002112(name, this->fields.assetPath, 0);
}


bool UIStandFigureR___c__DisplayClass81_0___PreloadFormAssets_b__1(
        UIStandFigureR___c__DisplayClass81_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return System_String__Equals_64002112(a, this->fields.assetPath, 0);
}


void UIStandFigureR___c__DisplayClass84_0___ctor(
        UIStandFigureR___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass84_0___OnEndPreloadForms_b__0(
        UIStandFigureR___c__DisplayClass84_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  if ( !a || (asset = this->fields.asset) == 0 || (this = (UIStandFigureR___c__DisplayClass84_0_o *)a->fields.name) == 0 )
    sub_1C6BC60(this, a);
  return System_String__Equals_64002112((System_String_o *)this, asset->fields.name, 0);
}


void UIStandFigureR___c__DisplayClass96_0___ctor(
        UIStandFigureR___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass96_0___PlayAnimationProc_b__0(
        UIStandFigureR___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *_4__this; // x8
  UIStandFigureR___c__DisplayClass96_0_o *v3; // x19
  struct UIStandFigureR_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (UIStandFigureR___c__DisplayClass96_0_o *)_4__this->fields.animationComponent;
  if ( !this )
    goto LABEL_10;
  this = (UIStandFigureR___c__DisplayClass96_0_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)this,
                                                     v3->fields.animationName,
                                                     0);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (UIStandFigureR___c__DisplayClass96_0_o *)v4->fields.animationComponent) == 0 )
LABEL_10:
    sub_1C6BC60(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0);
}