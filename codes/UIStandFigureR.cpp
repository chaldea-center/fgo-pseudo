void UIStandFigureR___ctor(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_AssetData__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593A038 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_593A038 = 1;
  }
  v3 = System_Collections_Generic_List_AssetData__TypeInfo;
  this->fields.alphaMaskStart = 1.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.formAssetList = (struct System_Collections_Generic_List_AssetData__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.formAssetList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadNameList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIStandFigureR__CancelPreloadFormAssets(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFuncAfterLoadForms = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncAfterLoadForms, 0, v2, v3, v4, v5, v6, v7);
}


System_Collections_IEnumerator_o *UIStandFigureR__ChangeCrossFade(
        UIStandFigureR_o *this,
        float time,
        UnityEngine_RenderTexture_o *fadeInRenderTex,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593A033 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureR__ChangeCrossFade_d__93_TypeInfo);
    byte_593A033 = 1;
  }
  v7 = sub_21FFEBC(UIStandFigureR__ChangeCrossFade_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v7 + 40) = time;
  *(_QWORD *)(v7 + 48) = fadeInRenderTex;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)fadeInRenderTex, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void UIStandFigureR__EndCrossFade(
        UIStandFigureR_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *bodyTexture; // x21
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  __int64 v8; // x1
  struct UITexture_o *v9; // x8
  UnityEngine_Object_o *drawCall; // x21
  struct UITexture_o *v11; // x8
  struct UIDrawCall_o *v12; // x8
  UnityEngine_Object_o *mDynamicMat; // x21
  struct UITexture_o *v14; // x8
  struct UIDrawCall_o *v15; // x8
  const MethodInfo *v16; // x1

  if ( (byte_593A034 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A034 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  this->fields.isCrossFade = 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, renderTex);
  BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0, 0);
  if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
  {
    v9 = this->fields.bodyTexture;
    if ( !v9 )
      goto LABEL_23;
    drawCall = (UnityEngine_Object_o *)v9->fields.drawCall;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
    if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
    {
      v11 = this->fields.bodyTexture;
      if ( !v11 )
        goto LABEL_23;
      v12 = v11->fields.drawCall;
      if ( !v12 )
        goto LABEL_23;
      mDynamicMat = (UnityEngine_Object_o *)v12->fields.mDynamicMat;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0);
      if ( ((unsigned __int8)BodyTextureMaterial & 1) != 0 )
      {
        v14 = this->fields.bodyTexture;
        if ( !v14 )
          goto LABEL_23;
        v15 = v14->fields.drawCall;
        if ( !v15 )
          goto LABEL_23;
        BodyTextureMaterial = v15->fields.mDynamicMat;
        if ( !BodyTextureMaterial )
          goto LABEL_23;
        UnityEngine_Material__SetTexture_83063164(
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
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v16);
      if ( BodyTextureMaterial )
      {
        UnityEngine_Material__SetFloat_83072080(BodyTextureMaterial, this->fields.blendId, 0.0, 0);
        return;
      }
    }
LABEL_23:
    sub_21FFECC(BodyTextureMaterial, v8);
  }
}


void UIStandFigureR__EndLoadAsset(UIStandFigureR_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UIStandFigureR_o *v4; // x19
  System_String_o *loadName; // x1
  __int64 v6; // x1
  Il2CppObject *current; // x22
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *m_CancellationTokenSource_low; // x2
  int v14; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  intptr_t v18; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+18h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_593A023 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Clear__);
    this = (UIStandFigureR_o *)sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_593A023 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData )
      goto LABEL_22;
    this = (UIStandFigureR_o *)assetData->fields.name;
    if ( !this )
      goto LABEL_22;
    if ( !System_String__Equals_75473208((System_String_o *)this, loadName, 0) )
      return;
    this = (UIStandFigureR_o *)v4->fields.formAssetList;
    if ( !this )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v32.fields._current;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
      AssetManager__releaseAsset_47465556((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    this = (UIStandFigureR_o *)v4->fields.formAssetList;
    if ( !this )
      goto LABEL_22;
    m_CancellationTokenSource_low = (System_String_o *)LODWORD(this->fields.m_CancellationTokenSource);
    v14 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
    LODWORD(this->fields.m_CancellationTokenSource) = 0;
    HIDWORD(this->fields.m_CancellationTokenSource) = v14;
    if ( (int)m_CancellationTokenSource_low >= 1 )
    {
      System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, (int32_t)m_CancellationTokenSource_low, 0);
      this = (UIStandFigureR_o *)v4->fields.formAssetList;
      if ( !this )
        goto LABEL_22;
    }
    m_CachedPtr = this->fields.m_CachedPtr;
    v16 = Method_System_Collections_Generic_List_AssetData__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
LABEL_22:
      sub_21FFECC(this, loadName);
    v17 = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)v17 >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)assetData,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = m_CachedPtr + 8 * v17;
      LODWORD(this->fields.m_CancellationTokenSource) = v17 + 1;
      *(_QWORD *)(v18 + 32) = assetData;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v18 + 32),
        (int32_t)assetData,
        m_CancellationTokenSource_low,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    v4->fields.loadName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.loadName, 0, v19, v20, v21, v22, v23, v24);
    v4->fields.assetData = assetData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.assetData,
      (int32_t)assetData,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v4->fields.isAssetLoaded = 1;
    UIStandFigureR__RequestRenderAsset(v4, v31);
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
  __int64 v8; // x1
  Il2CppObject *current; // x23
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *m_CancellationTokenSource_low; // x2
  int v16; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  intptr_t v20; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x1
  System_Collections_IEnumerator_o *v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_593A024 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    this = (UIStandFigureR_o *)sub_21FFC50(&Method_UIStandFigureR_RequestRenderAssetWithEffect__);
    byte_593A024 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  loadName = v6->fields.loadName;
  if ( loadName )
  {
    if ( !assetData )
      goto LABEL_29;
    this = (UIStandFigureR_o *)assetData->fields.name;
    if ( !this )
      goto LABEL_29;
    if ( System_String__Equals_75473208((System_String_o *)this, loadName, 0) )
    {
      this = (UIStandFigureR_o *)v6->fields.formAssetList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v37,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
        v38 = v37;
        v37.fields._list = 0;
        *(_QWORD *)&v37.fields._index = &v38;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v38,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
        {
          current = v38.fields._current;
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
          AssetManager__releaseAsset_47465556((AssetData_o *)current, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v38,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
        this = (UIStandFigureR_o *)v6->fields.formAssetList;
        if ( this )
        {
          m_CancellationTokenSource_low = (System_String_o *)LODWORD(this->fields.m_CancellationTokenSource);
          v16 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
          LODWORD(this->fields.m_CancellationTokenSource) = 0;
          HIDWORD(this->fields.m_CancellationTokenSource) = v16;
          if ( (int)m_CancellationTokenSource_low < 1
            || (System_Array__Clear(
                  (System_Array_o *)this->fields.m_CachedPtr,
                  0,
                  (int32_t)m_CancellationTokenSource_low,
                  0),
                (this = (UIStandFigureR_o *)v6->fields.formAssetList) != 0) )
          {
            m_CachedPtr = this->fields.m_CachedPtr;
            v18 = Method_System_Collections_Generic_List_AssetData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( m_CachedPtr )
            {
              v19 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v19 >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)assetData,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = m_CachedPtr + 8 * v19;
                LODWORD(this->fields.m_CancellationTokenSource) = v19 + 1;
                *(_QWORD *)(v20 + 32) = assetData;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v20 + 32),
                  (int32_t)assetData,
                  m_CancellationTokenSource_low,
                  v10,
                  v11,
                  v12,
                  v13,
                  v14);
              }
              v6->fields.loadName = 0;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.loadName, 0, v21, v22, v23, v24, v25, v26);
              v6->fields.assetData = assetData;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v6->fields.assetData,
                (int32_t)assetData,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              v6->fields.isAssetLoaded = 1;
              this = (UIStandFigureR_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
              if ( this )
              {
                if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0)
                  && waitToStartRenderWhileAssetLoadBusy )
                {
                  v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v34, (Il2CppObject *)v6, Method_UIStandFigureR_RequestRenderAssetWithEffect__, 0);
                  v36 = UIStandFigureR__WaitWhileLoading(v34, v35);
                  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v6, v36, 0);
                }
                else
                {
                  UIStandFigureR__RequestRenderAssetWithEffect(v6, v33);
                }
                return;
              }
            }
          }
        }
      }
LABEL_29:
      sub_21FFECC(this, loadName);
    }
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, loadName);
  AssetManager__releaseAsset_47465556(assetData, 0);
}


void UIStandFigureR__EndLoadFormAsset(UIStandFigureR_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *name; // x0
  struct AssetData_o *loadName; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct AssetData_o **v14; // x20
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x23
  System_Predicate_object__o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  struct AssetData_o *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1

  if ( (byte_593A02C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_21FFC50(&System_Predicate_AssetData__TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass81_0__EndLoadFormAsset_b__0__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass81_0_TypeInfo);
    byte_593A02C = 1;
  }
  v5 = sub_21FFEBC(UIStandFigureR___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = assetData;
  v14 = (struct AssetData_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)assetData, v8, v9, v10, v11, v12, v13);
  loadName = (struct AssetData_o *)this->fields.loadName;
  if ( loadName )
  {
    if ( !*v14 )
      goto LABEL_17;
    name = (System_Collections_Generic_List_object__o *)(*v14)->fields.name;
    if ( !name )
      goto LABEL_17;
    if ( System_String__Equals_75473208((System_String_o *)name, (System_String_o *)loadName, 0) )
    {
      formAssetList = this->fields.formAssetList;
      v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_AssetData__TypeInfo);
      System_Predicate_object____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_UIStandFigureR___c__DisplayClass81_0__EndLoadFormAsset_b__0__,
        0);
      if ( formAssetList )
      {
        if ( System_Collections_Generic_List_object___Exists(
               (System_Collections_Generic_List_object__o *)formAssetList,
               (System_Predicate_T__o *)v16,
               (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_AssetData__Exists__) )
        {
LABEL_16:
          this->fields.loadName = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadName, 0, v17, v18, v19, v20, v21, v22);
          v27 = *v14;
          this->fields.assetData = *v14;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
            (int32_t)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          UIStandFigureR__RequestRenderAsset(this, v34);
          return;
        }
        name = (System_Collections_Generic_List_object__o *)this->fields.formAssetList;
        if ( name )
        {
          items = name->fields._items;
          loadName = *v14;
          v24 = Method_System_Collections_Generic_List_AssetData__Add__;
          ++name->fields._version;
          if ( items )
          {
            size = name->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                name,
                (Il2CppObject *)loadName,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              name->fields._size = size + 1;
              v26[4] = (Il2CppClass *)loadName;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v26 + 4),
                (int32_t)loadName,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
            }
            goto LABEL_16;
          }
        }
      }
