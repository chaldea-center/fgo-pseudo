void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15089 & 1) == 0 )
  {
    sub_1BCA7E0(&FGOMeshExploder_TypeInfo, v1, v2);
    byte_4B15089 = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v8; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B15088 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B15088 = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v8 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BD2FF0;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v8;
  this->fields.angularVelocity.fields.z = z;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pieces, (int64_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 size; // x23
  int32_t v23; // w27
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w27
  int32_t Item; // w19
  int32_t v28; // w0
  int32_t v29; // w27
  int32_t v30; // w29
  int32_t v31; // w28
  float x; // s10
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s11
  float v37; // s15
  float v38; // s14
  UnityEngine_Vector2_o v39; // kr00_8
  UnityEngine_Vector2_o v40; // kr08_8
  UnityEngine_Vector2_o v41; // kr10_8
  float v42; // s5
  float v43; // s0
  float *v44; // x9
  float v45; // s1
  float v46; // s19
  float v47; // s18
  float v48; // s17
  float v49; // s21
  float v50; // s22
  float *v51; // x10
  float v52; // s21
  float v53; // s22
  float *v54; // x11
  float v55; // s18
  float v56; // s17
  float v57; // s3
  float *v58; // x8
  float v59; // s4
  float v60; // s0
  float v61; // s2
  float v62; // s1
  float v63; // s4
  float v64; // s5
  float *v65; // x8
  float v66; // s4
  float v67; // s5
  float *v68; // x8
  float v69; // s2
  float v70; // s1
  unsigned __int64 v71; // x19
  float *v72; // x20
  float *v73; // x23
  float *i; // x24
  float v75; // s1
  float v76; // s4
  float v77; // s5
  float v78; // t1
  float v79; // s0
  UnityEngine_Vector4_array *v81; // [xsp+0h] [xbp-F0h]
  __int64 v82; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v83; // [xsp+10h] [xbp-E0h]
  int32_t v84; // [xsp+18h] [xbp-D8h]
  float v85; // [xsp+1Ch] [xbp-D4h]
  float v86; // [xsp+20h] [xbp-D0h]
  float v87; // [xsp+24h] [xbp-CCh]
  float z; // [xsp+28h] [xbp-C8h]
  float y; // [xsp+2Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15087 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices, uvs);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector3__get_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v18, v19);
    this = (FGOMeshExploder_o *)sub_1BCA7E0(&UnityEngine_Vector4___TypeInfo, v20, v21);
    byte_4B15087 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_32;
  v83 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v23 = triangles->fields._size;
  v24 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v25 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v82 = size;
  this = (FGOMeshExploder_o *)sub_1BCA888(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v84 = v23;
  v81 = (UnityEngine_Vector4_array *)this;
  if ( v23 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v26,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      v28 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v26 + 1,
              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      v29 = v26 + 2;
      v30 = v28;
      v31 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v29,
              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      v92 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_35F7C88 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v92.fields.x;
      z = v92.fields.z;
      y = v92.fields.y;
      v93 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v30,
              (const MethodInfo_35F7C88 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v85 = v93.fields.x;
      v86 = v93.fields.z;
      v87 = v93.fields.y;
      *(UnityEngine_Vector3_o *)&v33 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v31,
                                         (const MethodInfo_35F7C88 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v36 = v33;
      v37 = v34;
      v38 = v35;
      v39 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_35F53DC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v40 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v30,
              (const MethodInfo_35F53DC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v41 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v31,
              (const MethodInfo_35F53DC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v24 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v24 + 24) )
        goto LABEL_31;
      v42 = v40.fields.x - v39.fields.x;
      v43 = v41.fields.x - v39.fields.x;
      v44 = (float *)(v24 + 12LL * Item);
      v45 = 1.0
          / (float)((float)((float)(v40.fields.x - v39.fields.x) * (float)(v41.fields.y - v39.fields.y))
                  - (float)((float)(v40.fields.y - v39.fields.y) * (float)(v41.fields.x - v39.fields.x)));
      v46 = (float)((float)((float)(v85 - x) * (float)(v41.fields.y - v39.fields.y))
                  - (float)((float)(v36 - x) * (float)(v40.fields.y - v39.fields.y)))
          * v45;
      v47 = (float)((float)((float)(v87 - y) * (float)(v41.fields.y - v39.fields.y))
                  - (float)((float)(v37 - y) * (float)(v40.fields.y - v39.fields.y)))
          * v45;
      v48 = (float)((float)((float)(v86 - z) * (float)(v41.fields.y - v39.fields.y))
                  - (float)((float)(v38 - z) * (float)(v40.fields.y - v39.fields.y)))
          * v45;
      v49 = v47 + v44[9];
      v50 = v48 + v44[10];
      v44[8] = v46 + v44[8];
      v44[9] = v49;
      v44[10] = v50;
      if ( (unsigned int)v30 >= *(_DWORD *)(v24 + 24) )
        goto LABEL_31;
      v51 = (float *)(v24 + 12LL * v30);
      v52 = v47 + v51[9];
      v53 = v48 + v51[10];
      v51[8] = v46 + v51[8];
      v51[9] = v52;
      v51[10] = v53;
      if ( (unsigned int)v31 >= *(_DWORD *)(v24 + 24) )
        goto LABEL_31;
      v54 = (float *)(v24 + 12LL * v31);
      v55 = v47 + v54[9];
      v56 = v48 + v54[10];
      v54[8] = v46 + v54[8];
      v54[9] = v55;
      v54[10] = v56;
      if ( !v25 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v25 + 24) )
        goto LABEL_31;
      v57 = (float)(v87 - y) * v43;
      v58 = (float *)(v25 + 12LL * Item);
      v59 = (float)((float)(v38 - z) * v42) - (float)((float)(v86 - z) * v43);
      v60 = (float)((float)((float)(v36 - x) * v42) - (float)((float)(v85 - x) * v43)) * v45;
      v61 = (float)((float)((float)(v37 - y) * v42) - v57) * v45;
      v62 = v59 * v45;
      v63 = v61 + v58[9];
      v64 = v62 + v58[10];
      v58[8] = v60 + v58[8];
      v58[9] = v63;
      v58[10] = v64;
      if ( (unsigned int)v30 >= *(_DWORD *)(v25 + 24)
        || (v65 = (float *)(v25 + 12LL * v30),
            v66 = v61 + v65[9],
            v67 = v62 + v65[10],
            v65[8] = v60 + v65[8],
            v65[9] = v66,
            v65[10] = v67,
            (unsigned int)v31 >= *(_DWORD *)(v25 + 24)) )
      {
LABEL_31:
        sub_1BCAA44(this, vertices);
      }
      v68 = (float *)(v25 + 12LL * v31);
      v26 = v29 + 1;
      v69 = v61 + v68[9];
      v70 = v62 + v68[10];
      v68[8] = v60 + v68[8];
      v68[9] = v69;
      v68[10] = v70;
      if ( v26 >= v84 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1BCAA3C(this, vertices);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v71 = 0LL;
      v72 = (float *)(v25 + 40);
      v73 = (float *)(v24 + 40);
      for ( i = &v81->m_Items[1].fields.x; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v83,
                   v71,
                   (const MethodInfo_35F7C88 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v24 )
          break;
        if ( v71 >= *(unsigned int *)(v24 + 24) )
          goto LABEL_31;
        v75 = *v73;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v73 - 1);
        tangent.fields.z = v75;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v81 )
          break;
        if ( v71 >= v81->max_length )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v25 )
          break;
        if ( v71 >= *(unsigned int *)(v25 + 24) )
          goto LABEL_31;
        ++v71;
        v76 = *(v72 - 2);
        v77 = *(v72 - 1);
        v78 = *v72;
        v72 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v78)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v76)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v77))) >= 0.0 )
          v79 = 1.0;
        else
          v79 = -1.0;
        *i = v79;
        v73 += 3;
        if ( v82 == v71 )
          return v81;
      }
    }
    goto LABEL_32;
  }
  return v81;
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  Il2CppObject *Component_object; // x0
  __int64 v63; // x1
  UnityEngine_Object_o *charaMesh; // x27
  UnityEngine_Renderer_o *v65; // x21
  FGOMeshExploder_o *v66; // x27
  FGOMeshExploder_o *v67; // x28
  System_Array_o *v68; // x19
  System_Array_o *materials; // x28
  System_Array_o *v70; // x28
  FGOMeshExploder_o *v71; // x27
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Array_o *v75; // x19
  System_Array_o *v76; // x27
  System_Collections_Generic_List_Vector3__o *v77; // x27
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_Vector2__o *v81; // x28
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_int__o *v85; // x29
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x2
  __int64 v90; // x3
  int32_t v91; // w21
  int i; // w25
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v94; // w8
  int v95; // w10
  __int64 v96; // x8
  il2cpp_array_size_t v97; // w12
  unsigned int v98; // w9
  __int64 v99; // x9
  __int64 v100; // x10
  il2cpp_array_size_t v101; // w11
  float *v102; // x11
  float v103; // s12
  float v104; // s13
  float v105; // s11
  float *v106; // x11
  float v107; // s9
  float v108; // s10
  float v109; // s8
  float *v110; // x11
  float v111; // s14
  float v112; // s15
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  float *v117; // x8
  struct UnityEngine_Vector3_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  float *v121; // x8
  struct UnityEngine_Vector3_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  float *v125; // x8
  struct UnityEngine_Vector2_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  struct UnityEngine_Vector2_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  struct UnityEngine_Vector2_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  struct System_Int32_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x10
  int32_t v139; // w1
  __int64 v140; // x10
  UnityEngine_GameObject_o *v141; // x21
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  __int64 v148; // x8
  _QWORD *v149; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v151; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v155; // x0
  const MethodInfo *v156; // x5
  UnityEngine_Vector4_array *v157; // x0
  __int64 v158; // x1
  Il2CppObject *v159; // x22
  float v160; // s8
  float v161; // s0
  __int64 v162; // x1
  Il2CppObject *v163; // x22
  __int64 v164; // x1
  Il2CppObject *v165; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v170; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v171; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v172; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v173; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v174; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_4B15086 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, target, *(_QWORD *)&index);
    sub_1BCA7E0(&FGOMeshExploder_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v26, v27);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v28, v29);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v30, v31);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector3__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__Add__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2___ctor__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector3___ctor__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector3__get_Count__, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v50, v51);
    sub_1BCA7E0(&System_Collections_Generic_List_Vector3__TypeInfo, v52, v53);
    sub_1BCA7E0(&System_Collections_Generic_List_Vector2__TypeInfo, v54, v55);
    sub_1BCA7E0(&UnityEngine_Material___TypeInfo, v56, v57);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v58, v59);
    this = (FGOMeshExploder_o *)sub_1BCA7E0(&StringLiteral_22773/*"piece"*/, v60, v61);
    byte_4B15086 = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v65 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0LL, 0LL);
  v170 = (UnityEngine_Transform_o *)v16;
  v171 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_114;
    v66 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_114;
    if ( !v65 )
      goto LABEL_114;
    v67 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    if ( !this )
      goto LABEL_114;
    v68 = (System_Array_o *)sub_1BCA888(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v67->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v66, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v66, 0LL);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_63360904(materials, v68, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
    v70 = (System_Array_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v66, 0LL);
    if ( !this )
      goto LABEL_114;
    v71 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v68;
    System_Array__Copy_63356916(
      v70,
      0,
      v68,
      (int32_t)v71->fields.m_CancellationTokenSource,
      (int32_t)this->fields.m_CancellationTokenSource,
      0LL);
  }
  else
  {
    if ( !v65 )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    if ( !this )
      goto LABEL_114;
    v75 = (System_Array_o *)sub_1BCA888(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v76 = (System_Array_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v65, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v75;
    System_Array__Copy_63360904(v76, v75, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
  }
  v77 = (System_Collections_Generic_List_Vector3__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_Vector3__TypeInfo,
                                                        v72,
                                                        v73,
                                                        v74);
  System_Collections_Generic_List_Vector3____ctor(
    v77,
    (const MethodInfo_35F7724 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v81 = (System_Collections_Generic_List_Vector2__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v78,
                                                        v79,
                                                        v80);
  System_Collections_Generic_List_Vector2____ctor(
    v81,
    (const MethodInfo_35F4E78 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v85 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v82,
                                                    v83,
                                                    v84);
  System_Collections_Generic_List_int____ctor(
    v85,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_Vector3__TypeInfo,
                                                            v86,
                                                            v87,
                                                            v88);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_35F7724 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v91 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v94 = index + v91;
      v95 = index + v91 + 2;
      if ( v95 >= (int)max_length )
        break;
      if ( v94 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v96 = tri->m_Items[v94 + 1];
      v97 = Vtx->max_length;
      if ( (unsigned int)v96 >= v97 )
        goto LABEL_115;
      v98 = index + v91 + 1;
      if ( v98 >= max_length )
        goto LABEL_115;
      v99 = tri->m_Items[v98 + 1];
      if ( (unsigned int)v99 >= v97 )
        goto LABEL_115;
      if ( v95 >= max_length )
        goto LABEL_115;
      v100 = tri->m_Items[v95 + 1];
      if ( (unsigned int)v100 >= v97 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v101 = UVs->max_length;
      if ( (unsigned int)v96 >= v101 || (unsigned int)v99 >= v101 || (unsigned int)v100 >= v101 )
LABEL_115:
        sub_1BCAA44(this, target);
      v102 = (float *)((char *)Vtx + 12 * v96);
      v104 = v102[8];
      v103 = v102[9];
      v105 = v102[10];
      v106 = (float *)((char *)Vtx + 12 * v99);
      v108 = v106[8];
      v107 = v106[9];
      v109 = v106[10];
      v110 = (float *)((char *)Vtx + 12 * v100);
      itema = v110[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v112 = v110[8];
      v111 = v110[9];
      v174 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v96].fields.y;
      v173 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v99].fields.y;
      v172 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v100].fields.y;
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo, target);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v105 - v109) * (float)(v105 - v109))
                 + (float)((float)((float)(v104 - v108) * (float)(v104 - v108))
                         + (float)((float)(v103 - v107) * (float)(v103 - v107)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this, target);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v109 - itema) * (float)(v109 - itema))
                 + (float)((float)((float)(v108 - v112) * (float)(v108 - v112))
                         + (float)((float)(v107 - v111) * (float)(v107 - v111)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this, target);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v105 - itema) * (float)(v105 - itema))
                 + (float)((float)((float)(v104 - v112) * (float)(v104 - v112))
                         + (float)((float)(v103 - v111) * (float)(v103 - v111)))) <= PieceDeltaSqrSize )
        return;
      if ( !v77 )
        goto LABEL_114;
      items = v77->fields._items;
      v115 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v77->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v77->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v178.fields.x = v104;
        v178.fields.y = v103;
        v178.fields.z = v105;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v77,
          v178,
          *(const MethodInfo_35F7FB8 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v117 = (float *)((char *)items + 12 * size);
        v77->fields._size = size + 1;
        v117[8] = v104;
        v117[9] = v103;
        v117[10] = v105;
      }
      v118 = v77->fields._items;
      v119 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v77->fields._version;
      if ( !v118 )
        goto LABEL_114;
      v120 = v77->fields._size;
      if ( (unsigned int)v120 >= v118->max_length )
      {
        v179.fields.x = v108;
        v179.fields.y = v107;
        v179.fields.z = v109;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v77,
          v179,
          *(const MethodInfo_35F7FB8 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v121 = (float *)((char *)v118 + 12 * v120);
        v77->fields._size = v120 + 1;
        v121[8] = v108;
        v121[9] = v107;
        v121[10] = v109;
      }
      v122 = v77->fields._items;
      v123 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v77->fields._version;
      if ( !v122 )
        goto LABEL_114;
      v124 = v77->fields._size;
      if ( (unsigned int)v124 >= v122->max_length )
      {
        v180.fields.z = itema;
        v180.fields.x = v112;
        v180.fields.y = v111;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v77,
          v180,
          *(const MethodInfo_35F7FB8 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
      }
      else
      {
        v125 = (float *)((char *)v122 + 12 * v124);
        v77->fields._size = v124 + 1;
        v125[8] = v112;
        v125[9] = v111;
        v125[10] = itema;
      }
      if ( !v81 )
        goto LABEL_114;
      v126 = v81->fields._items;
      v127 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v81->fields._version;
      if ( !v126 )
        goto LABEL_114;
      v128 = v81->fields._size;
      if ( (unsigned int)v128 >= v126->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v81,
          v174,
          *(const MethodInfo_35F56E0 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v81->fields._size = v128 + 1;
        *(UnityEngine_Vector2_o *)&v126->m_Items[v128].fields.y = v174;
      }
      v129 = v81->fields._items;
      v130 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v81->fields._version;
      if ( !v129 )
        goto LABEL_114;
      v131 = v81->fields._size;
      if ( (unsigned int)v131 >= v129->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v81,
          v173,
          *(const MethodInfo_35F56E0 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
      }
      else
      {
        v81->fields._size = v131 + 1;
        *(UnityEngine_Vector2_o *)&v129->m_Items[v131].fields.y = v173;
      }
      v132 = v81->fields._items;
      v133 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v81->fields._version;
      if ( !v132 )
        goto LABEL_114;
      v134 = v81->fields._size;
      if ( (unsigned int)v134 >= v132->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v81,
          v172,
          *(const MethodInfo_35F56E0 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
      }
      else
      {
        v81->fields._size = v134 + 1;
        *(UnityEngine_Vector2_o *)&v132->m_Items[v134].fields.y = v172;
      }
      if ( !v85 )
        goto LABEL_114;
      v135 = v85->fields._items;
      v136 = Method_System_Collections_Generic_List_int__Add__;
      ++v85->fields._version;
      if ( !v135 )
        goto LABEL_114;
      v137 = v85->fields._size;
      if ( (unsigned int)v137 >= v135->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v85,
          v91,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
        v135 = v85->fields._items;
        v136 = Method_System_Collections_Generic_List_int__Add__;
        ++v85->fields._version;
        if ( !v135 )
          goto LABEL_114;
      }
      else
      {
        v85->fields._size = v137 + 1;
        v135->m_Items[v137 + 1] = v91;
        ++v85->fields._version;
      }
      v138 = v85->fields._size;
      v139 = v91 + 1;
      if ( (unsigned int)v138 >= v135->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v85,
          v139,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
        v135 = v85->fields._items;
        v136 = Method_System_Collections_Generic_List_int__Add__;
        ++v85->fields._version;
        if ( !v135 )
          goto LABEL_114;
      }
      else
      {
        v85->fields._size = v138 + 1;
        v135->m_Items[v138 + 1] = v139;
        ++v85->fields._version;
      }
      v140 = v85->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v91 + 2);
      if ( (unsigned int)v140 >= v135->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v85,
          (int32_t)target,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
      }
      else
      {
        v85->fields._size = v140 + 1;
        v135->m_Items[v140 + 1] = (int)target;
      }
      v91 += 3;
    }
  }
  if ( !v77 )
LABEL_114:
    sub_1BCAA3C(this, target);
  if ( v77->fields._size < 4 )
    return;
  v141 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, target, v89, v90);
  UnityEngine_GameObject___ctor(v141, (System_String_o *)StringLiteral_22773/*"piece"*/, 0LL);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  v148 = *(_QWORD *)&this->fields.m_CachedPtr;
  v149 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v148 )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v148 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v141,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
  }
  else
  {
    v151 = v148 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v151 + 32) = v141;
    sub_1BCA784((PartyOrganizationUtility_o *)(v151 + 32), (int64_t)v141, v142, v143, v144, v145, v146, v147);
  }
  if ( !v141 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v141, isActive, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v170, 0LL);
  GameObjectExtensions__SetParent(v141, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v170, 0LL);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v141, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v141,
                                (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_object_(
    v141,
    (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v141,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v141, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v141, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v141, 0LL);
  if ( !this )
    goto LABEL_114;
  v181.fields.x = v171->fields.pieceScale;
  v181.fields.y = v181.fields.x;
  v181.fields.z = v181.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v181, 0LL);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v77, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v81, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v85, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v157 = FGOMeshExploder__CalculateMeshTangents(v155, v77, v81, normals, v85, v156);
  UnityEngine_Mesh__set_tangents(mesh, v157, 0LL);
  v159 = UnityEngine_GameObject__AddComponent_object_(
           v141,
           (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v158);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v159, 0LL, 0LL) )
  {
    v160 = UnityEngine_Random__Range(v171->fields.minBrokenSpeed, v171->fields.maxBrokenSpeed, 0LL);
    v161 = UnityEngine_Random__Range(v171->fields.minBrokenSpeed, v171->fields.maxBrokenSpeed, 0LL);
    if ( !v159 )
      goto LABEL_114;
    v182.fields.z = v161 * 0.5;
    v182.fields.x = v160 * 0.5;
    v182.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v159, v182, 0LL);
    v183.fields.x = v171->fields.angularVelocity.fields.x * 0.5;
    v183.fields.y = v171->fields.angularVelocity.fields.y * 0.5;
    v183.fields.z = v171->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v159, v183, 0LL);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v159, v171->fields.mass, 0LL);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v159, v171->fields.useGravity, 0LL);
  }
  v163 = UnityEngine_GameObject__AddComponent_object_(
           v141,
           (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v162);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v163, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v163 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v163, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v163, 1, 0LL);
  }
  v165 = UnityEngine_GameObject__AddComponent_object_(
           v141,
           (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v164);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v165, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v165 )
    {
      *(float *)&v165[2].klass = v171->fields.fadeTime;
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
  FGOMeshExploder__Explode_38254504(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_38254504(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  FGOMeshExploder_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Component_object; // x21
  __int64 v17; // x1
  struct System_Action_o *onBroken; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B15085 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11, v12);
    this = (FGOMeshExploder_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B15085 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)target, 0LL);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v19.fields._current )
          sub_1BCAA3C(0LL, v17);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1BCAA3C(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15084 & 1) == 0 )
  {
    sub_1BCA7E0(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method, v2);
    byte_4B15084 = 1;
  }
  v5 = sub_1BCAA2C(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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


bool __fastcall FGOMeshExploder__PreCreatePiece_d__16__MoveNext(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  FGOMeshExploder__PreCreatePiece_d__16_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  PartyOrganizationUtility_o *v13; // x19
  bool result; // w0
  int i_5__7; // w8
  UnityEngine_Mesh_o *v16; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Vector3_array *normals; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Int32_array *triangles; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_Vector2_array *uv; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x2
  int v46; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  __int64 v48; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v50; // x12
  unsigned int max_length; // w13
  __int64 v52; // x11
  __int64 v53; // x14
  unsigned int v54; // w12
  __int64 v55; // x10
  char *v56; // x9
  char *v57; // x11
  char *v58; // x8
  float v59; // s11
  float32x2_t v60; // d8
  float v61; // s14
  float32x2_t v62; // d13
  float v63; // s10
  float32x2_t v64; // d9
  float32x2_t v65; // d1
  unsigned __int64 v66; // d1
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v72; // w23
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int v79; // w9
  PartyOrganizationUtility_o *p__2__current; // x19
  UnityEngine_Vector3_o v81; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v82; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v83; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4B1508A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method, v2);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1BCA7E0(&UnityEngine_Mesh_TypeInfo, v9, v10);
    byte_4B1508A = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    i_5__7 = v8->fields._i_5__7;
    v8->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    v16 = (UnityEngine_Mesh_o *)sub_1BCAA2C(UnityEngine_Mesh_TypeInfo, method, v2, v3);
    UnityEngine_Mesh___ctor(v16, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v16, 0LL);
          if ( v16 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v16, 0LL);
            v8->fields._vertices_5__2 = vertices;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._vertices_5__2,
              (int64_t)vertices,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            normals = UnityEngine_Mesh__get_normals(v16, 0LL);
            v8->fields._normals_5__3 = normals;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._normals_5__3,
              (int64_t)normals,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            triangles = UnityEngine_Mesh__get_triangles(v16, 0LL);
            v8->fields._triangles_5__4 = triangles;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._triangles_5__4,
              (int64_t)triangles,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            uv = UnityEngine_Mesh__get_uv(v16, 0LL);
            v8->fields._uvs_5__5 = uv;
            sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._uvs_5__5, (int64_t)uv, v39, v40, v41, v42, v43, v44);
            *(_QWORD *)&v8->fields._yield_trianble_count_5__6 = 0LL;
            if ( v8->fields._triangles_5__4 )
            {
              i_5__7 = 0;
              v8->fields._tris_5__8 = *(_QWORD *)&v8->fields._triangles_5__4->max_length;
LABEL_16:
              while ( i_5__7 < v8->fields._tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_70113984(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0LL);
                v46 = (int)this;
                if ( !byte_4B15194 )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1BCA7E0(
                                                                      &UnityEngine_Vector3_TypeInfo,
                                                                      method,
                                                                      v45);
                  byte_4B15194 = 1;
                }
                normals_5__3 = v8->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                v48 = *(_QWORD *)&normals_5__3->max_length;
                if ( v48 )
                {
                  triangles_5__4 = v8->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v50 = v8->fields._i_5__7;
                  max_length = triangles_5__4->max_length;
                  if ( (unsigned int)v50 >= max_length
                    || (v52 = triangles_5__4->m_Items[v50 + 1], (unsigned int)v52 >= (unsigned int)v48)
                    || (int)v50 + 1 >= max_length
                    || (v53 = triangles_5__4->m_Items[(int)v50 + 2], (unsigned int)v53 >= (unsigned int)v48)
                    || (v54 = v50 + 2, v54 >= max_length)
                    || (v55 = triangles_5__4->m_Items[v54 + 1], (unsigned int)v55 >= (unsigned int)v48) )
                  {
                    sub_1BCAA44(this, method);
                  }
                  v56 = (char *)normals_5__3 + 12 * v52;
                  v57 = (char *)normals_5__3 + 12 * v53;
                  v58 = (char *)normals_5__3 + 12 * v55;
                  v59 = *((float *)v56 + 8);
                  v60.n64_u64[0] = *(unsigned __int64 *)(v56 + 36);
                  v61 = *((float *)v57 + 8);
                  v62.n64_u64[0] = *(unsigned __int64 *)(v57 + 36);
                  v63 = *((float *)v58 + 8);
                  v64.n64_u64[0] = *(unsigned __int64 *)(v58 + 36);
                  if ( !byte_4B109C4 )
                  {
                    sub_1BCA7E0(&System_Math_TypeInfo, method, v45);
                    byte_4B109C4 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
                  v65.n64_u64[0] = vadd_f32(vadd_f32(v60, v62), v64).n64_u64[0];
                  v66 = vmul_f32(v65, v65).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v66 + 1)
                       + (float)((float)((float)((float)(v59 + v61) + v63) * (float)((float)(v59 + v61) + v63))
                               + *(float *)&v66)) <= 0.00001
                    && !byte_4B109C1 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v45);
                    byte_4B109C1 = 1;
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
                *(UnityEngine_Vector3_o *)&v85.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v72 = 3 * v46;
                v83.fields.x = v85.fields.x;
                v83.fields.y = v85.fields.y;
                v83.fields.z = v85.fields.z;
                v85.fields.x = x;
                v85.fields.y = y;
                v85.fields.z = z;
                v85.fields.w = w;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v85,
                  v83,
                  v81,
                  v8->fields._i_5__7,
                  v8->fields._triangles_5__4,
                  v8->fields._vertices_5__2,
                  v8->fields._uvs_5__5,
                  v72,
                  _4__this->fields.exploded,
                  v82);
                v79 = v8->fields._yield_trianble_count_5__6 + v72;
                i_5__7 = v8->fields._i_5__7 + v72;
                v8->fields._yield_trianble_count_5__6 = v79;
                v8->fields._i_5__7 = i_5__7;
                if ( v79 >= 2001 && !_4__this->fields.exploded )
                {
                  v8->fields.__2__current = 0LL;
                  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  p__2__current->fields._SelectedPartyPosition_k__BackingField = 0;
                  sub_1BCA784(p__2__current, 0LL, v73, v74, v75, v76, v77, v78);
                  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_45:
    sub_1BCAA3C(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v8->fields.__2__current = 0LL;
    v13 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v13, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&v13[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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