void __fastcall USFGOChrChangeShaderComp___ctor(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall USFGOChrChangeShaderComp__ChangeShaders(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
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
  System_Collections_Generic_List_GameObject__o *Targets; // x0
  System_Collections_Generic_List_object__o *v17; // x21
  System_Collections_Generic_HashSet_T__o *v18; // x20
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x4
  System_Collections_Generic_List_object__o *items; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *shaderPairsPreset; // x21
  const MethodInfo *v24; // x3
  struct USFGOChrChangeShaderCompPreset_o *v25; // x8
  const MethodInfo *v26; // x3
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x22
  __int64 v28; // x8
  unsigned __int64 v29; // x23
  USFGOChrChangeShaderComp_ShaderPair_o *v30; // x21
  System_Collections_Generic_Dictionary_Material__Shader__o **p_originalShaders; // x19
  USFGOChrChangeShaderComp_ShaderPair_o *v32; // x9
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4A4FD72 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__,
      v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Material___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Material__get_Count__, v10);
    sub_1B863B8(&System_Collections_Generic_HashSet_Material__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    byte_4A4FD72 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v34, 0, sizeof(v34));
  Targets = USFGOChrTargetUtils__GetTargets(this->fields.targetType, 1, v2);
  if ( !Targets )
    return;
  v17 = (System_Collections_Generic_List_object__o *)Targets;
  if ( Targets->fields._size < 1 )
    return;
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_Material__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v18,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_Material___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v17,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v33;
        ;
        USFGOChrChangeShaderComp__CollectRendererMaterials(
          (USFGOChrChangeShaderComp_o *)v19,
          (UnityEngine_GameObject_o *)i.fields._current,
          this->fields.isIncludeInactive,
          (System_Collections_Generic_HashSet_Material__o *)v18,
          v20) )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v19 )
      break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( !v18 )
    goto LABEL_32;
  if ( v18->fields._count <= 0 )
    return;
  shaderPairsPreset = (UnityEngine_Object_o *)this->fields.shaderPairsPreset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  items = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(shaderPairsPreset, 0LL, 0LL);
  if ( ((unsigned __int8)items & 1) == 0 )
    goto LABEL_20;
  v25 = this->fields.shaderPairsPreset;
  if ( !v25 || (items = (System_Collections_Generic_List_object__o *)v25->fields.items) == 0LL )
LABEL_32:
    sub_1B86614(items, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    items,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
  v34 = v33;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
  {
    if ( v34.fields._current )
      USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
        (USFGOChrChangeShaderComp_ShaderPair_o *)v34.fields._current,
        (System_Collections_Generic_HashSet_Material__o *)v18,
        &this->fields.originalShaders,
        v26);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
LABEL_20:
  shaderPairs = this->fields.shaderPairs;
  if ( shaderPairs )
  {
    v28 = *(_QWORD *)&shaderPairs->max_length;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      v30 = 0LL;
      p_originalShaders = &this->fields.originalShaders;
      do
      {
        if ( v29 >= (unsigned int)v28 )
          sub_1B8661C(items, v22);
        v32 = shaderPairs->m_Items[v29];
        if ( v32 )
          v30 = shaderPairs->m_Items[v29];
        if ( v32 )
        {
          if ( !v30 )
            goto LABEL_32;
          USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
            v30,
            (System_Collections_Generic_HashSet_Material__o *)v18,
            p_originalShaders,
            v24);
          LODWORD(v28) = shaderPairs->max_length;
        }
        ++v29;
      }
      while ( (__int64)v29 < (int)v28 );
    }
  }
}


void __fastcall USFGOChrChangeShaderComp__CheckAssert(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *shaderPairsPreset; // x20
  System_Collections_Generic_List_object__o *items; // x0
  __int64 v9; // x1
  struct USFGOChrChangeShaderCompPreset_o *v10; // x8
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x8
  int max_length; // w8
  int i; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4FD74 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__,
      method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__, v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A4FD74 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  shaderPairsPreset = (UnityEngine_Object_o *)this->fields.shaderPairsPreset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  items = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(shaderPairsPreset, 0LL, 0LL);
  if ( ((unsigned __int8)items & 1) != 0 )
  {
    v10 = this->fields.shaderPairsPreset;
    if ( !v10 || (items = (System_Collections_Generic_List_object__o *)v10->fields.items) == 0LL )
      sub_1B86614(items, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      items,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
  }
  shaderPairs = this->fields.shaderPairs;
  if ( shaderPairs )
  {
    max_length = shaderPairs->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B8661C(items, v9);
      }
    }
  }
}


