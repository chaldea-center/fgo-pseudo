void AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetPath = assetPath;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetPath, (int32_t)assetPath, v7, v8, v9, v10, v11, v12);
  this->fields.loadWrapper = loadWrapper;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadWrapper,
    (int32_t)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, 0, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v25, v26, v27, v28, v29, v30);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CED7AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    this = (AtlasManagerUnit_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED7AF = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_3151750 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0;
  v5 = ObjectList_object;
  if ( !ObjectList_object->max_length )
    return 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C7BD48(this);
      this = (AtlasManagerUnit_o *)v5->m_Items[v8];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            Component_object,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)Component_object;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)Component_object, v10, v11, v12, v13, v14, v15);
        }
      }
      max_length = v5->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C7BD40(this, assetData);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v6,
                            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Action_c *v16; // x1
  AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4CED7AC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_AtlasManagerUnit_LoadEnd__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CED7AC = 1;
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
      sub_1C7C0DC(v9);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0;
  }
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.LoadFinishCallback,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v19, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0);
    if ( loadWrapper )
    {
      if ( AssetStorageLoadWrapper__LoadAssetStorage(loadWrapper, assetPath, v19, loadParallelMax, 0) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__loadAssetStorage(assetPath, v19, loadParallelMax, 0) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0, v20);
  }
}


void AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AtlasManagerUnit_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GrandQuestFolderBoardItem_o *p_LoadFinishCallback; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    this->fields.assetData = assetData;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.assetData,
      (int32_t)assetData,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v10, assetData, v11);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.atlasList,
      (int32_t)UIAtlasListFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (GrandQuestFolderBoardItem_o *)&this->fields.LoadFinishCallback;
  v20 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0;
    sub_1C7BA8C(p_LoadFinishCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetStorageLoadWrapper_o *loadWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CED7AD & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED7AD = 1;
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
      AssetManager__releaseAsset_41096272(assetData, 0);
    }
  }
  this->fields.atlasList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, 0, v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v12, v13, v14, v15, v16, v17);
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
    sub_1C7BD40(IsNullOrEmpty, v8);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_1C7BD48(IsNullOrEmpty);
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
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v9; // x22
  UIAtlas_o *v10; // x0
  AtlasManagerUnit___c_c *v11; // x0
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v13; // x20
  Il2CppObject *v14; // x22
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_string__o *v22; // x0

  if ( (byte_4CED7AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    sub_1C7BAE8(&System_Func_UIAtlas__string__TypeInfo);
    sub_1C7BAE8(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__);
    sub_1C7BAE8(&AtlasManagerUnit___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CED7AE = 1;
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
    v11 = AtlasManagerUnit___c_TypeInfo;
    if ( !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v11 = AtlasManagerUnit___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__object__o *)v11->static_fields->__9__11_0;
    v13 = (System_String_o *)StringLiteral_809/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = AtlasManagerUnit___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_UIAtlas__string__TypeInfo);
      System_Func_object__object____ctor(_9__11_0, v14, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
        (int32_t)_9__11_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_64219504(v13, v22, 0);
    return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1C7BD48(IsNullOrEmpty);
    v10 = atlasList->m_Items[v9];
    if ( !v10 )
      sub_1C7BD40(0, v6);
    IsNullOrEmpty = UIAtlas__GetSprite(v10, spriteName, 0);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v9 >= max_length )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CED7B0 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManagerUnit___c_TypeInfo);
    byte_4CED7B0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)AtlasManagerUnit___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0);
}