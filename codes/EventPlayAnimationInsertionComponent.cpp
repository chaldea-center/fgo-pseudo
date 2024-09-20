void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EE18 & 1) == 0 )
  {
    sub_1B885B0(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A5EE18 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                                                                             0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5EE17 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EE17 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowPlayAnimName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  UnityEngine_Animator_o *v8; // x0

  if ( (byte_4A5EE12 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_4A5EE12 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_mAnimator, (int32_t)Component_object, v5, v6);
  v8 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v8, 0LL), (v8 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v8, 0.0, 0LL), (v8 = *p_mAnimator) == 0LL) )
  {
    sub_1B8880C(v8, v7);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *name; // x0
  __int64 v14; // x8
  System_String_o *v15; // x22
  int v16; // w9
  __int64 v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *v23; // x25
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *v27; // x25
  __int64 v28; // x8
  __int64 v29; // x9
  System_String_o *v30; // x24
  AssetLoader_LoadEndDataHandler_o *v31; // x25
  int v32; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5EE15 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_1B885B0(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_1B885B0(&StringLiteral_1183/*"/image/"*/);
    sub_1B885B0(&StringLiteral_7478/*"Image/"*/);
    sub_1B885B0(&StringLiteral_13658/*"Texture_"*/);
    byte_4A5EE15 = 1;
  }
  v5 = sub_1B887FC(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = spriteNames;
  v10 = (__int64 *)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)spriteNames, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v11, v12);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_61707032(
                                               name,
                                               (System_String_o *)StringLiteral_1183/*"/image/"*/,
                                               0LL),
        v32 = 1,
        (v14 = *v10) == 0) )
  {
LABEL_26:
    sub_1B8880C(gameObject, v7);
  }
  v15 = (System_String_o *)gameObject;
  v16 = 1;
  while ( v16 < *(_DWORD *)(v14 + 24) )
  {
    v17 = sub_1B887FC(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_26;
    *(_QWORD *)(v17 + 32) = v5;
    v20 = v17 + 32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), v5, v18, v19);
    *(_DWORD *)(v17 + 16) = 2 * v32;
    v21 = System_Int32__ToString((int32_t)&v32, 0LL);
    v22 = System_String__Concat_61718292(v15, (System_String_o *)StringLiteral_13658/*"Texture_"*/, v21, 0LL);
    v23 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v23 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v23,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v17 + 24) = Component_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)Component_object, v25, v26);
      v27 = *(UnityEngine_Object_o **)(v17 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v20 )
          goto LABEL_26;
        v28 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
        if ( !v28 )
          goto LABEL_26;
        v29 = *(int *)(v17 + 16);
        if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 24) )
          sub_1B88814(gameObject, v7);
        v30 = System_String__Concat_61707032(
                (System_String_o *)StringLiteral_7478/*"Image/"*/,
                *(System_String_o **)(v28 + 8 * v29 + 32),
                0LL);
        v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v31,
          (Il2CppObject *)v17,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v16 = ++v32;
    v14 = *v10;
    if ( !*v10 )
      goto LABEL_26;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  unsigned int v7; // w22
  System_String_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_String_o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A5EE16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_7478/*"Image/"*/);
    byte_4A5EE16 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v7 = 1;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B88814(IsNullOrEmpty, v5);
      IsNullOrEmpty = args->m_Items[v7];
      if ( !IsNullOrEmpty )
        break;
      v8 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v8, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_61707032((System_String_o *)StringLiteral_7478/*"Image/"*/, v8, 0LL);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v14 = IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      max_length = args->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B8880C(IsNullOrEmpty, v5);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  UnityEngine_Object_o *mAnimator; // x23
  __int64 v10; // x1
  UnityEngine_Behaviour_o *v11; // x0
  System_String_o *v12; // x2
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  float v16; // s0

  if ( (byte_4A5EE14 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16544/*"_in"*/);
    sub_1B885B0(&StringLiteral_3175/*"Base Layer."*/);
    sub_1B885B0(&StringLiteral_16565/*"_out"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EE14 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v11, 1, 0LL);
    if ( playInAnim )
    {
      v12 = (System_String_o *)StringLiteral_16544/*"_in"*/;
    }
    else
    {
      v12 = (System_String_o *)StringLiteral_16565/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v13 = System_String__Concat_61718292((System_String_o *)StringLiteral_3175/*"Base Layer."*/, animName, v12, 0LL);
    this->fields.nowPlayAnimName = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowPlayAnimName, (int32_t)v13, v14, v15);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    v16 = 0.0;
    if ( isSkip )
      v16 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v11, this->fields.nowPlayAnimName, 0, v16, 0LL);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
LABEL_16:
      sub_1B8880C(v11, v10);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v11, 0.0, 0LL);
    this->fields.isActive = 1;
  }
}


void __fastcall EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v5; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4A5EE13 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16565/*"_out"*/);
    byte_4A5EE13 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    goto LABEL_14;
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v5, mAnimator, 0, 0LL);
  v6 = v5;
  if ( UnityEngine_AnimatorStateInfo__get_normalizedTime(&v6, 0LL) > 1.0 && this->fields.isLoadedSprite )
  {
    mAnimator = this->fields.mAnimator;
    if ( !mAnimator )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
    mAnimator = (UnityEngine_Animator_o *)this->fields.nowPlayAnimName;
    this->fields.isActive = 0;
    if ( !mAnimator )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16565/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1B8880C(mAnimator, method);
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
  if ( (byte_4A5EE19 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1B885B0(&StringLiteral_16620/*"a"*/);
    byte_4A5EE19 = 1;
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
    sub_1B88814(this, assetData);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__48635516(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
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
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                 this,
                                 this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.CS___8__locals1;
    if ( !v10 )
      goto LABEL_23;
    v11 = v10->fields.spriteNames;
    if ( !v11 )
      goto LABEL_23;
    v12 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v12 < v11->max_length )
    {
      v13 = System_String__Concat_61707032(v11->m_Items[v12], (System_String_o *)StringLiteral_16620/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__48635516(
                                                                               assetData,
                                                                               v13,
                                                                               (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
      v14 = v4->fields.sprite;
      if ( v14 )
      {
        v15 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v14->klass->vtable._24_get_material.method)(
                                                                                 v4->fields.sprite,
                                                                                 v14->klass->vtable._25_set_material.methodPtr);
        v16 = this;
        if ( !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        if ( v16 )
        {
          UnityEngine_Material__SetTexture_69324324(
            (UnityEngine_Material_o *)v16,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v15,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1B8880C(this, assetData);
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