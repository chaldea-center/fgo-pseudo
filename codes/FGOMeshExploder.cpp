void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FDA13 & 1) == 0 )
  {
    sub_1B64A00(&FGOMeshExploder_TypeInfo, v1);
    byte_49FDA13 = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FDA12 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_49FDA12 = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BA3A00;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v5;
  this->fields.angularVelocity.fields.z = z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.pieces, (int32_t)v7, v8, v9);
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
  __int64 size; // x23
  int32_t v17; // w27
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w27
  int32_t Item; // w19
  int32_t v22; // w0
  int32_t v23; // w27
  int32_t v24; // w29
  int32_t v25; // w28
  float x; // s10
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s11
  float v31; // s15
  float v32; // s14
  UnityEngine_Vector2_o v33; // kr00_8
  UnityEngine_Vector2_o v34; // kr08_8
  UnityEngine_Vector2_o v35; // kr10_8
  float v36; // s5
  float v37; // s0
  float *v38; // x9
  float v39; // s1
  float v40; // s19
  float v41; // s18
  float v42; // s17
  float v43; // s21
  float v44; // s22
  float *v45; // x10
  float v46; // s21
  float v47; // s22
  float *v48; // x11
  float v49; // s18
  float v50; // s17
  float v51; // s3
  float *v52; // x8
  float v53; // s4
  float v54; // s0
  float v55; // s2
  float v56; // s1
  float v57; // s4
  float v58; // s5
  float *v59; // x8
  float v60; // s4
  float v61; // s5
  float *v62; // x8
  float v63; // s2
  float v64; // s1
  unsigned __int64 v65; // x19
  float *v66; // x20
  float *v67; // x23
  float *i; // x24
  float v69; // s1
  float v70; // s4
  float v71; // s5
  float v72; // t1
  float v73; // s0
  UnityEngine_Vector4_array *v75; // [xsp+0h] [xbp-F0h]
  __int64 v76; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v77; // [xsp+10h] [xbp-E0h]
  int32_t v78; // [xsp+18h] [xbp-D8h]
  float v79; // [xsp+1Ch] [xbp-D4h]
  float v80; // [xsp+20h] [xbp-D0h]
  float v81; // [xsp+24h] [xbp-CCh]
  float z; // [xsp+28h] [xbp-C8h]
  float y; // [xsp+2Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FDA11 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector3__get_Item__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B64A00(&UnityEngine_Vector3___TypeInfo, v14);
    this = (FGOMeshExploder_o *)sub_1B64A00(&UnityEngine_Vector4___TypeInfo, v15);
    byte_49FDA11 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_32;
  v77 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v17 = triangles->fields._size;
  v18 = sub_1B64AA8(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v19 = sub_1B64AA8(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v76 = size;
  this = (FGOMeshExploder_o *)sub_1B64AA8(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v78 = v17;
  v75 = (UnityEngine_Vector4_array *)this;
  if ( v17 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v20,
               (const MethodInfo_34924E0 *)Method_System_Collections_Generic_List_int__get_Item__);
      v22 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v20 + 1,
              (const MethodInfo_34924E0 *)Method_System_Collections_Generic_List_int__get_Item__);
      v23 = v20 + 2;
      v24 = v22;
      v25 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v23,
              (const MethodInfo_34924E0 *)Method_System_Collections_Generic_List_int__get_Item__);
      v86 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_35077EC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v86.fields.x;
      z = v86.fields.z;
      y = v86.fields.y;
      v87 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v24,
              (const MethodInfo_35077EC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v79 = v87.fields.x;
      v80 = v87.fields.z;
      v81 = v87.fields.y;
      *(UnityEngine_Vector3_o *)&v27 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v25,
                                         (const MethodInfo_35077EC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v30 = v27;
      v31 = v28;
      v32 = v29;
      v33 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_3504E9C *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v34 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v24,
              (const MethodInfo_3504E9C *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v35 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v25,
              (const MethodInfo_3504E9C *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v18 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v36 = v34.fields.x - v33.fields.x;
      v37 = v35.fields.x - v33.fields.x;
      v38 = (float *)(v18 + 12LL * Item);
      v39 = 1.0
          / (float)((float)((float)(v34.fields.x - v33.fields.x) * (float)(v35.fields.y - v33.fields.y))
                  - (float)((float)(v34.fields.y - v33.fields.y) * (float)(v35.fields.x - v33.fields.x)));
      v40 = (float)((float)((float)(v79 - x) * (float)(v35.fields.y - v33.fields.y))
                  - (float)((float)(v30 - x) * (float)(v34.fields.y - v33.fields.y)))
          * v39;
      v41 = (float)((float)((float)(v81 - y) * (float)(v35.fields.y - v33.fields.y))
                  - (float)((float)(v31 - y) * (float)(v34.fields.y - v33.fields.y)))
          * v39;
      v42 = (float)((float)((float)(v80 - z) * (float)(v35.fields.y - v33.fields.y))
                  - (float)((float)(v32 - z) * (float)(v34.fields.y - v33.fields.y)))
          * v39;
      v43 = v41 + v38[9];
      v44 = v42 + v38[10];
      v38[8] = v40 + v38[8];
      v38[9] = v43;
      v38[10] = v44;
      if ( (unsigned int)v24 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v45 = (float *)(v18 + 12LL * v24);
      v46 = v41 + v45[9];
      v47 = v42 + v45[10];
      v45[8] = v40 + v45[8];
      v45[9] = v46;
      v45[10] = v47;
      if ( (unsigned int)v25 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v48 = (float *)(v18 + 12LL * v25);
      v49 = v41 + v48[9];
      v50 = v42 + v48[10];
      v48[8] = v40 + v48[8];
      v48[9] = v49;
      v48[10] = v50;
      if ( !v19 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v19 + 24) )
        goto LABEL_31;
      v51 = (float)(v81 - y) * v37;
      v52 = (float *)(v19 + 12LL * Item);
      v53 = (float)((float)(v32 - z) * v36) - (float)((float)(v80 - z) * v37);
      v54 = (float)((float)((float)(v30 - x) * v36) - (float)((float)(v79 - x) * v37)) * v39;
      v55 = (float)((float)((float)(v31 - y) * v36) - v51) * v39;
      v56 = v53 * v39;
      v57 = v55 + v52[9];
      v58 = v56 + v52[10];
      v52[8] = v54 + v52[8];
      v52[9] = v57;
      v52[10] = v58;
      if ( (unsigned int)v24 >= *(_DWORD *)(v19 + 24)
        || (v59 = (float *)(v19 + 12LL * v24),
            v60 = v55 + v59[9],
            v61 = v56 + v59[10],
            v59[8] = v54 + v59[8],
            v59[9] = v60,
            v59[10] = v61,
            (unsigned int)v25 >= *(_DWORD *)(v19 + 24)) )
      {
LABEL_31:
        sub_1B64C64(this, vertices);
      }
      v62 = (float *)(v19 + 12LL * v25);
      v20 = v23 + 1;
      v63 = v55 + v62[9];
      v64 = v56 + v62[10];
      v62[8] = v54 + v62[8];
      v62[9] = v63;
      v62[10] = v64;
      if ( v20 >= v78 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1B64C5C(this, vertices);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v65 = 0LL;
      v66 = (float *)(v19 + 40);
      v67 = (float *)(v18 + 40);
      for ( i = &v75->m_Items[1].fields.x; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v77,
                   v65,
                   (const MethodInfo_35077EC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v18 )
          break;
        if ( v65 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_31;
        v69 = *v67;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v67 - 1);
        tangent.fields.z = v69;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v75 )
          break;
        if ( v65 >= v75->max_length )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v19 )
          break;
        if ( v65 >= *(unsigned int *)(v19 + 24) )
          goto LABEL_31;
        ++v65;
        v70 = *(v66 - 2);
        v71 = *(v66 - 1);
        v72 = *v66;
        v66 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v72)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v70)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v71))) >= 0.0 )
          v73 = 1.0;
        else
          v73 = -1.0;
        *i = v73;
        v67 += 3;
        if ( v76 == v65 )
          return v75;
      }
    }
    goto LABEL_32;
  }
  return v75;
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
  UnityEngine_Component_o *v16; // x25
  FGOMeshExploder_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *charaMesh; // x27
  UnityEngine_Renderer_o *v42; // x21
  FGOMeshExploder_o *v43; // x27
  FGOMeshExploder_o *v44; // x28
  System_Array_o *v45; // x19
  System_Array_o *materials; // x28
  System_Array_o *v47; // x28
  FGOMeshExploder_o *v48; // x27
  System_Array_o *v49; // x19
  System_Array_o *v50; // x27
  System_Collections_Generic_List_Vector3__o *v51; // x27
  System_Collections_Generic_List_Vector2__o *v52; // x28
  System_Collections_Generic_List_int__o *v53; // x29
  int32_t v54; // w21
  int i; // w25
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v57; // w8
  int v58; // w10
  __int64 v59; // x8
  il2cpp_array_size_t v60; // w12
  unsigned int v61; // w9
  __int64 v62; // x9
  __int64 v63; // x10
  il2cpp_array_size_t v64; // w11
  float *v65; // x11
  float v66; // s12
  float v67; // s13
  float v68; // s11
  float *v69; // x11
  float v70; // s9
  float v71; // s10
  float v72; // s8
  float *v73; // x11
  float v74; // s14
  float v75; // s15
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  float *v80; // x8
  struct UnityEngine_Vector3_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  float *v84; // x8
  struct UnityEngine_Vector3_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  float *v88; // x8
  struct UnityEngine_Vector2_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  struct UnityEngine_Vector2_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  struct UnityEngine_Vector2_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  struct System_Int32_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x10
  int32_t v102; // w1
  __int64 v103; // x10
  UnityEngine_GameObject_o *v104; // x21
  int32_t v105; // w2
  int32_t v106; // w3
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v110; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v114; // x0
  const MethodInfo *v115; // x5
  UnityEngine_Vector4_array *v116; // x0
  Il2CppObject *v117; // x22
  float v118; // s8
  float v119; // s0
  Il2CppObject *v120; // x22
  Il2CppObject *v121; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v126; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v127; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v128; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v129; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v130; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_49FDA10 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Renderer___, target);
    sub_1B64A00(&FGOMeshExploder_TypeInfo, v18);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v19);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v20);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v21);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v22);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v23);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v24);
    sub_1B64A00(&UnityEngine_GameObject_TypeInfo, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector3__Add__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector2__Add__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector2___ctor__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector3___ctor__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_Vector3__get_Count__, v33);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v34);
    sub_1B64A00(&System_Collections_Generic_List_Vector3__TypeInfo, v35);
    sub_1B64A00(&System_Collections_Generic_List_Vector2__TypeInfo, v36);
    sub_1B64A00(&UnityEngine_Material___TypeInfo, v37);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v38);
    this = (FGOMeshExploder_o *)sub_1B64A00(&StringLiteral_22443/*"piece"*/, v39);
    byte_49FDA10 = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v42 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0LL, 0LL);
  v126 = (UnityEngine_Transform_o *)v16;
  v127 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_114;
    v43 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_114;
    if ( !v42 )
      goto LABEL_114;
    v44 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    v45 = (System_Array_o *)sub_1B64AA8(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v44->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_62344484(materials, v45, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
    v47 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    v48 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v45;
    System_Array__Copy_62340496(
      v47,
      0,
      v45,
      (int32_t)v48->fields.m_CancellationTokenSource,
      (int32_t)this->fields.m_CancellationTokenSource,
      0LL);
  }
  else
  {
    if ( !v42 )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    v49 = (System_Array_o *)sub_1B64AA8(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v50 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v49;
    System_Array__Copy_62344484(v50, v49, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
  }
  v51 = (System_Collections_Generic_List_Vector3__o *)sub_1B64C4C(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v51,
    (const MethodInfo_3507288 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v52 = (System_Collections_Generic_List_Vector2__o *)sub_1B64C4C(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v52,
    (const MethodInfo_3504938 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v53 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1B64C4C(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_3507288 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v54 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v57 = index + v54;
      v58 = index + v54 + 2;
      if ( v58 >= (int)max_length )
        break;
      if ( v57 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v59 = tri->m_Items[v57 + 1];
      v60 = Vtx->max_length;
      if ( (unsigned int)v59 >= v60 )
        goto LABEL_115;
      v61 = index + v54 + 1;
      if ( v61 >= max_length )
        goto LABEL_115;
      v62 = tri->m_Items[v61 + 1];
      if ( (unsigned int)v62 >= v60 )
        goto LABEL_115;
      if ( v58 >= max_length )
        goto LABEL_115;
      v63 = tri->m_Items[v58 + 1];
      if ( (unsigned int)v63 >= v60 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v64 = UVs->max_length;
      if ( (unsigned int)v59 >= v64 || (unsigned int)v62 >= v64 || (unsigned int)v63 >= v64 )
LABEL_115:
        sub_1B64C64(this, target);
      v65 = (float *)((char *)Vtx + 12 * v59);
      v67 = v65[8];
      v66 = v65[9];
      v68 = v65[10];
      v69 = (float *)((char *)Vtx + 12 * v62);
      v71 = v69[8];
      v70 = v69[9];
      v72 = v69[10];
      v73 = (float *)((char *)Vtx + 12 * v63);
      itema = v73[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v75 = v73[8];
      v74 = v73[9];
      v130 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v59].fields.y;
      v129 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v62].fields.y;
      v128 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v63].fields.y;
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v68 - v72) * (float)(v68 - v72))
                 + (float)((float)((float)(v67 - v71) * (float)(v67 - v71))
                         + (float)((float)(v66 - v70) * (float)(v66 - v70)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v72 - itema) * (float)(v72 - itema))
                 + (float)((float)((float)(v71 - v75) * (float)(v71 - v75))
                         + (float)((float)(v70 - v74) * (float)(v70 - v74)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v68 - itema) * (float)(v68 - itema))
                 + (float)((float)((float)(v67 - v75) * (float)(v67 - v75))
                         + (float)((float)(v66 - v74) * (float)(v66 - v74)))) <= PieceDeltaSqrSize )
        return;
      if ( !v51 )
        goto LABEL_114;
      items = v51->fields._items;
      v78 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v51->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v51->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v134.fields.x = v67;
        v134.fields.y = v66;
        v134.fields.z = v68;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v134,
          *(const MethodInfo_3507B1C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = (float *)((char *)items + 12 * size);
        v51->fields._size = size + 1;
        v80[8] = v67;
        v80[9] = v66;
        v80[10] = v68;
      }
      v81 = v51->fields._items;
      v82 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v51->fields._version;
      if ( !v81 )
        goto LABEL_114;
      v83 = v51->fields._size;
      if ( (unsigned int)v83 >= v81->max_length )
      {
        v135.fields.x = v71;
        v135.fields.y = v70;
        v135.fields.z = v72;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v135,
          *(const MethodInfo_3507B1C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = (float *)((char *)v81 + 12 * v83);
        v51->fields._size = v83 + 1;
        v84[8] = v71;
        v84[9] = v70;
        v84[10] = v72;
      }
      v85 = v51->fields._items;
      v86 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v51->fields._version;
      if ( !v85 )
        goto LABEL_114;
      v87 = v51->fields._size;
      if ( (unsigned int)v87 >= v85->max_length )
      {
        v136.fields.z = itema;
        v136.fields.x = v75;
        v136.fields.y = v74;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v136,
          *(const MethodInfo_3507B1C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = (float *)((char *)v85 + 12 * v87);
        v51->fields._size = v87 + 1;
        v88[8] = v75;
        v88[9] = v74;
        v88[10] = itema;
      }
      if ( !v52 )
        goto LABEL_114;
      v89 = v52->fields._items;
      v90 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v52->fields._version;
      if ( !v89 )
        goto LABEL_114;
      v91 = v52->fields._size;
      if ( (unsigned int)v91 >= v89->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v52,
          v130,
          *(const MethodInfo_35051A0 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v91 + 1;
        *(UnityEngine_Vector2_o *)&v89->m_Items[v91].fields.y = v130;
      }
      v92 = v52->fields._items;
      v93 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v52->fields._version;
      if ( !v92 )
        goto LABEL_114;
      v94 = v52->fields._size;
      if ( (unsigned int)v94 >= v92->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v52,
          v129,
          *(const MethodInfo_35051A0 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v94 + 1;
        *(UnityEngine_Vector2_o *)&v92->m_Items[v94].fields.y = v129;
      }
      v95 = v52->fields._items;
      v96 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v52->fields._version;
      if ( !v95 )
        goto LABEL_114;
      v97 = v52->fields._size;
      if ( (unsigned int)v97 >= v95->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v52,
          v128,
          *(const MethodInfo_35051A0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v97 + 1;
        *(UnityEngine_Vector2_o *)&v95->m_Items[v97].fields.y = v128;
      }
      if ( !v53 )
        goto LABEL_114;
      v98 = v53->fields._items;
      v99 = Method_System_Collections_Generic_List_int__Add__;
      ++v53->fields._version;
      if ( !v98 )
        goto LABEL_114;
      v100 = v53->fields._size;
      if ( (unsigned int)v100 >= v98->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v53,
          v54,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        v98 = v53->fields._items;
        v99 = Method_System_Collections_Generic_List_int__Add__;
        ++v53->fields._version;
        if ( !v98 )
          goto LABEL_114;
      }
      else
      {
        v53->fields._size = v100 + 1;
        v98->m_Items[v100 + 1] = v54;
        ++v53->fields._version;
      }
      v101 = v53->fields._size;
      v102 = v54 + 1;
      if ( (unsigned int)v101 >= v98->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v53,
          v102,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        v98 = v53->fields._items;
        v99 = Method_System_Collections_Generic_List_int__Add__;
        ++v53->fields._version;
        if ( !v98 )
          goto LABEL_114;
      }
      else
      {
        v53->fields._size = v101 + 1;
        v98->m_Items[v101 + 1] = v102;
        ++v53->fields._version;
      }
      v103 = v53->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v54 + 2);
      if ( (unsigned int)v103 >= v98->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v53,
          (int32_t)target,
          *(const MethodInfo_34927D0 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v53->fields._size = v103 + 1;
        v98->m_Items[v103 + 1] = (int)target;
      }
      v54 += 3;
    }
  }
  if ( !v51 )
LABEL_114:
    sub_1B64C5C(this, target);
  if ( v51->fields._size < 4 )
    return;
  v104 = (UnityEngine_GameObject_o *)sub_1B64C4C(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v104, (System_String_o *)StringLiteral_22443/*"piece"*/, 0LL);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  v107 = *(_QWORD *)&this->fields.m_CachedPtr;
  v108 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v107 )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v107 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v104,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = v107 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v110 + 32) = v104;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v110 + 32), (int32_t)v104, v105, v106);
  }
  if ( !v104 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v104, isActive, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v126, 0LL);
  GameObjectExtensions__SetParent(v104, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v126, 0LL);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v104, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v104,
                                (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_object_(
    v104,
    (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v104,
                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
  if ( !this )
    goto LABEL_114;
  v137.fields.x = v127->fields.pieceScale;
  v137.fields.y = v137.fields.x;
  v137.fields.z = v137.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v137, 0LL);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v51, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v52, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v53, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v116 = FGOMeshExploder__CalculateMeshTangents(v114, v51, v52, normals, v53, v115);
  UnityEngine_Mesh__set_tangents(mesh, v116, 0LL);
  v117 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v117, 0LL, 0LL) )
  {
    v118 = UnityEngine_Random__Range(v127->fields.minBrokenSpeed, v127->fields.maxBrokenSpeed, 0LL);
    v119 = UnityEngine_Random__Range(v127->fields.minBrokenSpeed, v127->fields.maxBrokenSpeed, 0LL);
    if ( !v117 )
      goto LABEL_114;
    v138.fields.z = v119 * 0.5;
    v138.fields.x = v118 * 0.5;
    v138.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v117, v138, 0LL);
    v139.fields.x = v127->fields.angularVelocity.fields.x * 0.5;
    v139.fields.y = v127->fields.angularVelocity.fields.y * 0.5;
    v139.fields.z = v127->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v117, v139, 0LL);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v117, v127->fields.mass, 0LL);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v117, v127->fields.useGravity, 0LL);
  }
  v120 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v120, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v120 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v120, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v120, 1, 0LL);
  }
  v121 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v121, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v121 )
    {
      *(float *)&v121[2].klass = v127->fields.fadeTime;
      return;
    }
    goto LABEL_114;
  }
}


