void UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_59720C8 & 1) == 0 )
  {
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_59720C8 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method);
  UICharaGraphRender___ctor((UICharaGraphRender_o *)this, 0);
}


void UICharaGraphTexture__EndLoadAsset(UICharaGraphTexture_o *this, AssetData_o *assetMain, const MethodInfo *method)
{
  System_String_o *loadName; // x21
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  AssetData_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_59720BE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59720BE = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetMain);
      if ( AssetManager__compAssetStorage_47494556(assetMain, loadName, 0) )
      {
        v13 = this->fields.assetMain;
        if ( v13 )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
          AssetManager__releaseAsset_47496972(v13, 0);
        }
        this->fields.assetMain = assetMain;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetMain,
          (int32_t)assetMain,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        this->fields.loadName = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadName, 0, v14, v15, v16, v17, v18, v19);
        UICharaGraphTexture__SetFrame(this, v20);
        UICharaGraphTexture__SetTexture(this, v21);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v22, v23, v24, v25, v26, v27);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


void UICharaGraphTexture__ExecuteCharaGraphFadeout(
        UICharaGraphTexture_o *this,
        float duration,
        System_Action_o *finishAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UnityEngine_Component_o *bodyTexture; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v21; // x21
  __int64 v22; // x1

  if ( (byte_59720C5 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UICharaGraphTexture___c__DisplayClass45_0__ExecuteCharaGraphFadeout_b__0__);
    sub_2213A60(&UICharaGraphTexture___c__DisplayClass45_0_TypeInfo);
    byte_59720C5 = 1;
  }
  v7 = sub_2213CCC(UICharaGraphTexture___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = finishAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)finishAction, v10, v11, v12, v13, v14, v15);
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( bodyTexture )
    {
      gameObject = UnityEngine_Component__get_gameObject(bodyTexture, 0);
      TweenAlpha__Begin(gameObject, duration, 0.0, 0);
      TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0);
      bodyTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
      if ( bodyTexture )
      {
        v19 = UnityEngine_Component__get_gameObject(bodyTexture, 0);
        bodyTexture = (UnityEngine_Component_o *)TweenAlpha__Begin(v19, duration, 0.0, 0);
        if ( !*(_QWORD *)(v7 + 16) )
          return;
        if ( bodyTexture )
        {
          klass = (System_Collections_Generic_List_EventDelegate__o *)bodyTexture[3].klass;
          v21 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v21,
            (Il2CppObject *)v7,
            Method_UICharaGraphTexture___c__DisplayClass45_0__ExecuteCharaGraphFadeout_b__0__,
            0);
          if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v22);
          EventDelegate__Set_56322328(klass, v21, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_2213CDC(bodyTexture, v9);
  }
}


void UICharaGraphTexture__ExecuteNameCrossFade(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *name2Texture; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_59720C2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C2 = 1;
  }
  if ( this->fields.realNameCheck == 3 )
  {
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
    {
      nameTexture = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( nameTexture )
      {
        v9 = UnityEngine_Component__get_gameObject(nameTexture, 0);
        TweenAlpha__Begin(v9, duration, 1.0, 0);
        return;
      }
LABEL_11:
      sub_2213CDC(nameTexture, method);
    }
  }
}


void UICharaGraphTexture__ExecuteSpriteFadein(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_59720C6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C6 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_2213CDC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0);
  }
}


void UICharaGraphTexture__ExecuteSpriteFadeout(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_59720C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C4 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_2213CDC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
  }
}


void UICharaGraphTexture__ExecuteSpriteFadeoutForce(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  bool v6; // w0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_59720C3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C3 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
    Component_object = 0;
    if ( v6 )
    {
      v9 = this->fields.spriteBase;
      if ( !v9 )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v9,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_22;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, double))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        0.0);
    }
    nameTexture = (UnityEngine_Object_o *)this->fields.nameTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(nameTexture, 0, 0) )
    {
      v9 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v9 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))v9->klass[1]._1.element_class)(
          v9,
          v9->klass[1]._1.castClass,
          0.0);
        return;
      }
LABEL_22:
      sub_2213CDC(v9, v7);
    }
  }
}


void UICharaGraphTexture__InitSprite(UICharaGraphTexture_o *this, UISprite_o *sprite, const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_59720C7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( v4 )
  {
    if ( !sprite )
      sub_2213CDC(v4, v5);
    UISprite__set_spriteName(sprite, 0, 0);
  }
}


void UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v3; // x23
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v7; // x1
  System_String_o *p_callbackFunc; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v10; // x1
  System_Delegate_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x23
  System_Delegate_o *v24; // x0
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x20
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  __int64 v38; // x1

  if ( (byte_59720BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_59720BC = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_47623912(
                         this->fields.imageSvtId,
                         this->fields.imagePartsGroupIdxs,
                         0);
  p_callbackFunc = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_75686512(loadName, p_callbackFunc, 0) )
    {
      if ( callbackFunc )
      {
        p_callbackFunc = (System_String_o *)&this->fields.callbackFunc;
        v11 = System_Delegate__Combine(
                (System_Delegate_o *)this->fields.callbackFunc,
                (System_Delegate_o *)callbackFunc,
                0);
        v18 = v11;
        if ( v11 )
        {
          v19 = System_Action_TypeInfo;
          if ( (System_Action_c *)v11->klass != System_Action_TypeInfo )
            goto LABEL_25;
          p_callbackFunc->klass = (System_String_c *)v11;
          if ( (System_Action_c *)v11->klass != v19 )
            goto LABEL_25;
        }
        else
        {
          p_callbackFunc->klass = 0;
        }
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
          (int32_t)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      UICharaGraphTexture__SetBeforeFrame(this, v10);
      return;
    }
    v23 = this->fields.loadName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
    AssetManager__releaseAssetStorage(v23, 0);
LABEL_21:
    if ( !callbackFunc )
    {
LABEL_28:
      UICharaGraphTexture__SetBeforeFrame(this, v7);
      this->fields.loadName = p_callbackFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.loadName,
        (int32_t)p_callbackFunc,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = this->fields.loadName;
      v37 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v37, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
      AssetManager__loadAssetStorage(v36, v37, 1, 0, 0);
      return;
    }
    v3 = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v24 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v18 = v24;
    if ( !v24 )
      goto LABEL_26;
    v19 = System_Action_TypeInfo;
    if ( (System_Action_c *)v24->klass == System_Action_TypeInfo )
    {
      v3->klass = (MissionNaviTransitionBoardItem_c *)v24;
      if ( (System_Action_c *)v24->klass == v19 )
        goto LABEL_27;
    }
LABEL_25:
    sub_221405C(v18, v19, v12);
LABEL_26:
    v3->klass = 0;
LABEL_27:
    sub_2213A04(v3, (int32_t)v18, v12, v25, v26, v27, v28, v29);
    goto LABEL_28;
  }
  assetMain = this->fields.assetMain;
  if ( !assetMain )
    goto LABEL_21;
  name = assetMain->fields.name;
  if ( !name )
    sub_2213CDC(0, v7);
  if ( !System_String__Equals_75686512(name, p_callbackFunc, 0) )
    goto LABEL_21;
  UICharaGraphTexture__SetFrame(this, v7);
  UICharaGraphTexture__SetTexture(this, v22);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


// attributes: thunk
void UICharaGraphTexture__OnDestroy(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UICharaGraphTexture__ReleaseCharacter(this, method);
}


void UICharaGraphTexture__ReleaseCharacter(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *loadName; // x20
  MissionNaviTransitionBoardItem_o *p_loadName; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_59720B5 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720B5 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !v5 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v5->klass[1].vtable._3_ToString.method)(
        v5,
        0,
        v5->klass[2]._1.image);
      goto LABEL_15;
    }
LABEL_24:
    sub_2213CDC(v5, v4);
  }
LABEL_15:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetManager__releaseAsset_47496972(assetMain, 0);
    this->fields.assetMain = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetMain, 0, v9, v10, v11, v12, v13, v14);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (MissionNaviTransitionBoardItem_o *)&this->fields.loadName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_2213A04(p_loadName, 0, v17, v18, v19, v20, v21, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphTexture__SetActive(UICharaGraphTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_2213CDC(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


void UICharaGraphTexture__SetBeforeFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  const MethodInfo *v4; // x1

  nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
  if ( !nameTexture
    || (nameTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nameTexture, 0)) == 0 )
  {
    sub_2213CDC(nameTexture, method);
  }
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nameTexture, 0) )
    UICharaGraphTexture__SetFrame(this, v4);
}


void UICharaGraphTexture__SetCharacter(
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
  _DWORD *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_59720B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59720B6 = 1;
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
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0)) == 0 )
  {
    sub_2213CDC(Instance, v16);
  }
  v17 = Instance;
  UICharaGraphRender__SetAtk((UICharaGraphRender_o *)this, *((_DWORD *)Instance + 11), 0, 0, 0);
  UICharaGraphRender__SetHp((UICharaGraphRender_o *)this, v17[9], 0, 0, 0);
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v18);
}


