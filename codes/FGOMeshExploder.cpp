void FGOMeshExploder___cctor(const MethodInfo *method)
{
  if ( (byte_59373D6 & 1) == 0 )
  {
    sub_21FFC50(&FGOMeshExploder_TypeInfo);
    byte_59373D6 = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  int v3; // w9
  System_Collections_Generic_List_GameObject__c *v4; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v6; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59373D5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_59373D5 = 1;
  }
  v3 = (unsigned __int8)byte_5931940;
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v4 = System_Collections_Generic_List_GameObject__TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v6;
  this->fields.angularVelocity.fields.z = z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_E94AE0;
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v4);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pieces, (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  int32_t v10; // w24
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w27
  __int64 v14; // x24
  __int64 v15; // x23
  int32_t Item; // w19
  int32_t v17; // w0
  int32_t v18; // w27
  int32_t v19; // w29
  int32_t v20; // w28
  float x; // s9
  float z; // s10
  float v23; // s11
  float v24; // s15
  UnityEngine_Vector2_o v25; // kr00_8
  UnityEngine_Vector2_o v26; // kr08_8
  UnityEngine_Vector2_o v27; // kr10_8
  float v28; // s2
  float v29; // s3
  float *v30; // x9
  float v31; // s0
  float v32; // s17
  float v33; // s18
  float v34; // s19
  float v35; // s21
  float v36; // s22
  float *v37; // x10
  float v38; // s20
  float v39; // s21
  float *v40; // x11
  float v41; // s17
  float v42; // s18
  float *v43; // x8
  float v44; // s5
  float v45; // s1
  float v46; // s2
  float v47; // s0
  float v48; // s4
  float v49; // s5
  float *v50; // x8
  float v51; // s3
  float v52; // s4
  float *v53; // x8
  float v54; // s1
  float v55; // s2
  unsigned __int64 v56; // x19
  float *v57; // x20
  float *v58; // x23
  float *i; // x24
  float v60; // s1
  float v61; // s0
  float v62; // s1
  float v63; // s2
  float v64; // s4
  float v65; // s5
  float v66; // t1
  float v67; // s0
  FGOMeshExploder_o *v69; // [xsp+8h] [xbp-108h]
  __int64 v70; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_Vector3__o *v71; // [xsp+18h] [xbp-F8h]
  int32_t v72; // [xsp+24h] [xbp-ECh]
  System_Collections_Generic_List_Vector3__o *v73; // [xsp+28h] [xbp-E8h]
  float v75; // [xsp+3Ch] [xbp-D4h]
  float v76; // [xsp+40h] [xbp-D0h]
  float v77; // [xsp+44h] [xbp-CCh]
  float v78; // [xsp+48h] [xbp-C8h]
  float y; // [xsp+4Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+50h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+60h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59373D4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    this = (FGOMeshExploder_o *)sub_21FFC50(&UnityEngine_Vector4___TypeInfo);
    byte_59373D4 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0;
  if ( !triangles )
    goto LABEL_32;
  v71 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v73 = vertices;
  v10 = triangles->fields._size;
  v11 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v12 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v70 = size;
  this = (FGOMeshExploder_o *)sub_21FFD10(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v72 = v10;
  v69 = this;
  if ( v10 >= 1 )
  {
    v13 = 0;
    v14 = v11 + 32;
    v15 = v12 + 32;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v13,
               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      v17 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v13 + 1,
              (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      v18 = v13 + 2;
      v19 = v17;
      v20 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v18,
              (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      v82 = System_Collections_Generic_List_Vector3___get_Item(
              v73,
              Item,
              (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v82.fields.x;
      y = v82.fields.y;
      z = v82.fields.z;
      v83 = System_Collections_Generic_List_Vector3___get_Item(
              v73,
              v19,
              (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v77 = v83.fields.x;
      v78 = v83.fields.y;
      v76 = v83.fields.z;
      v84 = System_Collections_Generic_List_Vector3___get_Item(
              v73,
              v20,
              (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v75 = v84.fields.z;
      if ( !uvs )
        break;
      v23 = v84.fields.x;
      v24 = v84.fields.y;
      v25 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v26 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v19,
              (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v27 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v20,
              (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v11 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v11 + 24) )
        goto LABEL_31;
      v28 = v26.fields.x - v25.fields.x;
      v29 = v27.fields.x - v25.fields.x;
      v30 = (float *)(v14 + 12LL * Item);
      v31 = 1.0
          / (float)((float)((float)(v26.fields.x - v25.fields.x) * (float)(v27.fields.y - v25.fields.y))
                  - (float)((float)(v26.fields.y - v25.fields.y) * (float)(v27.fields.x - v25.fields.x)));
      v32 = (float)((float)((float)(v77 - x) * (float)(v27.fields.y - v25.fields.y))
                  - (float)((float)(v23 - x) * (float)(v26.fields.y - v25.fields.y)))
          * v31;
      v33 = (float)((float)((float)(v78 - y) * (float)(v27.fields.y - v25.fields.y))
                  - (float)((float)(v24 - y) * (float)(v26.fields.y - v25.fields.y)))
          * v31;
      v34 = (float)((float)((float)(v76 - z) * (float)(v27.fields.y - v25.fields.y))
                  - (float)((float)(v75 - z) * (float)(v26.fields.y - v25.fields.y)))
          * v31;
      v35 = v33 + v30[1];
      v36 = v34 + v30[2];
      *v30 = v32 + *v30;
      v30[1] = v35;
      v30[2] = v36;
      if ( (unsigned int)v19 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_31;
      v37 = (float *)(v14 + 12LL * v19);
      v38 = v32 + *v37;
      v39 = v33 + v37[1];
      v37[2] = v34 + v37[2];
      *v37 = v38;
      v37[1] = v39;
      if ( (unsigned int)v20 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_31;
      v40 = (float *)(v14 + 12LL * v20);
      v41 = v32 + *v40;
      v42 = v33 + v40[1];
      v40[2] = v34 + v40[2];
      *v40 = v41;
      v40[1] = v42;
      if ( !v12 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v43 = (float *)(v15 + 12LL * Item);
      v44 = (float)((float)(v75 - z) * v28) - (float)((float)(v76 - z) * v29);
      v45 = (float)((float)((float)(v23 - x) * v28) - (float)((float)(v77 - x) * v29)) * v31;
      v46 = (float)((float)((float)(v24 - y) * v28) - (float)((float)(v78 - y) * v29)) * v31;
      v47 = v44 * v31;
      v48 = v46 + v43[1];
      v49 = v47 + v43[2];
      *v43 = v45 + *v43;
      v43[1] = v48;
      v43[2] = v49;
      if ( (unsigned int)v19 >= *(_DWORD *)(v12 + 24)
        || (v50 = (float *)(v15 + 12LL * v19),
            v51 = v45 + *v50,
            v52 = v46 + v50[1],
            v50[2] = v47 + v50[2],
            *v50 = v51,
            v50[1] = v52,
            (unsigned int)v20 >= *(_DWORD *)(v12 + 24)) )
      {
LABEL_31:
        sub_21FFED4(this);
      }
      v53 = (float *)(v15 + 12LL * v20);
      v13 = v18 + 1;
      v54 = v45 + *v53;
      v55 = v46 + v53[1];
      v53[2] = v47 + v53[2];
      *v53 = v54;
      v53[1] = v55;
      if ( v13 >= v72 )
        goto LABEL_17;
    }
LABEL_32:
    sub_21FFECC(this, vertices);
  }
LABEL_17:
  if ( (int)v70 >= 1 )
  {
    if ( normals )
    {
      v56 = 0;
      v57 = (float *)(v11 + 40);
      v58 = (float *)(v12 + 40);
      for ( i = &v69->fields.angularVelocity.fields.y; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v71,
                   v56,
                   (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v11 )
          break;
        if ( v56 >= *(unsigned int *)(v11 + 24) )
          goto LABEL_31;
        v60 = *v57;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v57 - 1);
        tangent.fields.z = v60;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0);
        if ( !v69 )
          break;
        if ( v56 >= LODWORD(v69->fields.m_CancellationTokenSource) )
          goto LABEL_31;
        v61 = tangent.fields.x;
        *(i - 3) = tangent.fields.x;
        v62 = tangent.fields.y;
        *(i - 2) = tangent.fields.y;
        v63 = tangent.fields.z;
        *(i - 1) = tangent.fields.z;
        if ( !v12 )
          break;
        if ( v56 >= *(unsigned int *)(v12 + 24) )
          goto LABEL_31;
        ++v56;
        v57 += 3;
        v64 = *(v58 - 2);
        v65 = *(v58 - 1);
        v66 = *v58;
        v58 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * v62) - (float)(normal.fields.y * v61)) * v66)
                   + (float)((float)((float)((float)(normal.fields.y * v63) - (float)(normal.fields.z * v62)) * v64)
                           + (float)((float)((float)(normal.fields.z * v61) - (float)(normal.fields.x * v63)) * v65))) >= 0.0 )
          v67 = 1.0;
        else
          v67 = -1.0;
        *i = v67;
        if ( v70 == v56 )
          return (UnityEngine_Vector4_array *)v69;
      }
    }
    goto LABEL_32;
  }
  return (UnityEngine_Vector4_array *)v69;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *charaMesh; // x27
  UnityEngine_Renderer_o *v22; // x21
  FGOMeshExploder_o *v23; // x27
  FGOMeshExploder_o *v24; // x28
  System_Array_o *v25; // x19
  System_Array_o *materials; // x28
  System_Array_o *v27; // x28
  FGOMeshExploder_o *v28; // x27
  System_Array_o *v29; // x19
  System_Array_o *v30; // x27
  System_Collections_Generic_List_Vector3__o *v31; // x27
  System_Collections_Generic_List_Vector2__o *v32; // x28
  System_Collections_Generic_List_int__o *v33; // x29
  __int64 v34; // x2
  int32_t v35; // w21
  int i; // w26
  unsigned int max_length; // w11
  unsigned int v38; // w8
  int v39; // w10
  unsigned int v40; // w12
  __int64 v41; // x8
  unsigned int v42; // w9
  __int64 v43; // x9
  __int64 v44; // x10
  unsigned int v45; // w11
  float *v46; // x13
  float *v47; // x11
  float *v48; // x12
  float v49; // s14
  float v50; // s15
  float v51; // s12
  float v52; // s13
  float v53; // s11
  float v54; // s8
  float v55; // s9
  float v56; // s10
  float PieceDeltaSqrSize; // s0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v59; // x9
  int32_t size; // w10
  float *v61; // x8
  struct UnityEngine_Vector3_array *v62; // x8
  _QWORD *v63; // x9
  int32_t v64; // w10
  float *v65; // x8
  struct UnityEngine_Vector3_array *v66; // x8
  _QWORD *v67; // x9
  int32_t v68; // w10
  float *v69; // x8
  struct UnityEngine_Vector2_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  struct UnityEngine_Vector2_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  struct UnityEngine_Vector2_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  struct System_Int32_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x10
  int32_t v83; // w1
  __int64 v84; // x10
  UnityEngine_GameObject_o *v85; // x21
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v93; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v95; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v99; // x0
  const MethodInfo *v100; // x5
  UnityEngine_Vector4_array *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  Il2CppObject *v104; // x22
  float v105; // s8
  float v106; // s0
  unsigned __int64 v107; // d0 OVERLAPPED
  float v108; // s2
  int v109; // s1
  __int64 v110; // x1
  __int64 v111; // x2
  Il2CppObject *v112; // x22
  __int64 v113; // x1
  __int64 v114; // x2
  Il2CppObject *v115; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  bool v120; // [xsp+3Ch] [xbp-D4h]
  float32x2_t *v121; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v122; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v123; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v124; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_59373D3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_21FFC50(&FGOMeshExploder_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_21FFC50(&UnityEngine_Material___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (FGOMeshExploder_o *)sub_21FFC50(&StringLiteral_23817/*"piece"*/);
    byte_59373D3 = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v22 = (UnityEngine_Renderer_o *)Component_object;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0, 0);
  v121 = (float32x2_t *)v17;
  v120 = isActive;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_114;
    v23 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0);
    if ( !this )
      goto LABEL_114;
    if ( !v22 )
      goto LABEL_114;
    v24 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v22, 0);
    if ( !this )
      goto LABEL_114;
    v25 = (System_Array_o *)sub_21FFD10(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v24->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_77082092(materials, v25, (int32_t)this->fields.m_CancellationTokenSource, 0);
    v27 = (System_Array_o *)UnityEngine_Renderer__get_materials(v22, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0);
    if ( !this )
      goto LABEL_114;
    v28 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v22, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v25;
    System_Array__Copy_77078136(
      v27,
      0,
      v25,
      (int32_t)v28->fields.m_CancellationTokenSource,
      (int32_t)this->fields.m_CancellationTokenSource,
      0);
  }
  else
  {
    if ( !v22 )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v22, 0);
    if ( !this )
      goto LABEL_114;
    v29 = (System_Array_o *)sub_21FFD10(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v30 = (System_Array_o *)UnityEngine_Renderer__get_materials(v22, 0);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v22, 0);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v29;
    System_Array__Copy_77082092(v30, v29, (int32_t)this->fields.m_CancellationTokenSource, 0);
  }
  v31 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v31,
    (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v32 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v32,
    (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v33 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  if ( vtxCount >= 3 )
  {
    if ( !tri )
      goto LABEL_114;
    v35 = 0;
    for ( i = vtxCount / 3; i; --i )
    {
      max_length = tri->max_length;
      v38 = index + v35;
      v39 = index + v35 + 2;
      if ( v39 >= (int)max_length )
        break;
      if ( v38 >= max_length )
        goto LABEL_115;
      if ( !Vtx )
        goto LABEL_114;
      v40 = Vtx->max_length;
      v41 = tri->m_Items[v38];
      if ( (unsigned int)v41 >= v40 )
        goto LABEL_115;
      v42 = index + v35 + 1;
      if ( v42 >= max_length )
        goto LABEL_115;
      v43 = tri->m_Items[v42];
      if ( (unsigned int)v43 >= v40 )
        goto LABEL_115;
      if ( v39 >= max_length )
        goto LABEL_115;
      v44 = tri->m_Items[v39];
      if ( (unsigned int)v44 >= v40 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v45 = UVs->max_length;
      if ( (unsigned int)v41 >= v45 || (unsigned int)v43 >= v45 || (unsigned int)v44 >= v45 )
LABEL_115:
        sub_21FFED4(this);
      v46 = (float *)((char *)Vtx + 12 * (int)v44);
      this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      v47 = (float *)((char *)Vtx + 12 * (int)v41);
      v48 = (float *)((char *)Vtx + 12 * (int)v43);
      v49 = v46[8];
      v50 = v46[10];
      v52 = v47[8];
      v51 = v47[9];
      v53 = v47[10];
      v55 = v48[8];
      v54 = v48[9];
      v56 = v48[10];
      itema = v46[9];
      v124 = UVs->m_Items[v41];
      v123 = UVs->m_Items[v43];
      v122 = UVs->m_Items[v44];
      if ( !*(&FGOMeshExploder_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo, target, v34);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v53 - v56) * (float)(v53 - v56))
                 + (float)((float)((float)(v52 - v55) * (float)(v52 - v55))
                         + (float)((float)(v51 - v54) * (float)(v51 - v54)))) <= PieceDeltaSqrSize )
        return;
      if ( !HIDWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this, target, v34);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v56 - v50) * (float)(v56 - v50))
                 + (float)((float)((float)(v55 - v49) * (float)(v55 - v49))
                         + (float)((float)(v54 - itema) * (float)(v54 - itema)))) <= PieceDeltaSqrSize )
        return;
      if ( !HIDWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this, target, v34);
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v53 - v50) * (float)(v53 - v50))
                 + (float)((float)((float)(v52 - v49) * (float)(v52 - v49))
                         + (float)((float)(v51 - itema) * (float)(v51 - itema)))) <= PieceDeltaSqrSize )
        return;
      if ( !v31 )
        goto LABEL_114;
      items = v31->fields._items;
      v59 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_114;
      size = v31->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v128.fields.x = v52;
        v128.fields.y = v51;
        v128.fields.z = v53;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v31,
          v128,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = (float *)((char *)items + 12 * size);
        v31->fields._size = size + 1;
        v61[8] = v52;
        v61[9] = v51;
        v61[10] = v53;
      }
      v62 = v31->fields._items;
      v63 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v31->fields._version;
      if ( !v62 )
        goto LABEL_114;
      v64 = v31->fields._size;
      if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
      {
        v129.fields.x = v55;
        v129.fields.y = v54;
        v129.fields.z = v56;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v31,
          v129,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = (float *)((char *)v62 + 12 * v64);
        v31->fields._size = v64 + 1;
        v65[8] = v55;
        v65[9] = v54;
        v65[10] = v56;
      }
      v66 = v31->fields._items;
      v67 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++v31->fields._version;
      if ( !v66 )
        goto LABEL_114;
      v68 = v31->fields._size;
      if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
      {
        v130.fields.x = v49;
        v130.fields.z = v50;
        v130.fields.y = itema;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v31,
          v130,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = (float *)((char *)v66 + 12 * v68);
        v31->fields._size = v68 + 1;
        v69[8] = v49;
        v69[9] = itema;
        v69[10] = v50;
      }
      if ( !v32 )
        goto LABEL_114;
      v70 = v32->fields._items;
      v71 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v32->fields._version;
      if ( !v70 )
        goto LABEL_114;
      v72 = v32->fields._size;
      if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v32,
          v124,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v32->fields._size = v72 + 1;
        v70->m_Items[v72] = v124;
      }
      v73 = v32->fields._items;
      v74 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v32->fields._version;
      if ( !v73 )
        goto LABEL_114;
      v75 = v32->fields._size;
      if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v32,
          v123,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v32->fields._size = v75 + 1;
        v73->m_Items[v75] = v123;
      }
      v76 = v32->fields._items;
      v77 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v32->fields._version;
      if ( !v76 )
        goto LABEL_114;
      v78 = v32->fields._size;
      if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v32,
          v122,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v32->fields._size = v78 + 1;
        v76->m_Items[v78] = v122;
      }
      if ( !v33 )
        goto LABEL_114;
      v79 = v33->fields._items;
      v80 = Method_System_Collections_Generic_List_int__Add__;
      ++v33->fields._version;
      if ( !v79 )
        goto LABEL_114;
      v81 = v33->fields._size;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v33,
          v35,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        v79 = v33->fields._items;
        v80 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !v79 )
          goto LABEL_114;
      }
      else
      {
        v33->fields._size = v81 + 1;
        v79->m_Items[v81] = v35;
        ++v33->fields._version;
      }
      v82 = v33->fields._size;
      v83 = v35 + 1;
      if ( (unsigned int)v82 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v33,
          v83,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        v79 = v33->fields._items;
        v80 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !v79 )
          goto LABEL_114;
      }
      else
      {
        v33->fields._size = v82 + 1;
        v79->m_Items[v82] = v83;
        ++v33->fields._version;
      }
      v84 = v33->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v35 + 2);
      if ( (unsigned int)v84 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v33,
          (int32_t)target,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v33->fields._size = v84 + 1;
        v79->m_Items[v84] = (int)target;
      }
      v35 += 3;
    }
  }
  if ( !v31 )
