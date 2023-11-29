void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9F2E & 1) == 0 )
  {
    sub_B16FFC(&FGOMeshExploder_TypeInfo, v1);
    byte_40F9F2E = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F9F2D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_40F9F2D = 1;
  }
  LOWORD(this->fields.mass) = 257;
  this->fields.angularVelocity.fields.x = 1.0;
  *(UnityEngine_Vector3_o *)&this->fields.angularVelocity.fields.y = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.maxPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.maxBrokenSpeed = xmmword_3132200;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 v4,
                                                                                                 v5,
                                                                                                 v6,
                                                                                                 v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.exploded = v8;
  sub_B16F98(
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t size; // w26
  unsigned int v17; // w22
  __int64 v18; // x20
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned int v25; // w22
  unsigned int v26; // w9
  struct System_Int32_array *items; // x8
  __int64 v28; // x27
  __int64 v29; // x19
  unsigned int v30; // w26
  unsigned int v31; // w22
  unsigned int v32; // w9
  __int64 v33; // x22
  struct UnityEngine_Vector3_array *v34; // x8
  float32x2_t *v35; // x10
  float32x2_t v36; // d8
  float v37; // s15
  float32x2_t *v38; // x10
  float v39; // s9
  float32x2_t *v40; // x8
  unsigned int v41; // w9
  struct UnityEngine_Vector2_array *v42; // x8
  float32x2_t v43; // d10
  float *v44; // x10
  float v45; // s13
  float v46; // s14
  float *v47; // x10
  float v48; // s11
  float v49; // s12
  float *v50; // x8
  float v51; // s3
  float32x2_t v52; // d4
  float v53; // s6
  float v54; // s7
  float32x2_t v55; // d1
  float32x2_t *v56; // x8
  float v57; // s5
  float32x2_t v58; // d16
  float v59; // s7
  float v60; // s18
  float32x2_t *v61; // x8
  float v62; // s18
  float32x2_t *v63; // x8
  float v64; // s7
  float32x2_t *v65; // x8
  float32x2_t v66; // d0
  float v67; // s1
  float v68; // s3
  float32x2_t *v69; // x8
  float v70; // s3
  float32x2_t *v71; // x8
  float v72; // s1
  unsigned __int64 v73; // x22
  float *v74; // x23
  __int64 v75; // x24
  char *v76; // x8
  __int64 v77; // x9
  float v78; // w8
  float v79; // s0
  float v80; // s1
  float v81; // s2
  float v82; // s3
  float v83; // s5
  float v84; // s4
  float v85; // s0
  int v87; // [xsp+0h] [xbp-E0h]
  UnityEngine_Vector4_array *v88; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_Vector3__o *v89; // [xsp+10h] [xbp-D0h]
  int32_t v90; // [xsp+1Ch] [xbp-C4h]
  float32x2_t v91; // [xsp+20h] [xbp-C0h]
  float v92; // [xsp+2Ch] [xbp-B4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-A0h] BYREF

  if ( (byte_40F9F2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector3__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Vector4___TypeInfo, v15);
    byte_40F9F2C = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_53;
  v89 = normals;
  if ( !vertices )
    goto LABEL_53;
  size = triangles->fields._size;
  v17 = vertices->fields._size;
  v18 = sub_B17014(UnityEngine_Vector3___TypeInfo, v17, uvs);
  v20 = sub_B17014(UnityEngine_Vector3___TypeInfo, v17, v19);
  v87 = v17;
  v22 = sub_B17014(UnityEngine_Vector4___TypeInfo, v17, v21);
  v90 = size;
  v88 = (UnityEngine_Vector4_array *)v22;
  if ( size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = triangles->fields._size;
      if ( v26 <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      items = triangles->fields._items;
      v28 = items->m_Items[v25 + 1];
      if ( v26 <= v25 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v29 = items->m_Items[v25 + 1 + 1];
      v31 = v25 + 2;
      v30 = v31;
      if ( v26 <= v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v32 = vertices->fields._size;
      v33 = items->m_Items[v31 + 1];
      if ( v32 <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = vertices->fields._items;
      v35 = (float32x2_t *)((char *)v34 + 12 * v28);
      v36.n64_u64[0] = v35[4].n64_u64[0];
      v37 = v35[5].n64_f32[0];
      if ( v32 <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v38 = (float32x2_t *)((char *)v34 + 12 * v29);
      v39 = v38[5].n64_f32[0];
      if ( v32 <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !uvs )
        break;
      v40 = (float32x2_t *)((char *)v34 + 12 * v33);
      v41 = uvs->fields._size;
      v91.n64_u64[0] = v40[4].n64_u64[0];
      v92 = v40[5].n64_f32[0];
      if ( v41 <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v42 = uvs->fields._items;
      v43.n64_u64[0] = v38[4].n64_u64[0];
      v44 = (float *)(&v42->obj.klass + v28);
      v45 = v44[8];
      v46 = v44[9];
      if ( v41 <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v47 = (float *)(&v42->obj.klass + v29);
      v49 = v47[8];
      v48 = v47[9];
      if ( v41 <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v18 )
        break;
      if ( (unsigned int)v28 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v50 = (float *)(&v42->obj.klass + v33);
      v51 = v49 - v45;
      v52.n64_u64[0] = vsub_f32(v91, v36).n64_u64[0];
      v53 = v50[8] - v45;
      v54 = v50[9] - v46;
      v55.n64_u64[0] = vsub_f32(v43, v36).n64_u64[0];
      v56 = (float32x2_t *)(v18 + 12 * v28);
      v57 = 1.0 / (float)((float)((float)(v49 - v45) * v54) - (float)((float)(v48 - v46) * v53));
      v58.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v55, v54), vmul_n_f32(v52, v48 - v46)), v57).n64_u64[0];
      v59 = (float)((float)((float)(v39 - v37) * v54) - (float)((float)(v92 - v37) * (float)(v48 - v46))) * v57;
      v60 = v59 + v56[5].n64_f32[0];
      v56[4].n64_u64[0] = vadd_f32(v58, v56[4]).n64_u64[0];
      v56[5].n64_f32[0] = v60;
      if ( (unsigned int)v29 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v61 = (float32x2_t *)(v18 + 12 * v29);
      v62 = v59 + v61[5].n64_f32[0];
      v61[4].n64_u64[0] = vadd_f32(v58, v61[4]).n64_u64[0];
      v61[5].n64_f32[0] = v62;
      if ( (unsigned int)v33 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_52;
      v63 = (float32x2_t *)(v18 + 12 * v33);
      v64 = v59 + v63[5].n64_f32[0];
      v63[4].n64_u64[0] = vadd_f32(v58, v63[4]).n64_u64[0];
      v63[5].n64_f32[0] = v64;
      if ( !v20 )
        break;
      if ( (unsigned int)v28 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_52;
      v65 = (float32x2_t *)(v20 + 12 * v28);
      v66.n64_u64[0] = vmul_n_f32(vsub_f32(vmul_n_f32(v52, v51), vmul_n_f32(v55, v53)), v57).n64_u64[0];
      v67 = (float)((float)((float)(v92 - v37) * v51) - (float)((float)(v39 - v37) * v53)) * v57;
      v68 = v67 + v65[5].n64_f32[0];
      v65[4].n64_u64[0] = vadd_f32(v66, v65[4]).n64_u64[0];
      v65[5].n64_f32[0] = v68;
      if ( (unsigned int)v29 >= *(_DWORD *)(v20 + 24)
        || (v69 = (float32x2_t *)(v20 + 12 * v29),
            v70 = v67 + v69[5].n64_f32[0],
            v69[4].n64_u64[0] = vadd_f32(v66, v69[4]).n64_u64[0],
            v69[5].n64_f32[0] = v70,
            (unsigned int)v33 >= *(_DWORD *)(v20 + 24)) )
      {
LABEL_52:
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
      v71 = (float32x2_t *)(v20 + 12 * v33);
      v25 = v30 + 1;
      v72 = v67 + v71[5].n64_f32[0];
      v71[4].n64_u64[0] = vadd_f32(v66, v71[4]).n64_u64[0];
      v71[5].n64_f32[0] = v72;
      if ( (int)(v30 + 1) >= v90 )
        goto LABEL_35;
    }
LABEL_53:
    sub_B170D4();
  }
LABEL_35:
  if ( v87 >= 1 )
  {
    if ( v89 )
    {
      v73 = 0LL;
      v74 = (float *)(v22 + 44);
      v75 = 32LL;
      while ( 1 )
      {
        if ( v73 >= (unsigned int)v89->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v76 = (char *)v89->fields._items + v75;
        v77 = *(_QWORD *)v76;
        LODWORD(v76) = *((_DWORD *)v76 + 2);
        *(_QWORD *)&normal.fields.x = v77;
        LODWORD(normal.fields.z) = (_DWORD)v76;
        if ( !v18 )
          break;
        if ( v73 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_52;
        v78 = *(float *)(v18 + v75 + 8);
        *(_QWORD *)&tangent.fields.x = *(_QWORD *)(v18 + v75);
        tangent.fields.z = v78;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v88 )
          break;
        if ( v73 >= v88->max_length )
          goto LABEL_52;
        *((UnityEngine_Vector3_o *)v74 - 1) = tangent;
        *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Vector3__Cross(normal, tangent, 0LL);
        if ( !v20 )
          break;
        if ( v73 >= *(unsigned int *)(v20 + 24) || v73 >= v88->max_length )
          goto LABEL_52;
        v83 = *(float *)(v20 + v75 + 4);
        v82 = *(float *)(v20 + v75 + 8);
        v84 = *(float *)(v20 + v75);
        ++v73;
        v75 += 12LL;
        if ( (float)((float)(v81 * v82) + (float)((float)(v79 * v84) + (float)(v80 * v83))) >= 0.0 )
          v85 = 1.0;
        else
          v85 = -1.0;
        *v74 = v85;
        v74 += 4;
        if ( (__int64)v73 >= v87 )
          return v88;
      }
    }
    goto LABEL_53;
  }
  return v88;
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
  struct System_Action_o *onBroken; // x20
  UnityEngine_Renderer_o *v45; // x19
  struct System_Action_o *v46; // x0
  UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  UnityEngine_Renderer_o *v48; // x20
  UnityEngine_Material_array *materials; // x0
  UnityEngine_Material_array *v50; // x21
  UnityEngine_Material_array *v51; // x0
  __int64 v52; // x2
  System_Array_o *v53; // x28
  System_Array_o *v54; // x21
  UnityEngine_Material_array *v55; // x0
  System_Array_o *v56; // x21
  UnityEngine_Material_array *v57; // x0
  UnityEngine_Material_array *v58; // x20
  UnityEngine_Material_array *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UnityEngine_Material_array *v64; // x0
  __int64 v65; // x2
  System_Array_o *v66; // x21
  System_Array_o *v67; // x20
  UnityEngine_Material_array *v68; // x0
  System_Collections_Generic_List_Vector3__o *v69; // x27
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Collections_Generic_List_Vector2__o *v74; // x28
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_List_int__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int v89; // w20
  int v90; // w19
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v92; // w8
  int v93; // w10
  __int64 v94; // x8
  il2cpp_array_size_t v95; // w12
  unsigned int v96; // w9
  __int64 v97; // x9
  __int64 v98; // x10
  il2cpp_array_size_t v99; // w11
  float *v100; // x11
  float v101; // s8
  float v102; // s15
  float v103; // s9
  float *v104; // x11
  float v105; // s1
  float v106; // s2
  float v107; // s13
  float *v108; // x11
  float v109; // s10
  float v110; // s11
  float v111; // s14
  FGOMeshExploder_c *v112; // x0
  float v113; // s12
  float PieceDeltaSqrSize; // s0
  UnityEngine_GameObject_o *v115; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  UnityEngine_MeshFilter_o *v120; // x0
  UnityEngine_Mesh_o *mesh; // x20
  UnityEngine_Renderer_o *v122; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v124; // x0
  UnityEngine_Transform_o *v125; // x0
  FGOMeshExploder_o *v126; // x0
  const MethodInfo *v127; // x5
  UnityEngine_Vector4_array *v128; // x0
  UnityEngine_Rigidbody_o *v129; // x19
  float v130; // s8
  float v131; // s0
  UnityEngine_MeshCollider_o *v132; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v133; // x19
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+8h] [xbp-108h]
  UnityEngine_Material_array *value; // [xsp+10h] [xbp-100h]
  bool v136; // [xsp+1Ch] [xbp-F4h]
  UnityEngine_Vector3_o v137; // [xsp+2Ch] [xbp-E4h]
  int v139; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v140; // [xsp+54h] [xbp-BCh]
  UnityEngine_Vector2_o v141; // [xsp+5Ch] [xbp-B4h]
  UnityEngine_Vector2_o v142; // [xsp+64h] [xbp-ACh]
  float v144; // [xsp+70h] [xbp-A0h]
  float v146; // [xsp+74h] [xbp-9Ch]
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F9F2B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, target);
    sub_B16FFC(&FGOMeshExploder_TypeInfo, v21);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v22);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v23);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v24);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v25);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v26);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v27);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__Add__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector3__Add__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2___ctor__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector3___ctor__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector3__get_Count__, v36);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_B16FFC(&System_Collections_Generic_List_Vector2__TypeInfo, v38);
    sub_B16FFC(&System_Collections_Generic_List_Vector3__TypeInfo, v39);
    sub_B16FFC(&UnityEngine_Material___TypeInfo, v40);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v41);
    sub_B16FFC(&StringLiteral_21380, v42);
    byte_40F9F2B = 1;
  }
  if ( !target )
    goto LABEL_84;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)target,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  onBroken = this->fields.onBroken;
  v45 = (UnityEngine_Renderer_o *)Component_WebViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v136 = isActive;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)onBroken, 0LL, 0LL) )
  {
    v46 = this->fields.onBroken;
    if ( !v46 )
      goto LABEL_84;
    Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v46,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !Component_srcLineSprite )
      goto LABEL_84;
    v48 = Component_srcLineSprite;
    materials = UnityEngine_Renderer__get_materials(Component_srcLineSprite, 0LL);
    if ( !materials )
      goto LABEL_84;
    if ( !v45 )
      goto LABEL_84;
    v50 = materials;
    v51 = UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !v51 )
      goto LABEL_84;
    v53 = (System_Array_o *)sub_B17014(UnityEngine_Material___TypeInfo, v51->max_length + v50->max_length, v52);
    v54 = (System_Array_o *)UnityEngine_Renderer__get_materials(v48, 0LL);
    v55 = UnityEngine_Renderer__get_materials(v48, 0LL);
    if ( !v55 )
      goto LABEL_84;
    System_Array__Copy_42340100(v54, v53, v55->max_length, 0LL);
    v56 = (System_Array_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    v57 = UnityEngine_Renderer__get_materials(v48, 0LL);
    if ( !v57 )
      goto LABEL_84;
    v58 = v57;
    v59 = UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !v59 )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v53;
    System_Array__Copy_42336008(v56, 0, v53, v58->max_length, v59->max_length, 0LL);
  }
  else
  {
    if ( !v45 )
      goto LABEL_84;
    v64 = UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !v64 )
      goto LABEL_84;
    v66 = (System_Array_o *)sub_B17014(UnityEngine_Material___TypeInfo, v64->max_length, v65);
    v67 = (System_Array_o *)UnityEngine_Renderer__get_materials(v45, 0LL);
    v68 = UnityEngine_Renderer__get_materials(v45, 0LL);
    if ( !v68 )
      goto LABEL_84;
    value = (UnityEngine_Material_array *)v66;
    System_Array__Copy_42340100(v67, v66, v68->max_length, 0LL);
  }
  v137.fields.x = x;
  v137.fields.y = y;
  v137.fields.z = z;
  v69 = (System_Collections_Generic_List_Vector3__o *)sub_B170CC(
                                                        System_Collections_Generic_List_Vector3__TypeInfo,
                                                        v60,
                                                        v61,
                                                        v62,
                                                        v63);
  System_Collections_Generic_List_Vector3____ctor(
    v69,
    (const MethodInfo_2E4D460 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v74 = (System_Collections_Generic_List_Vector2__o *)sub_B170CC(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v70,
                                                        v71,
                                                        v72,
                                                        v73);
  System_Collections_Generic_List_Vector2____ctor(
    v74,
    (const MethodInfo_2E4A3CC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v79 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v75,
                                                    v76,
                                                    v77,
                                                    v78);
  System_Collections_Generic_List_int____ctor(
    v79,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_B170CC(
                                                            System_Collections_Generic_List_Vector3__TypeInfo,
                                                            v80,
                                                            v81,
                                                            v82,
                                                            v83);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_2E4D460 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_84;
    v89 = 0;
    v90 = 0;
    v139 = vtxCount / 3;
    do
    {
      max_length = tri->max_length;
      v92 = index + v89;
      v93 = index + v89 + 2;
      if ( v93 >= (int)max_length )
        break;
      if ( v92 >= max_length )
        goto LABEL_83;
      if ( !Vtx )
        goto LABEL_84;
      v94 = tri->m_Items[v92 + 1];
      v95 = Vtx->max_length;
      if ( (unsigned int)v94 >= v95 )
        goto LABEL_83;
      v96 = index + v89 + 1;
      if ( v96 >= max_length )
        goto LABEL_83;
      v97 = tri->m_Items[v96 + 1];
      if ( (unsigned int)v97 >= v95 )
        goto LABEL_83;
      if ( v93 >= max_length )
        goto LABEL_83;
      v98 = tri->m_Items[v93 + 1];
      if ( (unsigned int)v98 >= v95 )
        goto LABEL_83;
      if ( !UVs )
        goto LABEL_84;
      v99 = UVs->max_length;
      if ( (unsigned int)v94 >= v99 || (unsigned int)v97 >= v99 || (unsigned int)v98 >= v99 )
      {
LABEL_83:
        sub_B17100(v84, v85, v86);
        sub_B170A0();
      }
      v100 = (float *)((char *)Vtx + 12 * v94);
      v102 = v100[8];
      v101 = v100[9];
      v103 = v100[10];
      v104 = (float *)((char *)Vtx + 12 * v97);
      v105 = v104[8];
      v106 = v104[9];
      v107 = v104[10];
      v108 = (float *)((char *)Vtx + 12 * v98);
      v110 = v108[8];
      v109 = v108[9];
      v111 = v108[10];
      v112 = FGOMeshExploder_TypeInfo;
      v140 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v94].fields.y;
      v141 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v97].fields.y;
      v142 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v98].fields.y;
      v144 = v106;
      v146 = v105;
      v113 = (float)((float)(v103 - v107) * (float)(v103 - v107))
           + (float)((float)((float)(v102 - v105) * (float)(v102 - v105))
                   + (float)((float)(v101 - v106) * (float)(v101 - v106)));
      if ( (BYTE3(FGOMeshExploder_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        v112 = FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = v112->static_fields->PieceDeltaSqrSize;
      if ( v113 <= PieceDeltaSqrSize )
        return;
      if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112);
        v112 = FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v107 - v111) * (float)(v107 - v111))
                 + (float)((float)((float)(v146 - v110) * (float)(v146 - v110))
                         + (float)((float)(v144 - v109) * (float)(v144 - v109)))) <= PieceDeltaSqrSize )
        return;
      if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v103 - v111) * (float)(v103 - v111))
                 + (float)((float)((float)(v102 - v110) * (float)(v102 - v110))
                         + (float)((float)(v101 - v109) * (float)(v101 - v109)))) <= PieceDeltaSqrSize )
        return;
      if ( !v69 )
        goto LABEL_84;
      v147.fields.x = v102;
      v147.fields.y = v101;
      v147.fields.z = v103;
      System_Collections_Generic_List_Vector3___Add(
        v69,
        v147,
        (const MethodInfo_2E4E200 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v148.fields.y = v144;
      v148.fields.x = v146;
      v148.fields.z = v107;
      System_Collections_Generic_List_Vector3___Add(
        v69,
        v148,
        (const MethodInfo_2E4E200 *)Method_System_Collections_Generic_List_Vector3__Add__);
      v149.fields.x = v110;
      v149.fields.y = v109;
      v149.fields.z = v111;
      System_Collections_Generic_List_Vector3___Add(
        v69,
        v149,
        (const MethodInfo_2E4E200 *)Method_System_Collections_Generic_List_Vector3__Add__);
      if ( !v74 )
        goto LABEL_84;
      System_Collections_Generic_List_Vector2___Add(
        v74,
        v140,
        (const MethodInfo_2E4B130 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v74,
        v141,
        (const MethodInfo_2E4B130 *)Method_System_Collections_Generic_List_Vector2__Add__);
      System_Collections_Generic_List_Vector2___Add(
        v74,
        v142,
        (const MethodInfo_2E4B130 *)Method_System_Collections_Generic_List_Vector2__Add__);
      if ( !v79 )
        goto LABEL_84;
      System_Collections_Generic_List_int___Add(
        v79,
        v89,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v79,
        v89 + 1,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      System_Collections_Generic_List_int___Add(
        v79,
        v89 + 2,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      ++v90;
      v89 += 3;
    }
    while ( v90 < v139 );
  }
  if ( !v69 )
LABEL_84:
    sub_B170D4();
  if ( v69->fields._size < 4 )
    return;
  v115 = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, v85, v86, v87, v88);
  UnityEngine_GameObject___ctor(v115, (System_String_o *)StringLiteral_21380, 0LL);
  v116 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.exploded;
  if ( !v116 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v116,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v115 )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(v115, v136, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(target, 0LL);
  GameObjectExtensions__SetParent(v115, parent, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  UnityEngine_GameObject__set_layer(v115, layer, 0LL);
  v120 = (UnityEngine_MeshFilter_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                       v115,
                                       (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !v120 )
    goto LABEL_84;
  mesh = UnityEngine_MeshFilter__get_mesh(v120, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v115,
    (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  v122 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v115,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !v122 )
    goto LABEL_84;
  UnityEngine_Renderer__set_materials(v122, value, 0LL);
  transform = UnityEngine_GameObject__get_transform(v115, 0LL);
  if ( !transform )
    goto LABEL_84;
  UnityEngine_Transform__set_position(transform, v137, 0LL);
  v124 = UnityEngine_GameObject__get_transform(v115, 0LL);
  if ( !v124 )
    goto LABEL_84;
  UnityEngine_Transform__set_rotation(v124, rot, 0LL);
  v125 = UnityEngine_GameObject__get_transform(v115, 0LL);
  if ( !v125 )
    goto LABEL_84;
  v150.fields.x = this->fields.fadeTime;
  v150.fields.y = v150.fields.x;
  v150.fields.z = v150.fields.x;
  UnityEngine_Transform__set_localScale(v125, v150, 0LL);
  if ( !mesh )
    goto LABEL_84;
  UnityEngine_Mesh__SetVertices(mesh, v69, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v74, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v79, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v128 = FGOMeshExploder__CalculateMeshTangents(v126, v69, v74, normals, v79, v127);
  UnityEngine_Mesh__set_tangents(mesh, v128, 0LL);
  v129 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      v115,
                                      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v129, 0LL, 0LL) )
  {
    v130 = UnityEngine_Random__Range(this->fields.maxBrokenSpeed, this->fields.pieceScale, 0LL);
    v131 = UnityEngine_Random__Range(this->fields.maxBrokenSpeed, this->fields.pieceScale, 0LL);
    if ( !v129 )
      goto LABEL_84;
    v151.fields.z = v131 * 0.5;
    v151.fields.y = 0.0;
    v151.fields.x = v130 * 0.5;
    UnityEngine_Rigidbody__set_velocity(v129, v151, 0LL);
    v152.fields.x = this->fields.angularVelocity.fields.y * 0.5;
    v152.fields.y = this->fields.angularVelocity.fields.z * 0.5;
    v152.fields.z = *(float *)&this->fields.minPieceVertex * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity(v129, v152, 0LL);
    UnityEngine_Rigidbody__set_mass(v129, this->fields.angularVelocity.fields.x, 0LL);
    UnityEngine_Rigidbody__set_useGravity(v129, BYTE1(this->fields.mass), 0LL);
  }
  v132 = (UnityEngine_MeshCollider_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         v115,
                                         (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v132, 0LL, 0LL) )
  {
    if ( !v132 )
      goto LABEL_84;
    UnityEngine_MeshCollider__set_sharedMesh(v132, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex(v132, 1, 0LL);
  }
  v133 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
           v115,
           (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v133, 0LL, 0LL) )
  {
    if ( v133 )
    {
      LODWORD(v133->fields.callbackQueue) = this->fields.charaMesh;
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
  FGOMeshExploder__Explode_25118896(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_25118896(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x0
  System_Action_o *pieces; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9F2A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F9F2A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !target )
    goto LABEL_23;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !LOBYTE(this->fields.mass) )
    {
LABEL_15:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)target, 0LL);
      pieces = (System_Action_o *)this->fields.pieces;
      if ( pieces )
        System_Action__Invoke(pieces, 0LL);
      LOBYTE(this[1].klass) = 1;
      return;
    }
    v11 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.exploded;
    if ( v11 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v13,
        v11,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v13,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v13.fields.current )
          sub_B170D4();
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v13,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_15;
    }
LABEL_23:
    sub_B170D4();
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9F29 & 1) == 0 )
  {
    sub_B16FFC(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method);
    byte_40F9F29 = 1;
  }
  v6 = sub_B170CC(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method, v2, v3, v4);
  FGOMeshExploder__PreCreatePiece_d__16___ctor((FGOMeshExploder__PreCreatePiece_d__16_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  bool result; // w0
  Il2CppObject **p__2__current; // x22
  int32_t i_5__7; // w8
  int32_t *p_i_5__7; // x28
  int32_t *p_tris_5__8; // x19
  System_Int32_array **p_triangles_5__4; // x23
  UnityEngine_Vector3_array **p_vertices_5__2; // x21
  UnityEngine_Vector2_array **p_uvs_5__5; // x24
  int32_t *p_yield_trianble_count_5__6; // x27
  UnityEngine_Mesh_o *v21; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_SkinnedMeshRenderer_o *Component_srcLineSprite; // x0
  struct UnityEngine_Vector3_array *vertices; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_Vector3_array *normals; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Int32_array *triangles; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_Vector2_array *uv; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_Int32_array *triangles_5__4; // x9
  int32_t v53; // w25
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  float v57; // s0
  unsigned int v58; // s1
  unsigned int v59; // s2
  _QWORD *image; // x8
  __int64 v61; // x9
  System_Int32_array *v62; // x10
  __int64 v63; // x12
  unsigned int max_length; // w13
  __int64 v65; // x11
  __int64 v66; // x14
  unsigned int v67; // w12
  __int64 v68; // x10
  float32x2_t *v69; // x9
  float32x2_t *v70; // x11
  float32x2_t *v71; // x8
  float32x2_t v72; // d2 OVERLAPPED
  void (__fastcall *v73)(); // d0
  float v74; // s1
  float v75; // s8
  unsigned int v76; // s9
  unsigned int v77; // s10
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_Transform_o *transform; // x26
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Transform_o *v81; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_Transform_o *v87; // x0
  int32_t v88; // w25
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int v95; // w9
  UnityEngine_Vector3_o faceNormal; // [xsp+0h] [xbp-C0h]
  FGOMeshExploder__PreCreatePiece_d__16_o *v97; // [xsp+18h] [xbp-A8h]
  MethodInfo methoda; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v99; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F68AD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method);
    sub_B16FFC(&UnityEngine_Mesh_TypeInfo, v9);
    byte_40F68AD = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    v97 = this;
    p_i_5__7 = &this->fields._i_5__7;
    i_5__7 = this->fields._i_5__7;
    this->fields.__1__state = -1;
    p_tris_5__8 = &this->fields._tris_5__8;
    p_triangles_5__4 = &this->fields._triangles_5__4;
    p_vertices_5__2 = &this->fields._vertices_5__2;
    p_uvs_5__5 = &this->fields._uvs_5__5;
    p_yield_trianble_count_5__6 = &this->fields._yield_trianble_count_5__6;
    methoda.klass = (Il2CppClass *)&this->fields._normals_5__3;
    goto LABEL_16;
  }
  if ( _1__state != 1 )
  {
    result = 0;
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      if ( LOBYTE(_4__this->fields.mass) )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      return 0;
    }
LABEL_38:
    sub_B170D4();
  }
  this->fields.__1__state = -1;
  v21 = (UnityEngine_Mesh_o *)sub_B170CC(UnityEngine_Mesh_TypeInfo, method, v2, v3, v4);
  UnityEngine_Mesh___ctor(v21, 0LL);
  if ( !_4__this )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  Component_srcLineSprite = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   gameObject,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !Component_srcLineSprite )
    goto LABEL_38;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(Component_srcLineSprite, v21, 0LL);
  if ( !v21 )
    goto LABEL_38;
  vertices = UnityEngine_Mesh__get_vertices(v21, 0LL);
  this->fields._vertices_5__2 = vertices;
  p_vertices_5__2 = &this->fields._vertices_5__2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._vertices_5__2,
    (System_Int32_array **)vertices,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  normals = UnityEngine_Mesh__get_normals(v21, 0LL);
  this->fields._normals_5__3 = normals;
  methoda.klass = (Il2CppClass *)&this->fields._normals_5__3;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._normals_5__3,
    (System_Int32_array **)normals,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  triangles = UnityEngine_Mesh__get_triangles(v21, 0LL);
  p_triangles_5__4 = &this->fields._triangles_5__4;
  this->fields._triangles_5__4 = triangles;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._triangles_5__4,
    (System_Int32_array **)triangles,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  uv = UnityEngine_Mesh__get_uv(v21, 0LL);
  p_uvs_5__5 = &this->fields._uvs_5__5;
  this->fields._uvs_5__5 = uv;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._uvs_5__5,
    (System_Int32_array **)uv,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._yield_trianble_count_5__6 = 0;
  p_yield_trianble_count_5__6 = &this->fields._yield_trianble_count_5__6;
  this->fields._i_5__7 = 0;
  triangles_5__4 = this->fields._triangles_5__4;
  if ( !triangles_5__4 )
    goto LABEL_38;
  i_5__7 = 0;
  v97 = this;
  this->fields._tris_5__8 = *(_QWORD *)&triangles_5__4->max_length;
  p_tris_5__8 = &this->fields._tris_5__8;
  p_i_5__7 = &this->fields._i_5__7;
