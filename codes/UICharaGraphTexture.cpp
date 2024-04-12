void __fastcall UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_42B73D4 & 1) == 0 )
  {
    sub_B52984(&UICharaGraphRender_TypeInfo);
    byte_42B73D4 = 1;
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

  if ( (byte_42B73CA & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B73CA = 1;
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
      if ( AssetManager__compAssetStorage_30357512(assetMain, loadName, 0LL) )
      {
        v12 = this->fields.assetMain;
        if ( v12 )
        {
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_30359936(v12, 0LL);
        }
        this->fields.assetMain = assetMain;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.assetMain,
          (System_Int32_array **)assetMain,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this->fields.loadName = 0LL;
        sub_B52920((BattleServantConfConponent_o *)&this->fields.loadName, 0LL, v13, v14, v15, v16, v17, v18);
        UICharaGraphTexture__SetFrame(this, v19);
        UICharaGraphTexture__SetTexture(this, v20);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
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
  __int64 v7; // x19
  void *bodyTexture; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_List_EventDelegate__o *v19; // x20
  EventDelegate_Callback_o *v20; // x21

  if ( (byte_42B73D1 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__);
    sub_B52984(&UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
    byte_42B73D1 = 1;
  }
  v7 = sub_B52A54(UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
  UICharaGraphTexture___c__DisplayClass49_0___ctor((UICharaGraphTexture___c__DisplayClass49_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = finishAction;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)finishAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bodyTexture, 0LL);
        bodyTexture = TweenAlpha__Begin(v18, duration, 0.0, 0LL);
        if ( !*(_QWORD *)(v7 + 16) )
          return;
        if ( bodyTexture )
        {
          v19 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)bodyTexture + 8);
          v20 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v20,
            (Il2CppObject *)v7,
            Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__,
            0LL);
          if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventDelegate_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          }
          EventDelegate__Set_29653788(v19, v20, 0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_B52A5C(bodyTexture, v9);
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

  if ( (byte_42B73CE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73CE = 1;
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
      sub_B52A5C(nameTexture, method);
    }
  }
}


void __fastcall UICharaGraphTexture__ExecuteSpriteFadein(
        UICharaGraphTexture_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42B73D2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73D2 = 1;
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
      sub_B52A5C(0LL, v6);
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
  __int64 v6; // x1
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42B73D0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73D0 = 1;
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
      sub_B52A5C(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
}


void __fastcall UICharaGraphTexture__ExecuteSpriteFadeoutForce(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Object_o *v4; // x20
  bool v5; // w0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_42B73CF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73CF = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( v5 )
    {
      v8 = this->fields.spriteBase;
      if ( !v8 )
        goto LABEL_26;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v8,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      sub_B52A5C(v8, v6);
    }
  }
}


void __fastcall UICharaGraphTexture__InitSprite(
        UICharaGraphTexture_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_42B73D3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73D3 = 1;
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
      sub_B52A5C(v4, v5);
    UISprite__set_spriteName(sprite, 0LL, 0LL);
  }
}


void __fastcall UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v9; // x1
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  void *v17; // x8
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v20; // x1
  System_String_o *v21; // x23
  struct System_Action_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42B73C8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_42B73C8 = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0LL);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_24902000(this->fields.imageSvtId, 0LL);
  v7 = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_44555656(loadName, v7, 0LL) )
    {
      if ( !callbackFunc )
      {
LABEL_12:
        UICharaGraphTexture__SetBeforeFrame(this, v9);
        return;
      }
      v10 = System_Delegate__Combine(
              (System_Delegate_o *)this->fields.callbackFunc,
              (System_Delegate_o *)callbackFunc,
              0LL);
      v17 = v10;
      if ( !v10 || (System_Action_c *)v10->klass == System_Action_TypeInfo )
      {
        this->fields.callbackFunc = (struct System_Action_o *)v10;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.callbackFunc,
          (System_Int32_array **)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        goto LABEL_12;
      }
      goto LABEL_31;
    }
    v21 = this->fields.loadName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v21, 0LL);
  }
  else
  {
    assetMain = this->fields.assetMain;
    if ( assetMain )
    {
      name = assetMain->fields.name;
      if ( !name )
        goto LABEL_32;
      if ( System_String__Equals_44555656(name, v7, 0LL) )
      {
        UICharaGraphTexture__SetFrame(this, v6);
        UICharaGraphTexture__SetTexture(this, v20);
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
        return;
      }
    }
  }
  if ( callbackFunc )
  {
    v22 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callbackFunc,
                                      0LL);
    v17 = v22;
    if ( v22 && v22->klass != System_Action_TypeInfo )
    {
LABEL_31:
      sub_B52D50(v17);
LABEL_32:
      sub_B52A5C(name, v6);
    }
    this->fields.callbackFunc = v22;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  UICharaGraphTexture__SetBeforeFrame(this, v6);
  this->fields.loadName = v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadName,
    (System_Int32_array **)v7,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = this->fields.loadName;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v36, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v35, v36, 1, 0LL);
}


