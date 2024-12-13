void __fastcall AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetPath = assetPath;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.assetPath, (int64_t)assetPath, v7, v8, v9, v10, v11, v12);
  this->fields.loadWrapper = loadWrapper;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.loadWrapper,
    (int64_t)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.atlasList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v25, v26, v27, v28, v29, v30);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B36375 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIAtlas__Add__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    this = (AtlasManagerUnit_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B36375 = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2F13900 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0LL;
  v11 = ObjectList_object;
  if ( !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_1BD36BC(this, assetData);
      this = (AtlasManagerUnit_o *)v11->m_Items[v14];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            Component_object,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)Component_object;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)Component_object, v16, v17, v18, v19, v20, v21);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BD36B4(this, assetData);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v12,
                            (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Action_c *v19; // x1
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x22
  __int64 v23; // x1
  const MethodInfo *v24; // x4
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4B36372 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, finishCallback);
    sub_1BD3458(&AssetManager_TypeInfo, v7);
    sub_1BD3458(&Method_AtlasManagerUnit_LoadEnd__, v8);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_4B36372 = 1;
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
    v19 = System_Action_TypeInfo;
    if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
      || (*p_LoadFinishCallback = (struct System_Action_o *)v12, (System_Action_c *)v12->klass != v19) )
    {
      sub_1BD3974(v12);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0LL);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0LL;
  }
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.LoadFinishCallback,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
    if ( loadWrapper )
    {
      assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
      if ( !assetManagerWrapper )
        sub_1BD36B4(0LL, v23);
      if ( AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v22, loadParallelMax, v24) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__loadAssetStorage(assetPath, v22, loadParallelMax, 0LL) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v26);
  }
}


void __fastcall AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AtlasManagerUnit_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *p_LoadFinishCallback; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    this->fields.assetData = assetData;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.assetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v10, assetData, v11);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.atlasList,
      (int64_t)UIAtlasListFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (PartyOrganizationUtility_o *)&this->fields.LoadFinishCallback;
  v20 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0LL;
    sub_1BD33FC(p_LoadFinishCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
      v20->fields.original_method_info,
      *(_QWORD *)&v20->fields.extra_arg);
  }
}


void __fastcall AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct AssetStorageLoadWrapper_o *loadWrapper; // x8
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B36373 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    byte_4B36373 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_1BD36B4(0LL, method);
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
      AssetManager__releaseAsset_38574016(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.atlasList, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v13, v14, v15, v16, v17, v18);
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
    sub_1BD36B4(IsNullOrEmpty, v8);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_1BD36BC(IsNullOrEmpty, v8);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_string__o *v26; // x0

  if ( (byte_4B36374 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName);
    sub_1BD3458(&System_Func_UIAtlas__string__TypeInfo, v5);
    sub_1BD3458(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v6);
    sub_1BD3458(&AtlasManagerUnit___c_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_863/*","*/, v8);
    byte_4B36374 = 1;
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
    v17 = (System_String_o *)StringLiteral_863/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = AtlasManagerUnit___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_UIAtlas__string__TypeInfo);
      System_Func_object__object____ctor(_9__11_0, v18, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0LL);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
        (int64_t)_9__11_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_2F62E1C *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_62540904(v17, v26, 0LL);
    return 0;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1BD36BC(IsNullOrEmpty, v10);
    v14 = atlasList->m_Items[v13];
    if ( !v14 )
      sub_1BD36B4(0LL, v10);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B36376 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManagerUnit___c_TypeInfo, v1);
    byte_4B36376 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)AtlasManagerUnit___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}