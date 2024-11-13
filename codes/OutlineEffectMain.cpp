void __fastcall OutlineEffectMain___ctor(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OutlineEffectMain__CleanUp(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *material; // x21
  const MethodInfo *v5; // x1
  OutlineEffectMain_o *v6; // x0
  const MethodInfo *v7; // x2
  UnityEngine_ComputeBuffer_o *v8; // x0
  struct UnityEngine_ComputeBuffer_o **p_tinyPolygonVertexBuffer; // x19
  struct UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // t1

  if ( (byte_4B11D3A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D3A = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v5);
    OutlineEffectMain__DestroyMaterial(v6, &this->fields.material, v7);
    this->fields.material = 0LL;
    sub_1BCA784(&this->fields.material, 0LL);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = &this->fields.tinyPolygonVertexBuffer;
  v8 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v8, 0LL);
    *p_tinyPolygonVertexBuffer = 0LL;
    sub_1BCA784(p_tinyPolygonVertexBuffer, 0LL);
  }
}


void __fastcall OutlineEffectMain__DestroyMaterial(
        OutlineEffectMain_o *this,
        UnityEngine_Material_o **mat,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  bool isPlaying; // w0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  bool v11; // w21

  if ( (byte_4B11D3B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, mat, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11D3B = 1;
  }
  v6 = (UnityEngine_Object_o *)*mat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mat);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    v10 = (UnityEngine_Object_o *)*mat;
    v11 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( v11 )
      UnityEngine_Object__Destroy_70154244(v10, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_70154432(v10, 0LL);
    *mat = 0LL;
    sub_1BCA784(mat, 0LL);
  }
}


UnityEngine_GradientColorKey_array *__fastcall OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  __int64 v8; // x1
  struct OutlineEffectSettings_o *v9; // x8
  OutlineEffectSettings_c *v10; // x0

  if ( (byte_4B11D38 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v4, v5);
    byte_4B11D38 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gradient = (UnityEngine_Gradient_o *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( ((unsigned __int8)gradient & 1) == 0 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      goto LABEL_12;
    gradient = v9->fields.gradient;
    if ( gradient )
      return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
  }
  v10 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v8);
  gradient = OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v10);
  if ( !gradient )
