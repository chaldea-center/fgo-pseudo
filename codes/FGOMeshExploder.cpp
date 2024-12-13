void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B36022 & 1) == 0 )
  {
    sub_1BD3458(&FGOMeshExploder_TypeInfo, v1);
    byte_4B36022 = 1;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B36021 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B36021 = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B31941 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BD8430;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v5;
  this->fields.angularVelocity.fields.z = z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.pieces, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B36020 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector3__get_Count__, vertices);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector2__get_Item__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector3__get_Item__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1BD3458(&UnityEngine_Vector3___TypeInfo, v14);
    this = (FGOMeshExploder_o *)sub_1BD3458(&UnityEngine_Vector4___TypeInfo, v15);
    byte_4B36020 = 1;
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
  v18 = sub_1BD3500(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v19 = sub_1BD3500(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v76 = size;
  this = (FGOMeshExploder_o *)sub_1BD3500(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
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
               (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
      v22 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v20 + 1,
              (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
      v23 = v20 + 2;
      v24 = v22;
      v25 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v23,
              (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
      v86 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_3616DBC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v86.fields.x;
      z = v86.fields.z;
      y = v86.fields.y;
      v87 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v24,
              (const MethodInfo_3616DBC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v79 = v87.fields.x;
      v80 = v87.fields.z;
      v81 = v87.fields.y;
      *(UnityEngine_Vector3_o *)&v27 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v25,
                                         (const MethodInfo_3616DBC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v30 = v27;
      v31 = v28;
      v32 = v29;
      v33 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_3614510 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v34 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v24,
              (const MethodInfo_3614510 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v35 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v25,
              (const MethodInfo_3614510 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
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
        sub_1BD36BC(this, vertices);
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
    sub_1BD36B4(this, vertices);
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
                   (const MethodInfo_3616DBC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
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
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v114; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v118; // x0
  const MethodInfo *v119; // x5
  UnityEngine_Vector4_array *v120; // x0
  Il2CppObject *v121; // x22
  float v122; // s8
  float v123; // s0
  Il2CppObject *v124; // x22
  Il2CppObject *v125; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v130; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v131; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v132; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v133; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v134; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_4B3601F & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_Renderer___, target);
    sub_1BD3458(&FGOMeshExploder_TypeInfo, v18);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___, v19);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v20);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___, v21);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___, v22);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___, v23);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v24);
    sub_1BD3458(&UnityEngine_GameObject_TypeInfo, v25);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v27);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector3__Add__, v28);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector2__Add__, v29);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v30);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector2___ctor__, v31);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector3___ctor__, v32);
    sub_1BD3458(&Method_System_Collections_Generic_List_Vector3__get_Count__, v33);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v34);
    sub_1BD3458(&System_Collections_Generic_List_Vector3__TypeInfo, v35);
    sub_1BD3458(&System_Collections_Generic_List_Vector2__TypeInfo, v36);
    sub_1BD3458(&UnityEngine_Material___TypeInfo, v37);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v38);
    this = (FGOMeshExploder_o *)sub_1BD3458(&StringLiteral_22807/*"piece"*/, v39);
    byte_4B3601F = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v42 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0LL, 0LL);
  v130 = (UnityEngine_Transform_o *)v16;
  v131 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
    v45 = (System_Array_o *)sub_1BD3500(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v44->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_63484932(materials, v45, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
    v47 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v43, 0LL);
    if ( !this )
      goto LABEL_114;
    v48 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v45;
    System_Array__Copy_63480944(
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
    v49 = (System_Array_o *)sub_1BD3500(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v50 = (System_Array_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v42, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v49;
    System_Array__Copy_63484932(v50, v49, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
  }
  v51 = (System_Collections_Generic_List_Vector3__o *)sub_1BD36A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v51,
    (const MethodInfo_3616858 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v52 = (System_Collections_Generic_List_Vector2__o *)sub_1BD36A4(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v52,
    (const MethodInfo_3613FAC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v53 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1BD36A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_3616858 *)Method_System_Collections_Generic_List_Vector3___ctor__);
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
        sub_1BD36BC(this, target);
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
      v134 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v59].fields.y;
      v133 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v62].fields.y;
      v132 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v63].fields.y;
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
        v138.fields.x = v67;
        v138.fields.y = v66;
        v138.fields.z = v68;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v138,
          *(const MethodInfo_36170EC **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
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
        v139.fields.x = v71;
        v139.fields.y = v70;
        v139.fields.z = v72;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v139,
          *(const MethodInfo_36170EC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
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
        v140.fields.z = itema;
        v140.fields.x = v75;
        v140.fields.y = v74;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v51,
          v140,
          *(const MethodInfo_36170EC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
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
          v134,
          *(const MethodInfo_3614814 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v91 + 1;
        *(UnityEngine_Vector2_o *)&v89->m_Items[v91].fields.y = v134;
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
          v133,
          *(const MethodInfo_3614814 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v94 + 1;
        *(UnityEngine_Vector2_o *)&v92->m_Items[v94].fields.y = v133;
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
          v132,
          *(const MethodInfo_3614814 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = v97 + 1;
        *(UnityEngine_Vector2_o *)&v95->m_Items[v97].fields.y = v132;
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
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
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
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
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
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
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
    sub_1BD36B4(this, target);
  if ( v51->fields._size < 4 )
    return;
  v104 = (UnityEngine_GameObject_o *)sub_1BD36A4(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v104, (System_String_o *)StringLiteral_22807/*"piece"*/, 0LL);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  v111 = *(_QWORD *)&this->fields.m_CachedPtr;
  v112 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v111 )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v111 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v104,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = v111 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v114 + 32) = v104;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v114 + 32), (int64_t)v104, v105, v106, v107, v108, v109, v110);
  }
  if ( !v104 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v104, isActive, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v130, 0LL);
  GameObjectExtensions__SetParent(v104, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v130, 0LL);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v104, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v104,
                                (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_object_(
    v104,
    (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v104,
                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
  v141.fields.x = v131->fields.pieceScale;
  v141.fields.y = v141.fields.x;
  v141.fields.z = v141.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v141, 0LL);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v51, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v52, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v53, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v120 = FGOMeshExploder__CalculateMeshTangents(v118, v51, v52, normals, v53, v119);
  UnityEngine_Mesh__set_tangents(mesh, v120, 0LL);
  v121 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v121, 0LL, 0LL) )
  {
    v122 = UnityEngine_Random__Range(v131->fields.minBrokenSpeed, v131->fields.maxBrokenSpeed, 0LL);
    v123 = UnityEngine_Random__Range(v131->fields.minBrokenSpeed, v131->fields.maxBrokenSpeed, 0LL);
    if ( !v121 )
      goto LABEL_114;
    v142.fields.z = v123 * 0.5;
    v142.fields.x = v122 * 0.5;
    v142.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v121, v142, 0LL);
    v143.fields.x = v131->fields.angularVelocity.fields.x * 0.5;
    v143.fields.y = v131->fields.angularVelocity.fields.y * 0.5;
    v143.fields.z = v131->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v121, v143, 0LL);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v121, v131->fields.mass, 0LL);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v121, v131->fields.useGravity, 0LL);
  }
  v124 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v124, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v124 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v124, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v124, 1, 0LL);
  }
  v125 = UnityEngine_GameObject__AddComponent_object_(
           v104,
           (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v125, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v125 )
    {
      *(float *)&v125[2].klass = v131->fields.fadeTime;
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
  FGOMeshExploder__Explode_38317636(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_38317636(
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
  if ( (byte_4B3601E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, target);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    this = (FGOMeshExploder_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B3601E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)target, 0LL);
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
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1BD36B4(0LL, v11);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1BD36B4(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B3601D & 1) == 0 )
  {
    sub_1BD3458(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo, method);
    byte_4B3601D = 1;
  }
  v3 = sub_1BD36A4(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  FGOMeshExploder__PreCreatePiece_d__16_o *v8; // x19
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  PartyOrganizationUtility_o *v12; // x19
  bool result; // w0
  int i_5__7; // w8
  UnityEngine_Mesh_o *v15; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Vector3_array *normals; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Int32_array *triangles; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Vector2_array *uv; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int v44; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  __int64 v46; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v48; // x12
  unsigned int max_length; // w13
  __int64 v50; // x11
  __int64 v51; // x14
  unsigned int v52; // w12
  __int64 v53; // x10
  char *v54; // x9
  char *v55; // x11
  char *v56; // x8
  float v57; // s11
  float32x2_t v58; // d8
  float v59; // s14
  float32x2_t v60; // d13
  float v61; // s10
  float32x2_t v62; // d9
  float32x2_t v63; // d1
  unsigned __int64 v64; // d1
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v70; // w23
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int v77; // w9
  PartyOrganizationUtility_o *p__2__current; // x19
  UnityEngine_Vector3_o v79; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v80; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v81; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4B36023 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, method);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1BD3458(&UnityEngine_Mesh_TypeInfo, v9);
    byte_4B36023 = 1;
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
    v15 = (UnityEngine_Mesh_o *)sub_1BD36A4(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v15, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v15, 0LL);
          if ( v15 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v15, 0LL);
            v8->fields._vertices_5__2 = vertices;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&v8->fields._vertices_5__2,
              (int64_t)vertices,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            normals = UnityEngine_Mesh__get_normals(v15, 0LL);
            v8->fields._normals_5__3 = normals;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&v8->fields._normals_5__3,
              (int64_t)normals,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            triangles = UnityEngine_Mesh__get_triangles(v15, 0LL);
            v8->fields._triangles_5__4 = triangles;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&v8->fields._triangles_5__4,
              (int64_t)triangles,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            uv = UnityEngine_Mesh__get_uv(v15, 0LL);
            v8->fields._uvs_5__5 = uv;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields._uvs_5__5, (int64_t)uv, v38, v39, v40, v41, v42, v43);
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
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_70238012(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0LL);
                v44 = (int)this;
                if ( !byte_4B3612D )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
                  byte_4B3612D = 1;
                }
                normals_5__3 = v8->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                v46 = *(_QWORD *)&normals_5__3->max_length;
                if ( v46 )
                {
                  triangles_5__4 = v8->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v48 = v8->fields._i_5__7;
                  max_length = triangles_5__4->max_length;
                  if ( (unsigned int)v48 >= max_length
                    || (v50 = triangles_5__4->m_Items[v48 + 1], (unsigned int)v50 >= (unsigned int)v46)
                    || (int)v48 + 1 >= max_length
                    || (v51 = triangles_5__4->m_Items[(int)v48 + 2], (unsigned int)v51 >= (unsigned int)v46)
                    || (v52 = v48 + 2, v52 >= max_length)
                    || (v53 = triangles_5__4->m_Items[v52 + 1], (unsigned int)v53 >= (unsigned int)v46) )
                  {
                    sub_1BD36BC(this, method);
                  }
                  v54 = (char *)normals_5__3 + 12 * v50;
                  v55 = (char *)normals_5__3 + 12 * v51;
                  v56 = (char *)normals_5__3 + 12 * v53;
                  v57 = *((float *)v54 + 8);
                  v58.n64_u64[0] = *(unsigned __int64 *)(v54 + 36);
                  v59 = *((float *)v55 + 8);
                  v60.n64_u64[0] = *(unsigned __int64 *)(v55 + 36);
                  v61 = *((float *)v56 + 8);
                  v62.n64_u64[0] = *(unsigned __int64 *)(v56 + 36);
                  if ( !byte_4B31944 )
                  {
                    sub_1BD3458(&System_Math_TypeInfo, method);
                    byte_4B31944 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v63.n64_u64[0] = vadd_f32(vadd_f32(v58, v60), v62).n64_u64[0];
                  v64 = vmul_f32(v63, v63).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v64 + 1)
                       + (float)((float)((float)((float)(v57 + v59) + v61) * (float)((float)(v57 + v59) + v61))
                               + *(float *)&v64)) <= 0.00001
                    && !byte_4B31941 )
                  {
                    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
                    byte_4B31941 = 1;
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
                *(UnityEngine_Vector3_o *)&v83.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v70 = 3 * v44;
                v81.fields.x = v83.fields.x;
                v81.fields.y = v83.fields.y;
                v81.fields.z = v83.fields.z;
                v83.fields.x = x;
                v83.fields.y = y;
                v83.fields.z = z;
                v83.fields.w = w;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v83,
                  v81,
                  v79,
                  v8->fields._i_5__7,
                  v8->fields._triangles_5__4,
                  v8->fields._vertices_5__2,
                  v8->fields._uvs_5__5,
                  v70,
                  _4__this->fields.exploded,
                  v80);
                v77 = v8->fields._yield_trianble_count_5__6 + v70;
                i_5__7 = v8->fields._i_5__7 + v70;
                v8->fields._yield_trianble_count_5__6 = v77;
                v8->fields._i_5__7 = i_5__7;
                if ( v77 >= 2001 && !_4__this->fields.exploded )
                {
                  v8->fields.__2__current = 0LL;
                  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  p__2__current->fields._SelectedPartyPosition_k__BackingField = 0;
                  sub_1BD33FC(p__2__current, 0LL, v71, v72, v73, v74, v75, v76);
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
    sub_1BD36B4(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v8->fields.__2__current = 0LL;
    v12 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BD33FC(v12, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&v12[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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