void __fastcall FGOMeshExploder__Explode(FGOMeshExploder_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  FGOMeshExploder__Explode_37235924(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_37235924(
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
  Il2CppObject *Component_object; // x21
  __int64 v11; // x1
  struct System_Action_o *onBroken; // x8
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FDA0F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    this = (FGOMeshExploder_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_49FDA0F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)target, 0LL);
      onBroken = v4->fields.onBroken;
      if ( onBroken )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onBroken->fields.m_target)(
          onBroken->fields.original_method_info,
          *(_QWORD *)&onBroken->fields.extra_arg);
      v4->fields.exploded = 1;
      return;
    }
    this = (FGOMeshExploder_o *)v4->fields.pieces;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1B64C5C(0LL, v11);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1B64C5C(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDA0E & 1) == 0 )
  {
    sub_1B64A00(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method);
    byte_49FDA0E = 1;
  }
  v3 = sub_1B64C4C(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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


bool __fastcall FGOMeshExploder__PreCreatePiece_d__16__MoveNext(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  FGOMeshExploder__PreCreatePiece_d__16_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  ServantStatusBattleListViewItem_o *v8; // x19
  bool result; // w0
  int i_5__7; // w8
  UnityEngine_Mesh_o *v11; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Vector3_array *normals; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Int32_array *triangles; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector2_array *uv; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int v24; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  __int64 v26; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v28; // x12
  unsigned int max_length; // w13
  __int64 v30; // x11
  __int64 v31; // x14
  unsigned int v32; // w12
  __int64 v33; // x10
  char *v34; // x9
  char *v35; // x11
  char *v36; // x8
  float v37; // s11
  float32x2_t v38; // d8
  float v39; // s14
  float32x2_t v40; // d13
  float v41; // s10
  float32x2_t v42; // d9
  float32x2_t v43; // d1
  unsigned __int64 v44; // d1
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v50; // w23
  int32_t v51; // w2
  int32_t v52; // w3
  int v53; // w9
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v55; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v56; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v57; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49FDA14 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B64A00(&UnityEngine_Mesh_TypeInfo, v5);
    byte_49FDA14 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    i_5__7 = v4->fields._i_5__7;
    v4->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    v11 = (UnityEngine_Mesh_o *)sub_1B64C4C(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v11, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v11, 0LL);
          if ( v11 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v11, 0LL);
            v4->fields._vertices_5__2 = vertices;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._vertices_5__2, (int32_t)vertices, v13, v14);
            normals = UnityEngine_Mesh__get_normals(v11, 0LL);
            v4->fields._normals_5__3 = normals;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._normals_5__3, (int32_t)normals, v16, v17);
            triangles = UnityEngine_Mesh__get_triangles(v11, 0LL);
            v4->fields._triangles_5__4 = triangles;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._triangles_5__4, (int32_t)triangles, v19, v20);
            uv = UnityEngine_Mesh__get_uv(v11, 0LL);
            v4->fields._uvs_5__5 = uv;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._uvs_5__5, (int32_t)uv, v22, v23);
            *(_QWORD *)&v4->fields._yield_trianble_count_5__6 = 0LL;
            if ( v4->fields._triangles_5__4 )
            {
              i_5__7 = 0;
              v4->fields._tris_5__8 = *(_QWORD *)&v4->fields._triangles_5__4->max_length;
LABEL_16:
              while ( i_5__7 < v4->fields._tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_69097216(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0LL);
                v24 = (int)this;
                if ( !byte_49FDB1A )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
                  byte_49FDB1A = 1;
                }
                normals_5__3 = v4->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                v26 = *(_QWORD *)&normals_5__3->max_length;
                if ( v26 )
                {
                  triangles_5__4 = v4->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v28 = v4->fields._i_5__7;
                  max_length = triangles_5__4->max_length;
                  if ( (unsigned int)v28 >= max_length
                    || (v30 = triangles_5__4->m_Items[v28 + 1], (unsigned int)v30 >= (unsigned int)v26)
                    || (int)v28 + 1 >= max_length
                    || (v31 = triangles_5__4->m_Items[(int)v28 + 2], (unsigned int)v31 >= (unsigned int)v26)
                    || (v32 = v28 + 2, v32 >= max_length)
                    || (v33 = triangles_5__4->m_Items[v32 + 1], (unsigned int)v33 >= (unsigned int)v26) )
                  {
                    sub_1B64C64(this, method);
                  }
                  v34 = (char *)normals_5__3 + 12 * v30;
                  v35 = (char *)normals_5__3 + 12 * v31;
                  v36 = (char *)normals_5__3 + 12 * v33;
                  v37 = *((float *)v34 + 8);
                  v38.n64_u64[0] = *(unsigned __int64 *)(v34 + 36);
                  v39 = *((float *)v35 + 8);
                  v40.n64_u64[0] = *(unsigned __int64 *)(v35 + 36);
                  v41 = *((float *)v36 + 8);
                  v42.n64_u64[0] = *(unsigned __int64 *)(v36 + 36);
                  if ( !byte_49F9824 )
                  {
                    sub_1B64A00(&System_Math_TypeInfo, method);
                    byte_49F9824 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v43.n64_u64[0] = vadd_f32(vadd_f32(v38, v40), v42).n64_u64[0];
                  v44 = vmul_f32(v43, v43).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v44 + 1)
                       + (float)((float)((float)((float)(v37 + v39) + v41) * (float)((float)(v37 + v39) + v41))
                               + *(float *)&v44)) <= 0.00001
                    && !byte_49F9821 )
                  {
                    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
                    byte_49F9821 = 1;
                  }
                }
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_45;
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_45;
                rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0LL);
                x = rotation.fields.x;
                y = rotation.fields.y;
                z = rotation.fields.z;
                w = rotation.fields.w;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
                if ( !this )
                  goto LABEL_45;
                *(UnityEngine_Vector3_o *)&v59.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v50 = 3 * v24;
                v57.fields.x = v59.fields.x;
                v57.fields.y = v59.fields.y;
                v57.fields.z = v59.fields.z;
                v59.fields.x = x;
                v59.fields.y = y;
                v59.fields.z = z;
                v59.fields.w = w;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v59,
                  v57,
                  v55,
                  v4->fields._i_5__7,
                  v4->fields._triangles_5__4,
                  v4->fields._vertices_5__2,
                  v4->fields._uvs_5__5,
                  v50,
                  _4__this->fields.exploded,
                  v56);
                v53 = v4->fields._yield_trianble_count_5__6 + v50;
                i_5__7 = v4->fields._i_5__7 + v50;
                v4->fields._yield_trianble_count_5__6 = v53;
                v4->fields._i_5__7 = i_5__7;
                if ( v53 >= 2001 && !_4__this->fields.exploded )
                {
                  v4->fields.__2__current = 0LL;
                  p__2__current = &v4->fields.__2__current;
                  *((_DWORD *)p__2__current + 12) = 0;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)p__2__current, 0, v51, v52);
                  *((_DWORD *)p__2__current - 2) = 2;
                  return 1;
                }
              }
              return 0;
            }
          }
        }
      }
    }
    goto LABEL_45;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
LABEL_45:
    sub_1B64C5C(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v4->fields.__2__current = 0LL;
    v8 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B649A4(v8, 0, v2, v3);
    result = 1;
    *(_DWORD *)&v8[-1].fields.isMine = 1;
    return result;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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