void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleChrManager_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B15610 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleChrManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_16720/*"_level"*/, v8, v9);
    byte_4B15610 = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v11 = StringLiteral_16720/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16720/*"_level"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->levelMarker, v11, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1560F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method, v2);
    byte_4B1560F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void __fastcall BattleChrManager__AttachAnimationEvents(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        System_String_o *servantName,
        int32_t level,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x20
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *text; // x21
  int m_CancellationTokenSource; // w8
  int v32; // w8
  BattleChrManager_o *v33; // x21
  int i; // w27
  System_String_o *v35; // x22
  struct System_Threading_CancellationTokenSource_o *v36; // x8
  BattleChrManager_o *v37; // x22
  System_String_o *klass; // x23
  Il2CppObject *v39; // x25
  __int64 v40; // x1
  Il2CppObject *v41; // x24
  __int64 v42; // x1
  UnityEngine_Object_o *clip; // x23
  int v44; // w8
  int v45; // w23
  __int64 v46; // x2
  __int64 v47; // x3
  float v48; // s0
  float v49; // s8
  unsigned int v50; // w9
  int v51; // w19
  System_String_o *v52; // x25
  System_String_o *v53; // x24
  float v54; // s9
  UnityEngine_AnimationEvent_o *v55; // x23
  System_String_o *v56; // x0
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x23
  int v59; // w8
  int v60; // w23
  __int64 v61; // x2
  __int64 v62; // x3
  float v63; // s0
  float v64; // s8
  unsigned int v65; // w9
  int v66; // w19
  System_String_o *v67; // x25
  System_String_o *v68; // x24
  float v69; // s9
  UnityEngine_AnimationEvent_o *v70; // x23
  System_String_o *v71; // x0

  v7 = gameObject;
  if ( (byte_4B1560E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationEvent_TypeInfo, gameObject, data);
    sub_1BCA7E0(&BattleChrManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&char___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_396/*"#"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_9963/*"OnAnimEvent"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v24, v25);
    this = (BattleChrManager_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, v26, v27);
    byte_4B1560E = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_1BCA888(char___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_67;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  gameObject = (UnityEngine_GameObject_o *)this;
  if ( !m_CancellationTokenSource )
    goto LABEL_68;
  LOWORD(this->fields.rootTransform) = 13;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_68;
  WORD1(this->fields.rootTransform) = 10;
  if ( !text
    || (this = (BattleChrManager_o *)System_String__Split_62423376(text, (System_Char_array *)this, 0LL)) == 0LL )
  {
LABEL_67:
    sub_1BCAA3C(this, gameObject);
  }
  v32 = (int)this->fields.m_CancellationTokenSource;
  v33 = this;
  if ( v32 >= 1 )
  {
    for ( i = 0; i < v32; ++i )
    {
      if ( i >= (unsigned int)v32 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_863/*","*/;
      if ( !StringLiteral_863/*","*/ )
        goto LABEL_67;
      v35 = (System_String_o *)*((_QWORD *)&v33->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_863/*","*/, 0, 0LL);
      if ( !v35 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v35, (uint16_t)this, 0, 0LL);
      if ( !this )
        goto LABEL_67;
      v36 = this->fields.m_CancellationTokenSource;
      v37 = this;
      if ( v36 )
      {
        if ( !(_DWORD)v36 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_396/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v37->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v37->fields.mayaPrefab, 0LL);
          if ( LODWORD(v37->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v37[1].klass;
            v39 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v41 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v39, klass, 0LL);
              if ( !this )
                goto LABEL_67;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v44 = (int)v37->fields.m_CancellationTokenSource;
                if ( v44 >= 4 )
                {
                  v45 = 3;
                  while ( v45 < (unsigned int)v44 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v37->fields.rootTransform + v45);
                    if ( !this )
                      goto LABEL_67;
                    if ( this->fields.m_CachedPtr )
                    {
                      v48 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v49 = v48;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, gameObject);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v50 = (unsigned int)v37->fields.m_CancellationTokenSource;
                      if ( v45 + 1 >= v50 )
                        goto LABEL_68;
                      v51 = v45 + 2;
                      if ( v45 + 2 >= v50 )
                        goto LABEL_68;
                      v52 = (System_String_o *)*((_QWORD *)&v37->fields.mayaPrefab + v45);
                      v53 = (System_String_o *)*((_QWORD *)&v37[1].klass + v45);
                      v54 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v55 = (UnityEngine_AnimationEvent_o *)sub_1BCAA2C(
                                                              UnityEngine_AnimationEvent_TypeInfo,
                                                              gameObject,
                                                              v46,
                                                              v47);
                      UnityEngine_AnimationEvent___ctor(v55, 0LL);
                      if ( !v55 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v55, v49 / v54, 0LL);
                      v56 = System_String__Concat_62412480(v52, (System_String_o *)StringLiteral_1541/*":"*/, v53, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v55, v56, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v55, (System_String_o *)StringLiteral_9963/*"OnAnimEvent"*/, 0LL);
                      v44 = (int)v37->fields.m_CancellationTokenSource;
                      v45 = v51 + 1;
                      if ( v51 + 1 < v44 )
                        continue;
                    }
                    goto LABEL_65;
                  }
                  goto LABEL_68;
                }
              }
            }
            else
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gameObject);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v41 )
                  goto LABEL_67;
                v58 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v41, klass, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v59 = (int)v37->fields.m_CancellationTokenSource;
                  if ( v59 >= 4 )
                  {
                    v60 = 3;
                    while ( v60 < (unsigned int)v59 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v37->fields.rootTransform + v60);
                      if ( !this )
                        goto LABEL_67;
                      if ( this->fields.m_CachedPtr )
                      {
                        v63 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v64 = v63;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, gameObject);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v65 = (unsigned int)v37->fields.m_CancellationTokenSource;
                        if ( v60 + 1 >= v65 )
                          break;
                        v66 = v60 + 2;
                        if ( v60 + 2 >= v65 )
                          break;
                        v67 = (System_String_o *)*((_QWORD *)&v37->fields.mayaPrefab + v60);
                        v68 = (System_String_o *)*((_QWORD *)&v37[1].klass + v60);
                        v69 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v70 = (UnityEngine_AnimationEvent_o *)sub_1BCAA2C(
                                                                UnityEngine_AnimationEvent_TypeInfo,
                                                                gameObject,
                                                                v61,
                                                                v62);
                        UnityEngine_AnimationEvent___ctor(v70, 0LL);
                        if ( !v70 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v70, v64 / v69, 0LL);
                        v71 = System_String__Concat_62412480(v67, (System_String_o *)StringLiteral_1541/*":"*/, v68, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v70, v71, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v70, (System_String_o *)StringLiteral_9963/*"OnAnimEvent"*/, 0LL);
                        v59 = (int)v37->fields.m_CancellationTokenSource;
                        v60 = v66 + 1;
                        if ( v66 + 1 < v59 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1BCAA44(this, gameObject);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v32 = (int)v33->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1

  if ( (byte_4B1560B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v4, v5);
    byte_4B1560B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Object_array *ComponentsInChildren_object__49689332; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  BattleChrManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v33; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v42; // x19
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x19
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  UnityEngine_Object_o *v56; // x0
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x21
  __int64 v59; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v61; // x0
  int32_t v62; // w22
  System_String_o *v63; // x0
  __int64 v64; // x1
  System_String_o *v65; // x0
  __int64 v66; // x1
  System_String_array *v67; // x0
  __int64 v68; // x1
  System_String_array *v69; // x22
  __int64 v70; // x8
  bool v71; // w28
  unsigned __int64 v72; // x29
  Il2CppObject *Component_object; // x0
  __int64 v74; // x1
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0

  if ( (byte_4B1560D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleChrManager_TypeInfo, gameObject, *(_QWORD *)&level);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_Transform___, v8, v9);
    sub_1BCA7E0(&System_Func_Transform__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v22, v23);
    this = (BattleChrManager_o *)sub_1BCA7E0(&BattleChrManager___c_TypeInfo, v24, v25);
    byte_4B1560D = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                            gameObject,
                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v30 = BattleChrManager___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__49689332;
  if ( !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo, v27);
    v30 = BattleChrManager___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__bool__o *)v30->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v27);
      v30 = BattleChrManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__6_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Transform__bool__TypeInfo, v27, v28, v29);
    System_Func_object__bool____ctor(_9__6_0, v33, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0LL);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v35, v36, v37, v38, v39, v40);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v31,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1BCAA3C(this, gameObject);
  klass = this->klass;
  v42 = this;
  v43 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_15;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v45 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1BCAA3C(0LL, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_22;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_22:
      v51 = sub_1C1C7C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v54 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_29;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_29:
      v55 = sub_1C1C7C0(v47, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v56 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_1BCAA3C(0LL, v57);
    name = UnityEngine_Object__get_name(v56, 0LL);
    v61 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, v59);
    if ( !name )
      sub_1BCAA3C(v61, v59);
    v62 = System_String__IndexOf_62432796(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v63 = UnityEngine_Object__get_name(v58, 0LL);
    if ( !v63 )
      sub_1BCAA3C(0LL, v64);
    v65 = System_String__Substring(v63, v62 + 6, 0LL);
    if ( !v65 )
      sub_1BCAA3C(0LL, v66);
    v67 = System_String__Split(v65, 0x5Fu, 0, 0LL);
    v69 = v67;
    if ( !v67 )
      sub_1BCAA3C(0LL, v68);
    v70 = *(_QWORD *)&v67->max_length;
    v71 = (int)v70 > 0;
    if ( (int)v70 >= 1 )
    {
      v72 = 0LL;
      do
      {
        if ( v72 >= (unsigned int)v70 )
          sub_1BCAA44(v67, v68);
        v67 = (System_String_array *)System_Int32__Parse(v69->m_Items[v72], 0LL);
        if ( (_DWORD)v67 == level )
          break;
        LODWORD(v70) = v69->max_length;
        v71 = (__int64)++v72 < (int)v70;
      }
      while ( (__int64)v72 < (int)v70 );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v58,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v74);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v71, 0LL);
  }
  v75 = *(_QWORD *)v47;
  v76 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_49;
    }
    v78 = v75 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_49:
    v78 = sub_1C1C7C0(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v78)(v47, *(_QWORD *)(v78 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  Il2CppObject *mayaPrefab; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v21; // x8
  float v22; // s13
  float v23; // s14
  float w; // s11
  float v25; // s12
  UnityEngine_GameObject_o *transform; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x19
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  BattleChrManager_o *v35; // x0
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  intptr_t v38; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_70114172; // x0
  System_String_o *v41; // x3
  const MethodInfo *v42; // x5
  __int64 methodPtr_low; // x10
  UnityEngine_TextAsset_o *v44; // x2
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v50; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B1560C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_TextAsset_var, v6, v7);
    sub_1BCA7E0(&UnityEngine_TextAsset_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Type_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_9071/*"Maya/fbxevent_arthur"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25540/*"アルトリア"*/, v14, v15);
    byte_4B1560C = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, method, v2);
    byte_4B109C7 = 1;
  }
  v21 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v23 = v21->identityQuaternion.fields.x;
  v22 = v21->identityQuaternion.fields.y;
  v25 = v21->identityQuaternion.fields.z;
  w = v21->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v46.fields.x = x;
  v46.fields.y = y;
  v46.fields.z = z;
  v50.fields.x = v23;
  v50.fields.y = v22;
  v50.fields.z = v25;
  v50.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49904120(
                                            mayaPrefab,
                                            v46,
                                            v50,
                                            (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
  if ( !transform )
    goto LABEL_23;
  v28 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !transform )
    goto LABEL_23;
  v47.fields.x = -30.677;
  v47.fields.y = 0.35516;
  v47.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v47, 0LL);
  v29 = UnityEngine_GameObject__get_transform(v28, 0LL);
  v48.fields.y = 4.7124;
  v30 = v29;
  v48.fields.x = 0.0;
  v48.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v31 = UnityEngine_Quaternion__Internal_FromEulerRad(v48, 0LL);
  if ( !v30
    || (UnityEngine_Transform__set_localRotation(v30, *(UnityEngine_Quaternion_o *)&v31, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(transform, v27);
  }
  v49.fields.x = 20.0;
  v49.fields.y = 20.0;
  v49.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v49, 0LL);
  BattleChrManager__SetEvolutionLevel(v35, v28, 2, v36);
  v38 = (int)UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v37);
  v45.fields.value = v38;
  TypeFromHandle = System_Type__GetTypeFromHandle(v45, 0LL);
  _70114172 = UnityEngine_Resources__Load_70114172((System_String_o *)StringLiteral_9071/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _70114172
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(_70114172->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_TextAsset_c *)_70114172->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo )
      v44 = (UnityEngine_TextAsset_o *)_70114172;
    else
      v44 = 0LL;
  }
  else
  {
    v44 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_70114172, v28, v44, v41, 1, v42);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15611 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleChrManager___c_TypeInfo, v1, v2);
    byte_4B15611 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleChrManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleChrManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleChrManager___c___ctor(BattleChrManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleChrManager___c___SetEvolutionLevel_b__6_0(
        BattleChrManager___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleChrManager___c_o *v4; // x19

  if ( (byte_4B15612 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1BCA7E0(&BattleChrManager_TypeInfo, p, method);
    byte_4B15612 = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, p);
  if ( !v4 )
LABEL_9:
    sub_1BCAA3C(this, p);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}