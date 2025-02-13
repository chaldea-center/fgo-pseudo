void __fastcall OutlineEffectMain___ctor(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OutlineEffectMain__CleanUp(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  const MethodInfo *v4; // x1
  OutlineEffectMain_o *v5; // x0
  const MethodInfo *v6; // x2
  UnityEngine_ComputeBuffer_o *v7; // x0
  struct UnityEngine_ComputeBuffer_o **p_tinyPolygonVertexBuffer; // x19
  struct UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // t1

  if ( (byte_4BD7FA2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FA2 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v4);
    OutlineEffectMain__DestroyMaterial(v5, &this->fields.material, v6);
    this->fields.material = 0LL;
    sub_1C21DDC(&this->fields.material, 0LL);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = &this->fields.tinyPolygonVertexBuffer;
  v7 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v7, 0LL);
    *p_tinyPolygonVertexBuffer = 0LL;
    sub_1C21DDC(p_tinyPolygonVertexBuffer, 0LL);
  }
}


void __fastcall OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // w21

  if ( (byte_4BD7FA3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7FA3 = 1;
  }
  v4 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v6 = (UnityEngine_Object_o *)*mat;
    v7 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v7 )
      UnityEngine_Object__Destroy_70869612(v6, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70869800(v6, 0LL);
    *mat = 0LL;
    sub_1C21DDC(mat, 0LL);
  }
}


UnityEngine_GradientColorKey_array *__fastcall OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v6; // x8
  OutlineEffectSettings_c *v7; // x0

  if ( (byte_4BD7FA0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FA0 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      goto LABEL_12;
    gradient = v6->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
  }
  v7 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v7);
  if ( !gradient )
