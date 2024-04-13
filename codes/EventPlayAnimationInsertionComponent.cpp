void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E90A4 & 1) == 0 )
  {
    sub_B5D5C4(&EventPlayAnimationInsertionComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v4, v5, v6);
    byte_42E90A4 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16207/*"_MaskTex"*/,
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

  if ( (byte_42E90A3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E90A3 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.nowPlayAnimName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Animator_o *Component_WebViewObject; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_Animator_o *mAnimator; // x0

  if ( (byte_42E909E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animator___, (_DWORD)method, v2, v3);
    byte_42E909E = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animator_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animator___);
  p_mAnimator = &this->fields.mAnimator;
  this->fields.mAnimator = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimator,
    (System_Int32_array **)Component_WebViewObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator
    || (UnityEngine_Animator__StopPlayback(mAnimator, 0LL), (mAnimator = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(mAnimator, 0.0, 0LL), (mAnimator = *p_mAnimator) == 0LL) )
  {
    sub_B5D69C(mAnimator, v13);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *name; // x0
  __int64 v49; // x8
  System_String_o *v50; // x22
  int v51; // w9
  __int64 v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x24
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  UnityEngine_Object_o *v62; // x25
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *v70; // x25
  __int64 v71; // x8
  __int64 v72; // x9
  System_String_o *v73; // x24
  AssetLoader_LoadEndDataHandler_o *v74; // x25
  __int64 v75; // x0
  int v77; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E90A1 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)spriteNames, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_945/*"/image/"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_7583/*"Image/"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_13818/*"Texture_"*/, v29, v30, v31);
    byte_42E90A1 = 1;
  }
  v77 = 0;
  v32 = sub_B5D694(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  EventPlayAnimationInsertionComponent___c__DisplayClass13_0___ctor(
    (EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_28;
  *(_QWORD *)(v32 + 16) = spriteNames;
  v41 = (__int64 *)(v32 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v32 + 16),
    (System_Int32_array **)spriteNames,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *(_QWORD *)(v32 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v32 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_44577788(
                                               name,
                                               (System_String_o *)StringLiteral_945/*"/image/"*/,
                                               0LL),
        v77 = 1,
        (v49 = *v41) == 0) )
  {
LABEL_28:
    sub_B5D69C(gameObject, v34);
  }
  v50 = (System_String_o *)gameObject;
  v51 = 1;
  while ( v51 < *(_DWORD *)(v49 + 24) )
  {
    v52 = sub_B5D694(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    EventPlayAnimationInsertionComponent___c__DisplayClass13_1___ctor(
      (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v52,
      0LL);
    if ( !v52 )
      goto LABEL_28;
    *(_QWORD *)(v52 + 32) = v32;
    v59 = v52 + 32;
    sub_B5D560((BattleServantConfConponent_o *)(v52 + 32), (System_Int32_array **)v32, v53, v54, v55, v56, v57, v58);
    *(_DWORD *)(v52 + 16) = 2 * v77;
    v60 = System_Int32__ToString((int32_t)&v77, 0LL);
    v61 = System_String__Concat_44580072(v50, (System_String_o *)StringLiteral_13818/*"Texture_"*/, v60, 0LL);
    v62 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v61, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v62, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v62 )
        goto LABEL_28;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v62,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v52 + 24) = Component_srcLineSprite;
      sub_B5D560((BattleServantConfConponent_o *)(v52 + 24), Component_srcLineSprite, v64, v65, v66, v67, v68, v69);
      v70 = *(UnityEngine_Object_o **)(v52 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v70, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v59 )
          goto LABEL_28;
        v71 = *(_QWORD *)(*(_QWORD *)v59 + 16LL);
        if ( !v71 )
          goto LABEL_28;
        v72 = *(int *)(v52 + 16);
        if ( (unsigned int)v72 >= *(_DWORD *)(v71 + 24) )
        {
          v75 = sub_B5D6C8(gameObject);
          sub_B5D668(v75, 0LL);
        }
        v73 = System_String__Concat_44577788(
                (System_String_o *)StringLiteral_7583/*"Image/"*/,
                *(System_String_o **)(v71 + 8 * v72 + 32),
                0LL);
        v74 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v74,
          (Il2CppObject *)v52,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v73, v74, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v51 = ++v77;
    v49 = *v41;
    if ( !*v41 )
      goto LABEL_28;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v22; // x1
  signed int max_length; // w8
  unsigned int v24; // w22
  System_String_o *v25; // x21
  __int64 v27; // x0

  if ( (byte_42E90A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_7583/*"Image/"*/, v17, v18, v19);
    byte_42E90A2 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_16;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v24 = 1;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        v27 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v27, 0LL);
      }
      IsNullOrEmpty = args->m_Items[v24];
      if ( !IsNullOrEmpty )
        break;
      v25 = System_String__Trim_44565120(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v25, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_44577788((System_String_o *)StringLiteral_7583/*"Image/"*/, v25, 0LL);
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = args->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(IsNullOrEmpty, v22);
  }
LABEL_12:
  if ( !v20 )
    goto LABEL_16;
  if ( v20->fields._size )
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPlayAnimationInsertionComponent__PlayAnimation(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_o *animName,
        bool playInAnim,
        bool isSkip,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *mAnimator; // x23
  __int64 v22; // x1
  UnityEngine_Behaviour_o *v23; // x0
  System_String_o *v24; // x2
  struct System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  float v32; // s0

  if ( (byte_42E90A0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)animName, playInAnim, isSkip);
    sub_B5D5C4(&StringLiteral_16339/*"_in"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2780/*"Base Layer."*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16359/*"_out"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E90A0 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v23 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v23 )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(v23, 1, 0LL);
    if ( playInAnim )
    {
      v24 = (System_String_o *)StringLiteral_16339/*"_in"*/;
    }
    else
    {
      v24 = (System_String_o *)StringLiteral_16359/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v25 = System_String__Concat_44580072((System_String_o *)StringLiteral_2780/*"Base Layer."*/, animName, v24, 0LL);
    this->fields.nowPlayAnimName = v25;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.nowPlayAnimName,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v23 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v23 )
      goto LABEL_17;
    v32 = 0.0;
    if ( isSkip )
      v32 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v23, this->fields.nowPlayAnimName, 0, v32, 0LL);
    v23 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v23 )
LABEL_17:
      sub_B5D69C(v23, v22);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v23, 0.0, 0LL);
    this->fields.isActive = 1;
  }
}


