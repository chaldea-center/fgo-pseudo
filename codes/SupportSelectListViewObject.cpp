void __fastcall SupportSelectListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  __int64 v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x19
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x1
  struct SupportSelectListViewObject_StaticFields *v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x0
  __int64 v147; // x0

  if ( (byte_42B29C2 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&SupportSelectListViewObject_TypeInfo);
    sub_B52984(&StringLiteral_19448/*"icon_class_off1001"*/);
    sub_B52984(&StringLiteral_19458/*"icon_class_on1002"*/);
    sub_B52984(&StringLiteral_19449/*"icon_class_off1002"*/);
    sub_B52984(&StringLiteral_19443/*"icon_class_off003"*/);
    sub_B52984(&StringLiteral_19447/*"icon_class_off007"*/);
    sub_B52984(&StringLiteral_19441/*"icon_class_off001"*/);
    sub_B52984(&StringLiteral_19455/*"icon_class_on006"*/);
    sub_B52984(&StringLiteral_19452/*"icon_class_on003"*/);
    sub_B52984(&StringLiteral_19450/*"icon_class_on001"*/);
    sub_B52984(&StringLiteral_19446/*"icon_class_off006"*/);
    sub_B52984(&StringLiteral_19457/*"icon_class_on1001"*/);
    sub_B52984(&StringLiteral_19453/*"icon_class_on004"*/);
    sub_B52984(&StringLiteral_19454/*"icon_class_on005"*/);
    sub_B52984(&StringLiteral_19451/*"icon_class_on002"*/);
    sub_B52984(&StringLiteral_19456/*"icon_class_on007"*/);
    sub_B52984(&StringLiteral_19445/*"icon_class_off005"*/);
    sub_B52984(&StringLiteral_19442/*"icon_class_off002"*/);
    sub_B52984(&StringLiteral_19444/*"icon_class_off004"*/);
    byte_42B29C2 = 1;
  }
  v1 = sub_B5299C(string___TypeInfo, 9LL);
  if ( !v1 )
    goto LABEL_98;
  v9 = (System_Int32_array **)v1;
  v10 = StringLiteral_19448/*"icon_class_off1001"*/;
  if ( StringLiteral_19448/*"icon_class_off1001"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19448/*"icon_class_off1001"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v11 = (System_Int32_array **)StringLiteral_19448/*"icon_class_off1001"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_96;
  v9[4] = (System_Int32_array *)v11;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 4), v11, v3, v4, v5, v6, v7, v8);
  v10 = StringLiteral_19441/*"icon_class_off001"*/;
  if ( StringLiteral_19441/*"icon_class_off001"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19441/*"icon_class_off001"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v18 = (System_Int32_array **)StringLiteral_19441/*"icon_class_off001"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_96;
  v9[5] = (System_Int32_array *)v18;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 5), v18, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_19442/*"icon_class_off002"*/;
  if ( StringLiteral_19442/*"icon_class_off002"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19442/*"icon_class_off002"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v25 = (System_Int32_array **)StringLiteral_19442/*"icon_class_off002"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 2u )
    goto LABEL_96;
  v9[6] = (System_Int32_array *)v25;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 6), v25, v19, v20, v21, v22, v23, v24);
  v10 = StringLiteral_19443/*"icon_class_off003"*/;
  if ( StringLiteral_19443/*"icon_class_off003"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19443/*"icon_class_off003"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v32 = (System_Int32_array **)StringLiteral_19443/*"icon_class_off003"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 3u )
    goto LABEL_96;
  v9[7] = (System_Int32_array *)v32;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 7), v32, v26, v27, v28, v29, v30, v31);
  v10 = StringLiteral_19444/*"icon_class_off004"*/;
  if ( StringLiteral_19444/*"icon_class_off004"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19444/*"icon_class_off004"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v39 = (System_Int32_array **)StringLiteral_19444/*"icon_class_off004"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 4u )
    goto LABEL_96;
  v9[8] = (System_Int32_array *)v39;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 8), v39, v33, v34, v35, v36, v37, v38);
  v10 = StringLiteral_19445/*"icon_class_off005"*/;
  if ( StringLiteral_19445/*"icon_class_off005"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19445/*"icon_class_off005"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v46 = (System_Int32_array **)StringLiteral_19445/*"icon_class_off005"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 5u )
    goto LABEL_96;
  v9[9] = (System_Int32_array *)v46;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 9), v46, v40, v41, v42, v43, v44, v45);
  v10 = StringLiteral_19446/*"icon_class_off006"*/;
  if ( StringLiteral_19446/*"icon_class_off006"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19446/*"icon_class_off006"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v53 = (System_Int32_array **)StringLiteral_19446/*"icon_class_off006"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 6u )
    goto LABEL_96;
  v9[10] = (System_Int32_array *)v53;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 10), v53, v47, v48, v49, v50, v51, v52);
  v10 = StringLiteral_19447/*"icon_class_off007"*/;
  if ( StringLiteral_19447/*"icon_class_off007"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19447/*"icon_class_off007"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v60 = (System_Int32_array **)StringLiteral_19447/*"icon_class_off007"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 7u )
    goto LABEL_96;
  v9[11] = (System_Int32_array *)v60;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 11), v60, v54, v55, v56, v57, v58, v59);
  v10 = StringLiteral_19449/*"icon_class_off1002"*/;
  if ( StringLiteral_19449/*"icon_class_off1002"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19449/*"icon_class_off1002"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v67 = (System_Int32_array **)StringLiteral_19449/*"icon_class_off1002"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 8u )
    goto LABEL_96;
  v9[12] = (System_Int32_array *)v67;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 12), v67, v61, v62, v63, v64, v65, v66);
  static_fields = (BattleServantConfConponent_o *)SupportSelectListViewObject_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B52920(static_fields, v9, v69, v70, v71, v72, v73, v74);
  v1 = sub_B5299C(string___TypeInfo, 9LL);
  if ( !v1 )
LABEL_98:
    sub_B52A5C(v1, v2);
  v81 = (System_Int32_array **)v1;
  v10 = StringLiteral_19457/*"icon_class_on1001"*/;
  if ( StringLiteral_19457/*"icon_class_on1001"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19457/*"icon_class_on1001"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v82 = (System_Int32_array **)StringLiteral_19457/*"icon_class_on1001"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( !*((_DWORD *)v81 + 6) )
    goto LABEL_96;
  v81[4] = (System_Int32_array *)v82;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 4), v82, v75, v76, v77, v78, v79, v80);
  v10 = StringLiteral_19450/*"icon_class_on001"*/;
  if ( StringLiteral_19450/*"icon_class_on001"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19450/*"icon_class_on001"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v89 = (System_Int32_array **)StringLiteral_19450/*"icon_class_on001"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 1u )
    goto LABEL_96;
  v81[5] = (System_Int32_array *)v89;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 5), v89, v83, v84, v85, v86, v87, v88);
  v10 = StringLiteral_19451/*"icon_class_on002"*/;
  if ( StringLiteral_19451/*"icon_class_on002"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19451/*"icon_class_on002"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v96 = (System_Int32_array **)StringLiteral_19451/*"icon_class_on002"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 2u )
    goto LABEL_96;
  v81[6] = (System_Int32_array *)v96;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 6), v96, v90, v91, v92, v93, v94, v95);
  v10 = StringLiteral_19452/*"icon_class_on003"*/;
  if ( StringLiteral_19452/*"icon_class_on003"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19452/*"icon_class_on003"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v103 = (System_Int32_array **)StringLiteral_19452/*"icon_class_on003"*/;
  }
  else
  {
    v103 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 3u )
    goto LABEL_96;
  v81[7] = (System_Int32_array *)v103;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 7), v103, v97, v98, v99, v100, v101, v102);
  v10 = StringLiteral_19453/*"icon_class_on004"*/;
  if ( StringLiteral_19453/*"icon_class_on004"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19453/*"icon_class_on004"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v110 = (System_Int32_array **)StringLiteral_19453/*"icon_class_on004"*/;
  }
  else
  {
    v110 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 4u )
    goto LABEL_96;
  v81[8] = (System_Int32_array *)v110;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 8), v110, v104, v105, v106, v107, v108, v109);
  v10 = StringLiteral_19454/*"icon_class_on005"*/;
  if ( StringLiteral_19454/*"icon_class_on005"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19454/*"icon_class_on005"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v117 = (System_Int32_array **)StringLiteral_19454/*"icon_class_on005"*/;
  }
  else
  {
    v117 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 5u )
    goto LABEL_96;
  v81[9] = (System_Int32_array *)v117;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 9), v117, v111, v112, v113, v114, v115, v116);
  v10 = StringLiteral_19455/*"icon_class_on006"*/;
  if ( StringLiteral_19455/*"icon_class_on006"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19455/*"icon_class_on006"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v124 = (System_Int32_array **)StringLiteral_19455/*"icon_class_on006"*/;
  }
  else
  {
    v124 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 6u )
    goto LABEL_96;
  v81[10] = (System_Int32_array *)v124;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 10), v124, v118, v119, v120, v121, v122, v123);
  v10 = StringLiteral_19456/*"icon_class_on007"*/;
  if ( StringLiteral_19456/*"icon_class_on007"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19456/*"icon_class_on007"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v10 )
      goto LABEL_97;
    v131 = (System_Int32_array **)StringLiteral_19456/*"icon_class_on007"*/;
  }
  else
  {
    v131 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 7u )
    goto LABEL_96;
  v81[11] = (System_Int32_array *)v131;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 11), v131, v125, v126, v127, v128, v129, v130);
  v10 = StringLiteral_19458/*"icon_class_on1002"*/;
  if ( StringLiteral_19458/*"icon_class_on1002"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19458/*"icon_class_on1002"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( v10 )
    {
      v138 = (System_Int32_array **)StringLiteral_19458/*"icon_class_on1002"*/;
      goto LABEL_94;
    }
LABEL_97:
    v147 = sub_B52A7C(v10);
    sub_B52A28(v147, 0LL);
  }
  v138 = 0LL;
LABEL_94:
  if ( *((_DWORD *)v81 + 6) <= 8u )
  {
LABEL_96:
    v146 = sub_B52A88(v10);
    sub_B52A28(v146, 0LL);
  }
  v81[12] = (System_Int32_array *)v138;
  sub_B52920((BattleServantConfConponent_o *)(v81 + 12), v138, v132, v133, v134, v135, v136, v137);
  v139 = SupportSelectListViewObject_TypeInfo->static_fields;
  v139->upperOnClassIconFileList = (struct System_String_array *)v81;
  sub_B52920((BattleServantConfConponent_o *)&v139->upperOnClassIconFileList, v81, v140, v141, v142, v143, v144, v145);
}


