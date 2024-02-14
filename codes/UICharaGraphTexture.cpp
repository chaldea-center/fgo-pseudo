void __fastcall UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_421BD8D & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_421BD8D = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall UICharaGraphTexture__EndLoadAsset(
        UICharaGraphTexture_o *this,
        AssetData_o *assetMain,
        const MethodInfo *method)
{
  System_String_o *loadName; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssetData_o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *callbackFunc; // x20

  if ( (byte_421BD83 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, assetMain);
    byte_421BD83 = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__compAssetStorage_29513976(assetMain, loadName, 0LL) )
      {
        v12 = this->fields.assetMain;
        if ( v12 )
        {
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_29516400(v12, 0LL);
        }
        this->fields.assetMain = assetMain;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.assetMain,
          (System_Int32_array **)assetMain,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this->fields.loadName = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadName, 0LL, v13, v14, v15, v16, v17, v18);
        UICharaGraphTexture__SetFrame(this, v19);
        UICharaGraphTexture__SetTexture(this, v20);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
          System_Action__Invoke(callbackFunc, 0LL);
        }
      }
    }
  }
}


void __fastcall UICharaGraphTexture__ExecuteCharaGraphFadeout(
        UICharaGraphTexture_o *this,
        float duration,
        System_Action_o *finishAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  void *bodyTexture; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventDelegate__o *v24; // x20
  EventDelegate_Callback_o *v25; // x21

  if ( (byte_421BD8A & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, finishAction);
    sub_B0D8A4(&EventDelegate_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__, v9);
    sub_B0D8A4(&UICharaGraphTexture___c__DisplayClass49_0_TypeInfo, v10);
    byte_421BD8A = 1;
  }
  v11 = sub_B0D974(UICharaGraphTexture___c__DisplayClass49_0_TypeInfo, finishAction, method);
  UICharaGraphTexture___c__DisplayClass49_0___ctor((UICharaGraphTexture___c__DisplayClass49_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = finishAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)finishAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    bodyTexture = this->fields.bodyTexture;
    if ( bodyTexture )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bodyTexture, 0LL);
      TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
      TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0LL);
      bodyTexture = this->fields.nameTexture;
      if ( bodyTexture )
      {
        v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bodyTexture, 0LL);
        bodyTexture = TweenAlpha__Begin(v21, duration, 0.0, 0LL);
        if ( !*(_QWORD *)(v11 + 16) )
          return;
        if ( bodyTexture )
        {
          v24 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)bodyTexture + 8);
          v25 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v22, v23);
          EventDelegate_Callback___ctor(
            v25,
            (Il2CppObject *)v11,
            Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__,
            0LL);
          if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventDelegate_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          }
          EventDelegate__Set_28893376(v24, v25, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_B0D97C(bodyTexture);
  }
}


void __fastcall UICharaGraphTexture__ExecuteNameCrossFade(
        UICharaGraphTexture_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *name2Texture; // x20
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_421BD87 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421BD87 = 1;
  }
  if ( this->fields.realNameCheck == 3 )
  {
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0LL, 0LL) )
    {
      nameTexture = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( nameTexture )
      {
        v8 = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
        TweenAlpha__Begin(v8, duration, 1.0, 0LL);
        return;
      }
LABEL_12:
      sub_B0D97C(nameTexture);
    }
  }
}


void __fastcall UICharaGraphTexture__ExecuteSpriteFadein(
        UICharaGraphTexture_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421BD8B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421BD8B = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
}


void __fastcall UICharaGraphTexture__ExecuteSpriteFadeout(
        UICharaGraphTexture_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421BD89 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421BD89 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
}


void __fastcall UICharaGraphTexture__ExecuteSpriteFadeoutForce(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Object_o *v5; // x20
  bool v6; // w0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_421BD88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421BD88 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( v6 )
    {
      v8 = this->fields.spriteBase;
      if ( !v8 )
        goto LABEL_26;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v8,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_26;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        0.0);
    }
    nameTexture = (UnityEngine_Object_o *)this->fields.nameTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameTexture, 0LL, 0LL) )
    {
      v8 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v8 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v8->klass[1]._1.castClass)(
          v8,
          v8->klass[1]._1.declaringType,
          0.0);
        return;
      }
LABEL_26:
      sub_B0D97C(v8);
    }
  }
}


