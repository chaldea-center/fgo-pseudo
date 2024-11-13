void __fastcall EventPlayAnimationInsertionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B19F88 & 1) == 0 )
  {
    sub_1BCA7E0(&EventPlayAnimationInsertionComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v3, v4);
    byte_4B19F88 = 1;
  }
  EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX = UnityEngine_Shader__PropertyToID(
                                                                             (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
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

  if ( (byte_4B19F87 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19F87 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.nowPlayAnimName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__Awake(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animator_o **p_mAnimator; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_Animator_o *v13; // x0

  if ( (byte_4B19F82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animator___, method, v2);
    byte_4B19F82 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animator___);
  this->fields.mAnimator = (struct UnityEngine_Animator_o *)Component_object;
  p_mAnimator = &this->fields.mAnimator;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mAnimator, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
  v13 = *p_mAnimator;
  if ( !*p_mAnimator
    || (UnityEngine_Animator__StopPlayback(v13, 0LL), (v13 = *p_mAnimator) == 0LL)
    || (UnityEngine_Animator__Update(v13, 0.0, 0LL), (v13 = *p_mAnimator) == 0LL) )
  {
    sub_1BCAA3C(v13, v12);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
}


void __fastcall EventPlayAnimationInsertionComponent__ChangeAnimationSprite(
        EventPlayAnimationInsertionComponent_o *this,
        System_String_array *spriteNames,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *name; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x8
  System_String_o *v44; // x22
  int v45; // w9
  __int64 v46; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x24
  __int64 v54; // x9
  int v55; // w8
  __int64 v56; // x9
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x25
  Il2CppObject *Component_object; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  UnityEngine_Object_o *v69; // x25
  __int64 v70; // x8
  __int64 v71; // x9
  System_String_o *v72; // x24
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  AssetLoader_LoadEndDataHandler_o *v76; // x25
  __int64 v77; // x1
  int v78; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B19F85 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, spriteNames, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
      v14,
      v15);
    sub_1BCA7E0(&EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_1180/*"/image/"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_7603/*"Image/"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_13822/*"Texture_"*/, v22, v23);
    byte_4B19F85 = 1;
  }
  v24 = sub_1BCAA2C(EventPlayAnimationInsertionComponent___c__DisplayClass13_0_TypeInfo, spriteNames, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_29;
  *(_QWORD *)(v24 + 16) = spriteNames;
  v33 = (__int64 *)(v24 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)spriteNames, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)this, v34, v35, v36, v37, v38, v39);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v24 + 16), 0LL) )
    return;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (name = UnityEngine_Object__get_name(gameObject, 0LL),
        gameObject = (UnityEngine_Object_o *)System_String__Concat_62401220(
                                               name,
                                               (System_String_o *)StringLiteral_1180/*"/image/"*/,
                                               0LL),
        v78 = 1,
        (v43 = *v33) == 0) )
  {
LABEL_29:
    sub_1BCAA3C(gameObject, v26);
  }
  v44 = (System_String_o *)gameObject;
  v45 = 1;
  while ( v45 < *(_DWORD *)(v43 + 24) )
  {
    v46 = sub_1BCAA2C(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_TypeInfo, v26, v41, v42);
    System_Object___ctor((Il2CppObject *)v46, 0LL);
    if ( !v46 )
      goto LABEL_29;
    *(_QWORD *)(v46 + 32) = v24;
    v53 = v46 + 32;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), v24, v47, v48, v49, v50, v51, v52);
    v54 = *(_QWORD *)(v46 + 32);
    v55 = 2 * v78;
    *(_DWORD *)(v46 + 16) = 2 * v78;
    if ( !v54 )
      goto LABEL_29;
    v56 = *(_QWORD *)(v54 + 16);
    if ( !v56 )
      goto LABEL_29;
    if ( v55 >= *(_DWORD *)(v56 + 24) )
      return;
    v57 = System_Int32__ToString((int32_t)&v78, 0LL);
    v58 = System_String__Concat_62412480(v44, (System_String_o *)StringLiteral_13822/*"Texture_"*/, v57, 0LL);
    v60 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v58, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !v60 )
        goto LABEL_29;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v60,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      *(_QWORD *)(v46 + 24) = Component_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 24), (int64_t)Component_object, v62, v63, v64, v65, v66, v67);
      v69 = *(UnityEngine_Object_o **)(v46 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v69, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v53 )
          goto LABEL_29;
        v70 = *(_QWORD *)(*(_QWORD *)v53 + 16LL);
        if ( !v70 )
          goto LABEL_29;
        v71 = *(int *)(v46 + 16);
        if ( (unsigned int)v71 >= *(_DWORD *)(v70 + 24) )
          sub_1BCAA44(gameObject, v26);
        v72 = System_String__Concat_62401220(
                (System_String_o *)StringLiteral_7603/*"Image/"*/,
                *(System_String_o **)(v70 + 8 * v71 + 32),
                0LL);
        v76 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v73, v74, v75);
        AssetLoader_LoadEndDataHandler___ctor(
          v76,
          (Il2CppObject *)v46,
          Method_EventPlayAnimationInsertionComponent___c__DisplayClass13_1__ChangeAnimationSprite_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v77);
        gameObject = (UnityEngine_Object_o *)AssetManager__loadAssetStorage(v72, v76, 1, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          this->fields.isLoadedSprite = 1;
      }
    }
    v45 = ++v78;
    v43 = *v33;
    if ( !*v33 )
      goto LABEL_29;
  }
}


