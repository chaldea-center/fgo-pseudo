void __fastcall UICharaGraphTexture___ctor(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C654 & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C654 = 1;
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
  int32_t v7; // w3
  AssetData_o *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4A5C64A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5C64A = 1;
  }
  if ( assetMain )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_37788332(assetMain, loadName, 0LL) )
      {
        v8 = this->fields.assetMain;
        if ( v8 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_37790656(v8, 0LL);
        }
        this->fields.assetMain = assetMain;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetMain, (int32_t)assetMain, v6, v7);
        this->fields.loadName = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadName, 0, v9, v10);
        UICharaGraphTexture__SetFrame(this, v11);
        UICharaGraphTexture__SetTexture(this, v12);
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v13, v14);
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
  __int64 v7; // x19
  UnityEngine_Component_o *bodyTexture; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *spriteBase; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  System_Collections_Generic_List_EventDelegate__o *klass; // x20
  EventDelegate_Callback_o *v16; // x21

  if ( (byte_4A5C651 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__);
    sub_1B885B0(&UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
    byte_4A5C651 = 1;
  }
  v7 = sub_1B887FC(UICharaGraphTexture___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = finishAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)finishAction, v10, v11);
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
        v14 = UnityEngine_Component__get_gameObject(bodyTexture, 0LL);
        bodyTexture = (UnityEngine_Component_o *)TweenAlpha__Begin(v14, duration, 0.0, 0LL);
        if ( !*(_QWORD *)(v7 + 16) )
          return;
        if ( bodyTexture )
        {
          klass = (System_Collections_Generic_List_EventDelegate__o *)bodyTexture[3].klass;
          v16 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v16,
            (Il2CppObject *)v7,
            Method_UICharaGraphTexture___c__DisplayClass49_0__ExecuteCharaGraphFadeout_b__0__,
            0LL);
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Set_46771408(klass, v16, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_1B8880C(bodyTexture, v9);
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

  if ( (byte_4A5C64E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C64E = 1;
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
      sub_1B8880C(nameTexture, method);
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

  if ( (byte_4A5C652 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C652 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 1.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5C650 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C650 = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    TweenAlpha__Begin(this->fields.spriteBase, duration, 0.0, 0LL);
    nameTexture = (UnityEngine_Component_o *)this->fields.nameTexture;
    if ( !nameTexture )
      sub_1B8880C(0LL, v6);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *nameTexture; // x20

  if ( (byte_4A5C64F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C64F = 1;
  }
  spriteBase = (UnityEngine_Object_o *)this->fields.spriteBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(spriteBase, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.spriteBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
    Component_object = 0LL;
    if ( v5 )
    {
      v8 = this->fields.spriteBase;
      if ( !v8 )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
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
      v8 = (UnityEngine_GameObject_o *)this->fields.nameTexture;
      if ( v8 )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v8->klass[1]._1.castClass)(
          v8,
          v8->klass[1]._1.declaringType,
          0.0);
        return;
      }
LABEL_22:
      sub_1B8880C(v8, v6);
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

  if ( (byte_4A5C653 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C653 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( v4 )
  {
    if ( !sprite )
      sub_1B8880C(v4, v5);
    UISprite__set_spriteName(sprite, 0LL, 0LL);
  }
}


void __fastcall UICharaGraphTexture__LoadCharacter(
        UICharaGraphTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v3; // x23
  System_String_o *CommandAssetName; // x0
  const MethodInfo *v7; // x1
  System_String_o *p_callbackFunc; // x21
  System_String_o *loadName; // x0
  const MethodInfo *v10; // x1
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Delegate_o *v14; // x8
  System_Action_c *v15; // x1
  struct AssetData_o *assetMain; // x8
  System_String_o *name; // x0
  const MethodInfo *v18; // x1
  System_String_o *v19; // x23
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Action_c *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4A5C648 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4A5C648 = 1;
  }
  if ( this->fields.baseKind == 2 )
    CommandAssetName = CharaGraphManager__GetCommandAssetName(this->fields.commandCodeId, 0LL);
  else
    CommandAssetName = CharaGraphManager__GetAssetName_37904112(this->fields.imageSvtId, 0LL);
  p_callbackFunc = CommandAssetName;
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( System_String__Equals_61715348(loadName, p_callbackFunc, 0LL) )
    {
      if ( callbackFunc )
      {
        p_callbackFunc = (System_String_o *)&this->fields.callbackFunc;
        v11 = System_Delegate__Combine(
                (System_Delegate_o *)this->fields.callbackFunc,
                (System_Delegate_o *)callbackFunc,
                0LL);
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
          p_callbackFunc->klass = 0LL;
        }
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v11, v12, v13);
      }
      UICharaGraphTexture__SetBeforeFrame(this, v10);
      return;
    }
    v19 = this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0LL);
LABEL_21:
    if ( !callbackFunc )
    {
LABEL_28:
      UICharaGraphTexture__SetBeforeFrame(this, v7);
      this->fields.loadName = p_callbackFunc;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadName, (int32_t)p_callbackFunc, v24, v25);
      v26 = this->fields.loadName;
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
      return;
    }
    v3 = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    v20 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.callbackFunc,
            (System_Delegate_o *)callbackFunc,
            0LL);
    v14 = v20;
    if ( !v20 )
      goto LABEL_26;
    v23 = System_Action_TypeInfo;
    if ( (System_Action_c *)v20->klass == System_Action_TypeInfo )
    {
      v3->klass = (ServantStatusBattleListViewItem_c *)v20;
      if ( (System_Action_c *)v20->klass == v23 )
        goto LABEL_27;
    }
LABEL_25:
    sub_1B88ACC(v14);
LABEL_26:
    v3->klass = (ServantStatusBattleListViewItem_c *)v14;
LABEL_27:
    sub_1B88554(v3, (int32_t)v14, v21, v22);
    goto LABEL_28;
  }
  assetMain = this->fields.assetMain;
  if ( !assetMain )
    goto LABEL_21;
  name = assetMain->fields.name;
  if ( !name )
    sub_1B8880C(0LL, v7);
  if ( !System_String__Equals_61715348(name, p_callbackFunc, 0LL) )
    goto LABEL_21;
  UICharaGraphTexture__SetFrame(this, v7);
  UICharaGraphTexture__SetTexture(this, v18);
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
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  AssetData_o *assetMain; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *loadName; // x20
  ServantStatusBattleListViewItem_o *p_loadName; // x19
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5C63B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C63B = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( !v5 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0LL);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))v5->klass[2]._1.gc_desc)(
        v5,
        0LL,
        v5->klass[2]._1.name);
      goto LABEL_15;
    }
