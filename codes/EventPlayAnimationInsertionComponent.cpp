void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4B061E0 & 1) == 0 )
  {
    sub_1BC3008(&EventPlayAnimationInsertionComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_16121/*"_MaskTex"*/, v2);
    byte_4B061E0 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16121/*"_MaskTex"*/,
                                                                             0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B061DF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B061DF = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.nowPlayAnimName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UnityEngine_Animator_o *v8; // x0

  if ( (byte_4B061DA & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animator___, method);
    byte_4B061DA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_mAnimator, (int32_t)Component_object, v5, v6);
  v8 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v8, 0LL), (v8 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v8, 0.0, 0LL), (v8 = *p_mAnimator) == 0LL) )
  {
    sub_1BC3264(v8, v7);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *name; // x0
  __int64 v23; // x8
  System_String_o *v24; // x22
  int v25; // w9
  __int64 v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x24
  __int64 v30; // x9
  int v31; // w8
  __int64 v32; // x9
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_Object_o *v35; // x25
  Il2CppObject *Component_object; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Object_o *v39; // x25
  __int64 v40; // x2
  __int64 v41; // x8
  __int64 v42; // x9
  System_String_o *v43; // x24
  AssetLoader_LoadEndDataHandler_o *v44; // x25
  int v45; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B061DD & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, spriteNames);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v8);
    sub_1BC3008(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__, v9);
    sub_1BC3008(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_1095/*"/image/"*/, v11);
    sub_1BC3008(&StringLiteral_7491/*"Image/"*/, v12);
    sub_1BC3008(&StringLiteral_13625/*"Texture_"*/, v13);
    byte_4B061DD = 1;
  }
  v14 = sub_1BC3254(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_29;
  *(_QWORD *)(v14 + 16) = spriteNames;
  v19 = (__int64 *)(v14 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)spriteNames, v17, v18);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v20, v21);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_62348648(
                                               name,
                                               (System_String_o *)StringLiteral_1095/*"/image/"*/,
                                               0LL),
        v45 = 1,
        (v23 = *v19) == 0) )
  {
LABEL_29:
    sub_1BC3264(gameObject, v16);
  }
  v24 = (System_String_o *)gameObject;
  v25 = 1;
  while ( v25 < *(_DWORD *)(v23 + 24) )
  {
    v26 = sub_1BC3254(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 )
      goto LABEL_29;
    *(_QWORD *)(v26 + 32) = v14;
    v29 = v26 + 32;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 32), v14, v27, v28);
    v30 = *(_QWORD *)(v26 + 32);
    v31 = 2 * v45;
    *(_DWORD *)(v26 + 16) = 2 * v45;
    if ( !v30 )
      goto LABEL_29;
    v32 = *(_QWORD *)(v30 + 16);
    if ( !v32 )
      goto LABEL_29;
    if ( v31 >= *(_DWORD *)(v32 + 24) )
      return;
    v33 = System_Int32__ToString((int32_t)&v45, 0LL);
    v34 = System_String__Concat_62386896(v24, (System_String_o *)StringLiteral_13625/*"Texture_"*/, v33, 0LL);
    v35 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v34, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v35 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v35,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v26 + 24) = Component_object;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 24), (int32_t)Component_object, v37, v38);
      v39 = *(UnityEngine_Object_o **)(v26 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v29 )
          goto LABEL_29;
        v41 = *(_QWORD *)(*(_QWORD *)v29 + 16LL);
        if ( !v41 )
          goto LABEL_29;
        v42 = *(int *)(v26 + 16);
        if ( (unsigned int)v42 >= *(_DWORD *)(v41 + 24) )
          sub_1BC326C(gameObject, v16, v40);
        v43 = System_String__Concat_62348648(
                (System_String_o *)StringLiteral_7491/*"Image/"*/,
                *(System_String_o **)(v41 + 8 * v42 + 32),
                0LL);
        v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v44,
          (Il2CppObject *)v26,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v43, v44, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v25 = ++v45;
    v23 = *v19;
    if ( !*v19 )
      goto LABEL_29;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  signed int max_length; // w8
  unsigned int v13; // w22
  System_String_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_String_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4B061DE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BC3008(&StringLiteral_7491/*"Image/"*/, v7);
    byte_4B061DE = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v13 = 1;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BC326C(IsNullOrEmpty, v10, v11);
      IsNullOrEmpty = args->m_Items[v13];
      if ( !IsNullOrEmpty )
        break;
      v14 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v14, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_62348648((System_String_o *)StringLiteral_7491/*"Image/"*/, v14, 0LL);
        if ( !v8 )
          break;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        v20 = IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      max_length = args->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1BC3264(IsNullOrEmpty, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_19;
  if ( v8->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
  else
    return 0LL;
}


bool __fastcall EventPlayAnimationInsertionComponent__IsActive(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isActive;
}


bool __fastcall EventPlayAnimationInsertionComponent__IsDestroy(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isDestroy;
}


void __fastcall EventPlayAnimationInsertionComponent__PlayAnimation(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_o *animName,
        bool playInAnim,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *mAnimator; // x23
  __int64 v14; // x1
  UnityEngine_Behaviour_o *v15; // x0
  System_String_o *v16; // x2
  struct System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  float v20; // s0

  if ( (byte_4B061DC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, animName);
    sub_1BC3008(&StringLiteral_16407/*"_in"*/, v9);
    sub_1BC3008(&StringLiteral_3031/*"Base Layer."*/, v10);
    sub_1BC3008(&StringLiteral_16425/*"_out"*/, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4B061DC = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v15 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v15, 1, 0LL);
    if ( playInAnim )
    {
      v16 = (System_String_o *)StringLiteral_16407/*"_in"*/;
    }
    else
    {
      v16 = (System_String_o *)StringLiteral_16425/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v17 = System_String__Concat_62386896((System_String_o *)StringLiteral_3031/*"Base Layer."*/, animName, v16, 0LL);
    this->fields.nowPlayAnimName = v17;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.nowPlayAnimName, (int32_t)v17, v18, v19);
    v15 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v15 )
      goto LABEL_16;
    v20 = 0.0;
    if ( isSkip )
      v20 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v15, this->fields.nowPlayAnimName, 0, v20, 0LL);
    v15 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v15 )