System_String_array *__fastcall EventPlayAnimationInsertionComponent__GetAssetName(
        System_String_array *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  System_String_o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  unsigned int v19; // w22
  System_String_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0

  if ( (byte_4B19F86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_7603/*"Image/"*/, v13, v14);
    byte_4B19F86 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  if ( max_length >= 2 )
  {
    v19 = 1;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BCAA44(IsNullOrEmpty, v17);
      IsNullOrEmpty = args->m_Items[v19];
      if ( !IsNullOrEmpty )
        break;
      v20 = System_String__Trim(IsNullOrEmpty, 0LL);
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v20, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = System_String__Concat_62401220((System_String_o *)StringLiteral_7603/*"Image/"*/, v20, 0LL);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v28 = Method_System_Collections_Generic_List_string__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v30 = (int64_t)IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v30, v21, v22, v23, v24, v25, v26);
        }
      }
      max_length = args->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_1BCAA3C(IsNullOrEmpty, v17);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_19;
  if ( v15->fields._size )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *mAnimator; // x23
  __int64 v18; // x1
  UnityEngine_Behaviour_o *v19; // x0
  System_String_o *v20; // x2
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  float v28; // s0

  if ( (byte_4B19F84 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animName, playInAnim);
    sub_1BCA7E0(&StringLiteral_16713/*"_in"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3198/*"Base Layer."*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16734/*"_out"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19F84 = 1;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0LL, 0LL) )
  {
    v19 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v19 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v19, 1, 0LL);
    if ( playInAnim )
    {
      v20 = (System_String_o *)StringLiteral_16713/*"_in"*/;
    }
    else
    {
      v20 = (System_String_o *)StringLiteral_16734/*"_out"*/;
      this->fields.isDestroy = 1;
    }
    v21 = System_String__Concat_62412480((System_String_o *)StringLiteral_3198/*"Base Layer."*/, animName, v20, 0LL);
    this->fields.nowPlayAnimName = v21;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowPlayAnimName, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    v19 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v19 )
      goto LABEL_16;
    v28 = 0.0;
    if ( isSkip )
      v28 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v19, this->fields.nowPlayAnimName, 0, v28, 0LL);
    v19 = (UnityEngine_Behaviour_o *)this->fields.mAnimator;
    if ( !v19 )