LABEL_12:
    sub_1BCAA3C(gradient, v8);
  return UnityEngine_Gradient__get_colorKeys(gradient, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_Color___List_float___o __fastcall OutlineEffectMain__GetColorsAndKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GradientColorKey_array *ColorKeys; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_Color__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_float__o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo_38F6AA0 *v27; // x4
  __int64 v28; // x8
  unsigned __int64 v29; // x22
  float *p_r; // x25
  int v31; // s0
  int v32; // s1
  int v33; // s2
  int v34; // s3
  float v35; // s8
  struct UnityEngine_Color_array *items; // x9
  _QWORD *v37; // x8
  __int64 size; // x10
  Il2CppObject *v39; // x9
  struct System_Single_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Collections_Generic_List_Color__o *v43; // x0 OVERLAPPED
  struct System_Collections_Generic_List_float__o *v44; // x1
  struct System_Collections_Generic_List_Color__o *v45; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v46; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v47; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_4B11D39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Color__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Color___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_float__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_Color__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_ValueTuple_List_Color___List_float____ctor__, v14, v15);
    byte_4B11D39 = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v20 = (System_Collections_Generic_List_Color__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_Color__TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19);
  System_Collections_Generic_List_Color____ctor(
    v20,
    (const MethodInfo_35628F0 *)Method_System_Collections_Generic_List_Color___ctor__);
  v24 = (System_Collections_Generic_List_float__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_float__TypeInfo,
                                                      v21,
                                                      v22,
                                                      v23);
  System_Collections_Generic_List_float____ctor(
    v24,
    (const MethodInfo_35C1B7C *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  v28 = *(_QWORD *)&ColorKeys->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    p_r = &ColorKeys->m_Items[1].fields.color.fields.r;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BCAA44(v25, v26);
      if ( !v20 )
        break;
      v31 = *((_DWORD *)p_r - 4);
      v32 = *((_DWORD *)p_r - 3);
      v33 = *((_DWORD *)p_r - 2);
      v34 = *((_DWORD *)p_r - 1);
      v35 = *p_r;
      items = v20->fields._items;
      v37 = Method_System_Collections_Generic_List_Color__Add__;
      ++v20->fields._version;
      if ( !items )
        break;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v20,
          *(UnityEngine_Color_o *)&v31,
          *(const MethodInfo_356317C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj + size;
        v20->fields._size = size + 1;
        LODWORD(v39[2].klass) = v31;
        HIDWORD(v39[2].klass) = v32;
        LODWORD(v39[2].monitor) = v33;
        HIDWORD(v39[2].monitor) = v34;
      }
      if ( !v24 )
        break;
      v40 = v24->fields._items;
      v41 = Method_System_Collections_Generic_List_float__Add__;
      ++v24->fields._version;
      if ( !v40 )
        break;
      v42 = v24->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v24,
          v35,
          *(const MethodInfo_35C23D8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v24->fields._size = v42 + 1;
        v40->m_Items[v42 + 1] = v35;
      }
      LODWORD(v28) = ColorKeys->max_length;
      ++v29;
      p_r += 5;
      if ( (__int64)v29 >= (int)v28 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(v25, v26);
  }
LABEL_18:
  v47.fields.Item1 = (Il2CppObject *)&v45;
  v47.fields.Item2 = (Il2CppObject *)v20;
  v45 = 0LL;
  v46 = 0LL;
  System_ValueTuple_object__object____ctor(
    v47,
    (Il2CppObject *)v24,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v27);
  v43 = v45;
  v44 = v46;
  result.fields.Item2 = v44;
  result.fields.Item1 = v43;
  return result;
}


UnityEngine_Texture_o *__fastcall OutlineEffectMain__GetMainTexture(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 *v11; // x8
  UnityEngine_Material_array *sharedMaterials; // x0
  struct System_String_o *v14; // x1

  if ( (byte_4B11D37 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23498/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v6, v7);
    byte_4B11D37 = 1;
  }
  smr = this->fields.smr;
  if ( !smr )
    goto LABEL_15;
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(smr, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    smr = this->fields.smr;
    if ( smr )
    {
      sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
      if ( !sharedMaterials || (int)sharedMaterials->max_length <= 1 )
      {
        v11 = &StringLiteral_23498/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
    }
LABEL_15:
    sub_1BCAA3C(smr, method);
  }
  v11 = &StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  v14 = (struct System_String_o *)*v11;
  this->fields.message = (struct System_String_o *)*v11;
  sub_1BCA784(&this->fields.message, v14);
  return 0LL;
}


void __fastcall OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Material_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v14; // x8
  UnityEngine_Material_array *v15; // x20
  unsigned int v16; // w24
  char *v17; // x21
  UnityEngine_Material_o **v18; // x21
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Object_o *v20; // t1
  UnityEngine_Object_o *material; // x23
  const MethodInfo *v22; // x2
  __int64 v23; // x3
  int max_length; // w8
  System_Collections_Generic_List_object__o *v25; // x21
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  UnityEngine_Material_o *v30; // x22
  struct UnityEngine_Material_o *v31; // x22
  UnityEngine_Material_array *v32; // x1
  UnityEngine_Material_o *v33; // x22
  UnityEngine_Object_o *v34; // x23
  UnityEngine_Shader_o *shader; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v38; // x23
  __int64 v39; // x0

  if ( (byte_4B11D34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material___ctor___76789440, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_Material__TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B11D34 = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
  if ( !sharedMaterials )
    return;
  v14 = *(_QWORD *)&sharedMaterials->max_length;
  v15 = sharedMaterials;
  if ( !v14 )
    return;
  if ( !(_DWORD)v14 )
    goto LABEL_41;
  v16 = v14 - 1;
  v17 = (char *)sharedMaterials + 8 * (int)v14 - 8;
  v20 = (UnityEngine_Object_o *)*((_QWORD *)v17 + 4);
  v18 = (UnityEngine_Material_o **)(v17 + 32);
  v19 = v20;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v19, material, 0LL);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    max_length = v15->max_length;
    if ( max_length < 2 )
      goto LABEL_12;
    if ( v16 < max_length )
    {
      v30 = *v18;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v30,
                                                        0LL,
                                                        0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( v16 < v15->max_length )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v18, v22);
          v31 = this->fields.material;
          if ( v31 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_1BCA91C(
                                                              this->fields.material,
                                                              v15->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v39 = sub_1BCAA60();
              sub_1BCA908(v39, 0LL);
            }
          }
          if ( v16 < v15->max_length )
          {
            *v18 = v31;
            sub_1BCA784(v18, v31);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v32 = v15;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v32, 0LL);
              return;
            }
LABEL_40:
            sub_1BCAA3C(smr, method);
          }
        }
        goto LABEL_41;
      }
      if ( v16 < v15->max_length )
      {
        v33 = *v18;
        v34 = (UnityEngine_Object_o *)this->fields.material;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v33,
                                                          v34,
                                                          0LL);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_Material__TypeInfo,
                                                               method,
                                                               v22,
                                                               v23);
          System_Collections_Generic_List_object____ctor_56235344(
            v25,
            (System_Collections_Generic_IEnumerable_T__o *)v15,
            (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_Material___ctor___76789440);
          if ( v25 )
          {
            method = (const MethodInfo *)this->fields.material;
            items = v25->fields._items;
            v27 = Method_System_Collections_Generic_List_Material__Add__;
            ++v25->fields._version;
            if ( items )
            {
              size = v25->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v25->fields._size = size + 1;
                v29[4] = (Il2CppClass *)method;
                sub_1BCA784(v29 + 4, method);
              }
              smr = (UnityEngine_Material_o *)System_Collections_Generic_List_object___ToArray(
                                                v25,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v32 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Material_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( v16 < v15->max_length )
        {
          smr = *v18;
          if ( !*v18 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0LL);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v38 = (UnityEngine_Object_o *)shader;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v38, shaderAsset, 0LL);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_1BCAA44(sharedMaterials, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1

  if ( (byte_4B11D31 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22803/*"please play!!"*/, v4, v5);
    byte_4B11D31 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    v6 = StringLiteral_22803/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_22803/*"please play!!"*/;
    sub_1BCA784(&this->fields.message, v6);
  }
}


void __fastcall OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Renderer_o *smr; // x0
  UnityEngine_Material_array *sharedMaterials; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  UnityEngine_Material_array *v19; // x21
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w21
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *material; // x22
  UnityEngine_Object_o *v25; // x23
  UnityEngine_Renderer_o *v26; // x19

  if ( (byte_4B11D35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material___ctor___76789440, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Material__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_Material__TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B11D35 = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_13;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0LL);
  if ( sharedMaterials )
  {
    v19 = sharedMaterials;
    if ( *(_QWORD *)&sharedMaterials->max_length )
    {
      v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_Material__TypeInfo,
                                                           v16,
                                                           v17,
                                                           v18);
      System_Collections_Generic_List_object____ctor_56235344(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)v19,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_Material___ctor___76789440);
      if ( !v20 )
        goto LABEL_13;
      v21 = v19->max_length - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v20,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      v25 = (UnityEngine_Object_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      if ( UnityEngine_Object__op_Equality(v25, material, 0LL) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v20,
          v21,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v26 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v20,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v26 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v26, (UnityEngine_Material_array *)smr, 0LL);
          return;
        }
LABEL_13:
        sub_1BCAA3C(smr, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct UnityEngine_Shader_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *shaderAsset; // x21
  __int64 v25; // x1
  __int64 *v26; // x8
  UnityEngine_Object_o *material; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  UnityEngine_Shader_o *v31; // x22
  UnityEngine_Material_o *v32; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *parent; // x20
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  __int64 v39; // x1
  UnityEngine_Object_o *smr; // x21
  __int64 v41; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  __int64 v43; // x1
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v45; // x1
  struct System_String_o *v46; // x1

  if ( (byte_4B11D32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5018/*"Custom/OutlineEffectShader"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19577/*"failed to get SkinnedMeshRenderer component from parent"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22704/*"parent is null. please attach this component to object with parent"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_10229/*"OutlineEffectMaterial"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23910/*"success"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19576/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v20, v21);
    byte_4B11D32 = 1;
  }
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5018/*"Custom/OutlineEffectShader"*/, 0LL);
  this->fields.shaderAsset = v22;
  sub_1BCA784(&this->fields.shaderAsset, v22);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0LL, 0LL) )
  {
    v26 = &StringLiteral_19576/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v31 = this->fields.shaderAsset;
    v32 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v28, v29, v30);
    UnityEngine_Material___ctor(v32, v31, 0LL);
    if ( !v32 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v32, (System_String_o *)StringLiteral_10229/*"OutlineEffectMaterial"*/, 0LL);
    this->fields.material = v32;
    sub_1BCA784(&this->fields.material, v32);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v26 = &StringLiteral_22704/*"parent is null. please attach this component to object with parent"*/;
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_1BCA784(&this->fields.smr, Component_object);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v26 = &StringLiteral_19577/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_1BCAA3C(transform, v34);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v26 = &StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v45);
    v26 = &StringLiteral_23910/*"success"*/;
  }
LABEL_33:
  v46 = (struct System_String_o *)*v26;
  this->fields.message = (struct System_String_o *)*v26;
  sub_1BCA784(&this->fields.message, v46);
}


void __fastcall OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *smr; // x20
  __int64 v9; // x1
  __int64 *v10; // x8
  UnityEngine_SkinnedMeshRenderer_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v14; // x1
  struct System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B11D33 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12889/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_12888/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/, v6, v7);
    byte_4B11D33 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v10 = &StringLiteral_12888/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v15 = (struct System_String_o *)*v10;
    this->fields.message = (struct System_String_o *)*v10;
    sub_1BCA784(&this->fields.message, v15);
    return;
  }
  v11 = this->fields.smr;
  if ( !v11 )
    sub_1BCAA3C(0LL, v9);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v11, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v10 = &StringLiteral_12889/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v14);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v16);
}


