void __fastcall UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4B461F8 & 1) == 0 )
  {
    sub_1BDB878(&UICharaGraphRender_TypeInfo, method);
    byte_4B461F8 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall UICharaGraphTexture__EndLoadAsset(
        UICharaGraphTexture_o *this,
        AssetData_o *assetMain,
        const MethodInfo *method)
{
  System_String_o *loadName; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4B461EE & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, assetMain);
    byte_4B461EE = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_39551848(assetMain, loadName, 0LL) )
      {
        v8 = this->fields.assetMain;
        if ( v8 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_39554172(v8, 0LL);
        }
        this->fields.assetMain = assetMain;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.assetMain, (int32_t)assetMain, v6, v7);
        this->fields.loadName = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadName, 0, v9, v10);
        UICharaGraphTexture__SetFrame(this, v11);
        UICharaGraphTexture__SetTexture(this, v12);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v13, v14);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  UnityEngine_Component_o *bodyTexture; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v20; // x21

  if ( (byte_4B461F5 & 1) == 0 )
  {
    sub_1BDB878(&EventDelegate_Callback_TypeInfo, finishAction);
    sub_1BDB878(&EventDelegate_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__, v9);
    sub_1BDB878(&UICharaGraphTexture___c__DisplayClass49_0_TypeInfo, v10);
    byte_4B461F5 = 1;
  }
  v11 = sub_1BDBAC4(UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = finishAction;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)finishAction, v14, v15);
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( bodyTexture )
    {
      gameObject = UnityEngine_Component__get_gameObject(bodyTexture, 0LL);
      TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
      TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0LL);
      bodyTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
      if ( bodyTexture )
      {
        v18 = UnityEngine_Component__get_gameObject(bodyTexture, 0LL);
        bodyTexture = (UnityEngine_Component_o *)TweenAlpha__Begin(v18, duration, 0.0, 0LL);
        if ( !*(_QWORD *)(v11 + 16) )
          return;
        if ( bodyTexture )
        {
          klass = (System_Collections_Generic_List_EventDelegate__o *)bodyTexture[3].klass;
          v20 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v20,
            (Il2CppObject *)v11,
            Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__,
            0LL);
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Set_48553224(klass, v20, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_1BDBAD4(bodyTexture, v13);
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

  if ( (byte_4B461F2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B461F2 = 1;
  }
  if ( this->fields.realNameCheck == 3 )
  {
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0LL, 0LL) )
    {
      nameTexture = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( nameTexture )
      {
        v8 = UnityEngine_Component__get_gameObject(nameTexture, 0LL);
        TweenAlpha__Begin(v8, duration, 1.0, 0LL);
        return;
      }
LABEL_11:
      sub_1BDBAD4(nameTexture, method);
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

  if ( (byte_4B461F6 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B461F6 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1BDBAD4(0LL, v6);
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

  if ( (byte_4B461F4 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B461F4 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1BDBAD4(0LL, v6);
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
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_4B461F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B461F3 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    Component_object = 0LL;
    if ( v6 )
    {
      v9 = this->fields.spriteBase;
      if ( !v9 )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_22;
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
        Component_object,
        Component_object->klass->vtable[9].methodPtr,
        0.0);
    }
    nameTexture = (UnityEngine_Object_o *)this->fields.nameTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameTexture, 0LL, 0LL) )
    {
      v9 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v9 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v9->klass[1]._1.castClass)(
          v9,
          v9->klass[1]._1.declaringType,
          0.0);
        return;
      }
LABEL_22:
      sub_1BDBAD4(v9, v7);
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

  if ( (byte_4B461F7 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, sprite);
    byte_4B461F7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( v4 )
  {
    if ( !sprite )
      sub_1BDBAD4(v4, v5);
    UISprite__set_spriteName(sprite, 0LL, 0LL);
  }
}


void __fastcall UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v3; // x23
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v10; // x1
  System_String_o *p_callbackFunc; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v13; // x1
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Delegate_o *v17; // x8
  System_Action_c *v18; // x1
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v21; // x1
  System_String_o *v22; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_c *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_4B461EC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callbackFunc);
    sub_1BDB878(&AssetManager_TypeInfo, v6);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BDB878(&Method_UICharaGraphTexture_EndLoadAsset__, v8);
    byte_4B461EC = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0LL);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_39676192(
                         this->fields.imageSvtId,
                         this->fields.imagePartsGroupIdxs,
                         0LL);
  p_callbackFunc = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_62607564(loadName, p_callbackFunc, 0LL) )
    {
      if ( callbackFunc )
      {
        p_callbackFunc = (System_String_o *)&this->fields.callbackFunc;
        v14 = System_Delegate__Combine(
                (System_Delegate_o *)this->fields.callbackFunc,
                (System_Delegate_o *)callbackFunc,
                0LL);
        v17 = v14;
        if ( v14 )
        {
          v18 = System_Action_TypeInfo;
          if ( (System_Action_c *)v14->klass != System_Action_TypeInfo )
            goto LABEL_25;
          p_callbackFunc->klass = (System_String_c *)v14;
          if ( (System_Action_c *)v14->klass != v18 )
            goto LABEL_25;
        }
        else
        {
          p_callbackFunc->klass = 0LL;
        }
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v14, v15, v16);
      }
      UICharaGraphTexture__SetBeforeFrame(this, v13);
      return;
    }
    v22 = this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v22, 0LL);
