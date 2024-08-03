void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct BattleChrManager_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49FB86E & 1) == 0 )
  {
    sub_1B640C8(&BattleChrManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16482/*"_level"*/, v4);
    byte_49FB86E = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v6 = StringLiteral_16482/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16482/*"_level"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->levelMarker, v6, v2, v3);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB86D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_49FB86D = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
}


void __fastcall BattleChrManager__AttachAnimationEvents(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        System_String_o *servantName,
        int32_t level,
        const MethodInfo *method)
{
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
  int m_CancellationTokenSource; // w8
  BattleChrManager_o *v21; // x1
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
  __int64 v34; // x2
  float v35; // s0
  float v36; // s8
  unsigned int v37; // w9
  int v38; // w19
  System_String_o *v39; // x25
  System_String_o *v40; // x24
  float v41; // s9
  UnityEngine_AnimationEvent_o *v42; // x23
  System_String_o *v43; // x0
  UnityEngine_Object_o *v44; // x23
  int v45; // w8
  int v46; // w23
  __int64 v47; // x2
  float v48; // s0
  float v49; // s8
  unsigned int v50; // w9
  int v51; // w19
  System_String_o *v52; // x25
  System_String_o *v53; // x24
  float v54; // s9
  UnityEngine_AnimationEvent_o *v55; // x23
  System_String_o *v56; // x0

  if ( (byte_49FB86C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_1B640C8(&BattleChrManager_TypeInfo, v8);
    sub_1B640C8(&char___TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_402/*"#"*/, v14);
    sub_1B640C8(&StringLiteral_9785/*"OnAnimEvent"*/, v15);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v16);
    this = (BattleChrManager_o *)sub_1B640C8(&StringLiteral_869/*","*/, v17);
    byte_49FB86C = 1;
  }
  if ( !gameObject )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   gameObject,
                                   (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_1B64170(char___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_67;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v21 = this;
  if ( !m_CancellationTokenSource )
    goto LABEL_68;
  LOWORD(this->fields.rootTransform) = 13;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_68;
  WORD1(this->fields.rootTransform) = 10;
  if ( !text
    || (this = (BattleChrManager_o *)System_String__Split_61397544(text, (System_Char_array *)this, 0LL)) == 0LL )
  {
LABEL_67:
    sub_1B64324(this);
  }
  v22 = (int)this->fields.m_CancellationTokenSource;
  v23 = this;
  if ( v22 >= 1 )
  {
    for ( i = 0; i < v22; ++i )
    {
      if ( i >= (unsigned int)v22 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_869/*","*/;
      if ( !StringLiteral_869/*","*/ )
        goto LABEL_67;
      v25 = (System_String_o *)*((_QWORD *)&v23->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_869/*","*/, 0, 0LL);
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
                                       (System_String_o *)StringLiteral_402/*"#"*/,
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
                    gameObject,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v30 = UnityEngine_GameObject__GetComponent_object_(
                    gameObject,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                      v35 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v36 = v35;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v37 = (unsigned int)v27->fields.m_CancellationTokenSource;
                      if ( v33 + 1 >= v37 )
                        goto LABEL_68;
                      v38 = v33 + 2;
                      if ( v33 + 2 >= v37 )
                        goto LABEL_68;
                      v39 = (System_String_o *)*((_QWORD *)&v27->fields.mayaPrefab + v33);
                      v40 = (System_String_o *)*((_QWORD *)&v27[1].klass + v33);
                      v41 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v42 = (UnityEngine_AnimationEvent_o *)sub_1B64314(UnityEngine_AnimationEvent_TypeInfo, v21, v34);
                      UnityEngine_AnimationEvent___ctor(v42, 0LL);
                      if ( !v42 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v42, v36 / v41, 0LL);
                      v43 = System_String__Concat_61386656(v39, (System_String_o *)StringLiteral_1546/*":"*/, v40, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v42, v43, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v42, (System_String_o *)StringLiteral_9785/*"OnAnimEvent"*/, 0LL);
                      v32 = (int)v27->fields.m_CancellationTokenSource;
                      v33 = v38 + 1;
                      if ( v38 + 1 < v32 )
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
                v44 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v30, klass, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v45 = (int)v27->fields.m_CancellationTokenSource;
                  if ( v45 >= 4 )
                  {
                    v46 = 3;
                    while ( v46 < (unsigned int)v45 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v27->fields.rootTransform + v46);
                      if ( !this )
                        goto LABEL_67;
                      if ( this->fields.m_CachedPtr )
                      {
                        v48 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v49 = v48;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v50 = (unsigned int)v27->fields.m_CancellationTokenSource;
                        if ( v46 + 1 >= v50 )
                          break;
                        v51 = v46 + 2;
                        if ( v46 + 2 >= v50 )
                          break;
                        v52 = (System_String_o *)*((_QWORD *)&v27->fields.mayaPrefab + v46);
                        v53 = (System_String_o *)*((_QWORD *)&v27[1].klass + v46);
                        v54 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v55 = (UnityEngine_AnimationEvent_o *)sub_1B64314(UnityEngine_AnimationEvent_TypeInfo, v21, v47);
                        UnityEngine_AnimationEvent___ctor(v55, 0LL);
                        if ( !v55 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v55, v49 / v54, 0LL);
                        v56 = System_String__Concat_61386656(v52, (System_String_o *)StringLiteral_1546/*":"*/, v53, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v55, v56, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v55, (System_String_o *)StringLiteral_9785/*"OnAnimEvent"*/, 0LL);
                        v45 = (int)v27->fields.m_CancellationTokenSource;
                        v46 = v51 + 1;
                        if ( v51 + 1 < v45 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1B6432C(this, v21);
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

  if ( (byte_49FB869 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_49FB869 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)this, 0LL);
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
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  BattleChrManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v22; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  UnityEngine_Object_o *v40; // x0
  UnityEngine_Object_o *v41; // x21
  System_String_o *name; // x22
  BattleChrManager_c *v43; // x0
  int32_t v44; // w22
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_array *v47; // x0
  __int64 v48; // x1
  System_String_array *v49; // x22
  __int64 v50; // x8
  bool v51; // w28
  unsigned __int64 v52; // x29
  Il2CppObject *Component_object; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_49FB86B & 1) == 0 )
  {
    sub_1B640C8(&BattleChrManager_TypeInfo, gameObject);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1B640C8(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v14);
    this = (BattleChrManager_o *)sub_1B640C8(&BattleChrManager___c_TypeInfo, v15);
    byte_49FB86B = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                            gameObject,
                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v19 = BattleChrManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__48794364;
  if ( !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v19 = BattleChrManager___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__bool__o *)v19->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleChrManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__6_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Transform__bool__TypeInfo, v17, v18);
    System_Func_object__bool____ctor(_9__6_0, v22, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0LL);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v24, v25);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v20,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1B64324(this);
  klass = this->klass;
  v27 = this;
  v28 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_15;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v30 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v31 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_22;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_22:
      v35 = sub_1BB60A8(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v38 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_29;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_29:
      v39 = sub_1BB60A8(v31, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v40 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    v41 = v40;
    if ( !v40 )
      sub_1B64324(0LL);
    name = UnityEngine_Object__get_name(v40, 0LL);
    v43 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1B64324(v43);
    v44 = System_String__IndexOf_61406964(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v45 = UnityEngine_Object__get_name(v41, 0LL);
    if ( !v45 )
      sub_1B64324(0LL);
    v46 = System_String__Substring(v45, v44 + 6, 0LL);
    if ( !v46 )
      sub_1B64324(0LL);
    v47 = System_String__Split(v46, 0x5Fu, 0, 0LL);
    v49 = v47;
    if ( !v47 )
      sub_1B64324(0LL);
    v50 = *(_QWORD *)&v47->max_length;
    v51 = (int)v50 > 0;
    if ( (int)v50 >= 1 )
    {
      v52 = 0LL;
      do
      {
        if ( v52 >= (unsigned int)v50 )
          sub_1B6432C(v47, v48);
        v47 = (System_String_array *)System_Int32__Parse(v49->m_Items[v52], 0LL);
        if ( (_DWORD)v47 == level )
          break;
        LODWORD(v50) = v49->max_length;
        v51 = (__int64)++v52 < (int)v50;
      }
      while ( (__int64)v52 < (int)v50 );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v41,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1B64324(0LL);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v51, 0LL);
  }
  v54 = *(_QWORD *)v31;
  v55 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_49;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_49:
    v57 = sub_1BB60A8(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v31, *(_QWORD *)(v57 + 8));
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
  UnityEngine_GameObject_o *v20; // x19
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  BattleChrManager_o *v27; // x0
  const MethodInfo *v28; // x3
  intptr_t v29; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_69087664; // x0
  System_String_o *v32; // x3
  const MethodInfo *v33; // x5
  __int64 methodPtr_low; // x10
  UnityEngine_TextAsset_o *v35; // x2
  System_RuntimeTypeHandle_o v36; // 0:w0.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v41; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49FB86A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791920, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_TextAsset_var, v4);
    sub_1B640C8(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_1B640C8(&System_Type_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_8900/*"Maya/fbxevent_arthur"*/, v7);
    sub_1B640C8(&StringLiteral_25183/*"アルトリア"*/, v8);
    byte_49FB86A = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, method);
    byte_49F7117 = 1;
  }
  v14 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v16 = v14->identityQuaternion.fields.x;
  v15 = v14->identityQuaternion.fields.y;
  v18 = v14->identityQuaternion.fields.z;
  w = v14->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v41.fields.x = v16;
  v41.fields.y = v15;
  v41.fields.z = v18;
  v41.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49004284(
                                            mayaPrefab,
                                            v37,
                                            v41,
                                            (const MethodInfo_2EBBEFC *)Method_UnityEngine_Object_Instantiate_GameObject____75791920);
  if ( !transform )
    goto LABEL_23;
  v20 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_23;
  v38.fields.x = -30.677;
  v38.fields.y = 0.35516;
  v38.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v38, 0LL);
  v21 = UnityEngine_GameObject__get_transform(v20, 0LL);
  v39.fields.y = 4.7124;
  v22 = v21;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__Internal_FromEulerRad(v39, 0LL);
  if ( !v22
    || (UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B64324(transform);
  }
  v40.fields.x = 20.0;
  v40.fields.y = 20.0;
  v40.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v40, 0LL);
  BattleChrManager__SetEvolutionLevel(v27, v20, 2, v28);
  v29 = (int)UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v36.fields.value = v29;
  TypeFromHandle = System_Type__GetTypeFromHandle(v36, 0LL);
  _69087664 = UnityEngine_Resources__Load_69087664((System_String_o *)StringLiteral_8900/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _69087664
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(_69087664->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_TextAsset_c *)_69087664->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo )
      v35 = (UnityEngine_TextAsset_o *)_69087664;
    else
      v35 = 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_69087664, v20, v35, v32, 1, v33);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB86F & 1) == 0 )
  {
    sub_1B640C8(&BattleChrManager___c_TypeInfo, v1);
    byte_49FB86F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleChrManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleChrManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FB870 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1B640C8(&BattleChrManager_TypeInfo, p);
    byte_49FB870 = 1;
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
    sub_1B64324(this);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}