LABEL_12:
    sub_1C22094(gradient, v5);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_Color___List_float___o __fastcall OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  System_Collections_Generic_List_Color__o *v4; // x19
  System_Collections_Generic_List_float__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_39A64B8 *v8; // x4
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  float *p_r; // x25
  int v12; // s0
  int v13; // s1
  int v14; // s2
  int v15; // s3
  float v16; // s8
  struct UnityEngine_Color_array *items; // x9
  _QWORD *v18; // x8
  __int64 size; // x10
  Il2CppObject *v20; // x9
  struct System_Single_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct System_Collections_Generic_List_Color__o *v24; // x0 OVERLAPPED
  struct System_Collections_Generic_List_float__o *v25; // x1
  struct System_Collections_Generic_List_Color__o *v26; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v27; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v28; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_4BD7FA1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Color__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Color___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Color__TypeInfo);
    sub_1C21E38(&Method_System_ValueTuple_List_Color___List_float____ctor__);
    byte_4BD7FA1 = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v4 = (System_Collections_Generic_List_Color__o *)sub_1C22084(System_Collections_Generic_List_Color__TypeInfo);
  System_Collections_Generic_List_Color____ctor(
    v4,
    (const MethodInfo_360FD48 *)Method_System_Collections_Generic_List_Color___ctor__);
  v5 = (System_Collections_Generic_List_float__o *)sub_1C22084(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v5,
    (const MethodInfo_366EFD4 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  v9 = *(_QWORD *)&ColorKeys->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    p_r = &ColorKeys->m_Items[1].fields.color.fields.r;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1C2209C(v6, v7);
      if ( !v4 )
        break;
      v12 = *((_DWORD *)p_r - 4);
      v13 = *((_DWORD *)p_r - 3);
      v14 = *((_DWORD *)p_r - 2);
      v15 = *((_DWORD *)p_r - 1);
      v16 = *p_r;
      items = v4->fields._items;
      v18 = Method_System_Collections_Generic_List_Color__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v4,
          *(UnityEngine_Color_o *)&v12,
          *(const MethodInfo_36105D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj + size;
        v4->fields._size = size + 1;
        LODWORD(v20[2].klass) = v12;
        HIDWORD(v20[2].klass) = v13;
        LODWORD(v20[2].monitor) = v14;
        HIDWORD(v20[2].monitor) = v15;
      }
      if ( !v5 )
        break;
      v21 = v5->fields._items;
      v22 = Method_System_Collections_Generic_List_float__Add__;
      ++v5->fields._version;
      if ( !v21 )
        break;
      v23 = v5->fields._size;
      if ( (unsigned int)v23 >= v21->max_length )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v5,
          v16,
          *(const MethodInfo_366F830 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = v23 + 1;
        v21->m_Items[v23 + 1] = v16;
      }
      LODWORD(v9) = ColorKeys->max_length;
      ++v10;
      p_r += 5;
      if ( (__int64)v10 >= (int)v9 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1C22094(v6, v7);
  }
LABEL_18:
  v28.fields.Item1 = (Il2CppObject *)&v26;
  v28.fields.Item2 = (Il2CppObject *)v4;
  v26 = 0LL;
  v27 = 0LL;
  System_ValueTuple_object__object____ctor(
    v28,
    (Il2CppObject *)v5,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v8);
  v24 = v26;
  v25 = v27;
  result.fields.Item2 = v25;
  result.fields.Item1 = v24;
  return result;
}


UnityEngine_Texture_o *__fastcall OutlineEffectMain__GetMainTexture(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 *v5; // x8
  UnityEngine_Material_array *sharedMaterials; // x0
  struct System_String_o *v8; // x1

  if ( (byte_4BD7F9F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_23677/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/);
    sub_1C21E38(&StringLiteral_23678/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_4BD7F9F = 1;
  }
  smr = this->fields.smr;
  if ( !smr )
    goto LABEL_15;
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(smr, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    smr = this->fields.smr;
    if ( smr )
    {
      sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
      if ( !sharedMaterials || (int)sharedMaterials->max_length <= 1 )
      {
        v5 = &StringLiteral_23677/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
    }
LABEL_15:
    sub_1C22094(smr, method);
  }
  v5 = &StringLiteral_23678/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  v8 = (struct System_String_o *)*v5;
  this->fields.message = (struct System_String_o *)*v5;
  sub_1C21DDC(&this->fields.message, v8);
  return 0LL;
}


void __fastcall OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Material_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v5; // x8
  UnityEngine_Material_array *v6; // x20
  unsigned int v7; // w24
  char *v8; // x21
  UnityEngine_Material_o **v9; // x21
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Object_o *v11; // t1
  UnityEngine_Object_o *material; // x23
  int max_length; // w8
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  UnityEngine_Material_o *v19; // x22
  const MethodInfo *v20; // x2
  struct UnityEngine_Material_o *v21; // x22
  UnityEngine_Material_array *v22; // x1
  UnityEngine_Material_o *v23; // x22
  UnityEngine_Object_o *v24; // x23
  UnityEngine_Shader_o *shader; // x0
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v27; // x23
  __int64 v28; // x0

  if ( (byte_4BD7F9C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material___ctor___77578624);
    sub_1C21E38(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F9C = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
  if ( !sharedMaterials )
    return;
  v5 = *(_QWORD *)&sharedMaterials->max_length;
  v6 = sharedMaterials;
  if ( !v5 )
    return;
  if ( !(_DWORD)v5 )
    goto LABEL_41;
  v7 = v5 - 1;
  v8 = (char *)sharedMaterials + 8 * (int)v5 - 8;
  v11 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 4);
  v9 = (UnityEngine_Material_o **)(v8 + 32);
  v10 = v11;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v10, material, 0LL);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    max_length = v6->max_length;
    if ( max_length < 2 )
      goto LABEL_12;
    if ( v7 < max_length )
    {
      v19 = *v9;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v19,
                                                        0LL,
                                                        0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( v7 < v6->max_length )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v9, v20);
          v21 = this->fields.material;
          if ( v21 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_1C21F74(
                                                              this->fields.material,
                                                              v6->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v28 = sub_1C220B8();
              sub_1C21F60(v28, 0LL);
            }
          }
          if ( v7 < v6->max_length )
          {
            *v9 = v21;
            sub_1C21DDC(v9, v21);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v22 = v6;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v22, 0LL);
              return;
            }
LABEL_40:
            sub_1C22094(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( v7 < v6->max_length )
      {
        v23 = *v9;
        v24 = (UnityEngine_Object_o *)this->fields.material;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v23,
                                                          v24,
                                                          0LL);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_56945064(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)v6,
            (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_Material___ctor___77578624);
          if ( v14 )
          {
            method = (const MethodInfo *)this->fields.material;
            items = v14->fields._items;
            v16 = Method_System_Collections_Generic_List_Material__Add__;
            ++v14->fields._version;
            if ( items )
            {
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)method,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              }
              else
              {
                v18 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v18[4] = (Il2CppClass *)method;
                sub_1C21DDC(v18 + 4, method);
              }
              smr = (UnityEngine_Material_o *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v22 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Material_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( v7 < v6->max_length )
        {
          smr = *v9;
          if ( !*v9 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0LL);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v27 = (UnityEngine_Object_o *)shader;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v27, shaderAsset, 0LL);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_1C2209C(sharedMaterials, method);
  }
}


// attributes: thunk
void __fastcall OutlineEffectMain__OnDisable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__CleanUp(this, method);
}


// attributes: thunk
void __fastcall OutlineEffectMain__OnEnable(OutlineEffectMain_o *this, const MethodInfo *method)
{
  OutlineEffectMain__Setup(this, method);
}


void __fastcall OutlineEffectMain__OnValidate(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4BD7F99 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&StringLiteral_22972/*"please play!!"*/);
    byte_4BD7F99 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    v3 = StringLiteral_22972/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_22972/*"please play!!"*/;
    sub_1C21DDC(&this->fields.message, v3);
  }
}


