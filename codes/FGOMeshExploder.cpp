void FGOMeshExploder___cctor(const MethodInfo *method)
{
  if ( (byte_4C2607C & 1) == 0 )
  {
    sub_1C2D490(&FGOMeshExploder_TypeInfo);
    byte_4C2607C = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2607B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C2607B = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_C09EF0;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v4;
  this->fields.angularVelocity.fields.z = z;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.pieces, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector4_array *FGOMeshExploder__CalculateMeshTangents(
        FGOMeshExploder_o *this,
        System_Collections_Generic_List_Vector3__o *vertices,
        System_Collections_Generic_List_Vector2__o *uvs,
        System_Collections_Generic_List_Vector3__o *normals,
        System_Collections_Generic_List_int__o *triangles,
        const MethodInfo *method)
{
  __int64 size; // x23
  int32_t v11; // w27
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w27
  int32_t Item; // w19
  int32_t v16; // w0
  int32_t v17; // w27
  int32_t v18; // w29
  int32_t v19; // w28
  float x; // s10
  float v21; // s11
  float v22; // s15
  float v23; // s14
  UnityEngine_Vector2_o v24; // kr00_8
  UnityEngine_Vector2_o v25; // kr08_8
  UnityEngine_Vector2_o v26; // x2
  UnityEngine_Vector2_o v27; // kr10_8
  float v28; // s5
  float v29; // s0
  float *v30; // x9
  float v31; // s1
  float v32; // s19
  float v33; // s18
  float v34; // s17
  float v35; // s21
  float v36; // s22
  float *v37; // x10
  float v38; // s21
  float v39; // s22
  float *v40; // x11
  float v41; // s18
  float v42; // s17
  float v43; // s3
  float *v44; // x8
  float v45; // s4
  float v46; // s0
  float v47; // s2
  float v48; // s1
  float v49; // s4
  float v50; // s5
  float *v51; // x8
  float v52; // s4
  float v53; // s5
  float *v54; // x8
  float v55; // s2
  float v56; // s1
  unsigned __int64 v57; // x19
  float *v58; // x20
  float *v59; // x23
  float *i; // x24
  float v61; // s1
  float v62; // s4
  float v63; // s5
  float v64; // t1
  float v65; // s0
  FGOMeshExploder_o *v67; // [xsp+0h] [xbp-F0h]
  __int64 v68; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v69; // [xsp+10h] [xbp-E0h]
  int32_t v70; // [xsp+18h] [xbp-D8h]
  float v71; // [xsp+1Ch] [xbp-D4h]
  float v72; // [xsp+20h] [xbp-D0h]
  float v73; // [xsp+24h] [xbp-CCh]
  float z; // [xsp+28h] [xbp-C8h]
  float y; // [xsp+2Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2607A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    this = (FGOMeshExploder_o *)sub_1C2D490(&UnityEngine_Vector4___TypeInfo);
    byte_4C2607A = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0;
  if ( !triangles )
    goto LABEL_32;
  v69 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v11 = triangles->fields._size;
  v12 = sub_1C2D538(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v13 = sub_1C2D538(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v68 = size;
  this = (FGOMeshExploder_o *)sub_1C2D538(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v70 = v11;
  v67 = this;
  if ( v11 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v14,
               (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      v16 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v14 + 1,
              (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      v17 = v14 + 2;
      v18 = v16;
      v19 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v17,
              (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      v78 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_37E261C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v78.fields.x;
      z = v78.fields.z;
      y = v78.fields.y;
      v79 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v18,
              (const MethodInfo_37E261C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v71 = v79.fields.x;
      v72 = v79.fields.z;
      v73 = v79.fields.y;
      v80 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v19,
              (const MethodInfo_37E261C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v21 = v80.fields.x;
      v22 = v80.fields.y;
      v23 = v80.fields.z;
      v24 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_37DFD70 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v25 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v18,
              (const MethodInfo_37DFD70 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v27 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v19,
              (const MethodInfo_37DFD70 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v12 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v28 = v25.fields.x - v24.fields.x;
      v29 = v27.fields.x - v24.fields.x;
      v30 = (float *)(v12 + 12LL * Item);
      v31 = 1.0
          / (float)((float)((float)(v25.fields.x - v24.fields.x) * (float)(v27.fields.y - v24.fields.y))
                  - (float)((float)(v25.fields.y - v24.fields.y) * (float)(v27.fields.x - v24.fields.x)));
      v32 = (float)((float)((float)(v71 - x) * (float)(v27.fields.y - v24.fields.y))
                  - (float)((float)(v21 - x) * (float)(v25.fields.y - v24.fields.y)))
          * v31;
      v33 = (float)((float)((float)(v73 - y) * (float)(v27.fields.y - v24.fields.y))
                  - (float)((float)(v22 - y) * (float)(v25.fields.y - v24.fields.y)))
          * v31;
      v34 = (float)((float)((float)(v72 - z) * (float)(v27.fields.y - v24.fields.y))
                  - (float)((float)(v23 - z) * (float)(v25.fields.y - v24.fields.y)))
          * v31;
      v35 = v33 + v30[9];
      v36 = v34 + v30[10];
      v30[8] = v32 + v30[8];
      v30[9] = v35;
      v30[10] = v36;
      if ( (unsigned int)v18 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v37 = (float *)(v12 + 12LL * v18);
      v38 = v33 + v37[9];
      v39 = v34 + v37[10];
      v37[8] = v32 + v37[8];
      v37[9] = v38;
      v37[10] = v39;
      if ( (unsigned int)v19 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v40 = (float *)(v12 + 12LL * v19);
      v41 = v33 + v40[9];
      v42 = v34 + v40[10];
      v40[8] = v32 + v40[8];
      v40[9] = v41;
      v40[10] = v42;
      if ( !v13 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v13 + 24) )
        goto LABEL_31;
      v43 = (float)(v73 - y) * v29;
      v44 = (float *)(v13 + 12LL * Item);
      v45 = (float)((float)(v23 - z) * v28) - (float)((float)(v72 - z) * v29);
      v46 = (float)((float)((float)(v21 - x) * v28) - (float)((float)(v71 - x) * v29)) * v31;
      v47 = (float)((float)((float)(v22 - y) * v28) - v43) * v31;
      v48 = v45 * v31;
      v49 = v47 + v44[9];
      v50 = v48 + v44[10];
      v44[8] = v46 + v44[8];
      v44[9] = v49;
      v44[10] = v50;
      if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24)
        || (v51 = (float *)(v13 + 12LL * v18),
            v52 = v47 + v51[9],
            v53 = v48 + v51[10],
            v51[8] = v46 + v51[8],
            v51[9] = v52,
            v51[10] = v53,
            (unsigned int)v19 >= *(_DWORD *)(v13 + 24)) )
      {
LABEL_31:
        sub_1C2D6F4(this, vertices, v26);
      }
      v54 = (float *)(v13 + 12LL * v19);
      v14 = v17 + 1;
      v55 = v47 + v54[9];
      v56 = v48 + v54[10];
      v54[8] = v46 + v54[8];
      v54[9] = v55;
      v54[10] = v56;
      if ( v14 >= v70 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1C2D6EC(this, vertices);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v57 = 0;
      v58 = (float *)(v13 + 40);
      v59 = (float *)(v12 + 40);
      for ( i = &v67->fields.angularVelocity.fields.y; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v69,
                   v57,
                   (const MethodInfo_37E261C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v12 )
          break;
        if ( v57 >= *(unsigned int *)(v12 + 24) )
          goto LABEL_31;
        v61 = *v59;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v59 - 1);
        tangent.fields.z = v61;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0);
        if ( !v67 )
          break;
        if ( v57 >= LODWORD(v67->fields.m_CancellationTokenSource) )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v13 )
          break;
        if ( v57 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_31;
        ++v57;
        v62 = *(v58 - 2);
        v63 = *(v58 - 1);
        v64 = *v58;
        v58 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v64)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v62)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v63))) >= 0.0 )
          v65 = 1.0;
        else
          v65 = -1.0;
        *i = v65;
        v59 += 3;
        if ( v68 == v57 )
          return (UnityEngine_Vector4_array *)v67;
      }
    }
    goto LABEL_32;
  }
  return (UnityEngine_Vector4_array *)v67;
}


void FGOMeshExploder__CreateMeshPiece(
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *charaMesh; // x27
  UnityEngine_Renderer_o *v20; // x21
  FGOMeshExploder_o *v21; // x27
  FGOMeshExploder_o *v22; // x28
  System_Array_o *v23; // x19
  System_Array_o *materials; // x28
  System_Array_o *v25; // x28
  FGOMeshExploder_o *v26; // x27
  System_Array_o *v27; // x19
  System_Array_o *v28; // x27
  System_Collections_Generic_List_Vector3__o *v29; // x27
  System_Collections_Generic_List_Vector2__o *v30; // x28
  System_Collections_Generic_List_int__o *v31; // x29
  __int64 v32; // x2
  int32_t v33; // w21
  int i; // w25
  unsigned int max_length; // w11
  unsigned int v36; // w8
  int v37; // w10
  __int64 v38; // x8
  unsigned int v39; // w12
  unsigned int v40; // w9
  __int64 v41; // x9
  __int64 v42; // x10
  unsigned int v43; // w11
  float *v44; // x11
  float v45; // s12
  float v46; // s13
  float v47; // s11
  float *v48; // x11
  float v49; // s9
  float v50; // s10
  float v51; // s8
  float *v52; // x11
  float v53; // s14
  float v54; // s15
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  float *v59; // x8
  struct UnityEngine_Vector3_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  float *v63; // x8
  struct UnityEngine_Vector3_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  float *v67; // x8
  struct UnityEngine_Vector2_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  struct UnityEngine_Vector2_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  struct UnityEngine_Vector2_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  struct System_Int32_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x10
  int32_t v81; // w1
  __int64 v82; // x10
  UnityEngine_GameObject_o *v83; // x21
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v87; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v89; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v93; // x0
  const MethodInfo *v94; // x5
  UnityEngine_Vector4_array *v95; // x0
  Il2CppObject *v96; // x22
  float v97; // s8
  float v98; // s0
  Il2CppObject *v99; // x22
  Il2CppObject *v100; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v105; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v106; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v107; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v108; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v109; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_4C26079 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&FGOMeshExploder_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C2D490(&UnityEngine_Material___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (FGOMeshExploder_o *)sub_1C2D490(&StringLiteral_22677/*"piece"*/);
    byte_4C26079 = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v20 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0, 0);
  v105 = (UnityEngine_Transform_o *)v16;
  v106 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_114;
    v21 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0);
    if ( !this )
      goto LABEL_114;
    if ( !v20 )
      goto LABEL_114;
    v22 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    v23 = (System_Array_o *)sub_1C2D538(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v22->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_65124644(materials, v23, (int32_t)this->fields.m_CancellationTokenSource, 0);
    v25 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    if ( !this )
      goto LABEL_114;
    v26 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v23;
    System_Array__Copy_65120656(
      v25,
      0,
      v23,
      (int32_t)v26->fields.m_CancellationTokenSource,
      (int32_t)this->fields.m_CancellationTokenSource,
      0);
  }
  else
  {
    if ( !v20 )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    v27 = (System_Array_o *)sub_1C2D538(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v28 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v27;
    System_Array__Copy_65124644(v28, v27, (int32_t)this->fields.m_CancellationTokenSource, 0);
  }
  v29 = (System_Collections_Generic_List_Vector3__o *)sub_1C2D6DC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v29,
    (const MethodInfo_37E20B8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v30 = (System_Collections_Generic_List_Vector2__o *)sub_1C2D6DC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v30,
    (const MethodInfo_37DF80C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1C2D6DC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_37E20B8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v33 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v36 = index + v33;
      v37 = index + v33 + 2;
      if ( v37 >= (int)max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v38 = tri->m_Items[v36];
      v39 = Vtx->max_length;
      if ( (unsigned int)v38 >= v39 )
        goto LABEL_115;
      v40 = index + v33 + 1;
      if ( v40 >= max_length )
        goto LABEL_115;
      v41 = tri->m_Items[v40];
      if ( (unsigned int)v41 >= v39 )
        goto LABEL_115;
      if ( v37 >= max_length )
        goto LABEL_115;
      v42 = tri->m_Items[v37];
      if ( (unsigned int)v42 >= v39 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v43 = UVs->max_length;
      if ( (unsigned int)v38 >= v43 || (unsigned int)v41 >= v43 || (unsigned int)v42 >= v43 )
LABEL_115:
        sub_1C2D6F4(this, target, v32);
      v44 = (float *)((char *)Vtx + 12 * v38);
      v46 = v44[8];
      v45 = v44[9];
      v47 = v44[10];
      v48 = (float *)((char *)Vtx + 12 * v41);
      v50 = v48[8];
      v49 = v48[9];
      v51 = v48[10];
      v52 = (float *)((char *)Vtx + 12 * v42);
      itema = v52[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v54 = v52[8];
      v53 = v52[9];
      v109 = UVs->m_Items[v38];
      v108 = UVs->m_Items[v41];
      v107 = UVs->m_Items[v42];
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v47 - v51) * (float)(v47 - v51))
                 + (float)((float)((float)(v46 - v50) * (float)(v46 - v50))
                         + (float)((float)(v45 - v49) * (float)(v45 - v49)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v51 - itema) * (float)(v51 - itema))
                 + (float)((float)((float)(v50 - v54) * (float)(v50 - v54))
                         + (float)((float)(v49 - v53) * (float)(v49 - v53)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v47 - itema) * (float)(v47 - itema))
                 + (float)((float)((float)(v46 - v54) * (float)(v46 - v54))
                         + (float)((float)(v45 - v53) * (float)(v45 - v53)))) <= PieceDeltaSqrSize )
        return;
      if ( !v29 )
        goto LABEL_114;
      items = v29->fields._items;
      v57 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v113.fields.x = v46;
        v113.fields.y = v45;
        v113.fields.z = v47;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v113,
          *(const MethodInfo_37E294C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = (float *)((char *)items + 12 * size);
        v29->fields._size = size + 1;
        v59[8] = v46;
        v59[9] = v45;
        v59[10] = v47;
      }
      v60 = v29->fields._items;
      v61 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !v60 )
        goto LABEL_114;
      v62 = v29->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        v114.fields.x = v50;
        v114.fields.y = v49;
        v114.fields.z = v51;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v114,
          *(const MethodInfo_37E294C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = (float *)((char *)v60 + 12 * v62);
        v29->fields._size = v62 + 1;
        v63[8] = v50;
        v63[9] = v49;
        v63[10] = v51;
      }
      v64 = v29->fields._items;
      v65 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !v64 )
        goto LABEL_114;
      v66 = v29->fields._size;
      if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
      {
        v115.fields.z = itema;
        v115.fields.x = v54;
        v115.fields.y = v53;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v115,
          *(const MethodInfo_37E294C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = (float *)((char *)v64 + 12 * v66);
        v29->fields._size = v66 + 1;
        v67[8] = v54;
        v67[9] = v53;
        v67[10] = itema;
      }
      if ( !v30 )
        goto LABEL_114;
      v68 = v30->fields._items;
      v69 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v68 )
        goto LABEL_114;
      v70 = v30->fields._size;
      if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v109,
          *(const MethodInfo_37E0074 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v70 + 1;
        v68->m_Items[v70] = v109;
      }
      v71 = v30->fields._items;
      v72 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v71 )
        goto LABEL_114;
      v73 = v30->fields._size;
      if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v108,
          *(const MethodInfo_37E0074 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v73 + 1;
        v71->m_Items[v73] = v108;
      }
      v74 = v30->fields._items;
      v75 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v74 )
        goto LABEL_114;
      v76 = v30->fields._size;
      if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v107,
          *(const MethodInfo_37E0074 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v76 + 1;
        v74->m_Items[v76] = v107;
      }
      if ( !v31 )
        goto LABEL_114;
      v77 = v31->fields._items;
      v78 = Method_System_Collections_Generic_List_int__Add__;
      ++v31->fields._version;
      if ( !v77 )
        goto LABEL_114;
      v79 = v31->fields._size;
      if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v33,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        v77 = v31->fields._items;
        v78 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v77 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v79 + 1;
        v77->m_Items[v79] = v33;
        ++v31->fields._version;
      }
      v80 = v31->fields._size;
      v81 = v33 + 1;
      if ( (unsigned int)v80 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v81,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        v77 = v31->fields._items;
        v78 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v77 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v80 + 1;
        v77->m_Items[v80] = v81;
        ++v31->fields._version;
      }
      v82 = v31->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v33 + 2);
      if ( (unsigned int)v82 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          (int32_t)target,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v31->fields._size = v82 + 1;
        v77->m_Items[v82] = (int)target;
      }
      v33 += 3;
    }
  }
  if ( !v29 )
