void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  if ( (byte_42B032D & 1) == 0 )
  {
    sub_B52984(&FGOMeshExploder_TypeInfo);
    byte_42B032D = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B032C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42B032C = 1;
  }
  LOWORD(this->fields.mass) = 257;
  this->fields.angularVelocity.fields.x = 1.0;
  *(UnityEngine_Vector3_o *)&this->fields.angularVelocity.fields.y = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.maxPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.maxBrokenSpeed = xmmword_32787A0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.exploded = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.exploded, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector4_array *__fastcall FGOMeshExploder__CalculateMeshTangents(
        FGOMeshExploder_o *this,
        System_Collections_Generic_List_Vector3__o *vertices,
        System_Collections_Generic_List_Vector2__o *uvs,
        System_Collections_Generic_List_Vector3__o *normals,
        System_Collections_Generic_List_int__o *triangles,
        const MethodInfo *method)
{
  int32_t size; // w26
  unsigned int v11; // w22
  __int64 v12; // x20
  __int64 v13; // x21
  unsigned int v14; // w22
  unsigned int v15; // w9
  struct System_Int32_array *items; // x8
  __int64 v17; // x27
  __int64 v18; // x19
  unsigned int v19; // w26
  unsigned int v20; // w22
  unsigned int v21; // w9
  __int64 v22; // x22
  struct UnityEngine_Vector3_array *v23; // x8
  float32x2_t *v24; // x10
  float32x2_t v25; // d8
  float v26; // s15
  float32x2_t *v27; // x10
  float v28; // s9
  float32x2_t *v29; // x8
  unsigned int v30; // w9
  struct UnityEngine_Vector2_array *v31; // x8
  float32x2_t v32; // d10
  float *v33; // x10
  float v34; // s13
  float v35; // s14
  float *v36; // x10
  float v37; // s11
  float v38; // s12
  float *v39; // x8
  float v40; // s3
  float32x2_t v41; // d4
  float v42; // s6
  float v43; // s7
  float32x2_t v44; // d1
  float32x2_t *v45; // x8
  float v46; // s5
  float32x2_t v47; // d16
  float v48; // s7
  float v49; // s18
  float32x2_t *v50; // x8
  float v51; // s18
  float32x2_t *v52; // x8
  float v53; // s7
  float32x2_t *v54; // x8
  float32x2_t v55; // d0
  float v56; // s1
  float v57; // s3
  float32x2_t *v58; // x8
  float v59; // s3
  float32x2_t *v60; // x8
  float v61; // s1
  unsigned __int64 v62; // x22
  int32_t *p_maxPieceVertex; // x23
  __int64 v64; // x24
  char *v65; // x8
  __int64 v66; // x9
  float v67; // w8
  float v68; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s3
  float v72; // s5
  float v73; // s4
  float v74; // s0
  __int64 v76; // x0
  int v77; // [xsp+0h] [xbp-E0h]
  UnityEngine_Vector4_array *v78; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_Vector3__o *v79; // [xsp+10h] [xbp-D0h]
  int32_t v80; // [xsp+1Ch] [xbp-C4h]
  float32x2_t v81; // [xsp+20h] [xbp-C0h]
  float v82; // [xsp+2Ch] [xbp-B4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-A0h] BYREF

  if ( (byte_42B032B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&UnityEngine_Vector3___TypeInfo);
    this = (FGOMeshExploder_o *)sub_B52984(&UnityEngine_Vector4___TypeInfo);
    byte_42B032B = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_53;
  v79 = normals;
  if ( !vertices )
    goto LABEL_53;
  size = triangles->fields._size;
  v11 = vertices->fields._size;
  v12 = sub_B5299C(UnityEngine_Vector3___TypeInfo, v11);
  v13 = sub_B5299C(UnityEngine_Vector3___TypeInfo, v11);
  v77 = v11;
  this = (FGOMeshExploder_o *)sub_B5299C(UnityEngine_Vector4___TypeInfo, v11);
  v80 = size;
  v78 = (UnityEngine_Vector4_array *)this;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = triangles->fields._size;
      if ( v15 <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      items = triangles->fields._items;
      v17 = items->m_Items[v14 + 1];
      if ( v15 <= v14 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v18 = items->m_Items[v14 + 1 + 1];
      v20 = v14 + 2;
      v19 = v20;
      if ( v15 <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = vertices->fields._size;
      v22 = items->m_Items[v20 + 1];
      if ( v21 <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v23 = vertices->fields._items;
      v24 = (float32x2_t *)((char *)v23 + 12 * v17);
      v25.n64_u64[0] = v24[4].n64_u64[0];
      v26 = v24[5].n64_f32[0];
      if ( v21 <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v27 = (float32x2_t *)((char *)v23 + 12 * v18);
      v28 = v27[5].n64_f32[0];
      if ( v21 <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !uvs )
        break;
      v29 = (float32x2_t *)((char *)v23 + 12 * v22);
      v30 = uvs->fields._size;
      v81.n64_u64[0] = v29[4].n64_u64[0];
      v82 = v29[5].n64_f32[0];
      if ( v30 <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v31 = uvs->fields._items;
      v32.n64_u64[0] = v27[4].n64_u64[0];
      v33 = (float *)(&v31->obj.klass + v17);
      v34 = v33[8];
      v35 = v33[9];
      if ( v30 <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v36 = (float *)(&v31->obj.klass + v18);
      v38 = v36[8];
      v37 = v36[9];
      if ( v30 <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v12 )
        break;
      if ( (unsigned int)v17 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_52;
      v39 = (float *)(&v31->obj.klass + v22);
      v40 = v38 - v34;
      v41.n64_u64[0] = vsub_f32(v81, v25).n64_u64[0];
      v42 = v39[8] - v34;
      v43 = v39[9] - v35;
      v44.n64_u64[0] = vsub_f32(v32, v25).n64_u64[0];
      v45 = (float32x2_t *)(v12 + 12 * v17);
      v46 = 1.0 / (float)((float)((float)(v38 - v34) * v43) - (float)((float)(v37 - v35) * v42));
      v47.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v44, v43), vmul_n_f32(v41, v37 - v35)), v46).n64_u64[0];
      v48 = (float)((float)((float)(v28 - v26) * v43) - (float)((float)(v82 - v26) * (float)(v37 - v35))) * v46;
      v49 = v48 + v45[5].n64_f32[0];
      v45[4].n64_u64[0] = vadd_f32(v47, v45[4]).n64_u64[0];
      v45[5].n64_f32[0] = v49;
      if ( (unsigned int)v18 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_52;
      v50 = (float32x2_t *)(v12 + 12 * v18);
      v51 = v48 + v50[5].n64_f32[0];
      v50[4].n64_u64[0] = vadd_f32(v47, v50[4]).n64_u64[0];
      v50[5].n64_f32[0] = v51;
      if ( (unsigned int)v22 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_52;
      v52 = (float32x2_t *)(v12 + 12 * v22);
      v53 = v48 + v52[5].n64_f32[0];
      v52[4].n64_u64[0] = vadd_f32(v47, v52[4]).n64_u64[0];
      v52[5].n64_f32[0] = v53;
      if ( !v13 )
        break;
      if ( (unsigned int)v17 >= *(_DWORD *)(v13 + 24) )
        goto LABEL_52;
      v54 = (float32x2_t *)(v13 + 12 * v17);
      v55.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v41, v40), vmul_n_f32(v44, v42)), v46).n64_u64[0];
      v56 = (float)((float)((float)(v82 - v26) * v40) - (float)((float)(v28 - v26) * v42)) * v46;
      v57 = v56 + v54[5].n64_f32[0];
      v54[4].n64_u64[0] = vadd_f32(v55, v54[4]).n64_u64[0];
      v54[5].n64_f32[0] = v57;
      if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24)
        || (v58 = (float32x2_t *)(v13 + 12 * v18),
            v59 = v56 + v58[5].n64_f32[0],
            v58[4].n64_u64[0] = vadd_f32(v55, v58[4]).n64_u64[0],
            v58[5].n64_f32[0] = v59,
            (unsigned int)v22 >= *(_DWORD *)(v13 + 24)) )
      {
LABEL_52:
        v76 = sub_B52A88(this);
        sub_B52A28(v76, 0LL);
      }
      v60 = (float32x2_t *)(v13 + 12 * v22);
      v14 = v19 + 1;
      v61 = v56 + v60[5].n64_f32[0];
      v60[4].n64_u64[0] = vadd_f32(v55, v60[4]).n64_u64[0];
      v60[5].n64_f32[0] = v61;
      if ( (int)(v19 + 1) >= v80 )
        goto LABEL_35;
    }
LABEL_53:
    sub_B52A5C(this, vertices);
  }
LABEL_35:
  if ( v77 >= 1 )
  {
    if ( v79 )
    {
      v62 = 0LL;
      p_maxPieceVertex = &this->fields.maxPieceVertex;
      v64 = 32LL;
      while ( 1 )
      {
        if ( v62 >= (unsigned int)v79->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v65 = (char *)v79->fields._items + v64;
        v66 = *(_QWORD *)v65;
        LODWORD(v65) = *((_DWORD *)v65 + 2);
        *(_QWORD *)&normal.fields.x = v66;
        LODWORD(normal.fields.z) = (_DWORD)v65;
        if ( !v12 )
          break;
        if ( v62 >= *(unsigned int *)(v12 + 24) )
          goto LABEL_52;
        v67 = *(float *)(v12 + v64 + 8);
        *(_QWORD *)&tangent.fields.x = *(_QWORD *)(v12 + v64);
        tangent.fields.z = v67;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v78 )
          break;
        if ( v62 >= v78->max_length )
          goto LABEL_52;
        *((UnityEngine_Vector3_o *)p_maxPieceVertex - 1) = tangent;
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__Cross(normal, tangent, 0LL);
        if ( !v13 )
          break;
        if ( v62 >= *(unsigned int *)(v13 + 24) || v62 >= v78->max_length )
          goto LABEL_52;
        v72 = *(float *)(v13 + v64 + 4);
        v71 = *(float *)(v13 + v64 + 8);
        v73 = *(float *)(v13 + v64);
        ++v62;
        v64 += 12LL;
        if ( (float)((float)(v70 * v71) + (float)((float)(v68 * v73) + (float)(v69 * v72))) >= 0.0 )
          v74 = 1.0;
        else
          v74 = -1.0;
        *(float *)p_maxPieceVertex = v74;
        p_maxPieceVertex += 4;
        if ( (__int64)v62 >= v77 )
          return v78;
      }
    }
    goto LABEL_53;
  }
  return v78;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOMeshExploder__CreateMeshPiece(
        FGOMeshExploder_o *this,
        UnityEngine_Transform_o *target,
        UnityEngine_Quaternion_o rot,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o faceNormal,
        int32_t index,
        System_Int32_array *tri,
        UnityEngine_Vector3_array *Vtx,
        UnityEngine_Vector2_array *UVs,
        int32_t vtxCount,
        bool isActive,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  FGOMeshExploder_o *v20; // x25
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *onBroken; // x20
  UnityEngine_Renderer_o *v23; // x19
  UnityEngine_Renderer_o *v24; // x20
  FGOMeshExploder_o *v25; // x21
  System_Array_o *v26; // x28
  System_Array_o *materials; // x21
  System_Array_o *v28; // x21
  FGOMeshExploder_o *v29; // x20
  System_Array_o *v30; // x21
  System_Array_o *v31; // x20
  System_Collections_Generic_List_Vector3__o *v32; // x27
  System_Collections_Generic_List_Vector2__o *v33; // x28
  System_Collections_Generic_List_int__o *v34; // x21
  int v35; // w20
  int v36; // w19
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v38; // w8
  int v39; // w10
  __int64 v40; // x8
  il2cpp_array_size_t v41; // w12
  unsigned int v42; // w9
  __int64 v43; // x9
  __int64 v44; // x10
  il2cpp_array_size_t v45; // w11
  float *v46; // x11
  float v47; // s8
  float v48; // s15
  float v49; // s9
  float *v50; // x11
  float v51; // s1
  float v52; // s2
  float v53; // s13
  float *v54; // x11
  float v55; // s10
  float v56; // s11
  float v57; // s14
  float v58; // s12
  float PieceDeltaSqrSize; // s0
  UnityEngine_GameObject_o *v60; // x22
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v64; // x0
  const MethodInfo *v65; // x5
  UnityEngine_Vector4_array *v66; // x0
  UnityEngine_Rigidbody_o *v67; // x19
  float v68; // s8
  float v69; // s0
  UnityEngine_Object_o *v70; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v71; // x19
  __int64 v72; // x0
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+8h] [xbp-108h]
  UnityEngine_Material_array *value; // [xsp+10h] [xbp-100h]
  bool v75; // [xsp+1Ch] [xbp-F4h]
  UnityEngine_Vector3_o v76; // [xsp+2Ch] [xbp-E4h]
  int v78; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v79; // [xsp+54h] [xbp-BCh]
  UnityEngine_Vector2_o v80; // [xsp+5Ch] [xbp-B4h]
  UnityEngine_Vector2_o v81; // [xsp+64h] [xbp-ACh]
  float v83; // [xsp+70h] [xbp-A0h]
  float v85; // [xsp+74h] [xbp-9Ch]
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_42B032A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B52984(&FGOMeshExploder_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_B52984(&UnityEngine_Material___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (FGOMeshExploder_o *)sub_B52984(&StringLiteral_21648/*"piece"*/);
    byte_42B032A = 1;
  }
  if ( !target )
    goto LABEL_84;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)target,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  onBroken = (UnityEngine_Object_o *)v20->fields.onBroken;
  v23 = (UnityEngine_Renderer_o *)Component_WebViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(onBroken, 0LL, 0LL);
  v75 = isActive;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v20->fields.onBroken;
    if ( !this )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_84;
    v24 = (UnityEngine_Renderer_o *)this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    if ( !v23 )
      goto LABEL_84;
    v25 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    if ( !this )
      goto LABEL_84;
    v26 = (System_Array_o *)sub_B5299C(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.mass) + LODWORD(v25->fields.mass)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials(v24, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v24, 0LL);
    if ( !this )
      goto LABEL_84;
    System_Array__Copy_43425512(materials, v26, LODWORD(this->fields.mass), 0LL);
    v28 = (System_Array_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v24, 0LL);
    if ( !this )
      goto LABEL_84;
    v29 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v26;
    System_Array__Copy_43421420(v28, 0, v26, LODWORD(v29->fields.mass), LODWORD(this->fields.mass), 0LL);
  }
  else
  {
    if ( !v23 )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    if ( !this )
      goto LABEL_84;
    v30 = (System_Array_o *)sub_B5299C(UnityEngine_Material___TypeInfo, LODWORD(this->fields.mass));
    v31 = (System_Array_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v23, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v30;
    System_Array__Copy_43425512(v31, v30, LODWORD(this->fields.mass), 0LL);
  }
  v76.fields.x = x;
  v76.fields.y = y;
  v76.fields.z = z;
  v32 = (System_Collections_Generic_List_Vector3__o *)sub_B52A54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v32,
    (const MethodInfo_302E6A0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v33 = (System_Collections_Generic_List_Vector2__o *)sub_B52A54(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v33,
    (const MethodInfo_302B60C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v34 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_B52A54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_302E6A0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_84;
    v35 = 0;
    v36 = 0;
    v78 = vtxCount / 3;
    do
    {
      max_length = tri->max_length;
      v38 = index + v35;
      v39 = index + v35 + 2;
      if ( v39 >= (int)max_length )
        break;
      if ( v38 >= max_length )
        goto LABEL_83;
      if ( !Vtx )
        goto LABEL_84;
      v40 = tri->m_Items[v38 + 1];
      v41 = Vtx->max_length;
      if ( (unsigned int)v40 >= v41 )
        goto LABEL_83;
      v42 = index + v35 + 1;
      if ( v42 >= max_length )
        goto LABEL_83;
      v43 = tri->m_Items[v42 + 1];
      if ( (unsigned int)v43 >= v41 )
        goto LABEL_83;
      if ( v39 >= max_length )
        goto LABEL_83;
      v44 = tri->m_Items[v39 + 1];
      if ( (unsigned int)v44 >= v41 )
        goto LABEL_83;
      if ( !UVs )
        goto LABEL_84;
      v45 = UVs->max_length;
      if ( (unsigned int)v40 >= v45 || (unsigned int)v43 >= v45 || (unsigned int)v44 >= v45 )
      {
LABEL_83:
        v72 = sub_B52A88(this);
        sub_B52A28(v72, 0LL);
      }
      v46 = (float *)((char *)Vtx + 12 * v40);
      v48 = v46[8];
      v47 = v46[9];
      v49 = v46[10];
      v50 = (float *)((char *)Vtx + 12 * v43);
      v51 = v50[8];
      v52 = v50[9];
      v53 = v50[10];
      v54 = (float *)((char *)Vtx + 12 * v44);
      v56 = v54[8];
      v55 = v54[9];
      v57 = v54[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v79 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v40].fields.y;
      v80 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v43].fields.y;
      v81 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v44].fields.y;
      v83 = v52;
      v85 = v51;
      v58 = (float)((float)(v49 - v53) * (float)(v49 - v53))
          + (float)((float)((float)(v48 - v51) * (float)(v48 - v51)) + (float)((float)(v47 - v52) * (float)(v47 - v52)));
      if ( (BYTE3(FGOMeshExploder_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.exploded;
      if ( v58 <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v53 - v57) * (float)(v53 - v57))
                 + (float)((float)((float)(v85 - v56) * (float)(v85 - v56))
                         + (float)((float)(v83 - v55) * (float)(v83 - v55)))) <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v49 - v57) * (float)(v49 - v57))
                 + (float)((float)((float)(v48 - v56) * (float)(v48 - v56))
                         + (float)((float)(v47 - v55) * (float)(v47 - v55)))) <= PieceDeltaSqrSize )
        return;
      if ( !v32 )
        goto LABEL_84;
      v86.fields.x = v48;
      v86.fields.y = v47;
      v86.fields.z = v49;
      System_Collections_Generic_List_Vector3___Add(
        v32,
        v86,
        (const MethodInfo_302F440 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v87.fields.y = v83;
      v87.fields.x = v85;
      v87.fields.z = v53;
      System_Collections_Generic_List_Vector3___Add(
        v32,
        v87,
        (const MethodInfo_302F440 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v88.fields.x = v56;
      v88.fields.y = v55;
      v88.fields.z = v57;
      System_Collections_Generic_List_Vector3___Add(
        v32,
        v88,
        (const MethodInfo_302F440 *)Method_System_Collections_Generic_List_Vector3__Add__);
      if ( !v33 )
        goto LABEL_84;
      System_Collections_Generic_List_Vector2___Add(
        v33,
        v79,
        (const MethodInfo_302C370 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v33,
        v80,
        (const MethodInfo_302C370 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v33,
        v81,
        (const MethodInfo_302C370 *)Method_System_Collections_Generic_List_Vector2__Add__);
      if ( !v34 )
        goto LABEL_84;
      System_Collections_Generic_List_int___Add(
        v34,
        v35,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v34,
        v35 + 1,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v34,
        v35 + 2,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      ++v36;
      v35 += 3;
    }
    while ( v36 < v78 );
  }
  if ( !v32 )
LABEL_84:
    sub_B52A5C(this, target);
  if ( v32->fields._size < 4 )
    return;
  v60 = (UnityEngine_GameObject_o *)sub_B52A54(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v60, (System_String_o *)StringLiteral_21648/*"piece"*/, 0LL);
  this = *(FGOMeshExploder_o **)&v20->fields.exploded;
  if ( !this )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v60 )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(v60, v75, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(target, 0LL);
  GameObjectExtensions__SetParent(v60, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL);
  if ( !this )
    goto LABEL_84;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v60, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                v60,
                                (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_84;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v60,
    (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v60,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v60, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v76, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v60, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v60, 0LL);
  if ( !this )
    goto LABEL_84;
  v89.fields.x = v20->fields.fadeTime;
  v89.fields.y = v89.fields.x;
  v89.fields.z = v89.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v89, 0LL);
  if ( !mesh )
    goto LABEL_84;
  UnityEngine_Mesh__SetVertices(mesh, v32, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v33, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v34, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v66 = FGOMeshExploder__CalculateMeshTangents(v64, v32, v33, normals, v34, v65);
  UnityEngine_Mesh__set_tangents(mesh, v66, 0LL);
  v67 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     v60,
                                     (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL) )
  {
    v68 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    v69 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    if ( !v67 )
      goto LABEL_84;
    v90.fields.z = v69 * 0.5;
    v90.fields.y = 0.0;
    v90.fields.x = v68 * 0.5;
    UnityEngine_Rigidbody__set_velocity(v67, v90, 0LL);
    v91.fields.x = v20->fields.angularVelocity.fields.y * 0.5;
    v91.fields.y = v20->fields.angularVelocity.fields.z * 0.5;
    v91.fields.z = *(float *)&v20->fields.minPieceVertex * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity(v67, v91, 0LL);
    UnityEngine_Rigidbody__set_mass(v67, v20->fields.angularVelocity.fields.x, 0LL);
    UnityEngine_Rigidbody__set_useGravity(v67, BYTE1(v20->fields.mass), 0LL);
  }
  v70 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                  v60,
                                  (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v70 )
      goto LABEL_84;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v70, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v70, 1, 0LL);
  }
  v71 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          v60,
          (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v71 )
    {
      LODWORD(v71->fields.callbackQueue) = v20->fields.charaMesh;
      return;
    }
    goto LABEL_84;
  }
}


void __fastcall FGOMeshExploder__Explode(FGOMeshExploder_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  FGOMeshExploder__Explode_25442192(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_25442192(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  FGOMeshExploder_o *v4; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v6; // x1
  System_Action_o *pieces; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42B0329 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (FGOMeshExploder_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0329 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !target )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !LOBYTE(v4->fields.mass) )
    {
LABEL_15:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)target, 0LL);
      pieces = (System_Action_o *)v4->fields.pieces;
      if ( pieces )
        System_Action__Invoke(pieces, 0LL);
      LOBYTE(v4[1].klass) = 1;
      return;
    }
    this = *(FGOMeshExploder_o **)&v4->fields.exploded;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v8,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v8,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v8.fields.current )
          sub_B52A5C(0LL, v6);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v8,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_15;
    }
