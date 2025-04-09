void __fastcall AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetPath = assetPath;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetPath, (int32_t)assetPath, v7, v8);
  this->fields.loadWrapper = loadWrapper;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadWrapper, (int32_t)loadWrapper, v9, v10);
  this->fields.atlasList = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.atlasList, 0, v11, v12);
  this->fields.assetData = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetData, 0, v13, v14);
}


UIAtlas_array *__fastcall AtlasManagerUnit__CreateUIAtlasListFromAssetData(
        AtlasManagerUnit_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Object_array *ObjectList_object; // x0
  System_Object_array *v11; // x19
  System_Collections_Generic_List_object__o *v12; // x20
  int max_length; // w8
  __int64 v14; // x22
  Il2CppObject *Component_object; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49BA035 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    this = (AtlasManagerUnit_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    byte_49BA035 = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2EE479C *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0LL;
  v11 = ObjectList_object;
  if ( !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_1B4D1F4(this, assetData);
      this = (AtlasManagerUnit_o *)v11->m_Items[v14];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v19 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            Component_object,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v21[4] = (Il2CppClass *)Component_object;
          sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 4), (int32_t)Component_object, v16, v17);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B4D1EC(this, assetData);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v12,
                            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
}


void __fastcall AtlasManagerUnit__Load(
        AtlasManagerUnit_o *this,
        System_Action_o *finishCallback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *assetData; // x0
  struct System_Action_o **p_LoadFinishCallback; // x22
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_c *v15; // x1
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v18; // x22
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v22; // x2

  if ( (byte_49BA032 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, finishCallback);
    sub_1B4CF90(&AssetManager_TypeInfo, v7);
    sub_1B4CF90(&Method_AtlasManagerUnit_LoadEnd__, v8);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_49BA032 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData && !AssetData__get_IsEmpty(assetData, 0LL) )
    goto LABEL_9;
  p_LoadFinishCallback = &this->fields.LoadFinishCallback;
  v12 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.LoadFinishCallback,
          (System_Delegate_o *)finishCallback,
          0LL);
  if ( v12 )
  {
    v15 = System_Action_TypeInfo;
    if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
      || (*p_LoadFinishCallback = (struct System_Action_o *)v12, (System_Action_c *)v12->klass != v15) )
    {
      sub_1B4D4AC(v12);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0LL);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0LL;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.LoadFinishCallback, (int32_t)v12, v13, v14);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
    if ( loadWrapper )
    {
      assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
      if ( !assetManagerWrapper )
        sub_1B4D1EC(0LL, v19);
      if ( AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v18, loadParallelMax, v20) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__loadAssetStorage(assetPath, v18, loadParallelMax, 0LL) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v22);
  }
}


void __fastcall AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AtlasManagerUnit_o *v6; // x0
  const MethodInfo *v7; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_LoadFinishCallback; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    this->fields.assetData = assetData;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v6, assetData, v7);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)UIAtlasListFromAssetData, v9, v10);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (CGThumbnailListItem_o *)&this->fields.LoadFinishCallback;
  v12 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0LL;
    sub_1B4CF34(p_LoadFinishCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  struct AssetStorageLoadWrapper_o *loadWrapper; // x8
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49BA033 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49BA033 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_1B4D1EC(0LL, method);
    AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, this->fields.assetPath, v2);
  }
  else if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    assetPath = this->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_38328408(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.atlasList, 0, (int32_t)v2, v3);
  this->fields.assetData = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetData, 0, v9, v10);
}


bool __fastcall AtlasManagerUnit__SetUI(
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
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 || (atlasList = this->fields.atlasList) == 0LL )
  {
    if ( sprite )
    {
      v6 = 0LL;
LABEL_13:
      v13 = 1;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B4D1EC(IsNullOrEmpty, v8);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_1B4D1F4(IsNullOrEmpty, v8);
      v12 = atlasList->m_Items[v11];
      if ( !v12 )
        goto LABEL_17;
      IsNullOrEmpty = UIAtlas__GetSprite(atlasList->m_Items[v11], v6, 0LL);
      if ( IsNullOrEmpty )
        break;
      max_length = atlasList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_9;
    }
    if ( sprite )
    {
      UISprite__set_atlas(sprite, v12, 0LL);
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_9:
  if ( !sprite )
    goto LABEL_17;
  v6 = 0LL;
  v13 = 0;
LABEL_14:
  UISprite__set_spriteName(sprite, v6, 0LL);
  return v13;
}


bool __fastcall AtlasManagerUnit__ValidateLoadSprite(
        AtlasManagerUnit_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v13; // x22
  UIAtlas_o *v14; // x0
  AtlasManagerUnit___c_c *v15; // x0
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v17; // x20
  Il2CppObject *v18; // x22
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_string__o *v22; // x0

  if ( (byte_49BA034 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName);
    sub_1B4CF90(&System_Func_UIAtlas__string__TypeInfo, v5);
    sub_1B4CF90(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v6);
    sub_1B4CF90(&AtlasManagerUnit___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_816/*","*/, v8);
    byte_49BA034 = 1;
  }
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    return 0;
  max_length = atlasList->max_length;
  if ( max_length < 1 )
  {
LABEL_12:
    v15 = AtlasManagerUnit___c_TypeInfo;
    if ( !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v15 = AtlasManagerUnit___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__object__o *)v15->static_fields->__9__11_0;
    v17 = (System_String_o *)StringLiteral_816/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = AtlasManagerUnit___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_UIAtlas__string__TypeInfo);
      System_Func_object__object____ctor(_9__11_0, v18, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0LL);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_61136044(v17, v22, 0LL);
    return 0;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1B4D1F4(IsNullOrEmpty, v10);
    v14 = atlasList->m_Items[v13];
    if ( !v14 )
      sub_1B4D1EC(0LL, v10);
    IsNullOrEmpty = UIAtlas__GetSprite(v14, spriteName, 0LL);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v13 >= max_length )
    {
      atlasList = this->fields.atlasList;
      goto LABEL_12;
    }
  }
}


void __fastcall AtlasManagerUnit___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BA036 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManagerUnit___c_TypeInfo, v1);
    byte_49BA036 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)AtlasManagerUnit___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AtlasManagerUnit___c___ctor(AtlasManagerUnit___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall AtlasManagerUnit___c___ValidateLoadSprite_b__11_0(
        AtlasManagerUnit___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  if ( !atlas )
    sub_1B4D1EC(this, 0LL);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}