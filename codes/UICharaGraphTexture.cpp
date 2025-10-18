void UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C447BB & 1) == 0 )
  {
    sub_1C37058(&UICharaGraphRender_TypeInfo);
    byte_4C447BB = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UICharaGraphTexture__EndLoadAsset(UICharaGraphTexture_o *this, AssetData_o *assetMain, const MethodInfo *method)
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

  if ( (byte_4C447B1 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C447B1 = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40532384(assetMain, loadName, 0) )
      {
        v8 = this->fields.assetMain;
        if ( v8 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40534712(v8, 0);
        }
        this->fields.assetMain = assetMain;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetMain, (int32_t)assetMain, v6, v7);
        this->fields.loadName = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadName, 0, v9, v10);
        UICharaGraphTexture__SetFrame(this, v11);
        UICharaGraphTexture__SetTexture(this, v12);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v13, v14);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v15; // x21

  if ( (byte_4C447B8 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__);
    sub_1C37058(&UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
    byte_4C447B8 = 1;
  }
  v7 = sub_1C372A4(UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = finishAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)finishAction, v9, v10);
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
        v13 = UnityEngine_Component__get_gameObject(bodyTexture, 0);
        bodyTexture = (UnityEngine_Component_o *)TweenAlpha__Begin(v13, duration, 0.0, 0);
        if ( !*(_QWORD *)(v7 + 16) )
          return;
        if ( bodyTexture )
        {
          klass = (System_Collections_Generic_List_EventDelegate__o *)bodyTexture[3].klass;
          v15 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v15,
            (Il2CppObject *)v7,
            Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__,
            0);
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Set_49258620(klass, v15, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C372B4(bodyTexture);
  }
}


void UICharaGraphTexture__ExecuteNameCrossFade(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *name2Texture; // x20
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4C447B5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B5 = 1;
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
      sub_1C372B4(nameTexture);
    }
  }
}


void UICharaGraphTexture__ExecuteSpriteFadein(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C447B9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B9 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1C372B4(0);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0);
  }
}


void UICharaGraphTexture__ExecuteSpriteFadeout(UICharaGraphTexture_o *this, float duration, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Component_o *nameTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C447B7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B7 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0, 0) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1C372B4(0);
    gameObject = UnityEngine_Component__get_gameObject(nameTexture, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
  }
}


void UICharaGraphTexture__ExecuteSpriteFadeoutForce(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteBase; // x20
  UnityEngine_Object_o *v4; // x20
  bool v5; // w0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_4C447B6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B6 = 1;
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
      v7 = this->fields.spriteBase;
      if ( !v7 )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v7,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
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
      v7 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v7 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v7->klass[1]._1.element_class)(
          v7,
          v7->klass[1]._1.castClass,
          0.0);
        return;
      }
LABEL_22:
      sub_1C372B4(v7);
    }
  }
}


void UICharaGraphTexture__InitSprite(UICharaGraphTexture_o *this, UISprite_o *sprite, const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_4C447BA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447BA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( v4 )
  {
    if ( !sprite )
      sub_1C372B4(v4);
    UISprite__set_spriteName(sprite, 0, 0);
  }
}


void UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v3; // x23
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v7; // x1
  System_String_o *p_callbackFunc; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v10; // x1
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Delegate_o *v14; // x8
  System_Action_c *v15; // x1
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v18; // x1
  System_String_o *v19; // x23
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_c *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4C447AF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4C447AF = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_40657536(
                         this->fields.imageSvtId,
                         this->fields.imagePartsGroupIdxs,
                         0);
  p_callbackFunc = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_63596960(loadName, p_callbackFunc, 0) )
    {
      if ( callbackFunc )
      {
        p_callbackFunc = (System_String_o *)&this->fields.callbackFunc;
        v11 = System_Delegate__Combine(
                (System_Delegate_o *)this->fields.callbackFunc,
                (System_Delegate_o *)callbackFunc,
                0);
        v14 = v11;
        if ( v11 )
        {
          v15 = System_Action_TypeInfo;
          if ( (System_Action_c *)v11->klass != System_Action_TypeInfo )
            goto LABEL_25;
          p_callbackFunc->klass = (System_String_c *)v11;
          if ( (System_Action_c *)v11->klass != v15 )
            goto LABEL_25;
        }
        else
        {
          p_callbackFunc->klass = 0;
        }
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v11, v12, v13);
      }
      UICharaGraphTexture__SetBeforeFrame(this, v10);
      return;
    }
    v19 = this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0);