LABEL_23:
    sub_B52A5C(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B0328 & 1) == 0 )
  {
    sub_B52984(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
    byte_42B0328 = 1;
  }
  v3 = sub_B52A54(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  FGOMeshExploder__PreCreatePiece_d__16___ctor((FGOMeshExploder__PreCreatePiece_d__16_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// attributes: thunk
System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__Start(FGOMeshExploder_o *this, const MethodInfo *method)
{
  return FGOMeshExploder__PreCreatePiece(this, method);
}


void __fastcall FGOMeshExploder__PreCreatePiece_d__16___ctor(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FGOMeshExploder__PreCreatePiece_d__16__MoveNext(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  FGOMeshExploder__PreCreatePiece_d__16_o *v2; // x22
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  Il2CppObject **p__2__current; // x22
  int i_5__7; // w8
  int32_t *p_i_5__7; // x28
  int32_t *p_tris_5__8; // x19
  System_Int32_array **p_triangles_5__4; // x23
  UnityEngine_Vector3_array **p_vertices_5__2; // x21
  UnityEngine_Vector2_array **p_uvs_5__5; // x24
  int32_t *p_yield_trianble_count_5__6; // x27
  UnityEngine_Mesh_o *v13; // x24
  UnityEngine_Vector2_array *uv; // x0
  struct System_Int32_array *triangles_5__4; // x9
  int32_t v16; // w25
  float v17; // s0
  unsigned int v18; // s1
  unsigned int v19; // s2
  _QWORD *image; // x8
  __int64 v21; // x9
  System_Int32_array *v22; // x10
  __int64 v23; // x12
  unsigned int max_length; // w13
  __int64 v25; // x11
  __int64 v26; // x14
  unsigned int v27; // w12
  __int64 v28; // x10
  float32x2_t *v29; // x9
  float32x2_t *v30; // x11
  float32x2_t *v31; // x8
  float32x2_t v32; // d2 OVERLAPPED
  void (__fastcall *v33)(); // d0
  float v34; // s1
  float v35; // s8
  unsigned int v36; // s9
  unsigned int v37; // s10
  UnityEngine_Transform_o *transform; // x26
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  int32_t v43; // w25
  int v44; // w9
  __int64 v45; // x0
  UnityEngine_Vector3_o faceNormal; // [xsp+0h] [xbp-C0h]
  FGOMeshExploder__PreCreatePiece_d__16_o *v48; // [xsp+18h] [xbp-A8h]
  MethodInfo methoda; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v50; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_42ACE08 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_B52984(&UnityEngine_Mesh_TypeInfo);
    byte_42ACE08 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v48 = v2;
    p_i_5__7 = &v2->fields._i_5__7;
    i_5__7 = v2->fields._i_5__7;
    v2->fields.__1__state = -1;
    p_tris_5__8 = &v2->fields._tris_5__8;
    p_triangles_5__4 = &v2->fields._triangles_5__4;
    p_vertices_5__2 = &v2->fields._vertices_5__2;
    p_uvs_5__5 = &v2->fields._uvs_5__5;
    p_yield_trianble_count_5__6 = &v2->fields._yield_trianble_count_5__6;
    methoda.klass = (Il2CppClass *)&v2->fields._normals_5__3;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    v13 = (UnityEngine_Mesh_o *)sub_B52A54(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v13, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v13, 0LL);
          if ( v13 )
          {
            v2->fields._vertices_5__2 = UnityEngine_Mesh__get_vertices(v13, 0LL);
            p_vertices_5__2 = &v2->fields._vertices_5__2;
            sub_B52920(&v2->fields._vertices_5__2);
            v2->fields._normals_5__3 = UnityEngine_Mesh__get_normals(v13, 0LL);
            methoda.klass = (Il2CppClass *)&v2->fields._normals_5__3;
            sub_B52920(&v2->fields._normals_5__3);
            p_triangles_5__4 = &v2->fields._triangles_5__4;
            v2->fields._triangles_5__4 = UnityEngine_Mesh__get_triangles(v13, 0LL);
            sub_B52920(&v2->fields._triangles_5__4);
            uv = UnityEngine_Mesh__get_uv(v13, 0LL);
            p_uvs_5__5 = &v2->fields._uvs_5__5;
            v2->fields._uvs_5__5 = uv;
            sub_B52920(&v2->fields._uvs_5__5);
            v2->fields._yield_trianble_count_5__6 = 0;
            p_yield_trianble_count_5__6 = &v2->fields._yield_trianble_count_5__6;
            v2->fields._i_5__7 = 0;
            triangles_5__4 = v2->fields._triangles_5__4;
            if ( triangles_5__4 )
            {
              i_5__7 = 0;
              v48 = v2;
              v2->fields._tris_5__8 = *(_QWORD *)&triangles_5__4->max_length;
              p_tris_5__8 = &v2->fields._tris_5__8;
              p_i_5__7 = &v2->fields._i_5__7;
LABEL_16:
              while ( i_5__7 < *p_tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_38;
                v16 = UnityEngine_Random__Range_35650740(
                        _4__this->fields.maxPieceVertex,
                        LODWORD(_4__this->fields.minBrokenSpeed),
                        0LL);
                *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_left(0LL);
                image = methoda.klass->_1.image;
                if ( !methoda.klass->_1.image )
                  goto LABEL_38;
                v21 = image[3];
                if ( v21 )
                {
                  v22 = *p_triangles_5__4;
                  if ( !*p_triangles_5__4 )
                    goto LABEL_38;
                  v23 = *p_i_5__7;
                  max_length = v22->max_length;
                  if ( (unsigned int)v23 >= max_length
                    || (v25 = v22->m_Items[v23 + 1], (unsigned int)v25 >= (unsigned int)v21)
                    || (int)v23 + 1 >= max_length
                    || (v26 = v22->m_Items[(int)v23 + 2], (unsigned int)v26 >= (unsigned int)v21)
                    || (v27 = v23 + 2, v27 >= max_length)
                    || (v28 = v22->m_Items[v27 + 1], (unsigned int)v28 >= (unsigned int)v21) )
                  {
                    v45 = sub_B52A88(this);
                    sub_B52A28(v45, 0LL);
                  }
                  v29 = (float32x2_t *)((char *)image + 12 * v25);
                  v30 = (float32x2_t *)((char *)image + 12 * v26);
                  v31 = (float32x2_t *)((char *)image + 12 * v28);
                  v32.n64_u64[0] = v30[4].n64_u64[0];
                  v33 = (void (__fastcall *)())vadd_f32(vadd_f32(v29[4], v32), v31[4]).n64_u64[0];
                  v34 = (float)(v29[5].n64_f32[0] + v30[5].n64_f32[0]) + v31[5].n64_f32[0];
                  methoda.methodPointer = v33;
                  *(float *)&methoda.invoker_method = v34;
                  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_normalized(
                                                     *(UnityEngine_Vector3_o *)(&v32 - 1),
                                                     &methoda);
                }
                v35 = v17;
                v36 = v18;
                v37 = v19;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_38;
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_38;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_38;
                rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0LL);
                x = rotation.fields.x;
                y = rotation.fields.y;
                z = rotation.fields.z;
                w = rotation.fields.w;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_38;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_38;
                *(UnityEngine_Vector3_o *)&v52.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v43 = 3 * v16;
                v50.fields.x = v52.fields.x;
                v50.fields.y = v52.fields.y;
                v50.fields.z = v52.fields.z;
                v52.fields.x = x;
                v52.fields.y = y;
                v52.fields.z = z;
                v52.fields.w = w;
                *(_QWORD *)&faceNormal.fields.y = __PAIR64__(v37, v36);
                faceNormal.fields.x = v35;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v52,
                  v50,
                  faceNormal,
                  *p_i_5__7,
                  *p_triangles_5__4,
                  *p_vertices_5__2,
                  *p_uvs_5__5,
                  v43,
                  (bool)_4__this[1].klass,
                  0LL);
                i_5__7 = *p_i_5__7 + v43;
                *p_i_5__7 = i_5__7;
                v44 = *p_yield_trianble_count_5__6 + v43;
                *p_yield_trianble_count_5__6 = v44;
                if ( v44 >= 2001 && !LOBYTE(_4__this[1].klass) )
                {
                  v48->fields.__2__current = 0LL;
                  v48->fields._yield_trianble_count_5__6 = 0;
                  sub_B52920(&v48->fields.__2__current);
                  v48->fields.__1__state = 2;
                  LOBYTE(this) = 1;
                  return (char)this;
                }
              }
              goto LABEL_36;
            }
          }
        }
      }
    }
LABEL_38:
    sub_B52A5C(this, method);
  }
  this = 0LL;
  if ( _1__state )
    return (char)this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_38;
  if ( !LOBYTE(_4__this->fields.mass) )
  {
LABEL_36:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  LOBYTE(this) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)this;
}


Il2CppObject *__fastcall FGOMeshExploder__PreCreatePiece_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FGOMeshExploder__PreCreatePiece_d__16__System_Collections_IEnumerator_Reset(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall FGOMeshExploder__PreCreatePiece_d__16__System_Collections_IEnumerator_get_Current(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FGOMeshExploder__PreCreatePiece_d__16__System_IDisposable_Dispose(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  ;
}