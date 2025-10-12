void BattleChrManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleChrManager_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C36D41 & 1) == 0 )
  {
    sub_1C32C20(&BattleChrManager_TypeInfo);
    sub_1C32C20(&StringLiteral_16561/*"_level"*/);
    byte_4C36D41 = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16561/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16561/*"_level"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->levelMarker, v4, v1, v2);
}


void BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C36D40 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_4C36D40 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void BattleChrManager__AttachAnimationEvents(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        System_String_o *servantName,
        int32_t level,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x22
  System_String_o *text; // x21
  int m_CancellationTokenSource; // w8
  int v11; // w8
  BattleChrManager_o *v12; // x21
  int i; // w27
  System_String_o *v14; // x22
  struct System_Threading_CancellationTokenSource_o *v15; // x8
  BattleChrManager_o *v16; // x22
  System_String_o *klass; // x23
  Il2CppObject *v18; // x25
  Il2CppObject *v19; // x24
  UnityEngine_Object_o *clip; // x23
  int v21; // w8
  int v22; // w23
  float v23; // s0
  float v24; // s8
  unsigned int v25; // w9
  int v26; // w19
  System_String_o *v27; // x25
  System_String_o *v28; // x24
  float v29; // s9
  UnityEngine_AnimationEvent_o *v30; // x23
  System_String_o *v31; // x0
  UnityEngine_Object_o *v32; // x23
  int v33; // w8
  int v34; // w23
  float v35; // s0
  float v36; // s8
  unsigned int v37; // w9
  int v38; // w19
  System_String_o *v39; // x25
  System_String_o *v40; // x24
  float v41; // s9
  UnityEngine_AnimationEvent_o *v42; // x23
  System_String_o *v43; // x0

  if ( (byte_4C36D3F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationEvent_TypeInfo);
    sub_1C32C20(&BattleChrManager_TypeInfo);
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_370/*"#"*/);
    sub_1C32C20(&StringLiteral_9832/*"OnAnimEvent"*/);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    this = (BattleChrManager_o *)sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C36D3F = 1;
  }
  if ( !gameObject )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   gameObject,
                                   (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0);
  this = (BattleChrManager_o *)sub_1C32CC8(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_67;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_68;
  LOWORD(this->fields.rootTransform) = 13;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_68;
  WORD1(this->fields.rootTransform) = 10;
  if ( !text || (this = (BattleChrManager_o *)System_String__Split_63567620(text, (System_Char_array *)this, 0)) == 0 )
LABEL_67:
    sub_1C32E7C(this);
  v11 = (int)this->fields.m_CancellationTokenSource;
  v12 = this;
  if ( v11 >= 1 )
  {
    for ( i = 0; i < v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_811/*","*/;
      if ( !StringLiteral_811/*","*/ )
        goto LABEL_67;
      v14 = (System_String_o *)*((_QWORD *)&v12->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_811/*","*/, 0, 0);
      if ( !v14 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v14, (uint16_t)this, 0, 0);
      if ( !this )
        goto LABEL_67;
      v15 = this->fields.m_CancellationTokenSource;
      v16 = this;
      if ( v15 )
      {
        if ( !(_DWORD)v15 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_370/*"#"*/,
                                       0);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v16->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v16->fields.mayaPrefab, 0);
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v16[1].klass;
            v18 = UnityEngine_GameObject__GetComponent_object_(
                    gameObject,
                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v19 = UnityEngine_GameObject__GetComponent_object_(
                    gameObject,
                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, klass, 0);
              if ( !this )
                goto LABEL_67;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v21 = (int)v16->fields.m_CancellationTokenSource;
                if ( v21 >= 4 )
                {
                  v22 = 3;
                  while ( v22 < (unsigned int)v21 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v16->fields.rootTransform + v22);
                    if ( !this )
                      goto LABEL_67;
                    if ( LODWORD(this->fields.m_CachedPtr) )
                    {
                      v23 = System_Single__Parse((System_String_o *)this, 0);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v24 = v23;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v25 = (unsigned int)v16->fields.m_CancellationTokenSource;
                      if ( v22 + 1 >= v25 )
                        goto LABEL_68;
                      v26 = v22 + 2;
                      if ( v22 + 2 >= v25 )
                        goto LABEL_68;
                      v27 = (System_String_o *)*((_QWORD *)&v16->fields.mayaPrefab + v22);
                      v28 = (System_String_o *)*((_QWORD *)&v16[1].klass + v22);
                      v29 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v30 = (UnityEngine_AnimationEvent_o *)sub_1C32E6C(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v30, 0);
                      if ( !v30 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v30, v24 / v29, 0);
                      v31 = System_String__Concat_63556792(v27, (System_String_o *)StringLiteral_1457/*":"*/, v28, 0);
                      UnityEngine_AnimationEvent__set_stringParameter(v30, v31, 0);
                      UnityEngine_AnimationEvent__set_functionName(v30, (System_String_o *)StringLiteral_9832/*"OnAnimEvent"*/, 0);
                      v21 = (int)v16->fields.m_CancellationTokenSource;
                      v22 = v26 + 1;
                      if ( v26 + 1 < v21 )
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
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_67;
                v32 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v19, klass, 0);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v32, 0, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v33 = (int)v16->fields.m_CancellationTokenSource;
                  if ( v33 >= 4 )
                  {
                    v34 = 3;
                    while ( v34 < (unsigned int)v33 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v16->fields.rootTransform + v34);
                      if ( !this )
                        goto LABEL_67;
                      if ( LODWORD(this->fields.m_CachedPtr) )
                      {
                        v35 = System_Single__Parse((System_String_o *)this, 0);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v36 = v35;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v37 = (unsigned int)v16->fields.m_CancellationTokenSource;
                        if ( v34 + 1 >= v37 )
                          break;
                        v38 = v34 + 2;
                        if ( v34 + 2 >= v37 )
                          break;
                        v39 = (System_String_o *)*((_QWORD *)&v16->fields.mayaPrefab + v34);
                        v40 = (System_String_o *)*((_QWORD *)&v16[1].klass + v34);
                        v41 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v42 = (UnityEngine_AnimationEvent_o *)sub_1C32E6C(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v42, 0);
                        if ( !v42 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v42, v36 / v41, 0);
                        v43 = System_String__Concat_63556792(v39, (System_String_o *)StringLiteral_1457/*":"*/, v40, 0);
                        UnityEngine_AnimationEvent__set_stringParameter(v42, v43, 0);
                        UnityEngine_AnimationEvent__set_functionName(v42, (System_String_o *)StringLiteral_9832/*"OnAnimEvent"*/, 0);
                        v33 = (int)v16->fields.m_CancellationTokenSource;
                        v34 = v38 + 1;
                        if ( v38 + 1 < v33 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1C32E84(this);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v11 = (int)v12->fields.m_CancellationTokenSource;
    }
  }
}


void BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20

  if ( (byte_4C36D3C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_4C36D3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)this, 0);
  }
}


void BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51598740; // x0
  BattleChrManager___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v10; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  UnityEngine_Object_o *v28; // x0
  UnityEngine_Object_o *v29; // x21
  System_String_o *name; // x22
  BattleChrManager_c *v31; // x0
  int32_t v32; // w22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_array *v35; // x0
  System_String_array *v36; // x22
  il2cpp_array_size_t max_length; // x8
  bool v38; // w28
  unsigned __int64 v39; // x29
  Il2CppObject *Component_object; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4C36D3E & 1) == 0 )
  {
    sub_1C32C20(&BattleChrManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C32C20(&System_Func_Transform__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_1C32C20(&BattleChrManager___c_TypeInfo);
    byte_4C36D3E = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__51598740 = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                            gameObject,
                                            (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v7 = BattleChrManager___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__51598740;
  if ( !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v7 = BattleChrManager___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__bool__o *)v7->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleChrManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__6_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v10, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v12, v13);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v8,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1C32E7C(this);
  klass = this->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_15;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v18 = sub_1C83438(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C83438(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v26 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_1C83438(v19, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v28 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( !v28 )
      sub_1C32E7C(0);
    name = UnityEngine_Object__get_name(v28, 0);
    v31 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1C32E7C(v31);
    v32 = System_String__IndexOf_63576920(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
    v33 = UnityEngine_Object__get_name(v29, 0);
    if ( !v33 )
      sub_1C32E7C(0);
    v34 = System_String__Substring(v33, v32 + 6, 0);
    if ( !v34 )
      sub_1C32E7C(0);
    v35 = System_String__Split(v34, 0x5Fu, 0, 0);
    v36 = v35;
    if ( !v35 )
      sub_1C32E7C(0);
    max_length = v35->max_length;
    v38 = (int)max_length > 0;
    if ( (int)max_length >= 1 )
    {
      v39 = 0;
      do
      {
        if ( v39 >= (unsigned int)max_length )
          sub_1C32E84(v35);
        v35 = (System_String_array *)System_Int32__Parse(v36->m_Items[v39], 0);
        if ( (_DWORD)v35 == level )
          break;
        LODWORD(max_length) = v36->max_length;
        v38 = (__int64)++v39 < (int)max_length;
      }
      while ( (__int64)v39 < (int)max_length );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v29,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1C32E7C(0);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v38, 0);
  }
  v41 = *(_QWORD *)v19;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_49;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_49:
    v44 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v19, *(_QWORD *)(v44 + 8));
}


void BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  Il2CppObject *mayaPrefab; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v8; // x8
  float v9; // s13
  float v10; // s14
  float w; // s11
  float v12; // s12
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x20
  BattleChrManager_o *v17; // x0
  const MethodInfo *v18; // x3
  Il2CppType *v19; // x20
  System_RuntimeTypeHandle_o v20; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_71184048; // x0
  System_String_o *v23; // x3
  const MethodInfo *v24; // x5
  __int64 naturalAligment; // x10
  UnityEngine_TextAsset_o *v26; // x2
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C36D3D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147232);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_TextAsset_var);
    sub_1C32C20(&UnityEngine_TextAsset_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_8980/*"Maya/fbxevent_arthur"*/);
    sub_1C32C20(&StringLiteral_25391/*"アルトリア"*/);
    byte_4C36D3D = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4C313D7 )
  {
    sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
  }
  v8 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v10 = v8->identityQuaternion.fields.x;
  v9 = v8->identityQuaternion.fields.y;
  v12 = v8->identityQuaternion.fields.z;
  w = v8->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v32.fields.x = v10;
  v32.fields.y = v9;
  v32.fields.z = v12;
  v32.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51812788(
                                            mayaPrefab,
                                            v27,
                                            v32,
                                            (const MethodInfo_31699B4 *)Method_UnityEngine_Object_Instantiate_GameObject____78147232);
  if ( !transform )
    goto LABEL_23;
  v14 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
  if ( !transform )
    goto LABEL_23;
  v28.fields.x = -30.677;
  v28.fields.y = 0.35516;
  v28.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v28, 0);
  v15 = UnityEngine_GameObject__get_transform(v14, 0);
  v29.fields.y = 4.7124;
  v16 = v15;
  v29.fields.x = 0.0;
  v29.fields.z = 0.0;
  v31 = UnityEngine_Quaternion__Internal_FromEulerRad(v29, 0);
  if ( !v16
    || (UnityEngine_Transform__set_localRotation(v16, v31, 0),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0)) == 0) )
  {
LABEL_23:
    sub_1C32E7C(transform);
  }
  v30.fields.x = 20.0;
  v30.fields.y = 20.0;
  v30.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v30, 0);
  BattleChrManager__SetEvolutionLevel(v17, v14, 2, v18);
  v19 = UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = (intptr_t)v19;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0);
  _71184048 = UnityEngine_Resources__Load_71184048((System_String_o *)StringLiteral_8980/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0);
  if ( _71184048
    && (naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment,
        _71184048->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_TextAsset_c *)_71184048->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_TextAsset_TypeInfo )
      v26 = (UnityEngine_TextAsset_o *)_71184048;
    else
      v26 = 0;
  }
  else
  {
    v26 = 0;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_71184048, v14, v26, v23, 1, v24);
}


void BattleChrManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36D42 & 1) == 0 )
  {
    sub_1C32C20(&BattleChrManager___c_TypeInfo);
    byte_4C36D42 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleChrManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  BattleChrManager___c_o *v4; // x19

  if ( (byte_4C36D43 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1C32C20(&BattleChrManager_TypeInfo);
    byte_4C36D43 = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0);
  if ( !this )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v4 = this;
  if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
  if ( !v4 )
LABEL_9:
    sub_1C32E7C(this);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
}