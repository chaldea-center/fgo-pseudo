void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB2FB & 1) == 0 )
  {
    sub_1B640C8(&FGOMeshExploder_TypeInfo, v1);
    byte_49FB2FB = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v6; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FB2FA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_49FB2FA = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BA3640;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v6;
  this->fields.angularVelocity.fields.z = z;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pieces, (int32_t)v8, v9, v10);
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
  UnityEngine_Vector2_o v35; // x1
  UnityEngine_Vector2_o v36; // kr10_8
  float v37; // s5
  float v38; // s0
  float *v39; // x9
  float v40; // s1
  float v41; // s19
  float v42; // s18
  float v43; // s17
  float v44; // s21
  float v45; // s22
  float *v46; // x10
  float v47; // s21
  float v48; // s22
  float *v49; // x11
  float v50; // s18
  float v51; // s17
  float v52; // s3
  float *v53; // x8
  float v54; // s4
  float v55; // s0
  float v56; // s2
  float v57; // s1
  float v58; // s4
  float v59; // s5
  float *v60; // x8
  float v61; // s4
  float v62; // s5
  float *v63; // x8
  float v64; // s2
  float v65; // s1
  unsigned __int64 v66; // x19
  float *v67; // x20
  float *v68; // x23
  float *i; // x24
  float v70; // s1
  float v71; // s4
  float v72; // s5
  float v73; // t1
  float v74; // s0
  UnityEngine_Vector4_array *v76; // [xsp+0h] [xbp-F0h]
  __int64 v77; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v78; // [xsp+10h] [xbp-E0h]
  int32_t v79; // [xsp+18h] [xbp-D8h]
  float v80; // [xsp+1Ch] [xbp-D4h]
  float v81; // [xsp+20h] [xbp-D0h]
  float v82; // [xsp+24h] [xbp-CCh]
  float z; // [xsp+28h] [xbp-C8h]
  float y; // [xsp+2Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB2F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector3__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B640C8(&UnityEngine_Vector3___TypeInfo, v14);
    this = (FGOMeshExploder_o *)sub_1B640C8(&UnityEngine_Vector4___TypeInfo, v15);
    byte_49FB2F9 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_32;
  v78 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v17 = triangles->fields._size;
  v18 = sub_1B64170(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v19 = sub_1B64170(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v77 = size;
  this = (FGOMeshExploder_o *)sub_1B64170(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v79 = v17;
  v76 = (UnityEngine_Vector4_array *)this;
  if ( v17 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v20,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      v22 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v20 + 1,
              (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      v23 = v20 + 2;
      v24 = v22;
      v25 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v23,
              (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      v87 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_3504EF8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v87.fields.x;
      z = v87.fields.z;
      y = v87.fields.y;
      v88 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v24,
              (const MethodInfo_3504EF8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v80 = v88.fields.x;
      v81 = v88.fields.z;
      v82 = v88.fields.y;
      *(UnityEngine_Vector3_o *)&v27 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v25,
                                         (const MethodInfo_3504EF8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v30 = v27;
      v31 = v28;
      v32 = v29;
      v33 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_35025A8 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v34 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v24,
              (const MethodInfo_35025A8 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v36 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v25,
              (const MethodInfo_35025A8 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v18 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v37 = v34.fields.x - v33.fields.x;
      v38 = v36.fields.x - v33.fields.x;
      v39 = (float *)(v18 + 12LL * Item);
      v40 = 1.0
          / (float)((float)((float)(v34.fields.x - v33.fields.x) * (float)(v36.fields.y - v33.fields.y))
                  - (float)((float)(v34.fields.y - v33.fields.y) * (float)(v36.fields.x - v33.fields.x)));
      v41 = (float)((float)((float)(v80 - x) * (float)(v36.fields.y - v33.fields.y))
                  - (float)((float)(v30 - x) * (float)(v34.fields.y - v33.fields.y)))
          * v40;
      v42 = (float)((float)((float)(v82 - y) * (float)(v36.fields.y - v33.fields.y))
                  - (float)((float)(v31 - y) * (float)(v34.fields.y - v33.fields.y)))
          * v40;
      v43 = (float)((float)((float)(v81 - z) * (float)(v36.fields.y - v33.fields.y))
                  - (float)((float)(v32 - z) * (float)(v34.fields.y - v33.fields.y)))
          * v40;
      v44 = v42 + v39[9];
      v45 = v43 + v39[10];
      v39[8] = v41 + v39[8];
      v39[9] = v44;
      v39[10] = v45;
      if ( (unsigned int)v24 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v46 = (float *)(v18 + 12LL * v24);
      v47 = v42 + v46[9];
      v48 = v43 + v46[10];
      v46[8] = v41 + v46[8];
      v46[9] = v47;
      v46[10] = v48;
      if ( (unsigned int)v25 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_31;
      v49 = (float *)(v18 + 12LL * v25);
      v50 = v42 + v49[9];
      v51 = v43 + v49[10];
      v49[8] = v41 + v49[8];
      v49[9] = v50;
      v49[10] = v51;
      if ( !v19 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v19 + 24) )
        goto LABEL_31;
      v52 = (float)(v82 - y) * v38;
      v53 = (float *)(v19 + 12LL * Item);
      v54 = (float)((float)(v32 - z) * v37) - (float)((float)(v81 - z) * v38);
      v55 = (float)((float)((float)(v30 - x) * v37) - (float)((float)(v80 - x) * v38)) * v40;
      v56 = (float)((float)((float)(v31 - y) * v37) - v52) * v40;
      v57 = v54 * v40;
      v58 = v56 + v53[9];
      v59 = v57 + v53[10];
      v53[8] = v55 + v53[8];
      v53[9] = v58;
      v53[10] = v59;
      if ( (unsigned int)v24 >= *(_DWORD *)(v19 + 24)
        || (v60 = (float *)(v19 + 12LL * v24),
            v61 = v56 + v60[9],
            v62 = v57 + v60[10],
            v60[8] = v55 + v60[8],
            v60[9] = v61,
            v60[10] = v62,
            (unsigned int)v25 >= *(_DWORD *)(v19 + 24)) )
      {
LABEL_31:
        sub_1B6432C(this, v35);
      }
      v63 = (float *)(v19 + 12LL * v25);
      v20 = v23 + 1;
      v64 = v56 + v63[9];
      v65 = v57 + v63[10];
      v63[8] = v55 + v63[8];
      v63[9] = v64;
      v63[10] = v65;
      if ( v20 >= v79 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1B64324(this);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v66 = 0LL;
      v67 = (float *)(v19 + 40);
      v68 = (float *)(v18 + 40);
      for ( i = &v76->m_Items[1].fields.x; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v78,
                   v66,
                   (const MethodInfo_3504EF8 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v18 )
          break;
        if ( v66 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_31;
        v70 = *v68;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v68 - 1);
        tangent.fields.z = v70;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v76 )
          break;
        if ( v66 >= v76->max_length )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v19 )
          break;
        if ( v66 >= *(unsigned int *)(v19 + 24) )
          goto LABEL_31;
        ++v66;
        v71 = *(v67 - 2);
        v72 = *(v67 - 1);
        v73 = *v67;
        v67 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v73)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v71)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v72))) >= 0.0 )
          v74 = 1.0;
        else
          v74 = -1.0;
        *i = v74;
        v68 += 3;
        if ( v77 == v66 )
          return v76;
      }
    }
    goto LABEL_32;
  }
  return v76;
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
  __int64 v49; // x1
  __int64 v50; // x2
  System_Array_o *v51; // x19
  System_Array_o *v52; // x27
  System_Collections_Generic_List_Vector3__o *v53; // x27
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_Vector2__o *v56; // x28
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_int__o *v59; // x29
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t v64; // w21
  int i; // w25
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v67; // w8
  int v68; // w10
  __int64 v69; // x8
  il2cpp_array_size_t v70; // w12
  unsigned int v71; // w9
  __int64 v72; // x9
  __int64 v73; // x10
  il2cpp_array_size_t v74; // w11
  float *v75; // x11
  float v76; // s12
  float v77; // s13
  float v78; // s11
  float *v79; // x11
  float v80; // s9
  float v81; // s10
  float v82; // s8
  float *v83; // x11
  float v84; // s14
  float v85; // s15
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  float *v90; // x8
  struct UnityEngine_Vector3_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  float *v94; // x8
  struct UnityEngine_Vector3_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  float *v98; // x8
  struct UnityEngine_Vector2_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  struct UnityEngine_Vector2_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  struct UnityEngine_Vector2_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  struct System_Int32_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x10
  int32_t v112; // w1
  __int64 v113; // x10
  UnityEngine_GameObject_o *v114; // x21
  int32_t v115; // w2
  int32_t v116; // w3
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v120; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v124; // x0
  const MethodInfo *v125; // x5
  UnityEngine_Vector4_array *v126; // x0
  Il2CppObject *v127; // x22
  float v128; // s8
  float v129; // s0
  Il2CppObject *v130; // x22
  Il2CppObject *v131; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v136; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v137; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v138; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v139; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v140; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4

  v17 = this;
  if ( (byte_49FB2F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Renderer___, target);
    sub_1B640C8(&FGOMeshExploder_TypeInfo, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v19);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v20);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v21);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v22);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v23);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v24);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector3__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2___ctor__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector3___ctor__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector3__get_Count__, v33);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v34);
    sub_1B640C8(&System_Collections_Generic_List_Vector3__TypeInfo, v35);
    sub_1B640C8(&System_Collections_Generic_List_Vector2__TypeInfo, v36);
    sub_1B640C8(&UnityEngine_Material___TypeInfo, v37);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v38);
    this = (FGOMeshExploder_o *)sub_1B640C8(&StringLiteral_22440/*"piece"*/, v39);
    byte_49FB2F8 = 1;
  }
  if ( !target )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v42 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0LL, 0LL);
  v136 = target;
  v137 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
    v45 = (System_Array_o *)sub_1B64170(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v44->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_62334744(materials, v45, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
    v47 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    v48 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v45;
    System_Array__Copy_62330756(
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
    v51 = (System_Array_o *)sub_1B64170(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v52 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v51;
    System_Array__Copy_62334744(v52, v51, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
  }
  v53 = (System_Collections_Generic_List_Vector3__o *)sub_1B64314(
                                                        System_Collections_Generic_List_Vector3__TypeInfo,
                                                        v49,
                                                        v50);
  System_Collections_Generic_List_Vector3____ctor(
    v53,
    (const MethodInfo_3504994 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v56 = (System_Collections_Generic_List_Vector2__o *)sub_1B64314(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v54,
                                                        v55);
  System_Collections_Generic_List_Vector2____ctor(
    v56,
    (const MethodInfo_3502044 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v59 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v57, v58);
  System_Collections_Generic_List_int____ctor(
    v59,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1B64314(
                                                            System_Collections_Generic_List_Vector3__TypeInfo,
                                                            v60,
                                                            v61);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_3504994 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v64 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v67 = index + v64;
      v68 = index + v64 + 2;
      if ( v68 >= (int)max_length )
        break;
      if ( v67 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v69 = tri->m_Items[v67 + 1];
      v70 = Vtx->max_length;
      if ( (unsigned int)v69 >= v70 )
        goto LABEL_115;
      v71 = index + v64 + 1;
      if ( v71 >= max_length )
        goto LABEL_115;
      v72 = tri->m_Items[v71 + 1];
      if ( (unsigned int)v72 >= v70 )
        goto LABEL_115;
      if ( v68 >= max_length )
        goto LABEL_115;
      v73 = tri->m_Items[v68 + 1];
      if ( (unsigned int)v73 >= v70 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v74 = UVs->max_length;
      if ( (unsigned int)v69 >= v74 || (unsigned int)v72 >= v74 || (unsigned int)v73 >= v74 )
LABEL_115:
        sub_1B6432C(this, v62);
      v75 = (float *)((char *)Vtx + 12 * v69);
      v77 = v75[8];
      v76 = v75[9];
      v78 = v75[10];
      v79 = (float *)((char *)Vtx + 12 * v72);
      v81 = v79[8];
      v80 = v79[9];
      v82 = v79[10];
      v83 = (float *)((char *)Vtx + 12 * v73);
      itema = v83[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v85 = v83[8];
      v84 = v83[9];
      v140 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v69].fields.y;
      v139 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v72].fields.y;
      v138 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v73].fields.y;
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v78 - v82) * (float)(v78 - v82))
                 + (float)((float)((float)(v77 - v81) * (float)(v77 - v81))
                         + (float)((float)(v76 - v80) * (float)(v76 - v80)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v82 - itema) * (float)(v82 - itema))
                 + (float)((float)((float)(v81 - v85) * (float)(v81 - v85))
                         + (float)((float)(v80 - v84) * (float)(v80 - v84)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v78 - itema) * (float)(v78 - itema))
                 + (float)((float)((float)(v77 - v85) * (float)(v77 - v85))
                         + (float)((float)(v76 - v84) * (float)(v76 - v84)))) <= PieceDeltaSqrSize )
        return;
      if ( !v53 )
        goto LABEL_114;
      items = v53->fields._items;
      v88 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v53->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v53->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v144.fields.x = v77;
        v144.fields.y = v76;
        v144.fields.z = v78;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v53,
          v144,
          *(const MethodInfo_3505228 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = (float *)((char *)items + 12 * size);
        v53->fields._size = size + 1;
        v90[8] = v77;
        v90[9] = v76;
        v90[10] = v78;
      }
      v91 = v53->fields._items;
      v92 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v53->fields._version;
      if ( !v91 )
        goto LABEL_114;
      v93 = v53->fields._size;
      if ( (unsigned int)v93 >= v91->max_length )
      {
        v145.fields.x = v81;
        v145.fields.y = v80;
        v145.fields.z = v82;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v53,
          v145,
          *(const MethodInfo_3505228 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = (float *)((char *)v91 + 12 * v93);
        v53->fields._size = v93 + 1;
        v94[8] = v81;
        v94[9] = v80;
        v94[10] = v82;
      }
      v95 = v53->fields._items;
      v96 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v53->fields._version;
      if ( !v95 )
        goto LABEL_114;
      v97 = v53->fields._size;
      if ( (unsigned int)v97 >= v95->max_length )
      {
        v146.fields.z = itema;
        v146.fields.x = v85;
        v146.fields.y = v84;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v53,
          v146,
          *(const MethodInfo_3505228 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = (float *)((char *)v95 + 12 * v97);
        v53->fields._size = v97 + 1;
        v98[8] = v85;
        v98[9] = v84;
        v98[10] = itema;
      }
      if ( !v56 )
        goto LABEL_114;
      v99 = v56->fields._items;
      v100 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v56->fields._version;
      if ( !v99 )
        goto LABEL_114;
      v101 = v56->fields._size;
      if ( (unsigned int)v101 >= v99->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v56,
          v140,
          *(const MethodInfo_35028AC **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v56->fields._size = v101 + 1;
        *(UnityEngine_Vector2_o *)&v99->m_Items[v101].fields.y = v140;
      }
      v102 = v56->fields._items;
      v103 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v56->fields._version;
      if ( !v102 )
        goto LABEL_114;
      v104 = v56->fields._size;
      if ( (unsigned int)v104 >= v102->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v56,
          v139,
          *(const MethodInfo_35028AC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v56->fields._size = v104 + 1;
        *(UnityEngine_Vector2_o *)&v102->m_Items[v104].fields.y = v139;
      }
      v105 = v56->fields._items;
      v106 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v56->fields._version;
      if ( !v105 )
        goto LABEL_114;
      v107 = v56->fields._size;
      if ( (unsigned int)v107 >= v105->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v56,
          v138,
          *(const MethodInfo_35028AC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v56->fields._size = v107 + 1;
        *(UnityEngine_Vector2_o *)&v105->m_Items[v107].fields.y = v138;
      }
      if ( !v59 )
        goto LABEL_114;
      v108 = v59->fields._items;
      v109 = Method_System_Collections_Generic_List_int__Add__;
      ++v59->fields._version;
      if ( !v108 )
        goto LABEL_114;
      v110 = v59->fields._size;
      if ( (unsigned int)v110 >= v108->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v59,
          v64,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        v108 = v59->fields._items;
        v109 = Method_System_Collections_Generic_List_int__Add__;
        ++v59->fields._version;
        if ( !v108 )
          goto LABEL_114;
      }
      else
      {
        v59->fields._size = v110 + 1;
        v108->m_Items[v110 + 1] = v64;
        ++v59->fields._version;
      }
      v111 = v59->fields._size;
      v112 = v64 + 1;
      if ( (unsigned int)v111 >= v108->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v59,
          v112,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
        v108 = v59->fields._items;
        v109 = Method_System_Collections_Generic_List_int__Add__;
        ++v59->fields._version;
        if ( !v108 )
          goto LABEL_114;
      }
      else
      {
        v59->fields._size = v111 + 1;
        v108->m_Items[v111 + 1] = v112;
        ++v59->fields._version;
      }
      v113 = v59->fields._size;
      v62 = (unsigned int)(v64 + 2);
      if ( (unsigned int)v113 >= v108->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v59,
          v62,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v59->fields._size = v113 + 1;
        v108->m_Items[v113 + 1] = v62;
      }
      v64 += 3;
    }
  }
  if ( !v53 )
LABEL_114:
    sub_1B64324(this);
  if ( v53->fields._size < 4 )
    return;
  v114 = (UnityEngine_GameObject_o *)sub_1B64314(UnityEngine_GameObject_TypeInfo, v62, v63);
  UnityEngine_GameObject___ctor(v114, (System_String_o *)StringLiteral_22440/*"piece"*/, 0LL);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  v117 = *(_QWORD *)&this->fields.m_CachedPtr;
  v118 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v117 )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v117 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v114,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = v117 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v120 + 32) = v114;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v120 + 32), (int32_t)v114, v115, v116);
  }
  if ( !v114 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v114, isActive, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v136, 0LL);
  GameObjectExtensions__SetParent(v114, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v136, 0LL);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v114, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v114,
                                (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_object_(
    v114,
    (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v114,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v114, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v114, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v114, 0LL);
  if ( !this )
    goto LABEL_114;
  v147.fields.x = v137->fields.pieceScale;
  v147.fields.y = v147.fields.x;
  v147.fields.z = v147.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v147, 0LL);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v53, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v56, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v59, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v126 = FGOMeshExploder__CalculateMeshTangents(v124, v53, v56, normals, v59, v125);
  UnityEngine_Mesh__set_tangents(mesh, v126, 0LL);
  v127 = UnityEngine_GameObject__AddComponent_object_(
           v114,
           (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v127, 0LL, 0LL) )
  {
    v128 = UnityEngine_Random__Range(v137->fields.minBrokenSpeed, v137->fields.maxBrokenSpeed, 0LL);
    v129 = UnityEngine_Random__Range(v137->fields.minBrokenSpeed, v137->fields.maxBrokenSpeed, 0LL);
    if ( !v127 )
      goto LABEL_114;
    v148.fields.z = v129 * 0.5;
    v148.fields.x = v128 * 0.5;
    v148.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v127, v148, 0LL);
    v149.fields.x = v137->fields.angularVelocity.fields.x * 0.5;
    v149.fields.y = v137->fields.angularVelocity.fields.y * 0.5;
    v149.fields.z = v137->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v127, v149, 0LL);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v127, v137->fields.mass, 0LL);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v127, v137->fields.useGravity, 0LL);
  }
  v130 = UnityEngine_GameObject__AddComponent_object_(
           v114,
           (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v130, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v130 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v130, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v130, 1, 0LL);
  }
  v131 = UnityEngine_GameObject__AddComponent_object_(
           v114,
           (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v131, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v131 )
    {
      *(float *)&v131[2].klass = v137->fields.fadeTime;
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
  FGOMeshExploder__Explode_37231208(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_37231208(
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
  struct System_Action_o *onBroken; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FB2F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    this = (FGOMeshExploder_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FB2F7 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)target, 0LL);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v12.fields._current )
          sub_1B64324(0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1B64324(this);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB2F6 & 1) == 0 )
  {
    sub_1B640C8(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method);
    byte_49FB2F6 = 1;
  }
  v4 = sub_1B64314(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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


bool __fastcall FGOMeshExploder__PreCreatePiece_d__16__MoveNext(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v24; // x1
  int v25; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  __int64 v27; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v29; // x12
  unsigned int max_length; // w13
  __int64 v31; // x11
  __int64 v32; // x14
  unsigned int v33; // w12
  __int64 v34; // x10
  char *v35; // x9
  char *v36; // x11
  char *v37; // x8
  float v38; // s11
  float32x2_t v39; // d8
  float v40; // s14
  float32x2_t v41; // d13
  float v42; // s10
  float32x2_t v43; // d9
  float32x2_t v44; // d1
  unsigned __int64 v45; // d1
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v51; // w23
  int32_t v52; // w2
  int32_t v53; // w3
  int v54; // w9
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v56; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v57; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v58; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49FB2FC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B640C8(&UnityEngine_Mesh_TypeInfo, v5);
    byte_49FB2FC = 1;
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
    v11 = (UnityEngine_Mesh_o *)sub_1B64314(UnityEngine_Mesh_TypeInfo, method, v2);
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
                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v11, 0LL);
          if ( v11 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v11, 0LL);
            v4->fields._vertices_5__2 = vertices;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._vertices_5__2, (int32_t)vertices, v13, v14);
            normals = UnityEngine_Mesh__get_normals(v11, 0LL);
            v4->fields._normals_5__3 = normals;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._normals_5__3, (int32_t)normals, v16, v17);
            triangles = UnityEngine_Mesh__get_triangles(v11, 0LL);
            v4->fields._triangles_5__4 = triangles;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._triangles_5__4, (int32_t)triangles, v19, v20);
            uv = UnityEngine_Mesh__get_uv(v11, 0LL);
            v4->fields._uvs_5__5 = uv;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._uvs_5__5, (int32_t)uv, v22, v23);
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
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_69087476(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0LL);
                v25 = (int)this;
                if ( !byte_49FB402 )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
                  byte_49FB402 = 1;
                }
                normals_5__3 = v4->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                v27 = *(_QWORD *)&normals_5__3->max_length;
                if ( v27 )
                {
                  triangles_5__4 = v4->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v29 = v4->fields._i_5__7;
                  max_length = triangles_5__4->max_length;
                  if ( (unsigned int)v29 >= max_length
                    || (v31 = triangles_5__4->m_Items[v29 + 1], (unsigned int)v31 >= (unsigned int)v27)
                    || (int)v29 + 1 >= max_length
                    || (v32 = triangles_5__4->m_Items[(int)v29 + 2], (unsigned int)v32 >= (unsigned int)v27)
                    || (v33 = v29 + 2, v33 >= max_length)
                    || (v34 = triangles_5__4->m_Items[v33 + 1], (unsigned int)v34 >= (unsigned int)v27) )
                  {
                    sub_1B6432C(this, v24);
                  }
                  v35 = (char *)normals_5__3 + 12 * v31;
                  v36 = (char *)normals_5__3 + 12 * v32;
                  v37 = (char *)normals_5__3 + 12 * v34;
                  v38 = *((float *)v35 + 8);
                  v39.n64_u64[0] = *(unsigned __int64 *)(v35 + 36);
                  v40 = *((float *)v36 + 8);
                  v41.n64_u64[0] = *(unsigned __int64 *)(v36 + 36);
                  v42 = *((float *)v37 + 8);
                  v43.n64_u64[0] = *(unsigned __int64 *)(v37 + 36);
                  if ( !byte_49F7114 )
                  {
                    sub_1B640C8(&System_Math_TypeInfo, v24);
                    byte_49F7114 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v44.n64_u64[0] = vadd_f32(vadd_f32(v39, v41), v43).n64_u64[0];
                  v45 = vmul_f32(v44, v44).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v45 + 1)
                       + (float)((float)((float)((float)(v38 + v40) + v42) * (float)((float)(v38 + v40) + v42))
                               + *(float *)&v45)) <= 0.00001
                    && !byte_49F7111 )
                  {
                    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
                    byte_49F7111 = 1;
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
                *(UnityEngine_Vector3_o *)&v60.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v51 = 3 * v25;
                v58.fields.x = v60.fields.x;
                v58.fields.y = v60.fields.y;
                v58.fields.z = v60.fields.z;
                v60.fields.x = x;
                v60.fields.y = y;
                v60.fields.z = z;
                v60.fields.w = w;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v60,
                  v58,
                  v56,
                  v4->fields._i_5__7,
                  v4->fields._triangles_5__4,
                  v4->fields._vertices_5__2,
                  v4->fields._uvs_5__5,
                  v51,
                  _4__this->fields.exploded,
                  v57);
                v54 = v4->fields._yield_trianble_count_5__6 + v51;
                i_5__7 = v4->fields._i_5__7 + v51;
                v4->fields._yield_trianble_count_5__6 = v54;
                v4->fields._i_5__7 = i_5__7;
                if ( v54 >= 2001 && !_4__this->fields.exploded )
                {
                  v4->fields.__2__current = 0LL;
                  p__2__current = &v4->fields.__2__current;
                  *((_DWORD *)p__2__current + 12) = 0;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v52, v53);
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
    sub_1B64324(this);
  if ( _4__this->fields.useBrokenPiece )
  {
    v4->fields.__2__current = 0LL;
    v8 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v8, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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