LABEL_21:
    if ( !callbackFunc )
    {
LABEL_28:
      UICharaGraphTexture__SetBeforeFrame(this, v7);
      this->fields.loadName = p_callbackFunc;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)p_callbackFunc, v24, v25);
      v26 = this->fields.loadName;
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v26, v27, 1, 0);
      return;
    }
    v3 = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v20 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v14 = v20;
    if ( !v20 )
      goto LABEL_26;
    v23 = System_Action_TypeInfo;
    if ( (System_Action_c *)v20->klass == System_Action_TypeInfo )
    {
      v3->klass = (CGThumbnailListItem_c *)v20;
      if ( (System_Action_c *)v20->klass == v23 )
        goto LABEL_27;
    }
LABEL_25:
    sub_1C37574(v14);
LABEL_26:
    v3->klass = (CGThumbnailListItem_c *)v14;
LABEL_27:
    sub_1C36FFC(v3, (int32_t)v14, v21, v22);
    goto LABEL_28;
  }
  assetMain = this->fields.assetMain;
  if ( !assetMain )
    goto LABEL_21;
  name = assetMain->fields.name;
  if ( !name )
    sub_1C372B4(0);
  if ( !System_String__Equals_63596960(name, p_callbackFunc, 0) )
    goto LABEL_21;
  UICharaGraphTexture__SetFrame(this, v7);
  UICharaGraphTexture__SetTexture(this, v18);
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
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *loadName; // x20
  CGThumbnailListItem_o *p_loadName; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C447A2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447A2 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v4 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_24;
      v4 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v4, 0);
      if ( !v4 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v4, 0, 0);
    }
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v4 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v4->klass[1].vtable._3_ToString.method)(
        v4,
        0,
        v4->klass[2]._1.image);
      goto LABEL_15;
    }
LABEL_24:
    sub_1C372B4(v4);
  }
LABEL_15:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetMain, 0);
    this->fields.assetMain = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetMain, 0, v7, v8);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C36FFC(p_loadName, 0, v11, v12);
  }
}


void UICharaGraphTexture__SetActive(UICharaGraphTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C372B4(bodyTexture);
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
    sub_1C372B4(nameTexture);
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
  const MethodInfo *v16; // x2
  int32_t v17; // w8
  int32_t v18; // w8
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4C447A3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C447A3 = 1;
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
    v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    v17 = *((_DWORD *)Instance + 11);
    this->fields.adjustAtk = 0;
    this->fields._AddedAtkByGrand_k__BackingField = 0;
    this->fields.atk = v17;
  }
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    v18 = *((_DWORD *)Instance + 9);
    this->fields.adjustHp = 0;
    this->fields._AddedHpByGrand_k__BackingField = 0;
    this->fields.hp = v18;
  }
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v16);
}


void UICharaGraphTexture__SetCharacter_43921720(
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
  if ( (byte_4C447A4 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447A4 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_19;
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userSvtEntity->fields.limitCount, 0);
  exceedCount = userSvtEntity->fields.exceedCount;
  lv = userSvtEntity->fields.lv;
  v13 = v10;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  UICharaGraphRender__SetCharacter(v6, v9, v13, exceedCount, 1, lv, 0, 0, IsGrandServant, v26);
  OverwriteStatus_k__BackingField = v6->fields._OverwriteStatus_k__BackingField;
  adjustAtk = userSvtEntity->fields.adjustAtk;
  v17 = OverwriteStatus_k__BackingField
      ? &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField
      : &userSvtEntity->fields.atk;
  v18 = *v17;
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0);
  if ( !this )
    goto LABEL_19;
  AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
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
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0);
  if ( !this )