LABEL_114:
    sub_1C2D6EC(this, target);
  if ( v29->fields._size < 4 )
    return;
  v83 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v83, (System_String_o *)StringLiteral_22677/*"piece"*/, 0);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  m_CachedPtr = this->fields.m_CachedPtr;
  v87 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v83,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v89 + 32) = v83;
    sub_1C2D434((CGThumbnailListItem_o *)(v89 + 32), (int32_t)v83, v84, v85);
  }
  if ( !v83 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v83, isActive, 0);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v105, 0);
  GameObjectExtensions__SetParent(v83, parent, 0);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v105, 0);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  UnityEngine_GameObject__set_layer(v83, layer, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v83,
                                (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  UnityEngine_GameObject__AddComponent_object_(
    v83,
    (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v83,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v83, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v83, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v83, 0);
  if ( !this )
    goto LABEL_114;
  v116.fields.x = v106->fields.pieceScale;
  v116.fields.y = v116.fields.x;
  v116.fields.z = v116.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v116, 0);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v29, 0);
  UnityEngine_Mesh__SetUVs(mesh, 0, v30, 0);
  UnityEngine_Mesh__SetTriangles(mesh, v31, 0, 0);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0);
  v95 = FGOMeshExploder__CalculateMeshTangents(v93, v29, v30, normals, v31, v94);
  UnityEngine_Mesh__set_tangents(mesh, v95, 0);
  v96 = UnityEngine_GameObject__AddComponent_object_(
          v83,
          (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v96, 0, 0) )
  {
    v97 = UnityEngine_Random__Range(v106->fields.minBrokenSpeed, v106->fields.maxBrokenSpeed, 0);
    v98 = UnityEngine_Random__Range(v106->fields.minBrokenSpeed, v106->fields.maxBrokenSpeed, 0);
    if ( !v96 )
      goto LABEL_114;
    v117.fields.z = v98 * 0.5;
    v117.fields.x = v97 * 0.5;
    v117.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v96, v117, 0);
    v118.fields.x = v106->fields.angularVelocity.fields.x * 0.5;
    v118.fields.y = v106->fields.angularVelocity.fields.y * 0.5;
    v118.fields.z = v106->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v96, v118, 0);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v96, v106->fields.mass, 0);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v96, v106->fields.useGravity, 0);
  }
  v99 = UnityEngine_GameObject__AddComponent_object_(
          v83,
          (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v99 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v99, mesh, 0);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v99, 1, 0);
  }
  v100 = UnityEngine_GameObject__AddComponent_object_(
           v83,
           (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v100, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v100 )
    {
      *(float *)&v100[2].klass = v106->fields.fadeTime;
      return;
    }
    goto LABEL_114;
  }
}


