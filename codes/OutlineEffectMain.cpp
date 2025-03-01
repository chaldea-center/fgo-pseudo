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

  if ( (byte_4BF914E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF914E = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v4);
    OutlineEffectMain__DestroyMaterial(v5, &this->fields.material, v6);
    this->fields.material = 0LL;
    sub_1C2E0D0(&this->fields.material);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = &this->fields.tinyPolygonVertexBuffer;
  v7 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v7, 0LL);
    *p_tinyPolygonVertexBuffer = 0LL;
    sub_1C2E0D0(p_tinyPolygonVertexBuffer);
  }
}


void __fastcall OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  bool isPlaying; // w0
  UnityEngine_Object_o *v7; // x20
  bool v8; // w21

  if ( (byte_4BF914F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Application_TypeInfo, mat);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BF914F = 1;
  }
  v5 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v7 = (UnityEngine_Object_o *)*mat;
    v8 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v8 )
      UnityEngine_Object__Destroy_70989720(v7, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70989908(v7, 0LL);
    *mat = 0LL;
    sub_1C2E0D0(mat);
  }
}


UnityEngine_GradientColorKey_array *__fastcall OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v6; // x1
  struct OutlineEffectSettings_o *v7; // x8
  OutlineEffectSettings_c *v8; // x0

  if ( (byte_4BF914C & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&OutlineEffectSettings_TypeInfo, v3);
    byte_4BF914C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      goto LABEL_12;
    gradient = v7->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
  }
  v8 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v8);
  if ( !gradient )
LABEL_12:
    sub_1C2E388(gradient, v6);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_Color___List_float___o __fastcall OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  System_Collections_Generic_List_Color__o *v10; // x19
  System_Collections_Generic_List_float__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo_39C24F0 *v14; // x4
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  float *p_r; // x25
  int v18; // s0
  int v19; // s1
  int v20; // s2
  int v21; // s3
  float v22; // s8
  struct UnityEngine_Color_array *items; // x9
  _QWORD *v24; // x8
  __int64 size; // x10
  Il2CppObject *v26; // x9
  struct System_Single_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct System_Collections_Generic_List_Color__o *v30; // x0 OVERLAPPED
  struct System_Collections_Generic_List_float__o *v31; // x1
  struct System_Collections_Generic_List_Color__o *v32; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v33; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v34; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_4BF914D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Color__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_float___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Color___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_float__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_List_Color__TypeInfo, v7);
    sub_1C2E12C(&Method_System_ValueTuple_List_Color___List_float____ctor__, v8);
    byte_4BF914D = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v10 = (System_Collections_Generic_List_Color__o *)sub_1C2E378(System_Collections_Generic_List_Color__TypeInfo);
  System_Collections_Generic_List_Color____ctor(
    v10,
    (const MethodInfo_362C540 *)Method_System_Collections_Generic_List_Color___ctor__);
  v11 = (System_Collections_Generic_List_float__o *)sub_1C2E378(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v11,
    (const MethodInfo_368B7CC *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  v15 = *(_QWORD *)&ColorKeys->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    p_r = &ColorKeys->m_Items[1].fields.color.fields.r;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1C2E390(v12, v13);
      if ( !v10 )
        break;
      v18 = *((_DWORD *)p_r - 4);
      v19 = *((_DWORD *)p_r - 3);
      v20 = *((_DWORD *)p_r - 2);
      v21 = *((_DWORD *)p_r - 1);
      v22 = *p_r;
      items = v10->fields._items;
      v24 = Method_System_Collections_Generic_List_Color__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v10,
          *(UnityEngine_Color_o *)&v18,
          *(const MethodInfo_362CDCC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj + size;
        v10->fields._size = size + 1;
        LODWORD(v26[2].klass) = v18;
        HIDWORD(v26[2].klass) = v19;
        LODWORD(v26[2].monitor) = v20;
        HIDWORD(v26[2].monitor) = v21;
      }
      if ( !v11 )
        break;
      v27 = v11->fields._items;
      v28 = Method_System_Collections_Generic_List_float__Add__;
      ++v11->fields._version;
      if ( !v27 )
        break;
      v29 = v11->fields._size;
      if ( (unsigned int)v29 >= v27->max_length )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v11,
          v22,
          *(const MethodInfo_368C028 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = v29 + 1;
        v27->m_Items[v29 + 1] = v22;
      }
      LODWORD(v15) = ColorKeys->max_length;
      ++v16;
      p_r += 5;
      if ( (__int64)v16 >= (int)v15 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1C2E388(v12, v13);
  }
LABEL_18:
  v34.fields.Item1 = (Il2CppObject *)&v32;
  v34.fields.Item2 = (Il2CppObject *)v10;
  v32 = 0LL;
  v33 = 0LL;
  System_ValueTuple_object__object____ctor(
    v34,
    (Il2CppObject *)v11,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v14);
  v30 = v32;
  v31 = v33;
  result.fields.Item2 = v31;
  result.fields.Item1 = v30;
  return result;
}


UnityEngine_Texture_o *__fastcall OutlineEffectMain__GetMainTexture(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 *v7; // x8
  UnityEngine_Material_array *sharedMaterials; // x0

  if ( (byte_4BF914B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_23698/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/, v3);
    sub_1C2E12C(&StringLiteral_23699/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v4);
    byte_4BF914B = 1;
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
        v7 = &StringLiteral_23698/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
    }
LABEL_15:
    sub_1C2E388(smr, method);
  }
  v7 = &StringLiteral_23699/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  this->fields.message = (struct System_String_o *)*v7;
  sub_1C2E0D0(&this->fields.message);
  return 0LL;
}