void __fastcall UICharaGraphTexture__InitSprite(
        UICharaGraphTexture_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_421BD8C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sprite);
    byte_421BD8C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( v4 )
  {
    if ( !sprite )
      sub_B0D97C(v4);
    UISprite__set_spriteName(sprite, 0LL, 0LL);
  }
}


void __fastcall UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v12; // x1
  System_Delegate_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  void *v20; // x8
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v23; // x1
  System_String_o *v24; // x23
  struct System_Action_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  AssetLoader_LoadEndDataHandler_o *v41; // x21

  if ( (byte_421BD81 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callbackFunc);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&Method_UICharaGraphTexture_EndLoadAsset__, v7);
    byte_421BD81 = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0LL);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_24034044(this->fields.imageSvtId, 0LL);
  v10 = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_43837244(loadName, v10, 0LL) )
    {
      if ( !callbackFunc )
      {
LABEL_12:
        UICharaGraphTexture__SetBeforeFrame(this, v12);
        return;
      }
      v13 = System_Delegate__Combine(
              (System_Delegate_o *)this->fields.callbackFunc,
              (System_Delegate_o *)callbackFunc,
              0LL);
      v20 = v13;
      if ( !v13 || (System_Action_c *)v13->klass == System_Action_TypeInfo )
      {
        this->fields.callbackFunc = (struct System_Action_o *)v13;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.callbackFunc,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        goto LABEL_12;
      }
      goto LABEL_31;
    }
    v24 = this->fields.loadName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v24, 0LL);
  }
  else
  {
    assetMain = this->fields.assetMain;
    if ( assetMain )
    {
      name = assetMain->fields.name;
      if ( !name )
        goto LABEL_32;
      if ( System_String__Equals_43837244(name, v10, 0LL) )
      {
        UICharaGraphTexture__SetFrame(this, v9);
        UICharaGraphTexture__SetTexture(this, v23);
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
        return;
      }
    }
  }
  if ( callbackFunc )
  {
    v25 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callbackFunc,
                                      0LL);
    v20 = v25;
    if ( v25 && v25->klass != System_Action_TypeInfo )
    {
LABEL_31:
      sub_B0DC70(v20);
LABEL_32:
      sub_B0D97C(name);
    }
    this->fields.callbackFunc = v25;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  UICharaGraphTexture__SetBeforeFrame(this, v9);
  this->fields.loadName = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadName,
    (System_Int32_array **)v10,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = this->fields.loadName;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40);
  AssetLoader_LoadEndDataHandler___ctor(v41, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v38, v41, 1, 0LL);
}


// attributes: thunk
void __fastcall UICharaGraphTexture__OnDestroy(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UICharaGraphTexture__ReleaseCharacter(this, method);
}


void __fastcall UICharaGraphTexture__ReleaseCharacter(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *bodyTexture; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *loadName; // x20
  BattleServantConfConponent_o *p_loadName; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_421BD74 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421BD74 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_28;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( !v5 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0LL);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))v5->klass[2]._1.gc_desc)(
        v5,
        0LL,
        v5->klass[2]._1.name);
      goto LABEL_17;
    }
LABEL_28:
    sub_B0D97C(v5);
  }
LABEL_17:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(assetMain, 0LL);
    this->fields.assetMain = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetMain, 0LL, v8, v9, v10, v11, v12, v13);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (BattleServantConfConponent_o *)&this->fields.loadName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(loadName, 0LL);
    p_loadName->klass = 0LL;
    sub_B0D840(p_loadName, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall UICharaGraphTexture__SetActive(UICharaGraphTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0LL)) == 0LL )
  {
    sub_B0D97C(bodyTexture);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0LL);
}


void __fastcall UICharaGraphTexture__SetBeforeFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  const MethodInfo *v4; // x1

  nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
  if ( !nameTexture
    || (nameTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nameTexture, 0LL)) == 0LL )
  {
    sub_B0D97C(nameTexture);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nameTexture, 0LL) )
    UICharaGraphTexture__SetFrame(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetCharacter(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        System_Action_o *callbackFunc,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v15; // x1
  void *Instance; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w8
  int32_t v19; // w8
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_421BD75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_421BD75 = 1;
  }
  UICharaGraphRender__SetCharacter(
    (UICharaGraphRender_o *)this,
    svtId,
    limitCount,
    exceedCount,
    isOwn,
    0,
    changeNameType,
    0,
    v20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    v18 = *((_DWORD *)Instance + 11);
    this->fields.adjustAtk = 0;
    this->fields.atk = v18;
  }
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    v19 = *((_DWORD *)Instance + 9);
    this->fields.adjustHp = 0;
    this->fields.hp = v19;
  }
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v17);
}


