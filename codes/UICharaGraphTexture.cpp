void UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4E061FE & 1) == 0 )
  {
    sub_1CE6700(&UICharaGraphRender_TypeInfo);
    byte_4E061FE = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  UICharaGraphRender___ctor((UICharaGraphRender_o *)this, 0);
}


void UICharaGraphTexture__EndLoadAsset(UICharaGraphTexture_o *this, AssetData_o *assetMain, const MethodInfo *method)
{
  System_String_o *loadName; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  AssetData_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4E061F4 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    byte_4E061F4 = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_41674432(assetMain, loadName, 0) )
      {
        v12 = this->fields.assetMain;
        if ( v12 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_41676764(v12, 0);
        }
        this->fields.assetMain = assetMain;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetMain,
          (int32_t)assetMain,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this->fields.loadName = 0;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadName, 0, v13, v14, v15, v16, v17, v18);
        UICharaGraphTexture__SetFrame(this, v19);
        UICharaGraphTexture__SetTexture(this, v20);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v20; // x21

  if ( (byte_4E061FB & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&EventDelegate_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_UICharaGraphTexture___c__DisplayClass45_0__ExecuteCharaGraphFadeout_b__0__);
    sub_1CE6700(&UICharaGraphTexture___c__DisplayClass45_0_TypeInfo);
    byte_4E061FB = 1;
  }
  v7 = sub_1CE694C(UICharaGraphTexture___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = finishAction;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)finishAction, v10, v11, v12, v13, v14, v15);
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v18 = UnityEngine_Component__get_gameObject(bodyTexture, 0);
        bodyTexture = (UnityEngine_Component_o *)TweenAlpha__Begin(v18, duration, 0.0, 0);
        if ( !*(_QWORD *)(v7 + 16) )
          return;
        if ( bodyTexture )
        {
          klass = (System_Collections_Generic_List_EventDelegate__o *)bodyTexture[3].klass;
          v20 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v20,
            (Il2CppObject *)v7,
            Method_UICharaGraphTexture___c__DisplayClass45_0__ExecuteCharaGraphFadeout_b__0__,
            0);
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Set_50365832(klass, v20, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1CE6958(bodyTexture, v9);
  }
}


void UICharaGraphTexture__ExecuteNameCrossFade(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *name2Texture; // x20
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4E061F8 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061F8 = 1;
  }
  if ( this->fields.realNameCheck == 3 )
  {
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
    {
      nameTexture = (UnityEngine_Component_o *)this->fields.name2Texture;
      if ( nameTexture )
      {
        v8 = UnityEngine_Component__get_gameObject(nameTexture, 0);
        TweenAlpha__Begin(v8, duration, 1.0, 0);
        return;
      }
LABEL_11:
      sub_1CE6958(nameTexture, method);
    }
  }
}


void UICharaGraphTexture__ExecuteSpriteFadein(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4E061FC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061FC = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1CE6958(0, v6);
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

  if ( (byte_4E061FA & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061FA = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1CE6958(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
  }
}


void UICharaGraphTexture__ExecuteSpriteFadeoutForce(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Object_o *v4; // x20
  bool v5; // w0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_4E061F9 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061F9 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(v4, 0, 0);
    Component_object = 0;
    if ( v5 )
    {
      v8 = this->fields.spriteBase;
      if ( !v8 )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_22;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        0.0);
    }
    nameTexture = (UnityEngine_Object_o *)this->fields.nameTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameTexture, 0, 0) )
    {
      v8 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v8 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v8->klass[1]._1.element_class)(
          v8,
          v8->klass[1]._1.castClass,
          0.0);
        return;
      }
LABEL_22:
      sub_1CE6958(v8, v6);
    }
  }
}


void UICharaGraphTexture__InitSprite(UICharaGraphTexture_o *this, UISprite_o *sprite, const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4E061FD & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061FD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( v4 )
  {
    if ( !sprite )
      sub_1CE6958(v4, v5);
    UISprite__set_spriteName(sprite, 0, 0);
  }
}


void UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v3; // x23
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v7; // x1
  System_String_o *p_callbackFunc; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v10; // x1
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x23
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Action_c *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_o *v38; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x21

  if ( (byte_4E061F2 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4E061F2 = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_41804380(
                         this->fields.imageSvtId,
                         this->fields.imagePartsGroupIdxs,
                         0);
  p_callbackFunc = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_65158148(loadName, p_callbackFunc, 0) )
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
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v23, 0);
LABEL_21:
    if ( !callbackFunc )
    {
LABEL_28:
      UICharaGraphTexture__SetBeforeFrame(this, v7);
      this->fields.loadName = p_callbackFunc;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.loadName,
        (int32_t)p_callbackFunc,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v38 = this->fields.loadName;
      v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v39, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v38, v39, 1, 0, 0);
      return;
    }
    v3 = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v24 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v18 = v24;
    if ( !v24 )
      goto LABEL_26;
    v31 = System_Action_TypeInfo;
    if ( (System_Action_c *)v24->klass == System_Action_TypeInfo )
    {
      v3->klass = (GrandQuestFolderBoardItem_c *)v24;
      if ( (System_Action_c *)v24->klass == v31 )
        goto LABEL_27;
    }
LABEL_25:
    sub_1CE6CF4(v18);
LABEL_26:
    v3->klass = (GrandQuestFolderBoardItem_c *)v18;
LABEL_27:
    sub_1CE66A4(v3, (int32_t)v18, v25, v26, v27, v28, v29, v30);
    goto LABEL_28;
  }
  assetMain = this->fields.assetMain;
  if ( !assetMain )
    goto LABEL_21;
  name = assetMain->fields.name;
  if ( !name )
    sub_1CE6958(0, v7);
  if ( !System_String__Equals_65158148(name, p_callbackFunc, 0) )
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
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o *loadName; // x20
  GrandQuestFolderBoardItem_o *p_loadName; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4E061EB & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061EB = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1CE6958(v5, v4);
  }
LABEL_15:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41676764(assetMain, 0);
    this->fields.assetMain = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.assetMain, 0, v8, v9, v10, v11, v12, v13);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (GrandQuestFolderBoardItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1CE66A4(p_loadName, 0, v16, v17, v18, v19, v20, v21);
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
    sub_1CE6958(bodyTexture, isActive);
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
    sub_1CE6958(nameTexture, method);
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

  if ( (byte_4E061EC & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E061EC = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0)) == 0 )
  {
    sub_1CE6958(Instance, v16);
  }
  v17 = Instance;
  UICharaGraphRender__SetAtk((UICharaGraphRender_o *)this, *((_DWORD *)Instance + 11), 0, 0, 0);
  UICharaGraphRender__SetHp((UICharaGraphRender_o *)this, v17[9], 0, 0, 0);
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v18);
}


void UICharaGraphTexture__SetCharacter_45042576(
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
  if ( (byte_4E061ED & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E061ED = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_15;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v8;
  *(_QWORD *)&v26.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v26, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(userSvtEntity->fields.limitCount, 0);
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
    sub_1CE6958(this, userSvtEntity);
  }
  AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
  UICharaGraphRender__SetHp(v6, v23, adjustHp, AddedHp, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v25);
}


void UICharaGraphTexture__SetCharacter_45042968(
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
  _BOOL4 v11; // w24
  UICharaGraphRender_o *v16; // x20
  _BOOL4 IsGrandServant; // w26
  bool v18; // w29
  int32_t ServantId; // w0
  __int64 v20; // x27
  __int64 v21; // x28
  int32_t v22; // w25
  int32_t v23; // w0
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Hp_k__BackingField; // x12
  bool v26; // zf
  int32_t *v27; // x8
  int32_t *v28; // x9
  int32_t v29; // w22
  int32_t v30; // w23
  UserServantGrandInfo_o *v31; // x25
  int32_t adjustAtk; // w24
  int32_t AddedAtk; // w0
  int32_t adjustHp; // w21
  int32_t AddedHp; // w3
  const MethodInfo *v36; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v11 = isDisableGrand;
  v16 = (UICharaGraphRender_o *)this;
  if ( (byte_4E061EE & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UICharaGraphTexture_o *)sub_1CE6700(&UserServantGrandInfo_TypeInfo);
    byte_4E061EE = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  v18 = (IsGrandServant || isGrandSvt) && !v11;
  ServantId = UserServantEntity__GetServantId(userSvtEntity, overrideTransformVal, 0);
  v21 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  v22 = ServantId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v21;
  *(_QWORD *)&v37.fields.fakeValue = v20;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v37, 0);
  UICharaGraphRender__SetCharacter_45033940(
    v16,
    v22,
    v23,
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
  v26 = OverwriteStatus_k__BackingField == 0;
  v27 = OverwriteStatus_k__BackingField
      ? &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField
      : &userSvtEntity->fields.atk;
  v28 = v26 ? &userSvtEntity->fields.hp : p_Hp_k__BackingField;
  v29 = *v28;
  v30 = *v27;
  if ( IsGrandServant || !v18 )
  {
    v31 = (UserServantGrandInfo_o *)this;
    if ( IsGrandServant && v11 )
    {
      if ( !this )
        goto LABEL_25;
      v30 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v31, 0);
      v29 -= (int)this;
    }
  }
  else
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__Make(userSvtEntity, 1, 0);
    if ( !this )
      goto LABEL_25;
    v31 = (UserServantGrandInfo_o *)this;
    v30 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v31, 0);
    v29 += (int)this;
  }
  adjustAtk = userSvtEntity->fields.adjustAtk;
  if ( !v18 )
  {
    UICharaGraphRender__SetAtk(v16, v30, adjustAtk, 0, 0);
    adjustHp = userSvtEntity->fields.adjustHp;
    AddedHp = 0;
    goto LABEL_24;
  }
  if ( !v31 )
