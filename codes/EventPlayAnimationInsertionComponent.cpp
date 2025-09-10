void EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C214EB & 1) == 0 )
  {
    sub_1C2D490(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C214EB = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
                                                                             0);
}


void EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C214EA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C214EA = 1;
  }
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434(&this->fields.nowPlayAnimName);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  __int64 v4; // x1
  UnityEngine_Animator_o *v5; // x0

  if ( (byte_4C214E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_4C214E5 = 1;
  }
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animator___);
  p_mAnimator = &this->fields.mAnimator;
  sub_1C2D434(p_mAnimator);
  v5 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v5, 0), (v5 = *p_mAnimator) == 0)
    || (UnityEngine_Animator__Update(v5, 0.0, 0), (v5 = *p_mAnimator) == 0) )
  {
    sub_1C2D6EC(v5, v4);
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
  __int64 v7; // x1
  __int64 *v8; // x21
  System_String_o *name; // x0
  __int64 v10; // x8
  System_String_o *v11; // x22
  int v12; // w9
  __int64 v13; // x23
  __int64 v14; // x24
  __int64 v15; // x9
  int v16; // w8
  __int64 v17; // x9
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_Object_o *v20; // x25
  UnityEngine_Object_o *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x8
  __int64 v25; // x9
  System_String_o *v26; // x24
  AssetLoader_LoadEndDataHandler_o *v27; // x25
  int v28; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C214E8 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_1C2D490(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C2D490(&StringLiteral_1104/*"/image/"*/);
    sub_1C2D490(&StringLiteral_7562/*"Image/"*/);
    sub_1C2D490(&StringLiteral_13751/*"Texture_"*/);
    byte_4C214E8 = 1;
  }
  v5 = sub_1C2D6DC(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = spriteNames;
  v8 = (__int64 *)(v5 + 16);
  sub_1C2D434(v5 + 16);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434(v5 + 24);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_63457864(
                                               name,
                                               (System_String_o *)StringLiteral_1104/*"/image/"*/,
                                               0),
        v28 = 1,
        (v10 = *v8) == 0) )
  {
LABEL_29:
    sub_1C2D6EC(gameObject, v7);
  }
  v11 = (System_String_o *)gameObject;
  v12 = 1;
  while ( v12 < *(_DWORD *)(v10 + 24) )
  {
    v13 = sub_1C2D6DC(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !v13 )
      goto LABEL_29;
    *(_QWORD *)(v13 + 32) = v5;
    v14 = v13 + 32;
    gameObject = (UnityEngine_Object_o *)sub_1C2D434(v13 + 32);
    v15 = *(_QWORD *)(v13 + 32);
    v16 = 2 * v28;
    *(_DWORD *)(v13 + 16) = 2 * v28;
    if ( !v15 )
      goto LABEL_29;
    v17 = *(_QWORD *)(v15 + 16);
    if ( !v17 )
      goto LABEL_29;
    if ( v16 >= *(_DWORD *)(v17 + 24) )
      return;
    v18 = System_Int32__ToString((int32_t)&v28, 0);
    v19 = System_String__Concat_63496112(v11, (System_String_o *)StringLiteral_13751/*"Texture_"*/, v18, 0);
    v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v19, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v20, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v20 )
        goto LABEL_29;
      *(_QWORD *)(v13 + 24) = UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v20,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      sub_1C2D434(v13 + 24);
      v21 = *(UnityEngine_Object_o **)(v13 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v14 )
          goto LABEL_29;
        v24 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
        if ( !v24 )
          goto LABEL_29;
        v25 = *(int *)(v13 + 16);
        if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 24) )
          sub_1C2D6F4(gameObject, v7, v22, v23);
        v26 = System_String__Concat_63457864(
                (System_String_o *)StringLiteral_7562/*"Image/"*/,
                *(System_String_o **)(v24 + 8 * v25 + 32),
                0);
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v27,
          (Il2CppObject *)v13,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v26, v27, 1, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v12 = ++v28;
    v10 = *v8;
    if ( !*v8 )
      goto LABEL_29;
  }
}