LABEL_19:
    sub_1C372B4(this);
  AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
  if ( (v6->fields.hp & 0x80000000) == 0 )
  {
    v6->fields.hp = v23;
    v6->fields.adjustHp = adjustHp;
    v6->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v25);
}


void UICharaGraphTexture__SetCharacter_43922100(
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
  _BOOL4 IsGrandServant; // w25
  __int64 v16; // x27
  __int64 v17; // x28
  bool v18; // w29
  int32_t v19; // w26
  int32_t v20; // w0
  const MethodInfo *v21; // x2
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x8
  int32_t *p_Hp_k__BackingField; // x12
  bool v24; // zf
  int32_t *p_Atk_k__BackingField; // x8
  int32_t *p_hp; // x9
  int32_t v27; // w24
  int32_t v28; // w26
  UserServantGrandInfo_o *v29; // x23
  int32_t adjustAtk; // w22
  int32_t adjustHp; // w21
  int32_t AddedHp; // w0
  const MethodInfo *v33; // [xsp+10h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v9 = isDisableGrand;
  v14 = (UICharaGraphRender_o *)this;
  if ( (byte_4C447A5 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UICharaGraphTexture_o *)sub_1C37058(&UserServantGrandInfo_TypeInfo);
    byte_4C447A5 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_33;
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v18 = (IsGrandServant || isGrandSvt) && !v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v17;
  *(_QWORD *)&v34.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v34, 0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userSvtEntity->fields.limitCount, 0);
  UICharaGraphRender__SetCharacter_43913088(
    v14,
    v19,
    v20,
    imageLimitCount,
    userSvtEntity->fields.exceedCount,
    userSvtEntity->fields.lv,
    changeNameType,
    0,
    0,
    v18,
    v33);
  this = (UICharaGraphTexture_o *)UserServantEntity__get_GrandInfo(userSvtEntity, 0);
  OverwriteStatus_k__BackingField = v14->fields._OverwriteStatus_k__BackingField;
  p_Hp_k__BackingField = &OverwriteStatus_k__BackingField->fields._Hp_k__BackingField;
  v24 = OverwriteStatus_k__BackingField == 0;
  if ( OverwriteStatus_k__BackingField )
    p_Atk_k__BackingField = &OverwriteStatus_k__BackingField->fields._Atk_k__BackingField;
  else
    p_Atk_k__BackingField = &userSvtEntity->fields.atk;
  if ( v24 )
    p_hp = &userSvtEntity->fields.hp;
  else
    p_hp = p_Hp_k__BackingField;
  v27 = *p_hp;
  v28 = *p_Atk_k__BackingField;
  if ( IsGrandServant || !v18 )
  {
    v29 = (UserServantGrandInfo_o *)this;
    if ( IsGrandServant && v9 )
    {
      if ( !this )
        goto LABEL_33;
      v28 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v29, 0);
      v27 -= (int)this;
    }
  }
  else
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__Make(userSvtEntity, 1, 0);
    if ( !this )
      goto LABEL_33;
    v29 = (UserServantGrandInfo_o *)this;
    v28 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedHp(v29, 0);
    v27 += (int)this;
  }
  adjustAtk = userSvtEntity->fields.adjustAtk;
  if ( v18 )
  {
    if ( !v29 )
      goto LABEL_33;
    this = (UICharaGraphTexture_o *)UserServantGrandInfo__get_AddedAtk(v29, 0);
  }
  else
  {
    this = 0;
  }
  if ( (v14->fields.atk & 0x80000000) == 0 )
  {
    v14->fields.atk = v28;
    v14->fields.adjustAtk = adjustAtk;
    v14->fields._AddedAtkByGrand_k__BackingField = (int)this;
  }
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( v18 )
  {
    if ( v29 )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp(v29, 0);
      goto LABEL_30;
    }
LABEL_33:
    sub_1C372B4(this);
  }
  AddedHp = 0;
LABEL_30:
  if ( (v14->fields.hp & 0x80000000) == 0 )
  {
    v14->fields.hp = v27;
    v14->fields.adjustHp = adjustHp;
    v14->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v14, callbackFunc, v21);
}


