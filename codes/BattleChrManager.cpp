void BattleChrManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleChrManager_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C26669 & 1) == 0 )
  {
    sub_1C2D490(&BattleChrManager_TypeInfo);
    sub_1C2D490(&StringLiteral_16559/*"_level"*/);
    byte_4C26669 = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16559/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16559/*"_level"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->levelMarker, v4, v1, v2);
}


void BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C26668 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_4C26668 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  Il2CppObject *Component_object; // x22
  System_String_o *text; // x21
  __int64 v10; // x2
  int m_CancellationTokenSource; // w8
  int v12; // w8
  BattleChrManager_o *v13; // x21
  int i; // w27
  System_String_o *v15; // x22
  struct System_Threading_CancellationTokenSource_o *v16; // x8
  BattleChrManager_o *v17; // x22
  System_String_o *klass; // x23
  Il2CppObject *v19; // x25
  Il2CppObject *v20; // x24
  UnityEngine_Object_o *clip; // x23
  int v22; // w8
  int v23; // w23
  float v24; // s0
  float v25; // s8
  unsigned int v26; // w9
  int v27; // w19
  System_String_o *v28; // x25
  System_String_o *v29; // x24
  float v30; // s9
  UnityEngine_AnimationEvent_o *v31; // x23
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x23
  int v34; // w8
  int v35; // w23
  float v36; // s0
  float v37; // s8
  unsigned int v38; // w9
  int v39; // w19
  System_String_o *v40; // x25
  System_String_o *v41; // x24
  float v42; // s9
  UnityEngine_AnimationEvent_o *v43; // x23
  System_String_o *v44; // x0

  v7 = gameObject;
  if ( (byte_4C26667 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationEvent_TypeInfo);
    sub_1C2D490(&BattleChrManager_TypeInfo);
    sub_1C2D490(&char___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_370/*"#"*/);
    sub_1C2D490(&StringLiteral_9827/*"OnAnimEvent"*/);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    this = (BattleChrManager_o *)sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C26667 = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0);
  this = (BattleChrManager_o *)sub_1C2D538(char___TypeInfo, 2);
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
  if ( !text || (this = (BattleChrManager_o *)System_String__Split_63506940(text, (System_Char_array *)this, 0)) == 0 )