LABEL_17:
      sub_21FFECC(name, loadName);
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
  __int64 v6; // x1
  UnityEngine_Object_o *renderTexture; // x22
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *currentBodyTexture; // x22
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Transform_o *transform; // x21
  int32_t imageId; // w22
  int32_t formId; // w23
  int32_t offsetKind; // w24
  UnityEngine_Vector2_o CharacterOffset; // kr00_8 OVERLAPPED
  int v29; // s2
  float v30; // s2 OVERLAPPED
  float v31; // s3
  float v32; // s1
  int v33; // s0
  struct SvtMultiPortraitEntity_o *svtMultiPortraitEntity; // x8
  struct System_Int32_array *commonPosition; // x8
  struct SvtMultiPortraitEntity_o *v36; // x8
  struct System_Int32_array *v37; // x8
  int v38; // s11
  int v39; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  struct SvtMultiPortraitEntity_o *v43; // x8
  struct System_Int32_array *withMasterPhotoPosition; // x9
  struct System_Int32_array *v45; // x8
  int v46; // s11
  int v47; // w21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v49; // s9
  float v50; // s10
  float v51; // s8
  struct SvtMultiPortraitEntity_o *v52; // x8
  struct System_Int32_array *soloPhotoPosition; // x9
  struct System_Int32_array *v54; // x8
  int v55; // s11
  int v56; // w21
  struct UnityEngine_Vector3_StaticFields *v57; // x9
  float v58; // s9
  float v59; // s10
  float v60; // s8
  MethodInfo *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  _BOOL4 isRetryRender; // w8
  float crossFadeTime; // s0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v70; // x20
  struct System_Action_o *callbackFunc; // t1
  UnityEngine_Object_o *v72; // x22
  bool v73; // w22
  const MethodInfo *v74; // x1
  UnityEngine_Texture_o *v75; // x2
  const MethodInfo *v76; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A028 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A028 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderTex);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
      StandFigureManager__Release(this->fields.renderTexture, 0);
    if ( this->fields.isCrossFade )
    {
      currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
        UIStandFigureR__StopCrossFade(this, v8);
    }
    if ( this->fields.crossFadeTime <= 0.0 || this->fields.isRetryRender )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
      if ( !BodyTextureMaterial )
        goto LABEL_79;
      ((void (__fastcall *)(UnityEngine_Material_o *, UnityEngine_RenderTexture_o *, void *))BodyTextureMaterial->klass[1].vtable._3_ToString.method)(
        BodyTextureMaterial,
        renderTex,
        BodyTextureMaterial->klass[2]._1.image);
    }
    else
    {
      v72 = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v73 = UnityEngine_Object__op_Inequality(v72, 0, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v74);
      if ( v73 )
      {
        if ( !BodyTextureMaterial )
          goto LABEL_79;
        v75 = (UnityEngine_Texture_o *)this->fields.currentBodyTexture;
      }
      else
      {
        v75 = (UnityEngine_Texture_o *)renderTex;
        if ( !BodyTextureMaterial )
          goto LABEL_79;
      }
      UnityEngine_Material__SetTexture_83063164(BodyTextureMaterial, this->fields.mainTexId, v75, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v76);
      if ( !BodyTextureMaterial )
LABEL_79:
        sub_21FFECC(BodyTextureMaterial, v8);
      UnityEngine_Material__SetTexture_83063164(
        BodyTextureMaterial,
        this->fields.mainTex2Id,
        (UnityEngine_Texture_o *)renderTex,
        0);
    }
    this->fields.currentBodyTexture = renderTex;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentBodyTexture,
      (int32_t)renderTex,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.renderTexture = renderTex;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture,
      (int32_t)renderTex,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_79;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)BodyTextureMaterial, 0);
    imageId = this->fields.imageId;
    formId = this->fields.formId;
    offsetKind = this->fields.offsetKind;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v23);
    CharacterOffset = UIStandFigureRender__GetCharacterOffset(imageId, formId, offsetKind, 0);
    if ( !transform )
      goto LABEL_79;
    v29 = 0;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&CharacterOffset.fields.x, 0);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_79;
    v30 = 1.0;
    v31 = 1.0;
    if ( this->fields.textureHeight <= 1024 )
      v32 = -0.25;
    else
      v32 = 0.0;
    v33 = 0;
    UITexture__set_uvRect((UITexture_o *)BodyTextureMaterial, *(UnityEngine_Rect_o *)(&v30 - 2), 0);
    svtMultiPortraitEntity = this->fields.svtMultiPortraitEntity;
    if ( svtMultiPortraitEntity )
    {
      commonPosition = svtMultiPortraitEntity->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_79;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_79;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, 0);
        v36 = this->fields.svtMultiPortraitEntity;
        if ( !v36 )
          goto LABEL_79;
        v37 = v36->fields.commonPosition;
        if ( !v37 )
          goto LABEL_79;
        if ( LODWORD(v37->max_length) < 2 )
          goto LABEL_80;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_79;
        v39 = v37->m_Items[0];
        v38 = v37->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_79;
        v78.fields.z = z;
        v78.fields.x = x + (float)v39;
        v78.fields.y = y + (float)v38;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v78, 0);
      }
      if ( this->fields.isPhotoWithMaster )
      {
        v43 = this->fields.svtMultiPortraitEntity;
        if ( !v43 )
          goto LABEL_79;
        withMasterPhotoPosition = v43->fields.withMasterPhotoPosition;
        if ( withMasterPhotoPosition )
        {
          if ( SLODWORD(withMasterPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_5931940 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              v43 = this->fields.svtMultiPortraitEntity;
              byte_5931940 = 1;
              if ( !v43 )
                goto LABEL_79;
            }
            v45 = v43->fields.withMasterPhotoPosition;
            if ( !v45 )
              goto LABEL_79;
            if ( LODWORD(v45->max_length) < 2 )
              goto LABEL_80;
            v46 = v45->m_Items[0];
            v47 = v45->m_Items[1];
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            v49 = static_fields->zeroVector.fields.x;
            v50 = static_fields->zeroVector.fields.y;
            v51 = static_fields->zeroVector.fields.z;
            BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
            if ( !BodyTextureMaterial )
              goto LABEL_79;
            v79.fields.z = v51;
            v79.fields.x = v49 + (float)v46;
            v79.fields.y = v50 + (float)v47;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v79, 0);
          }
        }
      }
      if ( this->fields.isSoloPhoto )
      {
        v52 = this->fields.svtMultiPortraitEntity;
        if ( !v52 )
          goto LABEL_79;
        soloPhotoPosition = v52->fields.soloPhotoPosition;
        if ( soloPhotoPosition )
        {
          if ( SLODWORD(soloPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_5931940 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              v52 = this->fields.svtMultiPortraitEntity;
              byte_5931940 = 1;
              if ( !v52 )
                goto LABEL_79;
            }
            v54 = v52->fields.soloPhotoPosition;
            if ( !v54 )
              goto LABEL_79;
            if ( LODWORD(v54->max_length) >= 2 )
            {
              v55 = v54->m_Items[0];
              v56 = v54->m_Items[1];
              v57 = UnityEngine_Vector3_TypeInfo->static_fields;
              v58 = v57->zeroVector.fields.x;
              v59 = v57->zeroVector.fields.y;
              v60 = v57->zeroVector.fields.z;
              BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
              if ( !BodyTextureMaterial )
                goto LABEL_79;
              v80.fields.z = v60;
              v80.fields.x = v58 + (float)v55;
              v80.fields.y = v59 + (float)v56;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v80, 0);
              goto LABEL_59;
            }
LABEL_80:
            sub_21FFED4(BodyTextureMaterial);
          }
        }
      }
    }
LABEL_59:
    UIStandFigureR__SetConstantOffset(this, v8);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( BodyTextureMaterial )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)BodyTextureMaterial,
                                                        0);
      if ( BodyTextureMaterial )
      {
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)BodyTextureMaterial, 0) )
          goto LABEL_65;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( BodyTextureMaterial )
        {
          BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)BodyTextureMaterial,
                                                            0);
          if ( BodyTextureMaterial )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BodyTextureMaterial, 1, 0);