void UICharaGraphTexture__SetCharacter_50938032(
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
  int32_t *p_Hp_k__BackingField; // x8
  int32_t v23; // w22
  int32_t AddedHp; // w0
  const MethodInfo *v25; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_59720B7 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59720B7 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_15;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
  *(_QWORD *)&v26.fields.currentCryptoKey = v7;
  *(_QWORD *)&v26.fields.fakeValue = v8;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userSvtEntity->fields.limitCount, 0);
  exceedCount = userSvtEntity->fields.exceedCount;
  lv = userSvtEntity->fields.lv;
  v13 = v10;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  UICharaGraphRender__SetCharacter(v6, v9, v13, exceedCount, 1, lv, 0, 0, IsGrandServant, 0);
  OverwriteStatus_k__BackingField = v6->fields._OverwriteStatus_k__BackingField;
  adjustAtk = userSvtEntity->fields.adjustAtk;
  v17 = OverwriteStatus_k__BackingField
      ? &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField
      : &userSvtEntity->fields.atk;
  v18 = *v17;
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0);
  if ( !this
    || ((AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0),
         UICharaGraphRender__SetAtk(v6, v18, adjustAtk, AddedAtk, 0),
         v20 = v6->fields._OverwriteStatus_k__BackingField,
         adjustHp = userSvtEntity->fields.adjustHp,
         v20)
      ? (p_Hp_k__BackingField = &v20->fields._Hp_k__BackingField)
      : (p_Hp_k__BackingField = &userSvtEntity->fields.hp),
        v23 = *p_Hp_k__BackingField,
        (this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0)) == 0) )
  {
LABEL_15:
    sub_2213CDC(this, userSvtEntity);
  }
  AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
  UICharaGraphRender__SetHp(v6, v23, adjustHp, AddedHp, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v25);
}


void UICharaGraphTexture__SetCharacter_50938424(
        UICharaGraphTexture_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        int32_t changeNameType,
        bool isDisableGrand,
        bool isGrandSvt,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  _BOOL4 v11; // w23
  UICharaGraphRender_o *v16; // x20
  _BOOL4 IsGrandServant; // w26
  bool v18; // w29
  int32_t ServantId; // w0
  __int64 v20; // x1
  __int64 v21; // x27
  __int64 v22; // x28
  int32_t v23; // w25
  int32_t v24; // w0
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Hp_k__BackingField; // x10
  bool v27; // zf
  int32_t *v28; // x8
  int32_t *v29; // x9
  int32_t v30; // w22
  int32_t v31; // w24
  UserServantGrandInfo_o *v32; // x25
  int32_t adjustAtk; // w23
  int32_t AddedAtk; // w0
  int32_t adjustHp; // w21
  int32_t AddedHp; // w3
  const MethodInfo *v37; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v11 = isDisableGrand;
  v16 = (UICharaGraphRender_o *)this;
  if ( (byte_59720B8 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UICharaGraphTexture_o *)sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_59720B8 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  v18 = !v11 && (IsGrandServant || isGrandSvt);
  ServantId = UserServantEntity__GetServantId(userSvtEntity, overrideTransformVal, 0);
  v21 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  v23 = ServantId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v38.fields.currentCryptoKey = v21;
  *(_QWORD *)&v38.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
  UICharaGraphRender__SetCharacter_50929424(
    v16,
    v23,
    v24,
    imageLimitCount,
    userSvtEntity->fields.exceedCount,
    userSvtEntity->fields.lv,
    changeNameType,
    0,
    0,
    v18,
    0);
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0);
  OverwriteStatus_k__BackingField = v16->fields._OverwriteStatus_k__BackingField;
  p_Hp_k__BackingField = &OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
  v27 = OverwriteStatus_k__BackingField == 0;
  v28 = OverwriteStatus_k__BackingField
      ? &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField
      : &userSvtEntity->fields.atk;
  v29 = v27 ? &userSvtEntity->fields.hp : p_Hp_k__BackingField;
  v30 = *v29;
  v31 = *v28;
  if ( IsGrandServant || !v18 )
  {
    v32 = (UserServantGrandInfo_o *)this;
    if ( IsGrandServant && v11 )
    {
      if ( !this )
        goto LABEL_25;
      v31 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v32, 0);
      v30 -= (int)this;
    }
  }
  else
  {
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, userSvtEntity);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__Make(userSvtEntity, 1, 0);
    if ( !this )
      goto LABEL_25;
    v32 = (UserServantGrandInfo_o *)this;
    v31 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v32, 0);
    v30 += (int)this;
  }
  adjustAtk = userSvtEntity->fields.adjustAtk;
  if ( !v18 )
  {
    UICharaGraphRender__SetAtk(v16, v31, adjustAtk, 0, 0);
    adjustHp = userSvtEntity->fields.adjustHp;
    AddedHp = 0;
    goto LABEL_24;
  }
  if ( !v32 )
