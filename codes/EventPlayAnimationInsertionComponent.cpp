void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438B548 & 1) == 0 )
  {
    sub_B775C4(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_B775C4(&StringLiteral_16313/*"_MaskTex"*/);
    byte_438B548 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16313/*"_MaskTex"*/,
                                                                             0LL);
}


void __fastcall EventPlayAnimationInsertionComponent___ctor(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438B547 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B547 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.nowPlayAnimName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Animator_o *Component_WebViewObject; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Animator_o *mAnimator; // x0

  if ( (byte_438B542 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animator___);
    byte_438B542 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animator_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animator___);
  p_mAnimator = &this->fields.mAnimator;
  this->fields.mAnimator = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mAnimator,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator
    || (UnityEngine_Animator__StopPlayback(mAnimator, 0LL), (mAnimator = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(mAnimator, 0.0, 0LL), (mAnimator = *p_mAnimator) == 0LL) )
  {
    sub_B7769C(mAnimator, v11);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *name; // x0
  __int64 v21; // x8
  System_String_o *v22; // x22
  int v23; // w9
  __int64 v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_Object_o *v34; // x25
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x25
  __int64 v43; // x8
  __int64 v44; // x9
  System_String_o *v45; // x24
  AssetLoader_LoadEndDataHandler_o *v46; // x25
  __int64 v47; // x0
  int v49; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438B545 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
    sub_B775C4(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__);
    sub_B775C4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    sub_B775C4(&StringLiteral_952/*"/image/"*/);
    sub_B775C4(&StringLiteral_7654/*"Image/"*/);
    sub_B775C4(&StringLiteral_13912/*"Texture_"*/);
    byte_438B545 = 1;
  }
  v49 = 0;
  v4 = sub_B77694(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  EventPlayAnimationInsertionComponent___c__DisplayClass13_0___ctor(
    (EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = spriteNames;
  v13 = (__int64 *)(v4 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)spriteNames, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v4 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v4 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_44901936(
                                               name,
                                               (System_String_o *)StringLiteral_952/*"/image/"*/,
                                               0LL),
        v49 = 1,
        (v21 = *v13) == 0) )
  {
LABEL_28:
    sub_B7769C(gameObject, v6);
  }
  v22 = (System_String_o *)gameObject;
  v23 = 1;
  while ( v23 < *(_DWORD *)(v21 + 24) )
  {
    v24 = sub_B77694(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ctor(
      (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v24,
      0LL);
    if ( !v24 )
      goto LABEL_28;
    *(_QWORD *)(v24 + 32) = v4;
    v31 = v24 + 32;
    sub_B77560((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)v4, v25, v26, v27, v28, v29, v30);
    *(_DWORD *)(v24 + 16) = 2 * v49;
    v32 = System_Int32__ToString((int32_t)&v49, 0LL);
    v33 = System_String__Concat_44904220(v22, (System_String_o *)StringLiteral_13912/*"Texture_"*/, v32, 0LL);
    v34 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v34 )
        goto LABEL_28;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v34,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v24 + 24) = Component_srcLineSprite;
      sub_B77560((BattleServantConfConponent_o *)(v24 + 24), Component_srcLineSprite, v36, v37, v38, v39, v40, v41);
      v42 = *(UnityEngine_Object_o **)(v24 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v31 )
          goto LABEL_28;
        v43 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
        if ( !v43 )
          goto LABEL_28;
        v44 = *(int *)(v24 + 16);
        if ( (unsigned int)v44 >= *(_DWORD *)(v43 + 24) )
        {
          v47 = sub_B776C8(gameObject);
          sub_B77668(v47, 0LL);
        }
        v45 = System_String__Concat_44901936(
                (System_String_o *)StringLiteral_7654/*"Image/"*/,
                *(System_String_o **)(v43 + 8 * v44 + 32),
                0LL);
        v46 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v46,
          (Il2CppObject *)v24,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v45, v46, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v23 = ++v49;
    v21 = *v13;
    if ( !*v13 )
      goto LABEL_28;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  unsigned int v7; // w22
  System_String_o *v8; // x21
  __int64 v10; // x0

  if ( (byte_438B546 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&StringLiteral_7654/*"Image/"*/);
    byte_438B546 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !args )
    goto LABEL_16;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v7 = 1;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B776C8(IsNullOrEmpty);
        sub_B77668(v10, 0LL);
      }
      IsNullOrEmpty = args->m_Items[v7];
      if ( !IsNullOrEmpty )
        break;
      v8 = System_String__Trim_44889268(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v8, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_44901936((System_String_o *)StringLiteral_7654/*"Image/"*/, v8, 0LL);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = args->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(IsNullOrEmpty, v5);
  }
LABEL_12:
  if ( !v3 )
    goto LABEL_16;
  if ( v3->fields._size )
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  float v20; // s0

  if ( (byte_438B544 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16453/*"_in"*/);
    sub_B775C4(&StringLiteral_2834/*"Base Layer."*/);
    sub_B775C4(&StringLiteral_16473/*"_out"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B544 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(v11, 1, 0LL);
    if ( playInAnim )
    {
      v12 = (System_String_o *)StringLiteral_16453/*"_in"*/;
    }
    else
    {
      v12 = (System_String_o *)StringLiteral_16473/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v13 = System_String__Concat_44904220((System_String_o *)StringLiteral_2834/*"Base Layer."*/, animName, v12, 0LL);
    this->fields.nowPlayAnimName = v13;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.nowPlayAnimName,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
      goto LABEL_17;
    v20 = 0.0;
    if ( isSkip )
      v20 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v11, this->fields.nowPlayAnimName, 0, v20, 0LL);
    v11 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v11 )
LABEL_17:
      sub_B7769C(v11, v10);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v11, 0.0, 0LL);
    this->fields.isActive = 1;
  }
}


