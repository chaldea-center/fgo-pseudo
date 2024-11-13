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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetPath, (int64_t)assetPath, v7, v8, v9, v10, v11, v12);
  this->fields.loadWrapper = loadWrapper;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadWrapper,
    (int64_t)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v25, v26, v27, v28, v29, v30);
}


UIAtlas_array *__fastcall AtlasManagerUnit__CreateUIAtlasListFromAssetData(
        AtlasManagerUnit_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Object_array *ObjectList_object; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Object_array *v20; // x19
  System_Collections_Generic_List_object__o *v21; // x20
  int max_length; // w8
  __int64 v23; // x22
  __int64 v24; // x1
  Il2CppObject *Component_object; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B153DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v12, v13);
    this = (AtlasManagerUnit_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B153DB = 1;
  }
  if ( !assetData )
    goto LABEL_22;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object )
    return 0LL;
  v20 = ObjectList_object;
  if ( !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  max_length = v20->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= max_length )
        sub_1BCAA44(this, assetData);
      this = (AtlasManagerUnit_o *)v20->m_Items[v23];
      if ( !this )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v21 )
          break;
        items = v21->fields._items;
        v33 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v35[4] = (Il2CppClass *)Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)Component_object, v26, v27, v28, v29, v30, v31);
        }
      }
      max_length = v20->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BCAA3C(this, assetData);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_22;
  return (UIAtlas_array *)System_Collections_Generic_List_object___ToArray(
                            v21,
                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AtlasManagerUnit__Load(
        AtlasManagerUnit_o *this,
        System_Action_o *finishCallback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  AssetData_o *assetData; // x0
  struct System_Action_o **p_LoadFinishCallback; // x22
  System_Delegate_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_c *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v28; // x22
  __int64 v29; // x1
  const MethodInfo *v30; // x4
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v32; // x2

  if ( (byte_4B153D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, finishCallback, *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_AtlasManagerUnit_LoadEnd__, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    byte_4B153D8 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData && !AssetData__get_IsEmpty(assetData, 0LL) )
    goto LABEL_9;
  p_LoadFinishCallback = &this->fields.LoadFinishCallback;
  v15 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.LoadFinishCallback,
          (System_Delegate_o *)finishCallback,
          0LL);
  if ( v15 )
  {
    v22 = System_Action_TypeInfo;
    if ( (System_Action_c *)v15->klass != System_Action_TypeInfo
      || (*p_LoadFinishCallback = (struct System_Action_o *)v15, (System_Action_c *)v15->klass != v22) )
    {
      sub_1BCACFC(v15);
LABEL_9:
      ActionExtensions__Call(finishCallback, 0LL);
      return;
    }
  }
  else
  {
    *p_LoadFinishCallback = 0LL;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.LoadFinishCallback,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !this->fields.IsLoading )
  {
    this->fields.IsLoading = 1;
    loadWrapper = this->fields.loadWrapper;
    assetPath = this->fields.assetPath;
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25);
    AssetLoader_LoadEndDataHandler___ctor(v28, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
    if ( loadWrapper )
    {
      assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
      if ( !assetManagerWrapper )
        sub_1BCAA3C(0LL, v29);
      if ( AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v28, loadParallelMax, v30) )
        return;
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
      if ( AssetManager__loadAssetStorage(assetPath, v28, loadParallelMax, 0LL) )
        return;
    }
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v32);
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
    sub_1BCA784(
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
    sub_1BCA784(
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
    sub_1BCA784(p_LoadFinishCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4B153D9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B153D9 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_1BCAA3C(0LL, method);
    AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, this->fields.assetPath, v2);
  }
  else if ( this->fields.IsLoading )
  {
    this->fields.IsLoading = 0;
    assetPath = this->fields.assetPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAsset_38505704(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v13, v14, v15, v16, v17, v18);
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
    sub_1BCAA3C(IsNullOrEmpty, v8);
  }
  max_length = atlasList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_1BCAA44(IsNullOrEmpty, v8);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v19; // x22
  UIAtlas_o *v20; // x0
  AtlasManagerUnit___c_c *v21; // x0
  System_Func_object__object__o *_9__11_0; // x21
  System_String_o *v23; // x20
  Il2CppObject *v24; // x22
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_string__o *v32; // x0

  if ( (byte_4B153DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName, method);
    sub_1BCA7E0(&System_Func_UIAtlas__string__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v7, v8);
    sub_1BCA7E0(&AtlasManagerUnit___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v11, v12);
    byte_4B153DA = 1;
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
    v21 = AtlasManagerUnit___c_TypeInfo;
    if ( !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo, v14);
      v21 = AtlasManagerUnit___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__object__o *)v21->static_fields->__9__11_0;
    v23 = (System_String_o *)StringLiteral_863/*","*/;
    if ( !_9__11_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v14);
        v21 = AtlasManagerUnit___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__11_0 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_UIAtlas__string__TypeInfo, v14, v15, v16);
      System_Func_object__object____ctor(_9__11_0, v24, Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, 0LL);
      static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
        (int64_t)_9__11_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_62416876(v23, v32, 0LL);
    return 0;
  }
  v19 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v19 >= max_length )
      sub_1BCAA44(IsNullOrEmpty, v14);
    v20 = atlasList->m_Items[v19];
    if ( !v20 )
      sub_1BCAA3C(0LL, v14);
    IsNullOrEmpty = UIAtlas__GetSprite(v20, spriteName, 0LL);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v19 >= max_length )
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B153DC & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManagerUnit___c_TypeInfo, v1, v2);
    byte_4B153DC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AtlasManagerUnit___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AtlasManagerUnit___c_TypeInfo->static_fields->__9 = (struct AtlasManagerUnit___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AtlasManagerUnit___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}