void __fastcall UICharaGraphTexture__SetCharacter_35242648(
        UICharaGraphTexture_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t v10; // w0
  const MethodInfo *v11; // x2
  int32_t adjustAtk; // w9
  int32_t adjustHp; // w9
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD76 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_421BD76 = 1;
  }
  if ( !userSvtEntity )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.limitCount, 0LL);
  UICharaGraphRender__SetCharacter(
    v6,
    v9,
    v10,
    userSvtEntity->fields.exceedCount,
    1,
    userSvtEntity->fields.lv,
    0,
    0,
    v14);
  if ( (v6->fields.atk & 0x80000000) == 0 )
  {
    adjustAtk = userSvtEntity->fields.adjustAtk;
    v6->fields.atk = userSvtEntity->fields.atk;
    v6->fields.adjustAtk = adjustAtk;
  }
  if ( (v6->fields.hp & 0x80000000) == 0 )
  {
    adjustHp = userSvtEntity->fields.adjustHp;
    v6->fields.hp = userSvtEntity->fields.hp;
    v6->fields.adjustHp = adjustHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCharacter_35242912(
        UICharaGraphTexture_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        int32_t changeNameType,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v10; // x20
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w24
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int32_t adjustAtk; // w9
  int32_t adjustHp; // w9
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v10 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD77 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_421BD77 = 1;
  }
  if ( !userSvtEntity )
    sub_B0D97C(this);
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.limitCount, 0LL);
  UICharaGraphRender__SetCharacter_35232504(
    v10,
    v13,
    v14,
    imageLimitCount,
    userSvtEntity->fields.exceedCount,
    userSvtEntity->fields.lv,
    changeNameType,
    0,
    v18);
  if ( (v10->fields.atk & 0x80000000) == 0 )
  {
    adjustAtk = userSvtEntity->fields.adjustAtk;
    v10->fields.atk = userSvtEntity->fields.atk;
    v10->fields.adjustAtk = adjustAtk;
  }
  if ( (v10->fields.hp & 0x80000000) == 0 )
  {
    adjustHp = userSvtEntity->fields.adjustHp;
    v10->fields.hp = userSvtEntity->fields.hp;
    v10->fields.adjustHp = adjustHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v10, callbackFunc, v15);
}


void __fastcall UICharaGraphTexture__SetCharacter_35243192(
        UICharaGraphTexture_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  const MethodInfo *v10; // x2
  int32_t v11; // w8
  int32_t v12; // w8
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]
  int32_t atk; // [xsp+Ch] [xbp-34h] BYREF
  int32_t hp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD78 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userSvtCollectionEntity);
    byte_421BD78 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
  UICharaGraphRender__SetCharacter(
    v6,
    v9,
    userSvtCollectionEntity->fields.maxLimitCount,
    0,
    1,
    userSvtCollectionEntity->fields.maxLv,
    0,
    0,
    v13);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0LL);
  if ( (v6->fields.atk & 0x80000000) == 0 )
  {
    v11 = atk;
    v6->fields.adjustAtk = 0;
    v6->fields.atk = v11;
  }
  if ( (v6->fields.hp & 0x80000000) == 0 )
  {
    v12 = hp[0];
    v6->fields.adjustHp = 0;
    v6->fields.hp = v12;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void __fastcall UICharaGraphTexture__SetCharacter_35243464(
        UICharaGraphTexture_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  int32_t v14; // w8
  const MethodInfo *v15; // [xsp+0h] [xbp-50h]
  int32_t atk; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t hp[2]; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD79 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userSvtCollectionEntity);
    byte_421BD79 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_B0D97C(this);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
  UICharaGraphRender__SetCharacter_35232504(
    v8,
    v11,
    userSvtCollectionEntity->fields.maxLimitCount,
    imageLimitCount,
    0,
    userSvtCollectionEntity->fields.maxLv,
    0,
    0,
    v15);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0LL);
  if ( (v8->fields.atk & 0x80000000) == 0 )
  {
    v13 = atk;
    v8->fields.adjustAtk = 0;
    v8->fields.atk = v13;
  }
  if ( (v8->fields.hp & 0x80000000) == 0 )
  {
    v14 = hp[0];
    v8->fields.adjustHp = 0;
    v8->fields.hp = v14;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v12);
}