LABEL_21:
    if ( !callbackFunc )
    {
LABEL_28:
      UICharaGraphTexture__SetBeforeFrame(this, v10);
      this->fields.loadName = p_callbackFunc;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)p_callbackFunc, v27, v28);
      v29 = this->fields.loadName;
      v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v29, v30, 1, 0LL);
      return;
    }
    v3 = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v23 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.callbackFunc,
            (System_Delegate_o *)callbackFunc,
            0LL);
    v17 = v23;
    if ( !v23 )
      goto LABEL_26;
    v26 = System_Action_TypeInfo;
    if ( (System_Action_c *)v23->klass == System_Action_TypeInfo )
    {
      v3->klass = (CGThumbnailListItem_c *)v23;
      if ( (System_Action_c *)v23->klass == v26 )
        goto LABEL_27;
    }
LABEL_25:
    sub_1BDBD94(v17);
LABEL_26:
    v3->klass = (CGThumbnailListItem_c *)v17;
LABEL_27:
    sub_1BDB81C(v3, (int32_t)v17, v24, v25);
    goto LABEL_28;
  }
  assetMain = this->fields.assetMain;
  if ( !assetMain )
    goto LABEL_21;
  name = assetMain->fields.name;
  if ( !name )
    sub_1BDBAD4(0LL, v10);
  if ( !System_String__Equals_62607564(name, p_callbackFunc, 0LL) )
    goto LABEL_21;
  UICharaGraphTexture__SetFrame(this, v10);
  UICharaGraphTexture__SetTexture(this, v21);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *loadName; // x20
  CGThumbnailListItem_o *p_loadName; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B461DF & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B461DF = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v6 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v6 )
        goto LABEL_24;
      v6 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !v6 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0LL);
    }
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v6 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))v6->klass[2]._1.gc_desc)(
        v6,
        0LL,
        v6->klass[2]._1.name);
      goto LABEL_15;
    }
LABEL_24:
    sub_1BDBAD4(v6, v5);
  }
LABEL_15:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39554172(assetMain, 0LL);
    this->fields.assetMain = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.assetMain, 0, v9, v10);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0LL);
    p_loadName->klass = 0LL;
    sub_1BDB81C(p_loadName, 0, v13, v14);
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
    sub_1BDBAD4(bodyTexture, isActive);
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
    sub_1BDBAD4(nameTexture, method);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int32_t v19; // w8
  int32_t v20; // w8
  const MethodInfo *v21; // [xsp+8h] [xbp-58h]

  if ( (byte_4B461E0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B461E0 = 1;
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
    0,
    v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0LL)) == 0LL )
  {
    sub_1BDBAD4(Instance, v17);
  }
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    v19 = *((_DWORD *)Instance + 11);
    this->fields.adjustAtk = 0;
    this->fields._AddedAtkByGrand_k__BackingField = 0;
    this->fields.atk = v19;
  }
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    v20 = *((_DWORD *)Instance + 9);
    this->fields.adjustHp = 0;
    this->fields._AddedHpByGrand_k__BackingField = 0;
    this->fields.hp = v20;
  }
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v18);
}


void __fastcall UICharaGraphTexture__SetCharacter_42851356(
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
  int32_t exceedCount; // w23
  int32_t lv; // w24
  int32_t v13; // w25
  bool IsGrandServant; // w0
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t adjustAtk; // w23
  int32_t *v17; // x8
  int32_t v18; // w22
  int32_t AddedAtk; // w0
  struct ServantOverwriteStatus_o *v20; // x8
  int32_t adjustHp; // w23
  int32_t *v22; // x8
  int32_t v23; // w22
  int32_t AddedHp; // w0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // [xsp+8h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E1 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_4B461E1 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_19;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v27, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  lv = userSvtEntity->fields.lv;
  v13 = v10;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
  UICharaGraphRender__SetCharacter(v6, v9, v13, exceedCount, 1, lv, 0, 0, IsGrandServant, v26);
  OverwriteStatus_k__BackingField = v6->fields._OverwriteStatus_k__BackingField;
  adjustAtk = userSvtEntity->fields.adjustAtk;
  v17 = OverwriteStatus_k__BackingField
      ? &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField
      : &userSvtEntity->fields.atk;
  v18 = *v17;
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0LL);
  if ( !this )
    goto LABEL_19;
  AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
  if ( (v6->fields.atk & 0x80000000) == 0 )
  {
    v6->fields.atk = v18;
    v6->fields.adjustAtk = adjustAtk;
    v6->fields._AddedAtkByGrand_k__BackingField = AddedAtk;
  }
  v20 = v6->fields._OverwriteStatus_k__BackingField;
  adjustHp = userSvtEntity->fields.adjustHp;
  v22 = v20 ? (int32_t *)&v20->fields : &userSvtEntity->fields.hp;
  v23 = *v22;
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0LL);
  if ( !this )