void __fastcall EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Animator_o *mAnimator; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v10; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_AnimatorStateInfo_o v11; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42E909F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16359/*"_out"*/, v5, v6, v7);
    byte_42E909F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    goto LABEL_14;
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v10, mAnimator, 0, 0LL);
  v11 = v10;
  if ( UnityEngine_AnimatorStateInfo__get_normalizedTime(&v11, 0LL) > 1.0 && this->fields.isLoadedSprite )
  {
    mAnimator = this->fields.mAnimator;
    if ( !mAnimator )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
    mAnimator = (UnityEngine_Animator_o *)this->fields.nowPlayAnimName;
    this->fields.isActive = 0;
    if ( !mAnimator )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16359/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_B5D69C(mAnimator, method);
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
  __int64 v3; // x3
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct System_String_array *spriteNames; // x8
  __int64 spriteNamesNo; // x9
  struct UITexture_o *sprite; // x8
  UnityEngine_Object_o *v19; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v20; // x8
  struct System_String_array *v21; // x8
  __int64 v22; // x9
  System_String_o *v23; // x0
  struct UITexture_o *v24; // x8
  UnityEngine_Texture_o *v25; // x20
  UnityEngine_Material_o *v26; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v27; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8
  __int64 v29; // x0

  v5 = this;
  if ( (byte_42E657D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&EventPlayAnimationInsertionComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_B5D5C4(
                                                                             &StringLiteral_16414/*"a"*/,
                                                                             v12,
                                                                             v13,
                                                                             v14);
    byte_42E657D = 1;
  }
  CS___8__locals1 = v5->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  spriteNames = CS___8__locals1->fields.spriteNames;
  if ( !spriteNames )
    goto LABEL_25;
  spriteNamesNo = v5->fields.spriteNamesNo;
  if ( (unsigned int)spriteNamesNo >= spriteNames->max_length )
  {
LABEL_26:
    v29 = sub_B5D6C8(this);
    sub_B5D668(v29, 0LL);
  }
  if ( !assetData )
    goto LABEL_25;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  sprite = v5->fields.sprite;
  if ( !sprite )
    goto LABEL_25;
  ((void (__fastcall *)(struct UITexture_o *, EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))sprite->klass->vtable._27_set_mainTexture.method)(
    v5->fields.sprite,
    this,
    sprite->klass->vtable._28_get_shader.methodPtr);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)v5->fields.sprite;
  if ( !this )
    goto LABEL_25;
  v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                  this,
                                  this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(
                                                                           v19,
                                                                           0LL,
                                                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = v5->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_25;
    v21 = v20->fields.spriteNames;
    if ( !v21 )
      goto LABEL_25;
    v22 = v5->fields.spriteNamesNo;
    if ( (unsigned int)v22 < v21->max_length )
    {
      v23 = System_String__Concat_44577788(v21->m_Items[v22], (System_String_o *)StringLiteral_16414/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               assetData,
                                                                               v23,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
      v24 = v5->fields.sprite;
      if ( v24 )
      {
        v25 = (UnityEngine_Texture_o *)this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v24->klass->vtable._24_get_material.method)(
                                                                                 v5->fields.sprite,
                                                                                 v24->klass->vtable._25_set_material.methodPtr);
        v26 = (UnityEngine_Material_o *)this;
        if ( (BYTE3(EventPlayAnimationInsertionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo);
        }
        if ( v26 )
        {
          UnityEngine_Material__SetTexture_41622196(
            v26,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            v25,
            0LL);
          goto LABEL_22;
        }
      }
LABEL_25:
      sub_B5D69C(this, assetData);
    }
    goto LABEL_26;
  }
LABEL_22:
  v27 = v5->fields.CS___8__locals1;
  if ( !v27 )
    goto LABEL_25;
  _4__this = v27->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.isLoadedSprite = 1;
}