void USFGOChrChangeShaderComp___ctor(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void USFGOChrChangeShaderComp__ChangeShaders(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__o *Targets; // x0
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_Generic_HashSet_T__o *v5; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *items; // x0
  UnityEngine_Object_o *shaderPairsPreset; // x21
  struct USFGOChrChangeShaderCompPreset_o *v10; // x8
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x23
  System_Collections_Generic_Dictionary_Material__Shader__o **p_originalShaders; // x19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4C44969 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Material___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Material__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_Material__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44969 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v16, 0, sizeof(v16));
  Targets = USFGOChrTargetUtils__GetTargets(this->fields.targetType, 1, 0);
  if ( Targets )
  {
    v4 = (System_Collections_Generic_List_object__o *)Targets;
    if ( Targets->fields._size >= 1 )
    {
      v5 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_Material__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v5,
        (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_Material___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        v4,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v15;
            ;
            USFGOChrChangeShaderComp__CollectRendererMaterials(
              (USFGOChrChangeShaderComp_o *)v6,
              (UnityEngine_GameObject_o *)i.fields._current,
              this->fields.isIncludeInactive,
              (System_Collections_Generic_HashSet_Material__o *)v5,
              v7) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v6 )
          break;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v5 )
      {
        if ( v5->fields._count <= 0 )
          return;
        shaderPairsPreset = (UnityEngine_Object_o *)this->fields.shaderPairsPreset;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        items = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(shaderPairsPreset, 0, 0);
        if ( ((unsigned __int8)items & 1) == 0 )
          goto LABEL_20;
        v10 = this->fields.shaderPairsPreset;
        if ( v10 )
        {
          items = (System_Collections_Generic_List_object__o *)v10->fields.items;
          if ( items )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v15,
              items,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
            v16 = v15;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v16,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
            {
              if ( v16.fields._current )
                USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
                  (USFGOChrChangeShaderComp_ShaderPair_o *)v16.fields._current,
                  (System_Collections_Generic_HashSet_Material__o *)v5,
                  &this->fields.originalShaders,
                  0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v16,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
LABEL_20:
            shaderPairs = this->fields.shaderPairs;
            if ( shaderPairs )
            {
              max_length = shaderPairs->max_length;
              if ( (int)max_length >= 1 )
              {
                v13 = 0;
                p_originalShaders = &this->fields.originalShaders;
                do
                {
                  if ( v13 >= (unsigned int)max_length )
                    sub_1C372BC(items);
                  if ( shaderPairs->m_Items[v13] )
                  {
                    USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
                      shaderPairs->m_Items[v13],
                      (System_Collections_Generic_HashSet_Material__o *)v5,
                      p_originalShaders,
                      0);
                    LODWORD(max_length) = shaderPairs->max_length;
                  }
                  ++v13;
                }
                while ( (__int64)v13 < (int)max_length );
              }
            }
            return;
          }
        }
      }
      sub_1C372B4(items);
    }
  }
}


void USFGOChrChangeShaderComp__CheckAssert(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shaderPairsPreset; // x20
  System_Collections_Generic_List_object__o *items; // x0
  struct USFGOChrChangeShaderCompPreset_o *v5; // x8
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x8
  int max_length; // w8
  int i; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4496B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4496B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  shaderPairsPreset = (UnityEngine_Object_o *)this->fields.shaderPairsPreset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  items = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(shaderPairsPreset, 0, 0);
  if ( ((unsigned __int8)items & 1) != 0 )
  {
    v5 = this->fields.shaderPairsPreset;
    if ( !v5 || (items = (System_Collections_Generic_List_object__o *)v5->fields.items) == 0 )
      sub_1C372B4(items);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      items,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
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
          sub_1C372BC(items);
      }
    }
  }
}


void USFGOChrChangeShaderComp__CollectRendererMaterials(
        USFGOChrChangeShaderComp_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isIncludeInactive,
        System_Collections_Generic_HashSet_Material__o *result,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  USFGOChrChangeShaderComp_o *v9; // x20
  unsigned int v10; // w23
  struct System_Threading_CancellationTokenSource_o *v11; // x8
  USFGOChrChangeShaderComp_o *v12; // x21
  unsigned __int64 v13; // x26
  UnityEngine_Object_o *v14; // x22

  if ( (byte_4C4496C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78176512);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Material__Add__);
    this = (USFGOChrChangeShaderComp_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4496C = 1;
  }
  if ( !gameObject )
LABEL_22:
    sub_1C372B4(this);
  this = (USFGOChrChangeShaderComp_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         gameObject,
                                         isIncludeInactive,
                                         (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78176512);
  if ( this )
  {
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v9 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= m_CancellationTokenSource )
          goto LABEL_21;
        this = (USFGOChrChangeShaderComp_o *)*((_QWORD *)&v9->fields.targetType + (int)v10);
        if ( !this )
          goto LABEL_22;
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0);
        if ( !this )
          goto LABEL_22;
        v11 = this->fields.m_CancellationTokenSource;
        v12 = this;
        if ( (int)v11 >= 1 )
          break;
LABEL_19:
        m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource;
        if ( (int)++v10 >= m_CancellationTokenSource )
          return;
      }
      v13 = 0;
      while ( v13 < (unsigned int)v11 )
      {
        v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields.targetType + v13);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !result )
            goto LABEL_22;
          this = (USFGOChrChangeShaderComp_o *)System_Collections_Generic_HashSet_object___Add(
                                                 (System_Collections_Generic_HashSet_T__o *)result,
                                                 (Il2CppObject *)v14,
                                                 (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_Material__Add__);
        }
        LODWORD(v11) = v12->fields.m_CancellationTokenSource;
        if ( (__int64)++v13 >= (int)v11 )
          goto LABEL_19;
      }
