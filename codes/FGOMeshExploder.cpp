void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C4F & 1) == 0 )
  {
    sub_B5D5C4(&FGOMeshExploder_TypeInfo, v1, v2, v3);
    byte_42E8C4F = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8C4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E8C4E = 1;
  }
  LOWORD(this->fields.mass) = 257;
  this->fields.angularVelocity.fields.x = 1.0;
  *(UnityEngine_Vector3_o *)&this->fields.angularVelocity.fields.y = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.maxPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.maxBrokenSpeed = xmmword_329F5C0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.exploded = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.exploded,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int32_t size; // w26
  unsigned int v29; // w22
  __int64 v30; // x20
  __int64 v31; // x21
  unsigned int v32; // w22
  unsigned int v33; // w9
  struct System_Int32_array *items; // x8
  __int64 v35; // x27
  __int64 v36; // x19
  unsigned int v37; // w26
  unsigned int v38; // w22
  unsigned int v39; // w9
  __int64 v40; // x22
  struct UnityEngine_Vector3_array *v41; // x8
  float32x2_t *v42; // x10
  float32x2_t v43; // d8
  float v44; // s15
  float32x2_t *v45; // x10
  float v46; // s9
  float32x2_t *v47; // x8
  unsigned int v48; // w9
  struct UnityEngine_Vector2_array *v49; // x8
  float32x2_t v50; // d10
  float *v51; // x10
  float v52; // s13
  float v53; // s14
  float *v54; // x10
  float v55; // s11
  float v56; // s12
  float *v57; // x8
  float v58; // s3
  float32x2_t v59; // d4
  float v60; // s6
  float v61; // s7
  float32x2_t v62; // d1
  float32x2_t *v63; // x8
  float v64; // s5
  float32x2_t v65; // d16
  float v66; // s7
  float v67; // s18
  float32x2_t *v68; // x8
  float v69; // s18
  float32x2_t *v70; // x8
  float v71; // s7
  float32x2_t *v72; // x8
  float32x2_t v73; // d0
  float v74; // s1
  float v75; // s3
  float32x2_t *v76; // x8
  float v77; // s3
  float32x2_t *v78; // x8
  float v79; // s1
  unsigned __int64 v80; // x22
  int32_t *p_maxPieceVertex; // x23
  __int64 v82; // x24
  char *v83; // x8
  __int64 v84; // x9
  float v85; // w8
  float v86; // s0
  float v87; // s1
  float v88; // s2
  float v89; // s3
  float v90; // s5
  float v91; // s4
  float v92; // s0
  __int64 v94; // x0
  int v95; // [xsp+0h] [xbp-E0h]
  UnityEngine_Vector4_array *v96; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_Vector3__o *v97; // [xsp+10h] [xbp-D0h]
  int32_t v98; // [xsp+1Ch] [xbp-C4h]
  float32x2_t v99; // [xsp+20h] [xbp-C0h]
  float v100; // [xsp+2Ch] [xbp-B4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-A0h] BYREF

  if ( (byte_42E8C4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Count__, (_DWORD)vertices, (_DWORD)uvs, normals);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__get_Item__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v22, v23, v24);
    this = (FGOMeshExploder_o *)sub_B5D5C4(&UnityEngine_Vector4___TypeInfo, v25, v26, v27);
    byte_42E8C4D = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_53;
  v97 = normals;
  if ( !vertices )
    goto LABEL_53;
  size = triangles->fields._size;
  v29 = vertices->fields._size;
  v30 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, v29);
  v31 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, v29);
  v95 = v29;
  this = (FGOMeshExploder_o *)sub_B5D5DC(UnityEngine_Vector4___TypeInfo, v29);
  v98 = size;
  v96 = (UnityEngine_Vector4_array *)this;
  if ( size >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = triangles->fields._size;
      if ( v33 <= v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = triangles->fields._items;
      v35 = items->m_Items[v32 + 1];
      if ( v33 <= v32 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v36 = items->m_Items[v32 + 1 + 1];
      v38 = v32 + 2;
      v37 = v38;
      if ( v33 <= v38 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v39 = vertices->fields._size;
      v40 = items->m_Items[v38 + 1];
      if ( v39 <= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = vertices->fields._items;
      v42 = (float32x2_t *)((char *)v41 + 12 * v35);
      v43.n64_u64[0] = v42[4].n64_u64[0];
      v44 = v42[5].n64_f32[0];
      if ( v39 <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v45 = (float32x2_t *)((char *)v41 + 12 * v36);
      v46 = v45[5].n64_f32[0];
      if ( v39 <= (unsigned int)v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !uvs )
        break;
      v47 = (float32x2_t *)((char *)v41 + 12 * v40);
      v48 = uvs->fields._size;
      v99.n64_u64[0] = v47[4].n64_u64[0];
      v100 = v47[5].n64_f32[0];
      if ( v48 <= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v49 = uvs->fields._items;
      v50.n64_u64[0] = v45[4].n64_u64[0];
      v51 = (float *)(&v49->obj.klass + v35);
      v52 = v51[8];
      v53 = v51[9];
      if ( v48 <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v54 = (float *)(&v49->obj.klass + v36);
      v56 = v54[8];
      v55 = v54[9];
      if ( v48 <= (unsigned int)v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v30 )
        break;
      if ( (unsigned int)v35 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_52;
      v57 = (float *)(&v49->obj.klass + v40);
      v58 = v56 - v52;
      v59.n64_u64[0] = vsub_f32(v99, v43).n64_u64[0];
      v60 = v57[8] - v52;
      v61 = v57[9] - v53;
      v62.n64_u64[0] = vsub_f32(v50, v43).n64_u64[0];
      v63 = (float32x2_t *)(v30 + 12 * v35);
      v64 = 1.0 / (float)((float)((float)(v56 - v52) * v61) - (float)((float)(v55 - v53) * v60));
      v65.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v62, v61), vmul_n_f32(v59, v55 - v53)), v64).n64_u64[0];
      v66 = (float)((float)((float)(v46 - v44) * v61) - (float)((float)(v100 - v44) * (float)(v55 - v53))) * v64;
      v67 = v66 + v63[5].n64_f32[0];
      v63[4].n64_u64[0] = vadd_f32(v65, v63[4]).n64_u64[0];
      v63[5].n64_f32[0] = v67;
      if ( (unsigned int)v36 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_52;
      v68 = (float32x2_t *)(v30 + 12 * v36);
      v69 = v66 + v68[5].n64_f32[0];
      v68[4].n64_u64[0] = vadd_f32(v65, v68[4]).n64_u64[0];
      v68[5].n64_f32[0] = v69;
      if ( (unsigned int)v40 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_52;
      v70 = (float32x2_t *)(v30 + 12 * v40);
      v71 = v66 + v70[5].n64_f32[0];
      v70[4].n64_u64[0] = vadd_f32(v65, v70[4]).n64_u64[0];
      v70[5].n64_f32[0] = v71;
      if ( !v31 )
        break;
      if ( (unsigned int)v35 >= *(_DWORD *)(v31 + 24) )
        goto LABEL_52;
      v72 = (float32x2_t *)(v31 + 12 * v35);
      v73.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v59, v58), vmul_n_f32(v62, v60)), v64).n64_u64[0];
      v74 = (float)((float)((float)(v100 - v44) * v58) - (float)((float)(v46 - v44) * v60)) * v64;
      v75 = v74 + v72[5].n64_f32[0];
      v72[4].n64_u64[0] = vadd_f32(v73, v72[4]).n64_u64[0];
      v72[5].n64_f32[0] = v75;
      if ( (unsigned int)v36 >= *(_DWORD *)(v31 + 24)
        || (v76 = (float32x2_t *)(v31 + 12 * v36),
            v77 = v74 + v76[5].n64_f32[0],
            v76[4].n64_u64[0] = vadd_f32(v73, v76[4]).n64_u64[0],
            v76[5].n64_f32[0] = v77,
            (unsigned int)v40 >= *(_DWORD *)(v31 + 24)) )
      {
LABEL_52:
        v94 = sub_B5D6C8(this);
        sub_B5D668(v94, 0LL);
      }
      v78 = (float32x2_t *)(v31 + 12 * v40);
      v32 = v37 + 1;
      v79 = v74 + v78[5].n64_f32[0];
      v78[4].n64_u64[0] = vadd_f32(v73, v78[4]).n64_u64[0];
      v78[5].n64_f32[0] = v79;
      if ( (int)(v37 + 1) >= v98 )
        goto LABEL_35;
    }
LABEL_53:
    sub_B5D69C(this, vertices);
  }
LABEL_35:
  if ( v95 >= 1 )
  {
    if ( v97 )
    {
      v80 = 0LL;
      p_maxPieceVertex = &this->fields.maxPieceVertex;
      v82 = 32LL;
      while ( 1 )
      {
        if ( v80 >= (unsigned int)v97->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v83 = (char *)v97->fields._items + v82;
        v84 = *(_QWORD *)v83;
        LODWORD(v83) = *((_DWORD *)v83 + 2);
        *(_QWORD *)&normal.fields.x = v84;
        LODWORD(normal.fields.z) = (_DWORD)v83;
        if ( !v30 )
          break;
        if ( v80 >= *(unsigned int *)(v30 + 24) )
          goto LABEL_52;
        v85 = *(float *)(v30 + v82 + 8);
        *(_QWORD *)&tangent.fields.x = *(_QWORD *)(v30 + v82);
        tangent.fields.z = v85;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v96 )
          break;
        if ( v80 >= v96->max_length )
          goto LABEL_52;
        *((UnityEngine_Vector3_o *)p_maxPieceVertex - 1) = tangent;
        *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Vector3__Cross(normal, tangent, 0LL);
        if ( !v31 )
          break;
        if ( v80 >= *(unsigned int *)(v31 + 24) || v80 >= v96->max_length )
          goto LABEL_52;
        v90 = *(float *)(v31 + v82 + 4);
        v89 = *(float *)(v31 + v82 + 8);
        v91 = *(float *)(v31 + v82);
        ++v80;
        v82 += 12LL;
        if ( (float)((float)(v88 * v89) + (float)((float)(v86 * v91) + (float)(v87 * v90))) >= 0.0 )
          v92 = 1.0;
        else
          v92 = -1.0;
        *(float *)p_maxPieceVertex = v92;
        p_maxPieceVertex += 4;
        if ( (__int64)v80 >= v95 )
          return v96;
      }
    }
    goto LABEL_53;
  }
  return v96;
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *onBroken; // x20
  UnityEngine_Renderer_o *v89; // x19
  UnityEngine_Renderer_o *v90; // x20
  FGOMeshExploder_o *v91; // x21
  System_Array_o *v92; // x28
  System_Array_o *materials; // x21
  System_Array_o *v94; // x21
  FGOMeshExploder_o *v95; // x20
  System_Array_o *v96; // x21
  System_Array_o *v97; // x20
  System_Collections_Generic_List_Vector3__o *v98; // x27
  System_Collections_Generic_List_Vector2__o *v99; // x28
  System_Collections_Generic_List_int__o *v100; // x21
  int v101; // w20
  int v102; // w19
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v104; // w8
  int v105; // w10
  __int64 v106; // x8
  il2cpp_array_size_t v107; // w12
  unsigned int v108; // w9
  __int64 v109; // x9
  __int64 v110; // x10
  il2cpp_array_size_t v111; // w11
  float *v112; // x11
  float v113; // s8
  float v114; // s15
  float v115; // s9
  float *v116; // x11
  float v117; // s1
  float v118; // s2
  float v119; // s13
  float *v120; // x11
  float v121; // s10
  float v122; // s11
  float v123; // s14
  float v124; // s12
  float PieceDeltaSqrSize; // s0
  UnityEngine_GameObject_o *v126; // x22
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v130; // x0
  const MethodInfo *v131; // x5
  UnityEngine_Vector4_array *v132; // x0
  UnityEngine_Rigidbody_o *v133; // x19
  float v134; // s8
  float v135; // s0
  UnityEngine_Object_o *v136; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v137; // x19
  __int64 v138; // x0
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+8h] [xbp-108h]
  UnityEngine_Material_array *value; // [xsp+10h] [xbp-100h]
  bool v141; // [xsp+1Ch] [xbp-F4h]
  UnityEngine_Vector3_o v142; // [xsp+2Ch] [xbp-E4h]
  int v144; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v145; // [xsp+54h] [xbp-BCh]
  UnityEngine_Vector2_o v146; // [xsp+5Ch] [xbp-B4h]
  UnityEngine_Vector2_o v147; // [xsp+64h] [xbp-ACh]
  float v149; // [xsp+70h] [xbp-A0h]
  float v151; // [xsp+74h] [xbp-9Ch]
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_42E8C4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)target, index, tri);
    sub_B5D5C4(&FGOMeshExploder_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__Add__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__Add__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2___ctor__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3___ctor__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector3__get_Count__, v66, v67, v68);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&System_Collections_Generic_List_Vector2__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&System_Collections_Generic_List_Vector3__TypeInfo, v75, v76, v77);
    sub_B5D5C4(&UnityEngine_Material___TypeInfo, v78, v79, v80);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v81, v82, v83);
    this = (FGOMeshExploder_o *)sub_B5D5C4(&StringLiteral_21761/*"piece"*/, v84, v85, v86);
    byte_42E8C4C = 1;
  }
  if ( !target )
    goto LABEL_84;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)target,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  onBroken = (UnityEngine_Object_o *)v20->fields.onBroken;
  v89 = (UnityEngine_Renderer_o *)Component_WebViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(onBroken, 0LL, 0LL);
  v141 = isActive;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v20->fields.onBroken;
    if ( !this )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_84;
    v90 = (UnityEngine_Renderer_o *)this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    if ( !v89 )
      goto LABEL_84;
    v91 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    if ( !this )
      goto LABEL_84;
    v92 = (System_Array_o *)sub_B5D5DC(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.mass) + LODWORD(v91->fields.mass)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials(v90, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v90, 0LL);
    if ( !this )
      goto LABEL_84;
    System_Array__Copy_43385208(materials, v92, LODWORD(this->fields.mass), 0LL);
    v94 = (System_Array_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v90, 0LL);
    if ( !this )
      goto LABEL_84;
    v95 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v92;
    System_Array__Copy_43381116(v94, 0, v92, LODWORD(v95->fields.mass), LODWORD(this->fields.mass), 0LL);
  }
  else
  {
    if ( !v89 )
      goto LABEL_84;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    if ( !this )
      goto LABEL_84;
    v96 = (System_Array_o *)sub_B5D5DC(UnityEngine_Material___TypeInfo, LODWORD(this->fields.mass));
    v97 = (System_Array_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v89, 0LL);
    if ( !this )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v96;
    System_Array__Copy_43385208(v97, v96, LODWORD(this->fields.mass), 0LL);
  }
  v142.fields.x = x;
  v142.fields.y = y;
  v142.fields.z = z;
  v98 = (System_Collections_Generic_List_Vector3__o *)sub_B5D694(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v98,
    (const MethodInfo_30408B4 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v99 = (System_Collections_Generic_List_Vector2__o *)sub_B5D694(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v99,
    (const MethodInfo_303D820 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v100 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v100,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_B5D694(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_30408B4 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_84;
    v101 = 0;
    v102 = 0;
    v144 = vtxCount / 3;
    do
    {
      max_length = tri->max_length;
      v104 = index + v101;
      v105 = index + v101 + 2;
      if ( v105 >= (int)max_length )
        break;
      if ( v104 >= max_length )
        goto LABEL_83;
      if ( !Vtx )
        goto LABEL_84;
      v106 = tri->m_Items[v104 + 1];
      v107 = Vtx->max_length;
      if ( (unsigned int)v106 >= v107 )
        goto LABEL_83;
      v108 = index + v101 + 1;
      if ( v108 >= max_length )
        goto LABEL_83;
      v109 = tri->m_Items[v108 + 1];
      if ( (unsigned int)v109 >= v107 )
        goto LABEL_83;
      if ( v105 >= max_length )
        goto LABEL_83;
      v110 = tri->m_Items[v105 + 1];
      if ( (unsigned int)v110 >= v107 )
        goto LABEL_83;
      if ( !UVs )
        goto LABEL_84;
      v111 = UVs->max_length;
      if ( (unsigned int)v106 >= v111 || (unsigned int)v109 >= v111 || (unsigned int)v110 >= v111 )
      {
LABEL_83:
        v138 = sub_B5D6C8(this);
        sub_B5D668(v138, 0LL);
      }
      v112 = (float *)((char *)Vtx + 12 * v106);
      v114 = v112[8];
      v113 = v112[9];
      v115 = v112[10];
      v116 = (float *)((char *)Vtx + 12 * v109);
      v117 = v116[8];
      v118 = v116[9];
      v119 = v116[10];
      v120 = (float *)((char *)Vtx + 12 * v110);
      v122 = v120[8];
      v121 = v120[9];
      v123 = v120[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v145 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v106].fields.y;
      v146 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v109].fields.y;
      v147 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v110].fields.y;
      v149 = v118;
      v151 = v117;
      v124 = (float)((float)(v115 - v119) * (float)(v115 - v119))
           + (float)((float)((float)(v114 - v117) * (float)(v114 - v117))
                   + (float)((float)(v113 - v118) * (float)(v113 - v118)));
      if ( (BYTE3(FGOMeshExploder_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.exploded;
      if ( v124 <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v119 - v123) * (float)(v119 - v123))
                 + (float)((float)((float)(v151 - v122) * (float)(v151 - v122))
                         + (float)((float)(v149 - v121) * (float)(v149 - v121)))) <= PieceDeltaSqrSize )
        return;
      if ( (this[3].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[2].fields.angularVelocity.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v115 - v123) * (float)(v115 - v123))
                 + (float)((float)((float)(v114 - v122) * (float)(v114 - v122))
                         + (float)((float)(v113 - v121) * (float)(v113 - v121)))) <= PieceDeltaSqrSize )
        return;
      if ( !v98 )
        goto LABEL_84;
      v152.fields.x = v114;
      v152.fields.y = v113;
      v152.fields.z = v115;
      System_Collections_Generic_List_Vector3___Add(
        v98,
        v152,
        (const MethodInfo_3041654 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v153.fields.y = v149;
      v153.fields.x = v151;
      v153.fields.z = v119;
      System_Collections_Generic_List_Vector3___Add(
        v98,
        v153,
        (const MethodInfo_3041654 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v154.fields.x = v122;
      v154.fields.y = v121;
      v154.fields.z = v123;
      System_Collections_Generic_List_Vector3___Add(
        v98,
        v154,
        (const MethodInfo_3041654 *)Method_System_Collections_Generic_List_Vector3__Add__);
      if ( !v99 )
        goto LABEL_84;
      System_Collections_Generic_List_Vector2___Add(
        v99,
        v145,
        (const MethodInfo_303E584 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v99,
        v146,
        (const MethodInfo_303E584 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v99,
        v147,
        (const MethodInfo_303E584 *)Method_System_Collections_Generic_List_Vector2__Add__);
      if ( !v100 )
        goto LABEL_84;
      System_Collections_Generic_List_int___Add(
        v100,
        v101,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v100,
        v101 + 1,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v100,
        v101 + 2,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      ++v102;
      v101 += 3;
    }
    while ( v102 < v144 );
  }
  if ( !v98 )
LABEL_84:
    sub_B5D69C(this, target);
  if ( v98->fields._size < 4 )
    return;
  v126 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v126, (System_String_o *)StringLiteral_21761/*"piece"*/, 0LL);
  this = *(FGOMeshExploder_o **)&v20->fields.exploded;
  if ( !this )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v126,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v126 )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(v126, v141, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(target, 0LL);
  GameObjectExtensions__SetParent(v126, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL);
  if ( !this )
    goto LABEL_84;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v126, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                v126,
                                (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_84;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v126,
    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v126,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v126, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v142, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v126, 0LL);
  if ( !this )
    goto LABEL_84;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v126, 0LL);
  if ( !this )
    goto LABEL_84;
  v155.fields.x = v20->fields.fadeTime;
  v155.fields.y = v155.fields.x;
  v155.fields.z = v155.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v155, 0LL);
  if ( !mesh )
    goto LABEL_84;
  UnityEngine_Mesh__SetVertices(mesh, v98, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v99, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v100, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v132 = FGOMeshExploder__CalculateMeshTangents(v130, v98, v99, normals, v100, v131);
  UnityEngine_Mesh__set_tangents(mesh, v132, 0LL);
  v133 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      v126,
                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v133, 0LL, 0LL) )
  {
    v134 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    v135 = UnityEngine_Random__Range(v20->fields.maxBrokenSpeed, v20->fields.pieceScale, 0LL);
    if ( !v133 )
      goto LABEL_84;
    v156.fields.z = v135 * 0.5;
    v156.fields.y = 0.0;
    v156.fields.x = v134 * 0.5;
    UnityEngine_Rigidbody__set_velocity(v133, v156, 0LL);
    v157.fields.x = v20->fields.angularVelocity.fields.y * 0.5;
    v157.fields.y = v20->fields.angularVelocity.fields.z * 0.5;
    v157.fields.z = *(float *)&v20->fields.minPieceVertex * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity(v133, v157, 0LL);
    UnityEngine_Rigidbody__set_mass(v133, v20->fields.angularVelocity.fields.x, 0LL);
    UnityEngine_Rigidbody__set_useGravity(v133, BYTE1(v20->fields.mass), 0LL);
  }
  v136 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   v126,
                                   (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(v136, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v136 )
      goto LABEL_84;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v136, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v136, 1, 0LL);
  }
  v137 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
           v126,
           (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v137, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v137 )
    {
      LODWORD(v137->fields.callbackQueue) = v20->fields.charaMesh;
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
  FGOMeshExploder__Explode_25573100(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_25573100(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FGOMeshExploder_o *v5; // x19
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
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v22; // x1
  System_Action_o *pieces; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E8C4B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__,
      (_DWORD)target,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v15, v16, v17);
    this = (FGOMeshExploder_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E8C4B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !target )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !LOBYTE(v5->fields.mass) )
    {
LABEL_15:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)target, 0LL);
      pieces = (System_Action_o *)v5->fields.pieces;
      if ( pieces )
        System_Action__Invoke(pieces, 0LL);
      LOBYTE(v5[1].klass) = 1;
      return;
    }
    this = *(FGOMeshExploder_o **)&v5->fields.exploded;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v24.fields.current )
          sub_B5D69C(0LL, v22);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_15;
    }