LABEL_16:
      sub_1BC3264(v15, v14);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v15, 0.0, 0LL);
    this->fields.isActive = 1;
  }
}


void __fastcall EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Animator_o *mAnimator; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_AnimatorStateInfo_o v7; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4B061DB & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method);
    sub_1BC3008(&StringLiteral_16425/*"_out"*/, v3);
    byte_4B061DB = 1;
  }
  memset(&v7, 0, sizeof(v7));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    goto LABEL_14;
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v6, mAnimator, 0, 0LL);
  v7 = v6;
  if ( UnityEngine_AnimatorStateInfo__get_normalizedTime(&v7, 0LL) > 1.0 && this->fields.isLoadedSprite )
  {
    mAnimator = this->fields.mAnimator;
    if ( !mAnimator )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
    mAnimator = (UnityEngine_Animator_o *)this->fields.nowPlayAnimName;
    this->fields.isActive = 0;
    if ( !mAnimator )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16425/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      mAnimator = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( mAnimator )
      {
        mAnimator = (UnityEngine_Animator_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimator, 0LL);
        if ( Instance )
        {
          ScriptManager__destroyAnimationInsertionObject((ScriptManager_o *)Instance, (System_String_o *)mAnimator, 0LL);
          return;
        }
      }
LABEL_14:
      sub_1BC3264(mAnimator, method);
    }
  }
}


void __fastcall EventPlayAnimationInsertionComponent___c__DisplayClass13_0___ctor(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ctor(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ChangeAnimationSprite_b__0(
        EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct System_String_array *spriteNames; // x8
  __int64 spriteNamesNo; // x9
  struct UITexture_o *sprite; // x8
  UnityEngine_Object_o *v12; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v13; // x8
  struct System_String_array *v14; // x8
  __int64 v15; // x9
  System_String_o *v16; // x0
  struct UITexture_o *v17; // x8
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v18; // x20
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v19; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v20; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B061E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, assetData);
    sub_1BC3008(&EventPlayAnimationInsertionComponent_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1BC3008(&StringLiteral_16482/*"a"*/, v7);
    byte_4B061E1 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  spriteNames = CS___8__locals1->fields.spriteNames;
  if ( !spriteNames )
    goto LABEL_23;
  spriteNamesNo = v4->fields.spriteNamesNo;
  if ( (unsigned int)spriteNamesNo >= spriteNames->max_length )
LABEL_24:
    sub_1BC326C(this, assetData, method);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__50213776(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  sprite = v4->fields.sprite;
  if ( !sprite )
    goto LABEL_23;
  ((void (__fastcall *)(struct UITexture_o *, EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))sprite->klass->vtable._27_set_mainTexture.method)(
    v4->fields.sprite,
    this,
    sprite->klass->vtable._28_get_shader.methodPtr);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v4->fields.sprite;
  if ( !this )
    goto LABEL_23;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                  this,
                                  this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(
                                                                           v12,
                                                                           0LL,
                                                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v4->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_23;
    v14 = v13->fields.spriteNames;
    if ( !v14 )
      goto LABEL_23;
    v15 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v15 < v14->max_length )
    {
      v16 = System_String__Concat_62348648(v14->m_Items[v15], (System_String_o *)StringLiteral_16482/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__50213776(
                                                                               assetData,
                                                                               v16,
                                                                               (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
      v17 = v4->fields.sprite;
      if ( v17 )
      {
        v18 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v17->klass->vtable._24_get_material.method)(
                                                                                 v4->fields.sprite,
                                                                                 v17->klass->vtable._25_set_material.methodPtr);
        v19 = this;
        if ( !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        if ( v19 )
        {
          UnityEngine_Material__SetTexture_69899112(
            (UnityEngine_Material_o *)v19,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v18,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1BC3264(this, assetData);
    }
    goto LABEL_24;
  }
LABEL_20:
  v20 = v4->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_23;
  _4__this = v20->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.isLoadedSprite = 1;
}