void __fastcall USFGOChrChangeShaderComp__CollectRendererMaterials(
        USFGOChrChangeShaderComp_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isIncludeInactive,
        System_Collections_Generic_HashSet_Material__o *result,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  int m_CancellationTokenSource; // w8
  USFGOChrChangeShaderComp_o *v11; // x20
  unsigned int v12; // w23
  struct System_Threading_CancellationTokenSource_o *v13; // x8
  USFGOChrChangeShaderComp_o *v14; // x21
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x22

  if ( (byte_4A4FD75 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153824, gameObject);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Material__Add__, v8);
    this = (USFGOChrChangeShaderComp_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4FD75 = 1;
  }
  if ( !gameObject )
LABEL_22:
    sub_1B86614(this, gameObject);
  this = (USFGOChrChangeShaderComp_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         gameObject,
                                         isIncludeInactive,
                                         (const MethodInfo_2FC1A90 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153824);
  if ( this )
  {
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v11 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= m_CancellationTokenSource )
          goto LABEL_21;
        this = (USFGOChrChangeShaderComp_o *)*((_QWORD *)&v11->fields.targetType + (int)v12);
        if ( !this )
          goto LABEL_22;
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
        if ( !this )
          goto LABEL_22;
        v13 = this->fields.m_CancellationTokenSource;
        v14 = this;
        if ( (int)v13 >= 1 )
          break;
LABEL_19:
        m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
        if ( (int)++v12 >= m_CancellationTokenSource )
          return;
      }
      v15 = 0LL;
      while ( v15 < (unsigned int)v13 )
      {
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14->fields.targetType + v15);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !result )
            goto LABEL_22;
          this = (USFGOChrChangeShaderComp_o *)System_Collections_Generic_HashSet_object___Add(
                                                 (System_Collections_Generic_HashSet_T__o *)result,
                                                 (Il2CppObject *)v16,
                                                 (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_Material__Add__);
        }
        LODWORD(v13) = v14->fields.m_CancellationTokenSource;
        if ( (__int64)++v15 >= (int)v13 )
          goto LABEL_19;
      }
LABEL_21:
      sub_1B8661C(this, gameObject);
    }
  }
}