void __fastcall OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  UnityEngine_Object_o *material; // x22
  UnityEngine_Object_o *v10; // x23
  UnityEngine_Renderer_o *v11; // x19

  if ( (byte_4BD7F9D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material___ctor___77578624);
    sub_1C21E38(&Method_System_Collections_Generic_List_Material__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F9D = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_13;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0LL);
  if ( sharedMaterials )
  {
    v5 = sharedMaterials;
    if ( *(_QWORD *)&sharedMaterials->max_length )
    {
      v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Material__TypeInfo);
      System_Collections_Generic_List_object____ctor_56945064(
        v6,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_Material___ctor___77578624);
      if ( !v6 )
        goto LABEL_13;
      v7 = v5->max_length - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v6,
               v7,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      v10 = (UnityEngine_Object_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v10, material, 0LL) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v6,
          v7,
          (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v11 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v11 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v11, (UnityEngine_Material_array *)smr, 0LL);
          return;
        }
LABEL_13:
        sub_1C22094(smr, method);
      }
    }
  }
}


void __fastcall OutlineEffectMain__SetActive(OutlineEffectMain_o *this, bool value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
  if ( value )
  {
    OutlineEffectMain__Setup(this, v5);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v6);
  }
  else
  {
    OutlineEffectMain__CleanUp(this, v5);
  }
}


void __fastcall OutlineEffectMain__Setup(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct UnityEngine_Shader_o *v3; // x0
  UnityEngine_Object_o *shaderAsset; // x21
  __int64 *v5; // x8
  UnityEngine_Object_o *material; // x22
  UnityEngine_Shader_o *v7; // x22
  UnityEngine_Material_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *parent; // x20
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v17; // x1
  struct System_String_o *v18; // x1

  if ( (byte_4BD7F9A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5051/*"Custom/OutlineEffectShader"*/);
    sub_1C21E38(&StringLiteral_19709/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_1C21E38(&StringLiteral_22873/*"parent is null. please attach this component to object with parent"*/);
    sub_1C21E38(&StringLiteral_10293/*"OutlineEffectMaterial"*/);
    sub_1C21E38(&StringLiteral_24091/*"success"*/);
    sub_1C21E38(&StringLiteral_19708/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/);
    sub_1C21E38(&StringLiteral_23678/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    byte_4BD7F9A = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5051/*"Custom/OutlineEffectShader"*/, 0LL);
  this->fields.shaderAsset = v3;
  sub_1C21DDC(&this->fields.shaderAsset, v3);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0LL, 0LL) )
  {
    v5 = &StringLiteral_19708/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v7 = this->fields.shaderAsset;
    v8 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    if ( !v8 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_10293/*"OutlineEffectMaterial"*/, 0LL);
    this->fields.material = v8;
    sub_1C21DDC(&this->fields.material, v8);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v5 = &StringLiteral_22873/*"parent is null. please attach this component to object with parent"*/;
    goto LABEL_33;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_1C21DDC(&this->fields.smr, Component_object);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v5 = &StringLiteral_19709/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_1C22094(transform, v10);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v5 = &StringLiteral_23678/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v17);
    v5 = &StringLiteral_24091/*"success"*/;
  }