void __fastcall OutlineEffectMain__UploadMaterialSettingsToGPU(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_Collections_Generic_List_float__o *Item2; // x1
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  void *material; // x0
  UnityEngine_Material_o *v29; // x20
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v33; // x8
  __int64 v34; // x2
  UnityEngine_Material_o *v35; // x20
  float *v36; // x8
  __int64 v37; // x2
  UnityEngine_Material_o *v38; // x19
  float *v39; // x9
  float *p_z; // x8
  float *p_y; // x10
  float *p_x; // x9
  struct OutlineEffectSettings_o *v43; // x9
  struct OutlineEffectSettings_o *v44; // x8
  struct OutlineEffectSettings_o *v45; // x8
  struct OutlineEffectSettings_o *v46; // x8
  struct OutlineEffectSettings_o *v47; // x8
  struct OutlineEffectSettings_o *v48; // x10
  UnityEngine_Vector4_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11D36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Color__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16406/*"_GradientArrayKeys"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16568/*"_VertexScale"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16458/*"_OutlineShiftPixel"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16333/*"_ClipFade"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16349/*"_ColorKeysLength"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16461/*"_OutlineThickness"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16405/*"_GradientArrayColors"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16565/*"_VertexOffset"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16487/*"_RotationSpeed"*/, v24, v25);
    byte_4B11D36 = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  Item2 = ColorsAndKeys.fields.Item2;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetColorArray_70024680(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16405/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloatArray_70024404(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16406/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0LL);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_42;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetInt(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16349/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0LL);
  v29 = this->fields.material;
  material = OutlineEffectMain__GetMainTexture(this, v30);
  if ( !v29 )
    goto LABEL_42;
  UnityEngine_Material__set_mainTexture(v29, (UnityEngine_Texture_o *)material, 0LL);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  material = (void *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  v33 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v43 = this->fields.settings;
    if ( v43 )
    {
      if ( v33 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16461/*"_OutlineThickness"*/,
          v43->fields.thickness,
          0LL);
        v44 = this->fields.settings;
        if ( v44 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(
              (UnityEngine_Material_o *)material,
              (System_String_o *)StringLiteral_16487/*"_RotationSpeed"*/,
              v44->fields.speed,
              0LL);
            v45 = this->fields.settings;
            if ( v45 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  (UnityEngine_Material_o *)material,
                  (System_String_o *)StringLiteral_16333/*"_ClipFade"*/,
                  v45->fields.clipFade,
                  0LL);
                v46 = this->fields.settings;
                if ( v46 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      (UnityEngine_Material_o *)material,
                      (System_String_o *)StringLiteral_16458/*"_OutlineShiftPixel"*/,
                      v46->fields.outlineShiftPixel,
                      0LL);
                    v47 = this->fields.settings;
                    if ( v47 )
                    {
                      material = this->fields.material;
                      if ( material )
                      {
                        v50.fields.y = v47->fields.vertexScale.fields.y;
                        v50.fields.z = v47->fields.vertexScale.fields.z;
                        v50.fields.x = v47->fields.vertexScale.fields.x;
                        v50.fields.w = 0.0;
                        UnityEngine_Material__SetVector(
                          (UnityEngine_Material_o *)material,
                          (System_String_o *)StringLiteral_16568/*"_VertexScale"*/,
                          v50,
                          0LL);
                        v48 = this->fields.settings;
                        if ( v48 )
                        {
                          v38 = this->fields.material;
                          if ( v38 )
                          {
                            p_z = &v48->fields.vertexOffset.fields.z;
                            p_x = &v48->fields.vertexOffset.fields.x;
                            p_y = &v48->fields.vertexOffset.fields.y;
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
    sub_1BCAA3C(material, Item2);
  }
  if ( !v33 )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16461/*"_OutlineThickness"*/, 5.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16487/*"_RotationSpeed"*/, 3.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16333/*"_ClipFade"*/, 0.8, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16458/*"_OutlineShiftPixel"*/, 2.0, 0LL);
  v35 = this->fields.material;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2);
  if ( !byte_4B11D5C )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, Item2, v34);
    byte_4B11D5C = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_42;
  v36 = (float *)*((_QWORD *)material + 23);
  v49.fields.w = 0.0;
  v49.fields.y = v36[13];
  v49.fields.z = v36[14];
  v49.fields.x = v36[12];
  UnityEngine_Material__SetVector(v35, (System_String_o *)StringLiteral_16568/*"_VertexScale"*/, v49, 0LL);
  v38 = this->fields.material;
  if ( !byte_4B11D5D )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, Item2, v37);
    byte_4B11D5D = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, Item2);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_42;
  v39 = (float *)*((_QWORD *)material + 23);
  p_z = v39 + 17;
  p_y = v39 + 16;
  p_x = v39 + 15;
LABEL_41:
  v51.fields.z = *p_z;
  v51.fields.y = *p_y;
  v51.fields.x = *p_x;
  v51.fields.w = 0.0;
  UnityEngine_Material__SetVector(v38, (System_String_o *)StringLiteral_16565/*"_VertexOffset"*/, v51, 0LL);
}


void __fastcall OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1BCAA3C(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


float __fastcall OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4B11D2B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D2B = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v5 )
    return 0.8;
  v8 = this->fields.settings;
  if ( !v8 )
    sub_1BCAA3C(v5, v6);
  return v8->fields.clipFade;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  OutlineEffectSettings_c *v9; // x0
  struct OutlineEffectSettings_o *v11; // x8

  if ( (byte_4B11D2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v4, v5);
    byte_4B11D2F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v7 )
  {
    v9 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v8);
    return OutlineEffectSettings__get_DefaultGradient((const MethodInfo *)v9);
  }
  else
  {
    v11 = this->fields.settings;
    if ( !v11 )
      sub_1BCAA3C(v7, v8);
    return v11->fields.gradient;
  }
}