LABEL_21:
      sub_1C372BC(this);
    }
  }
}


void USFGOChrChangeShaderComp__RestoreShaders(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o **p_originalShaders; // x19
  struct System_Collections_Generic_Dictionary_Material__Shader__o *originalShaders; // t1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C4496A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4496A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  originalShaders = this->fields.originalShaders;
  p_originalShaders = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.originalShaders;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)originalShaders;
  if ( originalShaders
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         v3,
         (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__) >= 1 )
  {
    if ( !*p_originalShaders )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v10,
      *p_originalShaders,
      (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current.fields.key, 0, 0);
      if ( v7 )
      {
        if ( !current.fields.key )
          sub_1C372B4(v7);
        UnityEngine_Material__set_shader(
          (UnityEngine_Material_o *)current.fields.key,
          (UnityEngine_Shader_o *)current.fields.value,
          0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__);
    *p_originalShaders = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_originalShaders, 0, v8, v9);
  }
}


void USFGOChrChangeShaderComp_ChangeShaderProp___ctor(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        System_String_o *targetShaderName,
        USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetShaderName = targetShaderName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)targetShaderName, v7, v8);
  this->fields.changeShaderPropValues = changeShaderPropValues;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.changeShaderPropValues, (int32_t)changeShaderPropValues, v9, v10);
}


void USFGOChrChangeShaderComp_ChangeShaderProp__CheckAssert(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        const MethodInfo *method)
{
  struct USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues; // x8
  int max_length; // w8
  int v4; // w9

  changeShaderPropValues = this->fields.changeShaderPropValues;
  if ( !changeShaderPropValues )
    sub_1C372B4(this);
  max_length = changeShaderPropValues->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ChangeShaderProp_o *v4; // x20
  System_String_o *name; // x2
  const MethodInfo *v6; // x3

  if ( !material
    || (v4 = this,
        (this = (USFGOChrChangeShaderComp_ChangeShaderProp_o *)UnityEngine_Material__get_shader(material, 0)) == 0) )
  {
    sub_1C372B4(this);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_44129256(v4, material, name, v6);
}


void USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_44129256(
        USFGOChrChangeShaderComp_ChangeShaderProp_o *this,
        UnityEngine_Material_o *material,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ChangeShaderPropValue_o *v6; // x0
  const MethodInfo *v7; // x2
  struct USFGOChrChangeShaderComp_ChangeShaderPropValue_array *changeShaderPropValues; // x20
  int max_length; // w8
  unsigned int v10; // w21

  v6 = (USFGOChrChangeShaderComp_ChangeShaderPropValue_o *)System_String__op_Equality(
                                                             shaderName,
                                                             this->fields.targetShaderName,
                                                             0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    changeShaderPropValues = this->fields.changeShaderPropValues;
    if ( !changeShaderPropValues )
      goto LABEL_10;
    max_length = changeShaderPropValues->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_1C372BC(v6);
        v6 = changeShaderPropValues->m_Items[v10];
        if ( !v6 )
          break;
        USFGOChrChangeShaderComp_ChangeShaderPropValue__SetPropValue(v6, material, v7);
        max_length = changeShaderPropValues->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_10:
      sub_1C372B4(v6);
    }
  }
}


void USFGOChrChangeShaderComp_ChangeShaderPropValue___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.propName = propName;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields, (int32_t)propName, v9, v10);
  v8->fields.propValue = propValue;
  v8 = (USFGOChrChangeShaderComp_ChangeShaderPropValue_o *)((char *)v8 + 32);
  v8[-1].fields._propNameID = propType;
  sub_1C36FFC((CGThumbnailListItem_o *)v8, (int32_t)propValue, v11, v12);
}


void USFGOChrChangeShaderComp_ChangeShaderPropValue__CheckAssert(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        const MethodInfo *method)
{
  ;
}