LABEL_65:
            isRetryRender = this->fields.isRetryRender;
            this->fields.isBusyRender = 0;
            if ( isRetryRender )
            {
              this->fields.isRetryRender = 0;
              UIStandFigureR__RequestRenderAsset(this, v8);
            }
            else
            {
              crossFadeTime = this->fields.crossFadeTime;
              if ( crossFadeTime > 0.0 )
                UIStandFigureR__StartCrossFade(this, crossFadeTime, renderTex, v61);
              callbackFunc = this->fields.callbackFunc;
              p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
              v70 = callbackFunc;
              if ( callbackFunc )
              {
                p_callbackFunc->klass = 0;
                sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)v61, v62, v63, v64, v65, v66);
                ((void (__fastcall *)(intptr_t, intptr_t))v70->fields.invoke_impl)(
                  v70->fields.method_code,
                  v70->fields.method);
              }
            }
            return;
          }
        }
      }
    }
    goto LABEL_79;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__EndRenderAssetWithEffect(
        UIStandFigureR_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *currentBodyTexture; // x21
  UnityEngine_Material_o *BodyTextureMaterial; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x21
  int32_t imageId; // w22
  int32_t formId; // w23
  int32_t offsetKind; // w24
  UnityEngine_Vector2_o CharacterOffset; // kr00_8 OVERLAPPED
  int v27; // s2
  float v28; // s2 OVERLAPPED
  float v29; // s3
  float v30; // s1
  int v31; // s0
  struct SvtMultiPortraitEntity_o *svtMultiPortraitEntity; // x8
  struct System_Int32_array *commonPosition; // x8
  struct SvtMultiPortraitEntity_o *v34; // x8
  struct System_Int32_array *v35; // x8
  int v36; // s11
  int v37; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  struct SvtMultiPortraitEntity_o *v41; // x8
  struct System_Int32_array *withMasterPhotoPosition; // x9
  struct System_Int32_array *v43; // x8
  int v44; // s11
  int v45; // w21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v47; // s9
  float v48; // s10
  float v49; // s8
  struct SvtMultiPortraitEntity_o *v50; // x8
  struct System_Int32_array *soloPhotoPosition; // x9
  struct System_Int32_array *v52; // x8
  int v53; // s11
  int v54; // w21
  struct UnityEngine_Vector3_StaticFields *v55; // x9
  float v56; // s9
  float v57; // s10
  float v58; // s8
  MethodInfo *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  _BOOL4 isRetryRender; // w8
  float crossFadeTime; // s0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v68; // x20
  struct System_Action_o *callbackFunc; // t1
  UnityEngine_Object_o *v70; // x21
  bool v71; // w21
  const MethodInfo *v72; // x1
  UnityEngine_Texture_o *v73; // x2
  const MethodInfo *v74; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A029 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A029 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderTex);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    if ( this->fields.isCrossFade )
    {
      currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
        UIStandFigureR__StopCrossFade(this, v6);
    }
    if ( this->fields.crossFadeTime <= 0.0 || this->fields.isRetryRender )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
      if ( !BodyTextureMaterial )
        goto LABEL_75;
      ((void (__fastcall *)(UnityEngine_Material_o *, UnityEngine_RenderTexture_o *, void *))BodyTextureMaterial->klass[1].vtable._3_ToString.method)(
        BodyTextureMaterial,
        renderTex,
        BodyTextureMaterial->klass[2]._1.image);
    }
    else
    {
      v70 = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v71 = UnityEngine_Object__op_Inequality(v70, 0, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v72);
      if ( v71 )
      {
        if ( !BodyTextureMaterial )
          goto LABEL_75;
        v73 = (UnityEngine_Texture_o *)this->fields.currentBodyTexture;
      }
      else
      {
        v73 = (UnityEngine_Texture_o *)renderTex;
        if ( !BodyTextureMaterial )
          goto LABEL_75;
      }
      UnityEngine_Material__SetTexture_83063164(BodyTextureMaterial, this->fields.mainTexId, v73, 0);
      BodyTextureMaterial = UIStandFigureR__get_BodyTextureMaterial(this, v74);
      if ( !BodyTextureMaterial )
LABEL_75:
        sub_21FFECC(BodyTextureMaterial, v6);
      UnityEngine_Material__SetTexture_83063164(
        BodyTextureMaterial,
        this->fields.mainTex2Id,
        (UnityEngine_Texture_o *)renderTex,
        0);
    }
    this->fields.currentBodyTexture = renderTex;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentBodyTexture,
      (int32_t)renderTex,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.renderTexture = renderTex;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture,
      (int32_t)renderTex,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_75;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)BodyTextureMaterial, 0);
    imageId = this->fields.imageId;
    formId = this->fields.formId;
    offsetKind = this->fields.offsetKind;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v21);
    CharacterOffset = UIStandFigureRender__GetCharacterOffset(imageId, formId, offsetKind, 0);
    if ( !transform )
      goto LABEL_75;
    v27 = 0;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&CharacterOffset.fields.x, 0);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( !BodyTextureMaterial )
      goto LABEL_75;
    v28 = 1.0;
    v29 = 1.0;
    if ( this->fields.textureHeight <= 1024 )
      v30 = -0.25;
    else
      v30 = 0.0;
    v31 = 0;
    UITexture__set_uvRect((UITexture_o *)BodyTextureMaterial, *(UnityEngine_Rect_o *)(&v28 - 2), 0);
    svtMultiPortraitEntity = this->fields.svtMultiPortraitEntity;
    if ( svtMultiPortraitEntity )
    {
      commonPosition = svtMultiPortraitEntity->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_75;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_75;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, 0);
        v34 = this->fields.svtMultiPortraitEntity;
        if ( !v34 )
          goto LABEL_75;
        v35 = v34->fields.commonPosition;
        if ( !v35 )
          goto LABEL_75;
        if ( LODWORD(v35->max_length) < 2 )
          goto LABEL_76;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( !BodyTextureMaterial )
          goto LABEL_75;
        v37 = v35->m_Items[0];
        v36 = v35->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)BodyTextureMaterial,
                                                          0);
        if ( !BodyTextureMaterial )
          goto LABEL_75;
        v76.fields.z = z;
        v76.fields.x = x + (float)v37;
        v76.fields.y = y + (float)v36;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v76, 0);
      }
      if ( this->fields.isPhotoWithMaster )
      {
        v41 = this->fields.svtMultiPortraitEntity;
        if ( !v41 )
          goto LABEL_75;
        withMasterPhotoPosition = v41->fields.withMasterPhotoPosition;
        if ( withMasterPhotoPosition )
        {
          if ( SLODWORD(withMasterPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_5931940 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              v41 = this->fields.svtMultiPortraitEntity;
              byte_5931940 = 1;
              if ( !v41 )
                goto LABEL_75;
            }
            v43 = v41->fields.withMasterPhotoPosition;
            if ( !v43 )
              goto LABEL_75;
            if ( LODWORD(v43->max_length) < 2 )
              goto LABEL_76;
            v44 = v43->m_Items[0];
            v45 = v43->m_Items[1];
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            v47 = static_fields->zeroVector.fields.x;
            v48 = static_fields->zeroVector.fields.y;
            v49 = static_fields->zeroVector.fields.z;
            BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
            if ( !BodyTextureMaterial )
              goto LABEL_75;
            v77.fields.z = v49;
            v77.fields.x = v47 + (float)v44;
            v77.fields.y = v48 + (float)v45;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v77, 0);
          }
        }
      }
      if ( this->fields.isSoloPhoto )
      {
        v50 = this->fields.svtMultiPortraitEntity;
        if ( !v50 )
          goto LABEL_75;
        soloPhotoPosition = v50->fields.soloPhotoPosition;
        if ( soloPhotoPosition )
        {
          if ( SLODWORD(soloPhotoPosition->max_length) >= 2 )
          {
            if ( !byte_5931940 )
            {
              BodyTextureMaterial = (UnityEngine_Material_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              v50 = this->fields.svtMultiPortraitEntity;
              byte_5931940 = 1;
              if ( !v50 )
                goto LABEL_75;
            }
            v52 = v50->fields.soloPhotoPosition;
            if ( !v52 )
              goto LABEL_75;
            if ( LODWORD(v52->max_length) >= 2 )
            {
              v53 = v52->m_Items[0];
              v54 = v52->m_Items[1];
              v55 = UnityEngine_Vector3_TypeInfo->static_fields;
              v56 = v55->zeroVector.fields.x;
              v57 = v55->zeroVector.fields.y;
              v58 = v55->zeroVector.fields.z;
              BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
              if ( !BodyTextureMaterial )
                goto LABEL_75;
              v78.fields.z = v58;
              v78.fields.x = v56 + (float)v53;
              v78.fields.y = v57 + (float)v54;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BodyTextureMaterial, v78, 0);
              goto LABEL_55;
            }
LABEL_76:
            sub_21FFED4(BodyTextureMaterial);
          }
        }
      }
    }
LABEL_55:
    UIStandFigureR__SetConstantOffset(this, v6);
    BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
    if ( BodyTextureMaterial )
    {
      BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)BodyTextureMaterial,
                                                        0);
      if ( BodyTextureMaterial )
      {
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)BodyTextureMaterial, 0) )
          goto LABEL_61;
        BodyTextureMaterial = (UnityEngine_Material_o *)this->fields.bodyTexture;
        if ( BodyTextureMaterial )
        {
          BodyTextureMaterial = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)BodyTextureMaterial,
                                                            0);
          if ( BodyTextureMaterial )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BodyTextureMaterial, 1, 0);
LABEL_61:
            isRetryRender = this->fields.isRetryRender;
            this->fields.isBusyRender = 0;
            if ( isRetryRender )
            {
              this->fields.isRetryRender = 0;
              UIStandFigureR__RequestRenderAssetWithEffect(this, v6);
            }
            else
            {
              crossFadeTime = this->fields.crossFadeTime;
              if ( crossFadeTime > 0.0 )
                UIStandFigureR__StartCrossFade(this, crossFadeTime, renderTex, v59);
              callbackFunc = this->fields.callbackFunc;
              p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
              v68 = callbackFunc;
              if ( callbackFunc )
              {
                p_callbackFunc->klass = 0;
                sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)v59, v60, v61, v62, v63, v64);
                ((void (__fastcall *)(intptr_t, intptr_t))v68->fields.invoke_impl)(
                  v68->fields.method_code,
                  v68->fields.method);
              }
            }
            return;
          }
        }
      }
    }
    goto LABEL_75;
  }
}


void UIStandFigureR__EnqueueRenderInfo(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UIStandFigureR_WaitRenderInfo_o *renderInfo; // x8
  UnityEngine_RenderTexture_o *RenderText_k__BackingField; // x21
  int32_t ImageId_k__BackingField; // w22
  int32_t FaceType_k__BackingField; // w23
  int32_t FormId_k__BackingField; // w24
  int32_t MultiPortraitIndex_k__BackingField; // w25
  UnityEngine_Texture2D_array *TextureList_k__BackingField; // x26
  StandFigureRenderWaitStatus_EndHandler_o *v16; // x27

  if ( (byte_593A037 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndRenderAssetWithEffect__);
    byte_593A037 = 1;
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
    v16 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_21FFEBC(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    StandFigureRenderWaitStatus_EndHandler___ctor(
      v16,
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
      v16,
      0);
  }
  this->fields.renderInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo, 0, v2, v3, v4, v5, v6, v7);
  *(_WORD *)&this->fields.isCommitEnqueue = 0;
}


void UIStandFigureR__KillLoading(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_loadName; // x19

  this->fields.loadName = 0;
  p_loadName = &this->fields.loadName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadName, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x1
  System_String_array *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x20
  unsigned __int64 v7; // x25
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x23
  System_Predicate_object__o *v17; // x24
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  struct System_Collections_Generic_List_string__o *v28; // x8
  int32_t v29; // w2
  int v30; // w9
  struct System_Action_o *v31; // x8
  MissionNaviTransitionBoardItem_o *p_callbackFuncAfterLoadForms; // x19
  struct System_Action_o *callbackFuncAfterLoadForms; // t1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_593A02F & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&System_Predicate_AssetData__TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass85_0__OnEndPreloadForms_b__0__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass85_0_TypeInfo);
    byte_593A02F = 1;
  }
  loadNameList = (System_Collections_Generic_List_object__o *)this->fields.loadNameList;
  if ( !loadNameList )
    goto LABEL_25;
  v5 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                loadNameList,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
  loadNameList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_47473732(v5, 0);
  if ( !loadNameList )
    goto LABEL_25;
  v6 = loadNameList;
  if ( loadNameList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_21FFEBC(UIStandFigureR___c__DisplayClass85_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      if ( v7 >= (unsigned int)v6->fields._size )
        sub_21FFED4(loadNameList);
      if ( !v8 )
        break;
      v15 = *((_QWORD *)&v6->fields._syncRoot + v7);
      *(_QWORD *)(v8 + 16) = v15;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
      formAssetList = this->fields.formAssetList;
      v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_AssetData__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_UIStandFigureR___c__DisplayClass85_0__OnEndPreloadForms_b__0__,
        0);
      if ( !formAssetList )
        break;
      loadNameList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Exists(
                                                                    (System_Collections_Generic_List_object__o *)formAssetList,
                                                                    (System_Predicate_T__o *)v17,
                                                                    (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_AssetData__Exists__);
      if ( ((unsigned __int8)loadNameList & 1) == 0 )
      {
        loadNameList = (System_Collections_Generic_List_object__o *)this->fields.formAssetList;
        if ( !loadNameList )
          break;
        items = loadNameList->fields._items;
        method = *(const MethodInfo **)(v8 + 16);
        v25 = Method_System_Collections_Generic_List_AssetData__Add__;
        ++loadNameList->fields._version;
        if ( !items )
          break;
        size = loadNameList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            loadNameList,
            (Il2CppObject *)method,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          loadNameList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)method;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)method, v18, v19, v20, v21, v22, v23);
        }
      }
      if ( (__int64)++v7 >= v6->fields._size )
        goto LABEL_19;
    }
