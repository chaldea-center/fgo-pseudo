void EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596A4C4 & 1) == 0 )
  {
    sub_2213A60(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596A4C4 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                                                                             0);
}


void EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596A4C3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A4C3 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nowPlayAnimName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_Animator_o *v12; // x0

  if ( (byte_596A4BE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_596A4BE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mAnimator, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  v12 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v12, 0), (v12 = *p_mAnimator) == 0)
    || (UnityEngine_Animator__Update(v12, 0.0, 0), (v12 = *p_mAnimator) == 0) )
  {
    sub_2213CDC(v12, v11);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
}


void EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *name; // x0
  __int64 v22; // x8
  int v23; // w9
  System_String_o *v24; // x22
  __int64 v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x24
  __int64 v33; // x9
  int v34; // w8
  __int64 v35; // x9
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *v40; // x25
  Il2CppObject *Component_object; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Object_o *v50; // x25
  __int64 v51; // x8
  __int64 v52; // x9
  System_String_o *v53; // x24
  AssetLoader_LoadEndDataHandler_o *v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  int v57; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596A4C1 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_2213A60(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_2213A60(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_2213A60(&StringLiteral_1180/*"/image/"*/);
    sub_2213A60(&StringLiteral_7896/*"Image/"*/);
    sub_2213A60(&StringLiteral_14329/*"Texture_"*/);
    byte_596A4C1 = 1;
  }
  v57 = 0;
  v5 = sub_2213CCC(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = spriteNames;
  v14 = (__int64 *)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)spriteNames, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_75651716(
                                               name,
                                               (System_String_o *)StringLiteral_1180/*"/image/"*/,
                                               0),
        v22 = *v14,
        v23 = 1,
        v57 = 1,
        !v22) )
  {
LABEL_29:
    sub_2213CDC(gameObject, v7);
  }
  v24 = (System_String_o *)gameObject;
  while ( v23 < *(_DWORD *)(v22 + 24) )
  {
    v25 = sub_2213CCC(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    if ( !v25 )
      goto LABEL_29;
    *(_QWORD *)(v25 + 32) = v5;
    v32 = v25 + 32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), v5, v26, v27, v28, v29, v30, v31);
    v33 = *(_QWORD *)(v25 + 32);
    v34 = 2 * v57;
    *(_DWORD *)(v25 + 16) = 2 * v57;
    if ( !v33 )
      goto LABEL_29;
    v35 = *(_QWORD *)(v33 + 16);
    if ( !v35 )
      goto LABEL_29;
    if ( v34 >= *(_DWORD *)(v35 + 24) )
      return;
    v36 = System_Int32__ToString((int32_t)&v57, 0);
    v37 = System_String__Concat_75694928(v24, (System_String_o *)StringLiteral_14329/*"Texture_"*/, v36, 0);
    v40 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v37, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v40, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v40 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v40,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v25 + 24) = Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v25 + 24),
        (int32_t)Component_object,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      v50 = *(UnityEngine_Object_o **)(v25 + 24);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v50, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v32 )
          goto LABEL_29;
        v51 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
        if ( !v51 )
          goto LABEL_29;
        v52 = *(int *)(v25 + 16);
        if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 24) )
          sub_2213CE4(gameObject);
        v53 = System_String__Concat_75651716(
                (System_String_o *)StringLiteral_7896/*"Image/"*/,
                *(System_String_o **)(v51 + 8 * v52 + 32),
                0);
        v54 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v54,
          (Il2CppObject *)v25,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v55, v56);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v53, v54, 1, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v22 = *v14;
    v23 = ++v57;
    if ( !v22 )
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
  int max_length; // w8
  unsigned int v7; // w24
  System_String_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  System_String_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_596A4C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_7896/*"Image/"*/);
    byte_596A4C2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v7 = 1;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(IsNullOrEmpty);
      IsNullOrEmpty = args->m_Items[v7];
      if ( !IsNullOrEmpty )
        break;
      v8 = System_String__Trim(IsNullOrEmpty, 0);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v8, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_75651716((System_String_o *)StringLiteral_7896/*"Image/"*/, v8, 0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v18 = IsNullOrEmpty;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      max_length = args->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_2213CDC(IsNullOrEmpty, v5);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 *v12; // x8
  struct System_String_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  float v20; // s0

  if ( (byte_596A4C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17229/*"_in"*/);
    sub_2213A60(&StringLiteral_3175/*"Base Layer."*/);
    sub_2213A60(&StringLiteral_17247/*"_out"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A4C0 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName, playInAnim);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v11, 1, 0);
    if ( playInAnim )
    {
      v12 = &StringLiteral_17229/*"_in"*/;
    }
    else
    {
      v12 = &StringLiteral_17247/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v13 = System_String__Concat_75694928((System_String_o *)StringLiteral_3175/*"Base Layer."*/, animName, (System_String_o *)*v12, 0);
    this->fields.nowPlayAnimName = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nowPlayAnimName,
      (int32_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    v20 = 0.0;
    if ( isSkip )
      v20 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v11, this->fields.nowPlayAnimName, 0, v20, 0);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
LABEL_16:
      sub_2213CDC(v11, v10);
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
  UnityEngine_AnimatorStateInfo_o v5; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_596A4BF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&StringLiteral_17247/*"_out"*/);
    byte_596A4BF = 1;
  }
  mAnimator = this->fields.mAnimator;
  memset(&v6, 0, sizeof(v6));
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_17247/*"_out"*/, 0)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_2213CDC(mAnimator, method);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v12; // x8
  struct System_String_array *v13; // x8
  __int64 v14; // x9
  System_String_o *v15; // x0
  struct UITexture_o *v16; // x8
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v17; // x20
  __int64 v18; // x2
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v19; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v20; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_596A4C5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_596A4C5 = 1;
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
    sub_2213CE4(this);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__58532980(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
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
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                                  this,
                                  this->klass[1].vtable._1_Finalize.methodPtr);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v4->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_23;
    v13 = v12->fields.spriteNames;
    if ( !v13 )
      goto LABEL_23;
    v14 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v14 < LODWORD(v13->max_length) )
    {
      v15 = System_String__Concat_75651716(v13->m_Items[v14], (System_String_o *)StringLiteral_17306/*"a"*/, 0);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__58532980(
                                                                               assetData,
                                                                               v15,
                                                                               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
      v16 = v4->fields.sprite;
      if ( v16 )
      {
        v17 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *(__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, const MethodInfo *))v16->klass->vtable._24_get_material.methodPtr)(
                                                                                 v16,
                                                                                 v4->fields.sprite,
                                                                                 v16->klass->vtable._24_get_material.method);
        v19 = this;
        if ( !*(&EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo, assetData, v18);
        if ( v19 )
        {
          UnityEngine_Material__SetTexture_83276468(
            (UnityEngine_Material_o *)v19,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v17,
            0);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_2213CDC(this, assetData);
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