System_String_array *EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  int max_length; // w8
  unsigned int v9; // w22
  System_String_o *v10; // x21
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_String_o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4C214E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&StringLiteral_7562/*"Image/"*/);
    byte_4C214E9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v9 = 1;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C2D6F4(IsNullOrEmpty, v5, v6, v7);
      IsNullOrEmpty = args->m_Items[v9];
      if ( !IsNullOrEmpty )
        break;
      v10 = System_String__Trim(IsNullOrEmpty, 0);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v10, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_63457864((System_String_o *)StringLiteral_7562/*"Image/"*/, v10, 0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v14 = IsNullOrEmpty;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          IsNullOrEmpty = (System_String_o *)sub_1C2D434(v15 + 4);
        }
      }
      max_length = args->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C2D6EC(IsNullOrEmpty, v5);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v10; // x1
  UnityEngine_Behaviour_o *v11; // x0
  System_String_o *v12; // x2
  float v13; // s0

  if ( (byte_4C214E7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16552/*"_in"*/);
    sub_1C2D490(&StringLiteral_3049/*"Base Layer."*/);
    sub_1C2D490(&StringLiteral_16570/*"_out"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C214E7 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v11, 1, 0);
    if ( playInAnim )
    {
      v12 = (System_String_o *)StringLiteral_16552/*"_in"*/;
    }
    else
    {
      v12 = (System_String_o *)StringLiteral_16570/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    this->fields.nowPlayAnimName = System_String__Concat_63496112(
                                     (System_String_o *)StringLiteral_3049/*"Base Layer."*/,
                                     animName,
                                     v12,
                                     0);
    sub_1C2D434(&this->fields.nowPlayAnimName);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    v13 = 0.0;
    if ( isSkip )
      v13 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v11, this->fields.nowPlayAnimName, 0, v13, 0);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
LABEL_16:
      sub_1C2D6EC(v11, v10);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v11, 0.0, 0);
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

  if ( (byte_4C214E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16570/*"_out"*/);
    byte_4C214E6 = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16570/*"_out"*/, 0)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1C2D6EC(mAnimator, method);
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
  __int64 v3; // x3
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v5; // x19
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct System_String_array *spriteNames; // x8
  __int64 spriteNamesNo; // x9
  struct UITexture_o *sprite; // x8
  UnityEngine_Object_o *v10; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v11; // x8
  struct System_String_array *v12; // x8
  __int64 v13; // x9
  System_String_o *v14; // x0
  struct UITexture_o *v15; // x8
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v16; // x20
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v17; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v18; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8

  v5 = this;
  if ( (byte_4C214EC & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1C2D490(&StringLiteral_16627/*"a"*/);
    byte_4C214EC = 1;
  }
  CS___8__locals1 = v5->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  spriteNames = CS___8__locals1->fields.spriteNames;
  if ( !spriteNames )
    goto LABEL_23;
  spriteNamesNo = v5->fields.spriteNamesNo;
  if ( (unsigned int)spriteNamesNo >= LODWORD(spriteNames->max_length) )
LABEL_24:
    sub_1C2D6F4(this, assetData, method, v3);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__51051712(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  sprite = v5->fields.sprite;
  if ( !sprite )
    goto LABEL_23;
  ((void (__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, const MethodInfo *))sprite->klass->vtable._27_set_mainTexture.methodPtr)(
    sprite,
    v5->fields.sprite,
    this,
    sprite->klass->vtable._27_set_mainTexture.method);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v5->fields.sprite;
  if ( !this )
    goto LABEL_23;
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                                  this,
                                  this->klass[1].vtable._1_Finalize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v5->fields.CS___8__locals1;
    if ( !v11 )
      goto LABEL_23;
    v12 = v11->fields.spriteNames;
    if ( !v12 )
      goto LABEL_23;
    v13 = v5->fields.spriteNamesNo;
    if ( (unsigned int)v13 < LODWORD(v12->max_length) )
    {
      v14 = System_String__Concat_63457864(v12->m_Items[v13], (System_String_o *)StringLiteral_16627/*"a"*/, 0);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__51051712(
                                                                               assetData,
                                                                               v14,
                                                                               (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
      v15 = v5->fields.sprite;
      if ( v15 )
      {
        v16 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *(__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, const MethodInfo *))v15->klass->vtable._24_get_material.methodPtr)(
                                                                                 v15,
                                                                                 v5->fields.sprite,
                                                                                 v15->klass->vtable._24_get_material.method);
        v17 = this;
        if ( !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
          this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        if ( v17 )
        {
          UnityEngine_Material__SetTexture_71028516(
            (UnityEngine_Material_o *)v17,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v16,
            0);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1C2D6EC(this, assetData);
    }
    goto LABEL_24;
  }
LABEL_20:
  v18 = v5->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_23;
  _4__this = v18->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.isLoadedSprite = 1;
}