LABEL_25:
    sub_21FFECC(loadNameList, method);
  }
LABEL_19:
  v28 = this->fields.loadNameList;
  if ( !v28 )
    goto LABEL_25;
  v29 = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, v29, 0);
  callbackFuncAfterLoadForms = this->fields.callbackFuncAfterLoadForms;
  p_callbackFuncAfterLoadForms = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncAfterLoadForms;
  v31 = callbackFuncAfterLoadForms;
  if ( callbackFuncAfterLoadForms )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))v31->fields.invoke_impl)(v31->fields.method_code, v31->fields.method);
    p_callbackFuncAfterLoadForms->klass = 0;
    sub_21FFBF4(p_callbackFuncAfterLoadForms, 0, v34, v35, v36, v37, v38, v39);
  }
}


void UIStandFigureR__OnValidate(UIStandFigureR_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *bodyTexture; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *BodyTextureMaterial; // x20
  const MethodInfo *v8; // x1
  UnityEngine_Material_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  _BOOL4 useAlphaMask; // w20
  const MethodInfo *v13; // x1

  if ( (byte_593A01A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17003/*"_USE_ALPHA"*/);
    byte_593A01A = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
    {
      BodyTextureMaterial = (UnityEngine_Object_o *)UIStandFigureR__get_BodyTextureMaterial(this, v5);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(BodyTextureMaterial, 0, 0) )
      {
        gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v8);
        if ( gameObject )
        {
          UnityEngine_Material__SetFloat_83072080(
            gameObject,
            this->fields.alphaMaskStartId,
            this->fields.alphaMaskStart,
            0);
          gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v11);
          if ( gameObject )
          {
            UnityEngine_Material__SetFloat_83072080(
              gameObject,
              this->fields.alphaMaskLengthId,
              this->fields.alphaMaskLength,
              0);
            useAlphaMask = this->fields.useAlphaMask;
            gameObject = UIStandFigureR__get_BodyTextureMaterial(this, v13);
            if ( useAlphaMask )
            {
              if ( !gameObject )
                goto LABEL_25;
              UnityEngine_Material__EnableKeyword(gameObject, (System_String_o *)StringLiteral_17003/*"_USE_ALPHA"*/, 0);
            }
            else
            {
              if ( !gameObject )
                goto LABEL_25;
              UnityEngine_Material__DisableKeyword(gameObject, (System_String_o *)StringLiteral_17003/*"_USE_ALPHA"*/, 0);
            }
            gameObject = (UnityEngine_Material_o *)this->fields.bodyTexture;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (UnityEngine_Material_o *)this->fields.bodyTexture;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_Material_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_25:
        sub_21FFECC(gameObject, v10);
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
  __int64 v9; // x1
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v11; // x1
  UnityEngine_Animation_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *Clip; // x22
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_593A035 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A035 = 1;
  }
  if ( System_String__IsNullOrEmpty(animationName, 0) )
    goto LABEL_12;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(animationComponent, 0, 0) )
    goto LABEL_12;
  v12 = this->fields.animationComponent;
  if ( !v12 )
    sub_21FFECC(0, v11);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(v12, animationName, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
  {
LABEL_12:
    ActionExtensions__Call(endCallback, 0);
  }
  else
  {
    v16 = UIStandFigureR__PlayAnimationProc(this, animationName, playDelayTime, endCallback, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v16, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_593A036 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureR__PlayAnimationProc_d__97_TypeInfo);
    byte_593A036 = 1;
  }
  v9 = sub_21FFEBC(UIStandFigureR__PlayAnimationProc_d__97_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = animationName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)animationName, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 48) = playDelayTime;
  *(_QWORD *)(v9 + 64) = endCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)endCallback, v22, v23, v24, v25, v26, v27);
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
  __int64 v12; // x1
  int32_t imageId; // w23
  System_String_o *AssetNameWithForm; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *formAssetList; // x23
  System_Predicate_object__o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x23
  System_Predicate_object__o *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_array *v47; // x20
  System_Action_o *v48; // x21
  __int64 v49; // x1
  System_Action_o *v50; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_593A02D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Exists__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Exists__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&System_Predicate_AssetData__TypeInfo);
    sub_21FFC50(&System_Predicate_string__TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass82_0__PreloadFormAssets_b__0__);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass82_0__PreloadFormAssets_b__1__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass82_0_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_OnEndPreloadForms__);
    this = (UIStandFigureR_o *)sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A02D = 1;
  }
  loadNameList = v6->fields.loadNameList;
  memset(&v52, 0, sizeof(v52));
  if ( !loadNameList )
    goto LABEL_29;
  size = loadNameList->fields._size;
  v9 = loadNameList->fields._version + 1;
  loadNameList->fields._size = 0;
  loadNameList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadNameList->fields._items, 0, size, 0);
  v50 = callbackFunc;
  if ( !formIdList )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    formIdList,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v52 = v51;
  v51.fields._list = 0;
  *(_QWORD *)&v51.fields._index = &v52;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v52,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v52.fields._current;
    v11 = sub_21FFEBC(UIStandFigureR___c__DisplayClass82_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    imageId = v6->fields.imageId;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v12);
    AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, current, 0);
    if ( !v11 )
      sub_21FFECC(AssetNameWithForm, AssetNameWithForm);
    *(_QWORD *)(v11 + 16) = AssetNameWithForm;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v11 + 16),
      (int32_t)AssetNameWithForm,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    formAssetList = (System_Collections_Generic_List_object__o *)v6->fields.formAssetList;
    v22 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_AssetData__TypeInfo);
    System_Predicate_object____ctor(
      v22,
      (Il2CppObject *)v11,
      Method_UIStandFigureR___c__DisplayClass82_0__PreloadFormAssets_b__0__,
      0);
    if ( !formAssetList )
      sub_21FFECC(v23, v24);
    if ( !System_Collections_Generic_List_object___Exists(
            formAssetList,
            (System_Predicate_T__o *)v22,
            (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_AssetData__Exists__) )
    {
      v25 = (System_Collections_Generic_List_object__o *)v6->fields.loadNameList;
      v26 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v11,
        Method_UIStandFigureR___c__DisplayClass82_0__PreloadFormAssets_b__1__,
        0);
      if ( !v25 )
        sub_21FFECC(v27, v28);
      if ( !System_Collections_Generic_List_object___Exists(
              v25,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_string__Exists__) )
      {
        v36 = (System_Collections_Generic_List_object__o *)v6->fields.loadNameList;
        if ( !v36
          || (items = v36->fields._items,
              v29 = *(Il2CppObject **)(v11 + 16),
              v38 = Method_System_Collections_Generic_List_string__Add__,
              ++v36->fields._version,
              !items) )
        {
          sub_21FFECC(v36, v29);
        }
        v39 = v36->fields._size;
        if ( (unsigned int)v39 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            v29,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + v39;
          v36->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v29;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v29, v30, v31, v32, v33, v34, v35);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v52,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v6->fields.callbackFuncAfterLoadForms = v50;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFuncAfterLoadForms,
    (int32_t)v50,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this = (UIStandFigureR_o *)v6->fields.loadNameList;
  if ( !this )
LABEL_29:
    sub_21FFECC(this, formIdList);
  v47 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)this,
                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v6, Method_UIStandFigureR_OnEndPreloadForms__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v49);
  AssetManager__loadAssetStorage_47472372(v47, v48, 1, 0);
}


void UIStandFigureR__ReleaseBodyRenderTexture(UIStandFigureR_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10
  UnityEngine_RenderTexture_c *v9; // x9
  UnityEngine_RenderTexture_o *v10; // x8
  UnityEngine_RenderTexture_o *renderTexture; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_593A01E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_RenderTexture_TypeInfo);
    sub_21FFC50(&StandFigureCamera_TypeInfo);
    byte_593A01E = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  renderTexture = 0;
  if ( !bodyTexture )
    goto LABEL_20;
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 bodyTexture,
                                 bodyTexture->klass->vtable._26_get_mainTexture.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    bodyTexture = this->fields.bodyTexture;
    if ( !bodyTexture )
      goto LABEL_20;
    v6 = ((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._26_get_mainTexture.methodPtr)(
           bodyTexture,
           bodyTexture->klass->vtable._26_get_mainTexture.method);
    if ( !v6
      || (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v6 + 304LL) < (unsigned int)naturalAligment) )
    {
      renderTexture = 0;
      return;
    }
    v9 = *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v6 + 200LL) + 8 * naturalAligment - 8);
    v10 = v9 == UnityEngine_RenderTexture_TypeInfo ? (UnityEngine_RenderTexture_o *)v6 : 0LL;
    renderTexture = v10;
    if ( v9 == UnityEngine_RenderTexture_TypeInfo )
    {
      if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v7);
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
LABEL_20:
      sub_21FFECC(bodyTexture, method);
    }
  }
}