LABEL_24:
    sub_1B8880C(v5, v4);
  }
LABEL_15:
  assetMain = this->fields.assetMain;
  if ( assetMain )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(assetMain, 0LL);
    this->fields.assetMain = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetMain, 0, v8, v9);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (ServantStatusBattleListViewItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0LL);
    p_loadName->klass = 0LL;
    sub_1B88554(p_loadName, 0, v12, v13);
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
    sub_1B8880C(bodyTexture, isActive);
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
    sub_1B8880C(nameTexture, method);
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
  const MethodInfo *v20; // [xsp+0h] [xbp-60h]

  if ( (byte_4A5C63C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C63C = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity(
                     (ServantLimitMaster_o *)Instance,
                     this->fields.svtId,
                     this->fields.limitCount,
                     0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v16);
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


void __fastcall UICharaGraphTexture__SetCharacter_40835776(
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
  if ( (byte_4A5C63D & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C63D = 1;
  }
  if ( !userSvtEntity )
    sub_1B8880C(this, userSvtEntity);
  v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
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


void __fastcall UICharaGraphTexture__SetCharacter_40836020(
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
  if ( (byte_4A5C63E & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C63E = 1;
  }
  if ( !userSvtEntity )
    sub_1B8880C(this, userSvtEntity);
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
  UICharaGraphRender__SetCharacter_40827256(
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


void __fastcall UICharaGraphTexture__SetCharacter_40836280(
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
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]
  int32_t atk; // [xsp+14h] [xbp-3Ch] BYREF
  int32_t hp[2]; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v6 = (UICharaGraphRender_o *)this;
  if ( (byte_4A5C63F & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C63F = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1B8880C(this, userSvtCollectionEntity);
  v8 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
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


void __fastcall UICharaGraphTexture__SetCharacter_40836532(
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
  int32_t atk; // [xsp+Ch] [xbp-44h] BYREF
  int32_t hp[2]; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4A5C640 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C640 = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  if ( !userSvtCollectionEntity )
    sub_1B8880C(this, userSvtCollectionEntity);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  UICharaGraphRender__SetCharacter_40827256(
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


void __fastcall UICharaGraphTexture__SetCharacter_40836796(
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
  if ( (byte_4A5C641 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C641 = 1;
  }
  if ( !servantLeaderInfo )
    sub_1B8880C(this, servantLeaderInfo);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  limitCount = servantLeaderInfo->fields.limitCount;
  v11 = v9;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
  UICharaGraphRender__SetCharacter_40827256(
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


void __fastcall UICharaGraphTexture__SetCharacter_40836992(
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
  const MethodInfo *v15; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4A5C642 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C642 = 1;
  }
  if ( !servantLeaderInfo )
    sub_1B8880C(this, servantLeaderInfo);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  UICharaGraphRender__SetCharacter_40827256(
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


void __fastcall UICharaGraphTexture__SetCharacter_40837220(
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
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v8 = (UICharaGraphRender_o *)this;
  if ( (byte_4A5C643 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C643 = 1;
  }
  if ( !equipTargetInfo )
    sub_1B8880C(this, equipTargetInfo);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  UICharaGraphRender__SetCharacter(
    v8,
    v11,
    equipTargetInfo->fields.limitCount,
    0,
    0,
    0,
    0,
    isNpcFollowerServantEquip,
    v13);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v8, callbackFunc, v12);
}


void __fastcall UICharaGraphTexture__SetCharacter_40837412(
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
  if ( (byte_4A5C644 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C644 = 1;
  }
  if ( !equipTargetInfo )
    sub_1B8880C(this, equipTargetInfo);
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  v13 = isNpcFollowerServantEquip;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  UICharaGraphRender__SetCharacter_40827256(
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
  if ( (byte_4A5C645 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C645 = 1;
  }
  if ( !userCommandCodeEntity )
    sub_1B8880C(this, userCommandCodeEntity);
  v8 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_40837792(
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
  if ( (byte_4A5C646 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C646 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    sub_1B8880C(this, userCommandCodeCollectionEntity);
  v8 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_40837936(
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
  if ( (byte_4A5C647 & 1) == 0 )
  {
    this = (UICharaGraphTexture_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C647 = 1;
  }
  if ( !commandCodeEntity )
    sub_1B8880C(this, commandCodeEntity);
  v8 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  UICharaGraphRender__SetCommand(v6, v9, v10);
  UICharaGraphTexture__LoadCharacter((UICharaGraphTexture_o *)v6, callbackFunc, v11);
}


void __fastcall UICharaGraphTexture__SetCommand_40838080(
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

  if ( (byte_4A5C64D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C64D = 1;
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
    sub_1B8880C(baseSprite, *(_QWORD *)&d);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct System_String_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  int32_t imageLimitCounta; // [xsp+8h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-34h] BYREF

  v4 = imageLimitCount;
  v5 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4A5C64C & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UICharaGraphTexture_EndLoadAsset__);
    byte_4A5C64C = 1;
  }
  if ( v4 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v8);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
    v4 = imageLimitCounta;
    v5 = svtIda;
  }
  this->fields.imageLimitCount = v4;
  v9 = CharaGraphManager__GetExCharaGraphAssetName(v5, 0LL);
  this->fields.loadName = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadName, (int32_t)v9, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_UICharaGraphTexture_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v12, 1, 0LL);
}


void __fastcall UICharaGraphTexture__SetFrame(UICharaGraphTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UICharaGraphTexture_o *v3; // x19
  int adjustAtk; // w10
  int adjustHp; // w8
  System_String_o *frameName; // x20
  float v7; // s11
  float v8; // s10
  float v9; // s8
  float v10; // s9
  MethodInfo *v11; // x1
  UISprite_o *frameLeftSprite; // x0
  float v13; // s12
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
  UISprite_o *v35; // x20
  UISprite_o *v36; // x21
  System_String_o *v37; // x22
  UISprite_o *v38; // x21
  System_String_o *v39; // x0
  UISprite_o *v40; // x20
  const MethodInfo *v41; // x1
  System_String_o *v42; // x0
  int32_t atk; // w20
  BalanceConfig_c *v44; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v46; // w21
  UILabel_o *attackLabel; // x20
  struct UILabel_o *hpLabel; // x20
  int hp; // w21
  __int64 *v50; // x0
  System_String_o *v51; // x21
  bool IsKeepServantEquip; // w0
  UILabel_o *v53; // x20
  int v54; // w22
  bool v55; // w8
  __int64 v56; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4A5C649 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_10938/*"R"*/);
    sub_1B885B0(&StringLiteral_18696/*"e"*/);
    sub_1B885B0(&StringLiteral_17685/*"c"*/);
    sub_1B885B0(&StringLiteral_13233/*"T"*/);
    sub_1B885B0(&StringLiteral_8226/*"L"*/);
    sub_1B885B0(&StringLiteral_2631/*"B"*/);
    sub_1B885B0(&StringLiteral_18932/*"eframeB_hp"*/);
    sub_1B885B0(&StringLiteral_20437/*"img_ribbon_noblephantasmup"*/);
    sub_1B885B0(&StringLiteral_18931/*"eframeB_atk"*/);
    this = (UICharaGraphTexture_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C649 = 1;
  }
  v56 = 0LL;
  adjustAtk = v3->fields.adjustAtk;
  adjustHp = v3->fields.adjustHp;
  frameName = v3->fields.frameName;
  if ( adjustAtk <= 0 )
    v7 = 1.0;
  else
    v7 = 0.92157;
  if ( adjustAtk <= 0 )
    v8 = 1.0;
  else
    v8 = 0.015686;
  if ( adjustHp <= 0 )
    v9 = 1.0;
  else
    v9 = 0.015686;
  if ( adjustHp <= 0 )
    v10 = 1.0;
  else
    v10 = 0.92157;
  UICharaGraphTexture__InitSprite(this, v3->fields.materialTdSprite, v2);
  if ( System_String__IsNullOrEmpty(frameName, 0LL) )
  {
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameTopSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    goto LABEL_19;
  }
  baseKind = v3->fields.baseKind;
  if ( baseKind != 1 )
  {
    if ( !baseKind )
    {
      v15 = v3->fields.frameLeftSprite;
      v16 = System_String__Concat_61707032(frameName, (System_String_o *)StringLiteral_8226/*"L"*/, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v15, v16, 0LL);
      frameRightSprite = v3->fields.frameRightSprite;
      v18 = System_String__Concat_61707032(frameName, (System_String_o *)StringLiteral_10938/*"R"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameRightSprite, v18, 0LL);
      frameTopSprite = v3->fields.frameTopSprite;
      v20 = System_String__Concat_61707032(frameName, (System_String_o *)StringLiteral_13233/*"T"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameTopSprite, v20, 0LL);
      frameBottomSprite = v3->fields.frameBottomSprite;
      v22 = System_String__Concat_61707032(frameName, (System_String_o *)StringLiteral_2631/*"B"*/, 0LL);
      AtlasManager__SetCharaGraphaOption(frameBottomSprite, v22, 0LL);
      raritySprite = v3->fields.raritySprite;
      v25 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v24);
      AtlasManager__SetCharaGraphaOption(raritySprite, v25, 0LL);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_95;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      classSprite = v3->fields.classSprite;
      v28 = UICharaGraphRender__GetClassSprite((UICharaGraphRender_o *)v3, v27);
      AtlasManager__SetCharaGraphaOption(classSprite, v28, 0LL);
      if ( SvtType__IsSvtMaterialTd(v3->fields.svtType, 0LL) )
      {
        materialTdSprite = (UnityEngine_Object_o *)v3->fields.materialTdSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
        {
          v30 = v3->fields.materialTdSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCharaGraphaOption(v30, (System_String_o *)StringLiteral_20437/*"img_ribbon_noblephantasmup"*/, 0LL);
        }
      }
      goto LABEL_24;
    }
    frameLeftSprite = v3->fields.frameLeftSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameRightSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    v36 = v3->fields.frameTopSprite;
    if ( baseKind == 2 )
    {
      v37 = System_String__Concat_61718292(
              (System_String_o *)StringLiteral_17685/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_13233/*"T"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCharaGraphaOption(v36, v37, 0LL);
      v38 = v3->fields.frameBottomSprite;
      v39 = System_String__Concat_61718292(
              (System_String_o *)StringLiteral_17685/*"c"*/,
              frameName,
              (System_String_o *)StringLiteral_2631/*"B"*/,
              0LL);
      AtlasManager__SetCharaGraphaOption(v38, v39, 0LL);
      v40 = v3->fields.raritySprite;
      v42 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v41);
      AtlasManager__SetCharaGraphaOption(v40, v42, 0LL);
      frameLeftSprite = v3->fields.raritySprite;
      if ( !frameLeftSprite )
        goto LABEL_95;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
        frameLeftSprite,
        frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_22;
    }
    if ( !v36 )
      goto LABEL_95;
    frameLeftSprite = v3->fields.frameTopSprite;
LABEL_19:
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.frameBottomSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
LABEL_22:
    frameLeftSprite = v3->fields.classSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
LABEL_24:
    v13 = 1.0;
    goto LABEL_25;
  }
  frameLeftSprite = v3->fields.frameLeftSprite;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.frameRightSprite;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.classSprite;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  v31 = v3->fields.frameTopSprite;
  v32 = System_String__Concat_61718292(
          (System_String_o *)StringLiteral_18696/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_13233/*"T"*/,
          0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(v31, v32, 0LL);
  v33 = v3->fields.frameBottomSprite;
  v34 = System_String__Concat_61718292(
          (System_String_o *)StringLiteral_18696/*"e"*/,
          frameName,
          (System_String_o *)StringLiteral_2631/*"B"*/,
          0LL);
  AtlasManager__SetCharaGraphaOption(v33, v34, 0LL);
  v35 = v3->fields.raritySprite;
  if ( v3->fields.saintGraphType != 1 )
  {
    v51 = UICharaGraphRender__GetRaritySprite((UICharaGraphRender_o *)v3, v11);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCharaGraphaOption(v35, v51, 0LL);
    frameLeftSprite = v3->fields.raritySprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipAtkSprite, (System_String_o *)StringLiteral_18931/*"eframeB_atk"*/, 0LL);
    frameLeftSprite = v3->fields.equipAtkSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    AtlasManager__SetCharaGraphaOption(v3->fields.equipHpSprite, (System_String_o *)StringLiteral_18932/*"eframeB_hp"*/, 0LL);
    frameLeftSprite = v3->fields.equipHpSprite;
    if ( !frameLeftSprite )
      goto LABEL_95;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))frameLeftSprite->klass->vtable._33_MakePixelPerfect.method)(
      frameLeftSprite,
      frameLeftSprite->klass->vtable._34_get_minWidth.methodPtr);
    goto LABEL_24;
  }
  if ( !v35 )
    goto LABEL_95;
  UISprite__set_spriteName(v3->fields.raritySprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.equipAtkSprite;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  frameLeftSprite = v3->fields.equipHpSprite;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UISprite__set_spriteName(frameLeftSprite, 0LL, 0LL);
  v13 = 0.0;
LABEL_25:
  if ( v3->fields.baseKind != 2
    && v3->fields.realNameCheck != 3
    && !SvtType__IsEnemyCollectionDetail(v3->fields.svtType, 0LL) )
  {
    if ( SvtType__IsStatusUp(v3->fields.svtType, 0LL) )
    {
      atk = v3->fields.atk;
      v44 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v44 = BalanceConfig_TypeInfo;
      }
      static_fields = v44->static_fields;
      v46 = static_fields->StatusUpAdjustAtk * atk;
      LODWORD(v56) = static_fields->StatusUpAdjustHp * v3->fields.hp;
      HIDWORD(v56) = v46;
      attackLabel = v3->fields.attackLabel;
      frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)&v56 + 4, 0LL);
      v11 = (MethodInfo *)frameLeftSprite;
      if ( v46 >= 1 )
      {
        frameLeftSprite = (UISprite_o *)System_String__Concat_61707032(
                                          (System_String_o *)StringLiteral_860/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
        v11 = (MethodInfo *)frameLeftSprite;
      }
      if ( attackLabel )
      {
        UILabel__set_text(attackLabel, (System_String_o *)v11, 0LL);
        hpLabel = v3->fields.hpLabel;
        hp = v56;
        v50 = &v56;
LABEL_83:
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)v50, 0LL);
        v11 = (MethodInfo *)frameLeftSprite;
        if ( hp < 1 )
          goto LABEL_92;
        frameLeftSprite = (UISprite_o *)System_String__Concat_61707032(
                                          (System_String_o *)StringLiteral_860/*"+"*/,
                                          (System_String_o *)frameLeftSprite,
                                          0LL);
LABEL_91:
        v11 = (MethodInfo *)frameLeftSprite;
LABEL_92:
        if ( !hpLabel )
          goto LABEL_95;
LABEL_93:
        frameLeftSprite = (UISprite_o *)hpLabel;
        goto LABEL_31;
      }
    }
    else
    {
      IsKeepServantEquip = SvtType__IsKeepServantEquip(v3->fields.svtType, 0LL);
      v53 = v3->fields.attackLabel;
      v54 = v3->fields.atk;
      v55 = IsKeepServantEquip;
      frameLeftSprite = (UISprite_o *)&v3->fields.atk;
      if ( v55 )
      {
        frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
        v11 = (MethodInfo *)frameLeftSprite;
        if ( v54 >= 1 )
        {
          frameLeftSprite = (UISprite_o *)System_String__Concat_61707032(
                                            (System_String_o *)StringLiteral_860/*"+"*/,
                                            (System_String_o *)frameLeftSprite,
                                            0LL);
          v11 = (MethodInfo *)frameLeftSprite;
        }
        if ( v53 )
        {
          UILabel__set_text(v53, (System_String_o *)v11, 0LL);
          hpLabel = v3->fields.hpLabel;
          hp = v3->fields.hp;
          LODWORD(v50) = (_DWORD)v3 + 456;
          goto LABEL_83;
        }
      }
      else
      {
        if ( (v54 & 0x80000000) != 0 )
        {
          v11 = (MethodInfo *)StringLiteral_1/*""*/;
        }
        else
        {
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int32_t)frameLeftSprite, 0LL);
          v11 = (MethodInfo *)frameLeftSprite;
        }
        if ( v53 )
        {
          UILabel__set_text(v53, (System_String_o *)v11, 0LL);
          hpLabel = v3->fields.hpLabel;
          if ( (v3->fields.hp & 0x80000000) != 0 )
          {
            v11 = (MethodInfo *)StringLiteral_1/*""*/;
            if ( !hpLabel )
              goto LABEL_95;
            goto LABEL_93;
          }
          frameLeftSprite = (UISprite_o *)System_Int32__ToString((int)v3 + 456, 0LL);
          goto LABEL_91;
        }
      }
    }
LABEL_95:
    sub_1B8880C(frameLeftSprite, v11);
  }
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_95;
  v11 = (MethodInfo *)StringLiteral_1/*""*/;
LABEL_31:
  UILabel__set_text((UILabel_o *)frameLeftSprite, (System_String_o *)v11, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.attackLabel;
  if ( !frameLeftSprite )
    goto LABEL_95;
  v57.fields.r = 1.0;
  v57.fields.g = v7;
  v57.fields.b = v8;
  v57.fields.a = v13;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v57, 0LL);
  frameLeftSprite = (UISprite_o *)v3->fields.hpLabel;
  if ( !frameLeftSprite )
    goto LABEL_95;
  v58.fields.r = 1.0;
  v58.fields.g = v10;
  v58.fields.b = v9;
  v58.fields.a = v13;
  UIWidget__set_color((UIWidget_o *)frameLeftSprite, v58, 0LL);
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

  if ( (byte_4A5C64B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C64B = 1;
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
      sub_1B8880C(gameObject, v6);
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
    sub_1B8880C(0LL, v8);
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