void __fastcall EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v5; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_438B543 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B775C4(&StringLiteral_16473/*"_out"*/);
    byte_438B543 = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16473/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_B7769C(mAnimator, method);
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
  UnityEngine_Texture_o *v15; // x20
  UnityEngine_Material_o *v16; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v17; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4387FE6 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&EventPlayAnimationInsertionComponent_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_B775C4(&StringLiteral_16528/*"a"*/);
    byte_4387FE6 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  spriteNames = CS___8__locals1->fields.spriteNames;
  if ( !spriteNames )
    goto LABEL_25;
  spriteNamesNo = v4->fields.spriteNamesNo;
  if ( (unsigned int)spriteNamesNo >= spriteNames->max_length )
  {
LABEL_26:
    v19 = sub_B776C8(this);
    sub_B77668(v19, 0LL);
  }
  if ( !assetData )
    goto LABEL_25;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
  sprite = v4->fields.sprite;
  if ( !sprite )
    goto LABEL_25;
  ((void (__fastcall *)(struct UITexture_o *, EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))sprite->klass->vtable._27_set_mainTexture.method)(
    v4->fields.sprite,
    this,
    sprite->klass->vtable._28_get_shader.methodPtr);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v4->fields.sprite;
  if ( !this )
    goto LABEL_25;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                 this,
                                 this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.CS___8__locals1;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10->fields.spriteNames;
    if ( !v11 )
      goto LABEL_25;
    v12 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v12 < v11->max_length )
    {
      v13 = System_String__Concat_44901936(v11->m_Items[v12], (System_String_o *)StringLiteral_16528/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               assetData,
                                                                               v13,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
      v14 = v4->fields.sprite;
      if ( v14 )
      {
        v15 = (UnityEngine_Texture_o *)this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v14->klass->vtable._24_get_material.method)(
                                                                                 v4->fields.sprite,
                                                                                 v14->klass->vtable._25_set_material.methodPtr);
        v16 = (UnityEngine_Material_o *)this;
        if ( (BYTE3(EventPlayAnimationInsertionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        }
        if ( v16 )
        {
          UnityEngine_Material__SetTexture_41465856(
            v16,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            v15,
            0LL);
          goto LABEL_22;
        }
      }
LABEL_25:
      sub_B7769C(this, assetData);
    }
    goto LABEL_26;
  }
LABEL_22:
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  _4__this = v17->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.isLoadedSprite = 1;
}