void UIStandFigureR__ReleaseCharacter(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  void *formAssetList; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v8; // x2
  UnityEngine_RenderTexture_o **p_renderTexture; // x20
  UnityEngine_Object_o *renderTexture; // x21
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_RenderTexture_o **p_currentBodyTexture; // x20
  UnityEngine_Object_o *currentBodyTexture; // x21
  __int64 v20; // x1
  long double v21; // q0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x0
  __int64 v29; // x0
  UnityEngine_Object_o *v30; // x20
  __int64 v31; // x1
  System_Object_array *v32; // x20
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Collections_Generic_List_AssetData__o *v38; // x8
  System_String_o *size; // x2
  int v40; // w9
  System_String_o *loadName; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  System_String_array *v49; // x20
  int32_t v50; // w2
  int v51; // w8

  if ( (byte_593A01B & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_593A01B = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    formAssetList = this->fields.bodyTexture;
    if ( !formAssetList )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)formAssetList,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    UIStandFigureR__set_BodyTextureMaterial(this, 0, v8);
  }
  p_renderTexture = &this->fields.renderTexture;
  renderTexture = (UnityEngine_Object_o *)this->fields.renderTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(renderTexture, 0, 0) )
  {
    StandFigureManager__Release(*p_renderTexture, 0);
    *p_renderTexture = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture, 0, v12, v13, v14, v15, v16, v17);
  }
  p_currentBodyTexture = &this->fields.currentBodyTexture;
  currentBodyTexture = (UnityEngine_Object_o *)this->fields.currentBodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(currentBodyTexture, 0, 0) )
  {
    StandFigureManager__Release(*p_currentBodyTexture, 0);
    *p_currentBodyTexture = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.currentBodyTexture, 0, v22, v23, v24, v25, v26, v27);
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
    v28 = sub_2237AF8(v21);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
    v29 = sub_2237AF8(v21);
  v30 = **(UnityEngine_Object_o ***)(v29 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Implicit(v30, 0) )
  {
    formAssetList = this->fields.formAssetList;
    if ( formAssetList )
    {
      v32 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)formAssetList,
              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_AssetData__ToArray__);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v31);
      AssetManager__releaseAsset_47465764((AssetData_array *)v32, 0);
      v38 = this->fields.formAssetList;
      if ( v38 )
      {
        size = (System_String_o *)(unsigned int)v38->fields._size;
        v40 = v38->fields._version + 1;
        v38->fields._size = 0;
        v38->fields._version = v40;
        if ( (int)size >= 1 )
          System_Array__Clear((System_Array_o *)v38->fields._items, 0, (int32_t)size, 0);
        this->fields.assetData = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, size, v33, v34, v35, v36, v37);
        loadName = this->fields.loadName;
        if ( loadName )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
          AssetManager__releaseAssetStorage(loadName, 0);
          this->fields.loadName = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadName, 0, v42, v43, v44, v45, v46, v47);
        }
        formAssetList = this->fields.loadNameList;
        if ( formAssetList )
        {
          if ( *((int *)formAssetList + 6) < 1 )
            goto LABEL_45;
          v49 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)formAssetList,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v48);
          AssetManager__releaseAssetStorage_47474708(v49, 0);
          formAssetList = this->fields.loadNameList;
          if ( formAssetList )
          {
LABEL_45:
            v50 = *((_DWORD *)formAssetList + 6);
            v51 = *((_DWORD *)formAssetList + 7) + 1;
            *((_DWORD *)formAssetList + 6) = 0;
            *((_DWORD *)formAssetList + 7) = v51;
            if ( v50 >= 1 )
              System_Array__Clear(*((System_Array_o **)formAssetList + 2), 0, v50, 0);
            return;
          }
        }
      }
    }
LABEL_48:
    sub_21FFECC(formAssetList, v4);
  }
}


void UIStandFigureR__RemoveCallback(UIStandFigureR_o *this, System_Action_o *removeCallback, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *callbackFunc; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8
  System_Action_c *v15; // x1

  if ( (byte_593A02E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593A02E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)removeCallback, 0);
  v14 = (int)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_callbackFunc->klass = (MissionNaviTransitionBoardItem_c *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_220024C(v7, v15, v8);
LABEL_7:
    p_callbackFunc->klass = 0;
  }
  sub_21FFBF4(p_callbackFunc, v14, v8, v9, v10, v11, v12, v13);
}


void UIStandFigureR__RequestRenderAsset(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_RenderTexture_o *renderTexture; // x20
  __int64 v10; // d0
  __int64 v11; // x1
  AssetData_o *assetData; // x21
  UnityEngine_Texture2D_array *TextureList; // x0
  __int64 v14; // x1
  UnityEngine_Texture2D_array *v15; // x21
  int32_t v16; // w0
  int32_t imageId; // w22
  int32_t faceType; // w23
  int32_t formId; // w24
  StandFigureRenderWaitStatus_EndHandler_o *v20; // x25

  if ( (byte_593A026 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndRenderAsset__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A026 = 1;
  }
  if ( this->fields.isBusyRender )
  {
    this->fields.isRetryRender = 1;
  }
  else
  {
    renderTexture = this->fields.renderTexture;
    v10 = *(_QWORD *)&this->fields.faceType;
    this->fields.isBusyRender = 1;
    *(_QWORD *)&this->fields.oldFaceType = v10;
    this->fields.renderTexture = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture, 0, v2, v3, v4, v5, v6, v7);
    assetData = this->fields.assetData;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v11);
    TextureList = UIStandFigureRender__GetTextureList(assetData, 0, 0);
    if ( !TextureList )
      goto LABEL_11;
    v15 = TextureList;
    if ( !LODWORD(TextureList->max_length) )
      sub_21FFED4(TextureList);
    TextureList = (UnityEngine_Texture2D_array *)TextureList->m_Items[0];
    if ( !TextureList )
LABEL_11:
      sub_21FFECC(TextureList, v14);
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_array *, const MethodInfo *))TextureList->obj.klass->vtable[6].methodPtr)(
            TextureList,
            TextureList->obj.klass->vtable[6].method);
    imageId = this->fields.imageId;
    this->fields.textureHeight = v16;
    faceType = this->fields.faceType;
    formId = this->fields.formId;
    v20 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_21FFEBC(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    StandFigureRenderWaitStatus_EndHandler___ctor(v20, (Il2CppObject *)this, Method_UIStandFigureR_EndRenderAsset__, 0);
    StandFigureManager__Render_47685628(renderTexture, imageId, faceType, formId, v15, v20, 0);
  }
}


void UIStandFigureR__RequestRenderAssetWithEffect(UIStandFigureR_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_RenderTexture_o *renderTexture; // x20
  __int64 v10; // d0
  __int64 v11; // x1
  AssetData_o *assetData; // x21
  UnityEngine_Texture2D_array *TextureList; // x0
  __int64 v14; // x1
  UnityEngine_Texture2D_array *v15; // x21
  int32_t v16; // w0
  int32_t faceType; // w23
  int32_t formId; // w24
  _BOOL4 isCommitEnqueue; // w8
  int32_t imageId; // w22
  int32_t MultiPortraitIndex_k__BackingField; // w25
  UIStandFigureR_WaitRenderInfo_o *v22; // x26
  const MethodInfo *v23; // x7
  struct UIStandFigureR_WaitRenderInfo_o **p_renderInfo; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  StandFigureRenderWaitStatus_EndHandler_o *v31; // x26

  if ( (byte_593A027 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndRenderAssetWithEffect__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    sub_21FFC50(&UIStandFigureR_WaitRenderInfo_TypeInfo);
    byte_593A027 = 1;
  }
  if ( this->fields.isBusyRender )
  {
    this->fields.isRetryRender = 1;
  }
  else
  {
    renderTexture = this->fields.renderTexture;
    v10 = *(_QWORD *)&this->fields.faceType;
    this->fields.isBusyRender = 1;
    *(_QWORD *)&this->fields.oldFaceType = v10;
    this->fields.renderTexture = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.renderTexture, 0, v2, v3, v4, v5, v6, v7);
    assetData = this->fields.assetData;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v11);
    TextureList = UIStandFigureRender__GetTextureList(assetData, 0, 0);
    if ( !TextureList )
      goto LABEL_13;
    v15 = TextureList;
    if ( !LODWORD(TextureList->max_length) )
      sub_21FFED4(TextureList);
    TextureList = (UnityEngine_Texture2D_array *)TextureList->m_Items[0];
    if ( !TextureList )
LABEL_13:
      sub_21FFECC(TextureList, v14);
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_array *, const MethodInfo *))TextureList->obj.klass->vtable[6].methodPtr)(
            TextureList,
            TextureList->obj.klass->vtable[6].method);
    faceType = this->fields.faceType;
    formId = this->fields.formId;
    isCommitEnqueue = this->fields.isCommitEnqueue;
    imageId = this->fields.imageId;
    MultiPortraitIndex_k__BackingField = this->fields._MultiPortraitIndex_k__BackingField;
    this->fields.textureHeight = v16;
    if ( isCommitEnqueue )
    {
      v22 = (UIStandFigureR_WaitRenderInfo_o *)sub_21FFEBC(UIStandFigureR_WaitRenderInfo_TypeInfo);
      UIStandFigureR_WaitRenderInfo___ctor(
        v22,
        renderTexture,
        imageId,
        faceType,
        formId,
        MultiPortraitIndex_k__BackingField,
        v15,
        v23);
      this->fields.renderInfo = v22;
      p_renderInfo = &this->fields.renderInfo;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_renderInfo, (int32_t)v22, v25, v26, v27, v28, v29, v30);
      *((_BYTE *)p_renderInfo + 17) = 1;
    }
    else
    {
      v31 = (StandFigureRenderWaitStatus_EndHandler_o *)sub_21FFEBC(StandFigureRenderWaitStatus_EndHandler_TypeInfo);
      StandFigureRenderWaitStatus_EndHandler___ctor(
        v31,
        (Il2CppObject *)this,
        Method_UIStandFigureR_EndRenderAssetWithEffect__,
        0);
      StandFigureManager__RenderWithEffect(
        renderTexture,
        imageId,
        faceType,
        formId,
        MultiPortraitIndex_k__BackingField,
        v15,
        v31,
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
    sub_21FFECC(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


void UIStandFigureR__SetAlpha(UIStandFigureR_o *this, float a, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0

  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UITexture_o *, const MethodInfo *, float))bodyTexture->klass->vtable._8_set_alpha.methodPtr)(
    bodyTexture,
    bodyTexture->klass->vtable._8_set_alpha.method,
    a);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593A01C & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    byte_593A01C = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureR__SetCharacter_50996852(this, svtId, ImageLimitCount, offsetKind, faceType, 0, v16, callbackFunc, v15);
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
        bool isSoloPhoto,
        const MethodInfo *method)
{
  bool v17; // w26
  bool v18; // w25
  UIStandFigureRender_c *v19; // x0
  struct System_String_o *AssetNameWithForm; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w8
  System_Action_c *v36; // x1
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  __int64 v39; // x1

  if ( (byte_593A020 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndLoadAsset__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A020 = 1;
  }
  v17 = isPhotoWithMaster;
  v18 = isSoloPhoto;
  if ( (byte_593A022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A022 = 1;
  }
  v19 = UIStandFigureRender_TypeInfo;
  this->fields.crossFadeTime = 0.0;
  this->fields.imageId = imageId;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&imageId);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, 0);
  this->fields.loadName = AssetNameWithForm;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
    (int32_t)AssetNameWithForm,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.isPhotoWithMaster = v17;
  this->fields.isSoloPhoto = v18;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    v28 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v35 = (int)v28;
    if ( v28 )
    {
      v36 = System_Action_TypeInfo;
      if ( (System_Action_c *)v28->klass == System_Action_TypeInfo )
      {
        *p_callbackFunc = (struct System_Action_o *)v28;
        if ( (System_Action_c *)v28->klass == v36 )
          goto LABEL_13;
      }
      sub_220024C(v28, v36, v29);
    }
    *p_callbackFunc = 0;
LABEL_13:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v35, v29, v30, v31, v32, v33, v34);
  }
  loadName = this->fields.loadName;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v38, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
  return AssetManager__loadAssetStorage(loadName, v38, 1, 0, 0);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  UIStandFigureRender_c *v33; // x0
  struct System_String_o *AssetNameWithForm; // x0
  struct System_String_o **p_loadName; // x26
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v43; // t1
  System_Delegate_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v51; // w8
  System_Action_c *v52; // x1
  System_String_o *v53; // x19
  AssetLoader_LoadEndDataHandler_o *v54; // x20
  __int64 v55; // x1

  if ( (byte_593A021 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass68_0__SetCharacterForImageIdWithEffect_g__OnLoadFinished_0__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass68_0_TypeInfo);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A021 = 1;
  }
  v17 = sub_21FFEBC(UIStandFigureR___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_21FFECC(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 24) = waitToStartRenderWhileAssetLoadBusy;
  this->fields.renderInfo = 0;
  this->fields.isQueuerable = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo, 0, v26, v27, v28, v29, v30, v31);
  if ( (byte_593A022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A022 = 1;
  }
  v33 = UIStandFigureRender_TypeInfo;
  this->fields.crossFadeTime = 0.0;
  this->fields.imageId = imageId;
  if ( !*(&v33->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v33, v32);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, 0);
  this->fields.loadName = AssetNameWithForm;
  p_loadName = &this->fields.loadName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
    (int32_t)AssetNameWithForm,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.formId = formId;
  this->fields.isPhotoWithMaster = isPhotoWithMaster;
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields.isSoloPhoto = 0;
  this->fields.isCommitEnqueue = isCommitEnqueue;
  this->fields._MultiPortraitIndex_k__BackingField = multiPortraitIndex;
  if ( callbackFunc )
  {
    v43 = (System_Delegate_o *)this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v44 = System_Delegate__Combine(v43, (System_Delegate_o *)callbackFunc, 0);
    v51 = (int)v44;
    if ( v44 )
    {
      v52 = System_Action_TypeInfo;
      if ( (System_Action_c *)v44->klass == System_Action_TypeInfo )
      {
        p_callbackFunc->klass = (MissionNaviTransitionBoardItem_c *)v44;
        if ( (System_Action_c *)v44->klass == v52 )
          goto LABEL_14;
      }
      sub_220024C(v44, v52, v45);
    }
    p_callbackFunc->klass = 0;
LABEL_14:
    sub_21FFBF4(p_callbackFunc, v51, v45, v46, v47, v48, v49, v50);
  }
  v53 = *p_loadName;
  v54 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v54,
    (Il2CppObject *)v17,
    Method_UIStandFigureR___c__DisplayClass68_0__SetCharacterForImageIdWithEffect_g__OnLoadFinished_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v55);
  return AssetManager__loadAssetStorage(v53, v54, 3, 0, 0);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t Id; // w0
  __int64 v28; // x1
  UIStandFigureRender_c *v29; // x8
  int32_t v30; // w25
  struct System_String_o *AssetNameWithForm; // x0
  struct System_String_o **p_loadName; // x25
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Action_o **p_callbackFunc; // x19
  System_Delegate_o *v40; // t1
  System_Delegate_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w8
  System_Action_c *v49; // x1
  System_String_o *v50; // x19
  AssetLoader_LoadEndDataHandler_o *v51; // x20
  __int64 v52; // x1

  if ( (byte_593A01F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass66_0__SetCharacterWithEffect_g__OnLoadFinished_0__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass66_0_TypeInfo);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A01F = 1;
  }
  v18 = sub_21FFEBC(UIStandFigureR___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    sub_21FFECC(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 16), (int32_t)this, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v18 + 24) = waitToStartRenderWhileAssetLoadBusy;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  v29 = UIStandFigureRender_TypeInfo;
  v30 = Id;
  this->fields.imageId = Id;
  if ( !*(&v29->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v29, v28);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(v30, formId, 0);
  this->fields.loadName = AssetNameWithForm;
  p_loadName = &this->fields.loadName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
    (int32_t)AssetNameWithForm,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( (byte_593A022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A022 = 1;
  }
  v40 = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc + 10) = 0;
  *((_DWORD *)p_callbackFunc - 13) = offsetKind;
  *((_DWORD *)p_callbackFunc - 12) = faceType;
  *((_DWORD *)p_callbackFunc - 11) = formId;
  *((_WORD *)p_callbackFunc - 28) = 0;
  v41 = System_Delegate__Combine(v40, (System_Delegate_o *)callbackFunc, 0);
  v48 = (int)v41;
  if ( !v41 )
    goto LABEL_12;
  v49 = System_Action_TypeInfo;
  if ( (System_Action_c *)v41->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v41, (System_Action_c *)v41->klass != v49) )
  {
    sub_220024C(v41, v49, v42);
LABEL_12:
    *p_callbackFunc = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_callbackFunc, v48, v42, v43, v44, v45, v46, v47);
  v50 = *p_loadName;
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v51,
    (Il2CppObject *)v18,
    Method_UIStandFigureR___c__DisplayClass66_0__SetCharacterWithEffect_g__OnLoadFinished_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v52);
  AssetManager__loadAssetStorage(v50, v51, 3, 0, 0);
}