LABEL_19:
    sub_1BDBAD4(this, userSvtEntity);
  AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0LL);
  if ( (v6->fields.hp & 0x80000000) == 0 )
  {
    v6->fields.hp = v23;
    v6->fields.adjustHp = adjustHp;
    v6->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v25);
}


void __fastcall UICharaGraphTexture__SetCharacter_42851736(
        UICharaGraphTexture_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        int32_t changeNameType,
        bool isDisableGrand,
        bool isGrandSvt,
        const MethodInfo *method)
{
  _BOOL4 v9; // w22
  UICharaGraphRender_o *v14; // x20
  __int64 v15; // x1
  _BOOL4 IsGrandServant; // w25
  __int64 v17; // x27
  __int64 v18; // x28
  bool v19; // w29
  int32_t v20; // w26
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Hp_k__BackingField; // x12
  bool v25; // zf
  int32_t *p_Atk_k__BackingField; // x8
  int32_t *p_hp; // x9
  int32_t v28; // w24
  int32_t v29; // w26
  UserServantGrandInfo_o *v30; // x23
  int32_t adjustAtk; // w22
  int32_t adjustHp; // w21
  int32_t AddedHp; // w0
  const MethodInfo *v34; // [xsp+10h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v9 = isDisableGrand;
  v14 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E2 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    this = (UICharaGraphTexture_o *)sub_1BDB878(&UserServantGrandInfo_TypeInfo, v15);
    byte_4B461E2 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_33;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v19 = (IsGrandServant || isGrandSvt) && !v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v18;
  *(_QWORD *)&v35.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v35, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userSvtEntity->fields.limitCount, 0LL);
  UICharaGraphRender__SetCharacter_42842868(
    v14,
    v20,
    v21,
    imageLimitCount,
    userSvtEntity->fields.exceedCount,
    userSvtEntity->fields.lv,
    changeNameType,
    0,
    0LL,
    v19,
    v34);
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0LL);
  OverwriteStatus_k__BackingField = v14->fields._OverwriteStatus_k__BackingField;
  p_Hp_k__BackingField = &OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
  v25 = OverwriteStatus_k__BackingField == 0LL;
  if ( OverwriteStatus_k__BackingField )
    p_Atk_k__BackingField = &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
  else
    p_Atk_k__BackingField = &userSvtEntity->fields.atk;
  if ( v25 )
    p_hp = &userSvtEntity->fields.hp;
  else
    p_hp = p_Hp_k__BackingField;
  v28 = *p_hp;
  v29 = *p_Atk_k__BackingField;
  if ( IsGrandServant || !v19 )
  {
    v30 = (UserServantGrandInfo_o *)this;
    if ( IsGrandServant && v9 )
    {
      if ( !this )
        goto LABEL_33;
      v29 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
      this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v30, 0LL);
      v28 -= (int)this;
    }
  }
  else
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__Make(userSvtEntity, 1, 0LL);
    if ( !this )
      goto LABEL_33;
    v30 = (UserServantGrandInfo_o *)this;
    v29 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v30, 0LL);
    v28 += (int)this;
  }
  adjustAtk = userSvtEntity->fields.adjustAtk;
  if ( v19 )
  {
    if ( !v30 )
      goto LABEL_33;
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedAtk(v30, 0LL);
  }
  else
  {
    this = 0LL;
  }
  if ( (v14->fields.atk & 0x80000000) == 0 )
  {
    v14->fields.atk = v29;
    v14->fields.adjustAtk = adjustAtk;
    v14->fields._AddedAtkByGrand_k__BackingField = (int)this;
  }
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( v19 )
  {
    if ( v30 )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp(v30, 0LL);
      goto LABEL_30;
    }
LABEL_33:
    sub_1BDBAD4(this, userSvtEntity);
  }
  AddedHp = 0;
LABEL_30:
  if ( (v14->fields.hp & 0x80000000) == 0 )
  {
    v14->fields.hp = v28;
    v14->fields.adjustHp = adjustHp;
    v14->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v14, callbackFunc, v22);
}