void UICharaGraphTexture__SetCharacter_43922680(
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
  if ( (byte_4C447A6 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447A6 = 1;
  }
  *(_QWORD *)hp = 0;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1C372B4(this);
  v8 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v8;
  *(_QWORD *)&v25.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  maxLv = userSvtCollectionEntity->fields.maxLv;
  v12 = v9;
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
  UICharaGraphRender__SetCharacter(v6, v12, maxLimitCount, 0, 1, maxLv, 0, 0, IsGrandServant, v22);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0);
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
    v19 = OverwriteStatus_k__BackingField == 0;
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


void UICharaGraphTexture__SetCharacter_43923016(
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
  if ( (byte_4C447A7 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447A7 = 1;
  }
  *(_QWORD *)hp = 0;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1C372B4(this);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v10;
  *(_QWORD *)&v27.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0);
  maxLimitCount = userSvtCollectionEntity->fields.maxLimitCount;
  maxLv = userSvtCollectionEntity->fields.maxLv;
  v14 = v11;
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
  UICharaGraphRender__SetCharacter_43913088(
    v8,
    v14,
    maxLimitCount,
    imageLimitCount,
    0,
    maxLv,
    0,
    0,
    0,
    IsGrandServant,
    v24);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0);
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
    v21 = OverwriteStatus_k__BackingField == 0;
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


void UICharaGraphTexture__SetCharacter_43923360(
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
  if ( (byte_4C447A8 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447A8 = 1;
  }
  if ( !servantLeaderInfo )
    sub_1C372B4(this);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v8;
  *(_QWORD *)&v19.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
  limitCount = servantLeaderInfo->fields.limitCount;
  v11 = v9;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0);
  exceedCount = servantLeaderInfo->fields.exceedCount;
  lv = servantLeaderInfo->fields.lv;
  v15 = CardImageLimitCount;
  IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
  UICharaGraphRender__SetCharacter_43913088(v6, v11, limitCount, v15, exceedCount, lv, 0, 0, 0, IsGrandSvt, v18);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v17);
}


void UICharaGraphTexture__SetCharacter_43923608(
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
  if ( (byte_4C447A9 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447A9 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_12;
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v26, 0);
  exceedCount = servantLeaderInfo->fields.exceedCount;
  limitCount = servantLeaderInfo->fields.limitCount;
  lv = servantLeaderInfo->fields.lv;
  v15 = v11;
  IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
  UICharaGraphRender__SetCharacter_43913088(
    v8,
    v15,
    limitCount,
    imageLimitCount,
    exceedCount,
    lv,
    0,
    0,
    0,
    IsGrandSvt,
    v25);
  this = (UICharaGraphTexture_o *)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
  if ( !this )
LABEL_12:
    sub_1C372B4(this);
  atk = servantLeaderInfo->fields.atk;
  adjustAtk = servantLeaderInfo->fields.adjustAtk;
  v19 = (UserServantGrandInfo_o *)this;
  AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
  if ( (v8->fields.atk & 0x80000000) == 0 )
  {
    v8->fields.atk = atk;
    v8->fields.adjustAtk = adjustAtk;
    v8->fields._AddedAtkByGrand_k__BackingField = AddedAtk;
  }
  hp = servantLeaderInfo->fields.hp;
  adjustHp = servantLeaderInfo->fields.adjustHp;
  AddedHp = UserServantGrandInfo__get_AddedHp(v19, 0);
  if ( (v8->fields.hp & 0x80000000) == 0 )
  {
    v8->fields.hp = hp;
    v8->fields.adjustHp = adjustHp;
    v8->fields._AddedHpByGrand_k__BackingField = AddedHp;
  }
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v24);
}