void FGOMeshExploder__Explode(FGOMeshExploder_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x1
  const MethodInfo *v4; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  FGOMeshExploder__Explode_40038456(this, gameObject, v4);
}


void FGOMeshExploder__Explode_40038456(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  FGOMeshExploder_o *v4; // x19
  Il2CppObject *Component_object; // x21
  __int64 v6; // x1
  struct System_Action_o *onBroken; // x8
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C26078 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (FGOMeshExploder_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26078 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)target, 0);
      onBroken = v4->fields.onBroken;
      if ( onBroken )
        ((void (__fastcall *)(intptr_t, intptr_t))onBroken->fields.invoke_impl)(
          onBroken->fields.method_code,
          onBroken->fields.method);
      v4->fields.exploded = 1;
      return;
    }
    this = (FGOMeshExploder_o *)v4->fields.pieces;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v8,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v8,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v8.fields._current )
          sub_1C2D6EC(0, v6);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v8,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1C2D6EC(this, target);
  }
}


System_Collections_IEnumerator_o *FGOMeshExploder__PreCreatePiece(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C26077 & 1) == 0 )
  {
    sub_1C2D490(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
    byte_4C26077 = 1;
  }
  v3 = sub_1C2D6DC(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


// attributes: thunk
System_Collections_IEnumerator_o *FGOMeshExploder__Start(FGOMeshExploder_o *this, const MethodInfo *method)
{
  return FGOMeshExploder__PreCreatePiece(this, method);
}


void FGOMeshExploder__PreCreatePiece_d__16___ctor(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FGOMeshExploder__PreCreatePiece_d__16__MoveNext(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  FGOMeshExploder__PreCreatePiece_d__16_o *v4; // x19
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  CGThumbnailListItem_o *v7; // x19
  bool result; // w0
  int i_5__7; // w8
  UnityEngine_Mesh_o *v10; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_array *normals; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *triangles; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Vector2_array *uv; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  int v24; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v28; // x12
  unsigned int v29; // w13
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
  const MethodInfo *v52; // x3
  int v53; // w9
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v55; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v56; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v57; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C2607D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1C2D490(&UnityEngine_Mesh_TypeInfo);
    byte_4C2607D = 1;
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
    v10 = (UnityEngine_Mesh_o *)sub_1C2D6DC(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v10, 0);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v10, 0);
          if ( v10 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v10, 0);
            v4->fields._vertices_5__2 = vertices;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._vertices_5__2, (int32_t)vertices, v12, v13);
            normals = UnityEngine_Mesh__get_normals(v10, 0);
            v4->fields._normals_5__3 = normals;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._normals_5__3, (int32_t)normals, v15, v16);
            triangles = UnityEngine_Mesh__get_triangles(v10, 0);
            v4->fields._triangles_5__4 = triangles;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._triangles_5__4, (int32_t)triangles, v18, v19);
            uv = UnityEngine_Mesh__get_uv(v10, 0);
            v4->fields._uvs_5__5 = uv;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._uvs_5__5, (int32_t)uv, v21, v22);
            *(_QWORD *)&v4->fields._yield_trianble_count_5__6 = 0;
            if ( v4->fields._triangles_5__4 )
            {
              i_5__7 = 0;
              v4->fields._tris_5__8 = v4->fields._triangles_5__4->max_length;
LABEL_16:
              while ( i_5__7 < v4->fields._tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_71123924(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0);
                v24 = (int)this;
                if ( !byte_4C260BE )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C260BE = 1;
                }
                normals_5__3 = v4->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                max_length = normals_5__3->max_length;
                if ( max_length )
                {
                  triangles_5__4 = v4->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v28 = v4->fields._i_5__7;
                  v29 = triangles_5__4->max_length;
                  if ( (unsigned int)v28 >= v29
                    || (v30 = triangles_5__4->m_Items[v28], (unsigned int)v30 >= (unsigned int)max_length)
                    || (int)v28 + 1 >= v29
                    || (v31 = triangles_5__4->m_Items[(int)v28 + 1], (unsigned int)v31 >= (unsigned int)max_length)
                    || (v32 = v28 + 2, v32 >= v29)
                    || (v33 = triangles_5__4->m_Items[v32], (unsigned int)v33 >= (unsigned int)max_length) )
                  {
                    sub_1C2D6F4(this, method, v23);
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
                  if ( !byte_4C20DA4 )
                  {
                    sub_1C2D490(&System_Math_TypeInfo);
                    byte_4C20DA4 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v43.n64_u64[0] = vadd_f32(vadd_f32(v38, v40), v42).n64_u64[0];
                  v44 = vmul_f32(v43, v43).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v44 + 1)
                       + (float)((float)((float)((float)(v37 + v39) + v41) * (float)((float)(v37 + v39) + v41))
                               + *(float *)&v44)) <= 0.00001
                    && !byte_4C20DA1 )
                  {
                    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                    byte_4C20DA1 = 1;
                  }
                }
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0);
                if ( !this )
                  goto LABEL_45;
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0);
                if ( !this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0);
                if ( !this )
                  goto LABEL_45;
                rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0);
                x = rotation.fields.x;
                y = rotation.fields.y;
                z = rotation.fields.z;
                w = rotation.fields.w;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0);
                if ( !this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0);
                if ( !this )
                  goto LABEL_45;
                *(UnityEngine_Vector3_o *)&v59.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0);
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
                  v4->fields.__2__current = 0;
                  p__2__current = &v4->fields.__2__current;
                  *((_DWORD *)p__2__current + 12) = 0;
                  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v51, v52);
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
    sub_1C2D6EC(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v4->fields.__2__current = 0;
    v7 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(v7, 0, v2, v3);
    result = 1;
    LODWORD(v7[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *FGOMeshExploder__PreCreatePiece_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FGOMeshExploder__PreCreatePiece_d__16__System_Collections_IEnumerator_Reset(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *FGOMeshExploder__PreCreatePiece_d__16__System_Collections_IEnumerator_get_Current(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FGOMeshExploder__PreCreatePiece_d__16__System_IDisposable_Dispose(
        FGOMeshExploder__PreCreatePiece_d__16_o *this,
        const MethodInfo *method)
{
  ;
}