LABEL_114:
    sub_21FFECC(this, target);
  if ( v31->fields._size < 4 )
    return;
  v85 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v85, (System_String_o *)StringLiteral_23817/*"piece"*/, 0);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  m_CachedPtr = this->fields.m_CachedPtr;
  v93 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v85,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v95 + 32) = v85;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v95 + 32), (int32_t)v85, v86, v87, v88, v89, v90, v91);
  }
  if ( !v85 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v85, v120, 0);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v16, 0);
  GameObjectExtensions__SetParent(v85, parent, 0);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject(v16, 0);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  UnityEngine_GameObject__set_layer(v85, layer, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v85,
                                (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  UnityEngine_GameObject__AddComponent_object_(
    v85,
    (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v85,
                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v85, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v85, 0);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v85, 0);
  if ( !this )
    goto LABEL_114;
  LODWORD(v131.fields.x) = v121[8].n64_u32[1];
  v131.fields.y = v131.fields.x;
  v131.fields.z = v131.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v131, 0);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v31, 0);
  UnityEngine_Mesh__SetUVs(mesh, 0, v32, 0);
  UnityEngine_Mesh__SetTriangles(mesh, v33, 0, 0);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0);
  v101 = FGOMeshExploder__CalculateMeshTangents(v99, v31, v32, normals, v33, v100);
  UnityEngine_Mesh__set_tangents(mesh, v101, 0);
  v104 = UnityEngine_GameObject__AddComponent_object_(
           v85,
           (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102, v103);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v104, 0, 0) )
  {
    v105 = UnityEngine_Random__Range(v121[7].n64_f32[1], v121[8].n64_f32[0], 0);
    v106 = UnityEngine_Random__Range(v121[7].n64_f32[1], v121[8].n64_f32[0], 0);
    if ( !v104 )
      goto LABEL_114;
    v132.fields.y = 0.0;
    v132.fields.z = v106 * 0.5;
    v132.fields.x = v105 * 0.5;
    UnityEngine_Rigidbody__set_linearVelocity((UnityEngine_Rigidbody_o *)v104, v132, 0);
    v107 = vmul_f32(v121[5], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v108 = v121[6].n64_f32[0] * 0.5;
    v109 = HIDWORD(v107);
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v104, *(UnityEngine_Vector3_o *)&v107, 0);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v104, v121[4].n64_f32[1], 0);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v104, v121[4].n64_i8[1], 0);
  }
  v112 = UnityEngine_GameObject__AddComponent_object_(
           v85,
           (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v110, v111);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v112, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v112 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v112, mesh, 0);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v112, 1, 0);
  }
  v115 = UnityEngine_GameObject__AddComponent_object_(
           v85,
           (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v113, v114);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v115, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v115 )
    {
      LODWORD(v115[2].klass) = v121[9].n64_u32[0];
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
  FGOMeshExploder__Explode_47184968(this, gameObject, v4);
}