void __fastcall UICharaGraphTexture__SetCharacter_42852316(
        UICharaGraphTexture_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  int32_t maxLimitCount; // w22
  int32_t maxLv; // w23
  int32_t v12; // w24
  bool IsGrandServant; // w0
  const MethodInfo *v14; // x2
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Atk_k__BackingField; // x9
  int32_t v17; // w9
  int32_t *p_Hp_k__BackingField; // x9
  bool v19; // zf
  int32_t *v20; // x8
  int32_t v21; // w8
  const MethodInfo *v22; // [xsp+8h] [xbp-58h]
  int32_t atk; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t hp[2]; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E3 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userSvtCollectionEntity);
    byte_4B461E3 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1BDBAD4(this, userSvtCollectionEntity);
  v8 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v8;
  *(_QWORD *)&v25.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  maxLv = userSvtCollectionEntity->fields.maxLv;
  v12 = v9;
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0LL);
  UICharaGraphRender__SetCharacter(v6, v12, maxLimitCount, 0, 1, maxLv, 0, 0, IsGrandServant, v22);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0LL);
  OverwriteStatus_k__BackingField = v6->fields._OverwriteStatus_k__BackingField;
  if ( (v6->fields.atk & 0x80000000) == 0 )
  {
    p_Atk_k__BackingField = &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
    if ( !OverwriteStatus_k__BackingField )
      p_Atk_k__BackingField = &atk;
    v17 = *p_Atk_k__BackingField;
    v6->fields.adjustAtk = 0;
    v6->fields._AddedAtkByGrand_k__BackingField = 0;
    v6->fields.atk = v17;
  }
  if ( (v6->fields.hp & 0x80000000) == 0 )
  {
    p_Hp_k__BackingField = &OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
    v19 = OverwriteStatus_k__BackingField == 0LL;
    v20 = hp;
    if ( !v19 )
      v20 = p_Hp_k__BackingField;
    v21 = *v20;
    v6->fields.adjustHp = 0;
    v6->fields._AddedHpByGrand_k__BackingField = 0;
    v6->fields.hp = v21;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v14);
}


void __fastcall UICharaGraphTexture__SetCharacter_42852652(
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
  int32_t maxLimitCount; // w23
  int32_t maxLv; // w24
  int32_t v14; // w25
  bool IsGrandServant; // w0
  const MethodInfo *v16; // x2
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Atk_k__BackingField; // x9
  int32_t v19; // w9
  int32_t *p_Hp_k__BackingField; // x9
  bool v21; // zf
  int32_t *v22; // x8
  int32_t v23; // w8
  const MethodInfo *v24; // [xsp+10h] [xbp-60h]
  int32_t atk; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t hp[2]; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E4 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userSvtCollectionEntity);
    byte_4B461E4 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1BDBAD4(this, userSvtCollectionEntity);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v10;
  *(_QWORD *)&v27.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v27, 0LL);
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  maxLv = userSvtCollectionEntity->fields.maxLv;
  v14 = v11;
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0LL);
  UICharaGraphRender__SetCharacter_42842868(
    v8,
    v14,
    maxLimitCount,
    imageLimitCount,
    0,
    maxLv,
    0,
    0,
    0LL,
    IsGrandServant,
    v24);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0LL);
  OverwriteStatus_k__BackingField = v8->fields._OverwriteStatus_k__BackingField;
  if ( (v8->fields.atk & 0x80000000) == 0 )
  {
    p_Atk_k__BackingField = &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
    if ( !OverwriteStatus_k__BackingField )
      p_Atk_k__BackingField = &atk;
    v19 = *p_Atk_k__BackingField;
    v8->fields.adjustAtk = 0;
    v8->fields._AddedAtkByGrand_k__BackingField = 0;
    v8->fields.atk = v19;
  }
  if ( (v8->fields.hp & 0x80000000) == 0 )
  {
    p_Hp_k__BackingField = &OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
    v21 = OverwriteStatus_k__BackingField == 0LL;
    v22 = hp;
    if ( !v21 )
      v22 = p_Hp_k__BackingField;
    v23 = *v22;
    v8->fields.adjustHp = 0;
    v8->fields._AddedHpByGrand_k__BackingField = 0;
    v8->fields.hp = v23;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v16);
}


void __fastcall UICharaGraphTexture__SetCharacter_42852996(
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
  int32_t exceedCount; // w24
  int32_t lv; // w25
  int32_t v15; // w26
  bool IsGrandSvt; // w0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E5 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      servantLeaderInfo);
    byte_4B461E5 = 1;
  }
  if ( !servantLeaderInfo )
    sub_1BDBAD4(this, servantLeaderInfo);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v8;
  *(_QWORD *)&v19.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v19, 0LL);
  limitCount = servantLeaderInfo->fields.limitCount;
  v11 = v9;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
  exceedCount = servantLeaderInfo->fields.exceedCount;
  lv = servantLeaderInfo->fields.lv;
  v15 = CardImageLimitCount;
  IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL);
  UICharaGraphRender__SetCharacter_42842868(v6, v11, limitCount, v15, exceedCount, lv, 0, 0, 0LL, IsGrandSvt, v18);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v17);
}