// attributes: thunk
void __fastcall UICharaGraphTexture__OnDestroy(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UICharaGraphTexture__ReleaseCharacter(this, method);
}


void __fastcall UICharaGraphTexture__ReleaseCharacter(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
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

  if ( (byte_42B73BB & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73BB = 1;
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
    sub_B52A5C(v5, v4);
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
    AssetManager__releaseAsset_30359936(assetMain, 0LL);
    this->fields.assetMain = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.assetMain, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B52920(p_loadName, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetActive(UICharaGraphTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0LL)) == 0LL )
  {
    sub_B52A5C(bodyTexture, isActive);
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
    sub_B52A5C(nameTexture, method);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nameTexture, 0LL) )
    UICharaGraphTexture__SetFrame(this, v4);
}


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
  void *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t v18; // w8
  int32_t v19; // w8
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_42B73BC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B73BC = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v16);
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


void __fastcall UICharaGraphTexture__SetCharacter_35943888(
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
  if ( (byte_42B73BD & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73BD = 1;
  }
  if ( !userSvtEntity )
    sub_B52A5C(this, userSvtEntity);
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.limitCount, 0LL);
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


void __fastcall UICharaGraphTexture__SetCharacter_35944152(
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
  if ( (byte_42B73BE & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73BE = 1;
  }
  if ( !userSvtEntity )
    sub_B52A5C(this, userSvtEntity);
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.limitCount, 0LL);
  UICharaGraphRender__SetCharacter_35933744(
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


void __fastcall UICharaGraphTexture__SetCharacter_35944432(
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
  if ( (byte_42B73BF & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73BF = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_B52A5C(this, userSvtCollectionEntity);
  v8 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
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


void __fastcall UICharaGraphTexture__SetCharacter_35944704(
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
  if ( (byte_42B73C0 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C0 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_B52A5C(this, userSvtCollectionEntity);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
  UICharaGraphRender__SetCharacter_35933744(
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


void __fastcall UICharaGraphTexture__SetCharacter_35944980(
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
  if ( (byte_42B73C1 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C1 = 1;
  }
  if ( !servantLeaderInfo )
    sub_B52A5C(this, servantLeaderInfo);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  limitCount = servantLeaderInfo->fields.limitCount;
  v11 = v9;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
  UICharaGraphRender__SetCharacter_35933744(
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


void __fastcall UICharaGraphTexture__SetCharacter_35945196(
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
  if ( (byte_42B73C2 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C2 = 1;
  }
  if ( !servantLeaderInfo )
    sub_B52A5C(this, servantLeaderInfo);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  UICharaGraphRender__SetCharacter_35933744(
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


void __fastcall UICharaGraphTexture__SetCharacter_35945436(
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
  if ( (byte_42B73C3 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C3 = 1;
  }
  if ( !equipTargetInfo )
    sub_B52A5C(this, equipTargetInfo);
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
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
  UICharaGraphRender__SetCharacter(v8, v12, equipTargetInfo->fields.limitCount, 0, 0, 0, 0, v11, v14);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v13);
}


void __fastcall UICharaGraphTexture__SetCharacter_35945640(
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
  if ( (byte_42B73C4 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C4 = 1;
  }
  if ( !equipTargetInfo )
    sub_B52A5C(this, equipTargetInfo);
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  UICharaGraphRender__SetCharacter_35933744(
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
  if ( (byte_42B73C5 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C5 = 1;
  }
  if ( !userCommandCodeEntity )
    sub_B52A5C(this, userCommandCodeEntity);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35946052(
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
  if ( (byte_42B73C6 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C6 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_B52A5C(this, userCommandCodeCollectionEntity);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35946208(
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
  if ( (byte_42B73C7 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B73C7 = 1;
  }
  if ( !commandCodeEntity )
    sub_B52A5C(this, commandCodeEntity);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_35946364(
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

  if ( (byte_42B73CD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73CD = 1;
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
    sub_B52A5C(baseSprite, *(_QWORD *)&d);
  }
  UIWidget__set_depth(baseSprite, v7, 0LL);
}


void __fastcall UICharaGraphTexture__SetExCharaGraph(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v4; // w21
  int32_t v5; // w20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_String_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_42B73CC & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_42B73CC = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v8);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v9 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0LL);
  this->fields.loadName = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadName,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v16, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  System_String_o *frameName; // x20
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s14
  UICharaGraphTexture_o *v12; // x0
  const MethodInfo *v13; // x2
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s15
  MethodInfo *v22; // x1
  UISprite_o *frameLeftSprite; // x0
  int32_t *p_baseKind; // x23
  int32_t baseKind; // w22
  UISprite_o *v26; // x21
  System_String_o *v27; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v29; // x0
  UISprite_o *v30; // x21
  System_String_o *v31; // x0
  UISprite_o *v32; // x21
  System_String_o *v33; // x0
  UISprite_o *v34; // x20
  const MethodInfo *v35; // x1
  System_String_o *v36; // x0
  UISprite_o *classSprite; // x20
  const MethodInfo *v38; // x1
  System_String_o *v39; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v41; // x20
  UISprite_o *frameTopSprite; // x21
  System_String_o *v43; // x22
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v45; // x0
  UISprite_o *raritySprite; // x20
  UISprite_o *v47; // x21
  System_String_o *v48; // x22
  UISprite_o *v49; // x21
  System_String_o *v50; // x0
  UISprite_o *v51; // x20
  const MethodInfo *v52; // x1
  System_String_o *v53; // x0
  System_String_o *v54; // x21
  struct UILabel_o **p_attackLabel; // x21
  int32_t atk; // w20
  BalanceConfig_c *v57; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v59; // w21
  UILabel_o *attackLabel; // x20
  struct UILabel_o *hpLabel; // x20
  int v62; // w21
  bool IsKeepServantEquip; // w0
  UILabel_o *v64; // x20
  int32_t v65; // w22
  bool v66; // w8
  int32_t hp; // w22
  __int64 v68; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B73C9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_11086/*"R"*/);
    sub_B52984(&StringLiteral_18211/*"e"*/);
    sub_B52984(&StringLiteral_17279/*"c"*/);
    sub_B52984(&StringLiteral_13401/*"T"*/);
    sub_B52984(&StringLiteral_8413/*"L"*/);
    sub_B52984(&StringLiteral_2241/*"B"*/);
    sub_B52984(&StringLiteral_18419/*"eframeB_hp"*/);
    sub_B52984(&StringLiteral_19748/*"img_ribbon_noblephantasmup"*/);
    sub_B52984(&StringLiteral_18418/*"eframeB_atk"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B73C9 = 1;
  }
  v68 = 0LL;
  frameName = this->fields.frameName;
  if ( this->fields.adjustAtk <= 0 )
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_yellow(0LL);
  v8 = v4;
  v9 = v5;
  v10 = v6;
  v11 = v7;
  if ( this->fields.adjustHp <= 0 )
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_yellow(0LL);
  v18 = v14;
  v19 = v15;
  v20 = v16;
  v21 = v17;
  UICharaGraphTexture__InitSprite(v12, this->fields.materialTdSprite, v13);
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
      v43 = System_String__Concat_44570600(
              (System_String_o *)StringLiteral_18211/*"e"*/,
              frameName,
              (System_String_o *)StringLiteral_13401/*"T"*/,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v43, 0LL);
      frameBottomSprite = this->fields.frameBottomSprite;
      v45 = System_String__Concat_44570600(
              (System_String_o *)StringLiteral_18211/*"e"*/,
              frameName,
              (System_String_o *)StringLiteral_2241/*"B"*/,
              0LL);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v45, 0LL);
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
        v11 = 0.0;
        v21 = 0.0;
      }
      else
      {
        v54 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v22);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCharaGraphaOption(raritySprite, v54, 0LL);
        frameLeftSprite = this->fields.raritySprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
        AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_18418/*"eframeB_atk"*/, 0LL);
        frameLeftSprite = this->fields.equipAtkSprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
        AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_18419/*"eframeB_hp"*/, 0LL);
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
      v47 = this->fields.frameTopSprite;
      if ( baseKind == 2 )
      {
        v48 = System_String__Concat_44570600(
                (System_String_o *)StringLiteral_17279/*"c"*/,
                frameName,
                (System_String_o *)StringLiteral_13401/*"T"*/,
                0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetCharaGraphaOption(v47, v48, 0LL);
        v49 = this->fields.frameBottomSprite;
        v50 = System_String__Concat_44570600(
                (System_String_o *)StringLiteral_17279/*"c"*/,
                frameName,
                (System_String_o *)StringLiteral_2241/*"B"*/,
                0LL);
        AtlasManager__SetCharaGraphaOption(v49, v50, 0LL);
        v51 = this->fields.raritySprite;
        v53 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v52);
        AtlasManager__SetCharaGraphaOption(v51, v53, 0LL);
        frameLeftSprite = this->fields.raritySprite;
        if ( !frameLeftSprite )
          goto LABEL_100;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
          frameLeftSprite,
          frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        if ( !v47 )
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
      v26 = this->fields.frameLeftSprite;
      v27 = System_String__Concat_44568316(frameName, (System_String_o *)StringLiteral_8413/*"L"*/, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCharaGraphaOption(v26, v27, 0LL);
      frameRightSprite = this->fields.frameRightSprite;
      v29 = System_String__Concat_44568316(frameName, (System_String_o *)StringLiteral_11086/*"R"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v29, 0LL);
      v30 = this->fields.frameTopSprite;
      v31 = System_String__Concat_44568316(frameName, (System_String_o *)StringLiteral_13401/*"T"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(v30, v31, 0LL);
      v32 = this->fields.frameBottomSprite;
      v33 = System_String__Concat_44568316(frameName, (System_String_o *)StringLiteral_2241/*"B"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(v32, v33, 0LL);
      v34 = this->fields.raritySprite;
      v36 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, v35);
      AtlasManager__SetCharaGraphaOption(v34, v36, 0LL);
      frameLeftSprite = this->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_100;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      classSprite = this->fields.classSprite;
      v39 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)this, v38);
      AtlasManager__SetCharaGraphaOption(classSprite, v39, 0LL);
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
          v41 = this->fields.materialTdSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCharaGraphaOption(v41, (System_String_o *)StringLiteral_19748/*"img_ribbon_noblephantasmup"*/, 0LL);
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
      v57 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v57 = BalanceConfig_TypeInfo;
      }
      static_fields = v57->static_fields;
      v59 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v68) = static_fields->StatusUpAdjustHp * this->fields.hp;
      HIDWORD(v68) = v59;
      attackLabel = this->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v68 + 4, 0LL);
      v22 = (MethodInfo *)frameLeftSprite;
      if ( v59 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_44568316(
                                          (System_String_o *)StringLiteral_701/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v22 = (MethodInfo *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, (System_String_o *)v22, 0LL);
        hpLabel = this->fields.hpLabel;
        v62 = v68;
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v68, 0LL);
        v22 = (MethodInfo *)frameLeftSprite;
        if ( v62 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_44568316(
                                            (System_String_o *)StringLiteral_701/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0LL);
          v22 = (MethodInfo *)frameLeftSprite;
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
      sub_B52A5C(frameLeftSprite, v22);
    }
    IsKeepServantEquip = SvtType__IsKeepServantEquip(this->fields.svtType, 0LL);
    v64 = this->fields.attackLabel;
    v65 = this->fields.atk;
    v66 = IsKeepServantEquip;
    p_attackLabel = &this->fields.attackLabel;
    frameLeftSprite = (UISprite_o *)&this->fields.atk;
    if ( v66 )
    {
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
      v22 = (MethodInfo *)frameLeftSprite;
      if ( v65 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_44568316(
                                          (System_String_o *)StringLiteral_701/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v22 = (MethodInfo *)frameLeftSprite;
      }
      if ( !v64 )
        goto LABEL_100;
      UILabel__set_text(v64, (System_String_o *)v22, 0LL);
      hpLabel = this->fields.hpLabel;
      hp = this->fields.hp;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)this + 448, 0LL);
      v22 = (MethodInfo *)frameLeftSprite;
      if ( hp >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_44568316(
                                          (System_String_o *)StringLiteral_701/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
LABEL_96:
        v22 = (MethodInfo *)frameLeftSprite;
      }
    }
    else
    {
      if ( (v65 & 0x80000000) != 0 )
      {
        v22 = (MethodInfo *)StringLiteral_1/*""*/;
        if ( !v64 )
          goto LABEL_100;
      }
      else
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
        v22 = (MethodInfo *)frameLeftSprite;
        if ( !v64 )
          goto LABEL_100;
      }
      UILabel__set_text(v64, (System_String_o *)v22, 0LL);
      hpLabel = this->fields.hpLabel;
      if ( (this->fields.hp & 0x80000000) == 0 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)this + 448, 0LL);
        goto LABEL_96;
      }
      v22 = (MethodInfo *)StringLiteral_1/*""*/;
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
  v22 = (MethodInfo *)StringLiteral_1/*""*/;
  p_attackLabel = &this->fields.attackLabel;
LABEL_70:
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)v22, 0LL);
  frameLeftSprite = (UISprite_o *)*p_attackLabel;
  if ( !*p_attackLabel )
    goto LABEL_100;
  v69.fields.r = v8;
  v69.fields.g = v9;
  v69.fields.b = v10;
  v69.fields.a = v11;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v69, 0LL);
  frameLeftSprite = (UISprite_o *)this->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_100;
  v70.fields.r = v18;
  v70.fields.g = v19;
  v70.fields.b = v20;
  v70.fields.a = v21;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v70, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphTexture__SetTexture(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UITexture_o *bodyTexture; // x20
  __int64 gameObject; // x0
  const MethodInfo *v6; // x1
  UITexture_o *v7; // x20
  const MethodInfo *v8; // x1
  int v9; // s0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *NameTexture; // x20
  char v15; // w21
  struct UITexture_o *v16; // x20
  UnityEngine_Object_o *name2Texture; // x20
  const MethodInfo *v18; // x2
  struct UITexture_o *v19; // x20
  struct UITexture_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Rect_o NameUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B73CB & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B73CB = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (__int64)UICharaGraphRender__GetBodyTexture((UICharaGraphRender_o *)this, this->fields.assetMain, v2);
  if ( !bodyTexture )
    goto LABEL_34;
  ((void (__fastcall *)(struct UITexture_o *, __int64, Il2CppMethodPointer))bodyTexture->klass->vtable._27_set_mainTexture.method)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._28_get_shader.methodPtr);
  v7 = this->fields.bodyTexture;
  *(UnityEngine_Rect_o *)&v9 = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, v8);
  if ( !v7 )
    goto LABEL_34;
  UITexture__set_uvRect(v7, *(UnityEngine_Rect_o *)&v9, 0LL);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          v13);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(NameTexture, 0LL, 0LL);
  if ( !this->fields.nameTexture )
    goto LABEL_34;
  v15 = gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nameTexture, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  if ( (v15 & 1) != 0 )
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
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v16->fields.mRect, v6);
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
          v6 = 0LL;
          if ( this->fields.realNameCheck == 3 )
          {
            gameObject = (__int64)UICharaGraphRender__GetTrueNameTexture(
                                    (UICharaGraphRender_o *)this,
                                    this->fields.assetMain,
                                    v18);
            v6 = (const MethodInfo *)gameObject;
          }
          if ( v19 )
          {
            gameObject = ((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *, Il2CppMethodPointer))v19->klass->vtable._27_set_mainTexture.method)(
                           v19,
                           v6,
                           v19->klass->vtable._28_get_shader.methodPtr);
            v20 = this->fields.name2Texture;
            if ( v20 )
            {
              v23 = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v20->fields.mRect, v6);
              UITexture__set_uvRect(v20, v23, 0LL);
              return;
            }
          }
        }
      }
LABEL_34:
      sub_B52A5C(gameObject, v6);
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
    v21 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
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
  __int64 v8; // x1
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_B52A5C(0LL, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0LL);
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