void UICharaGraphTexture__SetCharacter_43923936(
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
  if ( (byte_4C447AA & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447AA = 1;
  }
  if ( !equipTargetInfo )
    sub_1C372B4(this);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
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


void UICharaGraphTexture__SetCharacter_43924132(
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
  int32_t v13; // w23
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int32_t atk; // w8
  int32_t hp; // w8
  const MethodInfo *v18; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v10 = (UICharaGraphRender_o *)this;
  if ( (byte_4C447AB & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447AB = 1;
  }
  if ( !equipTargetInfo )
    sub_1C372B4(this);
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  v13 = isNpcFollowerServantEquip;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
  UICharaGraphRender__SetCharacter_43913088(
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
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_4C447AC & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447AC = 1;
  }
  if ( !userCommandCodeEntity )
    sub_1C372B4(this);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void UICharaGraphTexture__SetCommand_43924532(
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
  if ( (byte_4C447AD & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447AD = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_1C372B4(this);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void UICharaGraphTexture__SetCommand_43924676(
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
  if ( (byte_4C447AE & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C447AE = 1;
  }
  if ( !commandCodeEntity )
    sub_1C372B4(this);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void UICharaGraphTexture__SetCommand_43924820(
        UICharaGraphTexture_o *this,
        int32_t commandCodeId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  UICharaGraphRender__SetCommand((UICharaGraphRender_o *)this, commandCodeId, (const MethodInfo *)callbackFunc);
  UICharaGraphTexture__LoadCharacter(this, callbackFunc, v6);
}


void UICharaGraphTexture__SetDepth(UICharaGraphTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0
  UnityEngine_Object_o *name2Texture; // x22
  int32_t v7; // w20

  if ( (byte_4C447B4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B4 = 1;
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
    sub_1C372B4(baseSprite);
  }
  UIWidget__set_depth(baseSprite, v7, 0);
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
  struct System_String_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-34h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C447B3 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4C447B3 = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1C372B4(Instance);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v8 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0);
  this->fields.loadName = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)v8, v9, v10);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, v11, 1, 0);
}


void UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UICharaGraphTexture_o *v3; // x19
  int v4; // w9
  System_String_o *frameName; // x20
  int v6; // w8
  float v7; // s11
  float v8; // s10
  float v9; // s8
  float v10; // s9
  UISprite_o *frameLeftSprite; // x0
  float v12; // s12
  System_String_o *v13; // x1
  int32_t baseKind; // w22
  UISprite_o *v15; // x21
  System_String_o *v16; // x22
  UISprite_o *frameRightSprite; // x21
  System_String_o *v18; // x0
  UISprite_o *frameTopSprite; // x21
  System_String_o *v20; // x0
  UISprite_o *frameBottomSprite; // x21
  System_String_o *v22; // x0
  UISprite_o *raritySprite; // x20
  const MethodInfo *v24; // x1
  System_String_o *v25; // x0
  UISprite_o *classSprite; // x20
  const MethodInfo *v27; // x1
  System_String_o *v28; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v30; // x20
  UISprite_o *v31; // x21
  System_String_o *v32; // x22
  UISprite_o *v33; // x21
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  UISprite_o *v36; // x20
  UISprite_o *v37; // x21
  System_String_o *v38; // x22
  UISprite_o *v39; // x21
  System_String_o *v40; // x0
  UISprite_o *v41; // x20
  const MethodInfo *v42; // x1
  System_String_o *v43; // x0
  int32_t atk; // w20
  BalanceConfig_c *v45; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v47; // w21
  UILabel_o *attackLabel; // x20
  System_String_o *v49; // x1
  struct UILabel_o *hpLabel; // x20
  int hp; // w21
  __int64 *v52; // x0
  System_String_o *v53; // x21
  bool IsKeepServantEquip; // w0
  UILabel_o *v55; // x20
  int v56; // w22
  bool v57; // w8
  System_String_o *v58; // x1
  System_String_o *v59; // x1
  __int64 v60; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C447B0 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_803/*"+"*/);
    sub_1C37058(&StringLiteral_10946/*"R"*/);
    sub_1C37058(&StringLiteral_18695/*"e"*/);
    sub_1C37058(&StringLiteral_17679/*"c"*/);
    sub_1C37058(&StringLiteral_13320/*"T"*/);
    sub_1C37058(&StringLiteral_8251/*"L"*/);
    sub_1C37058(&StringLiteral_2510/*"B"*/);
    sub_1C37058(&StringLiteral_18941/*"eframeB_hp"*/);
    sub_1C37058(&StringLiteral_20545/*"img_ribbon_noblephantasmup"*/);
    sub_1C37058(&StringLiteral_18940/*"eframeB_atk"*/);
    this = (UICharaGraphTexture_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C447B0 = 1;
  }
  v60 = 0;
  v4 = v3->fields._AddedAtkByGrand_k__BackingField + v3->fields.adjustAtk;
  frameName = v3->fields.frameName;
  v6 = v3->fields._AddedHpByGrand_k__BackingField + v3->fields.adjustHp;
  if ( v4 <= 0 )
    v7 = 1.0;
  else
    v7 = 0.92157;
  if ( v4 <= 0 )
    v8 = 1.0;
  else
    v8 = 0.015686;
  if ( v6 <= 0 )
    v9 = 1.0;
  else
    v9 = 0.015686;
  if ( v6 <= 0 )
    v10 = 1.0;
  else
    v10 = 0.92157;
  UICharaGraphTexture__InitSprite(this, v3->fields.materialTdSprite, v2);
  if ( System_String__IsNullOrEmpty(frameName, 0) )
  {
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
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
      v15 = v3->fields.frameLeftSprite;
      v16 = System_String__Concat_63561656(frameName, (System_String_o *)StringLiteral_8251/*"L"*/, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v15, v16, 0);
      frameRightSprite = v3->fields.frameRightSprite;
      v18 = System_String__Concat_63561656(frameName, (System_String_o *)StringLiteral_10946/*"R"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v18, 0);
      frameTopSprite = v3->fields.frameTopSprite;
      v20 = System_String__Concat_63561656(frameName, (System_String_o *)StringLiteral_13320/*"T"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v20, 0);
      frameBottomSprite = v3->fields.frameBottomSprite;
      v22 = System_String__Concat_63561656(frameName, (System_String_o *)StringLiteral_2510/*"B"*/, 0);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v22, 0);
      frameLeftSprite = v3->fields.frameBottomSprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      raritySprite = v3->fields.raritySprite;
      v25 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v24);
      AtlasManager__SetCharaGraphaOption(raritySprite, v25, 0);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      classSprite = v3->fields.classSprite;
      v28 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)v3, v27);
      AtlasManager__SetCharaGraphaOption(classSprite, v28, 0);
      if ( SvtType__IsSvtMaterialTd(v3->fields.svtType, 0) )
      {
        materialTdSprite = (UnityEngine_Object_o *)v3->fields.materialTdSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
        {
          v30 = v3->fields.materialTdSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCharaGraphaOption(v30, (System_String_o *)StringLiteral_20545/*"img_ribbon_noblephantasmup"*/, 0);
        }
      }
      goto LABEL_24;
    }
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    v37 = v3->fields.frameTopSprite;
    if ( baseKind == 2 )
    {
      v38 = System_String__Concat_63599904(
              (System_String_o *)StringLiteral_17679/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_13320/*"T"*/,
              0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v37, v38, 0);
      v39 = v3->fields.frameBottomSprite;
      v40 = System_String__Concat_63599904(
              (System_String_o *)StringLiteral_17679/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_2510/*"B"*/,
              0);
      AtlasManager__SetCharaGraphaOption(v39, v40, 0);
      v41 = v3->fields.raritySprite;
      v43 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v42);
      AtlasManager__SetCharaGraphaOption(v41, v43, 0);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
      goto LABEL_22;
    }
    if ( !v37 )
      goto LABEL_96;
    frameLeftSprite = v3->fields.frameTopSprite;