void __fastcall SupportSelectListViewObject___ctor(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B29C1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&ListViewObject_TypeInfo);
    sub_B52984(&SupportSelectObject___TypeInfo);
    byte_42B29C1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectObject_array *)sub_B5299C(
                                             SupportSelectObject___TypeInfo,
                                             (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.supportSelectObject = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.supportSelectObject,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.maxAlphaRate = 0.6;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportSelectListViewObject__GetClassIconSpriteName(
        int32_t classPos,
        bool isUpperOn,
        const MethodInfo *method)
{
  SupportSelectListViewObject_c *v5; // x0
  struct System_String_array *upperOnClassIconFileList; // x8
  struct System_String_StaticFields *static_fields; // x8
  __int64 v9; // x0

  if ( (byte_42B29B7 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&SupportSelectListViewObject_TypeInfo);
    byte_42B29B7 = 1;
  }
  if ( (classPos & 0x80000000) != 0 )
    goto LABEL_24;
  v5 = SupportSelectListViewObject_TypeInfo;
  if ( isUpperOn )
  {
    if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      v5 = SupportSelectListViewObject_TypeInfo;
    }
    upperOnClassIconFileList = v5->static_fields->upperOnClassIconFileList;
    if ( upperOnClassIconFileList )
    {
      if ( (signed int)upperOnClassIconFileList->max_length > classPos )
      {
        if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOnClassIconFileList;
          if ( !upperOnClassIconFileList )
            goto LABEL_26;
        }
        goto LABEL_22;
      }
LABEL_24:
      static_fields = string_TypeInfo->static_fields;
      return static_fields->Empty;
    }
    goto LABEL_26;
  }
  if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    v5 = SupportSelectListViewObject_TypeInfo;
  }
  upperOnClassIconFileList = v5->static_fields->upperOffClassIconFileList;
  if ( !upperOnClassIconFileList )
    goto LABEL_26;
  if ( (signed int)upperOnClassIconFileList->max_length <= classPos )
    goto LABEL_24;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOffClassIconFileList;
    if ( !upperOnClassIconFileList )