void __fastcall UICharaGraphTexture__SetCharacter_42853244(
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
  int32_t exceedCount; // w23
  int32_t limitCount; // w24
  int32_t lv; // w25
  int32_t v15; // w26
  bool IsGrandSvt; // w0
  int32_t atk; // w23
  int32_t adjustAtk; // w24
  UserServantGrandInfo_o *v19; // x22
  int32_t AddedAtk; // w0
  int32_t hp; // w23
  int32_t adjustHp; // w21
  int32_t AddedHp; // w0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E6 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      servantLeaderInfo);
    byte_4B461E6 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_12;
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
  exceedCount = servantLeaderInfo->fields.exceedCount;
  limitCount = servantLeaderInfo->fields.limitCount;
  lv = servantLeaderInfo->fields.lv;
  v15 = v11;
  IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL);
  UICharaGraphRender__SetCharacter_42842868(
    v8,
    v15,
    limitCount,
    imageLimitCount,
    exceedCount,
    lv,
    0,
    0,
    0LL,
    IsGrandSvt,
    v25);
  this = (UICharaGraphTexture_o *)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0LL);
  if ( !this )
LABEL_12:
    sub_1BDBAD4(this, servantLeaderInfo);
  atk = servantLeaderInfo->fields.atk;
  adjustAtk = servantLeaderInfo->fields.adjustAtk;
  v19 = (UserServantGrandInfo_o *)this;
  AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
  if ( (v8->fields.atk & 0x80000000) == 0 )
  {
    v8->fields.atk = atk;
    v8->fields.adjustAtk = adjustAtk;
    v8->fields._AddedAtkByGrand_k__BackingField = AddedAtk;
  }
  hp = servantLeaderInfo->fields.hp;
  adjustHp = servantLeaderInfo->fields.adjustHp;
  AddedHp = UserServantGrandInfo__get_AddedHp(v19, 0LL);
  if ( (v8->fields.hp & 0x80000000) == 0 )
  {
    v8->fields.hp = hp;
    v8->fields.adjustHp = adjustHp;
    v8->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v24);
}


void __fastcall UICharaGraphTexture__SetCharacter_42853572(
        UICharaGraphTexture_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+8h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E7 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      equipTargetInfo);
    byte_4B461E7 = 1;
  }
  if ( !equipTargetInfo )
    sub_1BDBAD4(this, equipTargetInfo);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v14, 0LL);
  UICharaGraphRender__SetCharacter(
    v8,
    v11,
    equipTargetInfo->fields.limitCount,
    0,
    0,
    0,
    0,
    isNpcFollowerServantEquip,
    0,
    v13);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v12);
}


void __fastcall UICharaGraphTexture__SetCharacter_42853768(
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
  const MethodInfo *v18; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v10 = (UICharaGraphRender_o *)this;
  if ( (byte_4B461E8 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      equipTargetInfo);
    byte_4B461E8 = 1;
  }
  if ( !equipTargetInfo )
    sub_1BDBAD4(this, equipTargetInfo);
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  v13 = isNpcFollowerServantEquip;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v19, 0LL);
  UICharaGraphRender__SetCharacter_42842868(
    v10,
    v14,
    equipTargetInfo->fields.limitCount,
    imageLimitCount,
    0,
    0,
    0,
    v13,
    equipTargetInfo->fields._ImagePartsGroupIdxs_k__BackingField,
    0,
    v18);
  if ( (v10->fields.atk & 0x80000000) == 0 )
  {
    atk = equipTargetInfo->fields.atk;
    v10->fields.adjustAtk = 0;
    v10->fields._AddedAtkByGrand_k__BackingField = 0;
    v10->fields.atk = atk;
  }
  if ( (v10->fields.hp & 0x80000000) == 0 )
  {
    hp = equipTargetInfo->fields.hp;
    v10->fields.adjustHp = 0;
    v10->fields._AddedHpByGrand_k__BackingField = 0;
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
  if ( (byte_4B461E9 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userCommandCodeEntity);
    byte_4B461E9 = 1;
  }
  if ( !userCommandCodeEntity )
    sub_1BDBAD4(this, userCommandCodeEntity);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_42854168(
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
  if ( (byte_4B461EA & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      userCommandCodeCollectionEntity);
    byte_4B461EA = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_1BDBAD4(this, userCommandCodeCollectionEntity);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_42854312(
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
  if ( (byte_4B461EB & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1BDB878(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      commandCodeEntity);
    byte_4B461EB = 1;
  }
  if ( !commandCodeEntity )
    sub_1BDBAD4(this, commandCodeEntity);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_42854456(
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

  if ( (byte_4B461F1 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&d);
    byte_4B461F1 = 1;
  }
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d, 0LL);
  baseSprite = (UIWidget_o *)this->fields.bodyTexture;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 1, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameTopSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 2, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameBottomSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 2, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameLeftSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 3, 0LL);
  baseSprite = (UIWidget_o *)this->fields.frameRightSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 3, 0LL);
  baseSprite = (UIWidget_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 4, 0LL);
  baseSprite = (UIWidget_o *)this->fields.classSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 4, 0LL);
  baseSprite = (UIWidget_o *)this->fields.nameTexture;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 5, 0LL);
  name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(name2Texture, 0LL, 0LL) )
  {
    baseSprite = (UIWidget_o *)this->fields.name2Texture;
    if ( !baseSprite )
      goto LABEL_20;
    UIWidget__set_depth(baseSprite, d + 5, 0LL);
  }
  baseSprite = (UIWidget_o *)this->fields.attackLabel;
  if ( !baseSprite
    || (v7 = d + 6, UIWidget__set_depth(baseSprite, v7, 0LL), (baseSprite = (UIWidget_o *)this->fields.hpLabel) == 0LL) )
  {
LABEL_20:
    sub_1BDBAD4(baseSprite, *(_QWORD *)&d);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct System_String_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-34h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4B461F0 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&Method_UICharaGraphTexture_EndLoadAsset__, v10);
    byte_4B461F0 = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1BDBAD4(Instance, v12);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v13 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0LL);
  this->fields.loadName = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)v13, v14, v15);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v16, 1, 0LL);
}


