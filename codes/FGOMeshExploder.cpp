void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42153FA & 1) == 0 )
  {
    sub_B0D8A4(&FGOMeshExploder_TypeInfo, v1);
    byte_42153FA = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42153F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_42153F9 = 1;
  }
  LOWORD(this->fields.mass) = 257;
  this->fields.angularVelocity.fields.x = 1.0;
  *(UnityEngine_Vector3_o *)&this->fields.angularVelocity.fields.y = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.maxPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.maxBrokenSpeed = xmmword_31FFBC0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 v4,
                                                                                                 v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.exploded = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.exploded,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t size; // w26
  unsigned int v17; // w22
  __int64 v18; // x20
  __int64 v19; // x21
  unsigned int v20; // w22
  unsigned int v21; // w9
  struct System_Int32_array *items; // x8
  __int64 v23; // x27
  __int64 v24; // x19
  unsigned int v25; // w26
  unsigned int v26; // w22
  unsigned int v27; // w9
  __int64 v28; // x22
  struct UnityEngine_Vector3_array *v29; // x8
  float32x2_t *v30; // x10
  float32x2_t v31; // d8
  float v32; // s15
  float32x2_t *v33; // x10
  float v34; // s9
  float32x2_t *v35; // x8
  unsigned int v36; // w9
  struct UnityEngine_Vector2_array *v37; // x8
  float32x2_t v38; // d10
  float *v39; // x10
  float v40; // s13
  float v41; // s14
  float *v42; // x10
  float v43; // s11
  float v44; // s12
  float *v45; // x8
  float v46; // s3
  float32x2_t v47; // d4
  float v48; // s6
  float v49; // s7
  float32x2_t v50; // d1
  float32x2_t *v51; // x8
  float v52; // s5
  float32x2_t v53; // d16
  float v54; // s7
  float v55; // s18
  float32x2_t *v56; // x8
  float v57; // s18
  float32x2_t *v58; // x8
  float v59; // s7
  float32x2_t *v60; // x8
  float32x2_t v61; // d0
  float v62; // s1
  float v63; // s3
  float32x2_t *v64; // x8
  float v65; // s3
  float32x2_t *v66; // x8
  float v67; // s1
  unsigned __int64 v68; // x22
  int32_t *p_maxPieceVertex; // x23
  __int64 v70; // x24
  char *v71; // x8
  __int64 v72; // x9
  float v73; // w8
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s3
  float v78; // s5
  float v79; // s4
  float v80; // s0
  __int64 v82; // x0
  int v83; // [xsp+0h] [xbp-E0h]
  UnityEngine_Vector4_array *v84; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_Vector3__o *v85; // [xsp+10h] [xbp-D0h]
  int32_t v86; // [xsp+1Ch] [xbp-C4h]
  float32x2_t v87; // [xsp+20h] [xbp-C0h]
  float v88; // [xsp+2Ch] [xbp-B4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-A0h] BYREF

  if ( (byte_42153F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector3__get_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v14);
    this = (FGOMeshExploder_o *)sub_B0D8A4(&UnityEngine_Vector4___TypeInfo, v15);
    byte_42153F8 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_53;
  v85 = normals;
  if ( !vertices )
    goto LABEL_53;
  size = triangles->fields._size;
  v17 = vertices->fields._size;
  v18 = sub_B0D8BC(UnityEngine_Vector3___TypeInfo, v17);
  v19 = sub_B0D8BC(UnityEngine_Vector3___TypeInfo, v17);
  v83 = v17;
  this = (FGOMeshExploder_o *)sub_B0D8BC(UnityEngine_Vector4___TypeInfo, v17);
  v86 = size;
  v84 = (UnityEngine_Vector4_array *)this;
  if ( size >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = triangles->fields._size;
      if ( v21 <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = triangles->fields._items;
      v23 = items->m_Items[v20 + 1];
      if ( v21 <= v20 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v24 = items->m_Items[v20 + 1 + 1];
      v26 = v20 + 2;
      v25 = v26;
      if ( v21 <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v27 = vertices->fields._size;
      v28 = items->m_Items[v26 + 1];
      if ( v27 <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v29 = vertices->fields._items;
      v30 = (float32x2_t *)((char *)v29 + 12 * v23);
      v31.n64_u64[0] = v30[4].n64_u64[0];
      v32 = v30[5].n64_f32[0];
      if ( v27 <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = (float32x2_t *)((char *)v29 + 12 * v24);
      v34 = v33[5].n64_f32[0];
      if ( v27 <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !uvs )
        break;
      v35 = (float32x2_t *)((char *)v29 + 12 * v28);
      v36 = uvs->fields._size;
      v87.n64_u64[0] = v35[4].n64_u64[0];
      v88 = v35[5].n64_f32[0];
      if ( v36 <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v37 = uvs->fields._items;
      v38.n64_u64[0] = v33[4].n64_u64[0];
      v39 = (float *)(&v37->obj.klass + v23);
      v40 = v39[8];
      v41 = v39[9];
      if ( v36 <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v42 = (float *)(&v37->obj.klass + v24);
      v44 = v42[8];
      v43 = v42[9];
      if ( v36 <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v18 )
        break;
      if ( (unsigned int)v23 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v45 = (float *)(&v37->obj.klass + v28);
      v46 = v44 - v40;
      v47.n64_u64[0] = vsub_f32(v87, v31).n64_u64[0];
      v48 = v45[8] - v40;
      v49 = v45[9] - v41;
      v50.n64_u64[0] = vsub_f32(v38, v31).n64_u64[0];
      v51 = (float32x2_t *)(v18 + 12 * v23);
      v52 = 1.0 / (float)((float)((float)(v44 - v40) * v49) - (float)((float)(v43 - v41) * v48));
      v53.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v50, v49), vmul_n_f32(v47, v43 - v41)), v52).n64_u64[0];
      v54 = (float)((float)((float)(v34 - v32) * v49) - (float)((float)(v88 - v32) * (float)(v43 - v41))) * v52;
      v55 = v54 + v51[5].n64_f32[0];
      v51[4].n64_u64[0] = vadd_f32(v53, v51[4]).n64_u64[0];
      v51[5].n64_f32[0] = v55;
      if ( (unsigned int)v24 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v56 = (float32x2_t *)(v18 + 12 * v24);
      v57 = v54 + v56[5].n64_f32[0];
      v56[4].n64_u64[0] = vadd_f32(v53, v56[4]).n64_u64[0];
      v56[5].n64_f32[0] = v57;
      if ( (unsigned int)v28 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v58 = (float32x2_t *)(v18 + 12 * v28);
      v59 = v54 + v58[5].n64_f32[0];
      v58[4].n64_u64[0] = vadd_f32(v53, v58[4]).n64_u64[0];
      v58[5].n64_f32[0] = v59;
      if ( !v19 )
        break;
      if ( (unsigned int)v23 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_52;
      v60 = (float32x2_t *)(v19 + 12 * v23);
      v61.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v47, v46), vmul_n_f32(v50, v48)), v52).n64_u64[0];
      v62 = (float)((float)((float)(v88 - v32) * v46) - (float)((float)(v34 - v32) * v48)) * v52;
      v63 = v62 + v60[5].n64_f32[0];
      v60[4].n64_u64[0] = vadd_f32(v61, v60[4]).n64_u64[0];
      v60[5].n64_f32[0] = v63;
      if ( (unsigned int)v24 >= *(_DWORD *)(v19 + 24)
        || (v64 = (float32x2_t *)(v19 + 12 * v24),
            v65 = v62 + v64[5].n64_f32[0],
            v64[4].n64_u64[0] = vadd_f32(v61, v64[4]).n64_u64[0],
            v64[5].n64_f32[0] = v65,
            (unsigned int)v28 >= *(_DWORD *)(v19 + 24)) )
      {
LABEL_52:
        v82 = sub_B0D9A8(this);
        sub_B0D948(v82, 0LL);
      }
      v66 = (float32x2_t *)(v19 + 12 * v28);
      v20 = v25 + 1;
      v67 = v62 + v66[5].n64_f32[0];
      v66[4].n64_u64[0] = vadd_f32(v61, v66[4]).n64_u64[0];
      v66[5].n64_f32[0] = v67;
      if ( (int)(v25 + 1) >= v86 )
        goto LABEL_35;
    }
LABEL_53:
    sub_B0D97C(this);
  }
LABEL_35:
  if ( v83 >= 1 )
  {
    if ( v85 )
    {
      v68 = 0LL;
      p_maxPieceVertex = &this->fields.maxPieceVertex;
      v70 = 32LL;
      while ( 1 )
      {
        if ( v68 >= (unsigned int)v85->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v71 = (char *)v85->fields._items + v70;
        v72 = *(_QWORD *)v71;
        LODWORD(v71) = *((_DWORD *)v71 + 2);
        *(_QWORD *)&normal.fields.x = v72;
        LODWORD(normal.fields.z) = (_DWORD)v71;
        if ( !v18 )
          break;
        if ( v68 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_52;
        v73 = *(float *)(v18 + v70 + 8);
        *(_QWORD *)&tangent.fields.x = *(_QWORD *)(v18 + v70);
        tangent.fields.z = v73;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v84 )
          break;
        if ( v68 >= v84->max_length )
          goto LABEL_52;
        *((UnityEngine_Vector3_o *)p_maxPieceVertex - 1) = tangent;
        *(UnityEngine_Vector3_o *)&v74 = UnityEngine_Vector3__Cross(normal, tangent, 0LL);
        if ( !v19 )
          break;
        if ( v68 >= *(unsigned int *)(v19 + 24) || v68 >= v84->max_length )
          goto LABEL_52;
        v78 = *(float *)(v19 + v70 + 4);
        v77 = *(float *)(v19 + v70 + 8);
        v79 = *(float *)(v19 + v70);
        ++v68;
        v70 += 12LL;
        if ( (float)((float)(v76 * v77) + (float)((float)(v74 * v79) + (float)(v75 * v78))) >= 0.0 )
          v80 = 1.0;
        else
          v80 = -1.0;
        *(float *)p_maxPieceVertex = v80;
        p_maxPieceVertex += 4;
        if ( (__int64)v68 >= v83 )
          return v84;
      }
    }
    goto LABEL_53;
  }
  return v84;
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *onBroken; // x20
  UnityEngine_Renderer_o *v45; // x19
  UnityEngine_Renderer_o *v46; // x20
  FGOMeshExploder_o *v47; // x21
  System_Array_o *v48; // x28
  System_Array_o *materials; // x21
  System_Array_o *v50; // x21
  FGOMeshExploder_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  System_Array_o *v54; // x21
  System_Array_o *v55; // x20
  System_Collections_Generic_List_Vector3__o *v56; // x27
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_Vector2__o *v59; // x28
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_int__o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  int v67; // w20
  int v68; // w19
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v70; // w8
  int v71; // w10
  __int64 v72; // x8
  il2cpp_array_size_t v73; // w12
  unsigned int v74; // w9
  __int64 v75; // x9
  __int64 v76; // x10
  il2cpp_array_size_t v77; // w11
  float *v78; // x11
  float v79; // s8
  float v80; // s15
  float v81; // s9
  float *v82; // x11
  float v83; // s1
  float v84; // s2
  float v85; // s13
  float *v86; // x11
  float v87; // s10
  float v88; // s11
  float v89; // s14
  float v90; // s12
  float PieceDeltaSqrSize; // s0
  UnityEngine_GameObject_o *v92; // x22
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v96; // x0
  const MethodInfo *v97; // x5
  UnityEngine_Vector4_array *v98; // x0
  UnityEngine_Rigidbody_o *v99; // x19
  float v100; // s8
  float v101; // s0
  UnityEngine_Object_o *v102; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v103; // x19
  __int64 v104; // x0
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+8h] [xbp-108h]
  UnityEngine_Material_array *value; // [xsp+10h] [xbp-100h]
  bool v107; // [xsp+1Ch] [xbp-F4h]
  UnityEngine_Vector3_o v108; // [xsp+2Ch] [xbp-E4h]
  int v110; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v111; // [xsp+54h] [xbp-BCh]
  UnityEngine_Vector2_o v112; // [xsp+5Ch] [xbp-B4h]
  UnityEngine_Vector2_o v113; // [xsp+64h] [xbp-ACh]
  float v115; // [xsp+70h] [xbp-A0h]
  float v117; // [xsp+74h] [xbp-9Ch]
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_42153F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, target);
    sub_B0D8A4(&FGOMeshExploder_TypeInfo, v21);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v22);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v23);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v24);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v25);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v26);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v27);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__Add__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector3__Add__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2___ctor__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector3___ctor__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector3__get_Count__, v36);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_B0D8A4(&System_Collections_Generic_List_Vector2__TypeInfo, v38);
    sub_B0D8A4(&System_Collections_Generic_List_Vector3__TypeInfo, v39);
    sub_B0D8A4(&UnityEngine_Material___TypeInfo, v40);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v41);
    this = (FGOMeshExploder_o *)sub_B0D8A4(&StringLiteral_21542/*"piece"*/, v42);
    byte_42153F7 = 1;
  }
  if ( !target )
    goto LABEL_84;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)target,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  onBroken = (UnityEngine_Object_o *)v20->fields.onBroken;
  v45 = (UnityEngine_Renderer_o *)Component_WebViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(onBroken, 0LL, 0LL);
  v107 = isActive;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v20->fields.onBroken;
    if ( !this )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_84;
    v46 = (UnityEngine_Renderer_o *)this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    if ( !v45 )
      goto LABEL_84;
    v47 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !this )
      goto LABEL_84;
    v48 = (System_Array_o *)sub_B0D8BC(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.mass) + LODWORD(v47->fields.mass)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials(v46, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v46, 0LL);
    if ( !this )
      goto LABEL_84;
    System_Array__Copy_42586844(materials, v48, LODWORD(this->fields.mass), 0LL);
    v50 = (System_Array_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v46, 0LL);
    if ( !this )
      goto LABEL_84;
    v51 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v48;
    System_Array__Copy_42582752(v50, 0, v48, LODWORD(v51->fields.mass), LODWORD(this->fields.mass), 0LL);
  }
  else
  {
    if ( !v45 )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !this )
      goto LABEL_84;
    v54 = (System_Array_o *)sub_B0D8BC(UnityEngine_Material___TypeInfo, LODWORD(this->fields.mass));
    v55 = (System_Array_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v54;
    System_Array__Copy_42586844(v55, v54, LODWORD(this->fields.mass), 0LL);
  }
  v108.fields.x = x;
  v108.fields.y = y;
  v108.fields.z = z;
  v56 = (System_Collections_Generic_List_Vector3__o *)sub_B0D974(
                                                        System_Collections_Generic_List_Vector3__TypeInfo,
                                                        v52,
                                                        v53);
  System_Collections_Generic_List_Vector3____ctor(
    v56,
    (const MethodInfo_2ED6C54 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v59 = (System_Collections_Generic_List_Vector2__o *)sub_B0D974(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v57,
                                                        v58);
  System_Collections_Generic_List_Vector2____ctor(
    v59,
    (const MethodInfo_2ED3BC0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v62 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v60, v61);
  System_Collections_Generic_List_int____ctor(
    v62,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_B0D974(
                                                            System_Collections_Generic_List_Vector3__TypeInfo,
                                                            v63,
                                                            v64);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_2ED6C54 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_84;
    v67 = 0;
    v68 = 0;
    v110 = vtxCount / 3;
    do
    {
      max_length = tri->max_length;
      v70 = index + v67;
      v71 = index + v67 + 2;
      if ( v71 >= (int)max_length )
        break;
      if ( v70 >= max_length )
        goto LABEL_83;
      if ( !Vtx )
        goto LABEL_84;
      v72 = tri->m_Items[v70 + 1];
      v73 = Vtx->max_length;
      if ( (unsigned int)v72 >= v73 )
        goto LABEL_83;
      v74 = index + v67 + 1;
      if ( v74 >= max_length )
        goto LABEL_83;
      v75 = tri->m_Items[v74 + 1];
      if ( (unsigned int)v75 >= v73 )
        goto LABEL_83;
      if ( v71 >= max_length )
        goto LABEL_83;
      v76 = tri->m_Items[v71 + 1];
      if ( (unsigned int)v76 >= v73 )
        goto LABEL_83;
      if ( !UVs )
        goto LABEL_84;
      v77 = UVs->max_length;
      if ( (unsigned int)v72 >= v77 || (unsigned int)v75 >= v77 || (unsigned int)v76 >= v77 )
      {
LABEL_83:
        v104 = sub_B0D9A8(this);
        sub_B0D948(v104, 0LL);
      }
      v78 = (float *)((char *)Vtx + 12 * v72);
      v80 = v78[8];
      v79 = v78[9];
      v81 = v78[10];
      v82 = (float *)((char *)Vtx + 12 * v75);
      v83 = v82[8];
      v84 = v82[9];
      v85 = v82[10];
      v86 = (float *)((char *)Vtx + 12 * v76);
      v88 = v86[8];
      v87 = v86[9];
      v89 = v86[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v111 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v72].fields.y;
      v112 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v75].fields.y;
      v113 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v76].fields.y;
      v115 = v84;
      v117 = v83;
      v90 = (float)((float)(v81 - v85) * (float)(v81 - v85))
          + (float)((float)((float)(v80 - v83) * (float)(v80 - v83)) + (float)((float)(v79 - v84) * (float)(v79 - v84)));
      if ( (BYTE3(FGOMeshExploder_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.exploded;
      if ( v90 <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v85 - v89) * (float)(v85 - v89))
                 + (float)((float)((float)(v117 - v88) * (float)(v117 - v88))
                         + (float)((float)(v115 - v87) * (float)(v115 - v87)))) <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v81 - v89) * (float)(v81 - v89))
                 + (float)((float)((float)(v80 - v88) * (float)(v80 - v88))
                         + (float)((float)(v79 - v87) * (float)(v79 - v87)))) <= PieceDeltaSqrSize )
        return;
      if ( !v56 )
        goto LABEL_84;
      v118.fields.x = v80;
      v118.fields.y = v79;
      v118.fields.z = v81;
      System_Collections_Generic_List_Vector3___Add(
        v56,
        v118,
        (const MethodInfo_2ED79F4 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v119.fields.y = v115;
      v119.fields.x = v117;
      v119.fields.z = v85;
      System_Collections_Generic_List_Vector3___Add(
        v56,
        v119,
        (const MethodInfo_2ED79F4 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v120.fields.x = v88;
      v120.fields.y = v87;
      v120.fields.z = v89;
      System_Collections_Generic_List_Vector3___Add(
        v56,
        v120,
        (const MethodInfo_2ED79F4 *)Method_System_Collections_Generic_List_Vector3__Add__);
      if ( !v59 )
        goto LABEL_84;
      System_Collections_Generic_List_Vector2___Add(
        v59,
        v111,
        (const MethodInfo_2ED4924 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v59,
        v112,
        (const MethodInfo_2ED4924 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v59,
        v113,
        (const MethodInfo_2ED4924 *)Method_System_Collections_Generic_List_Vector2__Add__);
      if ( !v62 )
        goto LABEL_84;
      System_Collections_Generic_List_int___Add(
        v62,
        v67,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v62,
        v67 + 1,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v62,
        v67 + 2,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      ++v68;
      v67 += 3;
    }
    while ( v68 < v110 );
  }
  if ( !v56 )
LABEL_84:
    sub_B0D97C(this);
  if ( v56->fields._size < 4 )
    return;
  v92 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v65, v66);
  UnityEngine_GameObject___ctor(v92, (System_String_o *)StringLiteral_21542/*"piece"*/, 0LL);
  this = *(FGOMeshExploder_o **)&v20->fields.exploded;
  if ( !this )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v92 )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(v92, v107, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(target, 0LL);
  GameObjectExtensions__SetParent(v92, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL);
  if ( !this )
    goto LABEL_84;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v92, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                v92,
                                (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_84;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v92,
    (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v92,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v92, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v108, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v92, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v92, 0LL);
  if ( !this )
    goto LABEL_84;
  v121.fields.x = v20->fields.fadeTime;
  v121.fields.y = v121.fields.x;
  v121.fields.z = v121.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v121, 0LL);
  if ( !mesh )
    goto LABEL_84;
  UnityEngine_Mesh__SetVertices(mesh, v56, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v59, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v62, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v98 = FGOMeshExploder__CalculateMeshTangents(v96, v56, v59, normals, v62, v97);
  UnityEngine_Mesh__set_tangents(mesh, v98, 0LL);
  v99 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     v92,
                                     (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0LL, 0LL) )
  {
    v100 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    v101 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    if ( !v99 )
      goto LABEL_84;
    v122.fields.z = v101 * 0.5;
    v122.fields.y = 0.0;
    v122.fields.x = v100 * 0.5;
    UnityEngine_Rigidbody__set_velocity(v99, v122, 0LL);
    v123.fields.x = v20->fields.angularVelocity.fields.y * 0.5;
    v123.fields.y = v20->fields.angularVelocity.fields.z * 0.5;
    v123.fields.z = *(float *)&v20->fields.minPieceVertex * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity(v99, v123, 0LL);
    UnityEngine_Rigidbody__set_mass(v99, v20->fields.angularVelocity.fields.x, 0LL);
    UnityEngine_Rigidbody__set_useGravity(v99, BYTE1(v20->fields.mass), 0LL);
  }
  v102 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v92,
                                   (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(v102, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v102 )
      goto LABEL_84;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v102, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v102, 1, 0LL);
  }
  v103 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
           v92,
           (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v103 )
    {
      LODWORD(v103->fields.callbackQueue) = v20->fields.charaMesh;
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
  FGOMeshExploder__Explode_26002516(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_26002516(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  FGOMeshExploder_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Action_o *pieces; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42153F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    this = (FGOMeshExploder_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_42153F6 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !target )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
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
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)target, 0LL);
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
        &v12,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v12,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v12.fields.current )
          sub_B0D97C(0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v12,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_15;
    }
LABEL_23:
    sub_B0D97C(this);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42153F5 & 1) == 0 )
  {
    sub_B0D8A4(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method);
    byte_42153F5 = 1;
  }
  v4 = sub_B0D974(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method, v2);
  FGOMeshExploder__PreCreatePiece_d__16___ctor((FGOMeshExploder__PreCreatePiece_d__16_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v2; // x2
  FGOMeshExploder__PreCreatePiece_d__16_o *v3; // x22
  __int64 v4; // x1
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
  UnityEngine_Mesh_o *v15; // x24
  UnityEngine_Vector3_array *vertices; // x0
  UnityEngine_Vector3_array *normals; // x0
  System_Int32_array *triangles; // x0
  UnityEngine_Vector2_array *uv; // x0
  struct System_Int32_array *triangles_5__4; // x9
  int32_t v21; // w25
  float v22; // s0
  unsigned int v23; // s1
  unsigned int v24; // s2
  _QWORD *image; // x8
  __int64 v26; // x9
  System_Int32_array *v27; // x10
  __int64 v28; // x12
  unsigned int max_length; // w13
  __int64 v30; // x11
  __int64 v31; // x14
  unsigned int v32; // w12
  __int64 v33; // x10
  float32x2_t *v34; // x9
  float32x2_t *v35; // x11
  float32x2_t *v36; // x8
  float32x2_t v37; // d2 OVERLAPPED
  void (__fastcall *v38)(); // d0
  float v39; // s1
  float v40; // s8
  unsigned int v41; // s9
  unsigned int v42; // s10
  UnityEngine_Transform_o *transform; // x26
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  int32_t v48; // w25
  int v49; // w9
  __int64 v50; // x0
  UnityEngine_Vector3_o faceNormal; // [xsp+0h] [xbp-C0h]
  FGOMeshExploder__PreCreatePiece_d__16_o *v53; // [xsp+18h] [xbp-A8h]
  MethodInfo methoda; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v55; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4210F3C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_B0D8A4(&UnityEngine_Mesh_TypeInfo, v4);
    byte_4210F3C = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v53 = v3;
    p_i_5__7 = &v3->fields._i_5__7;
    i_5__7 = v3->fields._i_5__7;
    v3->fields.__1__state = -1;
    p_tris_5__8 = &v3->fields._tris_5__8;
    p_triangles_5__4 = &v3->fields._triangles_5__4;
    p_vertices_5__2 = &v3->fields._vertices_5__2;
    p_uvs_5__5 = &v3->fields._uvs_5__5;
    p_yield_trianble_count_5__6 = &v3->fields._yield_trianble_count_5__6;
    methoda.klass = (Il2CppClass *)&v3->fields._normals_5__3;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    v15 = (UnityEngine_Mesh_o *)sub_B0D974(UnityEngine_Mesh_TypeInfo, method, v2);
    UnityEngine_Mesh___ctor(v15, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v15, 0LL);
          if ( v15 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v15, 0LL);
            v3->fields._vertices_5__2 = vertices;
            p_vertices_5__2 = &v3->fields._vertices_5__2;
            sub_B0D840(&v3->fields._vertices_5__2, vertices);
            normals = UnityEngine_Mesh__get_normals(v15, 0LL);
            v3->fields._normals_5__3 = normals;
            methoda.klass = (Il2CppClass *)&v3->fields._normals_5__3;
            sub_B0D840(&v3->fields._normals_5__3, normals);
            triangles = UnityEngine_Mesh__get_triangles(v15, 0LL);
            p_triangles_5__4 = &v3->fields._triangles_5__4;
            v3->fields._triangles_5__4 = triangles;
            sub_B0D840(&v3->fields._triangles_5__4, triangles);
            uv = UnityEngine_Mesh__get_uv(v15, 0LL);
            p_uvs_5__5 = &v3->fields._uvs_5__5;
            v3->fields._uvs_5__5 = uv;
            sub_B0D840(&v3->fields._uvs_5__5, uv);
            v3->fields._yield_trianble_count_5__6 = 0;
            p_yield_trianble_count_5__6 = &v3->fields._yield_trianble_count_5__6;
            v3->fields._i_5__7 = 0;
            triangles_5__4 = v3->fields._triangles_5__4;
            if ( triangles_5__4 )
            {
              i_5__7 = 0;
              v53 = v3;
              v3->fields._tris_5__8 = *(_QWORD *)&triangles_5__4->max_length;
              p_tris_5__8 = &v3->fields._tris_5__8;
              p_i_5__7 = &v3->fields._i_5__7;
LABEL_16:
              while ( i_5__7 < *p_tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_38;
                v21 = UnityEngine_Random__Range_34969060(
                        _4__this->fields.maxPieceVertex,
                        LODWORD(_4__this->fields.minBrokenSpeed),
                        0LL);
                *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_left(0LL);
                image = methoda.klass->_1.image;
                if ( !methoda.klass->_1.image )
                  goto LABEL_38;
                v26 = image[3];
                if ( v26 )
                {
                  v27 = *p_triangles_5__4;
                  if ( !*p_triangles_5__4 )
                    goto LABEL_38;
                  v28 = *p_i_5__7;
                  max_length = v27->max_length;
                  if ( (unsigned int)v28 >= max_length
                    || (v30 = v27->m_Items[v28 + 1], (unsigned int)v30 >= (unsigned int)v26)
                    || (int)v28 + 1 >= max_length
                    || (v31 = v27->m_Items[(int)v28 + 2], (unsigned int)v31 >= (unsigned int)v26)
                    || (v32 = v28 + 2, v32 >= max_length)
                    || (v33 = v27->m_Items[v32 + 1], (unsigned int)v33 >= (unsigned int)v26) )
                  {
                    v50 = sub_B0D9A8(this);
                    sub_B0D948(v50, 0LL);
                  }
                  v34 = (float32x2_t *)((char *)image + 12 * v30);
                  v35 = (float32x2_t *)((char *)image + 12 * v31);
                  v36 = (float32x2_t *)((char *)image + 12 * v33);
                  v37.n64_u64[0] = v35[4].n64_u64[0];
                  v38 = (void (__fastcall *)())vadd_f32(vadd_f32(v34[4], v37), v36[4]).n64_u64[0];
                  v39 = (float)(v34[5].n64_f32[0] + v35[5].n64_f32[0]) + v36[5].n64_f32[0];
                  methoda.methodPointer = v38;
                  *(float *)&methoda.invoker_method = v39;
                  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_normalized(
                                                     *(UnityEngine_Vector3_o *)(&v37 - 1),
                                                     &methoda);
                }
                v40 = v22;
                v41 = v23;
                v42 = v24;
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
                *(UnityEngine_Vector3_o *)&v57.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v48 = 3 * v21;
                v55.fields.x = v57.fields.x;
                v55.fields.y = v57.fields.y;
                v55.fields.z = v57.fields.z;
                v57.fields.x = x;
                v57.fields.y = y;
                v57.fields.z = z;
                v57.fields.w = w;
                *(_QWORD *)&faceNormal.fields.y = __PAIR64__(v42, v41);
                faceNormal.fields.x = v40;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v57,
                  v55,
                  faceNormal,
                  *p_i_5__7,
                  *p_triangles_5__4,
                  *p_vertices_5__2,
                  *p_uvs_5__5,
                  v48,
                  (bool)_4__this[1].klass,
                  0LL);
                i_5__7 = *p_i_5__7 + v48;
                *p_i_5__7 = i_5__7;
                v49 = *p_yield_trianble_count_5__6 + v48;
                *p_yield_trianble_count_5__6 = v49;
                if ( v49 >= 2001 && !LOBYTE(_4__this[1].klass) )
                {
                  v53->fields.__2__current = 0LL;
                  v53->fields._yield_trianble_count_5__6 = 0;
                  sub_B0D840(&v53->fields.__2__current, 0LL);
                  v53->fields.__1__state = 2;
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
    sub_B0D97C(this);
  }
  this = 0LL;
  if ( _1__state )
    return (char)this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_38;
  if ( !LOBYTE(_4__this->fields.mass) )
  {
LABEL_36:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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