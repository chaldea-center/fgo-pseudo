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
  __int64 v9; // x1
  UnityEngine_Object_o *shaderPairsPreset; // x21
  __int64 v11; // x2
  struct USFGOChrChangeShaderCompPreset_o *v12; // x8
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x23
  System_Collections_Generic_Dictionary_Material__Shader__o **p_originalShaders; // x19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4C28C67 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Material___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Material__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_Material__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C67 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v18, 0, sizeof(v18));
  Targets = USFGOChrTargetUtils__GetTargets(this->fields.targetType, 1, 0);
  if ( Targets )
  {
    v4 = (System_Collections_Generic_List_object__o *)Targets;
    if ( Targets->fields._size >= 1 )
    {
      v5 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_Material__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v5,
        (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_Material___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        v4,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      for ( i = v17;
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
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v6 )
          break;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
        v12 = this->fields.shaderPairsPreset;
        if ( v12 )
        {
          items = (System_Collections_Generic_List_object__o *)v12->fields.items;
          if ( items )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v17,
              items,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
            v18 = v17;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v18,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
            {
              if ( v18.fields._current )
                USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
                  (USFGOChrChangeShaderComp_ShaderPair_o *)v18.fields._current,
                  (System_Collections_Generic_HashSet_Material__o *)v5,
                  &this->fields.originalShaders,
                  0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v18,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
LABEL_20:
            shaderPairs = this->fields.shaderPairs;
            if ( shaderPairs )
            {
              max_length = shaderPairs->max_length;
              if ( (int)max_length >= 1 )
              {
                v15 = 0;
                p_originalShaders = &this->fields.originalShaders;
                do
                {
                  if ( v15 >= (unsigned int)max_length )
                    sub_1C2D6F4(items, v9, v11);
                  if ( shaderPairs->m_Items[v15] )
                  {
                    USFGOChrChangeShaderComp_ShaderPair__ChangeShader(
                      shaderPairs->m_Items[v15],
                      (System_Collections_Generic_HashSet_Material__o *)v5,
                      p_originalShaders,
                      0);
                    LODWORD(max_length) = shaderPairs->max_length;
                  }
                  ++v15;
                }
                while ( (__int64)v15 < (int)max_length );
              }
            }
            return;
          }
        }
      }
      sub_1C2D6EC(items, v9);
    }
  }
}