LABEL_25:
    sub_2213CDC(this, userSvtEntity);
  AddedAtk = UserServantGrandInfo__get_AddedAtk(v32, 0);
  UICharaGraphRender__SetAtk(v16, v31, adjustAtk, AddedAtk, 0);
  adjustHp = userSvtEntity->fields.adjustHp;
  AddedHp = UserServantGrandInfo__get_AddedHp(v32, 0);
LABEL_24:
  UICharaGraphRender__SetHp(v16, v30, adjustHp, AddedHp, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v16, callbackFunc, v37);
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphTexture__SetCharacter_50939036(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        int32_t lv,
        int32_t imageLimitCount,
        ServantOverwriteStatus_o *overwriteStatus,
        int32_t adjustAtk,
        int32_t adjustHp,
        bool isGrandServant,
        UserServantGrandInfo_o *grandInfo,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v15; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t Atk_k__BackingField; // w24
  int32_t AddedAtk; // w3
  int32_t AddedHp; // w3
  const MethodInfo *v25; // x2

  this->fields._OverwriteStatus_k__BackingField = overwriteStatus;
  v15 = overwriteStatus;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)overwriteStatus,
    *(System_String_o **)&limitCount,
    *(System_String_o **)&exceedCount,
    lv,
    imageLimitCount,
    (bool)overwriteStatus,
    adjustAtk);
  UICharaGraphRender__SetCharacter_50929424(
    (UICharaGraphRender_o *)this,
    svtId,
    limitCount,
    imageLimitCount,
    exceedCount,
    lv,
    0,
    0,
    0,
    isGrandServant,
    0);
  if ( !v15 )
  {
    Atk_k__BackingField = 0;
    if ( isGrandServant )
      goto LABEL_3;
LABEL_6:
    AddedAtk = 0;
    goto LABEL_7;
  }
  Atk_k__BackingField = v15->fields._Atk_k__BackingField;
  if ( !isGrandServant )
    goto LABEL_6;
LABEL_3:
  if ( !grandInfo )
    goto LABEL_14;
  AddedAtk = UserServantGrandInfo__get_AddedAtk(grandInfo, 0);
LABEL_7:
  UICharaGraphRender__SetAtk((UICharaGraphRender_o *)this, Atk_k__BackingField, adjustAtk, AddedAtk, 0);
  if ( v15 )
    LODWORD(v15) = v15->fields._Hp_k__BackingField;
  if ( !isGrandServant )
  {
    AddedHp = 0;
    goto LABEL_13;
  }
  if ( !grandInfo )
LABEL_14:
    sub_2213CDC(v20, v21);
  AddedHp = UserServantGrandInfo__get_AddedHp(grandInfo, 0);
LABEL_13:
  UICharaGraphRender__SetHp((UICharaGraphRender_o *)this, (int32_t)v15, adjustHp, AddedHp, 0);
  UICharaGraphTexture__LoadCharacter(this, 0, v25);
}


void UICharaGraphTexture__SetCommand(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_59720B9 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59720B9 = 1;
  }
  if ( !userCommandCodeEntity )
    sub_2213CDC(this, userCommandCodeEntity);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_50939632(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_59720BA & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59720BA = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_2213CDC(this, userCommandCodeCollectionEntity);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      userCommandCodeCollectionEntity);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_50939780(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_59720BB & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59720BB = 1;
  }
  if ( !commandCodeEntity )
    sub_2213CDC(this, commandCodeEntity);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, commandCodeEntity);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_50939928(
        UICharaGraphTexture_o *this,
        int32_t commandCodeId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  UICharaGraphRender__SetCommand((UICharaGraphRender_o *)this, commandCodeId, 0);
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v6);
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphTexture__SetDepth(UICharaGraphTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *name2Texture; // x21

  if ( (byte_59720C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720C1 = 1;
  }
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d, 0);
  baseSprite = (UIWidget_o *)this->fields.bodyTexture;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 1, 0);
  baseSprite = (UIWidget_o *)this->fields.frameTopSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 2, 0);
  baseSprite = (UIWidget_o *)this->fields.frameBottomSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 2, 0);
  baseSprite = (UIWidget_o *)this->fields.frameLeftSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 3, 0);
  baseSprite = (UIWidget_o *)this->fields.frameRightSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 3, 0);
  baseSprite = (UIWidget_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 4, 0);
  baseSprite = (UIWidget_o *)this->fields.classSprite;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 4, 0);
  baseSprite = (UIWidget_o *)this->fields.nameTexture;
  if ( !baseSprite )
    goto LABEL_20;
  UIWidget__set_depth(baseSprite, d + 5, 0);
  name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
  {
    baseSprite = (UIWidget_o *)this->fields.name2Texture;
    if ( !baseSprite )
      goto LABEL_20;
    UIWidget__set_depth(baseSprite, d + 5, 0);
  }
  baseSprite = (UIWidget_o *)this->fields.attackLabel;
  if ( !baseSprite
    || (UIWidget__set_depth(baseSprite, d + 6, 0), (baseSprite = (UIWidget_o *)this->fields.hpLabel) == 0) )
  {
LABEL_20:
    sub_2213CDC(baseSprite, *(_QWORD *)&d);
  }
  UIWidget__set_depth(baseSprite, d + 6, 0);
}