void __fastcall USFGOChrChangeShaderComp__RestoreShaders(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o **p_originalShaders; // x19
  struct System_Collections_Generic_Dictionary_Material__Shader__o *originalShaders; // t1
  __int64 v13; // x1
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4A4FD73 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Key__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Value__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4FD73 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  originalShaders = this->fields.originalShaders;
  p_originalShaders = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.originalShaders;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)originalShaders;
  if ( originalShaders
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         v10,
         (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__) >= 1 )
  {
    if ( !*p_originalShaders )
      sub_1B86614(0LL, v13);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v20,
      *p_originalShaders,
      (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v20,
              (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__) )
    {
      key = v20.fields._current.fields.key;
      value = v20.fields._current.fields.value;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)key, 0LL, 0LL);
      if ( v16 )
      {
        if ( !key )
          sub_1B86614(v16, v17);
        UnityEngine_Material__set_shader((UnityEngine_Material_o *)key, (UnityEngine_Shader_o *)value, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v20,
      (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__);
    *p_originalShaders = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_originalShaders, 0, v18, v19);
  }
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderProp___ctor(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        System_String_o *targetShaderName,
        USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetShaderName = targetShaderName;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)targetShaderName, v7, v8);
  this->fields.changeShaderPropValues = changeShaderPropValues;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.changeShaderPropValues, (int32_t)changeShaderPropValues, v9, v10);
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderProp__CheckAssert(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        const MethodInfo *method)
{
  struct USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues; // x8
  int max_length; // w8
  int v4; // w9

  changeShaderPropValues = this->fields.changeShaderPropValues;
  if ( !changeShaderPropValues )
    sub_1B86614(this, method);
  max_length = changeShaderPropValues->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ChangeShaderProp_o *v4; // x20
  System_String_o *name; // x2
  const MethodInfo *v6; // x3

  if ( !material
    || (v4 = this,
        (this = (USFGOChrChangeShaderComp_ChangeShaderProp_o *)UnityEngine_Material__get_shader(material, 0LL)) == 0LL) )
  {
    sub_1B86614(this, material);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_42174600(v4, material, name, v6);
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_42174600(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        UnityEngine_Material_o *material,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ChangeShaderPropValue_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues; // x20
  int max_length; // w8
  unsigned int v11; // w21

  v6 = (USFGOChrChangeShaderComp_ChangeShaderPropValue_o *)System_String__op_Equality(
                                                             shaderName,
                                                             this->fields.targetShaderName,
                                                             0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    changeShaderPropValues = this->fields.changeShaderPropValues;
    if ( !changeShaderPropValues )
      goto LABEL_10;
    max_length = changeShaderPropValues->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1B8661C(v6, v7);
        v6 = changeShaderPropValues->m_Items[v11];
        if ( !v6 )
          break;
        USFGOChrChangeShaderComp_ChangeShaderPropValue__SetPropValue(v6, material, v8);
        max_length = changeShaderPropValues->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_10:
      sub_1B86614(v6, v7);
    }
  }
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderPropValue___ctor(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        System_String_o *propName,
        int32_t propType,
        System_String_o *propValue,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ChangeShaderPropValue_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.propName = propName;
  sub_1B8635C((CGThumbnailListItem_o *)&v8->fields, (int32_t)propName, v9, v10);
  v8->fields.propValue = propValue;
  v8 = (USFGOChrChangeShaderComp_ChangeShaderPropValue_o *)((char *)v8 + 32);
  v8[-1].fields._propNameID = propType;
  sub_1B8635C((CGThumbnailListItem_o *)v8, (int32_t)propValue, v11, v12);
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderPropValue__CheckAssert(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall USFGOChrChangeShaderComp_ChangeShaderPropValue__SetPropValue(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t propType; // w8
  int32_t v6; // w0
  System_String_o *v7; // x8
  int32_t v8; // w20
  __int64 v9; // x0
  __int64 v10; // x1
  float v11; // s0
  int32_t v12; // w0
  System_String_o *propValue; // x8
  int32_t v14; // w20

  propType = this->fields.propType;
  if ( propType == 1 )
  {
    v12 = USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(this, (const MethodInfo *)material);
    propValue = this->fields.propValue;
    v14 = v12;
    v9 = System_Int32__Parse(propValue, 0LL);
    if ( !material )
      goto LABEL_8;
    UnityEngine_Material__SetInt_69225648(material, v14, v9, 0LL);
  }
  else if ( !propType )
  {
    v6 = USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(this, (const MethodInfo *)material);
    v7 = this->fields.propValue;
    v8 = v6;
    v11 = System_Single__Parse(v7, 0LL);
    if ( material )
    {
      UnityEngine_Material__SetFloat_69225860(material, v8, v11, 0LL);
      return;
    }
LABEL_8:
    sub_1B86614(v9, v10);
  }
}


int32_t __fastcall USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields._propNameID;
  if ( !result )
  {
    if ( System_String__IsNullOrEmpty(this->fields.propName, 0LL) )
    {
      return this->fields._propNameID;
    }
    else
    {
      result = UnityEngine_Shader__PropertyToID(this->fields.propName, 0LL);
      this->fields._propNameID = result;
    }
  }
  return result;
}


void __fastcall USFGOChrChangeShaderComp_ShaderPair___ctor(
        USFGOChrChangeShaderComp_ShaderPair_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
        USFGOChrChangeShaderComp_ShaderPair_o *this,
        System_Collections_Generic_HashSet_Material__o *targetMaterials,
        System_Collections_Generic_Dictionary_Material__Shader__o **originalShaders,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ShaderPair_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  USFGOChrChangeShaderComp_ChangeShaderProp_o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *targetShaderNames; // x23
  UnityEngine_Object_o *shader; // x0
  __int64 v21; // x1
  Il2CppObject *name; // x1
  System_Collections_Generic_Dictionary_Material__Shader__o *v23; // x0
  System_Collections_Generic_Dictionary_object__object__o *v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Material__Shader__o *v28; // x23
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  struct USFGOChrChangeShaderComp_ChangeShaderProp_array *changeShaderProps; // x27
  __int64 v38; // x8
  unsigned __int64 v39; // x28
  USFGOChrChangeShaderComp_ChangeShaderProp_o *v40; // x9
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v42; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4A4FD76 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Material__Shader__Add__, targetMaterials);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_Dictionary_Material__Shader__TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_string___, v10);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_Material__get_Current__, v13);
    this = (USFGOChrChangeShaderComp_ShaderPair_o *)sub_1B863B8(
                                                      &Method_System_Collections_Generic_HashSet_Material__GetEnumerator__,
                                                      v14);
    byte_4A4FD76 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !targetMaterials )
    sub_1B86614(this, targetMaterials);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v41,
    (System_Collections_Generic_HashSet_T__o *)targetMaterials,
    (const MethodInfo_34BE79C *)Method_System_Collections_Generic_HashSet_Material__GetEnumerator__);
  v15 = 0LL;
  v42 = v41;
  while ( 1 )
  {
    v16 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_33980C4 *)Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__);
    if ( !v16 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1B86614(v16, v17);
    targetShaderNames = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.targetShaderNames;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                       (UnityEngine_Material_o *)v42.fields._current,
                                       0LL);
    if ( !shader )
      sub_1B86614(0LL, v21);
    name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0LL);
    if ( System_Linq_Enumerable__Contains_object_(
           targetShaderNames,
           name,
           (const MethodInfo_2F887E4 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      v23 = *originalShaders;
      if ( !*originalShaders )
      {
        v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_Material__Shader__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v24,
          (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__);
        *originalShaders = (System_Collections_Generic_Dictionary_Material__Shader__o *)v24;
        sub_1B8635C((CGThumbnailListItem_o *)originalShaders, (int32_t)v24, v25, v26);
        v23 = *originalShaders;
        if ( !*originalShaders )
          sub_1B86614(0LL, v27);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v23,
              current,
              (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__) )
      {
        v28 = *originalShaders;
        v29 = (Il2CppObject *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0LL);
        if ( !v28 )
          sub_1B86614(v29, v30);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v28,
          current,
          v29,
          (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_Material__Shader__Add__);
      }
      v31 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0LL);
      if ( !v31 )
        sub_1B86614(0LL, v32);
      v33 = UnityEngine_Object__get_name(v31, 0LL);
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)current, v6->fields.changeShader, 0LL);
      changeShaderProps = v6->fields.changeShaderProps;
      if ( changeShaderProps )
      {
        v38 = *(_QWORD *)&changeShaderProps->max_length;
        if ( (int)v38 >= 1 )
        {
          v39 = 0LL;
          do
          {
            if ( v39 >= (unsigned int)v38 )
              sub_1B8661C(v34, v35);
            v40 = changeShaderProps->m_Items[v39];
            if ( v40 )
              v15 = changeShaderProps->m_Items[v39];
            if ( v40 )
            {
              if ( !v15 )
                sub_1B86614(v34, v35);
              USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_42174600(
                v15,
                (UnityEngine_Material_o *)current,
                v33,
                v36);
              LODWORD(v38) = changeShaderProps->max_length;
            }
            ++v39;
          }
          while ( (__int64)v39 < (int)v38 );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_33980C0 *)Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__);
}


void __fastcall USFGOChrChangeShaderComp_ShaderPair__CheckAssert(
        USFGOChrChangeShaderComp_ShaderPair_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetShaderNames; // x8
  int max_length; // w8
  int v4; // w9

  targetShaderNames = this->fields.targetShaderNames;
  if ( !targetShaderNames )
    sub_1B86614(this, method);
  max_length = targetShaderNames->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}