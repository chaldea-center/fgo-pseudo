void AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetPath = assetPath;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetPath,
    (int32_t)assetPath,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.loadWrapper = loadWrapper;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadWrapper,
    (int32_t)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, 0, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v25, v26, v27, v28, v29, v30);
}


UIAtlas_array *AtlasManagerUnit__CreateUIAtlasListFromAssetData(
        AtlasManagerUnit_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0
  System_Object_array *v5; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  int max_length; // w8
  __int64 v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5937776 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObjectList_GameObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    this = (AtlasManagerUnit_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937776 = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_379F258 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0;
  v5 = ObjectList_object;
  if ( !ObjectList_object->max_length )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_21FFED4(this);
      this = (AtlasManagerUnit_o *)v5->m_Items[v8];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v21[4] = (Il2CppClass *)Component_object;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v21 + 4),
            (int32_t)Component_object,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
      }
      max_length = v5->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_21FFECC(this, assetData);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v6,
                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
}


void AtlasManagerUnit__Load(
        AtlasManagerUnit_o *this,
        System_Action_o *finishCallback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x0
  struct System_Action_o **p_LoadFinishCallback; // x22
  System_Delegate_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_c *v16; // x1
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x4
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v24; // x2

  if ( (byte_5937773 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_AtlasManagerUnit_LoadEnd__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5937773 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData && !AssetData__get_IsEmpty(assetData, 0) )
    goto LABEL_9;
  p_LoadFinishCallback = &this->fields.LoadFinishCallback;
  v9 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.LoadFinishCallback,
         (System_Delegate_o *)finishCallback,
         0);
  if ( v9 )
  {
    v16 = System_Action_TypeInfo;
    if ( (System_Action_c *)v9->klass != System_Action_TypeInfo
      || (*p_LoadFinishCallback = (struct System_Action_o *)v9, (System_Action_c *)v9->klass != v16) )
    {
      sub_220024C(v9, v16, v10, v11);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0;
  }
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.LoadFinishCallback,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.IsLoading )
  {
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    this->fields.IsLoading = 1;
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v19, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0);
    if ( loadWrapper )
    {
      assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
      if ( !assetManagerWrapper )
        sub_21FFECC(0, v20);
      if ( AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v19, loadParallelMax, v22) )
        return;
    }
    else
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20, v21);
      if ( AssetManager__loadAssetStorage(assetPath, v19, loadParallelMax, 0, 0) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0, v24);
  }
}


void AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AtlasManagerUnit_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p_LoadFinishCallback; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    this->fields.assetData = assetData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v10, assetData, v11);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.atlasList,
      (int32_t)UIAtlasListFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.LoadFinishCallback;
  v20 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0;
    sub_21FFBF4(p_LoadFinishCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct AssetStorageLoadWrapper_o *loadWrapper; // x8
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5937774 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937774 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_21FFECC(0, method);
    AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, this->fields.assetPath, v2);
  }
  else if ( this->fields.IsLoading )
  {
    assetPath = this->fields.assetPath;
    this->fields.IsLoading = 0;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAssetStorage(assetPath, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAsset_47465556(assetData, 0);
    }
  }
  this->fields.atlasList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v13, v14, v15, v16, v17, v18);
}


bool AtlasManagerUnit__SetUI(
        AtlasManagerUnit_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct UIAtlas_array *atlasList; // x22
  int max_length; // w8
  __int64 v11; // x23
  UIAtlas_o *v12; // x21
  bool v13; // w21

  v6 = spriteName;
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 || (atlasList = this->fields.atlasList) == 0 )
  {
    if ( sprite )
    {
      v6 = 0;
LABEL_13:
      v13 = 1;
      goto LABEL_14;
    }
LABEL_17:
    sub_21FFECC(IsNullOrEmpty, v8);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_21FFED4(IsNullOrEmpty);
      v12 = atlasList->m_Items[v11];
      if ( !v12 )
        goto LABEL_17;
      IsNullOrEmpty = UIAtlas__GetSprite(atlasList->m_Items[v11], v6, 0);
      if ( IsNullOrEmpty )
        break;
      max_length = atlasList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_9;
    }
    if ( sprite )
    {
      UISprite__set_atlas(sprite, v12, 0);
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_9:
  if ( !sprite )
    goto LABEL_17;
  v6 = 0;
  v13 = 0;
LABEL_14:
  UISprite__set_spriteName(sprite, v6, 0);
  return v13;
}


bool AtlasManagerUnit__ValidateLoadSprite(
        AtlasManagerUnit_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v10; // x22
  UIAtlas_o *v11; // x0
  AtlasManagerUnit___c_c *v12; // x0
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v15; // x20
  Il2CppObject *v16; // x22
  struct AtlasManagerUnit___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_string__o *v24; // x0

  if ( (byte_5937775 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    sub_21FFC50(&System_Func_UIAtlas__string__TypeInfo);
    sub_21FFC50(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__);
    sub_21FFC50(&AtlasManagerUnit___c_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5937775 = 1;
  }
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    return 0;
  max_length = atlasList->max_length;
  if ( max_length < 1 )
  {
LABEL_12:
    v12 = AtlasManagerUnit___c_TypeInfo;
    if ( !*(&AtlasManagerUnit___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo, v6, v7);
      v12 = AtlasManagerUnit___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__11_0 = (System_Func_object__object__o *)static_fields->__9__11_0;
    v15 = (System_String_o *)StringLiteral_869/*","*/;
    if ( !_9__11_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v6, v7);
        static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_UIAtlas__string__TypeInfo);
      System_Func_object__object____ctor(_9__11_0, v16, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0);
      v17 = AtlasManagerUnit___c_TypeInfo->static_fields;
      v17->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__11_0, (int32_t)_9__11_0, v18, v19, v20, v21, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_75485788(v15, v24, 0);
    return 0;
  }
  v10 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_21FFED4(IsNullOrEmpty);
    v11 = atlasList->m_Items[v10];
    if ( !v11 )
      sub_21FFECC(0, v6);
    IsNullOrEmpty = UIAtlas__GetSprite(v11, spriteName, 0);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v10 >= max_length )
    {
      atlasList = this->fields.atlasList;
      goto LABEL_12;
    }
  }
}


void AtlasManagerUnit___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937777 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManagerUnit___c_TypeInfo);
    byte_5937777 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AtlasManagerUnit___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AtlasManagerUnit___c___ctor(AtlasManagerUnit___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *AtlasManagerUnit___c___ValidateLoadSprite_b__11_0(
        AtlasManagerUnit___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  if ( !atlas )
    sub_21FFECC(this, 0);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0);
}