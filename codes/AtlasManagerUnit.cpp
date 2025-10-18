void AtlasManagerUnit___ctor(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetPath = assetPath;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetPath, (int32_t)assetPath, v7, v8);
  this->fields.loadWrapper = loadWrapper;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadWrapper, (int32_t)loadWrapper, v9, v10);
  this->fields.atlasList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atlasList, 0, v11, v12);
  this->fields.assetData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v13, v14);
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
  Il2CppObject *Component_object; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C420CF & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    this = (AtlasManagerUnit_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C420CF = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0;
  v5 = ObjectList_object;
  if ( !ObjectList_object->max_length )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C372BC(this);
      this = (AtlasManagerUnit_o *)v5->m_Items[v8];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v13 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            Component_object,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v15[4] = (Il2CppClass *)Component_object;
          sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)Component_object, v10, v11);
        }
      }
      max_length = v5->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C372B4(this);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v6,
                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_c *v12; // x1
  AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4C420CC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_AtlasManagerUnit_LoadEnd__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C420CC = 1;
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
    v12 = System_Action_TypeInfo;
    if ( (System_Action_c *)v9->klass != System_Action_TypeInfo
      || (*p_LoadFinishCallback = (struct System_Action_o *)v9, (System_Action_c *)v9->klass != v12) )
    {
      sub_1C37574(v9);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.LoadFinishCallback, (int32_t)v9, v10, v11);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0);
    if ( loadWrapper )
    {
      if ( AssetStorageLoadWrapper__LoadAssetStorage(loadWrapper, assetPath, v15, loadParallelMax, 0) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__loadAssetStorage(assetPath, v15, loadParallelMax, 0) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0, v16);
  }
}


void AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v6, assetData, v7);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)UIAtlasListFromAssetData, v9, v10);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (CGThumbnailListItem_o *)&this->fields.LoadFinishCallback;
  v12 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0;
    sub_1C36FFC(p_LoadFinishCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetStorageLoadWrapper_o *loadWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C420CD & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C420CD = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    AssetStorageLoadWrapper__ReleaseAssetStorage(loadWrapper, this->fields.assetPath, 0);
  }
  else if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    assetPath = this->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(assetData, 0);
    }
  }
  this->fields.atlasList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atlasList, 0, v2, v3);
  this->fields.assetData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v8, v9);
}


bool AtlasManagerUnit__SetUI(
        AtlasManagerUnit_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  UISpriteData_o *IsNullOrEmpty; // x0
  struct UIAtlas_array *atlasList; // x22
  int max_length; // w8
  __int64 v10; // x23
  UIAtlas_o *v11; // x21
  bool v12; // w21

  v6 = spriteName;
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 || (atlasList = this->fields.atlasList) == 0 )
  {
    if ( sprite )
    {
      v6 = 0;
LABEL_13:
      v12 = 1;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C372B4(IsNullOrEmpty);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= max_length )
        sub_1C372BC(IsNullOrEmpty);
      v11 = atlasList->m_Items[v10];
      if ( !v11 )
        goto LABEL_17;
      IsNullOrEmpty = UIAtlas__GetSprite(atlasList->m_Items[v10], v6, 0);
      if ( IsNullOrEmpty )
        break;
      max_length = atlasList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_9;
    }
    if ( sprite )
    {
      UISprite__set_atlas(sprite, v11, 0);
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_9:
  if ( !sprite )
    goto LABEL_17;
  v6 = 0;
  v12 = 0;
LABEL_14:
  UISprite__set_spriteName(sprite, v6, 0);
  return v12;
}


bool AtlasManagerUnit__ValidateLoadSprite(
        AtlasManagerUnit_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v8; // x22
  UIAtlas_o *v9; // x0
  AtlasManagerUnit___c_c *v10; // x0
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v12; // x20
  Il2CppObject *v13; // x22
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_string__o *v17; // x0

  if ( (byte_4C420CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    sub_1C37058(&System_Func_UIAtlas__string__TypeInfo);
    sub_1C37058(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__);
    sub_1C37058(&AtlasManagerUnit___c_TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C420CE = 1;
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
    v10 = AtlasManagerUnit___c_TypeInfo;
    if ( !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v10 = AtlasManagerUnit___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__object__o *)v10->static_fields->__9__11_0;
    v12 = (System_String_o *)StringLiteral_811/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = AtlasManagerUnit___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_UIAtlas__string__TypeInfo);
      System_Func_object__object____ctor(_9__11_0, v13, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_63604232(v12, v17, 0);
    return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= max_length )
      sub_1C372BC(IsNullOrEmpty);
    v9 = atlasList->m_Items[v8];
    if ( !v9 )
      sub_1C372B4(0);
    IsNullOrEmpty = UIAtlas__GetSprite(v9, spriteName, 0);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v8 >= max_length )
    {
      atlasList = this->fields.atlasList;
      goto LABEL_12;
    }
  }
}


void AtlasManagerUnit___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C420D0 & 1) == 0 )
  {
    sub_1C37058(&AtlasManagerUnit___c_TypeInfo);
    byte_4C420D0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AtlasManagerUnit___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0);
}