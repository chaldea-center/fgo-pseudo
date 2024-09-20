void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct BattleChrManager_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4A5A5A6 & 1) == 0 )
  {
    sub_1B885B0(&BattleChrManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16551/*"_level"*/);
    byte_4A5A5A6 = 1;
  }
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16551/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16551/*"_level"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->levelMarker, v4, v1, v2);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A5A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
    byte_4A5A5A5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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

  v7 = gameObject;
  if ( (byte_4A5A5A4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationEvent_TypeInfo);
    sub_1B885B0(&BattleChrManager_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_401/*"#"*/);
    sub_1B885B0(&StringLiteral_9830/*"OnAnimEvent"*/);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    this = (BattleChrManager_o *)sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5A5A4 = 1;
  }
  if ( !v7 )
    goto LABEL_67;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                   v7,
                                   (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_67;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_1B88658(char___TypeInfo, 2LL);
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
    || (this = (BattleChrManager_o *)System_String__Split_61729188(text, (System_Char_array *)this, 0LL)) == 0LL )
  {
LABEL_67:
    sub_1B8880C(this, gameObject);
  }
  v11 = (int)this->fields.m_CancellationTokenSource;
  v12 = this;
  if ( v11 >= 1 )
  {
    for ( i = 0; i < v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        goto LABEL_68;
      this = (BattleChrManager_o *)StringLiteral_868/*","*/;
      if ( !StringLiteral_868/*","*/ )
        goto LABEL_67;
      v14 = (System_String_o *)*((_QWORD *)&v12->fields.rootTransform + i);
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_868/*","*/, 0, 0LL);
      if ( !v14 )
        goto LABEL_67;
      this = (BattleChrManager_o *)System_String__Split(v14, (uint16_t)this, 0, 0LL);
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
                                       (System_String_o *)StringLiteral_401/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v16->fields.m_CancellationTokenSource) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v16->fields.mayaPrefab, 0LL);
          if ( LODWORD(v16->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_68;
          if ( (_DWORD)this == level )
          {
            klass = (System_String_o *)v16[1].klass;
            v18 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v19 = UnityEngine_GameObject__GetComponent_object_(
                    v7,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_67;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, klass, 0LL);
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
                v21 = (int)v16->fields.m_CancellationTokenSource;
                if ( v21 >= 4 )
                {
                  v22 = 3;
                  while ( v22 < (unsigned int)v21 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v16->fields.rootTransform + v22);
                    if ( !this )
                      goto LABEL_67;
                    if ( this->fields.m_CachedPtr )
                    {
                      v23 = System_Single__Parse((System_String_o *)this, 0LL);
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
                      v30 = (UnityEngine_AnimationEvent_o *)sub_1B887FC(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v30, 0LL);
                      if ( !v30 )
                        goto LABEL_67;
                      UnityEngine_AnimationEvent__set_time(v30, v24 / v29, 0LL);
                      v31 = System_String__Concat_61718292(v27, (System_String_o *)StringLiteral_1544/*":"*/, v28, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v30, v31, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v30, (System_String_o *)StringLiteral_9830/*"OnAnimEvent"*/, 0LL);
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
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_67;
                v32 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v19, klass, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
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
                        v37 = (unsigned int)v16->fields.m_CancellationTokenSource;
                        if ( v34 + 1 >= v37 )
                          break;
                        v38 = v34 + 2;
                        if ( v34 + 2 >= v37 )
                          break;
                        v39 = (System_String_o *)*((_QWORD *)&v16->fields.mayaPrefab + v34);
                        v40 = (System_String_o *)*((_QWORD *)&v16[1].klass + v34);
                        v41 = *(float *)&this[3].fields.mayaPrefab->klass;
                        v42 = (UnityEngine_AnimationEvent_o *)sub_1B887FC(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v42, 0LL);
                        if ( !v42 )
                          goto LABEL_67;
                        UnityEngine_AnimationEvent__set_time(v42, v36 / v41, 0LL);
                        v43 = System_String__Concat_61718292(v39, (System_String_o *)StringLiteral_1544/*":"*/, v40, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v42, v43, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v42, (System_String_o *)StringLiteral_9830/*"OnAnimEvent"*/, 0LL);
                        v33 = (int)v16->fields.m_CancellationTokenSource;
                        v34 = v38 + 1;
                        if ( v38 + 1 < v33 )
                          continue;
                      }
                      goto LABEL_65;
                    }
LABEL_68:
                    sub_1B88814(this, gameObject);
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


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20

  if ( (byte_4A5A5A1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
    byte_4A5A5A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, (UnityEngine_Object_o *)Instance, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  BattleChrManager___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v10; // x22
  struct BattleChrManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
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
  System_String_array *v42; // x22
  __int64 v43; // x8
  bool v44; // w28
  unsigned __int64 v45; // x29
  Il2CppObject *Component_object; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0

  if ( (byte_4A5A5A3 & 1) == 0 )
  {
    sub_1B885B0(&BattleChrManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1B885B0(&System_Func_Transform__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__);
    this = (BattleChrManager_o *)sub_1B885B0(&BattleChrManager___c_TypeInfo);
    byte_4A5A5A3 = 1;
  }
  if ( !gameObject )
    goto LABEL_59;
  ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                            gameObject,
                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v7 = BattleChrManager___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__49085148;
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
    _9__6_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__6_0, v10, Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, 0LL);
    static_fields = BattleChrManager___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v12, v13);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_object_(
                                 v8,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_59:
    sub_1B8880C(this, gameObject);
  klass = this->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_15;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v18 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1B8880C(0LL, v19);
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
      v24 = sub_1BDA590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v28 = sub_1BDA590(v20, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v29 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1B8880C(0LL, v30);
    name = UnityEngine_Object__get_name(v29, 0LL);
    v34 = BattleChrManager_TypeInfo;
    if ( !BattleChrManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    if ( !name )
      sub_1B8880C(v34, v32);
    v35 = System_String__IndexOf_61738608(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v36 = UnityEngine_Object__get_name(v31, 0LL);
    if ( !v36 )
      sub_1B8880C(0LL, v37);
    v38 = System_String__Substring(v36, v35 + 6, 0LL);
    if ( !v38 )
      sub_1B8880C(0LL, v39);
    v40 = System_String__Split(v38, 0x5Fu, 0, 0LL);
    v42 = v40;
    if ( !v40 )
      sub_1B8880C(0LL, v41);
    v43 = *(_QWORD *)&v40->max_length;
    v44 = (int)v43 > 0;
    if ( (int)v43 >= 1 )
    {
      v45 = 0LL;
      do
      {
        if ( v45 >= (unsigned int)v43 )
          sub_1B88814(v40, v41);
        v40 = (System_String_array *)System_Int32__Parse(v42->m_Items[v45], 0LL);
        if ( (_DWORD)v40 == level )
          break;
        LODWORD(v43) = v42->max_length;
        v44 = (__int64)++v45 < (int)v43;
      }
      while ( (__int64)v45 < (int)v43 );
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v31,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_object )
      sub_1B8880C(0LL, v47);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, v44, 0LL);
  }
  v48 = *(_QWORD *)v20;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_49;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_49:
    v51 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v51)(v20, *(_QWORD *)(v51 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
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
  int v18; // s0
  BattleChrManager_o *v22; // x0
  const MethodInfo *v23; // x3
  intptr_t v24; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_69419308; // x0
  System_String_o *v27; // x3
  const MethodInfo *v28; // x5
  __int64 methodPtr_low; // x10
  UnityEngine_TextAsset_o *v30; // x2
  System_RuntimeTypeHandle_o v31; // 0:w0.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5A5A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76172016);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_TextAsset_var);
    sub_1B885B0(&UnityEngine_TextAsset_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_8942/*"Maya/fbxevent_arthur"*/);
    sub_1B885B0(&StringLiteral_25285/*"アルトリア"*/);
    byte_4A5A5A2 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  v8 = UnityEngine_Quaternion_TypeInfo->static_fields;
  v10 = v8->identityQuaternion.fields.x;
  v9 = v8->identityQuaternion.fields.y;
  v12 = v8->identityQuaternion.fields.z;
  w = v8->identityQuaternion.fields.w;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v36.fields.x = v10;
  v36.fields.y = v9;
  v36.fields.z = v12;
  v36.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49298104(
                                            mayaPrefab,
                                            v32,
                                            v36,
                                            (const MethodInfo_2F03AB8 *)Method_UnityEngine_Object_Instantiate_GameObject____76172016);
  if ( !transform )
    goto LABEL_23;
  v15 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !transform )
    goto LABEL_23;
  v33.fields.x = -30.677;
  v33.fields.y = 0.35516;
  v33.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v33, 0LL);
  v16 = UnityEngine_GameObject__get_transform(v15, 0LL);
  v34.fields.y = 4.7124;
  v17 = v16;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__Internal_FromEulerRad(v34, 0LL);
  if ( !v17
    || (UnityEngine_Transform__set_localRotation(v17, *(UnityEngine_Quaternion_o *)&v18, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(transform, v14);
  }
  v35.fields.x = 20.0;
  v35.fields.y = 20.0;
  v35.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v35, 0LL);
  BattleChrManager__SetEvolutionLevel(v22, v15, 2, v23);
  v24 = (int)UnityEngine_TextAsset_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v31.fields.value = v24;
  TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
  _69419308 = UnityEngine_Resources__Load_69419308((System_String_o *)StringLiteral_8942/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _69419308
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(_69419308->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_TextAsset_c *)_69419308->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo )
      v30 = (UnityEngine_TextAsset_o *)_69419308;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_69419308, v15, v30, v27, 1, v28);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A5A7 & 1) == 0 )
  {
    sub_1B885B0(&BattleChrManager___c_TypeInfo);
    byte_4A5A5A7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleChrManager___c_TypeInfo->static_fields->__9 = (struct BattleChrManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleChrManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5A5A8 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_1B885B0(&BattleChrManager_TypeInfo);
    byte_4A5A5A8 = 1;
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
    sub_1B8880C(this, p);
  return System_String__Contains((System_String_o *)v4, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}