void UICharaGraphTexture__SetEquip(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t atk,
        int32_t hp,
        System_Int32_array *idxs,
        bool isNpcFollowerServantEquip,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x2

  UICharaGraphRender__SetCharacter_50929424(
    (UICharaGraphRender_o *)this,
    svtId,
    limitCount,
    0,
    0,
    0,
    0,
    isNpcFollowerServantEquip,
    idxs,
    0,
    0);
  UICharaGraphRender__SetAtk((UICharaGraphRender_o *)this, atk, 0, 0, 0);
  UICharaGraphRender__SetHp((UICharaGraphRender_o *)this, hp, 0, 0, 0);
  UICharaGraphTexture__LoadCharacter(this, 0, v11);
}


void UICharaGraphTexture__SetExCharaGraph(
        UICharaGraphTexture_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v4; // w21
  int32_t v5; // w20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct System_String_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  __int64 v17; // x1
  int32_t imageLimitCounta; // [xsp+8h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-34h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_59720C0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_59720C0 = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v8);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v9 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0);
  this->fields.loadName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
  AssetManager__loadAssetStorage(v9, v16, 1, 0, 0);
}


void UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  System_String_o *frameName; // x20
  float v4; // s9
  float v5; // s8
  bool v6; // zf
  float v7; // s10
  float v8; // s11
  _BOOL8 IsHpBoost; // x0
  const MethodInfo *v10; // x2
  UISprite_o *IsNullOrEmpty; // x0
  System_String_o *v12; // x1
  float v13; // s12
  float v14; // s13
  int32_t baseKind; // w8
  UISprite_o *frameLeftSprite; // x21
  __int64 v17; // x1
  System_String_o *v18; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v20; // x0
  UISprite_o *v21; // x21
  System_String_o *v22; // x0
  UISprite_o *v23; // x21
  System_String_o *v24; // x0
  UISprite_o *v25; // x20
  System_String_o *v26; // x0
  UISprite_o *classSprite; // x20
  System_String_o *v28; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v30; // x20
  UISprite_o *v31; // x21
  __int64 v32; // x1
  System_String_o *v33; // x22
  UISprite_o *v34; // x21
  System_String_o *v35; // x0
  UISprite_o *v36; // x20
  UISprite_o *frameTopSprite; // x21
  __int64 v38; // x1
  System_String_o *v39; // x22
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v41; // x0
  UISprite_o *raritySprite; // x20
  System_String_o *v43; // x0
  __int64 v44; // x1
  int32_t atk; // w20
  BalanceConfig_c *v46; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v48; // w22
  UILabel_o *attackLabel; // x20
  int32_t hp; // w21
  struct UILabel_o *hpLabel; // x20
  unsigned __int64 *v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x21
  UILabel_o *v55; // x20
  int32_t v56; // w22
  unsigned __int64 v57; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59720BD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_11423/*"R"*/);
    sub_2213A60(&StringLiteral_19549/*"e"*/);
    sub_2213A60(&StringLiteral_18457/*"c"*/);
    sub_2213A60(&StringLiteral_13873/*"T"*/);
    sub_2213A60(&StringLiteral_8598/*"L"*/);
    sub_2213A60(&StringLiteral_2622/*"B"*/);
    sub_2213A60(&StringLiteral_19810/*"eframeB_hp"*/);
    sub_2213A60(&StringLiteral_21539/*"img_ribbon_noblephantasmup"*/);
    sub_2213A60(&StringLiteral_19809/*"eframeB_atk"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59720BD = 1;
  }
  frameName = this->fields.frameName;
  v57 = 0;
  v4 = 1.0;
  v5 = 0.015686;
  v6 = !UICharaGraphRender__IsAtkBoost((UICharaGraphRender_o *)this, 0);
  if ( v6 )
    v7 = 1.0;
  else
    v7 = 0.92157;
  if ( v6 )
    v8 = 1.0;
  else
    v8 = 0.015686;
  IsHpBoost = UICharaGraphRender__IsHpBoost((UICharaGraphRender_o *)this, 0);
  if ( IsHpBoost )
    v4 = 0.92157;
  else
    v5 = 1.0;
  UICharaGraphTexture__InitSprite((UICharaGraphTexture_o *)IsHpBoost, this->fields.materialTdSprite, v10);
  IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(frameName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = this->fields.frameLeftSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
LABEL_14:
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = this->fields.frameRightSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = this->fields.frameTopSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = this->fields.frameBottomSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = this->fields.raritySprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
LABEL_19:
    IsNullOrEmpty = this->fields.classSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
LABEL_21:
    v13 = 1.0;
    v14 = 1.0;
    goto LABEL_22;
  }
  baseKind = this->fields.baseKind;
  frameLeftSprite = this->fields.frameLeftSprite;
  if ( baseKind == 2 )
  {
    if ( !frameLeftSprite )
      goto LABEL_93;
    UISprite__set_spriteName(this->fields.frameLeftSprite, 0, 0);
    IsNullOrEmpty = this->fields.frameRightSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
    frameTopSprite = this->fields.frameTopSprite;
    v39 = System_String__Concat_75694928(
            (System_String_o *)StringLiteral_18457/*"c"*/,
            frameName,
            (System_String_o *)StringLiteral_13873/*"T"*/,
            0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
    AtlasManager__SetCharaGraphaOption(frameTopSprite, v39, 0);
    frameBottomSprite = this->fields.frameBottomSprite;
    v41 = System_String__Concat_75694928(
            (System_String_o *)StringLiteral_18457/*"c"*/,
            frameName,
            (System_String_o *)StringLiteral_2622/*"B"*/,
            0);
    AtlasManager__SetCharaGraphaOption(frameBottomSprite, v41, 0);
    raritySprite = this->fields.raritySprite;
    v43 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
    AtlasManager__SetCharaGraphaOption(raritySprite, v43, 0);
    IsNullOrEmpty = this->fields.raritySprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
      IsNullOrEmpty,
      IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    goto LABEL_19;
  }
  if ( baseKind != 1 )
  {
    if ( !baseKind )
    {
      v18 = System_String__Concat_75651716(frameName, (System_String_o *)StringLiteral_8598/*"L"*/, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
      AtlasManager__SetCharaGraphaOption(frameLeftSprite, v18, 0);
      frameRightSprite = this->fields.frameRightSprite;
      v20 = System_String__Concat_75651716(frameName, (System_String_o *)StringLiteral_11423/*"R"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v20, 0);
      v21 = this->fields.frameTopSprite;
      v22 = System_String__Concat_75651716(frameName, (System_String_o *)StringLiteral_13873/*"T"*/, 0);
      AtlasManager__SetCharaGraphaOption(v21, v22, 0);
      v23 = this->fields.frameBottomSprite;
      v24 = System_String__Concat_75651716(frameName, (System_String_o *)StringLiteral_2622/*"B"*/, 0);
      AtlasManager__SetCharaGraphaOption(v23, v24, 0);
      IsNullOrEmpty = this->fields.frameBottomSprite;
      if ( !IsNullOrEmpty )
        goto LABEL_93;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
        IsNullOrEmpty,
        IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
      v25 = this->fields.raritySprite;
      v26 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
      AtlasManager__SetCharaGraphaOption(v25, v26, 0);
      IsNullOrEmpty = this->fields.raritySprite;
      if ( !IsNullOrEmpty )
        goto LABEL_93;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
        IsNullOrEmpty,
        IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
      classSprite = this->fields.classSprite;
      v28 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)this, 0);
      AtlasManager__SetCharaGraphaOption(classSprite, v28, 0);
      if ( SvtType__IsSvtMaterialTd(this->fields.svtType, 0) )
      {
        materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
        {
          v30 = this->fields.materialTdSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
          AtlasManager__SetCharaGraphaOption(v30, (System_String_o *)StringLiteral_21539/*"img_ribbon_noblephantasmup"*/, 0);
        }
      }
      goto LABEL_21;
    }
    if ( !frameLeftSprite )
      goto LABEL_93;
    IsNullOrEmpty = this->fields.frameLeftSprite;
    goto LABEL_14;
  }
  if ( !frameLeftSprite )
    goto LABEL_93;
  UISprite__set_spriteName(this->fields.frameLeftSprite, 0, 0);
  IsNullOrEmpty = this->fields.frameRightSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
  IsNullOrEmpty = this->fields.classSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
  v31 = this->fields.frameTopSprite;
  v33 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_19549/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_13873/*"T"*/,
          0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
  AtlasManager__SetCharaGraphaOption(v31, v33, 0);
  v34 = this->fields.frameBottomSprite;
  v35 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_19549/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_2622/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(v34, v35, 0);
  v36 = this->fields.raritySprite;
  if ( this->fields.saintGraphType != 1 )
  {
    v54 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53);
    AtlasManager__SetCharaGraphaOption(v36, v54, 0);
    IsNullOrEmpty = this->fields.raritySprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
      IsNullOrEmpty,
      IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_19809/*"eframeB_atk"*/, 0);
    IsNullOrEmpty = this->fields.equipAtkSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
      IsNullOrEmpty,
      IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_19810/*"eframeB_hp"*/, 0);
    IsNullOrEmpty = this->fields.equipHpSprite;
    if ( !IsNullOrEmpty )
      goto LABEL_93;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
      IsNullOrEmpty,
      IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
    goto LABEL_21;
  }
  if ( !v36 )
    goto LABEL_93;
  UISprite__set_spriteName(this->fields.raritySprite, 0, 0);
  IsNullOrEmpty = this->fields.equipAtkSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
  IsNullOrEmpty = this->fields.equipHpSprite;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  UISprite__set_spriteName(IsNullOrEmpty, 0, 0);
  v13 = 0.0;
  v14 = 0.0;