LABEL_25:
    sub_1CE6958(this, userSvtEntity);
  AddedAtk = UserServantGrandInfo__get_AddedAtk(v31, 0);
  UICharaGraphRender__SetAtk(v16, v30, adjustAtk, AddedAtk, 0);
  adjustHp = userSvtEntity->fields.adjustHp;
  AddedHp = UserServantGrandInfo__get_AddedHp(v31, 0);
LABEL_24:
  UICharaGraphRender__SetHp(v16, v29, adjustHp, AddedHp, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v16, callbackFunc, v36);
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphTexture__SetCharacter_45043580(
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

  v15 = overwriteStatus;
  this->fields._OverwriteStatus_k__BackingField = overwriteStatus;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)overwriteStatus,
    limitCount,
    exceedCount,
    *(System_String_o **)&lv,
    imageLimitCount,
    (int64_t)overwriteStatus,
    *(System_String_o **)&adjustAtk);
  UICharaGraphRender__SetCharacter_45033940(
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
    sub_1CE6958(v20, v21);
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
  if ( (byte_4E061EF & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E061EF = 1;
  }
  if ( !userCommandCodeEntity )
    sub_1CE6958(this, userCommandCodeEntity);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_45044172(
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
  if ( (byte_4E061F0 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E061F0 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_1CE6958(this, userCommandCodeCollectionEntity);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_45044320(
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
  if ( (byte_4E061F1 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E061F1 = 1;
  }
  if ( !commandCodeEntity )
    sub_1CE6958(this, commandCodeEntity);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v11, 0);
  UICharaGraphRender__SetCommand(v6, v9, 0);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v10);
}


void UICharaGraphTexture__SetCommand_45044468(
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
  UnityEngine_Object_o *name2Texture; // x22
  int32_t v7; // w20

  if ( (byte_4E061F7 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061F7 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
  {
    baseSprite = (UIWidget_o *)this->fields.name2Texture;
    if ( !baseSprite )
      goto LABEL_20;
    UIWidget__set_depth(baseSprite, d + 5, 0);
  }
  baseSprite = (UIWidget_o *)this->fields.attackLabel;
  if ( !baseSprite
    || (v7 = d + 6, UIWidget__set_depth(baseSprite, v7, 0), (baseSprite = (UIWidget_o *)this->fields.hpLabel) == 0) )
  {
LABEL_20:
    sub_1CE6958(baseSprite, *(_QWORD *)&d);
  }
  UIWidget__set_depth(baseSprite, v7, 0);
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

  UICharaGraphRender__SetCharacter_45033940(
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-34h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4E061F6 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4E061F6 = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1CE6958(Instance, v8);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v9 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0);
  this->fields.loadName = v9;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v16, 1, 0, 0);
}


void UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  System_String_o *frameName; // x20
  float v4; // s9
  float v5; // s8
  bool v6; // zf
  float v7; // s11
  float v8; // s10
  _BOOL8 IsHpBoost; // x0
  const MethodInfo *v10; // x2
  System_String_o *v11; // x1
  UISprite_o *frameLeftSprite; // x0
  float v13; // s12
  float v14; // s13
  int32_t baseKind; // w22
  UISprite_o *v16; // x21
  System_String_o *v17; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v19; // x0
  UISprite_o *frameTopSprite; // x21
  System_String_o *v21; // x0
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v23; // x0
  UISprite_o *raritySprite; // x20
  System_String_o *v25; // x0
  UISprite_o *classSprite; // x20
  System_String_o *v27; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v29; // x20
  UISprite_o *v30; // x21
  System_String_o *v31; // x22
  UISprite_o *v32; // x21
  System_String_o *v33; // x0
  UISprite_o *v34; // x20
  UISprite_o *v35; // x21
  System_String_o *v36; // x22
  UISprite_o *v37; // x21
  System_String_o *v38; // x0
  UISprite_o *v39; // x20
  System_String_o *v40; // x0
  int32_t atk; // w20
  BalanceConfig_c *v42; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v44; // w21
  UILabel_o *attackLabel; // x20
  struct UILabel_o *hpLabel; // x20
  int32_t hp; // w21
  __int64 *v48; // x0
  System_String_o *v49; // x21
  bool IsKeepServantEquip; // w0
  UILabel_o *v51; // x20
  int32_t v52; // w22
  bool v53; // w8
  __int64 v54; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E061F3 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_802/*"+"*/);
    sub_1CE6700(&StringLiteral_11058/*"R"*/);
    sub_1CE6700(&StringLiteral_18921/*"e"*/);
    sub_1CE6700(&StringLiteral_17874/*"c"*/);
    sub_1CE6700(&StringLiteral_13455/*"T"*/);
    sub_1CE6700(&StringLiteral_8314/*"L"*/);
    sub_1CE6700(&StringLiteral_2524/*"B"*/);
    sub_1CE6700(&StringLiteral_19179/*"eframeB_hp"*/);
    sub_1CE6700(&StringLiteral_20846/*"img_ribbon_noblephantasmup"*/);
    sub_1CE6700(&StringLiteral_19178/*"eframeB_atk"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E061F3 = 1;
  }
  v54 = 0;
  frameName = this->fields.frameName;
  v4 = 0.92157;
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
  if ( !IsHpBoost )
  {
    v5 = 1.0;
    v4 = 1.0;
  }
  UICharaGraphTexture__InitSprite((UICharaGraphTexture_o *)IsHpBoost, this->fields.materialTdSprite, v10);
  if ( System_String__IsNullOrEmpty(frameName, 0) )
  {
    frameLeftSprite = this->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = this->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = this->fields.frameTopSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    goto LABEL_15;
  }
  baseKind = this->fields.baseKind;
  if ( baseKind != 1 )
  {
    if ( !baseKind )
    {
      v16 = this->fields.frameLeftSprite;
      v17 = System_String__Concat_65122828(frameName, (System_String_o *)StringLiteral_8314/*"L"*/, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v16, v17, 0);
      frameRightSprite = this->fields.frameRightSprite;
      v19 = System_String__Concat_65122828(frameName, (System_String_o *)StringLiteral_11058/*"R"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v19, 0);
      frameTopSprite = this->fields.frameTopSprite;
      v21 = System_String__Concat_65122828(frameName, (System_String_o *)StringLiteral_13455/*"T"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v21, 0);
      frameBottomSprite = this->fields.frameBottomSprite;
      v23 = System_String__Concat_65122828(frameName, (System_String_o *)StringLiteral_2524/*"B"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v23, 0);
      frameLeftSprite = this->fields.frameBottomSprite;
      if ( !frameLeftSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      raritySprite = this->fields.raritySprite;
      v25 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
      AtlasManager__SetCharaGraphaOption(raritySprite, v25, 0);
      frameLeftSprite = this->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      classSprite = this->fields.classSprite;
      v27 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)this, 0);
      AtlasManager__SetCharaGraphaOption(classSprite, v27, 0);
      if ( SvtType__IsSvtMaterialTd(this->fields.svtType, 0) )
      {
        materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
        {
          v29 = this->fields.materialTdSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCharaGraphaOption(v29, (System_String_o *)StringLiteral_20846/*"img_ribbon_noblephantasmup"*/, 0);
        }
      }
      goto LABEL_20;
    }
    frameLeftSprite = this->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = this->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    v35 = this->fields.frameTopSprite;
    if ( baseKind == 2 )
    {
      v36 = System_String__Concat_65161092(
              (System_String_o *)StringLiteral_17874/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_13455/*"T"*/,
              0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v35, v36, 0);
      v37 = this->fields.frameBottomSprite;
      v38 = System_String__Concat_65161092(
              (System_String_o *)StringLiteral_17874/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_2524/*"B"*/,
              0);
      AtlasManager__SetCharaGraphaOption(v37, v38, 0);
      v39 = this->fields.raritySprite;
      v40 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
      AtlasManager__SetCharaGraphaOption(v39, v40, 0);
      frameLeftSprite = this->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      goto LABEL_18;
    }
    if ( !v35 )
      goto LABEL_92;
    frameLeftSprite = this->fields.frameTopSprite;
LABEL_15:
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = this->fields.frameBottomSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = this->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
LABEL_18:
    frameLeftSprite = this->fields.classSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
LABEL_20:
    v13 = 1.0;
    v14 = 1.0;
    goto LABEL_21;
  }
  frameLeftSprite = this->fields.frameLeftSprite;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = this->fields.frameRightSprite;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = this->fields.classSprite;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  v30 = this->fields.frameTopSprite;
  v31 = System_String__Concat_65161092(
          (System_String_o *)StringLiteral_18921/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_13455/*"T"*/,
          0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(v30, v31, 0);
  v32 = this->fields.frameBottomSprite;
  v33 = System_String__Concat_65161092(
          (System_String_o *)StringLiteral_18921/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_2524/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(v32, v33, 0);
  v34 = this->fields.raritySprite;
  if ( this->fields.saintGraphType != 1 )
  {
    v49 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)this, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCharaGraphaOption(v34, v49, 0);
    frameLeftSprite = this->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(this->fields.equipAtkSprite, (System_String_o *)StringLiteral_19178/*"eframeB_atk"*/, 0);
    frameLeftSprite = this->fields.equipAtkSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(this->fields.equipHpSprite, (System_String_o *)StringLiteral_19179/*"eframeB_hp"*/, 0);
    frameLeftSprite = this->fields.equipHpSprite;
    if ( !frameLeftSprite )
      goto LABEL_92;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    goto LABEL_20;
  }
  if ( !v34 )
    goto LABEL_92;
  UISprite__set_spriteName(this->fields.raritySprite, 0, 0);
  frameLeftSprite = this->fields.equipAtkSprite;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = this->fields.equipHpSprite;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  v13 = 0.0;
  v14 = 0.0;
LABEL_21:
  if ( this->fields.baseKind != 2
    && this->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(this->fields.svtType, 0) )
  {
    if ( SvtType__IsStatusUp(this->fields.svtType, 0) )
    {
      atk = this->fields.atk;
      v42 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      static_fields = v42->static_fields;
      v44 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v54) = static_fields->StatusUpAdjustHp * this->fields.hp;
      HIDWORD(v54) = v44;
      attackLabel = this->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v54 + 4, 0);
      v11 = (System_String_o *)frameLeftSprite;
      if ( v44 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_65122828(
                                          (System_String_o *)StringLiteral_802/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0);
        v11 = (System_String_o *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, v11, 0);
        hpLabel = this->fields.hpLabel;
        hp = v54;
        v48 = &v54;
LABEL_80:
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)v48, 0);
        v11 = (System_String_o *)frameLeftSprite;
        if ( hp < 1 )
          goto LABEL_89;
        frameLeftSprite = (UISprite_o *)System_String__Concat_65122828(
                                          (System_String_o *)StringLiteral_802/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0);