void __fastcall UICharaGraphTexture__SetCharacter_35243740(
        UICharaGraphTexture_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  int32_t limitCount; // w22
  int32_t v11; // w23
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7A & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      servantLeaderInfo);
    byte_421BD7A = 1;
  }
  if ( !servantLeaderInfo )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
  limitCount = servantLeaderInfo->fields.limitCount;
  v11 = v9;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
  UICharaGraphRender__SetCharacter_35232504(
    v6,
    v11,
    limitCount,
    CardImageLimitCount,
    servantLeaderInfo->fields.exceedCount,
    servantLeaderInfo->fields.lv,
    0,
    0,
    v14);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v13);
}


void __fastcall UICharaGraphTexture__SetCharacter_35243956(
        UICharaGraphTexture_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  int32_t adjustAtk; // w9
  int32_t adjustHp; // w9
  const MethodInfo *v15; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7B & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      servantLeaderInfo);
    byte_421BD7B = 1;
  }
  if ( !servantLeaderInfo )
    sub_B0D97C(this);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
  UICharaGraphRender__SetCharacter_35232504(
    v8,
    v11,
    servantLeaderInfo->fields.limitCount,
    imageLimitCount,
    servantLeaderInfo->fields.exceedCount,
    servantLeaderInfo->fields.lv,
    0,
    0,
    v15);
  if ( (v8->fields.atk & 0x80000000) == 0 )
  {
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v8->fields.atk = servantLeaderInfo->fields.atk;
    v8->fields.adjustAtk = adjustAtk;
  }
  if ( (v8->fields.hp & 0x80000000) == 0 )
  {
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v8->fields.hp = servantLeaderInfo->fields.hp;
    v8->fields.adjustHp = adjustHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v12);
}


void __fastcall UICharaGraphTexture__SetCharacter_35244196(
        UICharaGraphTexture_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  _BOOL4 v11; // w22
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7C & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    byte_421BD7C = 1;
  }
  if ( !equipTargetInfo )
    sub_B0D97C(this);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  v11 = isNpcFollowerServantEquip;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
  UICharaGraphRender__SetCharacter(v8, v12, equipTargetInfo->fields.limitCount, 0, 0, 0, 0, v11, v14);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v13);
}


void __fastcall UICharaGraphTexture__SetCharacter_35244400(
        UICharaGraphTexture_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v10; // x20
  __int64 v11; // x24
  __int64 v12; // x25
  _BOOL4 v13; // w23
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int32_t atk; // w8
  int32_t hp; // w8
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v10 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7D & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    byte_421BD7D = 1;
  }
  if ( !equipTargetInfo )
    sub_B0D97C(this);
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  v13 = isNpcFollowerServantEquip;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  UICharaGraphRender__SetCharacter_35232504(
    v10,
    v14,
    equipTargetInfo->fields.limitCount,
    imageLimitCount,
    0,
    0,
    0,
    v13,
    v18);
  if ( (v10->fields.atk & 0x80000000) == 0 )
  {
    atk = equipTargetInfo->fields.atk;
    v10->fields.adjustAtk = 0;
    v10->fields.atk = atk;
  }
  if ( (v10->fields.hp & 0x80000000) == 0 )
  {
    hp = equipTargetInfo->fields.hp;
    v10->fields.adjustHp = 0;
    v10->fields.hp = hp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v10, callbackFunc, v15);
}


