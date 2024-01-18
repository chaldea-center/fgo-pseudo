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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetPath,
    (System_Int32_array **)assetPath,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.loadWrapper = loadWrapper;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadWrapper,
    (System_Int32_array **)loadWrapper,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.atlasList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.atlasList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.assetData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v25, v26, v27, v28, v29, v30);
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
  UIAtlas_array *v11; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  int max_length; // w8
  __int64 v14; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v16; // x0

  if ( (byte_41898E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v8);
    this = (AtlasManagerUnit_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_41898E2 = 1;
  }
  if ( !assetData )
    goto LABEL_21;
  result = (UIAtlas_array *)AssetData__GetObjectList_Texture2D_(
                              assetData,
                              (const MethodInfo_17204F8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    v11 = result;
    if ( *(_QWORD *)&result->max_length )
    {
      v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v12,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
      max_length = v11->max_length;
      if ( max_length >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v14 >= max_length )
          {
            v16 = sub_B2C460(this);
            sub_B2C400(v16, 0LL);
          }
          this = (AtlasManagerUnit_o *)v11->m_Items[v14];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
          }
          max_length = v11->max_length;
          if ( (int)++v14 >= max_length )
            goto LABEL_17;
        }
LABEL_21:
        sub_B2C434(this, assetData);
      }
LABEL_17:
      if ( !v12 )
        goto LABEL_21;
      return (UIAtlas_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIAtlas__ToArray__);
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
  struct AssetStorageLoadWrapper_o *loadWrapper; // x23
  System_String_o *assetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v20; // x22
  __int64 v21; // x1
  AssetLoadWrapper_o *assetManagerWrapper; // x0
  const MethodInfo *v23; // x2

  if ( (byte_41898DF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, finishCallback);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&Method_AtlasManagerUnit_LoadEnd__, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_41898DF = 1;
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
    assetManagerWrapper = (AssetLoadWrapper_o *)sub_B2C728(v11);
    goto LABEL_20;
  }
  this->fields.LoadFinishCallback = v11;
  sub_B2C2F8(
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
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_AtlasManagerUnit_LoadEnd__, 0LL);
  if ( !loadWrapper )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(assetPath, v20, loadParallelMax, 0LL) )
      goto LABEL_18;
    return;
  }
  assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
LABEL_20:
    sub_B2C434(assetManagerWrapper, v21);
  if ( !AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, assetPath, v20, loadParallelMax, 0LL) )
  {
LABEL_18:
    this->fields.IsLoading = 0;
    AtlasManagerUnit__LoadEnd(this, 0LL, v23);
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    sub_B2C2F8(p_LoadFinishCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_41898E0 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_41898E0 = 1;
  }
  loadWrapper = this->fields.loadWrapper;
  if ( loadWrapper )
  {
    assetManagerWrapper = loadWrapper->fields.assetManagerWrapper;
    if ( !assetManagerWrapper )
      sub_B2C434(0LL, method);
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
      AssetManager__releaseAsset_30152684(assetData, 0LL);
    }
  }
  this->fields.atlasList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.atlasList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.assetData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v13, v14, v15, v16, v17, v18);
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
            v16 = sub_B2C460(IsNullOrEmpty);
            sub_B2C400(v16, 0LL);
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
      sub_B2C434(IsNullOrEmpty, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  struct UIAtlas_array *atlasList; // x19
  int max_length; // w8
  __int64 v14; // x22
  UIAtlas_o *v15; // x0
  AtlasManagerUnit___c_c *v16; // x0
  struct AtlasManagerUnit___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x21
  System_String_o *v19; // x20
  Il2CppObject *v20; // x22
  struct AtlasManagerUnit___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_string__o *v28; // x0
  __int64 v30; // x0

  if ( (byte_41898E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_UIAtlas__string___, spriteName);
    sub_B2C35C(&Method_System_Func_UIAtlas__string___ctor__, v5);
    sub_B2C35C(&System_Func_UIAtlas__string__TypeInfo, v6);
    sub_B2C35C(&Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__, v7);
    sub_B2C35C(&AtlasManagerUnit___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_699/*","*/, v9);
    byte_41898E1 = 1;
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
    if ( (BYTE3(AtlasManagerUnit___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManagerUnit___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManagerUnit___c_TypeInfo);
      v16 = AtlasManagerUnit___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
    v19 = (System_String_o *)StringLiteral_699/*","*/;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = AtlasManagerUnit___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_UIAtlas__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__11_0,
        v20,
        Method_AtlasManagerUnit___c__ValidateLoadSprite_b__11_0__,
        (const MethodInfo_2713350 *)Method_System_Func_UIAtlas__string___ctor__);
      v21 = AtlasManagerUnit___c_TypeInfo->static_fields;
      v21->__9__11_0 = (struct System_Func_UIAtlas__string__o *)_9__11_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v21->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)atlasList,
                                                                (System_Func_TSource__TResult__o *)_9__11_0,
                                                                (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_UIAtlas__string___);
    System_String__Join_44360976(v19, v28, 0LL);
    return 0;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
    {
      v30 = sub_B2C460(IsNullOrEmpty);
      sub_B2C400(v30, 0LL);
    }
    v15 = atlasList->m_Items[v14];
    if ( !v15 )
      sub_B2C434(0LL, v11);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BD3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManagerUnit___c_TypeInfo, v1);
    byte_4186BD3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AtlasManagerUnit___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AtlasManagerUnit___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
}