LABEL_23:
    sub_B5D69C(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8C4A & 1) == 0 )
  {
    sub_B5D5C4(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C4A = 1;
  }
  v5 = sub_B5D694(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  FGOMeshExploder__PreCreatePiece_d__16___ctor((FGOMeshExploder__PreCreatePiece_d__16_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v2; // w2
  __int64 v3; // x3
  FGOMeshExploder__PreCreatePiece_d__16_o *v4; // x22
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  UnityEngine_Mesh_o *v18; // x24
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

  v4 = this;
  if ( (byte_42E56BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, (_DWORD)method, v2, v3);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_B5D5C4(&UnityEngine_Mesh_TypeInfo, v5, v6, v7);
    byte_42E56BF = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v53 = v4;
    p_i_5__7 = &v4->fields._i_5__7;
    i_5__7 = v4->fields._i_5__7;
    v4->fields.__1__state = -1;
    p_tris_5__8 = &v4->fields._tris_5__8;
    p_triangles_5__4 = &v4->fields._triangles_5__4;
    p_vertices_5__2 = &v4->fields._vertices_5__2;
    p_uvs_5__5 = &v4->fields._uvs_5__5;
    p_yield_trianble_count_5__6 = &v4->fields._yield_trianble_count_5__6;
    methoda.klass = (Il2CppClass *)&v4->fields._normals_5__3;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    v18 = (UnityEngine_Mesh_o *)sub_B5D694(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v18, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v18, 0LL);
          if ( v18 )
          {
            v4->fields._vertices_5__2 = UnityEngine_Mesh__get_vertices(v18, 0LL);
            p_vertices_5__2 = &v4->fields._vertices_5__2;
            sub_B5D560(&v4->fields._vertices_5__2);
            v4->fields._normals_5__3 = UnityEngine_Mesh__get_normals(v18, 0LL);
            methoda.klass = (Il2CppClass *)&v4->fields._normals_5__3;
            sub_B5D560(&v4->fields._normals_5__3);
            p_triangles_5__4 = &v4->fields._triangles_5__4;
            v4->fields._triangles_5__4 = UnityEngine_Mesh__get_triangles(v18, 0LL);
            sub_B5D560(&v4->fields._triangles_5__4);
            uv = UnityEngine_Mesh__get_uv(v18, 0LL);
            p_uvs_5__5 = &v4->fields._uvs_5__5;
            v4->fields._uvs_5__5 = uv;
            sub_B5D560(&v4->fields._uvs_5__5);
            v4->fields._yield_trianble_count_5__6 = 0;
            p_yield_trianble_count_5__6 = &v4->fields._yield_trianble_count_5__6;
            v4->fields._i_5__7 = 0;
            triangles_5__4 = v4->fields._triangles_5__4;
            if ( triangles_5__4 )
            {
              i_5__7 = 0;
              v53 = v4;
              v4->fields._tris_5__8 = *(_QWORD *)&triangles_5__4->max_length;
              p_tris_5__8 = &v4->fields._tris_5__8;
              p_i_5__7 = &v4->fields._i_5__7;
LABEL_16:
              while ( i_5__7 < *p_tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_38;
                v21 = UnityEngine_Random__Range_35654020(
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
                    v50 = sub_B5D6C8(this);
                    sub_B5D668(v50, 0LL);
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
                  sub_B5D560(&v53->fields.__2__current);
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
    sub_B5D69C(this, method);
  }
  this = 0LL;
  if ( _1__state )
    return (char)this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_38;
  if ( !LOBYTE(_4__this->fields.mass) )
  {
LABEL_36:
    LOBYTE(this) = 0;
    return (char)this;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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