LABEL_22:
  if ( this->fields.baseKind != 2
    && this->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(this->fields.svtType, 0) )
  {
    if ( SvtType__IsStatusUp(this->fields.svtType, 0) )
    {
      atk = this->fields.atk;
      v46 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44);
        v46 = BalanceConfig_TypeInfo;
      }
      static_fields = v46->static_fields;
      v48 = static_fields->StatusUpAdjustAtk * atk;
      attackLabel = this->fields.attackLabel;
      hp = static_fields->StatusUpAdjustHp * this->fields.hp;
      v57 = __PAIR64__(v48, hp);
      IsNullOrEmpty = (UISprite_o *)System_Int32__ToString((int32_t)&v57 + 4, 0);
      v12 = (System_String_o *)IsNullOrEmpty;
      if ( v48 >= 1 )
      {
        IsNullOrEmpty = (UISprite_o *)System_String__Concat_75651716(
                                        (System_String_o *)StringLiteral_861/*"+"*/,
                                        (System_String_o *)IsNullOrEmpty,
                                        0);
        v12 = (System_String_o *)IsNullOrEmpty;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, v12, 0);
        hpLabel = this->fields.hpLabel;
        v52 = &v57;
LABEL_81:
        IsNullOrEmpty = (UISprite_o *)System_Int32__ToString((int32_t)v52, 0);
        v12 = (System_String_o *)IsNullOrEmpty;
        if ( hp < 1 )
          goto LABEL_90;
        IsNullOrEmpty = (UISprite_o *)System_String__Concat_75651716(
                                        (System_String_o *)StringLiteral_861/*"+"*/,
                                        (System_String_o *)IsNullOrEmpty,
                                        0);