void USFGOChrChangeShaderComp__CheckAssert(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shaderPairsPreset; // x20
  System_Collections_Generic_List_object__o *items; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct USFGOChrChangeShaderCompPreset_o *v7; // x8
  struct USFGOChrChangeShaderComp_ShaderPair_array *shaderPairs; // x8
  int max_length; // w8
  int i; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C28C69 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C69 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  shaderPairsPreset = (UnityEngine_Object_o *)this->fields.shaderPairsPreset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  items = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(shaderPairsPreset, 0, 0);
  if ( ((unsigned __int8)items & 1) != 0 )
  {
    v7 = this->fields.shaderPairsPreset;
    if ( !v7 || (items = (System_Collections_Generic_List_object__o *)v7->fields.items) == 0 )
      sub_1C2D6EC(items, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      items,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_USFGOChrChangeShaderComp_ShaderPair__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_USFGOChrChangeShaderComp_ShaderPair__Dispose__);
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
          sub_1C2D6F4(items, v5, v6);
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
  __int64 v8; // x2
  int m_CancellationTokenSource; // w8
  USFGOChrChangeShaderComp_o *v10; // x20
  unsigned int v11; // w23
  struct System_Threading_CancellationTokenSource_o *v12; // x8
  USFGOChrChangeShaderComp_o *v13; // x21
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x22

  if ( (byte_4C28C6A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Material__Add__);
    this = (USFGOChrChangeShaderComp_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C6A = 1;
  }
  if ( !gameObject )
LABEL_22:
    sub_1C2D6EC(this, gameObject);
  this = (USFGOChrChangeShaderComp_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         gameObject,
                                         isIncludeInactive,
                                         (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
  if ( this )
  {
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v10 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= m_CancellationTokenSource )
          goto LABEL_21;
        this = (USFGOChrChangeShaderComp_o *)*((_QWORD *)&v10->fields.targetType + (int)v11);
        if ( !this )
          goto LABEL_22;
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0);
        if ( !this )
          goto LABEL_22;
        v12 = this->fields.m_CancellationTokenSource;
        v13 = this;
        if ( (int)v12 >= 1 )
          break;
LABEL_19:
        m_CancellationTokenSource = (int)v10->fields.m_CancellationTokenSource;
        if ( (int)++v11 >= m_CancellationTokenSource )
          return;
      }
      v14 = 0;
      while ( v14 < (unsigned int)v12 )
      {
        v15 = (UnityEngine_Object_o *)*((_QWORD *)&v13->fields.targetType + v14);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (USFGOChrChangeShaderComp_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !result )
            goto LABEL_22;
          this = (USFGOChrChangeShaderComp_o *)System_Collections_Generic_HashSet_object___Add(
                                                 (System_Collections_Generic_HashSet_T__o *)result,
                                                 (Il2CppObject *)v15,
                                                 (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_Material__Add__);
        }
        LODWORD(v12) = v13->fields.m_CancellationTokenSource;
        if ( (__int64)++v14 >= (int)v12 )
          goto LABEL_19;
      }
LABEL_21:
      sub_1C2D6F4(this, gameObject, v8);
    }
  }
}


void USFGOChrChangeShaderComp__RestoreShaders(USFGOChrChangeShaderComp_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o **p_originalShaders; // x19
  struct System_Collections_Generic_Dictionary_Material__Shader__o *originalShaders; // t1
  __int64 v6; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C28C68 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_Material__Shader__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28C68 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  originalShaders = this->fields.originalShaders;
  p_originalShaders = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.originalShaders;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)originalShaders;
  if ( originalShaders
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         v3,
         (const MethodInfo_3449FF8 *)Method_System_Collections_Generic_Dictionary_Material__Shader__get_Count__) >= 1 )
  {
    if ( !*p_originalShaders )
      sub_1C2D6EC(0, v6);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v12,
      *p_originalShaders,
      (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_Material__Shader__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v12,
              (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current.fields.key, 0, 0);
      if ( v8 )
      {
        if ( !current.fields.key )
          sub_1C2D6EC(v8, v9);
        UnityEngine_Material__set_shader(
          (UnityEngine_Material_o *)current.fields.key,
          (UnityEngine_Shader_o *)current.fields.value,
          0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v12,
      (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_Material__Shader__Dispose__);
    *p_originalShaders = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_originalShaders, 0, v10, v11);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)targetShaderName, v7, v8);
  this->fields.changeShaderPropValues = changeShaderPropValues;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.changeShaderPropValues, (int32_t)changeShaderPropValues, v9, v10);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, material);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_43891364(v4, material, name, v6);
}


void USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_43891364(
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
                                                             0);
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
          sub_1C2D6F4(v6, v7, v8);
        v6 = changeShaderPropValues->m_Items[v11];
        if ( !v6 )
          break;
        USFGOChrChangeShaderComp_ChangeShaderPropValue__SetPropValue(v6, material, v8);
        max_length = changeShaderPropValues->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_10:
      sub_1C2D6EC(v6, v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields, (int32_t)propName, v9, v10);
  v8->fields.propValue = propValue;
  v8 = (USFGOChrChangeShaderComp_ChangeShaderPropValue_o *)((char *)v8 + 32);
  v8[-1].fields._propNameID = propType;
  sub_1C2D434((CGThumbnailListItem_o *)v8, (int32_t)propValue, v11, v12);
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
    v9 = System_Int32__Parse(propValue, 0);
    if ( !material )
      goto LABEL_8;
    UnityEngine_Material__SetInt_71033224(material, v14, v9, 0);
  }
  else if ( !propType )
  {
    v6 = USFGOChrChangeShaderComp_ChangeShaderPropValue__get_PropNameID(this, (const MethodInfo *)material);
    v7 = this->fields.propValue;
    v8 = v6;
    v11 = System_Single__Parse(v7, 0);
    if ( material )
    {
      UnityEngine_Material__SetFloat_71033436(material, v8, v11, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(v9, v10);
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
  __int64 v8; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *targetShaderNames; // x23
  UnityEngine_Object_o *shader; // x0
  __int64 v12; // x1
  Il2CppObject *name; // x1
  System_Collections_Generic_Dictionary_Material__Shader__o *v14; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_Material__Shader__o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  struct USFGOChrChangeShaderComp_ChangeShaderProp_array *changeShaderProps; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v31; // x28
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4C28C6C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Material__Shader__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_Material__Shader__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_string___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Material__get_Current__);
    this = (USFGOChrChangeShaderComp_ShaderPair_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_Material__GetEnumerator__);
    byte_4C28C6C = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !targetMaterials )
    sub_1C2D6EC(this, targetMaterials);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v32,
    (System_Collections_Generic_HashSet_T__o *)targetMaterials,
    (const MethodInfo_36418F0 *)Method_System_Collections_Generic_HashSet_Material__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_3513F98 *)Method_System_Collections_Generic_HashSet_Enumerator_Material__MoveNext__);
    if ( !v7 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C2D6EC(v7, v8);
    targetShaderNames = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.targetShaderNames;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v33.fields._current, 0);
    if ( !shader )
      sub_1C2D6EC(0, v12);
    name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0);
    if ( System_Linq_Enumerable__Contains_object_(
           targetShaderNames,
           name,
           (const MethodInfo_30EBBF4 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      v14 = *originalShaders;
      if ( !*originalShaders )
      {
        v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_Material__Shader__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v15,
          (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_Material__Shader___ctor__);
        *originalShaders = (System_Collections_Generic_Dictionary_Material__Shader__o *)v15;
        sub_1C2D434((CGThumbnailListItem_o *)originalShaders, (int32_t)v15, v16, v17);
        v14 = *originalShaders;
        if ( !*originalShaders )
          sub_1C2D6EC(0, v18);
      }
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v14,
              current,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_Material__Shader__ContainsKey__) )
      {
        v19 = *originalShaders;
        v20 = (Il2CppObject *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0);
        if ( !v19 )
          sub_1C2D6EC(v20, v21);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)v19,
          current,
          v20,
          (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_Material__Shader__Add__);
      }
      v22 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)current, 0);
      if ( !v22 )
        sub_1C2D6EC(0, v23);
      v24 = UnityEngine_Object__get_name(v22, 0);
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)current, v6->fields.changeShader, 0);
      changeShaderProps = v6->fields.changeShaderProps;
      if ( changeShaderProps )
      {
        max_length = changeShaderProps->max_length;
        if ( (int)max_length >= 1 )
        {
          v31 = 0;
          do
          {
            if ( v31 >= (unsigned int)max_length )
              sub_1C2D6F4(v25, v26, v27);
            if ( changeShaderProps->m_Items[v31] )
            {
              USFGOChrChangeShaderComp_ChangeShaderProp__SetPropValue_43891364(
                changeShaderProps->m_Items[v31],
                (UnityEngine_Material_o *)current,
                v24,
                v28);
              LODWORD(max_length) = changeShaderProps->max_length;
            }
            ++v31;
          }
          while ( (__int64)v31 < (int)max_length );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3513F94 *)Method_System_Collections_Generic_HashSet_Enumerator_Material__Dispose__);
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
    sub_1C2D6EC(this, method);
  max_length = targetShaderNames->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}