void FGOMeshExploder__Explode_47184968(
        FGOMeshExploder_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  FGOMeshExploder_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x21
  __int64 v8; // x2
  __int64 v9; // x1
  struct System_Action_o *onBroken; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_59373D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (FGOMeshExploder_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59373D2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, v8);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)target, 0);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v11.fields._current )
          sub_21FFECC(0, v9);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_21FFECC(this, target);
  }
}


System_Collections_IEnumerator_o *FGOMeshExploder__PreCreatePiece(FGOMeshExploder_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59373D1 & 1) == 0 )
  {
    sub_21FFC50(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
    byte_59373D1 = 1;
  }
  v3 = sub_21FFEBC(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FGOMeshExploder__PreCreatePiece_d__16_o *v8; // x19
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  int v11; // w20
  UnityEngine_Mesh_o *v12; // x21
  UnityEngine_Vector3_array *vertices; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Vector3_array *normals; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Int32_array *triangles; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Vector2_array *uv; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Int32_array *v41; // x9
  int i_5__7; // w8
  __int64 v43; // x2
  int v44; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v48; // x12
  unsigned int v49; // w13
  unsigned int v50; // w11
  unsigned int v51; // w14
  unsigned int v52; // w12
  unsigned int v53; // w10
  float32x2_t *v54; // x9
  float32x2_t *v55; // x11
  float32x2_t *v56; // x8
  float32x2_t v57; // d8
  float v58; // s9
  float32x2_t v59; // d10
  float v60; // s11
  float32x2_t v61; // d13
  float v62; // s14
  float32x2_t v63; // d0
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v70; // w23
  _BOOL4 exploded; // w10
  int v72; // w9
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o v75; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v76; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v77; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_59373D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    byte_59373D7 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    i_5__7 = v8->fields._i_5__7;
    v8->fields.__1__state = -1;
LABEL_16:
    while ( i_5__7 < v8->fields._tris_5__8 )
    {
      if ( !_4__this )
        goto LABEL_49;
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_83187376(
                                                          _4__this->fields.minPieceVertex,
                                                          _4__this->fields.maxPieceVertex,
                                                          0);
      v44 = (int)this;
      if ( !byte_59373E0 )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_59373E0 = 1;
      }
      normals_5__3 = v8->fields._normals_5__3;
      if ( !normals_5__3 )
        goto LABEL_49;
      max_length = normals_5__3->max_length;
      if ( max_length )
      {
        triangles_5__4 = v8->fields._triangles_5__4;
        if ( !triangles_5__4 )
          goto LABEL_49;
        v48 = v8->fields._i_5__7;
        v49 = triangles_5__4->max_length;
        if ( (unsigned int)v48 >= v49
          || (v50 = triangles_5__4->m_Items[v48], v50 >= (unsigned int)max_length)
          || (int)v48 + 1 >= v49
          || (v51 = triangles_5__4->m_Items[(int)v48 + 1], v51 >= (unsigned int)max_length)
          || (v52 = v48 + 2, v52 >= v49)
          || (v53 = triangles_5__4->m_Items[v52], v53 >= (unsigned int)max_length) )
        {
          sub_21FFED4(this);
        }
        v54 = (float32x2_t *)((char *)normals_5__3 + 12 * (int)v50);
        v55 = (float32x2_t *)((char *)normals_5__3 + 12 * (int)v51);
        v56 = (float32x2_t *)((char *)normals_5__3 + 12 * (int)v53);
        v57.n64_u64[0] = v54[4].n64_u64[0];
        v58 = v54[5].n64_f32[0];
        v59.n64_u64[0] = v55[4].n64_u64[0];
        v60 = v55[5].n64_f32[0];
        v61.n64_u64[0] = v56[4].n64_u64[0];
        v62 = v56[5].n64_f32[0];
        if ( !byte_5931943 )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_5931943 = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v43);
        v63.n64_u64[0] = vadd_f32(vadd_f32(v57, v59), v61).n64_u64[0];
        if ( sqrtf(
               (float)((float)((float)(v58 + v60) + v62) * (float)((float)(v58 + v60) + v62))
             + vaddv_f32(vmul_f32(v63, v63))) <= 0.00001
          && byte_5931940 == 0 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
      }
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( !this )
        goto LABEL_49;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( !this )
        goto LABEL_49;
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_49;
      rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0);
      x = rotation.fields.x;
      y = rotation.fields.y;
      z = rotation.fields.z;
      w = rotation.fields.w;
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( !this )
        goto LABEL_49;
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_49;
      *(UnityEngine_Vector3_o *)&v79.fields.x = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      v77.fields.x = v79.fields.x;
      v77.fields.y = v79.fields.y;
      v70 = 3 * v44;
      v77.fields.z = v79.fields.z;
      v79.fields.x = x;
      v79.fields.y = y;
      v79.fields.z = z;
      v79.fields.w = w;
      FGOMeshExploder__CreateMeshPiece(
        _4__this,
        transform,
        v79,
        v77,
        v75,
        v8->fields._i_5__7,
        v8->fields._triangles_5__4,
        v8->fields._vertices_5__2,
        v8->fields._uvs_5__5,
        v70,
        _4__this->fields.exploded,
        v76);
      exploded = _4__this->fields.exploded;
      i_5__7 = v8->fields._i_5__7 + v70;
      v72 = v8->fields._yield_trianble_count_5__6 + v70;
      v8->fields._yield_trianble_count_5__6 = v72;
      v8->fields._i_5__7 = i_5__7;
      if ( !exploded && v72 >= 2001 )
      {
        v11 = 2;
        v8->fields._yield_trianble_count_5__6 = 0;
        goto LABEL_47;
      }
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    v12 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v12, 0);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v12, 0);
          if ( v12 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v12, 0);
            v8->fields._vertices_5__2 = vertices;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._vertices_5__2,
              (int32_t)vertices,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            normals = UnityEngine_Mesh__get_normals(v12, 0);
            v8->fields._normals_5__3 = normals;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._normals_5__3,
              (int32_t)normals,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            triangles = UnityEngine_Mesh__get_triangles(v12, 0);
            v8->fields._triangles_5__4 = triangles;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._triangles_5__4,
              (int32_t)triangles,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            uv = UnityEngine_Mesh__get_uv(v12, 0);
            v8->fields._uvs_5__5 = uv;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._uvs_5__5,
              (int32_t)uv,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            v41 = v8->fields._triangles_5__4;
            *(_QWORD *)&v8->fields._yield_trianble_count_5__6 = 0;
            if ( v41 )
            {
              i_5__7 = 0;
              v8->fields._tris_5__8 = v41->max_length;
              goto LABEL_16;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_49:
    sub_21FFECC(this, method);
  if ( !_4__this->fields.useBrokenPiece )
    return 0;
  v11 = 1;
LABEL_47:
  v8->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = v11;
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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