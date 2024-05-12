void __fastcall AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetPath = assetPath;
  sub_B77560(&this->fields.assetPath);
  this->fields.loadWrapper = loadWrapper;
  sub_B77560(&this->fields.loadWrapper);
  this->fields.atlasList = 0LL;
  sub_B77560(&this->fields.atlasList);
  this->fields.assetData = 0LL;
  sub_B77560(&this->fields.assetData);
}


UIAtlas_array *__fastcall AtlasManagerUnit__CreateUIAtlasListFromAssetData(
        AtlasManagerUnit_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UIAtlas_array *result; // x0
  UIAtlas_array *v5; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  int max_length; // w8
  __int64 v8; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v10; // x0

  if ( (byte_4388BC5 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObjectList_GameObject___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    this = (AtlasManagerUnit_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388BC5 = 1;
  }
  if ( !assetData )
    goto LABEL_21;
  result = (UIAtlas_array *)AssetData__GetObjectList_Texture2D_(
                              assetData,
                              (const MethodInfo_1C5FF90 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    v5 = result;
    if ( *(_QWORD *)&result->max_length )
    {
      v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIAtlas__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v6,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
      max_length = v5->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v8 >= max_length )
          {
            v10 = sub_B776C8(this);
            sub_B77668(v10, 0LL);
          }
          this = (AtlasManagerUnit_o *)v5->m_Items[v8];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
          }
          max_length = v5->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_17;
        }
LABEL_21:
        sub_B7769C(this, assetData);
      }
LABEL_17:
      if ( !v6 )
        goto LABEL_21;
      return (UIAtlas_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall AtlasManagerUnit__Load(
        AtlasManagerUnit_o *this,
        System_Action_o *finishCallback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x0
  struct System_Action_o *v8; // x0
  AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v11; // x22
  const MethodInfo *v12; // x2
  AtlasManagerUnit_o *v13; // x0
  AssetData_o *v14; // x1

  if ( (byte_4388BC2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_AtlasManagerUnit_LoadEnd__);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4388BC2 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData && !AssetData__get_IsEmpty(assetData, 0LL) )
  {
    ActionExtensions__Call(finishCallback, 0LL);
    return;
  }
  v8 = (struct System_Action_o *)System_Delegate__Combine(
                                   (System_Delegate_o *)this->fields.LoadFinishCallback,
                                   (System_Delegate_o *)finishCallback,
                                   0LL);
  if ( v8 && v8->klass != System_Action_TypeInfo )
  {
    v13 = (AtlasManagerUnit_o *)sub_B77990(v8);
    goto LABEL_18;
  }
  this->fields.LoadFinishCallback = v8;
  sub_B77560(&this->fields.LoadFinishCallback);
  if ( this->fields.IsLoading )
    return;
  this->fields.IsLoading = 1;
  loadWrapper = this->fields.loadWrapper;
  assetPath = this->fields.assetPath;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
  if ( loadWrapper )
  {
    if ( !AssetStorageLoadWrapper__LoadAssetStorage(loadWrapper, assetPath, v11, loadParallelMax, 0LL) )
    {
LABEL_17:
      this->fields.IsLoading = 0;
      v13 = this;
      v14 = 0LL;
LABEL_18:
      AtlasManagerUnit__LoadEnd(v13, v14, v12);
    }
  }
  else
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(assetPath, v11, loadParallelMax, 0LL) )
      goto LABEL_17;
  }
}


void __fastcall AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  AtlasManagerUnit_o *v5; // x0
  const MethodInfo *v6; // x2
  struct System_Action_o **p_LoadFinishCallback; // x19
  System_Action_o *v8; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.assetData = assetData;
    this->fields.IsLoading = 0;
    sub_B77560(&this->fields.assetData);
    this->fields.atlasList = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v5, assetData, v6);
    sub_B77560(&this->fields.atlasList);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = &this->fields.LoadFinishCallback;
  v8 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    *p_LoadFinishCallback = 0LL;
    sub_B77560(p_LoadFinishCallback);
    System_Action__Invoke(v8, 0LL);
  }
}