void __fastcall OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Material_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v9; // x8
  UnityEngine_Material_array *v10; // x20
  unsigned int v11; // w24
  char *v12; // x21
  UnityEngine_Material_o **v13; // x21
  UnityEngine_Object_o *v14; // x22
  UnityEngine_Object_o *v15; // t1
  UnityEngine_Object_o *material; // x23
  int max_length; // w8
  System_Collections_Generic_List_object__o *v18; // x21
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  UnityEngine_Material_o *v23; // x22
  const MethodInfo *v24; // x2
  struct UnityEngine_Material_o *v25; // x22
  UnityEngine_Material_array *v26; // x1
  UnityEngine_Material_o *v27; // x22
  UnityEngine_Object_o *v28; // x23
  UnityEngine_Shader_o *shader; // x0
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v31; // x23
  __int64 v32; // x0

  if ( (byte_4BF9148 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material___ctor___77709560, v4);
    sub_1C2E12C(&System_Collections_Generic_List_Material__TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    byte_4BF9148 = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
  if ( !sharedMaterials )
    return;
  v9 = *(_QWORD *)&sharedMaterials->max_length;
  v10 = sharedMaterials;
  if ( !v9 )
    return;
  if ( !(_DWORD)v9 )
    goto LABEL_41;
  v11 = v9 - 1;
  v12 = (char *)sharedMaterials + 8 * (int)v9 - 8;
  v15 = (UnityEngine_Object_o *)*((_QWORD *)v12 + 4);
  v13 = (UnityEngine_Material_o **)(v12 + 32);
  v14 = v15;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v14, material, 0LL);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    max_length = v10->max_length;
    if ( max_length < 2 )
      goto LABEL_12;
    if ( v11 < max_length )
    {
      v23 = *v13;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v23,
                                                        0LL,
                                                        0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( v11 < v10->max_length )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v13, v24);
          v25 = this->fields.material;
          if ( v25 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_1C2E268(
                                                              this->fields.material,
                                                              v10->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v32 = sub_1C2E3AC();
              sub_1C2E254(v32, 0LL);
            }
          }
          if ( v11 < v10->max_length )
          {
            *v13 = v25;
            sub_1C2E0D0(v13);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v26 = v10;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v26, 0LL);
              return;
            }