void __fastcall UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UICharaGraphTexture_o *v3; // x19
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
  __int64 v16; // x1
  int v17; // w9
  System_String_o *frameName; // x20
  int v19; // w8
  float v20; // s11
  float v21; // s10
  float v22; // s8
  float v23; // s9
  MethodInfo *v24; // x1
  UISprite_o *frameLeftSprite; // x0
  float v26; // s12
  int32_t baseKind; // w22
  UISprite_o *v28; // x21
  System_String_o *v29; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v31; // x0
  UISprite_o *frameTopSprite; // x21
  System_String_o *v33; // x0
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v35; // x0
  UISprite_o *raritySprite; // x20
  const MethodInfo *v37; // x1
  System_String_o *v38; // x0
  UISprite_o *classSprite; // x20
  const MethodInfo *v40; // x1
  System_String_o *v41; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v43; // x20
  UISprite_o *v44; // x21
  System_String_o *v45; // x22
  UISprite_o *v46; // x21
  System_String_o *v47; // x0
  UISprite_o *v48; // x20
  UISprite_o *v49; // x21
  System_String_o *v50; // x22
  UISprite_o *v51; // x21
  System_String_o *v52; // x0
  UISprite_o *v53; // x20
  const MethodInfo *v54; // x1
  System_String_o *v55; // x0
  int32_t atk; // w20
  BalanceConfig_c *v57; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v59; // w21
  UILabel_o *attackLabel; // x20
  struct UILabel_o *hpLabel; // x20
  int hp; // w21
  __int64 *v63; // x0
  System_String_o *v64; // x21
  bool IsKeepServantEquip; // w0
  UILabel_o *v66; // x20
  int v67; // w22
  bool v68; // w8
  __int64 v69; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B461ED & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&BalanceConfig_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_812/*"+"*/, v6);
    sub_1BDB878(&StringLiteral_10942/*"R"*/, v7);
    sub_1BDB878(&StringLiteral_18706/*"e"*/, v8);
    sub_1BDB878(&StringLiteral_17689/*"c"*/, v9);
    sub_1BDB878(&StringLiteral_13291/*"T"*/, v10);
    sub_1BDB878(&StringLiteral_8242/*"L"*/, v11);
    sub_1BDB878(&StringLiteral_2538/*"B"*/, v12);
    sub_1BDB878(&StringLiteral_18948/*"eframeB_hp"*/, v13);
    sub_1BDB878(&StringLiteral_20553/*"img_ribbon_noblephantasmup"*/, v14);
    sub_1BDB878(&StringLiteral_18947/*"eframeB_atk"*/, v15);
    this = (UICharaGraphTexture_o *)sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B461ED = 1;
  }
  v69 = 0LL;
  v17 = v3->fields._AddedAtkByGrand_k__BackingField + v3->fields.adjustAtk;
  frameName = v3->fields.frameName;
  v19 = v3->fields._AddedHpByGrand_k__BackingField + v3->fields.adjustHp;
  if ( v17 <= 0 )
    v20 = 1.0;
  else
    v20 = 0.92157;
  if ( v17 <= 0 )
    v21 = 1.0;
  else
    v21 = 0.015686;
  if ( v19 <= 0 )
    v22 = 1.0;
  else
    v22 = 0.015686;
  if ( v19 <= 0 )
    v23 = 1.0;
  else
    v23 = 0.92157;
  UICharaGraphTexture__InitSprite(this, v3->fields.materialTdSprite, v2);
  if ( System_String__IsNullOrEmpty(frameName, 0LL) )
  {
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameTopSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    goto LABEL_19;
  }
  baseKind = v3->fields.baseKind;
  if ( baseKind != 1 )
  {
    if ( !baseKind )
    {
      v28 = v3->fields.frameLeftSprite;
      v29 = System_String__Concat_62572260(frameName, (System_String_o *)StringLiteral_8242/*"L"*/, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v28, v29, 0LL);
      frameRightSprite = v3->fields.frameRightSprite;
      v31 = System_String__Concat_62572260(frameName, (System_String_o *)StringLiteral_10942/*"R"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v31, 0LL);
      frameTopSprite = v3->fields.frameTopSprite;
      v33 = System_String__Concat_62572260(frameName, (System_String_o *)StringLiteral_13291/*"T"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v33, 0LL);
      frameBottomSprite = v3->fields.frameBottomSprite;
      v35 = System_String__Concat_62572260(frameName, (System_String_o *)StringLiteral_2538/*"B"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v35, 0LL);
      frameLeftSprite = v3->fields.frameBottomSprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      raritySprite = v3->fields.raritySprite;
      v38 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v37);
      AtlasManager__SetCharaGraphaOption(raritySprite, v38, 0LL);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      classSprite = v3->fields.classSprite;
      v41 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)v3, v40);
      AtlasManager__SetCharaGraphaOption(classSprite, v41, 0LL);
      if ( SvtType__IsSvtMaterialTd(v3->fields.svtType, 0LL) )
      {
        materialTdSprite = (UnityEngine_Object_o *)v3->fields.materialTdSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
        {
          v43 = v3->fields.materialTdSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCharaGraphaOption(v43, (System_String_o *)StringLiteral_20553/*"img_ribbon_noblephantasmup"*/, 0LL);
        }
      }
      goto LABEL_24;
    }
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    v49 = v3->fields.frameTopSprite;
    if ( baseKind == 2 )
    {
      v50 = System_String__Concat_62610508(
              (System_String_o *)StringLiteral_17689/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_13291/*"T"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v49, v50, 0LL);
      v51 = v3->fields.frameBottomSprite;
      v52 = System_String__Concat_62610508(
              (System_String_o *)StringLiteral_17689/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_2538/*"B"*/,
              0LL);
      AtlasManager__SetCharaGraphaOption(v51, v52, 0LL);
      v53 = v3->fields.raritySprite;
      v55 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v54);
      AtlasManager__SetCharaGraphaOption(v53, v55, 0LL);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_22;
    }
    if ( !v49 )
      goto LABEL_96;
    frameLeftSprite = v3->fields.frameTopSprite;