void __fastcall AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *loadWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20

  if ( (byte_4388BC3 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_4388BC3 = 1;
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
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(assetPath, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_24402476(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_B77560(&this->fields.atlasList);
  this->fields.assetData = 0LL;
  sub_B77560(&this->fields.assetData);
}


bool __fastcall AtlasManagerUnit__SetUI(
        AtlasManagerUnit_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct UIAtlas_array *atlasList; // x22
  int max_length; // w8
  __int64 v11; // x23
  UIAtlas_o *v12; // x21
  UISprite_o *v14; // x0
  System_String_o *v15; // x1
  __int64 v16; // x0

  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    atlasList = this->fields.atlasList;
    if ( atlasList )
    {
      max_length = atlasList->max_length;
      if ( max_length < 1 )
      {
LABEL_9:
        if ( sprite )
        {
          UISprite__set_spriteName(sprite, 0LL, 0LL);
          return 0;
        }
      }
      else
      {
        v11 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v11 >= max_length )
          {
            v16 = sub_B776C8(IsNullOrEmpty);
            sub_B77668(v16, 0LL);
          }
          v12 = atlasList->m_Items[v11];
          if ( !v12 )
            goto LABEL_16;
          IsNullOrEmpty = UIAtlas__GetSprite(atlasList->m_Items[v11], spriteName, 0LL);
          if ( IsNullOrEmpty )
            break;
          max_length = atlasList->max_length;
          if ( (int)++v11 >= max_length )
            goto LABEL_9;
        }
        if ( sprite )
        {
          UISprite__set_atlas(sprite, v12, 0LL);
          v14 = sprite;
          v15 = spriteName;
          goto LABEL_13;
        }
      }
LABEL_16:
      sub_B7769C(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_16;
  v14 = sprite;
  v15 = 0LL;
LABEL_13:
  UISprite__set_spriteName(v14, v15, 0LL);
  return 1;
}


bool __fastcall AtlasManagerUnit__ValidateLoadSprite(
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
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x21
  System_String_o *v14; // x20
  Il2CppObject *v15; // x22
  struct AtlasManagerUnit___c_StaticFields *v16; // x0
  System_Collections_Generic_IEnumerable_string__o *v17; // x0
  __int64 v19; // x0

  if ( (byte_4388BC4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    sub_B775C4(&Method_System_Func_UIAtlas__string___ctor__);
    sub_B775C4(&System_Func_UIAtlas__string__TypeInfo);
    sub_B775C4(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__);
    sub_B775C4(&AtlasManagerUnit___c_TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_4388BC4 = 1;
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
    v11 = AtlasManagerUnit___c_TypeInfo;
    if ( (BYTE3(AtlasManagerUnit___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v11 = AtlasManagerUnit___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
    v14 = (System_String_o *)StringLiteral_714/*","*/;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_UIAtlas__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__11_0,
        v15,
        Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__,
        (const MethodInfo_29EAA10 *)Method_System_Func_UIAtlas__string___ctor__);
      v16 = AtlasManagerUnit___c_TypeInfo->static_fields;
      v16->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_B77560(&v16->__9__11_0);
    }
    v17 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_44957380(v14, v17, 0LL);
    return 0;
  }
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
    {
      v19 = sub_B776C8(IsNullOrEmpty);
      sub_B77668(v19, 0LL);
    }
    v10 = atlasList->m_Items[v9];
    if ( !v10 )
      sub_B7769C(0LL, v6);
    IsNullOrEmpty = UIAtlas__GetSprite(v10, spriteName, 0LL);
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


void __fastcall AtlasManagerUnit___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F5D & 1) == 0 )
  {
    sub_B775C4(&AtlasManagerUnit___c_TypeInfo);
    byte_4389F5D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AtlasManagerUnit___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}