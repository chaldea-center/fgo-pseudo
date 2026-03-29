void FGOMeshExploder___cctor(const MethodInfo *method)
{
  if ( (byte_4D2F772 & 1) == 0 )
  {
    sub_1C93AD4(&FGOMeshExploder_TypeInfo);
    byte_4D2F772 = 1;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2F771 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2F771 = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_D012F0;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v4;
  this->fields.angularVelocity.fields.z = z;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pieces, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  UnityEngine_Vector2_o v20; // kr40_8
  UnityEngine_Vector2_o v21; // kr48_8
  UnityEngine_Vector2_o v22; // kr50_8
  float v23; // s5
  float v24; // s0
  float *v25; // x9
  float v26; // s1
  float v27; // s19
  float v28; // s18
  float v29; // s17
  float v30; // s21
  float v31; // s22
  float *v32; // x10
  float v33; // s21
  float v34; // s22
  float *v35; // x11
  float v36; // s18
  float v37; // s17
  float v38; // s3
  float *v39; // x8
  float v40; // s4
  float v41; // s0
  float v42; // s2
  float v43; // s1
  float v44; // s4
  float v45; // s5
  float *v46; // x8
  float v47; // s4
  float v48; // s5
  float *v49; // x8
  float v50; // s2
  float v51; // s1
  unsigned __int64 v52; // x19
  float *v53; // x20
  float *v54; // x23
  float *i; // x24
  float v56; // s1
  float v57; // s4
  float v58; // s5
  float v59; // t1
  float v60; // s0
  FGOMeshExploder_o *v62; // [xsp+0h] [xbp-F0h]
  __int64 v63; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v64; // [xsp+10h] [xbp-E0h]
  int32_t v65; // [xsp+18h] [xbp-D8h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v68; // 0:kr00_12.12
  UnityEngine_Vector3_o v69; // 0:kr14_12.12
  UnityEngine_Vector3_o v70; // 0:kr20_12.12

  if ( (byte_4D2F770 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    this = (FGOMeshExploder_o *)sub_1C93AD4(&UnityEngine_Vector4___TypeInfo);
    byte_4D2F770 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0;
  if ( !triangles )
    goto LABEL_32;
  v64 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v11 = triangles->fields._size;
  v12 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v13 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v63 = size;
  this = (FGOMeshExploder_o *)sub_1C93B7C(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v65 = v11;
  v62 = this;
  if ( v11 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v14,
               (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      v16 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v14 + 1,
              (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      v17 = v14 + 2;
      v18 = v16;
      v19 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v17,
              (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      v68 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v69 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v18,
              (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v70 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v19,
              (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v20 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_38F6D60 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v21 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v18,
              (const MethodInfo_38F6D60 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v22 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v19,
              (const MethodInfo_38F6D60 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v12 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v23 = v21.fields.x - v20.fields.x;
      v24 = v22.fields.x - v20.fields.x;
      v25 = (float *)(v12 + 12LL * Item);
      v26 = 1.0
          / (float)((float)((float)(v21.fields.x - v20.fields.x) * (float)(v22.fields.y - v20.fields.y))
                  - (float)((float)(v21.fields.y - v20.fields.y) * (float)(v22.fields.x - v20.fields.x)));
      v27 = (float)((float)((float)(v69.fields.x - v68.fields.x) * (float)(v22.fields.y - v20.fields.y))
                  - (float)((float)(v70.fields.x - v68.fields.x) * (float)(v21.fields.y - v20.fields.y)))
          * v26;
      v28 = (float)((float)((float)(v69.fields.y - v68.fields.y) * (float)(v22.fields.y - v20.fields.y))
                  - (float)((float)(v70.fields.y - v68.fields.y) * (float)(v21.fields.y - v20.fields.y)))
          * v26;
      v29 = (float)((float)((float)(v69.fields.z - v68.fields.z) * (float)(v22.fields.y - v20.fields.y))
                  - (float)((float)(v70.fields.z - v68.fields.z) * (float)(v21.fields.y - v20.fields.y)))
          * v26;
      v30 = v28 + v25[9];
      v31 = v29 + v25[10];
      v25[8] = v27 + v25[8];
      v25[9] = v30;
      v25[10] = v31;
      if ( (unsigned int)v18 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v32 = (float *)(v12 + 12LL * v18);
      v33 = v28 + v32[9];
      v34 = v29 + v32[10];
      v32[8] = v27 + v32[8];
      v32[9] = v33;
      v32[10] = v34;
      if ( (unsigned int)v19 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v35 = (float *)(v12 + 12LL * v19);
      v36 = v28 + v35[9];
      v37 = v29 + v35[10];
      v35[8] = v27 + v35[8];
      v35[9] = v36;
      v35[10] = v37;
      if ( !v13 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v13 + 24) )
        goto LABEL_31;
      v38 = (float)(v69.fields.y - v68.fields.y) * v24;
      v39 = (float *)(v13 + 12LL * Item);
      v40 = (float)((float)(v70.fields.z - v68.fields.z) * v23) - (float)((float)(v69.fields.z - v68.fields.z) * v24);
      v41 = (float)((float)((float)(v70.fields.x - v68.fields.x) * v23)
                  - (float)((float)(v69.fields.x - v68.fields.x) * v24))
          * v26;
      v42 = (float)((float)((float)(v70.fields.y - v68.fields.y) * v23) - v38) * v26;
      v43 = v40 * v26;
      v44 = v42 + v39[9];
      v45 = v43 + v39[10];
      v39[8] = v41 + v39[8];
      v39[9] = v44;
      v39[10] = v45;
      if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24)
        || (v46 = (float *)(v13 + 12LL * v18),
            v47 = v42 + v46[9],
            v48 = v43 + v46[10],
            v46[8] = v41 + v46[8],
            v46[9] = v47,
            v46[10] = v48,
            (unsigned int)v19 >= *(_DWORD *)(v13 + 24)) )
      {
LABEL_31:
        sub_1C93D34(this);
      }
      v49 = (float *)(v13 + 12LL * v19);
      v14 = v17 + 1;
      v50 = v42 + v49[9];
      v51 = v43 + v49[10];
      v49[8] = v41 + v49[8];
      v49[9] = v50;
      v49[10] = v51;
      if ( v14 >= v65 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1C93D2C(this, vertices);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v52 = 0;
      v53 = (float *)(v13 + 40);
      v54 = (float *)(v12 + 40);
      for ( i = &v62->fields.angularVelocity.fields.y; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v64,
                   v52,
                   (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v12 )
          break;
        if ( v52 >= *(unsigned int *)(v12 + 24) )
          goto LABEL_31;
        v56 = *v54;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v54 - 1);
        tangent.fields.z = v56;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0);
        if ( !v62 )
          break;
        if ( v52 >= LODWORD(v62->fields.m_CancellationTokenSource) )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v13 )
          break;
        if ( v52 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_31;
        ++v52;
        v57 = *(v53 - 2);
        v58 = *(v53 - 1);
        v59 = *v53;
        v53 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v59)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v57)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v58))) >= 0.0 )
          v60 = 1.0;
        else
          v60 = -1.0;
        *i = v60;
        v54 += 3;
        if ( v63 == v52 )
          return (UnityEngine_Vector4_array *)v62;
      }
    }
    goto LABEL_32;
  }
  return (UnityEngine_Vector4_array *)v62;
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
  int32_t v32; // w21
  int i; // w25
  unsigned int max_length; // w11
  unsigned int v35; // w8
  int v36; // w10
  __int64 v37; // x8
  unsigned int v38; // w12
  unsigned int v39; // w9
  __int64 v40; // x9
  __int64 v41; // x10
  unsigned int v42; // w11
  float *v43; // x11
  float v44; // s12
  float v45; // s13
  float v46; // s11
  float *v47; // x11
  float v48; // s9
  float v49; // s10
  float v50; // s8
  float *v51; // x11
  float v52; // s14
  float v53; // s15
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  float *v58; // x8
  struct UnityEngine_Vector3_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  float *v62; // x8
  struct UnityEngine_Vector3_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  float *v66; // x8
  struct UnityEngine_Vector2_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  struct UnityEngine_Vector2_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  struct UnityEngine_Vector2_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  struct System_Int32_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x10
  int32_t v80; // w1
  __int64 v81; // x10
  UnityEngine_GameObject_o *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v90; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v92; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v96; // x0
  const MethodInfo *v97; // x5
  UnityEngine_Vector4_array *v98; // x0
  Il2CppObject *v99; // x22
  float v100; // s8
  float v101; // s0
  Il2CppObject *v102; // x22
  Il2CppObject *v103; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v108; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v109; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v110; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v111; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v112; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_4D2F76F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&FGOMeshExploder_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C93AD4(&UnityEngine_Material___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (FGOMeshExploder_o *)sub_1C93AD4(&StringLiteral_22975/*"piece"*/);
    byte_4D2F76F = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v20 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0, 0);
  v108 = (UnityEngine_Transform_o *)v16;
  v109 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
    v23 = (System_Array_o *)sub_1C93B7C(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v22->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_66090148(materials, v23, (int32_t)this->fields.m_CancellationTokenSource, 0);
    v25 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0);
    if ( !this )
      goto LABEL_114;
    v26 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v23;
    System_Array__Copy_66086160(
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
    v27 = (System_Array_o *)sub_1C93B7C(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v28 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v27;
    System_Array__Copy_66090148(v28, v27, (int32_t)this->fields.m_CancellationTokenSource, 0);
  }
  v29 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v29,
    (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v30 = (System_Collections_Generic_List_Vector2__o *)sub_1C93D20(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v30,
    (const MethodInfo_38F67FC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v32 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v35 = index + v32;
      v36 = index + v32 + 2;
      if ( v36 >= (int)max_length )
        break;
      if ( v35 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v37 = tri->m_Items[v35];
      v38 = Vtx->max_length;
      if ( (unsigned int)v37 >= v38 )
        goto LABEL_115;
      v39 = index + v32 + 1;
      if ( v39 >= max_length )
        goto LABEL_115;
      v40 = tri->m_Items[v39];
      if ( (unsigned int)v40 >= v38 )
        goto LABEL_115;
      if ( v36 >= max_length )
        goto LABEL_115;
      v41 = tri->m_Items[v36];
      if ( (unsigned int)v41 >= v38 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v42 = UVs->max_length;
      if ( (unsigned int)v37 >= v42 || (unsigned int)v40 >= v42 || (unsigned int)v41 >= v42 )
LABEL_115:
        sub_1C93D34(this);
      v43 = (float *)((char *)Vtx + 12 * v37);
      v45 = v43[8];
      v44 = v43[9];
      v46 = v43[10];
      v47 = (float *)((char *)Vtx + 12 * v40);
      v49 = v47[8];
      v48 = v47[9];
      v50 = v47[10];
      v51 = (float *)((char *)Vtx + 12 * v41);
      itema = v51[10];
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v53 = v51[8];
      v52 = v51[9];
      v112 = UVs->m_Items[v37];
      v111 = UVs->m_Items[v40];
      v110 = UVs->m_Items[v41];
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **((float **)this + 23);
      if ( (float)((float)((float)(v46 - v50) * (float)(v46 - v50))
                 + (float)((float)((float)(v45 - v49) * (float)(v45 - v49))
                         + (float)((float)(v44 - v48) * (float)(v44 - v48)))) <= PieceDeltaSqrSize )
        return;
      if ( !*((_DWORD *)this + 56) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v50 - itema) * (float)(v50 - itema))
                 + (float)((float)((float)(v49 - v53) * (float)(v49 - v53))
                         + (float)((float)(v48 - v52) * (float)(v48 - v52)))) <= PieceDeltaSqrSize )
        return;
      if ( !*((_DWORD *)this + 56) )
      {
        j_il2cpp_runtime_class_init_0(this);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v46 - itema) * (float)(v46 - itema))
                 + (float)((float)((float)(v45 - v53) * (float)(v45 - v53))
                         + (float)((float)(v44 - v52) * (float)(v44 - v52)))) <= PieceDeltaSqrSize )
        return;
      if ( !v29 )
        goto LABEL_114;
      items = v29->fields._items;
      v56 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v116.fields.x = v45;
        v116.fields.y = v44;
        v116.fields.z = v46;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v116,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = (float *)((char *)items + 12 * size);
        v29->fields._size = size + 1;
        v58[8] = v45;
        v58[9] = v44;
        v58[10] = v46;
      }
      v59 = v29->fields._items;
      v60 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !v59 )
        goto LABEL_114;
      v61 = v29->fields._size;
      if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
      {
        v117.fields.x = v49;
        v117.fields.y = v48;
        v117.fields.z = v50;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v117,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = (float *)((char *)v59 + 12 * v61);
        v29->fields._size = v61 + 1;
        v62[8] = v49;
        v62[9] = v48;
        v62[10] = v50;
      }
      v63 = v29->fields._items;
      v64 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v29->fields._version;
      if ( !v63 )
        goto LABEL_114;
      v65 = v29->fields._size;
      if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
      {
        v118.fields.z = itema;
        v118.fields.x = v53;
        v118.fields.y = v52;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v118,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = (float *)((char *)v63 + 12 * v65);
        v29->fields._size = v65 + 1;
        v66[8] = v53;
        v66[9] = v52;
        v66[10] = itema;
      }
      if ( !v30 )
        goto LABEL_114;
      v67 = v30->fields._items;
      v68 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v67 )
        goto LABEL_114;
      v69 = v30->fields._size;
      if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v112,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v69 + 1;
        v67->m_Items[v69] = v112;
      }
      v70 = v30->fields._items;
      v71 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v70 )
        goto LABEL_114;
      v72 = v30->fields._size;
      if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v111,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v72 + 1;
        v70->m_Items[v72] = v111;
      }
      v73 = v30->fields._items;
      v74 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v73 )
        goto LABEL_114;
      v75 = v30->fields._size;
      if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v110,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v75 + 1;
        v73->m_Items[v75] = v110;
      }
      if ( !v31 )
        goto LABEL_114;
      v76 = v31->fields._items;
      v77 = Method_System_Collections_Generic_List_int__Add__;
      ++v31->fields._version;
      if ( !v76 )
        goto LABEL_114;
      v78 = v31->fields._size;
      if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v32,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        v76 = v31->fields._items;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v76 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v78 + 1;
        v76->m_Items[v78] = v32;
        ++v31->fields._version;
      }
      v79 = v31->fields._size;
      v80 = v32 + 1;
      if ( (unsigned int)v79 >= LODWORD(v76->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v80,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        v76 = v31->fields._items;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v76 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v79 + 1;
        v76->m_Items[v79] = v80;
        ++v31->fields._version;
      }
      v81 = v31->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v32 + 2);
      if ( (unsigned int)v81 >= LODWORD(v76->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          (int32_t)target,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v31->fields._size = v81 + 1;
        v76->m_Items[v81] = (int)target;
      }
      v32 += 3;
    }
  }
  if ( !v29 )
