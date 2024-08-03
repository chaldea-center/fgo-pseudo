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

  if ( (byte_49F8052 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8052 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
  {
    OutlineEffectMain__RemoveOutlineMaterialFromSharedMaterials(this, v4);
    OutlineEffectMain__DestroyMaterial(v5, &this->fields.material, v6);
    this->fields.material = 0LL;
    sub_1B6406C(&this->fields.material);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  p_tinyPolygonVertexBuffer = &this->fields.tinyPolygonVertexBuffer;
  v7 = tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(v7, 0LL);
    *p_tinyPolygonVertexBuffer = 0LL;
    sub_1B6406C(p_tinyPolygonVertexBuffer);
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

  if ( (byte_49F8053 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, mat);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F8053 = 1;
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
      UnityEngine_Object__Destroy_69127736(v7, 0LL);
    else
      UnityEngine_Object__DestroyImmediate_69127924(v7, 0LL);
    *mat = 0LL;
    sub_1B6406C(mat);
  }
}


UnityEngine_GradientColorKey_array *__fastcall OutlineEffectMain__GetColorKeys(
        OutlineEffectMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x20
  UnityEngine_Gradient_o *gradient; // x0
  struct OutlineEffectSettings_o *v6; // x8
  OutlineEffectSettings_c *v7; // x0

  if ( (byte_49F8050 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v3);
    byte_49F8050 = 1;
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
    sub_1B64324(gradient);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_Color__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_float__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo_37FDA48 *v18; // x4
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  float *p_r; // x25
  int v22; // s0
  int v23; // s1
  int v24; // s2
  int v25; // s3
  float v26; // s8
  struct UnityEngine_Color_array *items; // x9
  _QWORD *v28; // x8
  __int64 size; // x10
  Il2CppObject *v30; // x9
  struct System_Single_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  struct System_Collections_Generic_List_Color__o *v34; // x0 OVERLAPPED
  struct System_Collections_Generic_List_float__o *v35; // x1
  struct System_Collections_Generic_List_Color__o *v36; // [xsp+0h] [xbp-60h] BYREF
  struct System_Collections_Generic_List_float__o *v37; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v38; // 0:x0.16
  System_ValueTuple_List_Color___List_float___o result; // 0:x0.16

  if ( (byte_49F8051 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_float__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Color__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_float___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Color___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_float__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_Color__TypeInfo, v7);
    sub_1B640C8(&Method_System_ValueTuple_List_Color___List_float____ctor__, v8);
    byte_49F8051 = 1;
  }
  ColorKeys = OutlineEffectMain__GetColorKeys(this, method);
  v12 = (System_Collections_Generic_List_Color__o *)sub_1B64314(
                                                      System_Collections_Generic_List_Color__TypeInfo,
                                                      v10,
                                                      v11);
  System_Collections_Generic_List_Color____ctor(
    v12,
    (const MethodInfo_346D2C4 *)Method_System_Collections_Generic_List_Color___ctor__);
  v15 = (System_Collections_Generic_List_float__o *)sub_1B64314(
                                                      System_Collections_Generic_List_float__TypeInfo,
                                                      v13,
                                                      v14);
  System_Collections_Generic_List_float____ctor(
    v15,
    (const MethodInfo_34CDF04 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !ColorKeys )
    goto LABEL_19;
  v19 = *(_QWORD *)&ColorKeys->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    p_r = &ColorKeys->m_Items[1].fields.color.fields.r;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
        sub_1B6432C(v16, v17);
      if ( !v12 )
        break;
      v22 = *((_DWORD *)p_r - 4);
      v23 = *((_DWORD *)p_r - 3);
      v24 = *((_DWORD *)p_r - 2);
      v25 = *((_DWORD *)p_r - 1);
      v26 = *p_r;
      items = v12->fields._items;
      v28 = Method_System_Collections_Generic_List_Color__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Color___AddWithResize(
          v12,
          *(UnityEngine_Color_o *)&v22,
          *(const MethodInfo_346DB50 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj + size;
        v12->fields._size = size + 1;
        LODWORD(v30[2].klass) = v22;
        HIDWORD(v30[2].klass) = v23;
        LODWORD(v30[2].monitor) = v24;
        HIDWORD(v30[2].monitor) = v25;
      }
      if ( !v15 )
        break;
      v31 = v15->fields._items;
      v32 = Method_System_Collections_Generic_List_float__Add__;
      ++v15->fields._version;
      if ( !v31 )
        break;
      v33 = v15->fields._size;
      if ( (unsigned int)v33 >= v31->max_length )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v15,
          v26,
          *(const MethodInfo_34CE760 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = v33 + 1;
        v31->m_Items[v33 + 1] = v26;
      }
      LODWORD(v19) = ColorKeys->max_length;
      ++v20;
      p_r += 5;
      if ( (__int64)v20 >= (int)v19 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1B64324(v16);
  }
LABEL_18:
  v38.fields.Item1 = (Il2CppObject *)&v36;
  v38.fields.Item2 = (Il2CppObject *)v12;
  v36 = 0LL;
  v37 = 0LL;
  System_ValueTuple_object__object____ctor(
    v38,
    (Il2CppObject *)v15,
    (Il2CppObject *)Method_System_ValueTuple_List_Color___List_float____ctor__,
    v18);
  v34 = v36;
  v35 = v37;
  result.fields.Item2 = v35;
  result.fields.Item1 = v34;
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

  if ( (byte_49F804F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_23156/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/, v3);
    sub_1B640C8(&StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v4);
    byte_49F804F = 1;
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
        v7 = &StringLiteral_23156/*"sharedMaterials from SkinnedMeshRenderer returned null value"*/;
        goto LABEL_14;
      }
      smr = (UnityEngine_SkinnedMeshRenderer_o *)sharedMaterials->m_Items[0];
      if ( smr )
        return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)smr, 0LL);
    }
LABEL_15:
    sub_1B64324(smr);
  }
  v7 = &StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
LABEL_14:
  this->fields.message = (struct System_String_o *)*v7;
  sub_1B6406C(&this->fields.message);
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
  __int64 v9; // x1
  __int64 v10; // x8
  UnityEngine_Material_array *v11; // x20
  unsigned int v12; // w24
  char *v13; // x21
  UnityEngine_Material_o **v14; // x21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *v16; // t1
  UnityEngine_Object_o *material; // x23
  const MethodInfo *v18; // x2
  int max_length; // w8
  System_Collections_Generic_List_object__o *v20; // x21
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  UnityEngine_Material_o *v26; // x22
  struct UnityEngine_Material_o *v27; // x22
  UnityEngine_Material_array *v28; // x1
  UnityEngine_Material_o *v29; // x22
  UnityEngine_Object_o *v30; // x23
  UnityEngine_Shader_o *shader; // x0
  UnityEngine_Object_o *shaderAsset; // x22
  UnityEngine_Object_o *v33; // x23
  __int64 v34; // x0

  if ( (byte_49F804C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material___ctor___75659184, v4);
    sub_1B640C8(&System_Collections_Generic_List_Material__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F804C = 1;
  }
  smr = (UnityEngine_Material_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_40;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)smr, 0LL);
  if ( !sharedMaterials )
    return;
  v10 = *(_QWORD *)&sharedMaterials->max_length;
  v11 = sharedMaterials;
  if ( !v10 )
    return;
  if ( !(_DWORD)v10 )
    goto LABEL_41;
  v12 = v10 - 1;
  v13 = (char *)sharedMaterials + 8 * (int)v10 - 8;
  v16 = (UnityEngine_Object_o *)*((_QWORD *)v13 + 4);
  v14 = (UnityEngine_Material_o **)(v13 + 32);
  v15 = v16;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v15, material, 0LL);
  if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
  {
    max_length = v11->max_length;
    if ( max_length < 2 )
      goto LABEL_12;
    if ( v12 < max_length )
    {
      v26 = *v14;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v26,
                                                        0LL,
                                                        0LL);
      if ( ((unsigned __int8)sharedMaterials & 1) != 0 )
      {
LABEL_20:
        if ( v12 < v11->max_length )
        {
          OutlineEffectMain__DestroyMaterial((OutlineEffectMain_o *)sharedMaterials, v14, v18);
          v27 = this->fields.material;
          if ( v27 )
          {
            sharedMaterials = (UnityEngine_Material_array *)sub_1B64204(
                                                              this->fields.material,
                                                              v11->obj.klass->_1.element_class);
            if ( !sharedMaterials )
            {
              v34 = sub_1B64348();
              sub_1B641F0(v34, 0LL);
            }
          }
          if ( v12 < v11->max_length )
          {
            *v14 = v27;
            sub_1B6406C(v14);
            smr = (UnityEngine_Material_o *)this->fields.smr;
            if ( smr )
            {
              v28 = v11;
LABEL_29:
              UnityEngine_Renderer__set_sharedMaterials((UnityEngine_Renderer_o *)smr, v28, 0LL);
              return;
            }
LABEL_40:
            sub_1B64324(smr);
          }
        }
        goto LABEL_41;
      }
      if ( v12 < v11->max_length )
      {
        v29 = *v14;
        v30 = (UnityEngine_Object_o *)this->fields.material;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v29,
                                                          v30,
                                                          0LL);
        if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
        {
LABEL_12:
          v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_Material__TypeInfo,
                                                               v9,
                                                               v18);
          System_Collections_Generic_List_object____ctor_55234504(
            v20,
            (System_Collections_Generic_IEnumerable_T__o *)v11,
            (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_Material___ctor___75659184);
          if ( v20 )
          {
            v21 = (Il2CppObject *)this->fields.material;
            items = v20->fields._items;
            v23 = Method_System_Collections_Generic_List_Material__Add__;
            ++v20->fields._version;
            if ( items )
            {
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  v21,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v25[4] = (Il2CppClass *)v21;
                sub_1B6406C(v25 + 4);
              }
              smr = (UnityEngine_Material_o *)System_Collections_Generic_List_object___ToArray(
                                                v20,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Material__ToArray__);
              if ( this->fields.smr )
              {
                v28 = (UnityEngine_Material_array *)smr;
                smr = (UnityEngine_Material_o *)this->fields.smr;
                goto LABEL_29;
              }
            }
          }
          goto LABEL_40;
        }
        if ( v12 < v11->max_length )
        {
          smr = *v14;
          if ( !*v14 )
            goto LABEL_40;
          shader = UnityEngine_Material__get_shader(smr, 0LL);
          shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
          v33 = (UnityEngine_Object_o *)shader;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          sharedMaterials = (UnityEngine_Material_array *)UnityEngine_Object__op_Equality(v33, shaderAsset, 0LL);
          if ( ((unsigned __int8)sharedMaterials & 1) == 0 )
            goto LABEL_12;
          goto LABEL_20;
        }
      }
    }
