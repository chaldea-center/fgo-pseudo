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
  System_Int32_array **v18; // x19
  System_Array_o *v19; // x20
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Array_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Array_o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Array_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Array_o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Array_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Array_o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Array_o *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Array_o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Array_o *v83; // x20
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Array_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Array_o *v97; // x20
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Array_o *v111; // x19
  struct SignedValue_StaticFields *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  __int64 v119; // x0
  __int64 v120; // x0
  System_RuntimeFieldHandle_o v121; // 0:w1.4
  System_RuntimeFieldHandle_o v122; // 0:w1.4
  System_RuntimeFieldHandle_o v123; // 0:w1.4
  System_RuntimeFieldHandle_o v124; // 0:w1.4
  System_RuntimeFieldHandle_o v125; // 0:w1.4
  System_RuntimeFieldHandle_o v126; // 0:w1.4
  System_RuntimeFieldHandle_o v127; // 0:w1.4
  System_RuntimeFieldHandle_o v128; // 0:w1.4
  System_RuntimeFieldHandle_o v129; // 0:w1.4
  System_RuntimeFieldHandle_o v130; // 0:w1.4
  System_RuntimeFieldHandle_o v131; // 0:w1.4
  System_RuntimeFieldHandle_o v132; // 0:w1.4
  System_RuntimeFieldHandle_o v133; // 0:w1.4

  if ( (byte_42154CD & 1) == 0 )
  {
    sub_B0D8A4(&byte_____TypeInfo, v1);
    sub_B0D8A4(&byte___TypeInfo, v2);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&SignedValue_TypeInfo, v4);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E,
      v5);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545,
      v6);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8,
      v7);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA,
      v8);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E,
      v9);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D,
      v10);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7,
      v11);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A,
      v12);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061,
      v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641,
      v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C,
      v15);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E,
      v16);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437,
      v17);
    byte_42154CD = 1;
  }
  v18 = (System_Int32_array **)sub_B0D8BC(byte_____TypeInfo, 12LL);
  v19 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v121.fields.value = Field__PrivateImplementationDetails__E15FDC9FBDBE7FE7B3CAF13E6EB0BB0E48196AFCA28BF9E90B7FB0921BAB1641;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v19, v121, 0LL);
  if ( !v18 )
    sub_B0D97C(v20);
  if ( v19 )
  {
    v20 = sub_B0D964(v19, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_41;
  v18[4] = (System_Int32_array *)v19;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 4), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v122.fields.value = Field__PrivateImplementationDetails__05BC062C146EB261FCEF9597EC2D37213E65DA7D8700FD3E423EB66BF543EE0E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v27, v122, 0LL);
  if ( v27 )
  {
    v20 = sub_B0D964(v27, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_41;
  v18[5] = (System_Int32_array *)v27;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 5), (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v123.fields.value = Field__PrivateImplementationDetails__8D858561180CEF7E113915FE1FA0FFAA16B13DBA80D43CA3AAD7A32D87EBFDBA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v34, v123, 0LL);
  if ( v34 )
  {
    v20 = sub_B0D964(v34, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 2u )
    goto LABEL_41;
  v18[6] = (System_Int32_array *)v34;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 6), (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v124.fields.value = Field__PrivateImplementationDetails__A8A8F22DDBA3AF21495CF365DB4D4671F8744FD3AADB3F6913D7708A66BD7D1E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v41, v124, 0LL);
  if ( v41 )
  {
    v20 = sub_B0D964(v41, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 3u )
    goto LABEL_41;
  v18[7] = (System_Int32_array *)v41;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 7), (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v125.fields.value = Field__PrivateImplementationDetails__CE0AC0B63FF7568D87883EC291257CDE63770AA0A84997E56A14E7D1EBF75E7A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v48, v125, 0LL);
  if ( v48 )
  {
    v20 = sub_B0D964(v48, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 4u )
    goto LABEL_41;
  v18[8] = (System_Int32_array *)v48;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 8), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v126.fields.value = Field__PrivateImplementationDetails__D25B1C4FA94F2D4D2226DFF249A1CE463849318E4B77389FE1112152FA082061;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v55, v126, 0LL);
  if ( v55 )
  {
    v20 = sub_B0D964(v55, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 5u )
    goto LABEL_41;
  v18[9] = (System_Int32_array *)v55;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 9), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v62 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v127.fields.value = Field__PrivateImplementationDetails__FB8FCAFBF6A137AB7CC19820E92784D878A60900872FCF88443C4910EDD3A437;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v62, v127, 0LL);
  if ( v62 )
  {
    v20 = sub_B0D964(v62, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 6u )
    goto LABEL_41;
  v18[10] = (System_Int32_array *)v62;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 10), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v128.fields.value = Field__PrivateImplementationDetails__E3EA1395C5426E45D8C27945F194A024B3E729F0F75D1160176329BA78B2254C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v69, v128, 0LL);
  if ( v69 )
  {
    v20 = sub_B0D964(v69, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 7u )
    goto LABEL_41;
  v18[11] = (System_Int32_array *)v69;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 11), (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v76 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v129.fields.value = Field__PrivateImplementationDetails__C9BD6B347F45C975ADD7337A2F6D7D4E8C4D3882F7CC1FBB43F9E9575953B3D7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v76, v129, 0LL);
  if ( v76 )
  {
    v20 = sub_B0D964(v76, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 8u )
    goto LABEL_41;
  v18[12] = (System_Int32_array *)v76;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 12), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
  v83 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v130.fields.value = Field__PrivateImplementationDetails__5D03B9D1D2D687E0F9A41938DA6461ECE8F70BAE8E2039EC533CEECCCB7D2545;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v83, v130, 0LL);
  if ( v83 )
  {
    v20 = sub_B0D964(v83, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 9u )
    goto LABEL_41;
  v18[13] = (System_Int32_array *)v83;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 13), (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
  v90 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 6LL);
  v131.fields.value = Field__PrivateImplementationDetails__5E8058FCE46433F2A2AFE7D89F945E52848269557763A801058E7838150974A8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v90, v131, 0LL);
  if ( v90 )
  {
    v20 = sub_B0D964(v90, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
      goto LABEL_42;
  }
  if ( *((_DWORD *)v18 + 6) <= 0xAu )
    goto LABEL_41;
  v18[14] = (System_Int32_array *)v90;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 14), (System_Int32_array **)v90, v91, v92, v93, v94, v95, v96);
  v97 = (System_Array_o *)sub_B0D8BC(byte___TypeInfo, 79LL);
  v132.fields.value = Field__PrivateImplementationDetails__AC7889A850BC7102A3ADD0BC7C7F6C99E547CDBE49BEBA989D8449F79FD0797D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v97, v132, 0LL);
  if ( v97 )
  {
    v20 = sub_B0D964(v97, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v20 )
    {
LABEL_42:
      v120 = sub_B0D99C(v20);
      sub_B0D948(v120, 0LL);
    }
  }
  if ( *((_DWORD *)v18 + 6) <= 0xBu )
  {
LABEL_41:
    v119 = sub_B0D9A8(v20);
    sub_B0D948(v119, 0LL);
  }
  v18[15] = (System_Int32_array *)v97;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 15), (System_Int32_array **)v97, v98, v99, v100, v101, v102, v103);
  static_fields = (BattleServantConfConponent_o *)SignedValue_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v18;
  sub_B0D840(static_fields, v18, v105, v106, v107, v108, v109, v110);
  v111 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 12LL);
  v133.fields.value = Field__PrivateImplementationDetails__E6559CAD584B6A6DCEB54AAC78272DEC346DC02215FC4F676E79646044B26D3E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v111, v133, 0LL);
  v112 = SignedValue_TypeInfo->static_fields;
  v112->io = (struct System_Int32_array *)v111;
  sub_B0D840((BattleServantConfConponent_o *)&v112->io, (System_Int32_array **)v111, v113, v114, v115, v116, v117, v118);
  SignedValue_TypeInfo->static_fields->exist = 1871552300;
}


void __fastcall SignedValue___ctor(SignedValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}