LABEL_114:
    sub_1C93D2C(this, target);
  if ( v29->fields._size < 4 )
    return;
  v82 = (UnityEngine_GameObject_o *)sub_1C93D20(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v82, (System_String_o *)StringLiteral_22975/*"piece"*/, 0);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  m_CachedPtr = this->fields.m_CachedPtr;
  v90 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v82,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v92 + 32) = v82;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v92 + 32), (int32_t)v82, v83, v84, v85, v86, v87, v88);
  }
  if ( !v82 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v82, isActive, 0);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v108, 0);
  GameObjectExtensions__SetParent(v82, parent, 0);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v108, 0);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  UnityEngine_GameObject__set_layer(v82, layer, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v82,
                                (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  UnityEngine_GameObject__AddComponent_object_(
    v82,
    (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v82,
                                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0);
  if ( !this )
    goto LABEL_114;
  v119.fields.x = v109->fields.pieceScale;
  v119.fields.y = v119.fields.x;
  v119.fields.z = v119.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v119, 0);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v29, 0);
  UnityEngine_Mesh__SetUVs(mesh, 0, v30, 0);
  UnityEngine_Mesh__SetTriangles(mesh, v31, 0, 0);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0);
  v98 = FGOMeshExploder__CalculateMeshTangents(v96, v29, v30, normals, v31, v97);
  UnityEngine_Mesh__set_tangents(mesh, v98, 0);
  v99 = UnityEngine_GameObject__AddComponent_object_(
          v82,
          (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0, 0) )
  {
    v100 = UnityEngine_Random__Range(v109->fields.minBrokenSpeed, v109->fields.maxBrokenSpeed, 0);
    v101 = UnityEngine_Random__Range(v109->fields.minBrokenSpeed, v109->fields.maxBrokenSpeed, 0);
    if ( !v99 )
      goto LABEL_114;
    v120.fields.z = v101 * 0.5;
    v120.fields.x = v100 * 0.5;
    v120.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v99, v120, 0);
    v121.fields.x = v109->fields.angularVelocity.fields.x * 0.5;
    v121.fields.y = v109->fields.angularVelocity.fields.y * 0.5;
    v121.fields.z = v109->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v99, v121, 0);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v99, v109->fields.mass, 0);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v99, v109->fields.useGravity, 0);
  }
  v102 = UnityEngine_GameObject__AddComponent_object_(
           v82,
           (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v102, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v102 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v102, mesh, 0);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v102, 1, 0);
  }
  v103 = UnityEngine_GameObject__AddComponent_object_(
           v82,
           (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v103 )
    {
      *(float *)&v103[2].klass = v109->fields.fadeTime;
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
  FGOMeshExploder__Explode_40969728(this, gameObject, v4);
}


void FGOMeshExploder__Explode_40969728(
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
  if ( (byte_4D2F76E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (FGOMeshExploder_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F76E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)target, 0);
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
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v8,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v8.fields._current )
          sub_1C93D2C(0, v6);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v8,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1C93D2C(this, target);
  }
}