LABEL_67:
    sub_1C2D6EC(this, gameObject);
  v12 = (int)this->fields.m_CancellationTokenSource;
  v13 = this;
  if ( v12 >= 1 )
  {
    for ( i = 0; i < v12; ++i )
    {
      if ( i >= (unsigned int)v12 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_811/*","*/;
      if ( !StringLiteral_811/*","*/ )
        goto LABEL_67;
      v15 = (System_String_o *)*((_QWORD *)&v13->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_811/*","*/, 0, 0);
      if ( !v15 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v15, (uint16_t)this, 0, 0);
      if ( !this )
        goto LABEL_67;
      v16 = this->fields.m_CancellationTokenSource;
      v17 = this;
      if ( v16 )
      {
        if ( !(_DWORD)v16 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_370/*"#"*/,
                                       0);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v17->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v17->fields.mayaPrefab, 0);
          if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v17[1].klass;
            v19 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v20 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v19 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v19, klass, 0);
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
                v22 = (int)v17->fields.m_CancellationTokenSource;
                if ( v22 >= 4 )
                {
                  v23 = 3;
                  while ( v23 < (unsigned int)v22 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v17->fields.rootTransform + v23);
                    if ( !this )
                      goto LABEL_67;
                    if ( LODWORD(this->fields.m_CachedPtr) )
                    {
                      v24 = System_Single__Parse((System_String_o *)this, 0);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v25 = v24;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v26 = (unsigned int)v17->fields.m_CancellationTokenSource;
                      if ( v23 + 1 >= v26 )
                        goto LABEL_68;
                      v27 = v23 + 2;
                      if ( v23 + 2 >= v26 )
                        goto LABEL_68;
                      v28 = (System_String_o *)*((_QWORD *)&v17->fields.mayaPrefab + v23);
                      v29 = (System_String_o *)*((_QWORD *)&v17[1].klass + v23);
                      v30 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v31 = (UnityEngine_AnimationEvent_o *)sub_1C2D6DC(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v31, 0);
                      if ( !v31 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v31, v25 / v30, 0);
                      v32 = System_String__Concat_63496112(v28, (System_String_o *)StringLiteral_1456/*":"*/, v29, 0);
                      UnityEngine_AnimationEvent__set_stringParameter(v31, v32, 0);
                      UnityEngine_AnimationEvent__set_functionName(v31, (System_String_o *)StringLiteral_9827/*"OnAnimEvent"*/, 0);
                      v22 = (int)v17->fields.m_CancellationTokenSource;
                      v23 = v27 + 1;
                      if ( v27 + 1 < v22 )
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v20 )
                  goto LABEL_67;
                v33 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v20, klass, 0);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v34 = (int)v17->fields.m_CancellationTokenSource;
                  if ( v34 >= 4 )
                  {
                    v35 = 3;
                    while ( v35 < (unsigned int)v34 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v17->fields.rootTransform + v35);
                      if ( !this )
                        goto LABEL_67;
                      if ( LODWORD(this->fields.m_CachedPtr) )
                      {
                        v36 = System_Single__Parse((System_String_o *)this, 0);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v37 = v36;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v38 = (unsigned int)v17->fields.m_CancellationTokenSource;
                        if ( v35 + 1 >= v38 )
                          break;
                        v39 = v35 + 2;
                        if ( v35 + 2 >= v38 )
                          break;
                        v40 = (System_String_o *)*((_QWORD *)&v17->fields.mayaPrefab + v35);
                        v41 = (System_String_o *)*((_QWORD *)&v17[1].klass + v35);
                        v42 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v43 = (UnityEngine_AnimationEvent_o *)sub_1C2D6DC(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v43, 0);
                        if ( !v43 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v43, v37 / v42, 0);
                        v44 = System_String__Concat_63496112(v40, (System_String_o *)StringLiteral_1456/*":"*/, v41, 0);
                        UnityEngine_AnimationEvent__set_stringParameter(v43, v44, 0);
                        UnityEngine_AnimationEvent__set_functionName(v43, (System_String_o *)StringLiteral_9827/*"OnAnimEvent"*/, 0);
                        v34 = (int)v17->fields.m_CancellationTokenSource;
                        v35 = v39 + 1;
                        if ( v39 + 1 < v34 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1C2D6F4(this, gameObject, v10);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v12 = (int)v13->fields.m_CancellationTokenSource;
    }
  }
}


void BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20

  if ( (byte_4C26664 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_4C26664 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)this, 0);
  }
}


void BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51538676; // x0
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
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  UnityEngine_Object_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x21
  __int64 v32; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v34; // x0
  int32_t v35; // w22
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x0
  __int64 v39; // x1
  System_String_array *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_array *v43; // x22
  il2cpp_array_size_t max_length; // x8
  bool v45; // w28
  unsigned __int64 v46; // x29
  Il2CppObject *Component_object; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4C26666 & 1) == 0 )
  {
    sub_1C2D490(&BattleChrManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C2D490(&System_Func_Transform__bool__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_1C2D490(&BattleChrManager___c_TypeInfo);
    byte_4C26666 = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__51538676 = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                            gameObject,
                                            (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v7 = BattleChrManager___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__51538676;
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
    _9__6_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v10, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v12, v13);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v8,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1C2D6EC(this, gameObject);
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
    v18 = sub_1C7DCA8(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C2D6EC(0, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_22;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_22:
      v24 = sub_1C7DCA8(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v27 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_1C7DCA8(v20, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v29 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1C2D6EC(0, v30);
    name = UnityEngine_Object__get_name(v29, 0);
    v34 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1C2D6EC(v34, v32);
    v35 = System_String__IndexOf_63516240(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
    v36 = UnityEngine_Object__get_name(v31, 0);
    if ( !v36 )
      sub_1C2D6EC(0, v37);
    v38 = System_String__Substring(v36, v35 + 6, 0);
    if ( !v38 )
      sub_1C2D6EC(0, v39);
    v40 = System_String__Split(v38, 0x5Fu, 0, 0);
    v43 = v40;
    if ( !v40 )
      sub_1C2D6EC(0, v41);
    max_length = v40->max_length;
    v45 = (int)max_length > 0;
    if ( (int)max_length >= 1 )
    {
      v46 = 0;
      do
      {
        if ( v46 >= (unsigned int)max_length )
          sub_1C2D6F4(v40, v41, v42);
        v40 = (System_String_array *)System_Int32__Parse(v43->m_Items[v46], 0);
        if ( (_DWORD)v40 == level )
          break;
        LODWORD(max_length) = v43->max_length;
        v45 = (__int64)++v46 < (int)max_length;
      }
      while ( (__int64)v46 < (int)max_length );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v31,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1C2D6EC(0, v48);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v45, 0);
  }
  v49 = *(_QWORD *)v20;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_49;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_49:
    v52 = sub_1C7DCA8(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v20, *(_QWORD *)(v52 + 8));
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x19
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Transform_o *v17; // x20
  BattleChrManager_o *v18; // x0
  const MethodInfo *v19; // x3
  Il2CppType *v20; // x20
  System_RuntimeTypeHandle_o v21; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_71124112; // x0
  System_String_o *v24; // x3
  const MethodInfo *v25; // x5
  __int64 naturalAligment; // x10
  UnityEngine_TextAsset_o *v27; // x2
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C26665 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081720);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_TextAsset_var);
    sub_1C2D490(&UnityEngine_TextAsset_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&StringLiteral_8974/*"Maya/fbxevent_arthur"*/);
    sub_1C2D490(&StringLiteral_25373/*"アルトリア"*/);
    byte_4C26665 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4C20DA7 )
  {
    sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  v8 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v10 = v8->identityQuaternion.fields.x;
  v9 = v8->identityQuaternion.fields.y;
  v12 = v8->identityQuaternion.fields.z;
  w = v8->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v33.fields.x = v10;
  v33.fields.y = v9;
  v33.fields.z = v12;
  v33.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752724(
                                            mayaPrefab,
                                            v28,
                                            v33,
                                            (const MethodInfo_315AF14 *)Method_UnityEngine_Object_Instantiate_GameObject____78081720);
  if ( !transform )
    goto LABEL_23;
  v15 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0);
  if ( !transform )
    goto LABEL_23;
  v29.fields.x = -30.677;
  v29.fields.y = 0.35516;
  v29.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0);
  v16 = UnityEngine_GameObject__get_transform(v15, 0);
  v30.fields.y = 4.7124;
  v17 = v16;
  v30.fields.x = 0.0;
  v30.fields.z = 0.0;
  v32 = UnityEngine_Quaternion__Internal_FromEulerRad(v30, 0);
  if ( !v17
    || (UnityEngine_Transform__set_localRotation(v17, v32, 0),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0)) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(transform, v14);
  }
  v31.fields.x = 20.0;
  v31.fields.y = 20.0;
  v31.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v31, 0);
  BattleChrManager__SetEvolutionLevel(v18, v15, 2, v19);
  v20 = UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = (intptr_t)v20;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0);
  _71124112 = UnityEngine_Resources__Load_71124112((System_String_o *)StringLiteral_8974/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0);
  if ( _71124112
    && (naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment,
        _71124112->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_TextAsset_c *)_71124112->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_TextAsset_TypeInfo )
      v27 = (UnityEngine_TextAsset_o *)_71124112;
    else
      v27 = 0;
  }
  else
  {
    v27 = 0;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_71124112, v15, v27, v24, 1, v25);
}


void BattleChrManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2666A & 1) == 0 )
  {
    sub_1C2D490(&BattleChrManager___c_TypeInfo);
    byte_4C2666A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleChrManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C2666B & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1C2D490(&BattleChrManager_TypeInfo);
    byte_4C2666B = 1;
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
    sub_1C2D6EC(this, p);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0);
}