LABEL_88:
        v11 = (System_String_o *)frameLeftSprite;
LABEL_89:
        if ( !hpLabel )
          goto LABEL_92;
LABEL_90:
        frameLeftSprite = (UISprite_o *)hpLabel;
        goto LABEL_27;
      }
    }
    else
    {
      IsKeepServantEquip = SvtType__IsKeepServantEquip(this->fields.svtType, 0);
      v51 = this->fields.attackLabel;
      v52 = this->fields.atk;
      v53 = IsKeepServantEquip;
      frameLeftSprite = (UISprite_o *)&this->fields.atk;
      if ( v53 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0);
        v11 = (System_String_o *)frameLeftSprite;
        if ( v52 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_65122828(
                                            (System_String_o *)StringLiteral_802/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0);
          v11 = (System_String_o *)frameLeftSprite;
        }
        if ( v51 )
        {
          UILabel__set_text(v51, v11, 0);
          hpLabel = this->fields.hpLabel;
          hp = this->fields.hp;
          LODWORD(v48) = (_DWORD)this + 456;
          goto LABEL_80;
        }
      }
      else
      {
        if ( v52 < 0 )
        {
          v11 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0);
          v11 = (System_String_o *)frameLeftSprite;
        }
        if ( v51 )
        {
          UILabel__set_text(v51, v11, 0);
          hpLabel = this->fields.hpLabel;
          if ( this->fields.hp < 0 )
          {
            v11 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !hpLabel )
              goto LABEL_92;
            goto LABEL_90;
          }
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)this + 456, 0);
          goto LABEL_88;
        }
      }
    }