LABEL_41:
    sub_1B6432C(sharedMaterials, v9);
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

  if ( (byte_49F8049 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22470/*"please play!!"*/, v3);
    byte_49F8049 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    this->fields.message = (struct System_String_o *)StringLiteral_22470/*"please play!!"*/;
    sub_1B6406C(&this->fields.message);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Material_array *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x0
  UnityEngine_Object_o *material; // x22
  UnityEngine_Object_o *v17; // x23
  UnityEngine_Renderer_o *v18; // x19

  if ( (byte_49F804D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material___ctor___75659184, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Material__get_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_List_Material__TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F804D = 1;
  }
  smr = (UnityEngine_Renderer_o *)this->fields.smr;
  if ( !smr )
    goto LABEL_13;
  sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(smr, 0LL);
  if ( sharedMaterials )
  {
    v12 = sharedMaterials;
    if ( *(_QWORD *)&sharedMaterials->max_length )
    {
      v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_Material__TypeInfo,
                                                           v10,
                                                           v11);
      System_Collections_Generic_List_object____ctor_55234504(
        v13,
        (System_Collections_Generic_IEnumerable_T__o *)v12,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_Material___ctor___75659184);
      if ( !v13 )
        goto LABEL_13;
      v14 = v12->max_length - 1;
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v14,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Material__get_Item__);
      material = (UnityEngine_Object_o *)this->fields.material;
      v17 = (UnityEngine_Object_o *)Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v17, material, 0LL) )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v13,
          v14,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_Material__RemoveAt__);
        v18 = (UnityEngine_Renderer_o *)this->fields.smr;
        smr = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Material__ToArray__);
        if ( v18 )
        {
          UnityEngine_Renderer__set_sharedMaterials(v18, (UnityEngine_Material_array *)smr, 0LL);
          return;
        }