LABEL_19:
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = v3->fields.frameBottomSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
LABEL_22:
    frameLeftSprite = v3->fields.classSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    UISprite__set_spriteName(frameLeftSprite, 0, 0);
LABEL_24:
    v12 = 1.0;
    goto LABEL_25;
  }
  frameLeftSprite = v3->fields.frameLeftSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = v3->fields.frameRightSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = v3->fields.classSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  v31 = v3->fields.frameTopSprite;
  v32 = System_String__Concat_63599904(
          (System_String_o *)StringLiteral_18695/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_13320/*"T"*/,
          0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(v31, v32, 0);
  v33 = v3->fields.frameBottomSprite;
  v34 = System_String__Concat_63599904(
          (System_String_o *)StringLiteral_18695/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_2510/*"B"*/,
          0);
  AtlasManager__SetCharaGraphaOption(v33, v34, 0);
  v36 = v3->fields.raritySprite;
  if ( v3->fields.saintGraphType != 1 )
  {
    v53 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v35);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCharaGraphaOption(v36, v53, 0);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipAtkSprite, (System_String_o *)StringLiteral_18940/*"eframeB_atk"*/, 0);
    frameLeftSprite = v3->fields.equipAtkSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipHpSprite, (System_String_o *)StringLiteral_18941/*"eframeB_hp"*/, 0);
    frameLeftSprite = v3->fields.equipHpSprite;
    if ( !frameLeftSprite )
      goto LABEL_96;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))frameLeftSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._33_MakePixelPerfect.method);
    goto LABEL_24;
  }
  if ( !v36 )
    goto LABEL_96;
  UISprite__set_spriteName(v3->fields.raritySprite, 0, 0);
  frameLeftSprite = v3->fields.equipAtkSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  frameLeftSprite = v3->fields.equipHpSprite;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UISprite__set_spriteName(frameLeftSprite, 0, 0);
  v12 = 0.0;