System_Collections_IEnumerator_o *FGOMeshExploder__PreCreatePiece(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F76D & 1) == 0 )
  {
    sub_1C93AD4(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
    byte_4D2F76D = 1;
  }
  v3 = sub_1C93D20(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  FGOMeshExploder__PreCreatePiece_d__16_o *v8; // x19
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  GrandQuestFolderBoardItem_o *v11; // x19
  int i_5__7; // w8
  UnityEngine_Mesh_o *v14; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Vector3_array *normals; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Int32_array *triangles; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  UnityEngine_Vector2_array *uv; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int v43; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v47; // x12
  unsigned int v48; // w13
  __int64 v49; // x11
  __int64 v50; // x14
  unsigned int v51; // w12
  __int64 v52; // x10
  char *v53; // x9
  char *v54; // x11
  char *v55; // x8
  float v56; // s11
  float32x2_t v57; // d8
  float v58; // s14
  float32x2_t v59; // d13
  float v60; // s10
  float32x2_t v61; // d9
  float32x2_t v62; // d1
  unsigned __int64 v63; // d1
  UnityEngine_Transform_o *transform; // x24
  int32_t v65; // w23
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int v72; // w9
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v74; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v75; // [xsp+10h] [xbp-B0h]
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Vector3_o position; // 0:s4.4,4:s5.4,8:s6.4

  v8 = this;
  if ( (byte_4D2F773 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    byte_4D2F773 = 1;
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
    v14 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v14, 0);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v14, 0);
          if ( v14 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v14, 0);
            v8->fields._vertices_5__2 = vertices;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v8->fields._vertices_5__2,
              (int32_t)vertices,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21);
            normals = UnityEngine_Mesh__get_normals(v14, 0);
            v8->fields._normals_5__3 = normals;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v8->fields._normals_5__3,
              (int32_t)normals,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
            triangles = UnityEngine_Mesh__get_triangles(v14, 0);
            v8->fields._triangles_5__4 = triangles;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v8->fields._triangles_5__4,
              (int32_t)triangles,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            uv = UnityEngine_Mesh__get_uv(v14, 0);
            v8->fields._uvs_5__5 = uv;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._uvs_5__5, (int32_t)uv, v37, v38, v39, v40, v41, v42);
            *(_QWORD *)&v8->fields._yield_trianble_count_5__6 = 0;
            if ( v8->fields._triangles_5__4 )
            {
              i_5__7 = 0;
              v8->fields._tris_5__8 = v8->fields._triangles_5__4->max_length;
LABEL_16:
              while ( i_5__7 < v8->fields._tris_5__8 )
              {
                if ( !_4__this )
                  goto LABEL_45;
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_72079620(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0);
                v43 = (int)this;
                if ( !byte_4D2F7B8 )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                  byte_4D2F7B8 = 1;
                }
                normals_5__3 = v8->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                max_length = normals_5__3->max_length;
                if ( max_length )
                {
                  triangles_5__4 = v8->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v47 = v8->fields._i_5__7;
                  v48 = triangles_5__4->max_length;
                  if ( (unsigned int)v47 >= v48
                    || (v49 = triangles_5__4->m_Items[v47], (unsigned int)v49 >= (unsigned int)max_length)
                    || (int)v47 + 1 >= v48
                    || (v50 = triangles_5__4->m_Items[(int)v47 + 1], (unsigned int)v50 >= (unsigned int)max_length)
                    || (v51 = v47 + 2, v51 >= v48)
                    || (v52 = triangles_5__4->m_Items[v51], (unsigned int)v52 >= (unsigned int)max_length) )
                  {
                    sub_1C93D34(this);
                  }
                  v53 = (char *)normals_5__3 + 12 * v49;
                  v54 = (char *)normals_5__3 + 12 * v50;
                  v55 = (char *)normals_5__3 + 12 * v52;
                  v56 = *((float *)v53 + 8);
                  v57.n64_u64[0] = *(unsigned __int64 *)(v53 + 36);
                  v58 = *((float *)v54 + 8);
                  v59.n64_u64[0] = *(unsigned __int64 *)(v54 + 36);
                  v60 = *((float *)v55 + 8);
                  v61.n64_u64[0] = *(unsigned __int64 *)(v55 + 36);
                  if ( !byte_4D2A13C )
                  {
                    sub_1C93AD4(&System_Math_TypeInfo);
                    byte_4D2A13C = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v62.n64_u64[0] = vadd_f32(vadd_f32(v57, v59), v61).n64_u64[0];
                  v63 = vmul_f32(v62, v62).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v63 + 1)
                       + (float)((float)((float)((float)(v56 + v58) + v60) * (float)((float)(v56 + v58) + v60))
                               + *(float *)&v63)) <= 0.00001
                    && !byte_4D2A139 )
                  {
                    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                    byte_4D2A139 = 1;
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
                v65 = 3 * v43;
                position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  rotation,
                  position,
                  v74,
                  v8->fields._i_5__7,
                  v8->fields._triangles_5__4,
                  v8->fields._vertices_5__2,
                  v8->fields._uvs_5__5,
                  v65,
                  _4__this->fields.exploded,
                  v75);
                v72 = v8->fields._yield_trianble_count_5__6 + v65;
                i_5__7 = v8->fields._i_5__7 + v65;
                v8->fields._yield_trianble_count_5__6 = v72;
                v8->fields._i_5__7 = i_5__7;
                if ( v72 >= 2001 && !_4__this->fields.exploded )
                {
                  v8->fields.__2__current = 0;
                  p__2__current = &v8->fields.__2__current;
                  *((_DWORD *)p__2__current + 12) = 0;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v66, v67, v68, v69, v70, v71);
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
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_45:
    sub_1C93D2C(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v8->fields.__2__current = 0;
    v11 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(v11, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(v11[-1].fields._ClosedMessage_k__BackingField) = 1;
    return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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