void UIStandFigureR__SetCharacter_50996840(
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

  UIStandFigureR__SetCharacter_50996852(this, svtId, imageLimitCount, offsetKind, faceType, 0, v8, callbackFunc, v7);
}


void UIStandFigureR__SetCharacter_50996852(
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
  __int64 v17; // x1
  UIStandFigureRender_c *v18; // x8
  int32_t v19; // w24
  struct System_String_o *AssetNameWithForm; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Delegate_o *v27; // x0
  struct System_Action_o **p_callbackFunc; // x24
  System_Delegate_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w8
  System_Action_c *v37; // x1
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  __int64 v40; // x1

  if ( (byte_593A01D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndLoadAsset__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A01D = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  v18 = UIStandFigureRender_TypeInfo;
  v19 = Id;
  this->fields.imageId = Id;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v17);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(v19, formId, 0);
  this->fields.loadName = AssetNameWithForm;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
    (int32_t)AssetNameWithForm,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (byte_593A022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A022 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  v27 = (System_Delegate_o *)this->fields.callbackFunc;
  this->fields.crossFadeTime = 0.0;
  this->fields.offsetKind = offsetKind;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  *(_WORD *)&this->fields.isPhotoWithMaster = 0;
  v29 = System_Delegate__Combine(v27, (System_Delegate_o *)callbackFunc, 0);
  v36 = (int)v29;
  if ( !v29 )
    goto LABEL_11;
  v37 = System_Action_TypeInfo;
  if ( (System_Action_c *)v29->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v29, (System_Action_c *)v29->klass != v37) )
  {
    sub_220024C(v29, v37, v30);
LABEL_11:
    *p_callbackFunc = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v36, v30, v31, v32, v33, v34, v35);
  loadName = this->fields.loadName;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v39, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v40);
  AssetManager__loadAssetStorage(loadName, v39, 1, 0, 0);
}


void UIStandFigureR__SetConstantOffset(UIStandFigureR_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *parent; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  System_Object_array *UIStandFigureROffsetEffectNames; // x20
  System_Func_object__bool__o *v12; // x21
  __int64 v13; // x21
  int v14; // w8
  unsigned int v15; // w22
  void *v16; // x20
  System_String_o *v17; // x0
  int v18; // w8
  int32_t v19; // s11
  int v20; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  int32_t v24; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A032 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_string____91485272);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR__SetConstantOffset_b__91_0__);
    byte_593A032 = 1;
  }
  *(_QWORD *)result = 0;
  v24 = 0;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista(0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_40;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(parent, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_40;
      transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !transform )
        goto LABEL_40;
      v8 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
      {
        v10 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
          v10 = BalanceConfig_TypeInfo;
        }
        UIStandFigureROffsetEffectNames = (System_Object_array *)v10->static_fields->UIStandFigureROffsetEffectNames;
        v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)this,
          Method_UIStandFigureR__SetConstantOffset_b__91_0__,
          0);
        if ( BasicHelper__Any_object__58575580(
               UIStandFigureROffsetEffectNames,
               (System_Func_T__bool__o *)v12,
               (const MethodInfo_37DCADC *)Method_BasicHelper_Any_string____91485272) )
        {
          transform = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
            transform = BalanceConfig_TypeInfo;
          }
          v13 = *(_QWORD *)(*((_QWORD *)transform + 23) + 944LL);
          if ( !v13 )
            goto LABEL_40;
          v14 = *(_DWORD *)(v13 + 24);
          if ( v14 >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= v14 )
LABEL_41:
                sub_21FFED4(transform);
              transform = *(void **)(v13 + 8LL * (int)v15 + 32);
              if ( !transform )
                goto LABEL_40;
              transform = System_String__Split((System_String_o *)transform, 0x3Au, 0, 0);
              if ( !transform )
                goto LABEL_40;
              v16 = transform;
              if ( *((int *)transform + 6) >= 3 )
              {
                v17 = (System_String_o *)*((_QWORD *)transform + 4);
                result[1] = 0;
                transform = (void *)System_Int32__TryParse(v17, &result[1], 0);
                if ( ((unsigned __int8)transform & 1) != 0 && result[1] == this->fields.imageId )
                {
                  v18 = *((_DWORD *)v16 + 6);
                  v24 = 0;
                  result[0] = 0;
                  if ( (v18 & 0xFFFFFFFE) == 0 )
                    goto LABEL_41;
                  transform = (void *)System_Int32__TryParse(*((System_String_o **)v16 + 5), result, 0);
                  if ( ((unsigned __int8)transform & 1) != 0 )
                    break;
                  if ( *((_DWORD *)v16 + 6) <= 2u )
                    goto LABEL_41;
                  transform = (void *)System_Int32__TryParse(*((System_String_o **)v16 + 6), &v24, 0);
                  if ( ((unsigned __int8)transform & 1) != 0 )
                    break;
                }
              }
              v14 = *(_DWORD *)(v13 + 24);
              if ( (int)++v15 >= v14 )
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
                  v19 = v24;
                  v20 = result[0];
                  x = localPosition.fields.x;
                  y = localPosition.fields.y;
                  z = localPosition.fields.z;
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
                  if ( transform )
                  {
                    v27.fields.z = z;
                    v27.fields.x = x + (float)v20;
                    v27.fields.y = y + (float)v19;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0);
                    return;
                  }
                }
              }
            }
LABEL_40:
            sub_21FFECC(transform, v4);
          }
        }
      }
    }
  }
}