void __fastcall UICharaGraphTexture__SetCommand(
        UICharaGraphTexture_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7E & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userCommandCodeEntity);
    byte_421BD7E = 1;
  }
  if ( !userCommandCodeEntity )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35244812(
        UICharaGraphTexture_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD7F & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userCommandCodeCollectionEntity);
    byte_421BD7F = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35244968(
        UICharaGraphTexture_o *this,
        CommandCodeEntity_o *commandCodeEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_421BD80 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B0D8A4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      commandCodeEntity);
    byte_421BD80 = 1;
  }
  if ( !commandCodeEntity )
    sub_B0D97C(this);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35245124(
        UICharaGraphTexture_o *this,
        int32_t commandCodeId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  UICharaGraphRender__SetCommand((UICharaGraphRender_o *)this, commandCodeId, (const MethodInfo *)callbackFunc);
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetDepth(UICharaGraphTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0
  UnityEngine_Object_o *name2Texture; // x22
  int32_t v7; // w20

  if ( (byte_421BD86 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&d);
    byte_421BD86 = 1;
  }
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d, 0LL);
  baseSprite = (UIWidget_o *)this->fields.bodyTexture;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 1, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameTopSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 2, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameBottomSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 2, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameLeftSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 3, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameRightSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 3, 0LL);
  baseSprite = (UIWidget_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 4, 0LL);
  baseSprite = (UIWidget_o *)this->fields.classSprite;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 4, 0LL);
  baseSprite = (UIWidget_o *)this->fields.nameTexture;
  if ( !baseSprite )
    goto LABEL_21;
  UIWidget__set_depth(baseSprite, d + 5, 0LL);
  name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(name2Texture, 0LL, 0LL) )
  {
    baseSprite = (UIWidget_o *)this->fields.name2Texture;
    if ( !baseSprite )
      goto LABEL_21;
    UIWidget__set_depth(baseSprite, d + 5, 0LL);
  }
  baseSprite = (UIWidget_o *)this->fields.attackLabel;
  if ( !baseSprite
    || (v7 = d + 6, UIWidget__set_depth(baseSprite, v7, 0LL), (baseSprite = (UIWidget_o *)this->fields.hpLabel) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(baseSprite);
  }
  UIWidget__set_depth(baseSprite, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetExCharaGraph(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v4; // w21
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  struct System_String_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_421BD85 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_UICharaGraphTexture_EndLoadAsset__, v10);
    byte_421BD85 = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v12 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0LL);
  this->fields.loadName = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadName,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
  AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v21, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *frameName; // x20
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s14
  UICharaGraphTexture_o *v25; // x0
  const MethodInfo *v26; // x2
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3
  float v31; // s11
  float v32; // s12
  float v33; // s13
  float v34; // s15
  UISprite_o *frameLeftSprite; // x0
  int32_t *p_baseKind; // x23
  int32_t baseKind; // w22
  UISprite_o *v38; // x21
  System_String_o *v39; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v41; // x0
  UISprite_o *v42; // x21
  System_String_o *v43; // x0
  UISprite_o *v44; // x21
  System_String_o *v45; // x0
  UISprite_o *v46; // x20
  const MethodInfo *v47; // x1
  System_String_o *v48; // x0
  UISprite_o *classSprite; // x20
  const MethodInfo *v50; // x1
  System_String_o *v51; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v53; // x20
  UISprite_o *frameTopSprite; // x21
  System_String_o *v55; // x22
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v57; // x0
  const MethodInfo *v58; // x1
  UISprite_o *raritySprite; // x20
  UISprite_o *v60; // x21
  System_String_o *v61; // x22
  UISprite_o *v62; // x21
  System_String_o *v63; // x0
  UISprite_o *v64; // x20
  const MethodInfo *v65; // x1
  System_String_o *v66; // x0
  System_String_o *v67; // x21
  System_String_o *v68; // x1
  struct UILabel_o **p_attackLabel; // x21
  int32_t atk; // w20
  BalanceConfig_c *v71; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v73; // w21
  UILabel_o *attackLabel; // x20
  System_String_o *v75; // x1
  struct UILabel_o *hpLabel; // x20
  int v77; // w21
  bool IsKeepServantEquip; // w0
  UILabel_o *v79; // x20
  int32_t v80; // w22
  bool v81; // w8
  System_String_o *v82; // x1
  int32_t hp; // w22
  System_String_o *v84; // x1
  __int64 v85; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421BD82 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v5);
    sub_B0D8A4(&StringLiteral_11026/*"R"*/, v6);
    sub_B0D8A4(&StringLiteral_18134/*"e"*/, v7);
    sub_B0D8A4(&StringLiteral_17212/*"c"*/, v8);
    sub_B0D8A4(&StringLiteral_13348/*"T"*/, v9);
    sub_B0D8A4(&StringLiteral_8387/*"L"*/, v10);
    sub_B0D8A4(&StringLiteral_2227/*"B"*/, v11);
    sub_B0D8A4(&StringLiteral_18342/*"eframeB_hp"*/, v12);
    sub_B0D8A4(&StringLiteral_19663/*"img_ribbon_noblephantasmup"*/, v13);
    sub_B0D8A4(&StringLiteral_18341/*"eframeB_atk"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_421BD82 = 1;
  }
  v85 = 0LL;
  frameName = this->fields.frameName;
  if ( this->fields.adjustAtk <= 0 )
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_yellow(0LL);
  v21 = v17;
  v22 = v18;
  v23 = v19;
  v24 = v20;
  if ( this->fields.adjustHp <= 0 )
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_yellow(0LL);
  v31 = v27;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  UICharaGraphTexture__InitSprite(v25, this->fields.materialTdSprite, v26);
  if ( System_String__IsNullOrEmpty(frameName, 0LL) )
  {
    frameLeftSprite = this->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = this->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = this->fields.frameTopSprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = this->fields.frameBottomSprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = this->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = this->fields.classSprite;
    if ( !frameLeftSprite )
      goto LABEL_100;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    p_baseKind = &this->fields.baseKind;
  }
  else
  {
    baseKind = this->fields.baseKind;
    p_baseKind = &this->fields.baseKind;
    if ( baseKind == 1 )
    {
      frameLeftSprite = this->fields.frameLeftSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      frameLeftSprite = this->fields.frameRightSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      frameLeftSprite = this->fields.classSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      frameTopSprite = this->fields.frameTopSprite;
      v55 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_18134/*"e"*/,
              frameName,
              (System_String_o *)StringLiteral_13348/*"T"*/,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v55, 0LL);
      frameBottomSprite = this->fields.frameBottomSprite;
      v57 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_18134/*"e"*/,
              frameName,
              (System_String_o *)StringLiteral_2227/*"B"*/,
              0LL);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v57, 0LL);
      raritySprite = this->fields.raritySprite;
      if ( this->fields.saintGraphType == 1 )
      {
        if ( !raritySprite )
          goto LABEL_100;
        UISprite__set_spriteName(this->fields.raritySprite, 0LL, 0LL);
        frameLeftSprite = this->fields.equipAtkSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
        frameLeftSprite = this->fields.equipHpSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
        v24 = 0.0;
        v34 = 0.0;
      }
      else
      {
        v67 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v58);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCharaGraphaOption(raritySprite, v67, 0LL);
        frameLeftSprite = this->fields.raritySprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
        AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_18341/*"eframeB_atk"*/, 0LL);
        frameLeftSprite = this->fields.equipAtkSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
        AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_18342/*"eframeB_hp"*/, 0LL);
        frameLeftSprite = this->fields.equipHpSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
    }
    else if ( baseKind )
    {
      frameLeftSprite = this->fields.frameLeftSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      frameLeftSprite = this->fields.frameRightSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      v60 = this->fields.frameTopSprite;
      if ( baseKind == 2 )
      {
        v61 = System_String__Concat_43852188(
                (System_String_o *)StringLiteral_17212/*"c"*/,
                frameName,
                (System_String_o *)StringLiteral_13348/*"T"*/,
                0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCharaGraphaOption(v60, v61, 0LL);
        v62 = this->fields.frameBottomSprite;
        v63 = System_String__Concat_43852188(
                (System_String_o *)StringLiteral_17212/*"c"*/,
                frameName,
                (System_String_o *)StringLiteral_2227/*"B"*/,
                0LL);
        AtlasManager__SetCharaGraphaOption(v62, v63, 0LL);
        v64 = this->fields.raritySprite;
        v66 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v65);
        AtlasManager__SetCharaGraphaOption(v64, v66, 0LL);
        frameLeftSprite = this->fields.raritySprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        if ( !v60 )
          goto LABEL_100;
        UISprite__set_spriteName(this->fields.frameTopSprite, 0LL, 0LL);
        frameLeftSprite = this->fields.frameBottomSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
        frameLeftSprite = this->fields.raritySprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
      }
      frameLeftSprite = this->fields.classSprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    }
    else
    {
      v38 = this->fields.frameLeftSprite;
      v39 = System_String__Concat_43849904(frameName, (System_String_o *)StringLiteral_8387/*"L"*/, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCharaGraphaOption(v38, v39, 0LL);
      frameRightSprite = this->fields.frameRightSprite;
      v41 = System_String__Concat_43849904(frameName, (System_String_o *)StringLiteral_11026/*"R"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v41, 0LL);
      v42 = this->fields.frameTopSprite;
      v43 = System_String__Concat_43849904(frameName, (System_String_o *)StringLiteral_13348/*"T"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(v42, v43, 0LL);
      v44 = this->fields.frameBottomSprite;
      v45 = System_String__Concat_43849904(frameName, (System_String_o *)StringLiteral_2227/*"B"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(v44, v45, 0LL);
      v46 = this->fields.raritySprite;
      v48 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v47);
      AtlasManager__SetCharaGraphaOption(v46, v48, 0LL);
      frameLeftSprite = this->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      classSprite = this->fields.classSprite;
      v51 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)this, v50);
      AtlasManager__SetCharaGraphaOption(classSprite, v51, 0LL);
      if ( SvtType__IsSvtMaterialTd(this->fields.svtType, 0LL) )
      {
        materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
        {
          v53 = this->fields.materialTdSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCharaGraphaOption(v53, (System_String_o *)StringLiteral_19663/*"img_ribbon_noblephantasmup"*/, 0LL);
        }
      }
    }
  }
  if ( *p_baseKind != 2
    && this->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(this->fields.svtType, 0LL) )
  {
    if ( SvtType__IsStatusUp(this->fields.svtType, 0LL) )
    {
      atk = this->fields.atk;
      v71 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v71 = BalanceConfig_TypeInfo;
      }
      static_fields = v71->static_fields;
      v73 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v85) = static_fields->StatusUpAdjustHp * this->fields.hp;
      HIDWORD(v85) = v73;
      attackLabel = this->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v85 + 4, 0LL);
      v75 = (System_String_o *)frameLeftSprite;
      if ( v73 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_43849904(
                                          (System_String_o *)StringLiteral_697/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v75 = (System_String_o *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, v75, 0LL);
        hpLabel = this->fields.hpLabel;
        v77 = v85;
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v85, 0LL);
        v68 = (System_String_o *)frameLeftSprite;
        if ( v77 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_43849904(
                                            (System_String_o *)StringLiteral_697/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0LL);
          v68 = (System_String_o *)frameLeftSprite;
        }
        if ( hpLabel )
        {
          p_attackLabel = &this->fields.attackLabel;
LABEL_99:
          frameLeftSprite = (UISprite_o *)hpLabel;
          goto LABEL_70;
        }
      }