LABEL_89:
        v12 = (System_String_o *)IsNullOrEmpty;
LABEL_90:
        if ( !hpLabel )
          goto LABEL_93;
LABEL_91:
        IsNullOrEmpty = (UISprite_o *)hpLabel;
        goto LABEL_28;
      }
    }
    else
    {
      IsNullOrEmpty = (UISprite_o *)SvtType__IsKeepServantEquip(this->fields.svtType, 0);
      v55 = this->fields.attackLabel;
      v56 = this->fields.atk;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        IsNullOrEmpty = (UISprite_o *)System_Int32__ToString((int)this + 452, 0);
        v12 = (System_String_o *)IsNullOrEmpty;
        if ( v56 >= 1 )
        {
          IsNullOrEmpty = (UISprite_o *)System_String__Concat_75651716(
                                          (System_String_o *)StringLiteral_861/*"+"*/,
                                          (System_String_o *)IsNullOrEmpty,
                                          0);
          v12 = (System_String_o *)IsNullOrEmpty;
        }
        if ( v55 )
        {
          UILabel__set_text(v55, v12, 0);
          hpLabel = this->fields.hpLabel;
          hp = this->fields.hp;
          LODWORD(v52) = (_DWORD)this + 456;
          goto LABEL_81;
        }
      }
      else
      {
        if ( v56 < 0 )
        {
          v12 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          IsNullOrEmpty = (UISprite_o *)System_Int32__ToString((int)this + 452, 0);
          v12 = (System_String_o *)IsNullOrEmpty;
        }
        if ( v55 )
        {
          UILabel__set_text(v55, v12, 0);
          hpLabel = this->fields.hpLabel;
          if ( this->fields.hp < 0 )
          {
            v12 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !hpLabel )
              goto LABEL_93;
            goto LABEL_91;
          }
          IsNullOrEmpty = (UISprite_o *)System_Int32__ToString((int)this + 456, 0);
          goto LABEL_89;
        }
      }
    }
