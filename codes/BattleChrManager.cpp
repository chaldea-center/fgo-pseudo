void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_4B1B8C7 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleChrManager_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_16426/*"_level"*/, v4);
    byte_4B1B8C7 = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v6 = StringLiteral_16426/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16426/*"_level"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->levelMarker, v6, v2, v3);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1B8C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_4B1B8C6 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *text; // x21
  __int64 v20; // x2
  int m_CancellationTokenSource; // w8
  int v22; // w8
  BattleChrManager_o *v23; // x21
  int i; // w27
  System_String_o *v25; // x22
  struct System_Threading_CancellationTokenSource_o *v26; // x8
  BattleChrManager_o *v27; // x22
  System_String_o *klass; // x23
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x24
  UnityEngine_Object_o *clip; // x23
  int v32; // w8
  int v33; // w23
  float v34; // s0
  float v35; // s8
  unsigned int v36; // w9
  int v37; // w19
  System_String_o *v38; // x25
  System_String_o *v39; // x24
  float v40; // s9
  UnityEngine_AnimationEvent_o *v41; // x23
  System_String_o *v42; // x0
  UnityEngine_Object_o *v43; // x23
  int v44; // w8
  int v45; // w23
  float v46; // s0
  float v47; // s8
  unsigned int v48; // w9
  int v49; // w19
  System_String_o *v50; // x25
  System_String_o *v51; // x24
  float v52; // s9
  UnityEngine_AnimationEvent_o *v53; // x23
  System_String_o *v54; // x0

  v7 = gameObject;
  if ( (byte_4B1B8C5 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_1BCAFF8(&BattleChrManager_TypeInfo, v8);
    sub_1BCAFF8(&char___TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_368/*"#"*/, v14);
    sub_1BCAFF8(&StringLiteral_9756/*"OnAnimEvent"*/, v15);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v16);
    this = (BattleChrManager_o *)sub_1BCAFF8(&StringLiteral_806/*","*/, v17);
    byte_4B1B8C5 = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_1BCB0A0(char___TypeInfo, 2LL);
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
    || (this = (BattleChrManager_o *)System_String__Split_62499500(text, (System_Char_array *)this, 0LL)) == 0LL )
  {
LABEL_67:
    sub_1BCB254(this, gameObject);
  }
  v22 = (int)this->fields.m_CancellationTokenSource;
  v23 = this;
  if ( v22 >= 1 )
  {
    for ( i = 0; i < v22; ++i )
    {
      if ( i >= (unsigned int)v22 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_806/*","*/;
      if ( !StringLiteral_806/*","*/ )
        goto LABEL_67;
      v25 = (System_String_o *)*((_QWORD *)&v23->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_806/*","*/, 0, 0LL);
      if ( !v25 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v25, (uint16_t)this, 0, 0LL);
      if ( !this )
        goto LABEL_67;
      v26 = this->fields.m_CancellationTokenSource;
      v27 = this;
      if ( v26 )
      {
        if ( !(_DWORD)v26 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_368/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v27->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v27->fields.mayaPrefab, 0LL);
          if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v27[1].klass;
            v29 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v30 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v29, klass, 0LL);
              if ( !this )
                goto LABEL_67;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v32 = (int)v27->fields.m_CancellationTokenSource;
                if ( v32 >= 4 )
                {
                  v33 = 3;
                  while ( v33 < (unsigned int)v32 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.rootTransform + v33);
                    if ( !this )
                      goto LABEL_67;
                    if ( this->fields.m_CachedPtr )
                    {
                      v34 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v35 = v34;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v36 = (unsigned int)v27->fields.m_CancellationTokenSource;
                      if ( v33 + 1 >= v36 )
                        goto LABEL_68;
                      v37 = v33 + 2;
                      if ( v33 + 2 >= v36 )
                        goto LABEL_68;
                      v38 = (System_String_o *)*((_QWORD *)&v27->fields.mayaPrefab + v33);
                      v39 = (System_String_o *)*((_QWORD *)&v27[1].klass + v33);
                      v40 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v41 = (UnityEngine_AnimationEvent_o *)sub_1BCB244(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v41, 0LL);
                      if ( !v41 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v41, v35 / v40, 0LL);
                      v42 = System_String__Concat_62488672(v38, (System_String_o *)StringLiteral_1448/*":"*/, v39, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v41, v42, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v41, (System_String_o *)StringLiteral_9756/*"OnAnimEvent"*/, 0LL);
                      v32 = (int)v27->fields.m_CancellationTokenSource;
                      v33 = v37 + 1;
                      if ( v37 + 1 < v32 )
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v30 )
                  goto LABEL_67;
                v43 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v30, klass, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v44 = (int)v27->fields.m_CancellationTokenSource;
                  if ( v44 >= 4 )
                  {
                    v45 = 3;
                    while ( v45 < (unsigned int)v44 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.rootTransform + v45);
                      if ( !this )
                        goto LABEL_67;
                      if ( this->fields.m_CachedPtr )
                      {
                        v46 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v47 = v46;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v48 = (unsigned int)v27->fields.m_CancellationTokenSource;
                        if ( v45 + 1 >= v48 )
                          break;
                        v49 = v45 + 2;
                        if ( v45 + 2 >= v48 )
                          break;
                        v50 = (System_String_o *)*((_QWORD *)&v27->fields.mayaPrefab + v45);
                        v51 = (System_String_o *)*((_QWORD *)&v27[1].klass + v45);
                        v52 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v53 = (UnityEngine_AnimationEvent_o *)sub_1BCB244(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v53, 0LL);
                        if ( !v53 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v53, v47 / v52, 0LL);
                        v54 = System_String__Concat_62488672(v50, (System_String_o *)StringLiteral_1448/*":"*/, v51, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v53, v54, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v53, (System_String_o *)StringLiteral_9756/*"OnAnimEvent"*/, 0LL);
                        v44 = (int)v27->fields.m_CancellationTokenSource;
                        v45 = v49 + 1;
                        if ( v49 + 1 < v44 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1BCB25C(this, gameObject, v20);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v22 = (int)v23->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20

  if ( (byte_4B1B8C2 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_4B1B8C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Object_array *ComponentsInChildren_object__50787124; // x0
  BattleChrManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v20; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v25; // x19
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x19
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  UnityEngine_Object_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x21
  __int64 v42; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v44; // x0
  int32_t v45; // w22
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x0
  __int64 v49; // x1
  System_String_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_array *v53; // x22
  __int64 v54; // x8
  bool v55; // w28
  unsigned __int64 v56; // x29
  Il2CppObject *Component_object; // x0
  __int64 v58; // x1
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0

  if ( (byte_4B1B8C4 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleChrManager_TypeInfo, gameObject);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1BCAFF8(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v9);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BCAFF8(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v14);
    this = (BattleChrManager_o *)sub_1BCAFF8(&BattleChrManager___c_TypeInfo, v15);
    byte_4B1B8C4 = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__50787124 = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                            gameObject,
                                            (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v17 = BattleChrManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__50787124;
  if ( !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v17 = BattleChrManager___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__bool__o *)v17->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleChrManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__6_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v20, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0LL);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v22, v23);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v18,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1BCB254(this, gameObject);
  klass = this->klass;
  v25 = this;
  v26 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_15;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v28 = sub_1C1B560(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( !v30 )
    sub_1BCB254(0LL, v29);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_22;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_22:
      v34 = sub_1C1B560(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v37 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_29;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_29:
      v38 = sub_1C1B560(v30, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v39 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      sub_1BCB254(0LL, v40);
    name = UnityEngine_Object__get_name(v39, 0LL);
    v44 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1BCB254(v44, v42);
    v45 = System_String__IndexOf_62508800(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v46 = UnityEngine_Object__get_name(v41, 0LL);
    if ( !v46 )
      sub_1BCB254(0LL, v47);
    v48 = System_String__Substring(v46, v45 + 6, 0LL);
    if ( !v48 )
      sub_1BCB254(0LL, v49);
    v50 = System_String__Split(v48, 0x5Fu, 0, 0LL);
    v53 = v50;
    if ( !v50 )
      sub_1BCB254(0LL, v51);
    v54 = *(_QWORD *)&v50->max_length;
    v55 = (int)v54 > 0;
    if ( (int)v54 >= 1 )
    {
      v56 = 0LL;
      do
      {
        if ( v56 >= (unsigned int)v54 )
          sub_1BCB25C(v50, v51, v52);
        v50 = (System_String_array *)System_Int32__Parse(v53->m_Items[v56], 0LL);
        if ( (_DWORD)v50 == level )
          break;
        LODWORD(v54) = v53->max_length;
        v55 = (__int64)++v56 < (int)v54;
      }
      while ( (__int64)v56 < (int)v54 );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v41,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1BCB254(0LL, v58);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v55, 0LL);
  }
  v59 = *(_QWORD *)v30;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_49;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_49:
    v62 = sub_1C1B560(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v30, *(_QWORD *)(v62 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *mayaPrefab; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  struct UnityEngine_Quaternion_StaticFields *v14; // x8
  float v15; // s13
  float v16; // s14
  float w; // s11
  float v18; // s12
  UnityEngine_GameObject_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x19
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  BattleChrManager_o *v28; // x0
  const MethodInfo *v29; // x3
  intptr_t v30; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_70096484; // x0
  System_String_o *v33; // x3
  const MethodInfo *v34; // x5
  __int64 methodPtr_low; // x10
  UnityEngine_TextAsset_o *v36; // x2
  System_RuntimeTypeHandle_o v37; // 0:w0.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B1B8C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001560, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_TextAsset_var, v4);
    sub_1BCAFF8(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_1BCAFF8(&System_Type_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_8910/*"Maya/fbxevent_arthur"*/, v7);
    sub_1BCAFF8(&StringLiteral_25175/*"アルトリア"*/, v8);
    byte_4B1B8C3 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4B16197 )
  {
    sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4B16197 = 1;
  }
  v14 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v16 = v14->identityQuaternion.fields.x;
  v15 = v14->identityQuaternion.fields.y;
  v18 = v14->identityQuaternion.fields.z;
  w = v14->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v42.fields.x = v16;
  v42.fields.y = v15;
  v42.fields.z = v18;
  v42.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002896(
                                            mayaPrefab,
                                            v38,
                                            v42,
                                            (const MethodInfo_30A3E10 *)Method_UnityEngine_Object_Instantiate_GameObject____77001560);
  if ( !transform )
    goto LABEL_23;
  v21 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !transform )
    goto LABEL_23;
  v39.fields.x = -30.677;
  v39.fields.y = 0.35516;
  v39.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v39, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v21, 0LL);
  v40.fields.y = 4.7124;
  v23 = v22;
  v40.fields.x = 0.0;
  v40.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Quaternion__Internal_FromEulerRad(v40, 0LL);
  if ( !v23
    || (UnityEngine_Transform__set_localRotation(v23, *(UnityEngine_Quaternion_o *)&v24, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(transform, v20);
  }
  v41.fields.x = 20.0;
  v41.fields.y = 20.0;
  v41.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v41, 0LL);
  BattleChrManager__SetEvolutionLevel(v28, v21, 2, v29);
  v30 = (int)UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v37.fields.value = v30;
  TypeFromHandle = System_Type__GetTypeFromHandle(v37, 0LL);
  _70096484 = UnityEngine_Resources__Load_70096484((System_String_o *)StringLiteral_8910/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _70096484
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(_70096484->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_TextAsset_c *)_70096484->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo )
      v36 = (UnityEngine_TextAsset_o *)_70096484;
    else
      v36 = 0LL;
  }
  else
  {
    v36 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_70096484, v21, v36, v33, 1, v34);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B8C8 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleChrManager___c_TypeInfo, v1);
    byte_4B1B8C8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleChrManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B1B8C9 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1BCAFF8(&BattleChrManager_TypeInfo, p);
    byte_4B1B8C9 = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
  if ( !v4 )
LABEL_9:
    sub_1BCB254(this, p);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}