LABEL_26:
      sub_B52A5C(v5, isUpperOn);
  }
LABEL_22:
  if ( upperOnClassIconFileList->max_length <= classPos )
  {
    v9 = sub_B52A88(v5);
    sub_B52A28(v9, 0LL);
  }
  static_fields = (struct System_String_StaticFields *)&upperOnClassIconFileList->m_Items[classPos];
  return static_fields->Empty;
}


SupportSelectListViewItem_o *__fastcall SupportSelectListViewObject__GetItem(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B29B9 & 1) == 0 )
  {
    sub_B52984(&SupportSelectListViewItem_TypeInfo);
    byte_42B29B9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SupportSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SupportSelectListViewItem_TypeInfo )
    return (SupportSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__Init(
        SupportSelectListViewObject_o *this,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        int32_t deckNum,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *Instance; // x0
  __int64 v13; // x1
  struct SupportServantData_o *v14; // x8
  UILabel_o *explanationLb; // x23
  System_String_o **v16; // x8
  System_String_o *v17; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCampaignMaster_o *v19; // x23
  int32_t questId; // w22
  int32_t questPhase; // w24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EventCampaignEntity_array *Data_29622896; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x0
  struct EventCampaignEntity_array *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1

  if ( (byte_42B29B8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B52984(&EventCampaignEntity___TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12578/*"SUPPORT_FOLLOWER_HELP"*/);
    sub_B52984(&StringLiteral_12632/*"SUPPORT_SELECT_HELP"*/);
    sub_B52984(&StringLiteral_12579/*"SUPPORT_INFO_HELP"*/);
    byte_42B29B8 = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)supportServantData,
    (System_String_array **)friendPointCampaigns,
    *(System_String_array ***)&deckNum,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v14 = this->fields.supportServantData;
  if ( !v14 )
    goto LABEL_30;
  explanationLb = this->fields.explanationLb;
  if ( !v14->fields.isFriendInfo )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12632/*"SUPPORT_SELECT_HELP"*/, 0LL);
    if ( explanationLb )
    {
      UILabel__set_text(explanationLb, Instance, 0LL);
      goto LABEL_27;
    }
LABEL_30:
    sub_B52A5C(Instance, v13);
  }
  if ( v14->fields.isSelectServant )
    v16 = (System_String_o **)&StringLiteral_12578/*"SUPPORT_FOLLOWER_HELP"*/;
  else
    v16 = (System_String_o **)&StringLiteral_12579/*"SUPPORT_INFO_HELP"*/;
  v17 = *v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get(v17, 0LL);
  if ( !explanationLb )
    goto LABEL_30;
  UILabel__set_text(explanationLb, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !supportServantData )
    goto LABEL_30;
  questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
  v19 = (EventCampaignMaster_o *)Instance;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
  }
  else
  {
    questPhase = 0;
    questId = 0;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (System_String_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                  (EventQuestMaster_o *)Instance,
                                  questId,
                                  questPhase,
                                  0LL,
                                  7,
                                  0LL);
  if ( !v19 )
    goto LABEL_30;
  Data_29622896 = EventCampaignMaster__getData_29622896(v19, 24, (EventEntity_array *)Instance, 0LL);
  if ( !Data_29622896 || !*(_QWORD *)&Data_29622896->max_length )
  {
    v30 = (struct EventCampaignEntity_array *)sub_B5299C(EventCampaignEntity___TypeInfo, 0LL);
    this->fields.eventFriendPoints = v30;
    p_eventFriendPoints = &this->fields.eventFriendPoints;
    goto LABEL_29;
  }
LABEL_27:
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v30 = friendPointCampaigns;
LABEL_29:
  sub_B52920(
    (BattleServantConfConponent_o *)p_eventFriendPoints,
    (System_Int32_array **)v30,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  SupportSelectListViewObject__clearItemObj(this, v31);
  SupportSelectListViewObject__setItemObj(this, deckNum, v32);
  SupportSelectListViewObject__InitAlphaMask(this, v33);
}


void __fastcall SupportSelectListViewObject__InitAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct UnityEngine_BoxCollider_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *maskSprite; // x20
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42B29BF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B29BF = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v4 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                 dispObject,
                                                 (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.colliders,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SupportSelectListViewObject__UpdateCollider(this, 1, v11);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_17;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
    if ( !dispObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( dispObject )
    {
      ComponentInParent_UIScrollView = UnityEngine_GameObject__GetComponentInParent_UIScrollView_(
                                         dispObject,
                                         (const MethodInfo_1B7B364 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        dispObject,
                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          SupportSelectListViewObject__UpdateAlphaMask(this, v27);
          return;
        }
      }
    }
LABEL_17:
    sub_B52A5C(dispObject, method);
  }
}


void __fastcall SupportSelectListViewObject__OnClickListView(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectListViewObject__ResetEventCampaign(
        SupportSelectListViewObject_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SupportServantData_o *supportServantData; // x8
  struct EventCampaignEntity_array **p_eventFriendPoints; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v19; // x22
  int max_length; // w9
  SupportSelectObject_o *v21; // x21
  const MethodInfo *v22; // x1
  __int64 v23; // x0

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  if ( supportServantData->fields.isFriendInfo )
    return;
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaigns,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  supportSelectObject = (struct SupportSelectObject_array *)*(p_eventFriendPoints - 5);
  if ( !supportSelectObject )
LABEL_9:
    sub_B52A5C(this, friendPointCampaigns);
  v19 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v19 >= max_length )
      break;
    if ( (unsigned int)v19 >= max_length )
    {
      v23 = sub_B52A88(this);
      sub_B52A28(v23, 0LL);
    }
    v21 = supportSelectObject->m_Items[v19];
    if ( v21 )
    {
      v21->fields.eventFriendPoints = friendPointCampaigns;
      sub_B52920(
        (BattleServantConfConponent_o *)&v21->fields.eventFriendPoints,
        (System_Int32_array **)friendPointCampaigns,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      SupportSelectObject__ModifyItem(v21, v22);
      supportSelectObject = this->fields.supportSelectObject;
      ++v19;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__SetActiveDragSwapGuide(
        SupportSelectListViewObject_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  SupportSelectObject_o *v8; // x8
  __int64 v9; // x0

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_8:
    sub_B52A5C(this, flag);
  v4 = this;
  v5 = 0LL;
  v6 = flag;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B52A88(this);
      sub_B52A28(v9, 0LL);
    }
    v8 = supportSelectObject->m_Items[v5];
    if ( v8 )
    {
      this = (SupportSelectListViewObject_o *)v8->fields.itemDraw;
      if ( this )
      {
        SupportSelectItemDraw__SetActiveDragSwapGuide((SupportSelectItemDraw_o *)this, v6, method);
        supportSelectObject = v4->fields.supportSelectObject;
        ++v5;
        if ( supportSelectObject )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall SupportSelectListViewObject__SetDragPrefab(
        SupportSelectListViewObject_o *this,
        UnityEngine_GameObject_o *dragPrefab,
        SupportSelectListViewManager_o *manager,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  int max_length; // w8
  unsigned int v12; // w23
  SupportSelectListViewDropObject_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_9;
  max_length = dropObjectList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v20 = sub_B52A88(this);
        sub_B52A28(v20, 0LL);
      }
      v13 = dropObjectList->m_Items[v12];
      if ( !v13 )
        break;
      v13->fields.manager = (struct ListViewManager_o *)manager;
      sub_B52920(
        (BattleServantConfConponent_o *)&v13->fields.manager,
        (System_Int32_array **)manager,
        (System_String_array **)manager,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      v13->fields.dragObjectPrefab = dragPrefab;
      sub_B52920(
        (BattleServantConfConponent_o *)&v13->fields.dragObjectPrefab,
        (System_Int32_array **)dragPrefab,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      max_length = dropObjectList->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_9:
    sub_B52A5C(this, dragPrefab);
  }
}


// attributes: thunk
void __fastcall SupportSelectListViewObject__Update(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  SupportSelectListViewObject__UpdateAlphaMask(this, method);
}


void __fastcall SupportSelectListViewObject__UpdateAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  float v8; // s8
  float v9; // s0
  struct ListViewItemSeed_o *v10; // x8
  float v11; // s0
  float maxAlphaRate; // s10
  float v13; // s8
  float v14; // s8
  const MethodInfo *v15; // x2
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  UIWidget_o *v20; // x19
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B29C0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B29C0 = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
        {
          transform = (UnityEngine_Component_o *)this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          v10 = this->fields.itemSeed;
          if ( !v10 )
            goto LABEL_29;
          v11 = UnityEngine_Mathf__Clamp01(fabsf(v8 + v9) / v10->fields.arrangementPich.fields.x, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          v13 = v11;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v14 = v13 * maxAlphaRate;
          if ( (((v14 > 0.05) ^ UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL)) & 1) != 0 )
            SupportSelectListViewObject__UpdateCollider(this, v14 <= 0.05, v15);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v14 > 0.05, 0LL),
                (v20 = (UIWidget_o *)this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_B52A5C(transform, v6);
          }
          v22.fields.r = v20->fields.mColor.fields.r;
          v22.fields.g = v20->fields.mColor.fields.g;
          v22.fields.b = v20->fields.mColor.fields.b;
          v22.fields.a = v14;
          var40.methodPointer = 0LL;
          var40.invoker_method = 0LL;
          UnityEngine_Color___ctor(v22, v16, v17, v18, v19, &var40);
          *(_QWORD *)&v23.fields.r = var40.methodPointer;
          *(_QWORD *)&v23.fields.b = var40.invoker_method;
          UIWidget__set_color(v20, v23, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__UpdateCollider(
        SupportSelectListViewObject_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_B52A5C(this, enable);
  v4 = this;
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    this = (SupportSelectListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
      colliders = v4->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall SupportSelectListViewObject__UpdateExplanationLabel(
        SupportSelectListViewObject_o *this,
        bool displaySwapInfo,
        const MethodInfo *method)
{
  System_String_o **v5; // x8
  bool v6; // zf
  UILabel_o *explanationLb; // x19
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_42B29BE & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12632/*"SUPPORT_SELECT_HELP"*/);
    sub_B52984(&StringLiteral_12643/*"SUPPORT_SELECT_SWAP"*/);
    byte_42B29BE = 1;
  }
  v5 = (System_String_o **)&StringLiteral_12643/*"SUPPORT_SELECT_SWAP"*/;
  v6 = !displaySwapInfo;
  explanationLb = this->fields.explanationLb;
  if ( v6 )
    v5 = (System_String_o **)&StringLiteral_12632/*"SUPPORT_SELECT_HELP"*/;
  v8 = *v5;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get(v8, 0LL);
  if ( !explanationLb )
    sub_B52A5C(v9, v10);
  UILabel__set_text(explanationLb, v9, 0LL);
}


void __fastcall SupportSelectListViewObject__callbackFuncObj(
        SupportSelectListViewObject_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  UnityEngine_Object_o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  SupportSelectMenu_CallbackFunc_o *klass; // x0

  if ( (byte_42B29BC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SupportSelectListViewManager_TypeInfo);
    byte_42B29BC = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (v10 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == SupportSelectListViewManager_TypeInfo )
      v11 = (UnityEngine_Object_o *)this->fields.manager;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( v12 )
  {
    if ( !v11 )
      sub_B52A5C(v12, v13);
    klass = (SupportSelectMenu_CallbackFunc_o *)v11[14].klass;
    if ( klass )
      SupportSelectMenu_CallbackFunc__Invoke(klass, result, d, n, 0LL);
  }
}


void __fastcall SupportSelectListViewObject__clearItemObj(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  const MethodInfo *v6; // x2
  __int64 v7; // x0

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_B52A5C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v7 = sub_B52A88(this);
      sub_B52A28(v7, 0LL);
    }
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v4];
    if ( this )
    {
      SupportSelectObject__ClearItem((SupportSelectObject_o *)this, method);
      SupportSelectListViewObject__setUpperClassIcon(v3, v4, v6);
      supportSelectObject = v3->fields.supportSelectObject;
      ++v4;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__clearItemObj_29854064(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x0

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
    goto LABEL_5;
  if ( supportSelectObject->max_length <= classPos )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v5 = this;
  this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[classPos];
  if ( !this )
LABEL_5:
    sub_B52A5C(this, classPos);
  SupportSelectObject__ClearItem((SupportSelectObject_o *)this, *(const MethodInfo **)&classPos);
  SupportSelectListViewObject__setUpperClassIcon(v5, classPos, v6);
}


SupportSelectListViewDropObject_array *__fastcall SupportSelectListViewObject__get_DropObjectList(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObjectList;
}


void __fastcall SupportSelectListViewObject__setDisp(
        SupportSelectListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, disp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x8
  __int64 v6; // x21
  int namespaze; // w9
  EventCampaignEntity_array *monitor; // x22
  SupportServantData_o *v9; // x23
  SupportSelectObject_o *v10; // x24
  SupportSelectMenu_CallbackFunc_o *v11; // x25
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42B29BA & 1) == 0 )
  {
    sub_B52984(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_B52984(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_42B29BA = 1;
  }
  klass = v4[7].klass;
  if ( !klass )
LABEL_9:
    sub_B52A5C(this, *(_QWORD *)&deckNum);
  v6 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v6 >= namespaze )
      break;
    if ( (unsigned int)v6 >= namespaze )
    {
      v14 = sub_B52A88(this);
      sub_B52A28(v14, 0LL);
    }
    v9 = (SupportServantData_o *)v4[9].klass;
    monitor = (EventCampaignEntity_array *)v4[9].monitor;
    v10 = (SupportSelectObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + v6);
    v11 = (SupportSelectMenu_CallbackFunc_o *)sub_B52A54(SupportSelectMenu_CallbackFunc_TypeInfo);
    SupportSelectMenu_CallbackFunc___ctor(v11, v4, Method_SupportSelectListViewObject_callbackFuncObj__, 0LL);
    if ( v10 )
    {
      SupportSelectObject__SetItem(v10, v9, deckNum, v6, monitor, v11, v12);
      SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v4, v6, v13);
      klass = v4[7].klass;
      ++v6;
      if ( klass )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj_29854156(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  Il2CppClass *klass; // x8
  EventCampaignEntity_array *monitor; // x22
  SupportServantData_o *v9; // x23
  SupportSelectObject_o *v10; // x24
  SupportSelectMenu_CallbackFunc_o *v11; // x25
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  v6 = (Il2CppObject *)this;
  if ( (byte_42B29BB & 1) == 0 )
  {
    sub_B52984(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_B52984(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_42B29BB = 1;
  }
  klass = v6[7].klass;
  if ( !klass )
    goto LABEL_7;
  if ( LODWORD(klass->_1.namespaze) <= classPos )
  {
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  v9 = (SupportServantData_o *)v6[9].klass;
  monitor = (EventCampaignEntity_array *)v6[9].monitor;
  v10 = (SupportSelectObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + classPos);
  v11 = (SupportSelectMenu_CallbackFunc_o *)sub_B52A54(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(v11, v6, Method_SupportSelectListViewObject_callbackFuncObj__, 0LL);
  if ( !v10 )
LABEL_7:
    sub_B52A5C(this, *(_QWORD *)&deckNum);
  SupportSelectObject__SetItem(v10, v9, deckNum, classPos, monitor, v11, v12);
  SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v6, classPos, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setUpperClassIcon(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *supportServantData; // x0
  struct UISprite_array *v6; // x8
  __int64 v7; // x21
  UISprite_o *v8; // x20
  _DWORD *klass; // x8
  struct UISprite_array *classIconSpriteList; // x8
  __int64 v11; // x0

  if ( (byte_42B29BD & 1) == 0 )
  {
    sub_B52984(&SupportSelectListViewObject_TypeInfo);
    byte_42B29BD = 1;
  }
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_22;
  supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                 supportServantData,
                                                 classPos,
                                                 0LL);
  if ( !supportServantData || !supportServantData->fields.className )
  {
    classIconSpriteList = this->fields.classIconSpriteList;
    if ( !classIconSpriteList )
      goto LABEL_22;
    if ( classIconSpriteList->max_length <= classPos )
    {
LABEL_23:
      v11 = sub_B52A88(supportServantData);
      sub_B52A28(v11, 0LL);
    }
    v7 = classPos;
    v8 = classIconSpriteList->m_Items[classPos];
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    if ( (BYTE3(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    }
    klass = supportServantData[1].fields.oldEquipIdList->obj.klass;
    if ( klass )
      goto LABEL_19;
LABEL_22:
    sub_B52A5C(supportServantData, *(_QWORD *)&classPos);
  }
  v6 = this->fields.classIconSpriteList;
  if ( !v6 )
    goto LABEL_22;
  if ( v6->max_length <= classPos )
    goto LABEL_23;
  v7 = classPos;
  v8 = v6->m_Items[classPos];
  supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  if ( (BYTE3(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  }
  klass = supportServantData[1].fields.oldEquipIdList->obj.monitor;
  if ( !klass )
    goto LABEL_22;
LABEL_19:
  if ( klass[6] <= (unsigned int)classPos )
    goto LABEL_23;
  if ( !v8 )
    goto LABEL_22;
  UISprite__set_spriteName(v8, *(System_String_o **)&klass[2 * v7 + 8], 0LL);
}