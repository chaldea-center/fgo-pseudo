void __fastcall AtlasManagerUnit___ctor(
        AtlasManagerUnit_o *this,
        System_String_o *assetPath,
        AssetStorageLoadWrapper_o *loadWrapper,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetPath = assetPath;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetPath,
    (System_Int32_array **)assetPath,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.loadWrapper = loadWrapper;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadWrapper,
    (System_Int32_array **)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.atlasList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v25, v26, v27, v28, v29, v30);
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
  UIAtlas_array *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UIAtlas_array *v13; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  int max_length; // w8
  __int64 v16; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v18; // x0

  if ( (byte_421674C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    this = (AtlasManagerUnit_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421674C = 1;
  }
  if ( !assetData )
    goto LABEL_21;
  result = (UIAtlas_array *)AssetData__GetObjectList_Texture2D_(
                              assetData,
                              (const MethodInfo_1700F84 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    v13 = result;
    if ( *(_QWORD *)&result->max_length )
    {
      v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_UIAtlas__TypeInfo, v11, v12);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v14,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= max_length )
          {
            v18 = sub_B0D9A8(this);
            sub_B0D948(v18, 0LL);
          }
          this = (AtlasManagerUnit_o *)v13->m_Items[v16];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
          }
          max_length = v13->max_length;
          if ( (int)++v16 >= max_length )
            goto LABEL_17;
        }
LABEL_21:
        sub_B0D97C(this);
      }
LABEL_17:
      if ( !v14 )
        goto LABEL_21;
      return (UIAtlas_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *assetData; // x0
  struct System_Action_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x22
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4216749 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, finishCallback);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&Method_AtlasManagerUnit_LoadEnd__, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_4216749 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData && !AssetData__get_IsEmpty(assetData, 0LL) )
  {
    ActionExtensions__Call(finishCallback, 0LL);
    return;
  }
  v11 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)this->fields.LoadFinishCallback,
                                    (System_Delegate_o *)finishCallback,
                                    0LL);
  if ( v11 && v11->klass != System_Action_TypeInfo )
  {
    assetManagerWrapper = (AssetLoadWrapper_o *)sub_B0DC70(v11);
    goto LABEL_20;
  }
  this->fields.LoadFinishCallback = v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.LoadFinishCallback,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( this->fields.IsLoading )
    return;
  this->fields.IsLoading = 1;
  loadWrapper = this->fields.loadWrapper;
  assetPath = this->fields.assetPath;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
  if ( !loadWrapper )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(assetPath, v22, loadParallelMax, 0LL) )
      goto LABEL_18;
    return;
  }
  assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
LABEL_20:
    sub_B0D97C(assetManagerWrapper);
  if ( !AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v22, loadParallelMax, 0LL) )
  {
LABEL_18:
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v24);
  }
}


void __fastcall AtlasManagerUnit__LoadEnd(AtlasManagerUnit_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AtlasManagerUnit_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UIAtlas_array *UIAtlasListFromAssetData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_LoadFinishCallback; // x19
  System_Action_o *v20; // x20
  struct System_Action_o *LoadFinishCallback; // t1

  if ( this->fields.IsLoading )
  {
    this->fields.assetData = assetData;
    this->fields.IsLoading = 0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.assetData,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasListFromAssetData = AtlasManagerUnit__CreateUIAtlasListFromAssetData(v10, assetData, v11);
    this->fields.atlasList = UIAtlasListFromAssetData;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.atlasList,
      (System_Int32_array **)UIAtlasListFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  LoadFinishCallback = this->fields.LoadFinishCallback;
  p_LoadFinishCallback = (BattleServantConfConponent_o *)&this->fields.LoadFinishCallback;
  v20 = LoadFinishCallback;
  if ( LoadFinishCallback )
  {
    p_LoadFinishCallback->klass = 0LL;
    sub_B0D840(p_LoadFinishCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v20, 0LL);
  }
}


void __fastcall AtlasManagerUnit__Release(AtlasManagerUnit_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AssetStorageLoadWrapper_o *loadWrapper; // x8
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  System_String_o *assetPath; // x20
  AssetData_o *assetData; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421674A & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_421674A = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_B0D97C(0LL);
    AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, this->fields.assetPath, 0LL);
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
      AssetManager__releaseAsset_29516400(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.atlasList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v13, v14, v15, v16, v17, v18);
}


bool __fastcall AtlasManagerUnit__SetUI(
        AtlasManagerUnit_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  struct UIAtlas_array *atlasList; // x22
  int max_length; // w8
  __int64 v10; // x23
  UIAtlas_o *v11; // x21
  UISprite_o *v13; // x0
  System_String_o *v14; // x1
  __int64 v15; // x0

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
        v10 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
          {
            v15 = sub_B0D9A8(IsNullOrEmpty);
            sub_B0D948(v15, 0LL);
          }
          v11 = atlasList->m_Items[v10];
          if ( !v11 )
            goto LABEL_16;
          IsNullOrEmpty = UIAtlas__GetSprite(atlasList->m_Items[v10], spriteName, 0LL);
          if ( IsNullOrEmpty )
            break;
          max_length = atlasList->max_length;
          if ( (int)++v10 >= max_length )
            goto LABEL_9;
        }
        if ( sprite )
        {
          UISprite__set_atlas(sprite, v11, 0LL);
          v13 = sprite;
          v14 = spriteName;
          goto LABEL_13;
        }
      }
LABEL_16:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
  if ( !sprite )
    goto LABEL_16;
  v13 = sprite;
  v14 = 0LL;
LABEL_13:
  UISprite__set_spriteName(v13, v14, 0LL);
  return 1;
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
  __int64 v9; // x1
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v15; // x22
  UIAtlas_o *v16; // x0
  AtlasManagerUnit___c_c *v17; // x0
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x21
  System_String_o *v20; // x20
  Il2CppObject *v21; // x22
  struct AtlasManagerUnit___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_string__o *v29; // x0
  __int64 v31; // x0

  if ( (byte_421674B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName);
    sub_B0D8A4(&Method_System_Func_UIAtlas__string___ctor__, v5);
    sub_B0D8A4(&System_Func_UIAtlas__string__TypeInfo, v6);
    sub_B0D8A4(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v7);
    sub_B0D8A4(&AtlasManagerUnit___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_705/*","*/, v9);
    byte_421674B = 1;
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
    v17 = AtlasManagerUnit___c_TypeInfo;
    if ( (BYTE3(AtlasManagerUnit___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v17 = AtlasManagerUnit___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
    v20 = (System_String_o *)StringLiteral_705/*","*/;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_UIAtlas__string__TypeInfo,
                                                                                                   v11,
                                                                                                   v12);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__11_0,
        v21,
        Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__,
        (const MethodInfo_261A104 *)Method_System_Func_UIAtlas__string___ctor__);
      v22 = AtlasManagerUnit___c_TypeInfo->static_fields;
      v22->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v22->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_43905348(v20, v29, 0LL);
    return 0;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
    {
      v31 = sub_B0D9A8(IsNullOrEmpty);
      sub_B0D948(v31, 0LL);
    }
    v16 = atlasList->m_Items[v15];
    if ( !v16 )
      sub_B0D97C(0LL);
    IsNullOrEmpty = UIAtlas__GetSprite(v16, spriteName, 0LL);
    if ( IsNullOrEmpty )
      return 1;
    max_length = atlasList->max_length;
    if ( (int)++v15 >= max_length )
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213989 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManagerUnit___c_TypeInfo, v1);
    byte_4213989 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AtlasManagerUnit___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AtlasManagerUnit___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}