void USFGOChrChangeShaderComp_ChangeShaderPropValue__SetPropValue(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t propType; // w8
  int32_t v6; // w0
  System_String_o *v7; // x8
  int32_t v8; // w20
  __int64 v9; // x0
  float v10; // s0
  int32_t v11; // w0
  System_String_o *propValue; // x8
  int32_t v13; // w20

  propType = this->fields.propType;
  if ( propType == 1 )
  {
    v11 = USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(this, (const MethodInfo *)material);
    propValue = this->fields.propValue;
    v13 = v11;
    v9 = System_Int32__Parse(propValue, 0);
    if ( !material )
      goto LABEL_8;
    UnityEngine_Material__SetInt_71136272(material, v13, v9, 0);
  }
  else if ( !propType )
  {
    v6 = USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(this, (const MethodInfo *)material);
    v7 = this->fields.propValue;
    v8 = v6;
    v10 = System_Single__Parse(v7, 0);
    if ( material )
    {
      UnityEngine_Material__SetFloat_71136484(material, v8, v10, 0);
      return;
    }
LABEL_8:
    sub_1C372B4(v9);
  }
}


int32_t USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(
        USFGOChrChangeShaderComp_ChangeShaderPropValue_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields._propNameID;
  if ( !result )
  {
    if ( System_String__IsNullOrEmpty(this->fields.propName, 0) )
    {
      return this->fields._propNameID;
    }
    else
    {
      result = UnityEngine_Shader__PropertyToID(this->fields.propName, 0);
      this->fields._propNameID = result;
    }
  }
  return result;
}


void USFGOChrChangeShaderComp_ShaderPair___ctor(USFGOChrChangeShaderComp_ShaderPair_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
        USFGOChrChangeShaderComp_ShaderPair_o *this,
        System_Collections_Generic_HashSet_Material__o *targetMaterials,
        System_Collections_Generic_Dictionary_Material__Shader__o **originalShaders,
        const MethodInfo *method)
{
  USFGOChrChangeShaderComp_ShaderPair_o *v6; // x20
  _BOOL8 v7; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *targetShaderNames; // x23
  UnityEngine_Object_o *shader; // x0
  Il2CppObject *name; // x1
  System_Collections_Generic_Dictionary_Material__Shader__o *v12; // x0
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_Material__Shader__o *v16; // x23
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *v18; // x0
  System_String_o *v19; // x23
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  struct USFGOChrChangeShaderComp_ChangeShaderProp_array *changeShaderProps; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x28
  System_Collections_Generic_HashSet_Enumerator_T__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v26; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4C4496E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Material__Shader__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_Material__Shader__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_string___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_Material__get_Current__);
    this = (USFGOChrChangeShaderComp_ShaderPair_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_Material__GetEnumerator__);
    byte_4C4496E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !targetMaterials )
    sub_1C372B4(this);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v25,
    (System_Collections_Generic_HashSet_T__o *)targetMaterials,
    (const MethodInfo_365ABF8 *)Method_System_Collections_Generic_HashSet_Material__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_352D2A0 *)Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__);
    if ( !v7 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C372B4(v7);
    targetShaderNames = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.targetShaderNames;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v26.fields._current, 0);
    if ( !shader )
      sub_1C372B4(0);
    name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0);
    if ( System_Linq_Enumerable__Contains_object_(
           targetShaderNames,
           name,
           (const MethodInfo_3104EFC *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      v12 = *originalShaders;
      if ( !*originalShaders )
      {
        v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_Material__Shader__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v13,
          (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__);
        *originalShaders = (System_Collections_Generic_Dictionary_Material__Shader__o *)v13;
        sub_1C36FFC((CGThumbnailListItem_o *)originalShaders, (int32_t)v13, v14, v15);
        v12 = *originalShaders;
        if ( !*originalShaders )
          sub_1C372B4(0);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v12,
              current,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__) )
      {
        v16 = *originalShaders;
        v17 = (Il2CppObject *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0);
        if ( !v16 )
          sub_1C372B4(v17);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v16,
          current,
          v17,
          (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_Material__Shader__Add__);
      }
      v18 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0);
      if ( !v18 )
        sub_1C372B4(0);
      v19 = UnityEngine_Object__get_name(v18, 0);
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)current, v6->fields.changeShader, 0);
      changeShaderProps = v6->fields.changeShaderProps;
      if ( changeShaderProps )
      {
        max_length = changeShaderProps->max_length;
        if ( (int)max_length >= 1 )
        {
          v24 = 0;
          do
          {
            if ( v24 >= (unsigned int)max_length )
              sub_1C372BC(v20);
            if ( changeShaderProps->m_Items[v24] )
            {
              USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_44129256(
                changeShaderProps->m_Items[v24],
                (UnityEngine_Material_o *)current,
                v19,
                v21);
              LODWORD(max_length) = changeShaderProps->max_length;
            }
            ++v24;
          }
          while ( (__int64)v24 < (int)max_length );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_352D29C *)Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__);
}


void USFGOChrChangeShaderComp_ShaderPair__CheckAssert(
        USFGOChrChangeShaderComp_ShaderPair_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetShaderNames; // x8
  int max_length; // w8
  int v4; // w9

  targetShaderNames = this->fields.targetShaderNames;
  if ( !targetShaderNames )
    sub_1C372B4(this);
  max_length = targetShaderNames->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}