void BattleChrManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0

  if ( (byte_59379CD & 1) == 0 )
  {
    sub_21FFC50(&BattleChrManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17200/*"_level"*/);
    byte_59379CD = 1;
  }
  v7 = StringLiteral_17200/*"_level"*/;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  static_fields->levelMarker = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->levelMarker, v7, v1, v2, v3, v4, v5, v6);
}


void BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_59379CC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_59379CC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void BattleChrManager__AttachAnimationEvents(
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
  Il2CppObject *Component_object; // x22
  System_String_o *text; // x21
  int m_CancellationTokenSource; // w8
  int v13; // w8
  BattleChrManager_o *v14; // x21
  int i; // w26
  System_String_o *v16; // x22
  struct System_Threading_CancellationTokenSource_o *v17; // x8
  BattleChrManager_o *v18; // x22
  System_String_o *klass; // x23
  Il2CppObject *v20; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *clip; // x23
  int v28; // w8
  int v29; // w23
  __int64 v30; // x1
  __int64 v31; // x2
  float v32; // s0
  float v33; // s8
  unsigned int v34; // w9
  int v35; // w19
  System_String_o *v36; // x25
  float v37; // s9
  System_String_o *v38; // x24
  UnityEngine_AnimationEvent_o *v39; // x23
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Object_o *v43; // x23
  int v44; // w8
  int v45; // w23
  __int64 v46; // x1
  __int64 v47; // x2
  float v48; // s0
  float v49; // s8
  unsigned int v50; // w9
  int v51; // w19
  System_String_o *v52; // x25
  float v53; // s9
  System_String_o *v54; // x24
  UnityEngine_AnimationEvent_o *v55; // x23
  System_String_o *v56; // x0

  v7 = gameObject;
  if ( (byte_59379CB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationEvent_TypeInfo);
    sub_21FFC50(&BattleChrManager_TypeInfo);
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_395/*"#"*/);
    sub_21FFC50(&StringLiteral_10219/*"OnAnimEvent"*/);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    this = (BattleChrManager_o *)sub_21FFC50(&StringLiteral_869/*","*/);
    byte_59379CB = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0);
  this = (BattleChrManager_o *)sub_21FFD10(char___TypeInfo, 2);
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
  if ( !text || (this = (BattleChrManager_o *)System_String__Split_75492680(text, (System_Char_array *)this, 0)) == 0 )