LABEL_40:
            sub_1C2E388(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( v11 < v10->max_length )
      {
        v27 = *v13;
        v28 = (UnityEngine_Object_o *)this->fields.material;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v27,
                                                          v28,
                                                          0LL);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v18 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Material__TypeInfo);
          System_Collections_Generic_List_object____ctor_57061792(
            v18,
            (System_Collections_Generic_IEnumerable_T__o *)v10,
            (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_Material___ctor___77709560);
          if ( v18 )
          {
            method = (const MethodInfo *)this->fields.material;
            items = v18->fields._items;
            v20 = Method_System_Collections_Generic_List_Material__Add__;
            ++v18->fields._version;
            if ( items )
            {
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)method,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v22 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v22[4] = (Il2CppClass *)method;
                sub_1C2E0D0(v22 + 4);
              }
              smr = (UnityEngine_Material_o *)System_Collections_Generic_List_object___ToArray(
                                                v18,
                                                (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v26 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Material_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( v11 < v10->max_length )
        {
          smr = *v13;
          if ( !*v13 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0LL);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v31 = (UnityEngine_Object_o *)shader;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v31, shaderAsset, 0LL);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_1C2E390(sharedMaterials, method);
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

  if ( (byte_4BF9145 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Application_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_22986/*"please play!!"*/, v3);
    byte_4BF9145 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    this->fields.message = (struct System_String_o *)StringLiteral_22986/*"please play!!"*/;
    sub_1C2E0D0(&this->fields.message);
  }
}


void __fastcall OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  UnityEngine_Material_array *v10; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x0
  UnityEngine_Object_o *material; // x22
  UnityEngine_Object_o *v15; // x23
  UnityEngine_Renderer_o *v16; // x19

  if ( (byte_4BF9149 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material__RemoveAt__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material___ctor___77709560, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Material__get_Item__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_Material__TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BF9149 = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_13;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0LL);
  if ( sharedMaterials )
  {
    v10 = sharedMaterials;
    if ( *(_QWORD *)&sharedMaterials->max_length )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Material__TypeInfo);
      System_Collections_Generic_List_object____ctor_57061792(
        v11,
        (System_Collections_Generic_IEnumerable_T__o *)v10,
        (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_Material___ctor___77709560);
      if ( !v11 )
        goto LABEL_13;
      v12 = v10->max_length - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v12,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      v15 = (UnityEngine_Object_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v15, material, 0LL) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v11,
          v12,
          (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v16 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v16 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v16, (UnityEngine_Material_array *)smr, 0LL);
          return;
        }
LABEL_13:
        sub_1C2E388(smr, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *shaderAsset; // x21
  __int64 *v13; // x8
  UnityEngine_Object_o *material; // x22
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *parent; // x20
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v24; // x1

  if ( (byte_4BF9146 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, method);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_5039/*"Custom/OutlineEffectShader"*/, v5);
    sub_1C2E12C(&StringLiteral_19723/*"failed to get SkinnedMeshRenderer component from parent"*/, v6);
    sub_1C2E12C(&StringLiteral_22887/*"parent is null. please attach this component to object with parent"*/, v7);
    sub_1C2E12C(&StringLiteral_10287/*"OutlineEffectMaterial"*/, v8);
    sub_1C2E12C(&StringLiteral_24113/*"success"*/, v9);
    sub_1C2E12C(&StringLiteral_19722/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/, v10);
    sub_1C2E12C(&StringLiteral_23699/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v11);
    byte_4BF9146 = 1;
  }
  this->fields.shaderAsset = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5039/*"Custom/OutlineEffectShader"*/, 0LL);
  sub_1C2E0D0(&this->fields.shaderAsset);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0LL, 0LL) )
  {
    v13 = &StringLiteral_19722/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v15 = this->fields.shaderAsset;
    v16 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    if ( !v16 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)StringLiteral_10287/*"OutlineEffectMaterial"*/, 0LL);
    this->fields.material = v16;
    sub_1C2E0D0(&this->fields.material);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v13 = &StringLiteral_22887/*"parent is null. please attach this component to object with parent"*/;
    goto LABEL_33;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_34;
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  p_smr = &this->fields.smr;
  sub_1C2E0D0(&this->fields.smr);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v13 = &StringLiteral_19723/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_1C2E388(transform, v18);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v13 = &StringLiteral_23699/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v24);
    v13 = &StringLiteral_24113/*"success"*/;
  }