LABEL_16:
  while ( i_5__7 < *p_tris_5__8 )
  {
    if ( !_4__this )
      goto LABEL_38;
    v53 = UnityEngine_Random__Range_34843248(
            _4__this->fields.maxPieceVertex,
            LODWORD(_4__this->fields.minBrokenSpeed),
            0LL);
    *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_left(0LL);
    image = methoda.klass->_1.image;
    if ( !methoda.klass->_1.image )
      goto LABEL_38;
    v61 = image[3];
    if ( v61 )
    {
      v62 = *p_triangles_5__4;
      if ( !*p_triangles_5__4 )
        goto LABEL_38;
      v63 = *p_i_5__7;
      max_length = v62->max_length;
      if ( (unsigned int)v63 >= max_length
        || (v65 = v62->m_Items[v63 + 1], (unsigned int)v65 >= (unsigned int)v61)
        || (int)v63 + 1 >= max_length
        || (v66 = v62->m_Items[(int)v63 + 2], (unsigned int)v66 >= (unsigned int)v61)
        || (v67 = v63 + 2, v67 >= max_length)
        || (v68 = v62->m_Items[v67 + 1], (unsigned int)v68 >= (unsigned int)v61) )
      {
        sub_B17100(v54, v55, v56);
        sub_B170A0();
      }
      v69 = (float32x2_t *)((char *)image + 12 * v65);
      v70 = (float32x2_t *)((char *)image + 12 * v66);
      v71 = (float32x2_t *)((char *)image + 12 * v68);
      v72.n64_u64[0] = v70[4].n64_u64[0];
      v73 = (void (__fastcall *)())vadd_f32(vadd_f32(v69[4], v72), v71[4]).n64_u64[0];
      v74 = (float)(v69[5].n64_f32[0] + v70[5].n64_f32[0]) + v71[5].n64_f32[0];
      methoda.methodPointer = v73;
      *(float *)&methoda.invoker_method = v74;
      *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_normalized(
                                         *(UnityEngine_Vector3_o *)(&v72 - 1),
                                         &methoda);
    }
    v75 = v57;
    v76 = v58;
    v77 = v59;
    v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !v78 )
      goto LABEL_38;
    transform = UnityEngine_GameObject__get_transform(v78, 0LL);
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !v80 )
      goto LABEL_38;
    v81 = UnityEngine_GameObject__get_transform(v80, 0LL);
    if ( !v81 )
      goto LABEL_38;
    rotation = UnityEngine_Transform__get_rotation(v81, 0LL);
    x = rotation.fields.x;
    y = rotation.fields.y;
    z = rotation.fields.z;
    w = rotation.fields.w;
    v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !v86 )
      goto LABEL_38;
    v87 = UnityEngine_GameObject__get_transform(v86, 0LL);
    if ( !v87 )
      goto LABEL_38;
    *(UnityEngine_Vector3_o *)&v101.fields.x = UnityEngine_Transform__get_position(v87, 0LL);
    v88 = 3 * v53;
    v99.fields.x = v101.fields.x;
    v99.fields.y = v101.fields.y;
    v99.fields.z = v101.fields.z;
    v101.fields.x = x;
    v101.fields.y = y;
    v101.fields.z = z;
    v101.fields.w = w;
    *(_QWORD *)&faceNormal.fields.y = __PAIR64__(v77, v76);
    faceNormal.fields.x = v75;
    FGOMeshExploder__CreateMeshPiece(
      _4__this,
      transform,
      v101,
      v99,
      faceNormal,
      *p_i_5__7,
      *p_triangles_5__4,
      *p_vertices_5__2,
      *p_uvs_5__5,
      v88,
      (bool)_4__this[1].klass,
      0LL);
    i_5__7 = *p_i_5__7 + v88;
    *p_i_5__7 = i_5__7;
    v95 = *p_yield_trianble_count_5__6 + v88;
    *p_yield_trianble_count_5__6 = v95;
    if ( v95 >= 2001 && !LOBYTE(_4__this[1].klass) )
    {
      v97->fields.__2__current = 0LL;
      v97->fields._yield_trianble_count_5__6 = 0;
      sub_B16F98((BattleServantConfConponent_o *)&v97->fields.__2__current, 0LL, v89, v90, v91, v92, v93, v94);
      v97->fields.__1__state = 2;
      return 1;
    }
  }
  return 0;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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