LABEL_67:
    sub_21FFECC(this, gameObject);
  v13 = (int)this->fields.m_CancellationTokenSource;
  v14 = this;
  if ( v13 >= 1 )
  {
    for ( i = 0; i < v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_869/*","*/;
      if ( !StringLiteral_869/*","*/ )
        goto LABEL_67;
      v16 = (System_String_o *)*((_QWORD *)&v14->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_869/*","*/, 0, 0);
      if ( !v16 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v16, (uint16_t)this, 0, 0);
      if ( !this )
        goto LABEL_67;
      v17 = this->fields.m_CancellationTokenSource;
      v18 = this;
      if ( v17 )
      {
        if ( !(_DWORD)v17 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_395/*"#"*/,
                                       0);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v18->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v18->fields.mayaPrefab, 0);
          if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v18[1].klass;
            v20 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v23 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v20, klass, 0);
              if ( !this )
                goto LABEL_67;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v28 = (int)v18->fields.m_CancellationTokenSource;
                if ( v28 >= 4 )
                {
                  v29 = 3;
                  while ( v29 < (unsigned int)v28 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v18->fields.rootTransform + v29);
                    if ( !this )
                      goto LABEL_67;
                    if ( LODWORD(this->fields.m_CachedPtr) )
                    {
                      v32 = System_Single__Parse((System_String_o *)this, 0);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v33 = v32;
                      if ( !*(&BattleChrManager_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, v30, v31);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v34 = (unsigned int)v18->fields.m_CancellationTokenSource;
                      if ( v29 + 1 >= v34 )
                        goto LABEL_68;
                      v35 = v29 + 2;
                      if ( v29 + 2 >= v34 )
                        goto LABEL_68;
                      v36 = (System_String_o *)*((_QWORD *)&v18->fields.mayaPrefab + v29);
                      v37 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v38 = (System_String_o *)*((_QWORD *)&v18[1].klass + v29);
                      v39 = (UnityEngine_AnimationEvent_o *)sub_21FFEBC(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v39, 0);
                      if ( !v39 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v39, v33 / v37, 0);
                      v40 = System_String__Concat_75481624(v36, (System_String_o *)StringLiteral_1532/*":"*/, v38, 0);
                      UnityEngine_AnimationEvent__set_stringParameter(v39, v40, 0);
                      UnityEngine_AnimationEvent__set_functionName(v39, (System_String_o *)StringLiteral_10219/*"OnAnimEvent"*/, 0);
                      v28 = (int)v18->fields.m_CancellationTokenSource;
                      v29 = v35 + 1;
                      if ( v35 + 1 < v28 )
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
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gameObject, v24);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_67;
                v43 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v23, klass, 0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v44 = (int)v18->fields.m_CancellationTokenSource;
                  if ( v44 >= 4 )
                  {
                    v45 = 3;
                    while ( v45 < (unsigned int)v44 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v18->fields.rootTransform + v45);
                      if ( !this )
                        goto LABEL_67;
                      if ( LODWORD(this->fields.m_CachedPtr) )
                      {
                        v48 = System_Single__Parse((System_String_o *)this, 0);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v49 = v48;
                        if ( !*(&BattleChrManager_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, v46, v47);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v50 = (unsigned int)v18->fields.m_CancellationTokenSource;
                        if ( v45 + 1 >= v50 )
                          break;
                        v51 = v45 + 2;
                        if ( v45 + 2 >= v50 )
                          break;
                        v52 = (System_String_o *)*((_QWORD *)&v18->fields.mayaPrefab + v45);
                        v53 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v54 = (System_String_o *)*((_QWORD *)&v18[1].klass + v45);
                        v55 = (UnityEngine_AnimationEvent_o *)sub_21FFEBC(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v55, 0);
                        if ( !v55 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v55, v49 / v53, 0);
                        v56 = System_String__Concat_75481624(v52, (System_String_o *)StringLiteral_1532/*":"*/, v54, 0);
                        UnityEngine_AnimationEvent__set_stringParameter(v55, v56, 0);
                        UnityEngine_AnimationEvent__set_functionName(v55, (System_String_o *)StringLiteral_10219/*"OnAnimEvent"*/, 0);
                        v44 = (int)v18->fields.m_CancellationTokenSource;
                        v45 = v51 + 1;
                        if ( v51 + 1 < v44 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_21FFED4(this);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v13 = (int)v14->fields.m_CancellationTokenSource;
    }
  }
}


void BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_59379C8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_59379C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)this, 0);
  }
}


void BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__59262092; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  BattleChrManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v13; // x22
  struct BattleChrManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  System_String_o *name; // x21
  BattleChrManager_c *v42; // x0
  int32_t v43; // w21
  System_String_o *v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_array *v48; // x0
  __int64 v49; // x1
  System_String_array *v50; // x21
  il2cpp_array_size_t max_length; // x8
  bool v52; // w27
  unsigned __int64 v53; // x28
  Il2CppObject *Component_object; // x0
  __int64 v55; // x1
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // [xsp+18h] [xbp-68h]

  if ( (byte_59379CA & 1) == 0 )
  {
    sub_21FFC50(&BattleChrManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_21FFC50(&System_Func_Transform__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_21FFC50(&BattleChrManager___c_TypeInfo);
    byte_59379CA = 1;
  }
  if ( !gameObject )
    goto LABEL_61;
  ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                            gameObject,
                                            (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v9 = BattleChrManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__59262092;
  if ( !*(&BattleChrManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo, v7, v8);
    v9 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__6_0 = (System_Func_object__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v13, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0);
    v14 = BattleChrManager___c_TypeInfo->static_fields;
    v14->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__6_0, (int32_t)_9__6_0, v15, v16, v17, v18, v19, v20);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v10,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_61:
    sub_21FFECC(this, gameObject);
  klass = this->klass;
  v22 = this;
  v23 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v25 = sub_2237E2C(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  v60 = v26;
  while ( 1 )
  {
    if ( !v60 )
      sub_21FFECC(v26, v27);
    v28 = *(_QWORD *)v60;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_2237E2C(v60, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v60, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v60;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v34 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_30;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_30:
      v35 = sub_2237E2C(v60, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v36 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v60, *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_21FFECC(0, v37);
    name = UnityEngine_Object__get_name(v36, 0);
    v42 = BattleChrManager_TypeInfo;
    if ( !*(&BattleChrManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, v39, v40);
    if ( !name )
      sub_21FFECC(v42, v39);
    v43 = System_String__IndexOf_75501892(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
    v44 = UnityEngine_Object__get_name(v38, 0);
    if ( !v44 )
      sub_21FFECC(0, v45);
    v46 = System_String__Substring(v44, v43 + 6, 0);
    if ( !v46 )
      sub_21FFECC(0, v47);
    v48 = System_String__Split(v46, 0x5Fu, 0, 0);
    v50 = v48;
    if ( !v48 )
      sub_21FFECC(0, v49);
    max_length = v48->max_length;
    v52 = (int)max_length > 0;
    if ( (int)max_length >= 1 )
    {
      v53 = 0;
      do
      {
        if ( v53 >= (unsigned int)max_length )
          sub_21FFED4(v48);
        v48 = (System_String_array *)System_Int32__Parse(v50->m_Items[v53], 0);
        if ( (_DWORD)v48 == level )
          break;
        LODWORD(max_length) = v50->max_length;
        v52 = (__int64)++v53 < (int)max_length;
      }
      while ( (__int64)v53 < (int)max_length );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v38,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_21FFECC(0, v55);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v52, 0);
  }
  v56 = *(_QWORD *)v60;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_50;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_50:
    v59 = sub_2237E2C(v60, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v60, *(_QWORD *)(v59 + 8));
}


void BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *mayaPrefab; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Quaternion_StaticFields *v9; // x8
  float v10; // s11
  float v11; // s12
  float v12; // s13
  float w; // s14
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x20
  BattleChrManager_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppType *v23; // x20
  System_RuntimeTypeHandle_o v24; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_83187564; // x0
  System_String_o *v27; // x3
  const MethodInfo *v28; // x5
  __int64 naturalAligment; // x10
  UnityEngine_TextAsset_o *v30; // x2
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_59379C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575192);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_TextAsset_var);
    sub_21FFC50(&UnityEngine_TextAsset_TypeInfo);
    sub_21FFC50(&StringLiteral_9336/*"Maya/fbxevent_arthur"*/);
    sub_21FFC50(&StringLiteral_26745/*"アルトリア"*/);
    byte_59379C9 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_5931946 )
  {
    sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
  }
  v9 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v10 = v9->identityQuaternion.fields.x;
  v11 = v9->identityQuaternion.fields.y;
  v12 = v9->identityQuaternion.fields.z;
  w = v9->identityQuaternion.fields.w;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v36.fields.x = v10;
  v36.fields.y = v11;
  v36.fields.z = v12;
  v36.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59507304(
                                            mayaPrefab,
                                            v31,
                                            v36,
                                            (const MethodInfo_38C0268 *)Method_UnityEngine_Object_Instantiate_GameObject____91575192);
  if ( !transform )
    goto LABEL_23;
  v16 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !transform )
    goto LABEL_23;
  v32.fields.x = -30.677;
  v32.fields.y = 0.35516;
  v32.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0);
  v17 = UnityEngine_GameObject__get_transform(v16, 0);
  v33.fields.x = 0.0;
  v33.fields.z = 0.0;
  v33.fields.y = 4.7124;
  v18 = v17;
  v35 = UnityEngine_Quaternion__Internal_FromEulerRad(v33, 0);
  if ( !v18
    || (UnityEngine_Transform__set_localRotation(v18, v35, 0),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0)) == 0) )
  {
LABEL_23:
    sub_21FFECC(transform, v15);
  }
  v34.fields.x = 20.0;
  v34.fields.y = 20.0;
  v34.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v34, 0);
  BattleChrManager__SetEvolutionLevel(v19, v16, 2, v20);
  v23 = UnityEngine_TextAsset_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v21, v22);
  v24.fields.value = (intptr_t)v23;
  TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0);
  _83187564 = UnityEngine_Resources__Load_83187564((System_String_o *)StringLiteral_9336/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0);
  if ( _83187564
    && (naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment,
        _83187564->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_TextAsset_c *)_83187564->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_TextAsset_TypeInfo )
      v30 = (UnityEngine_TextAsset_o *)_83187564;
    else
      v30 = 0;
  }
  else
  {
    v30 = 0;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_83187564, v16, v30, v27, 1, v28);
}


void BattleChrManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59379CE & 1) == 0 )
  {
    sub_21FFC50(&BattleChrManager___c_TypeInfo);
    byte_59379CE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleChrManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleChrManager___c___ctor(BattleChrManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleChrManager___c___SetEvolutionLevel_b__6_0(
        BattleChrManager___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  __int64 v4; // x2
  BattleChrManager___c_o *v5; // x19

  if ( (byte_59379CF & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_21FFC50(&BattleChrManager_TypeInfo);
    byte_59379CF = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0);
  if ( !this )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v5 = this;
  if ( !*(&BattleChrManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo, p, v4);
  if ( !v5 )
LABEL_9:
    sub_21FFECC(this, p);
  return System_String__Contains((System_String_o *)v5, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
}