float __fastcall OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4B11D2D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D2D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 2.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    return v8->fields.outlineShiftPixel;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4B11D29 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D29 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 3.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    return v8->fields.speed;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_4B11D27 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D27 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 5.0;
  if ( !v5 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    return v8->fields.thickness;
  }
  return result;
}


void __fastcall OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_4B11D2C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B11D2C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_1BCAA3C(v7, v8);
    v9->fields.clipFade = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
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

  if ( (byte_4B11D30 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B11D30 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
  {
    v7 = this->fields.settings;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    v7->fields.gradient = value;
    sub_1BCA784(&v7->fields.gradient, value);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void __fastcall OutlineEffectMain__set_OutlineShiftPixel(
        OutlineEffectMain_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_4B11D2E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B11D2E = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_1BCAA3C(v7, v8);
    v9->fields.outlineShiftPixel = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void __fastcall OutlineEffectMain__set_Speed(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_4B11D2A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B11D2A = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_1BCAA3C(v7, v8);
    v9->fields.speed = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}


void __fastcall OutlineEffectMain__set_Thickness(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  struct OutlineEffectSettings_o *v9; // x8

  if ( (byte_4B11D28 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B11D28 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v7 )
  {
    v9 = this->fields.settings;
    if ( !v9 )
      sub_1BCAA3C(v7, v8);
    v9->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v8);
  }
}