void __fastcall BattleChrManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct BattleChrManager_StaticFields *static_fields; // x0

  if ( (byte_42E5377 & 1) == 0 )
  {
    sub_B5D5C4(&BattleChrManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_16346/*"_level"*/, v4, v5, v6);
    byte_42E5377 = 1;
  }
  BattleChrManager_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleChrManager_TypeInfo->static_fields;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16346/*"_level"*/;
  sub_B5D560(&static_fields->levelMarker);
}


void __fastcall BattleChrManager___ctor(BattleChrManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5376 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleChrManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E5376 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BattleChrManager___ctor__);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_o *text; // x21
  int rootTransform; // w8
  int v41; // w8
  BattleChrManager_o *v42; // x21
  int i; // w28
  System_String_o *v44; // x22
  System_Char_array *v45; // x23
  struct UnityEngine_Transform_o *v46; // x8
  BattleChrManager_o *v47; // x22
  System_String_o *monitor; // x23
  UnityEngine_Object_o *v49; // x25
  UnityEngine_Object_o *v50; // x24
  UnityEngine_Object_o *clip; // x23
  int v52; // w8
  int v53; // w23
  float v54; // s8
  unsigned int v55; // w9
  int v56; // w20
  System_String_o *v57; // x25
  System_String_o *v58; // x24
  float v59; // s9
  UnityEngine_AnimationEvent_o *v60; // x23
  System_String_o *v61; // x0
  UnityEngine_Object_o *v62; // x23
  int v63; // w8
  int v64; // w23
  float v65; // s8
  unsigned int v66; // w9
  int v67; // w20
  System_String_o *v68; // x25
  System_String_o *v69; // x24
  float v70; // s9
  UnityEngine_AnimationEvent_o *v71; // x23
  System_String_o *v72; // x0
  __int64 v73; // x0
  UnityEngine_GameObject_o *v74; // [xsp+0h] [xbp-70h]

  v7 = gameObject;
  if ( (byte_42E5375 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationEvent_TypeInfo, (_DWORD)gameObject, (_DWORD)data, servantName);
    sub_B5D5C4(&BattleChrManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&char___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_BattleChrControl___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleChrControl___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_319/*"#"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10043/*"OnAnimEvent"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v32, v33, v34);
    this = (BattleChrManager_o *)sub_B5D5C4(&StringLiteral_707/*","*/, v35, v36, v37);
    byte_42E5375 = 1;
  }
  if ( !v7 )
    goto LABEL_76;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleChrControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleChrManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    this = (BattleChrManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v7,
                                   (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_BattleChrControl___);
  if ( !data )
    goto LABEL_76;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  this = (BattleChrManager_o *)sub_B5D5DC(char___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_76;
  rootTransform = (int)this->fields.rootTransform;
  gameObject = (UnityEngine_GameObject_o *)this;
  if ( !rootTransform )
    goto LABEL_77;
  LOWORD(this->fields.mayaPrefab) = 13;
  if ( rootTransform == 1 )
    goto LABEL_77;
  WORD1(this->fields.mayaPrefab) = 10;
  if ( !text
    || (v74 = v7, (this = (BattleChrManager_o *)System_String__Split(text, (System_Char_array *)this, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B5D69C(this, gameObject);
  }
  v41 = (int)this->fields.rootTransform;
  v42 = this;
  if ( v41 >= 1 )
  {
    for ( i = 0; i < v41; ++i )
    {
      if ( i >= (unsigned int)v41 )
        goto LABEL_77;
      v44 = (System_String_o *)*((_QWORD *)&v42->fields.mayaPrefab + i);
      this = (BattleChrManager_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !StringLiteral_707/*","*/ )
        goto LABEL_76;
      v45 = (System_Char_array *)this;
      this = (BattleChrManager_o *)System_String__get_Chars((System_String_o *)StringLiteral_707/*","*/, 0, 0LL);
      if ( !v45 )
        goto LABEL_76;
      if ( !v45->max_length )
        goto LABEL_77;
      v45->m_Items[2] = (unsigned __int16)this;
      if ( !v44 )
        goto LABEL_76;
      this = (BattleChrManager_o *)System_String__Split(v44, v45, 0LL);
      if ( !this )
        goto LABEL_76;
      v46 = this->fields.rootTransform;
      v47 = this;
      if ( v46 )
      {
        if ( !(_DWORD)v46 )
          goto LABEL_77;
        this = (BattleChrManager_o *)this->fields.mayaPrefab;
        if ( !this )
          goto LABEL_76;
        this = (BattleChrManager_o *)System_String__StartsWith(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_319/*"#"*/,
                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 && SLODWORD(v47->fields.rootTransform) >= 6 )
        {
          this = (BattleChrManager_o *)System_Int32__Parse((System_String_o *)v47[1].klass, 0LL);
          if ( LODWORD(v47->fields.rootTransform) <= 2 )
            goto LABEL_77;
          if ( (_DWORD)this == level )
          {
            monitor = (System_String_o *)v47[1].monitor;
            v49 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v74,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            v50 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v74,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_76;
              this = (BattleChrManager_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v49, monitor, 0LL);
              if ( !this )
                goto LABEL_76;
              clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(
                                               (UnityEngine_AnimationState_o *)this,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(clip, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v52 = (int)v47->fields.rootTransform;
                if ( v52 >= 4 )
                {
                  v53 = 3;
                  while ( v53 < (unsigned int)v52 )
                  {
                    this = (BattleChrManager_o *)*((_QWORD *)&v47->fields.mayaPrefab + v53);
                    if ( !this )
                      goto LABEL_76;
                    if ( this->fields.m_CachedPtr )
                    {
                      v54 = System_Single__Parse((System_String_o *)this, 0LL);
                      this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleChrManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                      }
                      v55 = (unsigned int)v47->fields.rootTransform;
                      if ( v53 + 1 >= v55 )
                        goto LABEL_77;
                      v56 = v53 + 2;
                      if ( v53 + 2 >= v55 )
                        goto LABEL_77;
                      v57 = (System_String_o *)*((_QWORD *)&v47[1].klass + v53);
                      v58 = (System_String_o *)*((_QWORD *)&v47[1].monitor + v53);
                      v59 = *(float *)&this[4].fields.rootTransform->klass;
                      v60 = (UnityEngine_AnimationEvent_o *)sub_B5D694(UnityEngine_AnimationEvent_TypeInfo);
                      UnityEngine_AnimationEvent___ctor(v60, 0LL);
                      if ( !v60 )
                        goto LABEL_76;
                      UnityEngine_AnimationEvent__set_time(v60, v54 / v59, 0LL);
                      v61 = System_String__Concat_44580072(v57, (System_String_o *)StringLiteral_1245/*":"*/, v58, 0LL);
                      UnityEngine_AnimationEvent__set_stringParameter(v60, v61, 0LL);
                      UnityEngine_AnimationEvent__set_functionName(v60, (System_String_o *)StringLiteral_10043/*"OnAnimEvent"*/, 0LL);
                      v52 = (int)v47->fields.rootTransform;
                      v53 = v56 + 1;
                      if ( v56 + 1 < v52 )
                        continue;
                    }
                    goto LABEL_74;
                  }
                  goto LABEL_77;
                }
              }
            }
            else
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v50 )
                  goto LABEL_76;
                v62 = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                                (UnityEngine_Animation_o *)v50,
                                                monitor,
                                                0LL);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                this = (BattleChrManager_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v63 = (int)v47->fields.rootTransform;
                  if ( v63 >= 4 )
                  {
                    v64 = 3;
                    while ( v64 < (unsigned int)v63 )
                    {
                      this = (BattleChrManager_o *)*((_QWORD *)&v47->fields.mayaPrefab + v64);
                      if ( !this )
                        goto LABEL_76;
                      if ( this->fields.m_CachedPtr )
                      {
                        v65 = System_Single__Parse((System_String_o *)this, 0LL);
                        this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BattleChrManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
                          this = (BattleChrManager_o *)BattleChrManager_TypeInfo;
                        }
                        v66 = (unsigned int)v47->fields.rootTransform;
                        if ( v64 + 1 >= v66 )
                          break;
                        v67 = v64 + 2;
                        if ( v64 + 2 >= v66 )
                          break;
                        v68 = (System_String_o *)*((_QWORD *)&v47[1].klass + v64);
                        v69 = (System_String_o *)*((_QWORD *)&v47[1].monitor + v64);
                        v70 = *(float *)&this[4].fields.rootTransform->klass;
                        v71 = (UnityEngine_AnimationEvent_o *)sub_B5D694(UnityEngine_AnimationEvent_TypeInfo);
                        UnityEngine_AnimationEvent___ctor(v71, 0LL);
                        if ( !v71 )
                          goto LABEL_76;
                        UnityEngine_AnimationEvent__set_time(v71, v65 / v70, 0LL);
                        v72 = System_String__Concat_44580072(v68, (System_String_o *)StringLiteral_1245/*":"*/, v69, 0LL);
                        UnityEngine_AnimationEvent__set_stringParameter(v71, v72, 0LL);
                        UnityEngine_AnimationEvent__set_functionName(v71, (System_String_o *)StringLiteral_10043/*"OnAnimEvent"*/, 0LL);
                        v63 = (int)v47->fields.rootTransform;
                        v64 = v67 + 1;
                        if ( v67 + 1 < v63 )
                          continue;
                      }
                      goto LABEL_74;
                    }
LABEL_77:
                    v73 = sub_B5D6C8(this);
                    sub_B5D668(v73, 0LL);
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      v41 = (int)v42->fields.rootTransform;
    }
  }
}


void __fastcall BattleChrManager__Awake(BattleChrManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20

  if ( (byte_42E5372 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__, v5, v6, v7);
    byte_42E5372 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleChrManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, Instance, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall BattleChrManager__SetEvolutionLevel(
        BattleChrManager_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t level,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  BattleChrManager___c_c *v43; // x8
  struct BattleChrManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__6_0; // x21
  Il2CppObject *v46; // x22
  struct BattleChrManager___c_StaticFields *v47; // x0
  __int64 v48; // x3
  BattleChrManager_c *klass; // x8
  BattleChrManager_o *v50; // x19
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  __int64 v56; // x19
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x3
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  UnityEngine_Object_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_Object_o *v68; // x21
  __int64 v69; // x1
  System_String_o *name; // x22
  BattleChrManager_c *v71; // x0
  int32_t v72; // w22
  System_String_o *v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x22
  System_Char_array *v76; // x0
  System_String_array *v77; // x0
  __int64 v78; // x1
  System_String_array *v79; // x22
  __int64 v80; // x8
  unsigned __int64 v81; // x24
  bool v82; // w22
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v84; // x1
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0

  if ( (byte_42E5374 & 1) == 0 )
  {
    sub_B5D5C4(&BattleChrManager_TypeInfo, (_DWORD)gameObject, level, method);
    sub_B5D5C4(&char___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_Transform___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_Transform__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_Transform__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___, v21, v22, v23);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__, v36, v37, v38);
    this = (BattleChrManager_o *)sub_B5D5C4(&BattleChrManager___c_TypeInfo, v39, v40, v41);
    byte_42E5374 = 1;
  }
  if ( !gameObject )
    goto LABEL_68;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                               gameObject,
                                                               (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
  v43 = BattleChrManager___c_TypeInfo;
  if ( (BYTE3(BattleChrManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager___c_TypeInfo);
    v43 = BattleChrManager___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = BattleChrManager___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__6_0,
      v46,
      Method_BattleChrManager___c__SetEvolutionLevel_b__6_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_Transform__bool___ctor__);
    v47 = BattleChrManager___c_TypeInfo->static_fields;
    v47->__9__6_0 = (struct System_Func_Transform__bool__o *)_9__6_0;
    sub_B5D560(&v47->__9__6_0);
  }
  this = (BattleChrManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v42,
                                 (System_Func_TSource__bool__o *)_9__6_0,
                                 (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !this )
LABEL_68:
    sub_B5D69C(this, gameObject);
  klass = this->klass;
  v50 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v51;
      p_offset += 4;
      if ( v51 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v53 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v48);
  }
  v56 = (*(__int64 (__fastcall **)(BattleChrManager_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  if ( !v56 )
    sub_B5D69C(0LL, v54);
  while ( 1 )
  {
    v57 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_24;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_24:
      v60 = sub_AF54C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v63 = 0LL;
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v64 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_31;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_31:
      v65 = sub_AF54C0(v56, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v61);
    }
    v66 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v56, *(_QWORD *)(v65 + 8));
    v68 = v66;
    if ( !v66 )
      sub_B5D69C(0LL, v67);
    name = UnityEngine_Object__get_name(v66, 0LL);
    v71 = BattleChrManager_TypeInfo;
    if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleChrManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
    }
    if ( !name )
      sub_B5D69C(v71, v69);
    v72 = System_String__IndexOf_44650136(name, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
    v73 = UnityEngine_Object__get_name(v68, 0LL);
    if ( !v73 )
      sub_B5D69C(0LL, v74);
    v75 = System_String__Substring(v73, v72 + 6, 0LL);
    v76 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v76 )
      sub_B5D69C(0LL, 0LL);
    if ( !v76->max_length )
    {
      v90 = sub_B5D6C8(v76);
      sub_B5D668(v90, 0LL);
    }
    v76->m_Items[2] = 95;
    if ( !v75 )
      sub_B5D69C(v76, v76);
    v77 = System_String__Split(v75, v76, 0LL);
    v79 = v77;
    if ( !v77 )
      sub_B5D69C(0LL, v78);
    v80 = *(_QWORD *)&v77->max_length;
    if ( (int)v80 < 1 )
    {
LABEL_48:
      v82 = 0;
    }
    else
    {
      v81 = 0LL;
      while ( 1 )
      {
        if ( v81 >= (unsigned int)v80 )
        {
          v89 = sub_B5D6C8(v77);
          sub_B5D668(v89, 0LL);
        }
        v77 = (System_String_array *)System_Int32__Parse(v79->m_Items[v81], 0LL);
        if ( (_DWORD)v77 == level )
          break;
        LODWORD(v80) = v79->max_length;
        if ( (__int64)++v81 >= (int)v80 )
          goto LABEL_48;
      }
      v82 = 1;
    }
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v68,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    if ( !Component_WebViewObject )
      sub_B5D69C(0LL, v84);
    UnityEngine_Renderer__set_enabled(Component_WebViewObject, v82, 0LL);
  }
  v85 = *(_QWORD *)v56;
  if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
  {
    v86 = 0LL;
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
        goto LABEL_56;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_56:
    v88 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v61);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v56, *(_QWORD *)(v88 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleChrManager__Start(BattleChrManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  Il2CppObject *mayaPrefab; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  float v27; // s11
  float v28; // s12
  float v29; // s13
  float w; // s14
  UnityEngine_GameObject_o *transform; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x19
  UnityEngine_Transform_o *v34; // x20
  int v35; // s0
  BattleChrManager_o *v39; // x0
  const MethodInfo *v40; // x3
  intptr_t v41; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_35683776; // x0
  System_String_o *v44; // x3
  const MethodInfo *v45; // x5
  __int64 v46; // x10
  UnityEngine_TextAsset_o *v47; // x2
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v54; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E5373 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_TextAsset_var, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_TextAsset_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Type_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9098/*"Maya/fbxevent_arthur"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_24121/*"アルトリア"*/, v20, v21, v22);
    byte_42E5373 = 1;
  }
  mayaPrefab = (Il2CppObject *)this->fields.mayaPrefab;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v27 = identity.fields.x;
  v28 = identity.fields.y;
  v29 = identity.fields.z;
  w = identity.fields.w;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  v54.fields.x = v27;
  v54.fields.y = v28;
  v54.fields.z = v29;
  v54.fields.w = w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            mayaPrefab,
                                            v50,
                                            v54,
                                            (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
  if ( !transform )
    goto LABEL_21;
  v33 = transform;
  UnityEngine_GameObject__set_layer(transform, 11, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.rootTransform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
  if ( !transform )
    goto LABEL_21;
  v51.fields.x = -30.677;
  v51.fields.y = 0.35516;
  v51.fields.z = -1703.9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0LL);
  v34 = UnityEngine_GameObject__get_transform(v33, 0LL);
  *(UnityEngine_Quaternion_o *)&v35 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
  if ( !v34
    || (UnityEngine_Transform__set_localRotation(v34, *(UnityEngine_Quaternion_o *)&v35, 0LL),
        (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v33, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(transform, v32);
  }
  v52.fields.x = 20.0;
  v52.fields.y = 20.0;
  v52.fields.z = 20.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v52, 0LL);
  BattleChrManager__SetEvolutionLevel(v39, v33, 2, v40);
  v41 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v48.fields.value = v41;
  TypeFromHandle = System_Type__GetTypeFromHandle(v48, 0LL);
  _35683776 = UnityEngine_Resources__Load_35683776((System_String_o *)StringLiteral_9098/*"Maya/fbxevent_arthur"*/, TypeFromHandle, 0LL);
  if ( _35683776
    && (v46 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1),
        *(&_35683776->klass->_2.bitflags2 + 1) >= (unsigned int)v46) )
  {
    if ( (UnityEngine_TextAsset_c *)_35683776->klass->_2.typeHierarchy[v46 - 1] == UnityEngine_TextAsset_TypeInfo )
      v47 = (UnityEngine_TextAsset_o *)_35683776;
    else
      v47 = 0LL;
  }
  else
  {
    v47 = 0LL;
  }
  BattleChrManager__AttachAnimationEvents((BattleChrManager_o *)_35683776, v33, v47, v44, 1, v45);
}


void __fastcall BattleChrManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C01 & 1) == 0 )
  {
    sub_B5D5C4(&BattleChrManager___c_TypeInfo, v1, v2, v3);
    byte_42E7C01 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleChrManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleChrManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  System_String_o *v5; // x19

  if ( (byte_42E7C02 & 1) == 0 )
  {
    this = (BattleChrManager___c_o *)sub_B5D5C4(&BattleChrManager_TypeInfo, (_DWORD)p, (_DWORD)method, v3);
    byte_42E7C02 = 1;
  }
  if ( !p )
    goto LABEL_10;
  this = (BattleChrManager___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleChrManager___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v5 = (System_String_o *)this;
  if ( (BYTE3(BattleChrManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleChrManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleChrManager_TypeInfo);
  }
  if ( !v5 )
LABEL_10:
    sub_B5D69C(this, p);
  return System_String__Contains(v5, BattleChrManager_TypeInfo->static_fields->levelMarker, 0LL);
}