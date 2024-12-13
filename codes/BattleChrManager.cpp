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
  struct BattleChrManager_StaticFields *static_fields; // x0
  int64_t v10; // x1

  if ( (byte_4B365AB & 1) == 0 )
  {
    sub_1BD3458(&BattleChrManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_16740/*"_level"*/, v8);
    byte_4B365AB = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v10 = StringLiteral_16740/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16740/*"_level"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->levelMarker, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B365AA & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, method);
    byte_4B365AA = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37FE060 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  int m_CancellationTokenSource; // w8
  int v21; // w8
  BattleChrManager_o *v22; // x21
  int i; // w27
  System_String_o *v24; // x22
  struct System_Threading_CancellationTokenSource_o *v25; // x8
  BattleChrManager_o *v26; // x22
  System_String_o *klass; // x23
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x24
  UnityEngine_Object_o *clip; // x23
  int v31; // w8
  int v32; // w23
  float v33; // s0
  float v34; // s8
  unsigned int v35; // w9
  int v36; // w19
  System_String_o *v37; // x25
  System_String_o *v38; // x24
  float v39; // s9
  UnityEngine_AnimationEvent_o *v40; // x23
  System_String_o *v41; // x0
  UnityEngine_Object_o *v42; // x23
  int v43; // w8
  int v44; // w23
  float v45; // s0
  float v46; // s8
  unsigned int v47; // w9
  int v48; // w19
  System_String_o *v49; // x25
  System_String_o *v50; // x24
  float v51; // s9
  UnityEngine_AnimationEvent_o *v52; // x23
  System_String_o *v53; // x0

  v7 = gameObject;
  if ( (byte_4B365A9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_AnimationEvent_TypeInfo, gameObject);
    sub_1BD3458(&BattleChrManager_TypeInfo, v8);
    sub_1BD3458(&char___TypeInfo, v9);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v10);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&StringLiteral_396/*"#"*/, v14);
    sub_1BD3458(&StringLiteral_9977/*"OnAnimEvent"*/, v15);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v16);
    this = (BattleChrManager_o *)sub_1BD3458(&StringLiteral_863/*","*/, v17);
    byte_4B365A9 = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_1BD3500(char___TypeInfo, 2LL);
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
    || (this = (BattleChrManager_o *)System_String__Split_62547404(text, (System_Char_array *)this, 0LL)) == 0LL )
  {
LABEL_67:
    sub_1BD36B4(this, gameObject);
  }
  v21 = (int)this->fields.m_CancellationTokenSource;
  v22 = this;
  if ( v21 >= 1 )
  {
    for ( i = 0; i < v21; ++i )
    {
      if ( i >= (unsigned int)v21 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_863/*","*/;
      if ( !StringLiteral_863/*","*/ )
        goto LABEL_67;
      v24 = (System_String_o *)*((_QWORD *)&v22->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_863/*","*/, 0, 0LL);
      if ( !v24 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v24, (uint16_t)this, 0, 0LL);
      if ( !this )
        goto LABEL_67;
      v25 = this->fields.m_CancellationTokenSource;
      v26 = this;
      if ( v25 )
      {
        if ( !(_DWORD)v25 )
          goto LABEL_68;
        this = (BattleChrManager_o *)this->fields.rootTransform;
        if ( !this )
          goto LABEL_67;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_396/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v26->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v26->fields.mayaPrefab, 0LL);
          if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v26[1].klass;
            v28 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v29 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v28, klass, 0LL);
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
                v31 = (int)v26->fields.m_CancellationTokenSource;
                if ( v31 >= 4 )
                {
                  v32 = 3;
                  while ( v32 < (unsigned int)v31 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v26->fields.rootTransform + v32);
                    if ( !this )
                      goto LABEL_67;
                    if ( this->fields.m_CachedPtr )
                    {
                      v33 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      v34 = v33;
                      if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v35 = (unsigned int)v26->fields.m_CancellationTokenSource;
                      if ( v32 + 1 >= v35 )
                        goto LABEL_68;
                      v36 = v32 + 2;
                      if ( v32 + 2 >= v35 )
                        goto LABEL_68;
                      v37 = (System_String_o *)*((_QWORD *)&v26->fields.mayaPrefab + v32);
                      v38 = (System_String_o *)*((_QWORD *)&v26[1].klass + v32);
                      v39 = *(float *)&this[3].fields.mayaPrefab->klass;
                      v40 = (UnityEngine_AnimationEvent_o *)sub_1BD36A4(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v40, 0LL);
                      if ( !v40 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v40, v34 / v39, 0LL);
                      v41 = System_String__Concat_62536508(v37, (System_String_o *)StringLiteral_1541/*":"*/, v38, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v40, v41, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v40, (System_String_o *)StringLiteral_9977/*"OnAnimEvent"*/, 0LL);
                      v31 = (int)v26->fields.m_CancellationTokenSource;
                      v32 = v36 + 1;
                      if ( v36 + 1 < v31 )
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v29 )
                  goto LABEL_67;
                v42 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v29, klass, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v43 = (int)v26->fields.m_CancellationTokenSource;
                  if ( v43 >= 4 )
                  {
                    v44 = 3;
                    while ( v44 < (unsigned int)v43 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v26->fields.rootTransform + v44);
                      if ( !this )
                        goto LABEL_67;
                      if ( this->fields.m_CachedPtr )
                      {
                        v45 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        v46 = v45;
                        if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v47 = (unsigned int)v26->fields.m_CancellationTokenSource;
                        if ( v44 + 1 >= v47 )
                          break;
                        v48 = v44 + 2;
                        if ( v44 + 2 >= v47 )
                          break;
                        v49 = (System_String_o *)*((_QWORD *)&v26->fields.mayaPrefab + v44);
                        v50 = (System_String_o *)*((_QWORD *)&v26[1].klass + v44);
                        v51 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v52 = (UnityEngine_AnimationEvent_o *)sub_1BD36A4(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v52, 0LL);
                        if ( !v52 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v52, v46 / v51, 0LL);
                        v53 = System_String__Concat_62536508(v49, (System_String_o *)StringLiteral_1541/*":"*/, v50, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v52, v53, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v52, (System_String_o *)StringLiteral_9977/*"OnAnimEvent"*/, 0LL);
                        v43 = (int)v26->fields.m_CancellationTokenSource;
                        v44 = v48 + 1;
                        if ( v48 + 1 < v43 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1BD36BC(this, gameObject);
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      v21 = (int)v22->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20

  if ( (byte_4B365A6 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v3);
    byte_4B365A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)this, 0LL);
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
  System_Object_array *ComponentsInChildren_object__49817248; // x0
  BattleChrManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v20; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v29; // x19
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x19
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  UnityEngine_Object_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Object_o *v45; // x21
  __int64 v46; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v48; // x0
  int32_t v49; // w22
  System_String_o *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x0
  __int64 v53; // x1
  System_String_array *v54; // x0
  __int64 v55; // x1
  System_String_array *v56; // x22
  __int64 v57; // x8
  bool v58; // w28
  unsigned __int64 v59; // x29
  Il2CppObject *Component_object; // x0
  __int64 v61; // x1
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0

  if ( (byte_4B365A8 & 1) == 0 )
  {
    sub_1BD3458(&BattleChrManager_TypeInfo, gameObject);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1BD3458(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v11);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v12);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BD3458(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v14);
    this = (BattleChrManager_o *)sub_1BD3458(&BattleChrManager___c_TypeInfo, v15);
    byte_4B365A8 = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__49817248 = UnityEngine_GameObject__GetComponentsInChildren_object__49817248(
                                            gameObject,
                                            (const MethodInfo_2F826A0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v17 = BattleChrManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__49817248;
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
    _9__6_0 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v20, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0LL);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v22, v23, v24, v25, v26, v27);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v18,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1BD36B4(this, gameObject);
  klass = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_15;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v32 = sub_1C25438(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( !v34 )
    sub_1BD36B4(0LL, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_22;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_22:
      v38 = sub_1C25438(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v41 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_29;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_29:
      v42 = sub_1C25438(v34, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v43 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_1BD36B4(0LL, v44);
    name = UnityEngine_Object__get_name(v43, 0LL);
    v48 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1BD36B4(v48, v46);
    v49 = System_String__IndexOf_62556824(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v50 = UnityEngine_Object__get_name(v45, 0LL);
    if ( !v50 )
      sub_1BD36B4(0LL, v51);
    v52 = System_String__Substring(v50, v49 + 6, 0LL);
    if ( !v52 )
      sub_1BD36B4(0LL, v53);
    v54 = System_String__Split(v52, 0x5Fu, 0, 0LL);
    v56 = v54;
    if ( !v54 )
      sub_1BD36B4(0LL, v55);
    v57 = *(_QWORD *)&v54->max_length;
    v58 = (int)v57 > 0;
    if ( (int)v57 >= 1 )
    {
      v59 = 0LL;
      do
      {
        if ( v59 >= (unsigned int)v57 )
          sub_1BD36BC(v54, v55);
        v54 = (System_String_array *)System_Int32__Parse(v56->m_Items[v59], 0LL);
        if ( (_DWORD)v54 == level )
          break;
        LODWORD(v57) = v56->max_length;
        v58 = (__int64)++v59 < (int)v57;
      }
      while ( (__int64)v59 < (int)v57 );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v45,
                         (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1BD36B4(0LL, v61);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v58, 0LL);
  }
  v62 = *(_QWORD *)v34;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_49;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_49:
    v65 = sub_1C25438(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v34, *(_QWORD *)(v65 + 8));
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
  UnityEngine_Object_o *_70238200; // x0
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

  if ( (byte_4B365A7 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057416, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    sub_1BD3458(&UnityEngine_TextAsset_var, v4);
    sub_1BD3458(&UnityEngine_TextAsset_TypeInfo, v5);
    sub_1BD3458(&System_Type_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_9085/*"Maya/fbxevent_arthur"*/, v7);
    sub_1BD3458(&StringLiteral_25578/*"アルトリア"*/, v8);
    byte_4B365A7 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B31941 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4B31947 )
  {
    sub_1BD3458(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4B31947 = 1;
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
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50032256(
                                            mayaPrefab,
                                            v38,
                                            v42,
                                            (const MethodInfo_2FB6E80 *)Method_UnityEngine_Object_Instantiate_GameObject____77057416);
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
    sub_1BD36B4(transform, v20);
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
  _70238200 = UnityEngine_Resources__Load_70238200((System_String_o *)StringLiteral_9085/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _70238200
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(_70238200->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_TextAsset_c *)_70238200->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo )
      v36 = (UnityEngine_TextAsset_o *)_70238200;
    else
      v36 = 0LL;
  }
  else
  {
    v36 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_70238200, v21, v36, v33, 1, v34);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B365AC & 1) == 0 )
  {
    sub_1BD3458(&BattleChrManager___c_TypeInfo, v1);
    byte_4B365AC = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)BattleChrManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B365AD & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1BD3458(&BattleChrManager_TypeInfo, p);
    byte_4B365AD = 1;
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
    sub_1BD36B4(this, p);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}