LABEL_33:
  v18 = (struct System_String_o *)*v5;
  this->fields.message = (struct System_String_o *)*v5;
  sub_1C21DDC(&this->fields.message, v18);
}


void __fastcall OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *smr; // x20
  __int64 v4; // x1
  __int64 *v5; // x8
  UnityEngine_SkinnedMeshRenderer_o *v6; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v8; // x1
  struct System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BD7F9B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_12981/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_1C21E38(&StringLiteral_12980/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_4BD7F9B = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v5 = &StringLiteral_12980/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v9 = (struct System_String_o *)*v5;
    this->fields.message = (struct System_String_o *)*v5;
    sub_1C21DDC(&this->fields.message, v9);
    return;
  }
  v6 = this->fields.smr;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v6, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v5 = &StringLiteral_12981/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v8);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v10);
}


void __fastcall OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  void *material; // x0
  UnityEngine_Material_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v9; // x8
  UnityEngine_Material_o *v10; // x20
  float *v11; // x8
  UnityEngine_Material_o *v12; // x19
  float *v13; // x9
  float *p_z; // x8
  float *p_y; // x10
  float *p_x; // x9
  struct OutlineEffectSettings_o *v17; // x9
  struct OutlineEffectSettings_o *v18; // x8
  struct OutlineEffectSettings_o *v19; // x8
  struct OutlineEffectSettings_o *v20; // x8
  struct OutlineEffectSettings_o *v21; // x8
  struct OutlineEffectSettings_o *v22; // x10
  UnityEngine_Vector4_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7F9E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Color__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    sub_1C21E38(&StringLiteral_16515/*"_GradientArrayKeys"*/);
    sub_1C21E38(&StringLiteral_16678/*"_VertexScale"*/);
    sub_1C21E38(&StringLiteral_16567/*"_OutlineShiftPixel"*/);
    sub_1C21E38(&StringLiteral_16442/*"_ClipFade"*/);
    sub_1C21E38(&StringLiteral_16458/*"_ColorKeysLength"*/);
    sub_1C21E38(&StringLiteral_16570/*"_OutlineThickness"*/);
    sub_1C21E38(&StringLiteral_16514/*"_GradientArrayColors"*/);
    sub_1C21E38(&StringLiteral_16675/*"_VertexOffset"*/);
    sub_1C21E38(&StringLiteral_16597/*"_RotationSpeed"*/);
    byte_4BD7F9E = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetColorArray_70740048(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16514/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloatArray_70739772(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16515/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0LL);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_42;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetInt(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16458/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0LL);
  v6 = this->fields.material;
  material = OutlineEffectMain__GetMainTexture(this, v7);
  if ( !v6 )
    goto LABEL_42;
  UnityEngine_Material__set_mainTexture(v6, (UnityEngine_Texture_o *)material, 0LL);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (void *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  v9 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v17 = this->fields.settings;
    if ( v17 )
    {
      if ( v9 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16570/*"_OutlineThickness"*/,
          v17->fields.thickness,
          0LL);
        v18 = this->fields.settings;
        if ( v18 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(
              (UnityEngine_Material_o *)material,
              (System_String_o *)StringLiteral_16597/*"_RotationSpeed"*/,
              v18->fields.speed,
              0LL);
            v19 = this->fields.settings;
            if ( v19 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  (UnityEngine_Material_o *)material,
                  (System_String_o *)StringLiteral_16442/*"_ClipFade"*/,
                  v19->fields.clipFade,
                  0LL);
                v20 = this->fields.settings;
                if ( v20 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      (UnityEngine_Material_o *)material,
                      (System_String_o *)StringLiteral_16567/*"_OutlineShiftPixel"*/,
                      v20->fields.outlineShiftPixel,
                      0LL);
                    v21 = this->fields.settings;
                    if ( v21 )
                    {
                      material = this->fields.material;
                      if ( material )
                      {
                        v24.fields.y = v21->fields.vertexScale.fields.y;
                        v24.fields.z = v21->fields.vertexScale.fields.z;
                        v24.fields.x = v21->fields.vertexScale.fields.x;
                        v24.fields.w = 0.0;
                        UnityEngine_Material__SetVector(
                          (UnityEngine_Material_o *)material,
                          (System_String_o *)StringLiteral_16678/*"_VertexScale"*/,
                          v24,
                          0LL);
                        v22 = this->fields.settings;
                        if ( v22 )
                        {
                          v12 = this->fields.material;
                          if ( v12 )
                          {
                            p_z = &v22->fields.vertexOffset.fields.z;
                            p_x = &v22->fields.vertexOffset.fields.x;
                            p_y = &v22->fields.vertexOffset.fields.y;
                            goto LABEL_41;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_1C22094(material, Item2);
  }
  if ( !v9 )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16570/*"_OutlineThickness"*/, 5.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16597/*"_RotationSpeed"*/, 3.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16442/*"_ClipFade"*/, 0.8, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16567/*"_OutlineShiftPixel"*/, 2.0, 0LL);
  v10 = this->fields.material;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4BD7FDA )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FDA = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_42;
  v11 = (float *)*((_QWORD *)material + 23);
  v23.fields.w = 0.0;
  v23.fields.y = v11[13];
  v23.fields.z = v11[14];
  v23.fields.x = v11[12];
  UnityEngine_Material__SetVector(v10, (System_String_o *)StringLiteral_16678/*"_VertexScale"*/, v23, 0LL);
  v12 = this->fields.material;
  if ( !byte_4BD7FDB )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FDB = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_42;
  v13 = (float *)*((_QWORD *)material + 23);
  p_z = v13 + 17;
  p_y = v13 + 16;
  p_x = v13 + 15;
LABEL_41:
  v25.fields.z = *p_z;
  v25.fields.y = *p_y;
  v25.fields.x = *p_x;
  v25.fields.w = 0.0;
  UnityEngine_Material__SetVector(v12, (System_String_o *)StringLiteral_16675/*"_VertexOffset"*/, v25, 0LL);
}


void __fastcall OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1C22094(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


float __fastcall OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BD7F93 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F93 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 0.8;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_1C22094(v4, v5);
  return v7->fields.clipFade;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4BD7F97 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7F97 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
  {
    v6 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v6);
  }
  else
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C22094(v4, v5);
    return v8->fields.gradient;
  }
}


float __fastcall OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BD7F95 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F95 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 2.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C22094(v4, v5);
    return v7->fields.outlineShiftPixel;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BD7F91 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F91 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 3.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C22094(v4, v5);
    return v7->fields.speed;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BD7F8F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F8F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 5.0;
  if ( !v4 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C22094(v4, v5);
    return v7->fields.thickness;
  }
  return result;
}


void __fastcall OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4BD7F94 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F94 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C22094(v6, v7);
    v8->fields.clipFade = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Gradient(
        OutlineEffectMain_o *this,
        UnityEngine_Gradient_o *value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x21
  __int64 v6; // x1
  struct OutlineEffectSettings_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD7F98 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F98 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    v7->fields.gradient = value;
    sub_1C21DDC(&v7->fields.gradient, value);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void __fastcall OutlineEffectMain__set_OutlineShiftPixel(
        OutlineEffectMain_o *this,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4BD7F96 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F96 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C22094(v6, v7);
    v8->fields.outlineShiftPixel = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Speed(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4BD7F92 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F92 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C22094(v6, v7);
    v8->fields.speed = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}


void __fastcall OutlineEffectMain__set_Thickness(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4BD7F90 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F90 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C22094(v6, v7);
    v8->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}