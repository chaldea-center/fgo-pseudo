void EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C31BBA & 1) == 0 )
  {
    sub_1C32C20(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C31BBA = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                                                                             0);
}


void EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C31BB9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31BB9 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4(&this->fields.nowPlayAnimName, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  UnityEngine_Animator_o *v5; // x0

  if ( (byte_4C31BB4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_4C31BB4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1C32BC4(p_mAnimator, Component_object);
  v5 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v5, 0), (v5 = *p_mAnimator) == 0)
    || (UnityEngine_Animator__Update(v5, 0.0, 0), (v5 = *p_mAnimator) == 0) )
  {
    sub_1C32E7C(v5);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5, 0, 0);
}


void EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 *v7; // x21
  System_String_o *name; // x0
  __int64 v9; // x8
  System_String_o *v10; // x22
  int v11; // w9
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x9
  int v15; // w8
  __int64 v16; // x9
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Object_o *v19; // x25
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *v21; // x25
  __int64 v22; // x8
  __int64 v23; // x9
  System_String_o *v24; // x24
  AssetLoader_LoadEndDataHandler_o *v25; // x25
  int v26; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C31BB7 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C32C20(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_1C32C20(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C32C20(&StringLiteral_1104/*"/image/"*/);
    sub_1C32C20(&StringLiteral_7568/*"Image/"*/);
    sub_1C32C20(&StringLiteral_13754/*"Texture_"*/);
    byte_4C31BB7 = 1;
  }
  v5 = sub_1C32E6C(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = spriteNames;
  v7 = (__int64 *)(v5 + 16);
  sub_1C32BC4(v5 + 16, spriteNames);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4(v5 + 24, this);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_63518544(
                                               name,
                                               (System_String_o *)StringLiteral_1104/*"/image/"*/,
                                               0),
        v26 = 1,
        (v9 = *v7) == 0) )
  {
LABEL_29:
    sub_1C32E7C(gameObject);
  }
  v10 = (System_String_o *)gameObject;
  v11 = 1;
  while ( v11 < *(_DWORD *)(v9 + 24) )
  {
    v12 = sub_1C32E6C(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    if ( !v12 )
      goto LABEL_29;
    *(_QWORD *)(v12 + 32) = v5;
    v13 = v12 + 32;
    gameObject = (UnityEngine_Object_o *)sub_1C32BC4(v12 + 32, v5);
    v14 = *(_QWORD *)(v12 + 32);
    v15 = 2 * v26;
    *(_DWORD *)(v12 + 16) = 2 * v26;
    if ( !v14 )
      goto LABEL_29;
    v16 = *(_QWORD *)(v14 + 16);
    if ( !v16 )
      goto LABEL_29;
    if ( v15 >= *(_DWORD *)(v16 + 24) )
      return;
    v17 = System_Int32__ToString((int32_t)&v26, 0);
    v18 = System_String__Concat_63556792(v10, (System_String_o *)StringLiteral_13754/*"Texture_"*/, v17, 0);
    v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v18, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v19, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v19 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v12 + 24) = Component_object;
      sub_1C32BC4(v12 + 24, Component_object);
      v21 = *(UnityEngine_Object_o **)(v12 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v13 )
          goto LABEL_29;
        v22 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
        if ( !v22 )
          goto LABEL_29;
        v23 = *(int *)(v12 + 16);
        if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 24) )
          sub_1C32E84(gameObject);
        v24 = System_String__Concat_63518544(
                (System_String_o *)StringLiteral_7568/*"Image/"*/,
                *(System_String_o **)(v22 + 8 * v23 + 32),
                0);
        v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v24, v25, 1, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v11 = ++v26;
    v9 = *v7;
    if ( !*v7 )
      goto LABEL_29;
  }
}


System_String_array *EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *IsNullOrEmpty; // x0
  int max_length; // w8
  unsigned int v6; // w22
  System_String_o *v7; // x21
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_String_o *v11; // x1
  Il2CppClass **v12; // x0

  if ( (byte_4C31BB8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_7568/*"Image/"*/);
    byte_4C31BB8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v6 = 1;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C32E84(IsNullOrEmpty);
      IsNullOrEmpty = args->m_Items[v6];
      if ( !IsNullOrEmpty )
        break;
      v7 = System_String__Trim(IsNullOrEmpty, 0);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v7, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_63518544((System_String_o *)StringLiteral_7568/*"Image/"*/, v7, 0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v9 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v11 = IsNullOrEmpty;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v12 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v12[4] = (Il2CppClass *)v11;
          IsNullOrEmpty = (System_String_o *)sub_1C32BC4(v12 + 4, v11);
        }
      }
      max_length = args->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C32E7C(IsNullOrEmpty);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
  else
    return 0;
}


bool EventPlayAnimationInsertionComponent__IsActive(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isActive;
}


bool EventPlayAnimationInsertionComponent__IsDestroy(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isDestroy;
}


