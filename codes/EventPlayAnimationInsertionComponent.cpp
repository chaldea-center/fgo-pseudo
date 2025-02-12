void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4BCB912 & 1) == 0 )
  {
    sub_1C1ABD4(&EventPlayAnimationInsertionComponent_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_16534/*"_MaskTex"*/, v2);
    byte_4BCB912 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16534/*"_MaskTex"*/,
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

  if ( (byte_4BCB911 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BCB911 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BCB90C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Animator___, method);
    byte_4BCB90C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_mAnimator, (int64_t)Component_object, v5, v6, v7, v8, v9, v10);
  v12 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v12, 0LL), (v12 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v12, 0.0, 0LL), (v12 = *p_mAnimator) == 0LL) )
  {
    sub_1C1AE30(v12, v11);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0LL);
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
  int64_t v14; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *name; // x0
  __int64 v31; // x8
  System_String_o *v32; // x22
  int v33; // w9
  __int64 v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x24
  __int64 v42; // x9
  int v43; // w8
  __int64 v44; // x9
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  UnityEngine_Object_o *v47; // x25
  Il2CppObject *Component_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_Object_o *v55; // x25
  __int64 v56; // x8
  __int64 v57; // x9
  System_String_o *v58; // x24
  AssetLoader_LoadEndDataHandler_o *v59; // x25
  int v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BCB90F & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, spriteNames);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v8);
    sub_1C1ABD4(&Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__, v9);
    sub_1C1ABD4(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_1183/*"/image/"*/, v11);
    sub_1C1ABD4(&StringLiteral_7645/*"Image/"*/, v12);
    sub_1C1ABD4(&StringLiteral_13905/*"Texture_"*/, v13);
    byte_4BCB90F = 1;
  }
  v14 = sub_1C1AE20(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_29;
  *(_QWORD *)(v14 + 16) = spriteNames;
  v23 = (__int64 *)(v14 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)spriteNames, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_63040368(
                                               name,
                                               (System_String_o *)StringLiteral_1183/*"/image/"*/,
                                               0LL),
        v60 = 1,
        (v31 = *v23) == 0) )
  {
LABEL_29:
    sub_1C1AE30(gameObject, v16);
  }
  v32 = (System_String_o *)gameObject;
  v33 = 1;
  while ( v33 < *(_DWORD *)(v31 + 24) )
  {
    v34 = sub_1C1AE20(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    if ( !v34 )
      goto LABEL_29;
    *(_QWORD *)(v34 + 32) = v14;
    v41 = v34 + 32;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 32), v14, v35, v36, v37, v38, v39, v40);
    v42 = *(_QWORD *)(v34 + 32);
    v43 = 2 * v60;
    *(_DWORD *)(v34 + 16) = 2 * v60;
    if ( !v42 )
      goto LABEL_29;
    v44 = *(_QWORD *)(v42 + 16);
    if ( !v44 )
      goto LABEL_29;
    if ( v43 >= *(_DWORD *)(v44 + 24) )
      return;
    v45 = System_Int32__ToString((int32_t)&v60, 0LL);
    v46 = System_String__Concat_63051628(v32, (System_String_o *)StringLiteral_13905/*"Texture_"*/, v45, 0LL);
    v47 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v46, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v47, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v47 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v47,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v34 + 24) = Component_object;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)Component_object, v49, v50, v51, v52, v53, v54);
      v55 = *(UnityEngine_Object_o **)(v34 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v55, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v41 )
          goto LABEL_29;
        v56 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
        if ( !v56 )
          goto LABEL_29;
        v57 = *(int *)(v34 + 16);
        if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 24) )
          sub_1C1AE38(gameObject, v16);
        v58 = System_String__Concat_63040368(
                (System_String_o *)StringLiteral_7645/*"Image/"*/,
                *(System_String_o **)(v56 + 8 * v57 + 32),
                0LL);
        v59 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v59,
          (Il2CppObject *)v34,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v58, v59, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v33 = ++v60;
    v31 = *v23;
    if ( !*v23 )
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
  signed int max_length; // w8
  unsigned int v12; // w22
  System_String_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4BCB910 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_7645/*"Image/"*/, v7);
    byte_4BCB910 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v12 = 1;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C1AE38(IsNullOrEmpty, v10);
      IsNullOrEmpty = args->m_Items[v12];
      if ( !IsNullOrEmpty )
        break;
      v13 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v13, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_63040368((System_String_o *)StringLiteral_7645/*"Image/"*/, v13, 0LL);
        if ( !v8 )
          break;
        items = v8->fields._items;
        v21 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        v23 = (int64_t)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = args->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C1AE30(IsNullOrEmpty, v10);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_19;
  if ( v8->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  float v24; // s0

  if ( (byte_4BCB90E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, animName);
    sub_1C1ABD4(&StringLiteral_16812/*"_in"*/, v9);
    sub_1C1ABD4(&StringLiteral_3212/*"Base Layer."*/, v10);
    sub_1C1ABD4(&StringLiteral_16833/*"_out"*/, v11);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v12);
    byte_4BCB90E = 1;
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
      v16 = (System_String_o *)StringLiteral_16812/*"_in"*/;
    }
    else
    {
      v16 = (System_String_o *)StringLiteral_16833/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v17 = System_String__Concat_63051628((System_String_o *)StringLiteral_3212/*"Base Layer."*/, animName, v16, 0LL);
    this->fields.nowPlayAnimName = v17;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    v15 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v15 )
      goto LABEL_16;
    v24 = 0.0;
    if ( isSkip )
      v24 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v15, this->fields.nowPlayAnimName, 0, v24, 0LL);
    v15 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v15 )
LABEL_16:
      sub_1C1AE30(v15, v14);
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

  if ( (byte_4BCB90D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_16833/*"_out"*/, v3);
    byte_4BCB90D = 1;
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
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16833/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1C1AE30(mAnimator, method);
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
  if ( (byte_4BCB913 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_Texture2D____77543664, assetData);
    sub_1C1ABD4(&EventPlayAnimationInsertionComponent_TypeInfo, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1C1ABD4(&StringLiteral_16889/*"a"*/, v7);
    byte_4BCB913 = 1;
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
    sub_1C1AE38(this, assetData);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49812820(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2F81554 *)Method_AssetData_GetObject_Texture2D____77543664);
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
      v16 = System_String__Concat_63040368(v14->m_Items[v15], (System_String_o *)StringLiteral_16889/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49812820(
                                                                               assetData,
                                                                               v16,
                                                                               (const MethodInfo_2F81554 *)Method_AssetData_GetObject_Texture2D____77543664);
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
          UnityEngine_Material__SetTexture_70659268(
            (UnityEngine_Material_o *)v19,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v18,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1C1AE30(this, assetData);
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