void __fastcall SignedValue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x19
  System_Array_o *v19; // x0
  System_Array_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  System_Array_o *v25; // x0
  System_Array_o *v26; // x20
  const MethodInfo *v27; // x3
  System_Array_o *v28; // x0
  System_Array_o *v29; // x20
  const MethodInfo *v30; // x3
  System_Array_o *v31; // x0
  System_Array_o *v32; // x20
  const MethodInfo *v33; // x3
  System_Array_o *v34; // x0
  System_Array_o *v35; // x20
  const MethodInfo *v36; // x3
  System_Array_o *v37; // x0
  System_Array_o *v38; // x20
  const MethodInfo *v39; // x3
  System_Array_o *v40; // x0
  System_Array_o *v41; // x20
  const MethodInfo *v42; // x3
  System_Array_o *v43; // x0
  System_Array_o *v44; // x20
  const MethodInfo *v45; // x3
  System_Array_o *v46; // x0
  System_Array_o *v47; // x20
  const MethodInfo *v48; // x3
  System_Array_o *v49; // x0
  System_Array_o *v50; // x20
  const MethodInfo *v51; // x3
  System_Array_o *v52; // x0
  System_Array_o *v53; // x20
  const MethodInfo *v54; // x3
  System_Array_o *v55; // x0
  System_Array_o *v56; // x20
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Array_o *v60; // x0
  System_Array_o *v61; // x19
  struct SignedValue_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_RuntimeFieldHandle_o v65; // 0:w1.4
  System_RuntimeFieldHandle_o v66; // 0:w1.4
  System_RuntimeFieldHandle_o v67; // 0:w1.4
  System_RuntimeFieldHandle_o v68; // 0:w1.4
  System_RuntimeFieldHandle_o v69; // 0:w1.4
  System_RuntimeFieldHandle_o v70; // 0:w1.4
  System_RuntimeFieldHandle_o v71; // 0:w1.4
  System_RuntimeFieldHandle_o v72; // 0:w1.4
  System_RuntimeFieldHandle_o v73; // 0:w1.4
  System_RuntimeFieldHandle_o v74; // 0:w1.4
  System_RuntimeFieldHandle_o v75; // 0:w1.4
  System_RuntimeFieldHandle_o v76; // 0:w1.4
  System_RuntimeFieldHandle_o v77; // 0:w1.4

  if ( (byte_4B1A39D & 1) == 0 )
  {
    sub_1BCAFF8(&byte_____TypeInfo, v1);
    sub_1BCAFF8(&byte___TypeInfo, v2);
    sub_1BCAFF8(&int___TypeInfo, v3);
    sub_1BCAFF8(&SignedValue_TypeInfo, v4);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E,
      v5);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545,
      v6);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8,
      v7);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA,
      v8);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E,
      v9);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D,
      v10);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7,
      v11);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A,
      v12);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061,
      v13);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641,
      v14);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C,
      v15);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E,
      v16);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437,
      v17);
    byte_4B1A39D = 1;
  }
  v18 = sub_1BCB0A0(byte_____TypeInfo, 12LL);
  v19 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v65.fields.value = Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641;
  v20 = v19;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v19, v65, 0LL);
  if ( !v18 )
    sub_1BCB254(v21, v22);
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v18 + 32) = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v20, v23, v24);
  v25 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v66.fields.value = Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E;
  v26 = v25;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v25, v66, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 40) = v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), (int32_t)v26, v23, v27);
  v28 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v67.fields.value = Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA;
  v29 = v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v28, v67, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 48) = v29;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 48), (int32_t)v29, v23, v30);
  v31 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v68.fields.value = Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E;
  v32 = v31;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v31, v68, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 56) = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 56), (int32_t)v32, v23, v33);
  v34 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v69.fields.value = Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A;
  v35 = v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v34, v69, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 64) = v35;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v35, v23, v36);
  v37 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v70.fields.value = Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061;
  v38 = v37;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v37, v70, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 5u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 72) = v38;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 72), (int32_t)v38, v23, v39);
  v40 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v71.fields.value = Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437;
  v41 = v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v40, v71, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 6u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 80) = v41;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 80), (int32_t)v41, v23, v42);
  v43 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v72.fields.value = Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C;
  v44 = v43;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v43, v72, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 7u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 88) = v44;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 88), (int32_t)v44, v23, v45);
  v46 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v73.fields.value = Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7;
  v47 = v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v46, v73, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 8u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 96) = v47;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 96), (int32_t)v47, v23, v48);
  v49 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL);
  v74.fields.value = Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545;
  v50 = v49;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v49, v74, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 9u )
    goto LABEL_17;
  *(_QWORD *)(v18 + 104) = v50;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 104), (int32_t)v50, v23, v51);
  v52 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 6LL);
  v75.fields.value = Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8;
  v53 = v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v52, v75, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 0xAu
    || (*(_QWORD *)(v18 + 112) = v53,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 112), (int32_t)v53, v23, v54),
        v55 = (System_Array_o *)sub_1BCB0A0(byte___TypeInfo, 79LL),
        v76.fields.value = Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D,
        v56 = v55,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v55, v76, 0LL),
        *(_DWORD *)(v18 + 24) <= 0xBu) )
  {
LABEL_17:
    sub_1BCB25C(v21, v22, v23);
  }
  *(_QWORD *)(v18 + 120) = v56;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 120), (int32_t)v56, v23, v57);
  SignedValue_TypeInfo->static_fields->ks = (struct System_Byte_array_array *)v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)SignedValue_TypeInfo->static_fields, v18, v58, v59);
  v60 = (System_Array_o *)sub_1BCB0A0(int___TypeInfo, 12LL);
  v77.fields.value = Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E;
  v61 = v60;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v60, v77, 0LL);
  static_fields = SignedValue_TypeInfo->static_fields;
  static_fields->io = (struct System_Int32_array *)v61;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->io, (int32_t)v61, v63, v64);
  SignedValue_TypeInfo->static_fields->exist = 1871552300;
}


void __fastcall SignedValue___ctor(SignedValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}