LABEL_25:
  if ( v3->fields.baseKind != 2
    && v3->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(v3->fields.svtType, 0) )
  {
    if ( SvtType__IsStatusUp(v3->fields.svtType, 0) )
    {
      atk = v3->fields.atk;
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      static_fields = v45->static_fields;
      v47 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v60) = static_fields->StatusUpAdjustHp * v3->fields.hp;
      HIDWORD(v60) = v47;
      attackLabel = v3->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v60 + 4, 0);
      v49 = (System_String_o *)frameLeftSprite;
      if ( v47 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_63561656(
                                          (System_String_o *)StringLiteral_803/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0);
        v49 = (System_String_o *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, v49, 0);
        hpLabel = v3->fields.hpLabel;
        hp = v60;
        v52 = &v60;
LABEL_84:
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)v52, 0);
        v13 = (System_String_o *)frameLeftSprite;
        if ( hp < 1 )
          goto LABEL_93;
        frameLeftSprite = (UISprite_o *)System_String__Concat_63561656(
                                          (System_String_o *)StringLiteral_803/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0);
LABEL_92:
        v13 = (System_String_o *)frameLeftSprite;
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
      IsKeepServantEquip = SvtType__IsKeepServantEquip(v3->fields.svtType, 0);
      v55 = v3->fields.attackLabel;
      v56 = v3->fields.atk;
      v57 = IsKeepServantEquip;
      frameLeftSprite = (UISprite_o *)&v3->fields.atk;
      if ( v57 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0);
        v58 = (System_String_o *)frameLeftSprite;
        if ( v56 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_63561656(
                                            (System_String_o *)StringLiteral_803/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0);
          v58 = (System_String_o *)frameLeftSprite;
        }
        if ( v55 )
        {
          UILabel__set_text(v55, v58, 0);
          hpLabel = v3->fields.hpLabel;
          hp = v3->fields.hp;
          LODWORD(v52) = (_DWORD)v3 + 456;
          goto LABEL_84;
        }
      }
      else
      {
        if ( v56 < 0 )
        {
          v59 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0);
          v59 = (System_String_o *)frameLeftSprite;
        }
        if ( v55 )
        {
          UILabel__set_text(v55, v59, 0);
          hpLabel = v3->fields.hpLabel;
          if ( v3->fields.hp < 0 )
          {
            v13 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !hpLabel )
              goto LABEL_96;
            goto LABEL_94;
          }
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)v3 + 456, 0);
          goto LABEL_92;
        }
      }
    }
LABEL_96:
    sub_1C372B4(frameLeftSprite);
  }
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_31:
  UILabel__set_text((UILabel_o *)frameLeftSprite, v13, 0);
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v61.fields.r = 1.0;
  v61.fields.g = v7;
  v61.fields.b = v8;
  v61.fields.a = v12;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v61, 0);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_96;
  v62.fields.r = 1.0;
  v62.fields.g = v10;
  v62.fields.b = v9;
  v62.fields.a = v12;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v62, 0);
}


