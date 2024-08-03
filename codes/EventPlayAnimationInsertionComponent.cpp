void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4A0002D & 1) == 0 )
  {
    sub_1B640C8(&EventPlayAnimationInsertionComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v2);
    byte_4A0002D = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
                                                                             0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A0002C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_4A0002C = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowPlayAnimName, v5, v2, v3);
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
  UnityEngine_Animator_o *v7; // x0

  if ( (byte_4A00027 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animator___, method);
    byte_4A00027 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mAnimator, (int32_t)Component_object, v5, v6);
  v7 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v7, 0LL), (v7 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v7, 0.0, 0LL), (v7 = *p_mAnimator) == 0LL) )
  {
    sub_1B64324(v7);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 0, 0LL);
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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *name; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  System_String_o *v25; // x22
  int v26; // w9
  __int64 v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x24
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x25
  Il2CppObject *Component_object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Object_o *v37; // x25
  __int64 v38; // x8
  __int64 v39; // x9
  System_String_o *v40; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  AssetLoader_LoadEndDataHandler_o *v43; // x25
  int v44; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A0002A & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, spriteNames);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v8);
    sub_1B640C8(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__, v9);
    sub_1B640C8(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1184/*"/image/"*/, v11);
    sub_1B640C8(&StringLiteral_7444/*"Image/"*/, v12);
    sub_1B640C8(&StringLiteral_13588/*"Texture_"*/, v13);
    byte_4A0002A = 1;
  }
  v14 = sub_1B64314(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, spriteNames, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_QWORD *)(v14 + 16) = spriteNames;
  v18 = (__int64 *)(v14 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)spriteNames, v16, v17);
  *(_QWORD *)(v14 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v19, v20);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_61375396(
                                               name,
                                               (System_String_o *)StringLiteral_1184/*"/image/"*/,
                                               0LL),
        v44 = 1,
        (v24 = *v18) == 0) )
  {
LABEL_26:
    sub_1B64324(gameObject);
  }
  v25 = (System_String_o *)gameObject;
  v26 = 1;
  while ( v26 < *(_DWORD *)(v24 + 24) )
  {
    v27 = sub_1B64314(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v22, v23);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( !v27 )
      goto LABEL_26;
    *(_QWORD *)(v27 + 32) = v14;
    v30 = v27 + 32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), v14, v28, v29);
    *(_DWORD *)(v27 + 16) = 2 * v44;
    v31 = System_Int32__ToString((int32_t)&v44, 0LL);
    v32 = System_String__Concat_61386656(v25, (System_String_o *)StringLiteral_13588/*"Texture_"*/, v31, 0LL);
    v33 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v32, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v33 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v33,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v27 + 24) = Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)Component_object, v35, v36);
      v37 = *(UnityEngine_Object_o **)(v27 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v30 )
          goto LABEL_26;
        v38 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
        if ( !v38 )
          goto LABEL_26;
        v39 = *(int *)(v27 + 16);
        if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 24) )
          sub_1B6432C(gameObject, v22);
        v40 = System_String__Concat_61375396(
                (System_String_o *)StringLiteral_7444/*"Image/"*/,
                *(System_String_o **)(v38 + 8 * v39 + 32),
                0LL);
        v43 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42);
        AssetLoader_LoadEndDataHandler___ctor(
          v43,
          (Il2CppObject *)v27,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v40, v43, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v26 = ++v44;
    v24 = *v18;
    if ( !*v18 )
      goto LABEL_26;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  unsigned int v13; // w22
  System_String_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_String_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4A0002B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_7444/*"Image/"*/, v8);
    byte_4A0002B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v13 = 1;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B6432C(IsNullOrEmpty, v11);
      IsNullOrEmpty = args->m_Items[v13];
      if ( !IsNullOrEmpty )
        break;
      v14 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v14, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_61375396((System_String_o *)StringLiteral_7444/*"Image/"*/, v14, 0LL);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v20 = IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      max_length = args->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B64324(IsNullOrEmpty);
  }
LABEL_15:
  if ( !v9 )
    goto LABEL_19;
  if ( v9->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  UnityEngine_Behaviour_o *v14; // x0
  System_String_o *v15; // x2
  struct System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  float v19; // s0

  if ( (byte_4A00029 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, animName);
    sub_1B640C8(&StringLiteral_16475/*"_in"*/, v9);
    sub_1B640C8(&StringLiteral_3155/*"Base Layer."*/, v10);
    sub_1B640C8(&StringLiteral_16496/*"_out"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_4A00029 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v14, 1, 0LL);
    if ( playInAnim )
    {
      v15 = (System_String_o *)StringLiteral_16475/*"_in"*/;
    }
    else
    {
      v15 = (System_String_o *)StringLiteral_16496/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v16 = System_String__Concat_61386656((System_String_o *)StringLiteral_3155/*"Base Layer."*/, animName, v15, 0LL);
    this->fields.nowPlayAnimName = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowPlayAnimName, (int32_t)v16, v17, v18);
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
      goto LABEL_16;
    v19 = 0.0;
    if ( isSkip )
      v19 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v14, this->fields.nowPlayAnimName, 0, v19, 0LL);
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
LABEL_16:
      sub_1B64324(v14);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v14, 0.0, 0LL);
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

  if ( (byte_4A00028 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method);
    sub_1B640C8(&StringLiteral_16496/*"_out"*/, v3);
    byte_4A00028 = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16496/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1B64324(mAnimator);
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
  if ( (byte_4A0002E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, assetData);
    sub_1B640C8(&EventPlayAnimationInsertionComponent_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1B640C8(&StringLiteral_16551/*"a"*/, v7);
    byte_4A0002E = 1;
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
    sub_1B6432C(this, assetData);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__48347676(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
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
      v16 = System_String__Concat_61375396(v14->m_Items[v15], (System_String_o *)StringLiteral_16551/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__48347676(
                                                                               assetData,
                                                                               v16,
                                                                               (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
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
          UnityEngine_Material__SetTexture_68992680(
            (UnityEngine_Material_o *)v19,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v18,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1B64324(this);
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