LABEL_19:
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameBottomSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
LABEL_22:
    frameLeftSprite = v3->fields.classSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
LABEL_24:
    v26 = 1.0;
    goto LABEL_25;
  }
  frameLeftSprite = v3->fields.frameLeftSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.frameRightSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.classSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  v44 = v3->fields.frameTopSprite;
  v45 = System_String__Concat_62610508(
          (System_String_o *)StringLiteral_18706/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_13291/*"T"*/,
          0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(v44, v45, 0LL);
  v46 = v3->fields.frameBottomSprite;
  v47 = System_String__Concat_62610508(
          (System_String_o *)StringLiteral_18706/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_2538/*"B"*/,
          0LL);
  AtlasManager__SetCharaGraphaOption(v46, v47, 0LL);
  v48 = v3->fields.raritySprite;
  if ( v3->fields.saintGraphType != 1 )
  {
    v64 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v24);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCharaGraphaOption(v48, v64, 0LL);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipAtkSprite, (System_String_o *)StringLiteral_18947/*"eframeB_atk"*/, 0LL);
    frameLeftSprite = v3->fields.equipAtkSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipHpSprite, (System_String_o *)StringLiteral_18948/*"eframeB_hp"*/, 0LL);
    frameLeftSprite = v3->fields.equipHpSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    goto LABEL_24;
  }
  if ( !v48 )
    goto LABEL_96;
  UISprite__set_spriteName(v3->fields.raritySprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.equipAtkSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.equipHpSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  v26 = 0.0;
LABEL_25:
  if ( v3->fields.baseKind != 2
    && v3->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(v3->fields.svtType, 0LL) )
  {
    if ( SvtType__IsStatusUp(v3->fields.svtType, 0LL) )
    {
      atk = v3->fields.atk;
      v57 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v57 = BalanceConfig_TypeInfo;
      }
      static_fields = v57->static_fields;
      v59 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v69) = static_fields->StatusUpAdjustHp * v3->fields.hp;
      HIDWORD(v69) = v59;
      attackLabel = v3->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v69 + 4, 0LL);
      v24 = (MethodInfo *)frameLeftSprite;
      if ( v59 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_62572260(
                                          (System_String_o *)StringLiteral_812/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v24 = (MethodInfo *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, (System_String_o *)v24, 0LL);
        hpLabel = v3->fields.hpLabel;
        hp = v69;
        v63 = &v69;
LABEL_84:
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)v63, 0LL);
        v24 = (MethodInfo *)frameLeftSprite;
        if ( hp < 1 )
          goto LABEL_93;
        frameLeftSprite = (UISprite_o *)System_String__Concat_62572260(
                                          (System_String_o *)StringLiteral_812/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
LABEL_92:
        v24 = (MethodInfo *)frameLeftSprite;
LABEL_93:
        if ( !hpLabel )
          goto LABEL_96;
LABEL_94:
        frameLeftSprite = (UISprite_o *)hpLabel;
        goto LABEL_31;
      }
    }
    else
    {
      IsKeepServantEquip = SvtType__IsKeepServantEquip(v3->fields.svtType, 0LL);
      v66 = v3->fields.attackLabel;
      v67 = v3->fields.atk;
      v68 = IsKeepServantEquip;
      frameLeftSprite = (UISprite_o *)&v3->fields.atk;
      if ( v68 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
        v24 = (MethodInfo *)frameLeftSprite;
        if ( v67 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_62572260(
                                            (System_String_o *)StringLiteral_812/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0LL);
          v24 = (MethodInfo *)frameLeftSprite;
        }
        if ( v66 )
        {
          UILabel__set_text(v66, (System_String_o *)v24, 0LL);
          hpLabel = v3->fields.hpLabel;
          hp = v3->fields.hp;
          LODWORD(v63) = (_DWORD)v3 + 456;
          goto LABEL_84;
        }
      }
      else
      {
        if ( (v67 & 0x80000000) != 0 )
        {
          v24 = (MethodInfo *)StringLiteral_1/*""*/;
        }
        else
        {
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
          v24 = (MethodInfo *)frameLeftSprite;
        }
        if ( v66 )
        {
          UILabel__set_text(v66, (System_String_o *)v24, 0LL);
          hpLabel = v3->fields.hpLabel;
          if ( (v3->fields.hp & 0x80000000) != 0 )
          {
            v24 = (MethodInfo *)StringLiteral_1/*""*/;
            if ( !hpLabel )
              goto LABEL_96;
            goto LABEL_94;
          }
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)v3 + 456, 0LL);
          goto LABEL_92;
        }
      }
    }
