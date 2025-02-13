void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BE03D4 & 1) == 0 )
  {
    sub_1C21E38(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BE03D4 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
                                                                             0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4BE03D3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE03D3 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  UnityEngine_Animator_o *v12; // x0

  if ( (byte_4BE03CE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_4BE03CE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_mAnimator, (int64_t)Component_object, v5, v6, v7, v8, v9, v10);
  v12 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v12, 0LL), (v12 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v12, 0.0, 0LL), (v12 = *p_mAnimator) == 0LL) )
  {
    sub_1C22094(v12, v11);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  int64_t v5; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *name; // x0
  __int64 v22; // x8
  System_String_o *v23; // x22
  int v24; // w9
  __int64 v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x24
  __int64 v33; // x9
  int v34; // w8
  __int64 v35; // x9
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_Object_o *v38; // x25
  Il2CppObject *Component_object; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_Object_o *v46; // x25
  __int64 v47; // x8
  __int64 v48; // x9
  System_String_o *v49; // x24
  AssetLoader_LoadEndDataHandler_o *v50; // x25
  int v51; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BE03D1 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C21E38(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_1C21E38(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C21E38(&StringLiteral_1183/*"/image/"*/);
    sub_1C21E38(&StringLiteral_7655/*"Image/"*/);
    sub_1C21E38(&StringLiteral_13916/*"Texture_"*/);
    byte_4BE03D1 = 1;
  }
  v5 = sub_1C22084(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = spriteNames;
  v14 = (__int64 *)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)spriteNames, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_63115476(
                                               name,
                                               (System_String_o *)StringLiteral_1183/*"/image/"*/,
                                               0LL),
        v51 = 1,
        (v22 = *v14) == 0) )
  {
LABEL_29:
    sub_1C22094(gameObject, v7);
  }
  v23 = (System_String_o *)gameObject;
  v24 = 1;
  while ( v24 < *(_DWORD *)(v22 + 24) )
  {
    v25 = sub_1C22084(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    if ( !v25 )
      goto LABEL_29;
    *(_QWORD *)(v25 + 32) = v5;
    v32 = v25 + 32;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 32), v5, v26, v27, v28, v29, v30, v31);
    v33 = *(_QWORD *)(v25 + 32);
    v34 = 2 * v51;
    *(_DWORD *)(v25 + 16) = 2 * v51;
    if ( !v33 )
      goto LABEL_29;
    v35 = *(_QWORD *)(v33 + 16);
    if ( !v35 )
      goto LABEL_29;
    if ( v34 >= *(_DWORD *)(v35 + 24) )
      return;
    v36 = System_Int32__ToString((int32_t)&v51, 0LL);
    v37 = System_String__Concat_63126736(v23, (System_String_o *)StringLiteral_13916/*"Texture_"*/, v36, 0LL);
    v38 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v37, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v38 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v38,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v25 + 24) = Component_object;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)Component_object, v40, v41, v42, v43, v44, v45);
      v46 = *(UnityEngine_Object_o **)(v25 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v46, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v32 )
          goto LABEL_29;
        v47 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
        if ( !v47 )
          goto LABEL_29;
        v48 = *(int *)(v25 + 16);
        if ( (unsigned int)v48 >= *(_DWORD *)(v47 + 24) )
          sub_1C2209C(gameObject, v7);
        v49 = System_String__Concat_63115476(
                (System_String_o *)StringLiteral_7655/*"Image/"*/,
                *(System_String_o **)(v47 + 8 * v48 + 32),
                0LL);
        v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v50,
          (Il2CppObject *)v25,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v49, v50, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v24 = ++v51;
    v22 = *v14;
    if ( !*v14 )
      goto LABEL_29;
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4BE03D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&StringLiteral_7655/*"Image/"*/);
    byte_4BE03D2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v7 = 1;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(IsNullOrEmpty, v5);
      IsNullOrEmpty = args->m_Items[v7];
      if ( !IsNullOrEmpty )
        break;
      v8 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v8, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_63115476((System_String_o *)StringLiteral_7655/*"Image/"*/, v8, 0LL);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v18 = (int64_t)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), v18, v9, v10, v11, v12, v13, v14);
        }
      }
      max_length = args->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C22094(IsNullOrEmpty, v5);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  float v20; // s0

  if ( (byte_4BE03D0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16824/*"_in"*/);
    sub_1C21E38(&StringLiteral_3221/*"Base Layer."*/);
    sub_1C21E38(&StringLiteral_16845/*"_out"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE03D0 = 1;
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
      v12 = (System_String_o *)StringLiteral_16824/*"_in"*/;
    }
    else
    {
      v12 = (System_String_o *)StringLiteral_16845/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v13 = System_String__Concat_63126736((System_String_o *)StringLiteral_3221/*"Base Layer."*/, animName, v12, 0LL);
    this->fields.nowPlayAnimName = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_16;
    v20 = 0.0;
    if ( isSkip )
      v20 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v11, this->fields.nowPlayAnimName, 0, v20, 0LL);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
LABEL_16:
      sub_1C22094(v11, v10);
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

  if ( (byte_4BE03CF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16845/*"_out"*/);
    byte_4BE03CF = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16845/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1C22094(mAnimator, method);
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
  if ( (byte_4BE03D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1C21E38(&StringLiteral_16901/*"a"*/);
    byte_4BE03D5 = 1;
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
    sub_1C2209C(this, assetData);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49880776(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
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
      v13 = System_String__Concat_63115476(v11->m_Items[v12], (System_String_o *)StringLiteral_16901/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49880776(
                                                                               assetData,
                                                                               v13,
                                                                               (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
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
          UnityEngine_Material__SetTexture_70734468(
            (UnityEngine_Material_o *)v16,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v15,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1C22094(this, assetData);
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