LABEL_13:
        sub_1B64324(smr);
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
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Shader_o *v17; // x22
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x20
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v25; // x1

  if ( (byte_49F804A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_4926/*"Custom/OutlineEffectShader"*/, v5);
    sub_1B640C8(&StringLiteral_19298/*"failed to get SkinnedMeshRenderer component from parent"*/, v6);
    sub_1B640C8(&StringLiteral_22371/*"parent is null. please attach this component to object with parent"*/, v7);
    sub_1B640C8(&StringLiteral_10047/*"OutlineEffectMaterial"*/, v8);
    sub_1B640C8(&StringLiteral_23565/*"success"*/, v9);
    sub_1B640C8(&StringLiteral_19297/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/, v10);
    sub_1B640C8(&StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v11);
    byte_49F804A = 1;
  }
  this->fields.shaderAsset = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4926/*"Custom/OutlineEffectShader"*/, 0LL);
  sub_1B6406C(&this->fields.shaderAsset);
  shaderAsset = (UnityEngine_Object_o *)this->fields.shaderAsset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shaderAsset, 0LL, 0LL) )
  {
    v13 = &StringLiteral_19297/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
    goto LABEL_33;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v17 = this->fields.shaderAsset;
    v18 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v15, v16);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    if ( !v18 )
      goto LABEL_34;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_10047/*"OutlineEffectMaterial"*/, 0LL);
    this->fields.material = v18;
    sub_1B6406C(&this->fields.material);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v13 = &StringLiteral_22371/*"parent is null. please attach this component to object with parent"*/;
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
                                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  p_smr = &this->fields.smr;
  sub_1B6406C(&this->fields.smr);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v13 = &StringLiteral_19298/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_33;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_34:
    sub_1B64324(transform);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v13 = &StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
  }
  else
  {
    normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
      OutlineEffectMain__SetupSkinnedMeshRenderer(this, v25);
    v13 = &StringLiteral_23565/*"success"*/;
  }