LABEL_33:
  this->fields.message = (struct System_String_o *)*v13;
  sub_1C2E0D0(&this->fields.message);
}


void __fastcall OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *smr; // x20
  __int64 v6; // x1
  __int64 *v7; // x8
  UnityEngine_SkinnedMeshRenderer_o *v8; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4BF9147 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_12990/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v3);
    sub_1C2E12C(&StringLiteral_12989/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/, v4);
    byte_4BF9147 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v7 = &StringLiteral_12989/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    this->fields.message = (struct System_String_o *)*v7;
    sub_1C2E0D0(&this->fields.message);
    return;
  }
  v8 = this->fields.smr;
  if ( !v8 )
    sub_1C2E388(0LL, v6);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v8, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v7 = &StringLiteral_12990/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v10);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v11);
}


void __fastcall OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  void *material; // x0
  UnityEngine_Material_o *v17; // x20
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v20; // x8
  UnityEngine_Material_o *v21; // x20
  float *v22; // x8
  UnityEngine_Material_o *v23; // x19
  float *v24; // x9
  float *p_z; // x8
  float *p_y; // x10
  float *p_x; // x9
  struct OutlineEffectSettings_o *v28; // x9
  struct OutlineEffectSettings_o *v29; // x8
  struct OutlineEffectSettings_o *v30; // x8
  struct OutlineEffectSettings_o *v31; // x8
  struct OutlineEffectSettings_o *v32; // x8
  struct OutlineEffectSettings_o *v33; // x10
  UnityEngine_Vector4_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF914A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Color__get_Count__, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&OutlineEffectSettings_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_16526/*"_GradientArrayKeys"*/, v5);
    sub_1C2E12C(&StringLiteral_16689/*"_VertexScale"*/, v6);
    sub_1C2E12C(&StringLiteral_16578/*"_OutlineShiftPixel"*/, v7);
    sub_1C2E12C(&StringLiteral_16453/*"_ClipFade"*/, v8);
    sub_1C2E12C(&StringLiteral_16469/*"_ColorKeysLength"*/, v9);
    sub_1C2E12C(&StringLiteral_16581/*"_OutlineThickness"*/, v10);
    sub_1C2E12C(&StringLiteral_16525/*"_GradientArrayColors"*/, v11);
    sub_1C2E12C(&StringLiteral_16686/*"_VertexOffset"*/, v12);
    sub_1C2E12C(&StringLiteral_16608/*"_RotationSpeed"*/, v13);
    byte_4BF914A = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetColorArray_70860156(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16525/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloatArray_70859880(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16526/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0LL);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_42;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetInt(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16469/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0LL);
  v17 = this->fields.material;
  material = OutlineEffectMain__GetMainTexture(this, v18);
  if ( !v17 )
    goto LABEL_42;
  UnityEngine_Material__set_mainTexture(v17, (UnityEngine_Texture_o *)material, 0LL);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (void *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  v20 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v28 = this->fields.settings;
    if ( v28 )
    {
      if ( v20 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16581/*"_OutlineThickness"*/,
          v28->fields.thickness,
          0LL);
        v29 = this->fields.settings;
        if ( v29 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(
              (UnityEngine_Material_o *)material,
              (System_String_o *)StringLiteral_16608/*"_RotationSpeed"*/,
              v29->fields.speed,
              0LL);
            v30 = this->fields.settings;
            if ( v30 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  (UnityEngine_Material_o *)material,
                  (System_String_o *)StringLiteral_16453/*"_ClipFade"*/,
                  v30->fields.clipFade,
                  0LL);
                v31 = this->fields.settings;
                if ( v31 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      (UnityEngine_Material_o *)material,
                      (System_String_o *)StringLiteral_16578/*"_OutlineShiftPixel"*/,
                      v31->fields.outlineShiftPixel,
                      0LL);
                    v32 = this->fields.settings;
                    if ( v32 )
                    {
                      material = this->fields.material;
                      if ( material )
                      {
                        v35.fields.y = v32->fields.vertexScale.fields.y;
                        v35.fields.z = v32->fields.vertexScale.fields.z;
                        v35.fields.x = v32->fields.vertexScale.fields.x;
                        v35.fields.w = 0.0;
                        UnityEngine_Material__SetVector(
                          (UnityEngine_Material_o *)material,
                          (System_String_o *)StringLiteral_16689/*"_VertexScale"*/,
                          v35,
                          0LL);
                        v33 = this->fields.settings;
                        if ( v33 )
                        {
                          v23 = this->fields.material;
                          if ( v23 )
                          {
                            p_z = &v33->fields.vertexOffset.fields.z;
                            p_x = &v33->fields.vertexOffset.fields.x;
                            p_y = &v33->fields.vertexOffset.fields.y;
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
    sub_1C2E388(material, Item2);
  }
  if ( !v20 )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16581/*"_OutlineThickness"*/, 5.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16608/*"_RotationSpeed"*/, 3.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16453/*"_ClipFade"*/, 0.8, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16578/*"_OutlineShiftPixel"*/, 2.0, 0LL);
  v21 = this->fields.material;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4BF9186 )
  {
    sub_1C2E12C(&OutlineEffectSettings_TypeInfo, Item2);
    byte_4BF9186 = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_42;
  v22 = (float *)*((_QWORD *)material + 23);
  v34.fields.w = 0.0;
  v34.fields.y = v22[13];
  v34.fields.z = v22[14];
  v34.fields.x = v22[12];
  UnityEngine_Material__SetVector(v21, (System_String_o *)StringLiteral_16689/*"_VertexScale"*/, v34, 0LL);
  v23 = this->fields.material;
  if ( !byte_4BF9187 )
  {
    sub_1C2E12C(&OutlineEffectSettings_TypeInfo, Item2);
    byte_4BF9187 = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_42;
  v24 = (float *)*((_QWORD *)material + 23);
  p_z = v24 + 17;
  p_y = v24 + 16;
  p_x = v24 + 15;
LABEL_41:
  v36.fields.z = *p_z;
  v36.fields.y = *p_y;
  v36.fields.x = *p_x;
  v36.fields.w = 0.0;
  UnityEngine_Material__SetVector(v23, (System_String_o *)StringLiteral_16686/*"_VertexOffset"*/, v36, 0LL);
}


void __fastcall OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1C2E388(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


float __fastcall OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BF913F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF913F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 0.8;
  v7 = this->fields.settings;
  if ( !v7 )
    sub_1C2E388(v4, v5);
  return v7->fields.clipFade;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  OutlineEffectSettings_c *v7; // x0
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_4BF9143 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&OutlineEffectSettings_TypeInfo, v3);
    byte_4BF9143 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v5 )
  {
    v7 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v7);
  }
  else
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_1C2E388(v5, v6);
    return v9->fields.gradient;
  }
}


float __fastcall OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v7; // x8

  if ( (byte_4BF9141 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9141 = 1;
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
      sub_1C2E388(v4, v5);
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

  if ( (byte_4BF913D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF913D = 1;
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
      sub_1C2E388(v4, v5);
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

  if ( (byte_4BF913B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF913B = 1;
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
      sub_1C2E388(v4, v5);
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

  if ( (byte_4BF9140 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9140 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C2E388(v6, v7);
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

  if ( (byte_4BF9144 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, value);
    byte_4BF9144 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
    v7->fields.gradient = value;
    sub_1C2E0D0(&v7->fields.gradient);
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

  if ( (byte_4BF9142 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF9142 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C2E388(v6, v7);
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

  if ( (byte_4BF913E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF913E = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C2E388(v6, v7);
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

  if ( (byte_4BF913C & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF913C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1C2E388(v6, v7);
    v8->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}