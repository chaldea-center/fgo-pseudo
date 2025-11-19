void SignedValue___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  System_Array_o *v2; // x0
  System_RuntimeFieldHandle_o v3; // x1
  System_Array_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Array_o *v9; // x0
  System_RuntimeFieldHandle_o v10; // x1
  System_Array_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Array_o *v14; // x0
  System_RuntimeFieldHandle_o v15; // x1
  System_Array_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Array_o *v19; // x0
  System_RuntimeFieldHandle_o v20; // x1
  System_Array_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Array_o *v24; // x0
  System_RuntimeFieldHandle_o v25; // x1
  System_Array_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Array_o *v29; // x0
  System_RuntimeFieldHandle_o v30; // x1
  System_Array_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Array_o *v34; // x0
  System_RuntimeFieldHandle_o v35; // x1
  System_Array_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Array_o *v39; // x0
  System_RuntimeFieldHandle_o v40; // x1
  System_Array_o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Array_o *v44; // x0
  System_RuntimeFieldHandle_o v45; // x1
  System_Array_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Array_o *v49; // x0
  System_RuntimeFieldHandle_o v50; // x1
  System_Array_o *v51; // x20
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Array_o *v54; // x0
  System_RuntimeFieldHandle_o v55; // x1
  System_Array_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Array_o *v59; // x0
  System_RuntimeFieldHandle_o v60; // x1
  System_Array_o *v61; // x20
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Array_o *v66; // x0
  System_RuntimeFieldHandle_o v67; // x1
  System_Array_o *v68; // x19
  struct SignedValue_StaticFields *static_fields; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3

  if ( (byte_4CB40D6 & 1) == 0 )
  {
    sub_1C6BA08(&byte_____TypeInfo);
    sub_1C6BA08(&byte___TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&SignedValue_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E);
    sub_1C6BA08(&Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545);
    sub_1C6BA08(&Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8);
    sub_1C6BA08(&Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA);
    sub_1C6BA08(&Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E);
    sub_1C6BA08(&Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D);
    sub_1C6BA08(&Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7);
    sub_1C6BA08(&Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A);
    sub_1C6BA08(&Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061);
    sub_1C6BA08(&Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641);
    sub_1C6BA08(&Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C);
    sub_1C6BA08(&Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E);
    sub_1C6BA08(&Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437);
    byte_4CB40D6 = 1;
  }
  v1 = sub_1C6BAB0(byte_____TypeInfo, 12);
  v2 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v3.fields.value = Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641;
  v4 = v2;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v2, v3, 0);
  if ( !v1 )
    sub_1C6BC60(v5, v6);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v1 + 32) = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 32), (int32_t)v4, v7, v8);
  v9 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v10.fields.value = Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E;
  v11 = v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v9, v10, 0);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 40) = v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 40), (int32_t)v11, v12, v13);
  v14 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v15.fields.value = Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA;
  v16 = v14;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v14, v15, 0);
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 48) = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 48), (int32_t)v16, v17, v18);
  v19 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v20.fields.value = Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E;
  v21 = v19;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v19, v20, 0);
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 56) = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 56), (int32_t)v21, v22, v23);
  v24 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v25.fields.value = Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A;
  v26 = v24;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v24, v25, 0);
  if ( *(_DWORD *)(v1 + 24) <= 4u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 64) = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 64), (int32_t)v26, v27, v28);
  v29 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v30.fields.value = Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061;
  v31 = v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v29, v30, 0);
  if ( *(_DWORD *)(v1 + 24) <= 5u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 72) = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 72), (int32_t)v31, v32, v33);
  v34 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v35.fields.value = Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437;
  v36 = v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v34, v35, 0);
  if ( *(_DWORD *)(v1 + 24) <= 6u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 80) = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 80), (int32_t)v36, v37, v38);
  v39 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v40.fields.value = Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C;
  v41 = v39;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v39, v40, 0);
  if ( *(_DWORD *)(v1 + 24) <= 7u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 88) = v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 88), (int32_t)v41, v42, v43);
  v44 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v45.fields.value = Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7;
  v46 = v44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v44, v45, 0);
  if ( *(_DWORD *)(v1 + 24) <= 8u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 96) = v46;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 96), (int32_t)v46, v47, v48);
  v49 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79);
  v50.fields.value = Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545;
  v51 = v49;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v49, v50, 0);
  if ( *(_DWORD *)(v1 + 24) <= 9u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 104) = v51;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 104), (int32_t)v51, v52, v53);
  v54 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 6);
  v55.fields.value = Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8;
  v56 = v54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v54, v55, 0);
  if ( *(_DWORD *)(v1 + 24) <= 0xAu
    || (*(_QWORD *)(v1 + 112) = v56,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 112), (int32_t)v56, v57, v58),
        v59 = (System_Array_o *)sub_1C6BAB0(byte___TypeInfo, 79),
        v60.fields.value = Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D,
        v61 = v59,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v59, v60, 0),
        *(_DWORD *)(v1 + 24) <= 0xBu) )
  {
LABEL_17:
    sub_1C6BC68(v5);
  }
  *(_QWORD *)(v1 + 120) = v61;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 120), (int32_t)v61, v62, v63);
  SignedValue_TypeInfo->static_fields->ks = (struct System_Byte_array_array *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SignedValue_TypeInfo->static_fields, v1, v64, v65);
  v66 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 12);
  v67.fields.value = Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E;
  v68 = v66;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v66, v67, 0);
  static_fields = SignedValue_TypeInfo->static_fields;
  static_fields->io = (struct System_Int32_array *)v68;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->io, (int32_t)v68, v70, v71);
  SignedValue_TypeInfo->static_fields->exist = 1871552300;
}


void SignedValue___ctor(SignedValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}