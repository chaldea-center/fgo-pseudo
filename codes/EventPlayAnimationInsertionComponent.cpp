void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4214D3D & 1) == 0 )
  {
    sub_B0D8A4(&EventPlayAnimationInsertionComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v2);
    byte_4214D3D = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
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

  if ( (byte_4214D3C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4214D3C = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.nowPlayAnimName, v9, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Animator_o *mAnimator; // x0

  if ( (byte_4214D37 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animator___, method);
    byte_4214D37 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animator_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animator___);
  p_mAnimator = &this->fields.mAnimator;
  this->fields.mAnimator = Component_WebViewObject;
  sub_B0D840(
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
    sub_B0D97C(mAnimator);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  UnityEngine_Object_o *gameObject; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *name; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x8
  System_String_o *v32; // x22
  int v33; // w9
  __int64 v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x24
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UnityEngine_Object_o *v44; // x25
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_o *v52; // x25
  __int64 v53; // x8
  __int64 v54; // x9
  System_String_o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  AssetLoader_LoadEndDataHandler_o *v58; // x25
  __int64 v59; // x0
  int v61; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4214D3A & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, spriteNames);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v7);
    sub_B0D8A4(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__, v8);
    sub_B0D8A4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_932/*"/image/"*/, v10);
    sub_B0D8A4(&StringLiteral_7520/*"Image/"*/, v11);
    sub_B0D8A4(&StringLiteral_13706/*"Texture_"*/, v12);
    byte_4214D3A = 1;
  }
  v61 = 0;
  v13 = sub_B0D974(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, spriteNames, method);
  EventPlayAnimationInsertionComponent___c__DisplayClass13_0___ctor(
    (EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_28;
  *(_QWORD *)(v13 + 16) = spriteNames;
  v21 = (__int64 *)(v13 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)spriteNames,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v13 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_43849904(
                                               name,
                                               (System_String_o *)StringLiteral_932/*"/image/"*/,
                                               0LL),
        v61 = 1,
        (v31 = *v21) == 0) )
  {
LABEL_28:
    sub_B0D97C(gameObject);
  }
  v32 = (System_String_o *)gameObject;
  v33 = 1;
  while ( v33 < *(_DWORD *)(v31 + 24) )
  {
    v34 = sub_B0D974(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v29, v30);
    EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ctor(
      (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v34,
      0LL);
    if ( !v34 )
      goto LABEL_28;
    *(_QWORD *)(v34 + 32) = v13;
    v41 = v34 + 32;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v13, v35, v36, v37, v38, v39, v40);
    *(_DWORD *)(v34 + 16) = 2 * v61;
    v42 = System_Int32__ToString((int32_t)&v61, 0LL);
    v43 = System_String__Concat_43852188(v32, (System_String_o *)StringLiteral_13706/*"Texture_"*/, v42, 0LL);
    v44 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v43, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v44 )
        goto LABEL_28;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v44,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v34 + 24) = Component_srcLineSprite;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 24), Component_srcLineSprite, v46, v47, v48, v49, v50, v51);
      v52 = *(UnityEngine_Object_o **)(v34 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v52, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v41 )
          goto LABEL_28;
        v53 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
        if ( !v53 )
          goto LABEL_28;
        v54 = *(int *)(v34 + 16);
        if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 24) )
        {
          v59 = sub_B0D9A8(gameObject);
          sub_B0D948(v59, 0LL);
        }
        v55 = System_String__Concat_43849904(
                (System_String_o *)StringLiteral_7520/*"Image/"*/,
                *(System_String_o **)(v53 + 8 * v54 + 32),
                0LL);
        v58 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v56, v57);
        AssetLoader_LoadEndDataHandler___ctor(
          v58,
          (Il2CppObject *)v34,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v55, v58, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v33 = ++v61;
    v31 = *v21;
    if ( !*v21 )
      goto LABEL_28;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_o *IsNullOrEmpty; // x0
  signed int max_length; // w8
  unsigned int v12; // w22
  System_String_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_4214D3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_7520/*"Image/"*/, v8);
    byte_4214D3B = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_16;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v12 = 1;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v15, 0LL);
      }
      IsNullOrEmpty = args->m_Items[v12];
      if ( !IsNullOrEmpty )
        break;
      v13 = System_String__Trim_43837236(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v13, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_43849904((System_String_o *)StringLiteral_7520/*"Image/"*/, v13, 0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = args->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(IsNullOrEmpty);
  }
LABEL_12:
  if ( !v9 )
    goto LABEL_16;
  if ( v9->fields._size )
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  float v23; // s0

  if ( (byte_4214D39 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, animName);
    sub_B0D8A4(&StringLiteral_16194/*"_in"*/, v9);
    sub_B0D8A4(&StringLiteral_2737/*"Base Layer."*/, v10);
    sub_B0D8A4(&StringLiteral_16214/*"_out"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214D39 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(v14, 1, 0LL);
    if ( playInAnim )
    {
      v15 = (System_String_o *)StringLiteral_16194/*"_in"*/;
    }
    else
    {
      v15 = (System_String_o *)StringLiteral_16214/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v16 = System_String__Concat_43852188((System_String_o *)StringLiteral_2737/*"Base Layer."*/, animName, v15, 0LL);
    this->fields.nowPlayAnimName = v16;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.nowPlayAnimName,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
      goto LABEL_17;
    v23 = 0.0;
    if ( isSkip )
      v23 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v14, this->fields.nowPlayAnimName, 0, v23, 0LL);
    v14 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v14 )
LABEL_17:
      sub_B0D97C(v14);
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
  WebViewManager_o *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_AnimatorStateInfo_o v7; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4214D38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method);
    sub_B0D8A4(&StringLiteral_16214/*"_out"*/, v3);
    byte_4214D38 = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16214/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_B0D97C(mAnimator);
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
  UnityEngine_Texture_o *v18; // x20
  UnityEngine_Material_o *v19; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v20; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8
  __int64 v22; // x0

  v4 = this;
  if ( (byte_4211BA8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, assetData);
    sub_B0D8A4(&EventPlayAnimationInsertionComponent_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_B0D8A4(&StringLiteral_16268/*"a"*/, v7);
    byte_4211BA8 = 1;
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
    v22 = sub_B0D9A8(this);
    sub_B0D948(v22, 0LL);
  }
  if ( !assetData )
    goto LABEL_25;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
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
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                  this,
                                  this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(
                                                                           v12,
                                                                           0LL,
                                                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v4->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_25;
    v14 = v13->fields.spriteNames;
    if ( !v14 )
      goto LABEL_25;
    v15 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v15 < v14->max_length )
    {
      v16 = System_String__Concat_43849904(v14->m_Items[v15], (System_String_o *)StringLiteral_16268/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               assetData,
                                                                               v16,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      v17 = v4->fields.sprite;
      if ( v17 )
      {
        v18 = (UnityEngine_Texture_o *)this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v17->klass->vtable._24_get_material.method)(
                                                                                 v4->fields.sprite,
                                                                                 v17->klass->vtable._25_set_material.methodPtr);
        v19 = (UnityEngine_Material_o *)this;
        if ( (BYTE3(EventPlayAnimationInsertionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        }
        if ( v19 )
        {
          UnityEngine_Material__SetTexture_40811904(
            v19,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            v18,
            0LL);
          goto LABEL_22;
        }
      }
LABEL_25:
      sub_B0D97C(this);
    }
    goto LABEL_26;
  }
LABEL_22:
  v20 = v4->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_25;
  _4__this = v20->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.isLoadedSprite = 1;
}