void UIStandFigureR__SetCrossFadeTime(UIStandFigureR_o *this, float fadeTime, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20

  if ( (byte_593A022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A022 = 1;
  }
  if ( fadeTime <= 0.0
    || this->fields.oldFaceType == this->fields.faceType && this->fields.oldFormId == this->fields.formId )
  {
    goto LABEL_9;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
LABEL_9:
    fadeTime = 0.0;
  this->fields.crossFadeTime = fadeTime;
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__SetDepth(UIStandFigureR_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_21FFECC(0, *(_QWORD *)&d);
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


void UIStandFigureR__SetFace_51005584(
        UIStandFigureR_o *this,
        int32_t faceType,
        System_Action_o *callbackFunc,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w8
  System_Action_c *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_593A02A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593A02A = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v17 = (int)v10;
  if ( !v10 )
    goto LABEL_7;
  v18 = System_Action_TypeInfo;
  if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v18) )
  {
    sub_220024C(v10, v18, v11);
LABEL_7:
    *p_callbackFunc = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v17, v11, v12, v13, v14, v15, v16);
  UIStandFigureR__SetFace(this, faceType, fadeTime, v19);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureR__SetFace_51005772(
        UIStandFigureR_o *this,
        int32_t faceType,
        int32_t formId,
        System_Action_o *callbackFunc,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x23
  System_Delegate_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w8
  System_Action_c *v20; // x1
  int32_t imageId; // w22
  struct System_String_o *AssetNameWithForm; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_AssetData__o *formAssetList; // x20
  System_Predicate_object__o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x2
  System_String_o *loadName; // x20
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  __int64 v38; // x1

  if ( (byte_593A02B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData__Find__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&System_Predicate_AssetData__TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR_EndLoadFormAsset__);
    sub_21FFC50(&Method_UIStandFigureR__SetFace_b__80_0__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A02B = 1;
  }
  if ( this->fields.formId == formId )
  {
    UIStandFigureR__SetFace_51005584(this, faceType, callbackFunc, fadeTime, (const MethodInfo *)callbackFunc);
    return;
  }
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    v12 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v19 = (int)v12;
    if ( v12 )
    {
      v20 = System_Action_TypeInfo;
      if ( (System_Action_c *)v12->klass == System_Action_TypeInfo )
      {
        *p_callbackFunc = (struct System_Action_o *)v12;
        if ( (System_Action_c *)v12->klass == v20 )
          goto LABEL_11;
      }
      sub_220024C(v12, v20, v13);
    }
    *p_callbackFunc = 0;
LABEL_11:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v19, v13, v14, v15, v16, v17, v18);
  }
  imageId = this->fields.imageId;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
  AssetNameWithForm = UIStandFigureRender__GetAssetNameWithForm(imageId, formId, 0);
  this->fields.loadName = AssetNameWithForm;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
    (int32_t)AssetNameWithForm,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UIStandFigureR__SetCrossFadeTime(this, fadeTime, v29);
  formAssetList = this->fields.formAssetList;
  v31 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_AssetData__TypeInfo);
  System_Predicate_object____ctor(v31, (Il2CppObject *)this, Method_UIStandFigureR__SetFace_b__80_0__, 0);
  if ( !formAssetList )
    sub_21FFECC(v32, v33);
  v34 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)formAssetList,
          (System_Predicate_T__o *)v31,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_AssetData__Find__);
  if ( v34 )
  {
    UIStandFigureR__EndLoadFormAsset(this, (AssetData_o *)v34, v35);
  }
  else
  {
    loadName = this->fields.loadName;
    v37 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v37, (Il2CppObject *)this, Method_UIStandFigureR_EndLoadFormAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
    AssetManager__loadAssetStorage(loadName, v37, 1, 0, 0);
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
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIStandFigureR__SetLayer_51008936(this, transform, layer, v8);
  }
}


void UIStandFigureR__SetLayer_51008936(
        UIStandFigureR_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIStandFigureR_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_593A031 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (UIStandFigureR_o *)sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_593A031 = 1;
  }
  if ( !tf || (this = (UIStandFigureR_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
    sub_21FFECC(this, tf);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_34;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_18:
      v16 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_220024C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_21FFECC(Enumerator, v8);
      }
    }
    UIStandFigureR__SetLayer_51008936(v6, v17, layer, v19);
  }
  v21 = sub_21FFDA4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_2237E2C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


void UIStandFigureR__SetMaterial(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x20
  UnityEngine_Material_o *v4; // x21
  const MethodInfo *v5; // x2
  int32_t v6; // w0
  System_String_o *v7; // x8
  int32_t v8; // w0
  System_String_o *v9; // x8
  int32_t v10; // w0
  System_String_o *v11; // x8
  int32_t v12; // w0
  System_String_o *v13; // x8

  if ( (byte_593A030 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&StringLiteral_16880/*"_MainTex2"*/);
    sub_21FFC50(&StringLiteral_5119/*"Custom/Sprites-StandFigureRender"*/);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_16729/*"_AlphaMaskLength"*/);
    sub_21FFC50(&StringLiteral_16742/*"_Blend"*/);
    sub_21FFC50(&StringLiteral_16730/*"_AlphaMaskStart"*/);
    byte_593A030 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5119/*"Custom/Sprites-StandFigureRender"*/, 0);
  v4 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v4, v3, 0);
  UIStandFigureR__set_BodyTextureMaterial(this, v4, v5);
  v6 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16742/*"_Blend"*/, 0);
  v7 = (System_String_o *)StringLiteral_16879/*"_MainTex"*/;
  this->fields.blendId = v6;
  v8 = UnityEngine_Shader__PropertyToID(v7, 0);
  v9 = (System_String_o *)StringLiteral_16880/*"_MainTex2"*/;
  this->fields.mainTexId = v8;
  v10 = UnityEngine_Shader__PropertyToID(v9, 0);
  v11 = (System_String_o *)StringLiteral_16730/*"_AlphaMaskStart"*/;
  this->fields.mainTex2Id = v10;
  v12 = UnityEngine_Shader__PropertyToID(v11, 0);
  v13 = (System_String_o *)StringLiteral_16729/*"_AlphaMaskLength"*/;
  this->fields.alphaMaskStartId = v12;
  this->fields.alphaMaskLengthId = UnityEngine_Shader__PropertyToID(v13, 0);
}


void UIStandFigureR__SetSvtMultiPortraitEntity(
        UIStandFigureR_o *this,
        SvtMultiPortraitEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.svtMultiPortraitEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtMultiPortraitEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIStandFigureR__StartCrossFade(
        UIStandFigureR_o *this,
        float fadeTime,
        UnityEngine_RenderTexture_o *fadeInRenderTex,
        const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v5 = UIStandFigureR__ChangeCrossFade(this, fadeTime, fadeInRenderTex, method);
  this->fields.fadeCoroutine = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fadeCoroutine, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, this->fields.fadeCoroutine, 0);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593A025 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureR__WaitWhileLoading_d__72_TypeInfo);
    byte_593A025 = 1;
  }
  v3 = sub_21FFEBC(UIStandFigureR__WaitWhileLoading_d__72_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)finishCallback, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool UIStandFigureR___SetConstantOffset_b__91_0(
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
    sub_21FFECC(transform, v5);
  }
  return System_String__Contains((System_String_o *)transform, offsetEffectName, 0);
}


bool UIStandFigureR___SetFace_b__80_0(UIStandFigureR_o *this, AssetData_o *a, const MethodInfo *method)
{
  System_String_o *name; // x8

  if ( !a || (name = a->fields.name) == 0 )
    sub_21FFECC(this, a);
  return System_String__Equals_75473208(name, this->fields.loadName, 0);
}


