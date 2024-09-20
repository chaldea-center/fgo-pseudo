void __fastcall FGOMeshExploder___cctor(const MethodInfo *method)
{
  if ( (byte_4A5A02B & 1) == 0 )
  {
    sub_1B885B0(&FGOMeshExploder_TypeInfo);
    byte_4A5A02B = 1;
  }
  LODWORD(FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize) = (struct FGOMeshExploder_StaticFields)841731190;
}


void __fastcall FGOMeshExploder___ctor(FGOMeshExploder_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5A02A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5A02A = 1;
  }
  *(_WORD *)&this->fields.useBrokenPiece = 257;
  this->fields.mass = 1.0;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minPieceVertex = 0x140000000ALL;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BB4E30;
  *(_QWORD *)&this->fields.angularVelocity.fields.x = v4;
  this->fields.angularVelocity.fields.z = z;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.pieces = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.pieces, (int32_t)v6, v7, v8);
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
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s11
  float v25; // s15
  float v26; // s14
  UnityEngine_Vector2_o v27; // kr00_8
  UnityEngine_Vector2_o v28; // kr08_8
  UnityEngine_Vector2_o v29; // kr10_8
  float v30; // s5
  float v31; // s0
  float *v32; // x9
  float v33; // s1
  float v34; // s19
  float v35; // s18
  float v36; // s17
  float v37; // s21
  float v38; // s22
  float *v39; // x10
  float v40; // s21
  float v41; // s22
  float *v42; // x11
  float v43; // s18
  float v44; // s17
  float v45; // s3
  float *v46; // x8
  float v47; // s4
  float v48; // s0
  float v49; // s2
  float v50; // s1
  float v51; // s4
  float v52; // s5
  float *v53; // x8
  float v54; // s4
  float v55; // s5
  float *v56; // x8
  float v57; // s2
  float v58; // s1
  unsigned __int64 v59; // x19
  float *v60; // x20
  float *v61; // x23
  float *i; // x24
  float v63; // s1
  float v64; // s4
  float v65; // s5
  float v66; // t1
  float v67; // s0
  UnityEngine_Vector4_array *v69; // [xsp+0h] [xbp-F0h]
  __int64 v70; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Vector3__o *v71; // [xsp+10h] [xbp-E0h]
  int32_t v72; // [xsp+18h] [xbp-D8h]
  float v73; // [xsp+1Ch] [xbp-D4h]
  float v74; // [xsp+20h] [xbp-D0h]
  float v75; // [xsp+24h] [xbp-CCh]
  float z; // [xsp+28h] [xbp-C8h]
  float y; // [xsp+2Ch] [xbp-C4h]
  UnityEngine_Vector3_o tangent; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o normal; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5A029 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    this = (FGOMeshExploder_o *)sub_1B885B0(&UnityEngine_Vector4___TypeInfo);
    byte_4A5A029 = 1;
  }
  normal.fields.z = 0.0;
  *(_QWORD *)&normal.fields.x = 0LL;
  tangent.fields.z = 0.0;
  *(_QWORD *)&tangent.fields.x = 0LL;
  if ( !triangles )
    goto LABEL_32;
  v71 = normals;
  if ( !vertices )
    goto LABEL_32;
  size = (unsigned int)vertices->fields._size;
  v11 = triangles->fields._size;
  v12 = sub_1B88658(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v13 = sub_1B88658(UnityEngine_Vector3___TypeInfo, (unsigned int)size);
  v70 = size;
  this = (FGOMeshExploder_o *)sub_1B88658(UnityEngine_Vector4___TypeInfo, (unsigned int)size);
  v72 = v11;
  v69 = (UnityEngine_Vector4_array *)this;
  if ( v11 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               triangles,
               v14,
               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      v16 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v14 + 1,
              (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      v17 = v14 + 2;
      v18 = v16;
      v19 = System_Collections_Generic_List_int___get_Item(
              triangles,
              v17,
              (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      v80 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              Item,
              (const MethodInfo_3553860 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      x = v80.fields.x;
      z = v80.fields.z;
      y = v80.fields.y;
      v81 = System_Collections_Generic_List_Vector3___get_Item(
              vertices,
              v18,
              (const MethodInfo_3553860 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      v73 = v81.fields.x;
      v74 = v81.fields.z;
      v75 = v81.fields.y;
      *(UnityEngine_Vector3_o *)&v21 = System_Collections_Generic_List_Vector3___get_Item(
                                         vertices,
                                         v19,
                                         (const MethodInfo_3553860 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
      if ( !uvs )
        break;
      v24 = v21;
      v25 = v22;
      v26 = v23;
      v27 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              Item,
              (const MethodInfo_3550FB4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v28 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v18,
              (const MethodInfo_3550FB4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      v29 = System_Collections_Generic_List_Vector2___get_Item(
              uvs,
              v19,
              (const MethodInfo_3550FB4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
      if ( !v12 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v30 = v28.fields.x - v27.fields.x;
      v31 = v29.fields.x - v27.fields.x;
      v32 = (float *)(v12 + 12LL * Item);
      v33 = 1.0
          / (float)((float)((float)(v28.fields.x - v27.fields.x) * (float)(v29.fields.y - v27.fields.y))
                  - (float)((float)(v28.fields.y - v27.fields.y) * (float)(v29.fields.x - v27.fields.x)));
      v34 = (float)((float)((float)(v73 - x) * (float)(v29.fields.y - v27.fields.y))
                  - (float)((float)(v24 - x) * (float)(v28.fields.y - v27.fields.y)))
          * v33;
      v35 = (float)((float)((float)(v75 - y) * (float)(v29.fields.y - v27.fields.y))
                  - (float)((float)(v25 - y) * (float)(v28.fields.y - v27.fields.y)))
          * v33;
      v36 = (float)((float)((float)(v74 - z) * (float)(v29.fields.y - v27.fields.y))
                  - (float)((float)(v26 - z) * (float)(v28.fields.y - v27.fields.y)))
          * v33;
      v37 = v35 + v32[9];
      v38 = v36 + v32[10];
      v32[8] = v34 + v32[8];
      v32[9] = v37;
      v32[10] = v38;
      if ( (unsigned int)v18 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v39 = (float *)(v12 + 12LL * v18);
      v40 = v35 + v39[9];
      v41 = v36 + v39[10];
      v39[8] = v34 + v39[8];
      v39[9] = v40;
      v39[10] = v41;
      if ( (unsigned int)v19 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_31;
      v42 = (float *)(v12 + 12LL * v19);
      v43 = v35 + v42[9];
      v44 = v36 + v42[10];
      v42[8] = v34 + v42[8];
      v42[9] = v43;
      v42[10] = v44;
      if ( !v13 )
        break;
      if ( (unsigned int)Item >= *(_DWORD *)(v13 + 24) )
        goto LABEL_31;
      v45 = (float)(v75 - y) * v31;
      v46 = (float *)(v13 + 12LL * Item);
      v47 = (float)((float)(v26 - z) * v30) - (float)((float)(v74 - z) * v31);
      v48 = (float)((float)((float)(v24 - x) * v30) - (float)((float)(v73 - x) * v31)) * v33;
      v49 = (float)((float)((float)(v25 - y) * v30) - v45) * v33;
      v50 = v47 * v33;
      v51 = v49 + v46[9];
      v52 = v50 + v46[10];
      v46[8] = v48 + v46[8];
      v46[9] = v51;
      v46[10] = v52;
      if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24)
        || (v53 = (float *)(v13 + 12LL * v18),
            v54 = v49 + v53[9],
            v55 = v50 + v53[10],
            v53[8] = v48 + v53[8],
            v53[9] = v54,
            v53[10] = v55,
            (unsigned int)v19 >= *(_DWORD *)(v13 + 24)) )
      {
LABEL_31:
        sub_1B88814(this, vertices);
      }
      v56 = (float *)(v13 + 12LL * v19);
      v14 = v17 + 1;
      v57 = v49 + v56[9];
      v58 = v50 + v56[10];
      v56[8] = v48 + v56[8];
      v56[9] = v57;
      v56[10] = v58;
      if ( v14 >= v72 )
        goto LABEL_17;
    }
LABEL_32:
    sub_1B8880C(this, vertices);
  }
LABEL_17:
  if ( (int)size >= 1 )
  {
    if ( normals )
    {
      v59 = 0LL;
      v60 = (float *)(v13 + 40);
      v61 = (float *)(v12 + 40);
      for ( i = &v69->m_Items[1].fields.x; ; i += 4 )
      {
        normal = System_Collections_Generic_List_Vector3___get_Item(
                   v71,
                   v59,
                   (const MethodInfo_3553860 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
        if ( !v12 )
          break;
        if ( v59 >= *(unsigned int *)(v12 + 24) )
          goto LABEL_31;
        v63 = *v61;
        *(_QWORD *)&tangent.fields.x = *((_QWORD *)v61 - 1);
        tangent.fields.z = v63;
        UnityEngine_Vector3__OrthoNormalize(&normal, &tangent, 0LL);
        if ( !v69 )
          break;
        if ( v59 >= v69->max_length )
          goto LABEL_31;
        *((UnityEngine_Vector3_o *)i - 1) = tangent;
        if ( !v13 )
          break;
        if ( v59 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_31;
        ++v59;
        v64 = *(v60 - 2);
        v65 = *(v60 - 1);
        v66 = *v60;
        v60 += 3;
        if ( (float)((float)((float)((float)(normal.fields.x * tangent.fields.y)
                                   - (float)(normal.fields.y * tangent.fields.x))
                           * v66)
                   + (float)((float)((float)((float)(normal.fields.y * tangent.fields.z)
                                           - (float)(normal.fields.z * tangent.fields.y))
                                   * v64)
                           + (float)((float)((float)(normal.fields.z * tangent.fields.x)
                                           - (float)(normal.fields.x * tangent.fields.z))
                                   * v65))) >= 0.0 )
          v67 = 1.0;
        else
          v67 = -1.0;
        *i = v67;
        v61 += 3;
        if ( v70 == v59 )
          return v69;
      }
    }
    goto LABEL_32;
  }
  return v69;
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
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v35; // w8
  int v36; // w10
  __int64 v37; // x8
  il2cpp_array_size_t v38; // w12
  unsigned int v39; // w9
  __int64 v40; // x9
  __int64 v41; // x10
  il2cpp_array_size_t v42; // w11
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
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v88; // x8
  UnityEngine_Component_o *parent; // x0
  int32_t layer; // w0
  UnityEngine_Mesh_o *mesh; // x20
  FGOMeshExploder_o *v92; // x0
  const MethodInfo *v93; // x5
  UnityEngine_Vector4_array *v94; // x0
  Il2CppObject *v95; // x22
  float v96; // s8
  float v97; // s0
  Il2CppObject *v98; // x22
  Il2CppObject *v99; // x20
  System_Collections_Generic_List_Vector3__o *normals; // [xsp+10h] [xbp-100h]
  UnityEngine_Material_array *value; // [xsp+18h] [xbp-F8h]
  UnityEngine_Transform_o *v104; // [xsp+40h] [xbp-D0h]
  FGOMeshExploder_o *v105; // [xsp+48h] [xbp-C8h]
  UnityEngine_Vector2_o v106; // [xsp+50h] [xbp-C0h]
  UnityEngine_Vector2_o v107; // [xsp+58h] [xbp-B8h]
  UnityEngine_Vector2_o v108; // [xsp+60h] [xbp-B0h]
  float itema; // [xsp+6Ch] [xbp-A4h]
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  v16 = (UnityEngine_Component_o *)target;
  v17 = this;
  if ( (byte_4A5A028 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&FGOMeshExploder_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1B885B0(&UnityEngine_Material___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (FGOMeshExploder_o *)sub_1B885B0(&StringLiteral_22531/*"piece"*/);
    byte_4A5A028 = 1;
  }
  if ( !v16 )
    goto LABEL_114;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v16,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
  charaMesh = (UnityEngine_Object_o *)v17->fields.charaMesh;
  v20 = (UnityEngine_Renderer_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality(charaMesh, 0LL, 0LL);
  v104 = (UnityEngine_Transform_o *)v16;
  v105 = v17;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (FGOMeshExploder_o *)v17->fields.charaMesh;
    if ( !this )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !this )
      goto LABEL_114;
    v21 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
    if ( !this )
      goto LABEL_114;
    if ( !v20 )
      goto LABEL_114;
    v22 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    if ( !this )
      goto LABEL_114;
    v23 = (System_Array_o *)sub_1B88658(
                              UnityEngine_Material___TypeInfo,
                              (unsigned int)(LODWORD(this->fields.m_CancellationTokenSource)
                                           + LODWORD(v22->fields.m_CancellationTokenSource)));
    materials = (System_Array_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0LL);
    if ( !this )
      goto LABEL_114;
    System_Array__Copy_62666388(materials, v23, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
    v25 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v21, 0LL);
    if ( !this )
      goto LABEL_114;
    v26 = this;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v23;
    System_Array__Copy_62662400(
      v25,
      0,
      v23,
      (int32_t)v26->fields.m_CancellationTokenSource,
      (int32_t)this->fields.m_CancellationTokenSource,
      0LL);
  }
  else
  {
    if ( !v20 )
      goto LABEL_114;
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    if ( !this )
      goto LABEL_114;
    v27 = (System_Array_o *)sub_1B88658(
                              UnityEngine_Material___TypeInfo,
                              LODWORD(this->fields.m_CancellationTokenSource));
    v28 = (System_Array_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    this = (FGOMeshExploder_o *)UnityEngine_Renderer__get_materials(v20, 0LL);
    if ( !this )
      goto LABEL_114;
    value = (UnityEngine_Material_array *)v27;
    System_Array__Copy_62666388(v28, v27, (int32_t)this->fields.m_CancellationTokenSource, 0LL);
  }
  v29 = (System_Collections_Generic_List_Vector3__o *)sub_1B887FC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v29,
    (const MethodInfo_35532FC *)Method_System_Collections_Generic_List_Vector3___ctor__);
  v30 = (System_Collections_Generic_List_Vector2__o *)sub_1B887FC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v30,
    (const MethodInfo_3550A50 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  normals = (System_Collections_Generic_List_Vector3__o *)sub_1B887FC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    normals,
    (const MethodInfo_35532FC *)Method_System_Collections_Generic_List_Vector3___ctor__);
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
      v37 = tri->m_Items[v35 + 1];
      v38 = Vtx->max_length;
      if ( (unsigned int)v37 >= v38 )
        goto LABEL_115;
      v39 = index + v32 + 1;
      if ( v39 >= max_length )
        goto LABEL_115;
      v40 = tri->m_Items[v39 + 1];
      if ( (unsigned int)v40 >= v38 )
        goto LABEL_115;
      if ( v36 >= max_length )
        goto LABEL_115;
      v41 = tri->m_Items[v36 + 1];
      if ( (unsigned int)v41 >= v38 )
        goto LABEL_115;
      if ( !UVs )
        goto LABEL_114;
      v42 = UVs->max_length;
      if ( (unsigned int)v37 >= v42 || (unsigned int)v40 >= v42 || (unsigned int)v41 >= v42 )
LABEL_115:
        sub_1B88814(this, target);
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
      v108 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v37].fields.y;
      v107 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v40].fields.y;
      v106 = *(UnityEngine_Vector2_o *)&UVs->m_Items[v41].fields.y;
      if ( !FGOMeshExploder_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FGOMeshExploder_TypeInfo);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
      }
      PieceDeltaSqrSize = **(float **)&this[1].fields.fadeTime;
      if ( (float)((float)((float)(v46 - v50) * (float)(v46 - v50))
                 + (float)((float)((float)(v45 - v49) * (float)(v45 - v49))
                         + (float)((float)(v44 - v48) * (float)(v44 - v48)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (FGOMeshExploder_o *)FGOMeshExploder_TypeInfo;
        PieceDeltaSqrSize = FGOMeshExploder_TypeInfo->static_fields->PieceDeltaSqrSize;
      }
      if ( (float)((float)((float)(v50 - itema) * (float)(v50 - itema))
                 + (float)((float)((float)(v49 - v53) * (float)(v49 - v53))
                         + (float)((float)(v48 - v52) * (float)(v48 - v52)))) <= PieceDeltaSqrSize )
        return;
      if ( !LODWORD(this[2].klass) )
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
      if ( (unsigned int)size >= items->max_length )
      {
        v112.fields.x = v45;
        v112.fields.y = v44;
        v112.fields.z = v46;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v112,
          *(const MethodInfo_3553B90 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
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
      if ( (unsigned int)v61 >= v59->max_length )
      {
        v113.fields.x = v49;
        v113.fields.y = v48;
        v113.fields.z = v50;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v113,
          *(const MethodInfo_3553B90 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
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
      if ( (unsigned int)v65 >= v63->max_length )
      {
        v114.fields.z = itema;
        v114.fields.x = v53;
        v114.fields.y = v52;
        System_Collections_Generic_List_Vector3___AddWithResize(
          v29,
          v114,
          *(const MethodInfo_3553B90 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
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
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v108,
          *(const MethodInfo_35512B8 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v69 + 1;
        *(UnityEngine_Vector2_o *)&v67->m_Items[v69].fields.y = v108;
      }
      v70 = v30->fields._items;
      v71 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v70 )
        goto LABEL_114;
      v72 = v30->fields._size;
      if ( (unsigned int)v72 >= v70->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v107,
          *(const MethodInfo_35512B8 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v72 + 1;
        *(UnityEngine_Vector2_o *)&v70->m_Items[v72].fields.y = v107;
      }
      v73 = v30->fields._items;
      v74 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v30->fields._version;
      if ( !v73 )
        goto LABEL_114;
      v75 = v30->fields._size;
      if ( (unsigned int)v75 >= v73->max_length )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v30,
          v106,
          *(const MethodInfo_35512B8 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v75 + 1;
        *(UnityEngine_Vector2_o *)&v73->m_Items[v75].fields.y = v106;
      }
      if ( !v31 )
        goto LABEL_114;
      v76 = v31->fields._items;
      v77 = Method_System_Collections_Generic_List_int__Add__;
      ++v31->fields._version;
      if ( !v76 )
        goto LABEL_114;
      v78 = v31->fields._size;
      if ( (unsigned int)v78 >= v76->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v32,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        v76 = v31->fields._items;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v76 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v78 + 1;
        v76->m_Items[v78 + 1] = v32;
        ++v31->fields._version;
      }
      v79 = v31->fields._size;
      v80 = v32 + 1;
      if ( (unsigned int)v79 >= v76->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          v80,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        v76 = v31->fields._items;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++v31->fields._version;
        if ( !v76 )
          goto LABEL_114;
      }
      else
      {
        v31->fields._size = v79 + 1;
        v76->m_Items[v79 + 1] = v80;
        ++v31->fields._version;
      }
      v81 = v31->fields._size;
      target = (UnityEngine_Transform_o *)(unsigned int)(v32 + 2);
      if ( (unsigned int)v81 >= v76->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v31,
          (int32_t)target,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v31->fields._size = v81 + 1;
        v76->m_Items[v81 + 1] = (int)target;
      }
      v32 += 3;
    }
  }
  if ( !v29 )
LABEL_114:
    sub_1B8880C(this, target);
  if ( v29->fields._size < 4 )
    return;
  v82 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(v82, (System_String_o *)StringLiteral_22531/*"piece"*/, 0LL);
  this = (FGOMeshExploder_o *)v17->fields.pieces;
  if ( !this )
    goto LABEL_114;
  v85 = *(_QWORD *)&this->fields.m_CachedPtr;
  v86 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v85 )
    goto LABEL_114;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v85 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v82,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v88 = v85 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v88 + 32) = v82;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)v82, v83, v84);
  }
  if ( !v82 )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(v82, isActive, 0LL);
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v104, 0LL);
  GameObjectExtensions__SetParent(v82, parent, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v104, 0LL);
  if ( !this )
    goto LABEL_114;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  UnityEngine_GameObject__set_layer(v82, layer, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__AddComponent_object_(
                                v82,
                                (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
  if ( !this )
    goto LABEL_114;
  mesh = UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0LL);
  UnityEngine_GameObject__AddComponent_object_(
    v82,
    (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__GetComponent_object_(
                                v82,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)this, value, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, pos, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)this, rot, 0LL);
  this = (FGOMeshExploder_o *)UnityEngine_GameObject__get_transform(v82, 0LL);
  if ( !this )
    goto LABEL_114;
  v115.fields.x = v105->fields.pieceScale;
  v115.fields.y = v115.fields.x;
  v115.fields.z = v115.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v115, 0LL);
  if ( !mesh )
    goto LABEL_114;
  UnityEngine_Mesh__SetVertices(mesh, v29, 0LL);
  UnityEngine_Mesh__SetUVs(mesh, 0, v30, 0LL);
  UnityEngine_Mesh__SetTriangles(mesh, v31, 0, 0LL);
  UnityEngine_Mesh__RecalculateNormals(mesh, 0LL);
  UnityEngine_Mesh__GetNormals(mesh, normals, 0LL);
  v94 = FGOMeshExploder__CalculateMeshTangents(v92, v29, v30, normals, v31, v93);
  UnityEngine_Mesh__set_tangents(mesh, v94, 0LL);
  v95 = UnityEngine_GameObject__AddComponent_object_(
          v82,
          (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v95, 0LL, 0LL) )
  {
    v96 = UnityEngine_Random__Range(v105->fields.minBrokenSpeed, v105->fields.maxBrokenSpeed, 0LL);
    v97 = UnityEngine_Random__Range(v105->fields.minBrokenSpeed, v105->fields.maxBrokenSpeed, 0LL);
    if ( !v95 )
      goto LABEL_114;
    v116.fields.z = v97 * 0.5;
    v116.fields.x = v96 * 0.5;
    v116.fields.y = 0.0;
    UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)v95, v116, 0LL);
    v117.fields.x = v105->fields.angularVelocity.fields.x * 0.5;
    v117.fields.y = v105->fields.angularVelocity.fields.y * 0.5;
    v117.fields.z = v105->fields.angularVelocity.fields.z * 0.5;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)v95, v117, 0LL);
    UnityEngine_Rigidbody__set_mass((UnityEngine_Rigidbody_o *)v95, v105->fields.mass, 0LL);
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)v95, v105->fields.useGravity, 0LL);
  }
  v98 = UnityEngine_GameObject__AddComponent_object_(
          v82,
          (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v98, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v98 )
      goto LABEL_114;
    UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)v98, mesh, 0LL);
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)v98, 1, 0LL);
  }
  v99 = UnityEngine_GameObject__AddComponent_object_(
          v82,
          (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExplodeFader___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FGOMeshExploder_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v99 )
    {
      *(float *)&v99[2].klass = v105->fields.fadeTime;
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
  FGOMeshExploder__Explode_37541132(this, gameObject, v4);
}


void __fastcall FGOMeshExploder__Explode_37541132(
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
  if ( (byte_4A5A027 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (FGOMeshExploder_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A027 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !target )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !v4->fields.useBrokenPiece )
    {
LABEL_14:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)target, 0LL);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v8,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v8,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        if ( !v8.fields._current )
          sub_1B8880C(0LL, v6);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v8,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      goto LABEL_14;
    }
LABEL_21:
    sub_1B8880C(this, target);
  }
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExploder__PreCreatePiece(
        FGOMeshExploder_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A026 & 1) == 0 )
  {
    sub_1B885B0(&FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
    byte_4A5A026 = 1;
  }
  v3 = sub_1B887FC(FGOMeshExploder__PreCreatePiece_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t _1__state; // w8
  struct FGOMeshExploder_o *_4__this; // x20
  ServantStatusBattleListViewItem_o *v7; // x19
  bool result; // w0
  int i_5__7; // w8
  UnityEngine_Mesh_o *v10; // x21
  UnityEngine_Vector3_array *vertices; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Vector3_array *normals; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Int32_array *triangles; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector2_array *uv; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w23
  struct UnityEngine_Vector3_array *normals_5__3; // x8
  __int64 v25; // x9
  struct System_Int32_array *triangles_5__4; // x10
  __int64 v27; // x12
  unsigned int max_length; // w13
  __int64 v29; // x11
  __int64 v30; // x14
  unsigned int v31; // w12
  __int64 v32; // x10
  char *v33; // x9
  char *v34; // x11
  char *v35; // x8
  float v36; // s11
  float32x2_t v37; // d8
  float v38; // s14
  float32x2_t v39; // d13
  float v40; // s10
  float32x2_t v41; // d9
  float32x2_t v42; // d1
  unsigned __int64 v43; // d1
  UnityEngine_Transform_o *transform; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  int32_t v49; // w23
  int32_t v50; // w2
  int32_t v51; // w3
  int v52; // w9
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v54; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v55; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v56; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A5A02C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B885B0(&UnityEngine_Mesh_TypeInfo);
    byte_4A5A02C = 1;
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
    v10 = (UnityEngine_Mesh_o *)sub_1B887FC(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v10, 0LL);
    if ( _4__this )
    {
      this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)_4__this,
                                                          0LL);
      if ( this )
      {
        this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
        if ( this )
        {
          UnityEngine_SkinnedMeshRenderer__BakeMesh((UnityEngine_SkinnedMeshRenderer_o *)this, v10, 0LL);
          if ( v10 )
          {
            vertices = UnityEngine_Mesh__get_vertices(v10, 0LL);
            v4->fields._vertices_5__2 = vertices;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._vertices_5__2, (int32_t)vertices, v12, v13);
            normals = UnityEngine_Mesh__get_normals(v10, 0LL);
            v4->fields._normals_5__3 = normals;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._normals_5__3, (int32_t)normals, v15, v16);
            triangles = UnityEngine_Mesh__get_triangles(v10, 0LL);
            v4->fields._triangles_5__4 = triangles;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._triangles_5__4, (int32_t)triangles, v18, v19);
            uv = UnityEngine_Mesh__get_uv(v10, 0LL);
            v4->fields._uvs_5__5 = uv;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._uvs_5__5, (int32_t)uv, v21, v22);
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
                this = (FGOMeshExploder__PreCreatePiece_d__16_o *)UnityEngine_Random__Range_69419120(
                                                                    _4__this->fields.minPieceVertex,
                                                                    _4__this->fields.maxPieceVertex,
                                                                    0LL);
                v23 = (int)this;
                if ( !byte_4A5A136 )
                {
                  this = (FGOMeshExploder__PreCreatePiece_d__16_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A5A136 = 1;
                }
                normals_5__3 = v4->fields._normals_5__3;
                if ( !normals_5__3 )
                  goto LABEL_45;
                v25 = *(_QWORD *)&normals_5__3->max_length;
                if ( v25 )
                {
                  triangles_5__4 = v4->fields._triangles_5__4;
                  if ( !triangles_5__4 )
                    goto LABEL_45;
                  v27 = v4->fields._i_5__7;
                  max_length = triangles_5__4->max_length;
                  if ( (unsigned int)v27 >= max_length
                    || (v29 = triangles_5__4->m_Items[v27 + 1], (unsigned int)v29 >= (unsigned int)v25)
                    || (int)v27 + 1 >= max_length
                    || (v30 = triangles_5__4->m_Items[(int)v27 + 2], (unsigned int)v30 >= (unsigned int)v25)
                    || (v31 = v27 + 2, v31 >= max_length)
                    || (v32 = triangles_5__4->m_Items[v31 + 1], (unsigned int)v32 >= (unsigned int)v25) )
                  {
                    sub_1B88814(this, method);
                  }
                  v33 = (char *)normals_5__3 + 12 * v29;
                  v34 = (char *)normals_5__3 + 12 * v30;
                  v35 = (char *)normals_5__3 + 12 * v32;
                  v36 = *((float *)v33 + 8);
                  v37.n64_u64[0] = *(unsigned __int64 *)(v33 + 36);
                  v38 = *((float *)v34 + 8);
                  v39.n64_u64[0] = *(unsigned __int64 *)(v34 + 36);
                  v40 = *((float *)v35 + 8);
                  v41.n64_u64[0] = *(unsigned __int64 *)(v35 + 36);
                  if ( !byte_4A55CE4 )
                  {
                    sub_1B885B0(&System_Math_TypeInfo);
                    byte_4A55CE4 = 1;
                  }
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v42.n64_u64[0] = vadd_f32(vadd_f32(v37, v39), v41).n64_u64[0];
                  v43 = vmul_f32(v42, v42).n64_u64[0];
                  if ( sqrtf(
                         *((float *)&v43 + 1)
                       + (float)((float)((float)((float)(v36 + v38) + v40) * (float)((float)(v36 + v38) + v40))
                               + *(float *)&v43)) <= 0.00001
                    && !byte_4A55CE1 )
                  {
                    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE1 = 1;
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
                *(UnityEngine_Vector3_o *)&v58.fields.x = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                v49 = 3 * v23;
                v56.fields.x = v58.fields.x;
                v56.fields.y = v58.fields.y;
                v56.fields.z = v58.fields.z;
                v58.fields.x = x;
                v58.fields.y = y;
                v58.fields.z = z;
                v58.fields.w = w;
                FGOMeshExploder__CreateMeshPiece(
                  _4__this,
                  transform,
                  v58,
                  v56,
                  v54,
                  v4->fields._i_5__7,
                  v4->fields._triangles_5__4,
                  v4->fields._vertices_5__2,
                  v4->fields._uvs_5__5,
                  v49,
                  _4__this->fields.exploded,
                  v55);
                v52 = v4->fields._yield_trianble_count_5__6 + v49;
                i_5__7 = v4->fields._i_5__7 + v49;
                v4->fields._yield_trianble_count_5__6 = v52;
                v4->fields._i_5__7 = i_5__7;
                if ( v52 >= 2001 && !_4__this->fields.exploded )
                {
                  v4->fields.__2__current = 0LL;
                  p__2__current = &v4->fields.__2__current;
                  *((_DWORD *)p__2__current + 12) = 0;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v50, v51);
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
    sub_1B8880C(this, method);
  if ( _4__this->fields.useBrokenPiece )
  {
    v4->fields.__2__current = 0LL;
    v7 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v7, 0, v2, v3);
    result = 1;
    *(_DWORD *)&v7[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_FGOMeshExploder__PreCreatePiece_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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