void EventPlayAnimationInsertionComponent__PlayAnimation(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_o *animName,
        bool playInAnim,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimator; // x23
  UnityEngine_Behaviour_o *v10; // x0
  System_String_o *v11; // x2
  struct System_String_o *v12; // x0
  float v13; // s0

  if ( (byte_4C31BB6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16554/*"_in"*/);
    sub_1C32C20(&StringLiteral_3052/*"Base Layer."*/);
    sub_1C32C20(&StringLiteral_16572/*"_out"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31BB6 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v10 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v10, 1, 0);
    if ( playInAnim )
    {
      v11 = (System_String_o *)StringLiteral_16554/*"_in"*/;
    }
    else
    {
      v11 = (System_String_o *)StringLiteral_16572/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v12 = System_String__Concat_63556792((System_String_o *)StringLiteral_3052/*"Base Layer."*/, animName, v11, 0);
    this->fields.nowPlayAnimName = v12;
    sub_1C32BC4(&this->fields.nowPlayAnimName, v12);
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v10 )
      goto LABEL_16;
    v13 = 0.0;
    if ( isSkip )
      v13 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v10, this->fields.nowPlayAnimName, 0, v13, 0);
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v10 )
LABEL_16:
      sub_1C32E7C(v10);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v10, 0.0, 0);
    this->fields.isActive = 1;
  }
}


void EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v5; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4C31BB5 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16572/*"_out"*/);
    byte_4C31BB5 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    goto LABEL_14;
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v5, mAnimator, 0, 0);
  v6 = v5;
  if ( UnityEngine_AnimatorStateInfo__get_normalizedTime(&v6, 0) > 1.0 && this->fields.isLoadedSprite )
  {
    mAnimator = this->fields.mAnimator;
    if ( !mAnimator )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0);
    mAnimator = (UnityEngine_Animator_o *)this->fields.nowPlayAnimName;
    this->fields.isActive = 0;
    if ( !mAnimator )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16572/*"_out"*/, 0)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      mAnimator = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( mAnimator )
      {
        mAnimator = (UnityEngine_Animator_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimator, 0);
        if ( Instance )
        {
          ScriptManager__destroyAnimationInsertionObject((ScriptManager_o *)Instance, (System_String_o *)mAnimator, 0);
          return;
        }
      }
LABEL_14:
      sub_1C32E7C(mAnimator);
    }
  }
}


void EventPlayAnimationInsertionComponent___c__DisplayClass13_0___ctor(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ctor(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ChangeAnimationSprite_b__0(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v4; // x19
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct System_String_array *spriteNames; // x8
  __int64 spriteNamesNo; // x9
  struct UITexture_o *sprite; // x8
  UnityEngine_Object_o *v9; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v10; // x8
  struct System_String_array *v11; // x8
  __int64 v12; // x9
  System_String_o *v13; // x0
  struct UITexture_o *v14; // x8
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v15; // x20
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v16; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v17; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4C31BBB & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1C32C20(&StringLiteral_16629/*"a"*/);
    byte_4C31BBB = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  spriteNames = CS___8__locals1->fields.spriteNames;
  if ( !spriteNames )
    goto LABEL_23;
  spriteNamesNo = v4->fields.spriteNamesNo;
  if ( (unsigned int)spriteNamesNo >= LODWORD(spriteNames->max_length) )
LABEL_24:
    sub_1C32E84(this);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__51111776(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  sprite = v4->fields.sprite;
  if ( !sprite )
    goto LABEL_23;
  ((void (__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, const MethodInfo *))sprite->klass->vtable._27_set_mainTexture.methodPtr)(
    sprite,
    v4->fields.sprite,
    this,
    sprite->klass->vtable._27_set_mainTexture.method);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v4->fields.sprite;
  if ( !this )
    goto LABEL_23;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                                 this,
                                 this->klass[1].vtable._1_Finalize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.CS___8__locals1;
    if ( !v10 )
      goto LABEL_23;
    v11 = v10->fields.spriteNames;
    if ( !v11 )
      goto LABEL_23;
    v12 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v12 < LODWORD(v11->max_length) )
    {
      v13 = System_String__Concat_63518544(v11->m_Items[v12], (System_String_o *)StringLiteral_16629/*"a"*/, 0);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__51111776(
                                                                               assetData,
                                                                               v13,
                                                                               (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
      v14 = v4->fields.sprite;
      if ( v14 )
      {
        v15 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *(__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, const MethodInfo *))v14->klass->vtable._24_get_material.methodPtr)(
                                                                                 v14,
                                                                                 v4->fields.sprite,
                                                                                 v14->klass->vtable._24_get_material.method);
        v16 = this;
        if ( !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
          this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        if ( v16 )
        {
          UnityEngine_Material__SetTexture_71088452(
            (UnityEngine_Material_o *)v16,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v15,
            0);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1C32E7C(this);
    }
    goto LABEL_24;
  }
LABEL_20:
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_23;
  _4__this = v17->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.isLoadedSprite = 1;
}