LABEL_100:
      sub_B0D97C(frameLeftSprite);
    }
    IsKeepServantEquip = SvtType__IsKeepServantEquip(this->fields.svtType, 0LL);
    v79 = this->fields.attackLabel;
    v80 = this->fields.atk;
    v81 = IsKeepServantEquip;
    p_attackLabel = &this->fields.attackLabel;
    frameLeftSprite = (UISprite_o *)&this->fields.atk;
    if ( v81 )
    {
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
      v82 = (System_String_o *)frameLeftSprite;
      if ( v80 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_43849904(
                                          (System_String_o *)StringLiteral_697/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v82 = (System_String_o *)frameLeftSprite;
      }
      if ( !v79 )
        goto LABEL_100;
      UILabel__set_text(v79, v82, 0LL);
      hpLabel = this->fields.hpLabel;
      hp = this->fields.hp;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)this + 448, 0LL);
      v68 = (System_String_o *)frameLeftSprite;
      if ( hp >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_43849904(
                                          (System_String_o *)StringLiteral_697/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
LABEL_96:
        v68 = (System_String_o *)frameLeftSprite;
      }
    }
    else
    {
      if ( (v80 & 0x80000000) != 0 )
      {
        v84 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v79 )
          goto LABEL_100;
      }
      else
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
        v84 = (System_String_o *)frameLeftSprite;
        if ( !v79 )
          goto LABEL_100;
      }
      UILabel__set_text(v79, v84, 0LL);
      hpLabel = this->fields.hpLabel;
      if ( (this->fields.hp & 0x80000000) == 0 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)this + 448, 0LL);
        goto LABEL_96;
      }
      v68 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( !hpLabel )
      goto LABEL_100;
    goto LABEL_99;
  }
  frameLeftSprite = (UISprite_o *)this->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  frameLeftSprite = (UISprite_o *)this->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_100;
  v68 = (System_String_o *)StringLiteral_1/*""*/;
  p_attackLabel = &this->fields.attackLabel;