LABEL_93:
    sub_2213CDC(IsNullOrEmpty, v12);
  }
  IsNullOrEmpty = (UISprite_o *)this->fields.attackLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (UISprite_o *)this->fields.hpLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, v12, 0);
  IsNullOrEmpty = (UISprite_o *)this->fields.attackLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  v58.fields.g = v7;
  v58.fields.b = v8;
  v58.fields.a = v14;
  v58.fields.r = 1.0;
  UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v58, 0);
  IsNullOrEmpty = (UISprite_o *)this->fields.hpLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_93;
  v59.fields.g = v4;
  v59.fields.b = v5;
  v59.fields.a = v13;
  v59.fields.r = 1.0;
  UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v59, 0);
}


void UICharaGraphTexture__SetTexture(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v5; // x1
  UITexture_o *v6; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *NameTexture; // x20
  bool v9; // w8
  struct UITexture_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *name2Texture; // x20
  struct UITexture_o *v13; // x20
  struct UITexture_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o NameUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59720BF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720BF = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (UnityEngine_Component_o *)UICharaGraphRender__GetBodyTexture(
                                            (UICharaGraphRender_o *)this,
                                            this->fields.assetMain,
                                            0);
  if ( !bodyTexture )
    goto LABEL_31;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Component_o *, const MethodInfo *))bodyTexture->klass->vtable._27_set_mainTexture.methodPtr)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._27_set_mainTexture.method);
  v6 = this->fields.bodyTexture;
  BodyUvRect = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, 0);
  if ( !v6 )
    goto LABEL_31;
  UITexture__set_uvRect(v6, BodyUvRect, 0);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality(NameTexture, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.nameTexture;
  if ( v9 )
  {
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Object_o *, void *))gameObject->klass[1].vtable._3_ToString.method)(
                                              gameObject,
                                              NameTexture,
                                              gameObject->klass[2]._1.image);
    v10 = this->fields.nameTexture;
    if ( !v10 )
      goto LABEL_31;
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v10->fields.mRect, 0);
    UITexture__set_uvRect(v10, NameUvRect, 0);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v13 = this->fields.name2Texture;
          gameObject = (UnityEngine_Component_o *)UICharaGraphRender__GetName2Texture(
                                                    (UICharaGraphRender_o *)this,
                                                    this->fields.assetMain,
                                                    0);
          if ( v13 )
          {
            gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Component_o *, const MethodInfo *))v13->klass->vtable._27_set_mainTexture.methodPtr)(
                                                      v13,
                                                      gameObject,
                                                      v13->klass->vtable._27_set_mainTexture.method);
            v14 = this->fields.name2Texture;
            if ( v14 )
            {
              v19 = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v14->fields.mRect, 0);
              UITexture__set_uvRect(v14, v19, 0);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_2213CDC(gameObject, v5);
    }
  }
  else
  {
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))gameObject->klass[1].vtable._3_ToString.method)(
      gameObject,
      0,
      gameObject->klass[2]._1.image);
    v16 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))gameObject->klass[1].vtable._3_ToString.method)(
        gameObject,
        0,
        gameObject->klass[2]._1.image);
    }
  }
}


void UICharaGraphTexture__SetTweenColor(UICharaGraphTexture_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_2213CDC(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}


bool UICharaGraphTexture__get_IsLoad(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}


void UICharaGraphTexture___c__DisplayClass45_0___ctor(
        UICharaGraphTexture___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UICharaGraphTexture___c__DisplayClass45_0___ExecuteCharaGraphFadeout_b__0(
        UICharaGraphTexture___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishAction, 0);
}