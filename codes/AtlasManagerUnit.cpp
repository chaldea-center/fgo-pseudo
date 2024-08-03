void __fastcall AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetPath = assetPath;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetPath, (int32_t)assetPath, v7, v8);
  this->fields.loadWrapper = loadWrapper;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadWrapper, (int32_t)loadWrapper, v9, v10);
  this->fields.atlasList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, 0, v11, v12);
  this->fields.assetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetData, 0, v13, v14);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Object_array *v13; // x19
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  int max_length; // w8
  __int64 v17; // x22
  Il2CppObject *Component_object; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FB63A & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    this = (AtlasManagerUnit_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FB63A = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0LL;
  v13 = ObjectList_object;
  if ( !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1B6432C(this, v15);
      this = (AtlasManagerUnit_o *)v13->m_Items[v17];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            Component_object,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v24[4] = (Il2CppClass *)Component_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)Component_object, v19, v20);
        }
      }
      max_length = v13->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B64324(this);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v14,
                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  int32_t v14; // w3
  System_Action_c *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v20; // x22
  const MethodInfo *v21; // x2

  if ( (byte_49FB637 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, finishCallback);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_AtlasManagerUnit_LoadEnd__, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_49FB637 = 1;
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
      sub_1B645E4(v12);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0LL);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.LoadFinishCallback, (int32_t)v12, v13, v14);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
    AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
    if ( loadWrapper )
    {
      if ( AssetStorageLoadWrapper__LoadAssetStorage(loadWrapper, assetPath, v20, loadParallelMax, 0LL) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__loadAssetStorage(assetPath, v20, loadParallelMax, 0LL) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v21);
  }
}


void __fastcall AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  int32_t v3; // w3
  AtlasManagerUnit_o *v6; // x0
  const MethodInfo *v7; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p_LoadFinishCallback; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    this->fields.assetData = assetData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v6, assetData, v7);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.atlasList,
      (int32_t)UIAtlasListFromAssetData,
      v9,
      v10);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (ServantStatusBattleListViewItem_o *)&this->fields.LoadFinishCallback;
  v12 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0LL;
    sub_1B6406C(p_LoadFinishCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *loadWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB638 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FB638 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    AssetStorageLoadWrapper__ReleaseAssetStorage(loadWrapper, this->fields.assetPath, 0LL);
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
      AssetManager__releaseAsset_37477464(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, 0, v2, v3);
  this->fields.assetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetData, 0, v8, v9);
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
    sub_1B64324(IsNullOrEmpty);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_1B6432C(IsNullOrEmpty, v8);
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
  __int64 v11; // x2
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v14; // x22
  UIAtlas_o *v15; // x0
  AtlasManagerUnit___c_c *v16; // x0
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v18; // x20
  Il2CppObject *v19; // x22
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_string__o *v23; // x0

  if ( (byte_49FB639 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName);
    sub_1B640C8(&System_Func_UIAtlas__string__TypeInfo, v5);
    sub_1B640C8(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v6);
    sub_1B640C8(&AtlasManagerUnit___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_869/*","*/, v8);
    byte_49FB639 = 1;
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
    v16 = AtlasManagerUnit___c_TypeInfo;
    if ( !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v16 = AtlasManagerUnit___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__object__o *)v16->static_fields->__9__11_0;
    v18 = (System_String_o *)StringLiteral_869/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = AtlasManagerUnit___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_UIAtlas__string__TypeInfo, v10, v11);
      System_Func_object__object____ctor(_9__11_0, v19, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0LL);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_61391052(v18, v23, 0LL);
    return 0;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1B6432C(IsNullOrEmpty, v10);
    v15 = atlasList->m_Items[v14];
    if ( !v15 )
      sub_1B64324(0LL);
    IsNullOrEmpty = UIAtlas__GetSprite(v15, spriteName, 0LL);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v14 >= max_length )
    {
      atlasList = this->fields.atlasList;
      goto LABEL_12;
    }
  }
}


void __fastcall AtlasManagerUnit___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB63B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManagerUnit___c_TypeInfo, v1);
    byte_49FB63B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AtlasManagerUnit___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AtlasManagerUnit___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}