LABEL_70:
  UILabel__set_text((UILabel_o *)frameLeftSprite, v68, 0LL);
  frameLeftSprite = (UISprite_o *)*p_attackLabel;
  if ( !*p_attackLabel )
    goto LABEL_100;
  v86.fields.r = v21;
  v86.fields.g = v22;
  v86.fields.b = v23;
  v86.fields.a = v24;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v86, 0LL);
  frameLeftSprite = (UISprite_o *)this->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_100;
  v87.fields.r = v31;
  v87.fields.g = v32;
  v87.fields.b = v33;
  v87.fields.a = v34;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v87, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetTexture(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UITexture_o *bodyTexture; // x20
  __int64 gameObject; // x0
  UITexture_o *v6; // x20
  const MethodInfo *v7; // x1
  int v8; // s0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *NameTexture; // x20
  char v14; // w21
  const MethodInfo *v15; // x1
  struct UITexture_o *v16; // x20
  UnityEngine_Object_o *name2Texture; // x20
  const MethodInfo *v18; // x2
  struct UITexture_o *v19; // x20
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  struct UITexture_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Rect_o NameUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421BD84 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421BD84 = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (__int64)UICharaGraphRender__GetBodyTexture((UICharaGraphRender_o *)this, this->fields.assetMain, v2);
  if ( !bodyTexture )
    goto LABEL_34;
  ((void (__fastcall *)(struct UITexture_o *, __int64, Il2CppMethodPointer))bodyTexture->klass->vtable._27_set_mainTexture.method)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._28_get_shader.methodPtr);
  v6 = this->fields.bodyTexture;
  *(UnityEngine_Rect_o *)&v8 = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, v7);
  if ( !v6 )
    goto LABEL_34;
  UITexture__set_uvRect(v6, *(UnityEngine_Rect_o *)&v8, 0LL);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          v12);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(NameTexture, 0LL, 0LL);
  if ( !this->fields.nameTexture )
    goto LABEL_34;
  v14 = gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nameTexture, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  if ( (v14 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_34;
    gameObject = (*(__int64 (__fastcall **)(__int64, UnityEngine_Object_o *, _QWORD))(*(_QWORD *)gameObject + 744LL))(
                   gameObject,
                   NameTexture,
                   *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v16 = this->fields.nameTexture;
    if ( !v16 )
      goto LABEL_34;
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v16->fields.mRect, v15);
    UITexture__set_uvRect(v16, NameUvRect, 0LL);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v19 = this->fields.name2Texture;
          v20 = 0LL;
          if ( this->fields.realNameCheck == 3 )
          {
            gameObject = (__int64)UICharaGraphRender__GetTrueNameTexture(
                                    (UICharaGraphRender_o *)this,
                                    this->fields.assetMain,
                                    v18);
            v20 = gameObject;
          }
          if ( v19 )
          {
            gameObject = ((__int64 (__fastcall *)(struct UITexture_o *, __int64, Il2CppMethodPointer))v19->klass->vtable._27_set_mainTexture.method)(
                           v19,
                           v20,
                           v19->klass->vtable._28_get_shader.methodPtr);
            v22 = this->fields.name2Texture;
            if ( v22 )
            {
              v25 = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v22->fields.mRect, v21);
              UITexture__set_uvRect(v22, v25, 0LL);
              return;
            }
          }
        }
      }
LABEL_34:
      sub_B0D97C(gameObject);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_34;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
      gameObject,
      0LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v23 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_34;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
        gameObject,
        0LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetTweenColor(
        UICharaGraphTexture_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_B0D97C(0LL);
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIWidget__set_color(bodyTexture, v9, 0LL);
}


bool __fastcall UICharaGraphTexture__get_IsLoad(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0LL;
}


void __fastcall UICharaGraphTexture___c__DisplayClass49_0___ctor(
        UICharaGraphTexture___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UICharaGraphTexture___c__DisplayClass49_0___ExecuteCharaGraphFadeout_b__0(
        UICharaGraphTexture___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishAction, 0LL);
}