LABEL_96:
    sub_1BDBAD4(frameLeftSprite, v24);
  }
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v24 = (MethodInfo *)StringLiteral_1/*""*/;
LABEL_31:
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)v24, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v70.fields.r = 1.0;
  v70.fields.g = v20;
  v70.fields.b = v21;
  v70.fields.a = v26;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v70, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v71.fields.r = 1.0;
  v71.fields.g = v23;
  v71.fields.b = v22;
  v71.fields.a = v26;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v71, 0LL);
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

  if ( (byte_4B461EF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B461EF = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (__int64)UICharaGraphRender__GetBodyTexture((UICharaGraphRender_o *)this, this->fields.assetMain, v2);
  if ( !bodyTexture )
    goto LABEL_31;
  ((void (__fastcall *)(struct UITexture_o *, __int64, Il2CppMethodPointer))bodyTexture->klass->vtable._27_set_mainTexture.method)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._28_get_shader.methodPtr);
  v7 = this->fields.bodyTexture;
  *(UnityEngine_Rect_o *)&v9 = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, v8);
  if ( !v7 )
    goto LABEL_31;
  UITexture__set_uvRect(v7, *(UnityEngine_Rect_o *)&v9, 0LL);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          v13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(NameTexture, 0LL, 0LL);
  if ( !this->fields.nameTexture )
    goto LABEL_31;
  v15 = gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nameTexture, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  if ( (v15 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (*(__int64 (__fastcall **)(__int64, UnityEngine_Object_o *, _QWORD))(*(_QWORD *)gameObject + 744LL))(
                   gameObject,
                   NameTexture,
                   *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v16 = this->fields.nameTexture;
    if ( !v16 )
      goto LABEL_31;
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v16->fields.mRect, v6);
    UITexture__set_uvRect(v16, NameUvRect, 0LL);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_31:
      sub_1BDBAD4(gameObject, v6);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
      gameObject,
      0LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v21 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
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
    sub_1BDBAD4(0LL, v8);
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