UnityEngine_Material_o *UIStandFigureR__get_BodyTextureMaterial(UIStandFigureR_o *this, const MethodInfo *method)
{
  UnityEngine_Material_o **p_bodyTextureMaterial; // x19
  UnityEngine_Object_o *bodyTextureMaterial; // x21
  __int64 v5; // x1
  struct UITexture_o *bodyTexture; // x0
  __int64 v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593A018 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A018 = 1;
  }
  p_bodyTextureMaterial = &this->fields.bodyTextureMaterial;
  bodyTextureMaterial = (UnityEngine_Object_o *)this->fields.bodyTextureMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(bodyTextureMaterial, 0, 0) )
  {
    bodyTexture = this->fields.bodyTexture;
    if ( !bodyTexture )
      sub_21FFECC(0, v5);
    v7 = ((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))bodyTexture->klass->vtable._24_get_material.methodPtr)(
           bodyTexture,
           bodyTexture->klass->vtable._24_get_material.method);
    *p_bodyTextureMaterial = (UnityEngine_Material_o *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bodyTextureMaterial, v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *v14; // x22
  __int64 v15; // x1
  struct UITexture_o *bodyTexture; // x0

  if ( (byte_593A019 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A019 = 1;
  }
  p_bodyTextureMaterial = &this->fields.bodyTextureMaterial;
  bodyTextureMaterial = (UnityEngine_Object_o *)this->fields.bodyTextureMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(bodyTextureMaterial, 0, 0) )
  {
    v14 = (UnityEngine_Object_o *)*p_bodyTextureMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83246496(v14, 0);
  }
  this->fields.bodyTextureMaterial = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bodyTextureMaterial,
    (int32_t)value,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_21FFECC(0, v15);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields._RenderText_k__BackingField = renderText;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->fields, (int32_t)renderText, v15, v16, v17, v18, v19, v20);
  v14->fields._TextureList_k__BackingField = textureList;
  v14 = (UIStandFigureR_WaitRenderInfo_o *)((char *)v14 + 40);
  v14[-1].fields._FormId_k__BackingField = imageId;
  v14[-1].fields._MultiPortraitIndex_k__BackingField = faceType;
  LODWORD(v14[-1].fields._TextureList_k__BackingField) = formId;
  HIDWORD(v14[-1].fields._TextureList_k__BackingField) = multiPortraitIndex;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v14, (int32_t)textureList, v21, v22, v23, v24, v25, v26);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RenderText_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIStandFigureR_WaitRenderInfo__set_TextureList(
        UIStandFigureR_WaitRenderInfo_o *this,
        UnityEngine_Texture2D_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TextureList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TextureList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIStandFigureR__ChangeCrossFade_d__93___ctor(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__ChangeCrossFade_d__93__MoveNext(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        const MethodInfo *method)
{
  UIStandFigureR__ChangeCrossFade_d__93_o *v2; // x19
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
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  bool result; // w0

  v2 = this;
  if ( (byte_593A039 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (UIStandFigureR__ChangeCrossFade_d__93_o *)sub_21FFC50(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    byte_593A039 = 1;
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
      this = (UIStandFigureR__ChangeCrossFade_d__93_o *)UIStandFigureR__get_BodyTextureMaterial(_4__this, method);
      if ( this )
      {
        v9 = v7 / time;
        UnityEngine_Material__SetFloat_83072080((UnityEngine_Material_o *)this, _4__this->fields.blendId, v9, 0);
        bodyTexture = _4__this->fields.bodyTexture;
        if ( bodyTexture )
        {
          drawCall = (UnityEngine_Object_o *)bodyTexture->fields.drawCall;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          this = (UIStandFigureR__ChangeCrossFade_d__93_o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_23;
          v12 = _4__this->fields.bodyTexture;
          if ( v12 )
          {
            v13 = v12->fields.drawCall;
            if ( v13 )
            {
              mDynamicMat = (UnityEngine_Object_o *)v13->fields.mDynamicMat;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
              this = (UIStandFigureR__ChangeCrossFade_d__93_o *)UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_23;
              v15 = _4__this->fields.bodyTexture;
              if ( v15 )
              {
                v16 = v15->fields.drawCall;
                if ( v16 )
                {
                  this = (UIStandFigureR__ChangeCrossFade_d__93_o *)v16->fields.mDynamicMat;
                  if ( this )
                  {
                    UnityEngine_Material__SetFloat_83072080(
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
    sub_21FFECC(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  this = (UIStandFigureR__ChangeCrossFade_d__93_o *)_4__this->fields.bodyTexture;
  v2->fields._total_5__2 = 0.0;
  _4__this->fields.isCrossFade = 1;
  if ( !this )
    goto LABEL_27;
  UIWidget__RemoveFromPanel((UIWidget_o *)this, 0);
LABEL_23:
  if ( v2->fields._total_5__2 < v2->fields.time )
  {
    v17 = (UnityEngine_WaitForFixedUpdate_o *)sub_21FFEBC(UnityEngine_WaitForFixedUpdate_TypeInfo);
    UnityEngine_WaitForFixedUpdate___ctor(v17, 0);
    v2->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  UIStandFigureR__EndCrossFade(_4__this, v2->fields.fadeInRenderTex, v5);
  return 0;
}


Il2CppObject *UIStandFigureR__ChangeCrossFade_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__ChangeCrossFade_d__93__System_Collections_IEnumerator_Reset(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_UIStandFigureR__ChangeCrossFade_d__93_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *UIStandFigureR__ChangeCrossFade_d__93__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__ChangeCrossFade_d__93__System_IDisposable_Dispose(
        UIStandFigureR__ChangeCrossFade_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR__PlayAnimationProc_d__97___ctor(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__PlayAnimationProc_d__97__MoveNext(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        const MethodInfo *method)
{
  UIStandFigureR__PlayAnimationProc_d__97_o *v2; // x19
  int32_t _1__state; // w8
  struct UIStandFigureR_o *_4__this; // x22
  Il2CppObject *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UIStandFigureR_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *animationName; // x1
  float playDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  bool result; // w0
  struct UIStandFigureR___c__DisplayClass97_0_o *_8__1; // x8
  Il2CppObject *v37; // x20
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitUntil_o *v39; // x20
  MissionNaviTransitionBoardItem_o *v40; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Action_o *endCallback; // x0

  v2 = this;
  if ( (byte_593A03A & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_UIStandFigureR___c__DisplayClass97_0__PlayAnimationProc_b__0__);
    sub_21FFC50(&UIStandFigureR___c__DisplayClass97_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (UIStandFigureR__PlayAnimationProc_d__97_o *)sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593A03A = 1;
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
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_21FFEBC(UIStandFigureR___c__DisplayClass97_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct UIStandFigureR___c__DisplayClass97_0_o *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this = (UIStandFigureR__PlayAnimationProc_d__97_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v18 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v18;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v18, v12, v13, v14, v15, v16, v17);
    this = (UIStandFigureR__PlayAnimationProc_d__97_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animationName = (Il2CppObject *)v2->fields.animationName;
    this->fields.__2__current = animationName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)animationName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    playDelayTime = v2->fields.playDelayTime;
    if ( playDelayTime > 0.0 )
    {
      v27 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v27, playDelayTime, 0);
      v2->fields.__2__current = (Il2CppObject *)v27;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
LABEL_11:
    if ( _4__this )
    {
      this = (UIStandFigureR__PlayAnimationProc_d__97_o *)_4__this->fields.animationComponent;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (UIStandFigureR__PlayAnimationProc_d__97_o *)_4__this->fields.animationComponent;
          if ( this )
          {
            UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)this, _8__1->fields.animationName, 0);
            if ( v2->fields.endCallback )
            {
              v37 = (Il2CppObject *)v2->fields.__8__1;
              v38 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v38,
                v37,
                Method_UIStandFigureR___c__DisplayClass97_0__PlayAnimationProc_b__0__,
                0);
              v39 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v39, v38, 0);
              v2->fields.__2__current = (Il2CppObject *)v39;
              v40 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_21FFBF4(v40, (int32_t)v39, v41, v42, v43, v44, v45, v46);
              result = 1;
              v40[-1].fields._BoardType_k__BackingField = 2;
              return result;
            }
            endCallback = 0;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_21:
    sub_21FFECC(this, method);
  }
  return 0;
}


Il2CppObject *UIStandFigureR__PlayAnimationProc_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__PlayAnimationProc_d__97__System_Collections_IEnumerator_Reset(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_UIStandFigureR__PlayAnimationProc_d__97_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *UIStandFigureR__PlayAnimationProc_d__97__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__PlayAnimationProc_d__97__System_IDisposable_Dispose(
        UIStandFigureR__PlayAnimationProc_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR__WaitWhileLoading_d__72___ctor(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIStandFigureR__WaitWhileLoading_d__72__MoveNext(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Func_bool__o *v12; // x20
  UnityEngine_WaitWhile_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *finishCallback; // x8

  if ( (byte_593A03B & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetManager_LoadIsBusy__);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_593A03B = 1;
  }
  _1__state = this->fields.__1__state;
  switch ( _1__state )
  {
    case 2:
      finishCallback = this->fields.finishCallback;
      this->fields.__1__state = -1;
      if ( finishCallback )
        ((void (__fastcall *)(intptr_t, intptr_t))finishCallback->fields.invoke_impl)(
          finishCallback->fields.method_code,
          finishCallback->fields.method);
      break;
    case 1:
      this->fields.__1__state = -1;
      v12 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v12, 0, Method_AssetManager_LoadIsBusy__, 0);
      v13 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v13, v12, 0);
      this->fields.__2__current = (Il2CppObject *)v13;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      result = 1;
      this->fields.__1__state = 2;
      return result;
    case 0:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
  }
  return 0;
}


Il2CppObject *UIStandFigureR__WaitWhileLoading_d__72__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIStandFigureR__WaitWhileLoading_d__72__System_Collections_IEnumerator_Reset(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_UIStandFigureR__WaitWhileLoading_d__72_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *UIStandFigureR__WaitWhileLoading_d__72__System_Collections_IEnumerator_get_Current(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIStandFigureR__WaitWhileLoading_d__72__System_IDisposable_Dispose(
        UIStandFigureR__WaitWhileLoading_d__72_o *this,
        const MethodInfo *method)
{
  ;
}


void UIStandFigureR___c__DisplayClass66_0___ctor(
        UIStandFigureR___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIStandFigureR___c__DisplayClass66_0___SetCharacterWithEffect_g__OnLoadFinished_0(
        UIStandFigureR___c__DisplayClass66_0_o *this,
        AssetData_o *inAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_21FFECC(this, inAssetData);
  UIStandFigureR__EndLoadAssetWithEffect(
    this->fields.__4__this,
    inAssetData,
    this->fields.waitToStartRenderWhileAssetLoadBusy,
    v3);
}


void UIStandFigureR___c__DisplayClass68_0___ctor(
        UIStandFigureR___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIStandFigureR___c__DisplayClass68_0___SetCharacterForImageIdWithEffect_g__OnLoadFinished_0(
        UIStandFigureR___c__DisplayClass68_0_o *this,
        AssetData_o *inAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_21FFECC(this, inAssetData);
  UIStandFigureR__EndLoadAssetWithEffect(
    this->fields.__4__this,
    inAssetData,
    this->fields.waitToStartRenderWhileAssetLoadBusy,
    v3);
}


void UIStandFigureR___c__DisplayClass81_0___ctor(
        UIStandFigureR___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass81_0___EndLoadFormAsset_b__0(
        UIStandFigureR___c__DisplayClass81_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  struct AssetData_o *assetData; // x8

  if ( !a
    || (assetData = this->fields.assetData) == 0
    || (this = (UIStandFigureR___c__DisplayClass81_0_o *)a->fields.name) == 0 )
  {
    sub_21FFECC(this, a);
  }
  return System_String__Equals_75473208((System_String_o *)this, assetData->fields.name, 0);
}


void UIStandFigureR___c__DisplayClass82_0___ctor(
        UIStandFigureR___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass82_0___PreloadFormAssets_b__0(
        UIStandFigureR___c__DisplayClass82_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  System_String_o *name; // x8

  if ( !a || (name = a->fields.name) == 0 )
    sub_21FFECC(this, a);
  return System_String__Equals_75473208(name, this->fields.assetPath, 0);
}


bool UIStandFigureR___c__DisplayClass82_0___PreloadFormAssets_b__1(
        UIStandFigureR___c__DisplayClass82_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return System_String__Equals_75473208(a, this->fields.assetPath, 0);
}


void UIStandFigureR___c__DisplayClass85_0___ctor(
        UIStandFigureR___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass85_0___OnEndPreloadForms_b__0(
        UIStandFigureR___c__DisplayClass85_0_o *this,
        AssetData_o *a,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  if ( !a || (asset = this->fields.asset) == 0 || (this = (UIStandFigureR___c__DisplayClass85_0_o *)a->fields.name) == 0 )
    sub_21FFECC(this, a);
  return System_String__Equals_75473208((System_String_o *)this, asset->fields.name, 0);
}


void UIStandFigureR___c__DisplayClass97_0___ctor(
        UIStandFigureR___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UIStandFigureR___c__DisplayClass97_0___PlayAnimationProc_b__0(
        UIStandFigureR___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *_4__this; // x8
  UIStandFigureR___c__DisplayClass97_0_o *v3; // x19
  struct UIStandFigureR_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (UIStandFigureR___c__DisplayClass97_0_o *)_4__this->fields.animationComponent;
  if ( !this )
    goto LABEL_10;
  this = (UIStandFigureR___c__DisplayClass97_0_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)this,
                                                     v3->fields.animationName,
                                                     0);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (UIStandFigureR___c__DisplayClass97_0_o *)v4->fields.animationComponent) == 0 )
LABEL_10:
    sub_21FFECC(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0);
}