void UICharaGraphTexture__SetTexture(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UITexture_o *bodyTexture; // x20
  __int64 gameObject; // x0
  UITexture_o *v6; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *NameTexture; // x20
  char v10; // w21
  const MethodInfo *v11; // x1
  struct UITexture_o *v12; // x20
  UnityEngine_Object_o *name2Texture; // x20
  const MethodInfo *v14; // x2
  struct UITexture_o *v15; // x20
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  struct UITexture_o *v18; // x20
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o NameUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C447B2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447B2 = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  gameObject = (__int64)UICharaGraphRender__GetBodyTexture((UICharaGraphRender_o *)this, this->fields.assetMain, v2);
  if ( !bodyTexture )
    goto LABEL_31;
  ((void (__fastcall *)(struct UITexture_o *, __int64, const MethodInfo *))bodyTexture->klass->vtable._27_set_mainTexture.methodPtr)(
    bodyTexture,
    gameObject,
    bodyTexture->klass->vtable._27_set_mainTexture.method);
  v6 = this->fields.bodyTexture;
  BodyUvRect = UICharaGraphRender__GetBodyUvRect((UICharaGraphRender_o *)this, v7);
  if ( !v6 )
    goto LABEL_31;
  UITexture__set_uvRect(v6, BodyUvRect, 0);
  NameTexture = (UnityEngine_Object_o *)UICharaGraphRender__GetNameTexture(
                                          (UICharaGraphRender_o *)this,
                                          this->fields.assetMain,
                                          v8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(NameTexture, 0, 0);
  if ( !this->fields.nameTexture )
    goto LABEL_31;
  v10 = gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nameTexture, 0);
  if ( !gameObject )
    goto LABEL_31;
  if ( (v10 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (*(__int64 (__fastcall **)(__int64, UnityEngine_Object_o *, _QWORD))(*(_QWORD *)gameObject + 744LL))(
                   gameObject,
                   NameTexture,
                   *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v12 = this->fields.nameTexture;
    if ( !v12 )
      goto LABEL_31;
    NameUvRect = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v12->fields.mRect, v11);
    UITexture__set_uvRect(v12, NameUvRect, 0);
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
          v15 = this->fields.name2Texture;
          v16 = 0;
          if ( this->fields.realNameCheck == 3 )
          {
            gameObject = (__int64)UICharaGraphRender__GetTrueNameTexture(
                                    (UICharaGraphRender_o *)this,
                                    this->fields.assetMain,
                                    v14);
            v16 = gameObject;
          }
          if ( v15 )
          {
            gameObject = ((__int64 (__fastcall *)(struct UITexture_o *, __int64, const MethodInfo *))v15->klass->vtable._27_set_mainTexture.methodPtr)(
                           v15,
                           v16,
                           v15->klass->vtable._27_set_mainTexture.method);
            v18 = this->fields.name2Texture;
            if ( v18 )
            {
              v22 = UICharaGraphRender__GetNameUvRect((UICharaGraphRender_o *)this, v18->fields.mRect, v17);
              UITexture__set_uvRect(v18, v22, 0);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_1C372B4(gameObject);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.nameTexture;
    if ( !gameObject )
      goto LABEL_31;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gameObject + 744LL))(
      gameObject,
      0,
      *(_QWORD *)(*(_QWORD *)gameObject + 752LL));
    v19 = (UnityEngine_Object_o *)this->fields.name2Texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.name2Texture;
      if ( !gameObject )
        goto LABEL_31;
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
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C372B4(0);
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIWidget__set_color(bodyTexture, v9, 0);
}


bool UICharaGraphTexture__get_IsLoad(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}


void UICharaGraphTexture___c__DisplayClass49_0___ctor(
        UICharaGraphTexture___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UICharaGraphTexture___c__DisplayClass49_0___ExecuteCharaGraphFadeout_b__0(
        UICharaGraphTexture___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishAction, 0);
}