LABEL_92:
    sub_1CE6958(frameLeftSprite, v11);
  }
  frameLeftSprite = (UISprite_o *)this->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_92;
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  frameLeftSprite = (UISprite_o *)this->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_92;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
  UILabel__set_text((UILabel_o *)frameLeftSprite, v11, 0);
  frameLeftSprite = (UISprite_o *)this->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_92;
  v55.fields.r = 1.0;
  v55.fields.g = v7;
  v55.fields.b = v8;
  v55.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v55, 0);
  frameLeftSprite = (UISprite_o *)this->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_92;
  v56.fields.r = 1.0;
  v56.fields.g = v4;
  v56.fields.b = v5;
  v56.fields.a = v13;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v56, 0);
}


void UICharaGraphTexture__SetTexture(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x20
  __int64 gameObject; // x0
  __int64 v5; // x1
  UITexture_o *v6; // x20
  UnityEngine_Object_o *NameTexture; // x20
  char v8; // w21
  struct UITexture_o *v9; // x20
  UnityEngine_Object_o *name2Texture; // x20
  struct UITexture_o *v11; // x20
  struct UITexture_o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o NameUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E061F5 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E061F5 = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (__int64)UICharaGraphRender__GetBodyTexture((UICharaGraphRender_o *)this, this->fields.assetMain, 0);
  if ( !bodyTexture )
    goto LABEL_29;
  ((void (__fastcall *)(struct UITexture_o *, __int64, const MethodInfo *))bodyTexture->klass->vtable._27_set_mainTexture.methodPtr)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._27_set_mainTexture.method);
  v6 = this->fields.bodyTexture;
  BodyUvRect = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, 0);
  if ( !v6 )
    goto LABEL_29;
  UITexture__set_uvRect(v6, BodyUvRect, 0);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(NameTexture, 0, 0);
  if ( !this->fields.nameTexture )
    goto LABEL_29;
  v8 = gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nameTexture, 0);
  if ( !gameObject )
    goto LABEL_29;
  if ( (v8 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (*(__int64 (__fastcall **)(__int64, UnityEngine_Object_o *, _QWORD))(*(_QWORD *)gameObject + 744LL))(
                   gameObject,
                   NameTexture,
                   *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v9 = this->fields.nameTexture;
    if ( !v9 )
      goto LABEL_29;
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v9->fields.mRect, 0);
    UITexture__set_uvRect(v9, NameUvRect, 0);
    name2Texture = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(name2Texture, 0, 0) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v11 = this->fields.name2Texture;
          gameObject = (__int64)UICharaGraphRender__GetName2Texture(
                                  (UICharaGraphRender_o *)this,
                                  this->fields.assetMain,
                                  0);
          if ( v11 )
          {
            gameObject = ((__int64 (__fastcall *)(struct UITexture_o *, __int64, const MethodInfo *))v11->klass->vtable._27_set_mainTexture.methodPtr)(
                           v11,
                           gameObject,
                           v11->klass->vtable._27_set_mainTexture.method);
            v12 = this->fields.name2Texture;
            if ( v12 )
            {
              v16 = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v12->fields.mRect, 0);
              UITexture__set_uvRect(v12, v16, 0);
              return;
            }
          }
        }
      }
LABEL_29:
      sub_1CE6958(gameObject, v5);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_29;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
      gameObject,
      0,
      *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v13 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_29;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_29;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
        gameObject,
        0,
        *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
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
    sub_1CE6958(0, v8);
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