LABEL_33:
  this->fields.message = (struct System_String_o *)*v13;
  sub_1B6406C(&this->fields.message);
}


void __fastcall OutlineEffectMain__SetupSkinnedMeshRenderer(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *smr; // x20
  __int64 *v6; // x8
  UnityEngine_SkinnedMeshRenderer_o *v7; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_49F804B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12669/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v3);
    sub_1B640C8(&StringLiteral_12668/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/, v4);
    byte_49F804B = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v6 = &StringLiteral_12668/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    this->fields.message = (struct System_String_o *)*v6;
    sub_1B6406C(&this->fields.message);
    return;
  }
  v7 = this->fields.smr;
  if ( !v7 )
    sub_1B64324(0LL);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v6 = &StringLiteral_12669/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectMain__InsertOutlineMaterialToSharedMaterialsAtLastIndex(this, v9);
  OutlineEffectMain__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v10);
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
  System_ValueTuple_List_Color___List_float___o ColorsAndKeys; // kr00_16
  void *material; // x0
  UnityEngine_Material_o *v16; // x20
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *settings; // x20
  struct UnityEngine_Material_o *v19; // x8
  __int64 v20; // x1
  UnityEngine_Material_o *v21; // x20
  float *v22; // x8
  __int64 v23; // x1
  UnityEngine_Material_o *v24; // x19
  float *v25; // x9
  float *p_z; // x8
  float *p_y; // x10
  float *p_x; // x9
  struct OutlineEffectSettings_o *v29; // x9
  struct OutlineEffectSettings_o *v30; // x8
  struct OutlineEffectSettings_o *v31; // x8
  struct OutlineEffectSettings_o *v32; // x8
  struct OutlineEffectSettings_o *v33; // x8
  struct OutlineEffectSettings_o *v34; // x10
  UnityEngine_Vector4_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F804E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Color__get_Count__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16168/*"_GradientArrayKeys"*/, v5);
    sub_1B640C8(&StringLiteral_16330/*"_VertexScale"*/, v6);
    sub_1B640C8(&StringLiteral_16220/*"_OutlineShiftPixel"*/, v7);
    sub_1B640C8(&StringLiteral_16097/*"_ClipFade"*/, v8);
    sub_1B640C8(&StringLiteral_16113/*"_ColorKeysLength"*/, v9);
    sub_1B640C8(&StringLiteral_16223/*"_OutlineThickness"*/, v10);
    sub_1B640C8(&StringLiteral_16167/*"_GradientArrayColors"*/, v11);
    sub_1B640C8(&StringLiteral_16327/*"_VertexOffset"*/, v12);
    sub_1B640C8(&StringLiteral_16249/*"_RotationSpeed"*/, v13);
    byte_49F804E = 1;
  }
  ColorsAndKeys = OutlineEffectMain__GetColorsAndKeys(this, method);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetColorArray_68998260(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16167/*"_GradientArrayColors"*/,
    ColorsAndKeys.fields.Item1,
    0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloatArray_68997984(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16168/*"_GradientArrayKeys"*/,
    ColorsAndKeys.fields.Item2,
    0LL);
  if ( !ColorsAndKeys.fields.Item1 )
    goto LABEL_42;
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetInt(
    (UnityEngine_Material_o *)material,
    (System_String_o *)StringLiteral_16113/*"_ColorKeysLength"*/,
    ColorsAndKeys.fields.Item1->fields._size,
    0LL);
  v16 = this->fields.material;
  material = OutlineEffectMain__GetMainTexture(this, v17);
  if ( !v16 )
    goto LABEL_42;
  UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)material, 0LL);
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  material = (void *)UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  v19 = this->fields.material;
  if ( ((unsigned __int8)material & 1) == 0 )
  {
    v29 = this->fields.settings;
    if ( v29 )
    {
      if ( v19 )
      {
        UnityEngine_Material__SetFloat(
          this->fields.material,
          (System_String_o *)StringLiteral_16223/*"_OutlineThickness"*/,
          v29->fields.thickness,
          0LL);
        v30 = this->fields.settings;
        if ( v30 )
        {
          material = this->fields.material;
          if ( material )
          {
            UnityEngine_Material__SetFloat(
              (UnityEngine_Material_o *)material,
              (System_String_o *)StringLiteral_16249/*"_RotationSpeed"*/,
              v30->fields.speed,
              0LL);
            v31 = this->fields.settings;
            if ( v31 )
            {
              material = this->fields.material;
              if ( material )
              {
                UnityEngine_Material__SetFloat(
                  (UnityEngine_Material_o *)material,
                  (System_String_o *)StringLiteral_16097/*"_ClipFade"*/,
                  v31->fields.clipFade,
                  0LL);
                v32 = this->fields.settings;
                if ( v32 )
                {
                  material = this->fields.material;
                  if ( material )
                  {
                    UnityEngine_Material__SetFloat(
                      (UnityEngine_Material_o *)material,
                      (System_String_o *)StringLiteral_16220/*"_OutlineShiftPixel"*/,
                      v32->fields.outlineShiftPixel,
                      0LL);
                    v33 = this->fields.settings;
                    if ( v33 )
                    {
                      material = this->fields.material;
                      if ( material )
                      {
                        v36.fields.y = v33->fields.vertexScale.fields.y;
                        v36.fields.z = v33->fields.vertexScale.fields.z;
                        v36.fields.x = v33->fields.vertexScale.fields.x;
                        v36.fields.w = 0.0;
                        UnityEngine_Material__SetVector(
                          (UnityEngine_Material_o *)material,
                          (System_String_o *)StringLiteral_16330/*"_VertexScale"*/,
                          v36,
                          0LL);
                        v34 = this->fields.settings;
                        if ( v34 )
                        {
                          v24 = this->fields.material;
                          if ( v24 )
                          {
                            p_z = &v34->fields.vertexOffset.fields.z;
                            p_x = &v34->fields.vertexOffset.fields.x;
                            p_y = &v34->fields.vertexOffset.fields.y;
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
    sub_1B64324(material);
  }
  if ( !v19 )
    goto LABEL_42;
  UnityEngine_Material__SetFloat(this->fields.material, (System_String_o *)StringLiteral_16223/*"_OutlineThickness"*/, 5.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16249/*"_RotationSpeed"*/, 3.0, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16097/*"_ClipFade"*/, 0.8, 0LL);
  material = this->fields.material;
  if ( !material )
    goto LABEL_42;
  UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16220/*"_OutlineShiftPixel"*/, 2.0, 0LL);
  v21 = this->fields.material;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_49F808C )
  {
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v20);
    byte_49F808C = 1;
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
  v35.fields.w = 0.0;
  v35.fields.y = v22[13];
  v35.fields.z = v22[14];
  v35.fields.x = v22[12];
  UnityEngine_Material__SetVector(v21, (System_String_o *)StringLiteral_16330/*"_VertexScale"*/, v35, 0LL);
  v24 = this->fields.material;
  if ( !byte_49F808D )
  {
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v23);
    byte_49F808D = 1;
  }
  material = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    material = OutlineEffectSettings_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_42;
  v25 = (float *)*((_QWORD *)material + 23);
  p_z = v25 + 17;
  p_y = v25 + 16;
  p_x = v25 + 15;
LABEL_41:
  v37.fields.z = *p_z;
  v37.fields.y = *p_y;
  v37.fields.x = *p_x;
  v37.fields.w = 0.0;
  UnityEngine_Material__SetVector(v24, (System_String_o *)StringLiteral_16327/*"_VertexOffset"*/, v37, 0LL);
}


void __fastcall OutlineEffectMain__UploadNormalsToMesh(
        OutlineEffectMain_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1B64324(this);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


float __fastcall OutlineEffectMain__get_ClipFade(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  struct OutlineEffectSettings_o *v6; // x8

  if ( (byte_49F8043 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8043 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v4 )
    return 0.8;
  v6 = this->fields.settings;
  if ( !v6 )
    sub_1B64324(v4);
  return v6->fields.clipFade;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectMain__get_Gradient(OutlineEffectMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v5; // x0
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_49F8047 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v3);
    byte_49F8047 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( v5 )
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
      sub_1B64324(v5);
    return v8->fields.gradient;
  }
}


float __fastcall OutlineEffectMain__get_OutlineShiftPixel(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct OutlineEffectSettings_o *v6; // x8

  if ( (byte_49F8045 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8045 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 2.0;
  if ( !v4 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      sub_1B64324(v4);
    return v6->fields.outlineShiftPixel;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Speed(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct OutlineEffectSettings_o *v6; // x8

  if ( (byte_49F8041 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8041 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 3.0;
  if ( !v4 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      sub_1B64324(v4);
    return v6->fields.speed;
  }
  return result;
}


float __fastcall OutlineEffectMain__get_Thickness(OutlineEffectMain_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct OutlineEffectSettings_o *v6; // x8

  if ( (byte_49F803F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F803F = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  result = 5.0;
  if ( !v4 )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      sub_1B64324(v4);
    return v6->fields.thickness;
  }
  return result;
}


void __fastcall OutlineEffectMain__set_ClipFade(OutlineEffectMain_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  struct OutlineEffectSettings_o *v8; // x8

  if ( (byte_49F8044 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8044 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1B64324(v6);
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
  struct OutlineEffectSettings_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49F8048 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, value);
    byte_49F8048 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
  {
    v6 = this->fields.settings;
    if ( !v6 )
      sub_1B64324(0LL);
    v6->fields.gradient = value;
    sub_1B6406C(&v6->fields.gradient);
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
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

  if ( (byte_49F8046 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8046 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1B64324(v6);
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

  if ( (byte_49F8042 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8042 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1B64324(v6);
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

  if ( (byte_49F8040 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8040 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.settings;
    if ( !v8 )
      sub_1B64324(v6);
    v8->fields.thickness = value;
    OutlineEffectMain__UploadMaterialSettingsToGPU(this, v7);
  }
}