LABEL_16:
      sub_1BCAA3C(v19, v18);
    UnityEngine_Animator__Update((UnityEngine_Animator_o *)v19, 0.0, 0LL);
    this->fields.isActive = 1;
  }
}


void __fastcall EventPlayAnimationInsertionComponent__Update(
        EventPlayAnimationInsertionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Animator_o *mAnimator; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_AnimatorStateInfo_o v8; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_AnimatorStateInfo_o v9; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4B19F83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_16734/*"_out"*/, v4, v5);
    byte_4B19F83 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    goto LABEL_14;
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v8, mAnimator, 0, 0LL);
  v9 = v8;
  if ( UnityEngine_AnimatorStateInfo__get_normalizedTime(&v9, 0LL) > 1.0 && this->fields.isLoadedSprite )
  {
    mAnimator = this->fields.mAnimator;
    if ( !mAnimator )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mAnimator, 0, 0LL);
    mAnimator = (UnityEngine_Animator_o *)this->fields.nowPlayAnimName;
    this->fields.isActive = 0;
    if ( !mAnimator )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)mAnimator, (System_String_o *)StringLiteral_16734/*"_out"*/, 0LL)
      && this->fields.isDestroy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1BCAA3C(mAnimator, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct System_String_array *spriteNames; // x8
  __int64 spriteNamesNo; // x9
  struct UITexture_o *sprite; // x8
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v17; // x8
  struct System_String_array *v18; // x8
  __int64 v19; // x9
  System_String_o *v20; // x0
  struct UITexture_o *v21; // x8
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v22; // x20
  EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *v23; // x21
  struct EventPlayAnimationInsertionComponent___c__DisplayClass13_0_o *v24; // x8
  struct EventPlayAnimationInsertionComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B19F89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, assetData, method);
    sub_1BCA7E0(&EventPlayAnimationInsertionComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)sub_1BCA7E0(&StringLiteral_16789/*"a"*/, v9, v10);
    byte_4B19F89 = 1;
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
    sub_1BCAA44(this, assetData);
  if ( !assetData )
    goto LABEL_23;
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49237568(
                                                                           assetData,
                                                                           spriteNames->m_Items[spriteNamesNo],
                                                                           (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
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
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                  this,
                                  this->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)UnityEngine_Object__op_Inequality(
                                                                           v16,
                                                                           0LL,
                                                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v4->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_23;
    v18 = v17->fields.spriteNames;
    if ( !v18 )
      goto LABEL_23;
    v19 = v4->fields.spriteNamesNo;
    if ( (unsigned int)v19 < v18->max_length )
    {
      v20 = System_String__Concat_62401220(v18->m_Items[v19], (System_String_o *)StringLiteral_16789/*"a"*/, 0LL);
      this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)AssetData__GetObject_object__49237568(
                                                                               assetData,
                                                                               v20,
                                                                               (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
      v21 = v4->fields.sprite;
      if ( v21 )
      {
        v22 = this;
        this = (EventPlayAnimationInsertionComponent___c__DisplayClass13_1_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v21->klass->vtable._24_get_material.method)(
                                                                                 v4->fields.sprite,
                                                                                 v21->klass->vtable._25_set_material.methodPtr);
        v23 = this;
        if ( !EventPlayAnimationInsertionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventPlayAnimationInsertionComponent_TypeInfo, assetData);
        if ( v23 )
        {
          UnityEngine_Material__SetTexture_70019100(
            (UnityEngine_Material_o *)v23,
            EventPlayAnimationInsertionComponent_TypeInfo->static_fields->MASK_TEX,
            (UnityEngine_Texture_o *)v22,
            0LL);
          goto LABEL_20;
        }
      }
LABEL_23:
      sub_1BCAA3C(this, assetData);
    }
    goto LABEL_24;
  }
LABEL_20:
  v24 = v4->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_23;
  _4__this = v24->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.isLoadedSprite = 1;
}