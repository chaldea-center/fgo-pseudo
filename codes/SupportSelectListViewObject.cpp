void __fastcall SupportSelectListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x19
  __int64 v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x2
  __int64 v80; // x0
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x19
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  struct SupportSelectListViewObject_StaticFields *v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7

  if ( (byte_40FD246 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, v1);
    sub_B16FFC(&SupportSelectListViewObject_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19228/*"icon_class_off1001"*/, v4);
    sub_B16FFC(&StringLiteral_19238/*"icon_class_on1002"*/, v5);
    sub_B16FFC(&StringLiteral_19229/*"icon_class_off1002"*/, v6);
    sub_B16FFC(&StringLiteral_19223/*"icon_class_off003"*/, v7);
    sub_B16FFC(&StringLiteral_19227/*"icon_class_off007"*/, v8);
    sub_B16FFC(&StringLiteral_19221/*"icon_class_off001"*/, v9);
    sub_B16FFC(&StringLiteral_19235/*"icon_class_on006"*/, v10);
    sub_B16FFC(&StringLiteral_19232/*"icon_class_on003"*/, v11);
    sub_B16FFC(&StringLiteral_19230/*"icon_class_on001"*/, v12);
    sub_B16FFC(&StringLiteral_19226/*"icon_class_off006"*/, v13);
    sub_B16FFC(&StringLiteral_19237/*"icon_class_on1001"*/, v14);
    sub_B16FFC(&StringLiteral_19233/*"icon_class_on004"*/, v15);
    sub_B16FFC(&StringLiteral_19234/*"icon_class_on005"*/, v16);
    sub_B16FFC(&StringLiteral_19231/*"icon_class_on002"*/, v17);
    sub_B16FFC(&StringLiteral_19236/*"icon_class_on007"*/, v18);
    sub_B16FFC(&StringLiteral_19225/*"icon_class_off005"*/, v19);
    sub_B16FFC(&StringLiteral_19222/*"icon_class_off002"*/, v20);
    sub_B16FFC(&StringLiteral_19224/*"icon_class_off004"*/, v21);
    byte_40FD246 = 1;
  }
  v22 = sub_B17014(string___TypeInfo, 9LL, v2);
  if ( !v22 )
    goto LABEL_98;
  v29 = (System_Int32_array **)v22;
  v30 = StringLiteral_19228/*"icon_class_off1001"*/;
  if ( StringLiteral_19228/*"icon_class_off1001"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19228/*"icon_class_off1001"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19228/*"icon_class_off1001"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !*((_DWORD *)v29 + 6) )
    goto LABEL_96;
  v29[4] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 4), v31, v23, v24, v25, v26, v27, v28);
  v30 = StringLiteral_19221/*"icon_class_off001"*/;
  if ( StringLiteral_19221/*"icon_class_off001"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19221/*"icon_class_off001"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19221/*"icon_class_off001"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 1u )
    goto LABEL_96;
  v29[5] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 5), v31, v23, v32, v33, v34, v35, v36);
  v30 = StringLiteral_19222/*"icon_class_off002"*/;
  if ( StringLiteral_19222/*"icon_class_off002"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19222/*"icon_class_off002"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19222/*"icon_class_off002"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 2u )
    goto LABEL_96;
  v29[6] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 6), v31, v23, v37, v38, v39, v40, v41);
  v30 = StringLiteral_19223/*"icon_class_off003"*/;
  if ( StringLiteral_19223/*"icon_class_off003"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19223/*"icon_class_off003"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19223/*"icon_class_off003"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 3u )
    goto LABEL_96;
  v29[7] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 7), v31, v23, v42, v43, v44, v45, v46);
  v30 = StringLiteral_19224/*"icon_class_off004"*/;
  if ( StringLiteral_19224/*"icon_class_off004"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19224/*"icon_class_off004"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19224/*"icon_class_off004"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 4u )
    goto LABEL_96;
  v29[8] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 8), v31, v23, v47, v48, v49, v50, v51);
  v30 = StringLiteral_19225/*"icon_class_off005"*/;
  if ( StringLiteral_19225/*"icon_class_off005"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19225/*"icon_class_off005"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19225/*"icon_class_off005"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 5u )
    goto LABEL_96;
  v29[9] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 9), v31, v23, v52, v53, v54, v55, v56);
  v30 = StringLiteral_19226/*"icon_class_off006"*/;
  if ( StringLiteral_19226/*"icon_class_off006"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19226/*"icon_class_off006"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19226/*"icon_class_off006"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 6u )
    goto LABEL_96;
  v29[10] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 10), v31, v23, v57, v58, v59, v60, v61);
  v30 = StringLiteral_19227/*"icon_class_off007"*/;
  if ( StringLiteral_19227/*"icon_class_off007"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19227/*"icon_class_off007"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19227/*"icon_class_off007"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 7u )
    goto LABEL_96;
  v29[11] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 11), v31, v23, v62, v63, v64, v65, v66);
  v30 = StringLiteral_19229/*"icon_class_off1002"*/;
  if ( StringLiteral_19229/*"icon_class_off1002"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19229/*"icon_class_off1002"*/, *(_QWORD *)&(*v29)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19229/*"icon_class_off1002"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v29 + 6) <= 8u )
    goto LABEL_96;
  v29[12] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 12), v31, v23, v67, v68, v69, v70, v71);
  static_fields = (BattleServantConfConponent_o *)SupportSelectListViewObject_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v29;
  sub_B16F98(static_fields, v29, v73, v74, v75, v76, v77, v78);
  v80 = sub_B17014(string___TypeInfo, 9LL, v79);
  if ( !v80 )
LABEL_98:
    sub_B170D4();
  v86 = (System_Int32_array **)v80;
  v30 = StringLiteral_19237/*"icon_class_on1001"*/;
  if ( StringLiteral_19237/*"icon_class_on1001"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19237/*"icon_class_on1001"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19237/*"icon_class_on1001"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !*((_DWORD *)v86 + 6) )
    goto LABEL_96;
  v86[4] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 4), v31, v23, v81, v82, v83, v84, v85);
  v30 = StringLiteral_19230/*"icon_class_on001"*/;
  if ( StringLiteral_19230/*"icon_class_on001"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19230/*"icon_class_on001"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19230/*"icon_class_on001"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 1u )
    goto LABEL_96;
  v86[5] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 5), v31, v23, v87, v88, v89, v90, v91);
  v30 = StringLiteral_19231/*"icon_class_on002"*/;
  if ( StringLiteral_19231/*"icon_class_on002"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19231/*"icon_class_on002"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19231/*"icon_class_on002"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 2u )
    goto LABEL_96;
  v86[6] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 6), v31, v23, v92, v93, v94, v95, v96);
  v30 = StringLiteral_19232/*"icon_class_on003"*/;
  if ( StringLiteral_19232/*"icon_class_on003"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19232/*"icon_class_on003"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19232/*"icon_class_on003"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 3u )
    goto LABEL_96;
  v86[7] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 7), v31, v23, v97, v98, v99, v100, v101);
  v30 = StringLiteral_19233/*"icon_class_on004"*/;
  if ( StringLiteral_19233/*"icon_class_on004"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19233/*"icon_class_on004"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19233/*"icon_class_on004"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 4u )
    goto LABEL_96;
  v86[8] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 8), v31, v23, v102, v103, v104, v105, v106);
  v30 = StringLiteral_19234/*"icon_class_on005"*/;
  if ( StringLiteral_19234/*"icon_class_on005"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19234/*"icon_class_on005"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19234/*"icon_class_on005"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 5u )
    goto LABEL_96;
  v86[9] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 9), v31, v23, v107, v108, v109, v110, v111);
  v30 = StringLiteral_19235/*"icon_class_on006"*/;
  if ( StringLiteral_19235/*"icon_class_on006"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19235/*"icon_class_on006"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19235/*"icon_class_on006"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 6u )
    goto LABEL_96;
  v86[10] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 10), v31, v23, v112, v113, v114, v115, v116);
  v30 = StringLiteral_19236/*"icon_class_on007"*/;
  if ( StringLiteral_19236/*"icon_class_on007"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19236/*"icon_class_on007"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( !v30 )
      goto LABEL_97;
    v31 = (System_Int32_array **)StringLiteral_19236/*"icon_class_on007"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v86 + 6) <= 7u )
    goto LABEL_96;
  v86[11] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 11), v31, v23, v117, v118, v119, v120, v121);
  v30 = StringLiteral_19238/*"icon_class_on1002"*/;
  if ( StringLiteral_19238/*"icon_class_on1002"*/ )
  {
    v30 = sub_B170BC(StringLiteral_19238/*"icon_class_on1002"*/, *(_QWORD *)&(*v86)->m_Items[9]);
    if ( v30 )
    {
      v31 = (System_Int32_array **)StringLiteral_19238/*"icon_class_on1002"*/;
      goto LABEL_94;
    }
LABEL_97:
    sub_B170F4(v30);
    sub_B170A0();
  }
  v31 = 0LL;
LABEL_94:
  if ( *((_DWORD *)v86 + 6) <= 8u )
  {
LABEL_96:
    sub_B17100(v30, v31, v23);
    sub_B170A0();
  }
  v86[12] = (System_Int32_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)(v86 + 12), v31, v23, v122, v123, v124, v125, v126);
  v127 = SupportSelectListViewObject_TypeInfo->static_fields;
  v127->upperOnClassIconFileList = (struct System_String_array *)v86;
  sub_B16F98((BattleServantConfConponent_o *)&v127->upperOnClassIconFileList, v86, v128, v129, v130, v131, v132, v133);
}


void __fastcall SupportSelectListViewObject___ctor(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct SupportSelectObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD245 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&ListViewObject_TypeInfo, v4);
    sub_B16FFC(&SupportSelectObject___TypeInfo, v5);
    byte_40FD245 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct SupportSelectObject_array *)sub_B17014(
                                             SupportSelectObject___TypeInfo,
                                             (unsigned int)v6->static_fields->SupportDeckMemberMax,
                                             v2);
  this->fields.supportSelectObject = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportSelectObject,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v5; // x1
  SupportSelectListViewObject_c *v6; // x0
  struct System_String_array *upperOnClassIconFileList; // x8
  struct System_String_StaticFields *static_fields; // x8

  if ( (byte_40FD23B & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, isUpperOn);
    sub_B16FFC(&SupportSelectListViewObject_TypeInfo, v5);
    byte_40FD23B = 1;
  }
  if ( (classPos & 0x80000000) != 0 )
    goto LABEL_24;
  v6 = SupportSelectListViewObject_TypeInfo;
  if ( isUpperOn )
  {
    if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      v6 = SupportSelectListViewObject_TypeInfo;
    }
    upperOnClassIconFileList = v6->static_fields->upperOnClassIconFileList;
    if ( upperOnClassIconFileList )
    {
      if ( (signed int)upperOnClassIconFileList->max_length > classPos )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
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
    v6 = SupportSelectListViewObject_TypeInfo;
  }
  upperOnClassIconFileList = v6->static_fields->upperOffClassIconFileList;
  if ( !upperOnClassIconFileList )
    goto LABEL_26;
  if ( (signed int)upperOnClassIconFileList->max_length <= classPos )
    goto LABEL_24;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOffClassIconFileList;
    if ( !upperOnClassIconFileList )
LABEL_26:
      sub_B170D4();
  }
LABEL_22:
  if ( upperOnClassIconFileList->max_length <= classPos )
  {
    sub_B17100(v6, isUpperOn, method);
    sub_B170A0();
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

  if ( (byte_40FD23D & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, method);
    byte_40FD23D = 1;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct SupportServantData_o *v19; // x8
  UILabel_o *explanationLb; // x23
  System_String_o **v21; // x8
  System_String_o *v22; // x24
  System_String_o *v23; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCampaignMaster_o *v27; // x23
  int32_t questPhase; // w22
  int32_t questId; // w24
  System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *v37; // x0
  EventQuestMaster_o *v38; // x0
  EventEntity_array *EnabledEventCampaignForQuest; // x0
  EventCampaignEntity_array *Data_29385720; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x0
  struct EventCampaignEntity_array *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1

  if ( (byte_40FD23C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, supportServantData);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v12);
    sub_B16FFC(&EventCampaignEntity___TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_12433/*"SUPPORT_FOLLOWER_HELP"*/, v16);
    sub_B16FFC(&StringLiteral_12487/*"SUPPORT_SELECT_HELP"*/, v17);
    sub_B16FFC(&StringLiteral_12434/*"SUPPORT_INFO_HELP"*/, v18);
    byte_40FD23C = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)supportServantData,
    (System_String_array **)friendPointCampaigns,
    *(System_String_array ***)&deckNum,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v19 = this->fields.supportServantData;
  if ( !v19 )
    goto LABEL_30;
  explanationLb = this->fields.explanationLb;
  if ( !v19->fields.isFriendInfo )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12487/*"SUPPORT_SELECT_HELP"*/, 0LL);
    if ( explanationLb )
    {
      UILabel__set_text(explanationLb, v30, 0LL);
      goto LABEL_27;
    }
LABEL_30:
    sub_B170D4();
  }
  if ( v19->fields.isSelectServant )
    v21 = (System_String_o **)&StringLiteral_12433/*"SUPPORT_FOLLOWER_HELP"*/;
  else
    v21 = (System_String_o **)&StringLiteral_12434/*"SUPPORT_INFO_HELP"*/;
  v22 = *v21;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get(v22, 0LL);
  if ( !explanationLb )
    goto LABEL_30;
  UILabel__set_text(explanationLb, v23, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !supportServantData )
    goto LABEL_30;
  questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
  v27 = (EventCampaignMaster_o *)MasterData_WarQuestSelectionMaster;
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
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_30;
  v38 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v37,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !v38 )
    goto LABEL_30;
  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(v38, questId, questPhase, 0LL, 0LL);
  if ( !v27 )
    goto LABEL_30;
  Data_29385720 = EventCampaignMaster__getData_29385720(v27, 24, EnabledEventCampaignForQuest, 0LL);
  if ( !Data_29385720 || !*(_QWORD *)&Data_29385720->max_length )
  {
    v42 = (struct EventCampaignEntity_array *)sub_B17014(EventCampaignEntity___TypeInfo, 0LL, v31);
    this->fields.eventFriendPoints = v42;
    p_eventFriendPoints = &this->fields.eventFriendPoints;
    goto LABEL_29;
  }
LABEL_27:
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v42 = friendPointCampaigns;
LABEL_29:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_eventFriendPoints,
    (System_Int32_array **)v42,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  SupportSelectListViewObject__clearItemObj(this, v43);
  SupportSelectListViewObject__setItemObj(this, deckNum, v44);
  SupportSelectListViewObject__InitAlphaMask(this, v45);
}


void __fastcall SupportSelectListViewObject__InitAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct UnityEngine_BoxCollider_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Component_o *manager; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_40FD243 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD243 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v7 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                 dispObject,
                                                 (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.colliders,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SupportSelectListViewObject__UpdateCollider(this, 1, v14);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v16 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v18 )
    {
      ComponentInParent_UIScrollView = UnityEngine_GameObject__GetComponentInParent_UIScrollView_(
                                         v18,
                                         (const MethodInfo_19D168C *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        v27 = UnityEngine_Component__get_gameObject(manager, 0LL);
        if ( v27 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v27,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          SupportSelectListViewObject__UpdateAlphaMask(this, v35);
          return;
        }
      }
    }
LABEL_17:
    sub_B170D4();
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
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v21; // x22
  int max_length; // w9
  SupportSelectObject_o *v23; // x21
  const MethodInfo *v24; // x1

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  if ( supportServantData->fields.isFriendInfo )
    return;
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  sub_B16F98(
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
    sub_B170D4();
  v21 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v21 >= max_length )
      break;
    if ( (unsigned int)v21 >= max_length )
    {
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v23 = supportSelectObject->m_Items[v21];
    if ( v23 )
    {
      v23->fields.eventFriendPoints = friendPointCampaigns;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v23->fields.eventFriendPoints,
        (System_Int32_array **)friendPointCampaigns,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      SupportSelectObject__ModifyItem(v23, v24);
      supportSelectObject = this->fields.supportSelectObject;
      ++v21;
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  SupportSelectObject_o *v8; // x8
  SupportSelectItemDraw_o *itemDraw; // x0

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_8:
    sub_B170D4();
  v5 = 0LL;
  v6 = flag;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, flag, method);
      sub_B170A0();
    }
    v8 = supportSelectObject->m_Items[v5];
    if ( v8 )
    {
      itemDraw = v8->fields.itemDraw;
      if ( itemDraw )
      {
        SupportSelectItemDraw__SetActiveDragSwapGuide(itemDraw, v6, 0LL);
        supportSelectObject = this->fields.supportSelectObject;
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
        sub_B17100(this, dragPrefab, manager);
        sub_B170A0();
      }
      v13 = dropObjectList->m_Items[v12];
      if ( !v13 )
        break;
      v13->fields.manager = (struct ListViewManager_o *)manager;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v13->fields.manager,
        (System_Int32_array **)manager,
        (System_String_array **)manager,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      v13->fields.dragObjectPrefab = dragPrefab;
      sub_B16F98(
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
    sub_B170D4();
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  float v8; // s8
  UnityEngine_Transform_o *v9; // x0
  float v10; // s0
  struct ListViewItemSeed_o *v11; // x8
  float v12; // s0
  UnityEngine_Component_o *v13; // x0
  float maxAlphaRate; // s10
  float v15; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s8
  const MethodInfo *v18; // x2
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  UIWidget_o *v25; // x19
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FD244 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD244 = 1;
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
          v6 = (UnityEngine_Component_o *)this->fields.scrollView;
          if ( !v6 )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform(v6, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
          v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( !v9 )
            goto LABEL_29;
          LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition(v9, 0LL);
          v11 = this->fields.itemSeed;
          if ( !v11 )
            goto LABEL_29;
          v12 = UnityEngine_Mathf__Clamp01(fabsf(v8 + v10) / v11->fields.arrangementPich.fields.x, 0LL);
          v13 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v13 )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          v15 = v12;
          gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !gameObject )
            goto LABEL_29;
          v17 = v15 * maxAlphaRate;
          if ( (((v17 > 0.05) ^ UnityEngine_GameObject__get_activeSelf(gameObject, 0LL)) & 1) != 0 )
            SupportSelectListViewObject__UpdateCollider(this, v17 <= 0.05, v18);
          v19 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v19
            || (v20 = UnityEngine_Component__get_gameObject(v19, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive(v20, v17 > 0.05, 0LL),
                (v25 = (UIWidget_o *)this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_B170D4();
          }
          v27.fields.r = v25->fields.mColor.fields.r;
          v27.fields.g = v25->fields.mColor.fields.g;
          v27.fields.b = v25->fields.mColor.fields.b;
          v27.fields.a = v17;
          var40.methodPointer = 0LL;
          var40.invoker_method = 0LL;
          UnityEngine_Color___ctor(v27, v21, v22, v23, v24, &var40);
          *(_QWORD *)&v28.fields.r = var40.methodPointer;
          *(_QWORD *)&v28.fields.b = var40.invoker_method;
          UIWidget__set_color(v25, v28, 0LL);
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UnityEngine_Collider_o *v8; // x0

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, enable, method);
      sub_B170A0();
    }
    v8 = (UnityEngine_Collider_o *)colliders->m_Items[v5];
    if ( v8 )
    {
      UnityEngine_Collider__set_enabled(v8, v6, 0LL);
      colliders = this->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__UpdateExplanationLabel(
        SupportSelectListViewObject_o *this,
        bool displaySwapInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o **v7; // x8
  bool v8; // zf
  UILabel_o *explanationLb; // x19
  System_String_o *v10; // x21
  System_String_o *v11; // x0

  if ( (byte_40FD242 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, displaySwapInfo);
    sub_B16FFC(&StringLiteral_12487/*"SUPPORT_SELECT_HELP"*/, v5);
    sub_B16FFC(&StringLiteral_12498/*"SUPPORT_SELECT_SWAP"*/, v6);
    byte_40FD242 = 1;
  }
  v7 = (System_String_o **)&StringLiteral_12498/*"SUPPORT_SELECT_SWAP"*/;
  v8 = !displaySwapInfo;
  explanationLb = this->fields.explanationLb;
  if ( v8 )
    v7 = (System_String_o **)&StringLiteral_12487/*"SUPPORT_SELECT_HELP"*/;
  v10 = *v7;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get(v10, 0LL);
  if ( !explanationLb )
    sub_B170D4();
  UILabel__set_text(explanationLb, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__callbackFuncObj(
        SupportSelectListViewObject_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  UnityEngine_Object_o *v12; // x22
  SupportSelectMenu_CallbackFunc_o *klass; // x0

  if ( (byte_40FD240 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SupportSelectListViewManager_TypeInfo, v9);
    byte_40FD240 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (v11 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == SupportSelectListViewManager_TypeInfo )
      v12 = (UnityEngine_Object_o *)this->fields.manager;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    if ( !v12 )
      sub_B170D4();
    klass = (SupportSelectMenu_CallbackFunc_o *)v12[14].klass;
    if ( klass )
      SupportSelectMenu_CallbackFunc__Invoke(klass, result, d, n, 0LL);
  }
}


void __fastcall SupportSelectListViewObject__clearItemObj(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v5; // x20
  int max_length; // w9
  SupportSelectObject_o *v7; // x0
  const MethodInfo *v8; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = supportSelectObject->m_Items[v5];
    if ( v7 )
    {
      SupportSelectObject__ClearItem(v7, method);
      SupportSelectListViewObject__setUpperClassIcon(this, v5, v8);
      supportSelectObject = this->fields.supportSelectObject;
      ++v5;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__clearItemObj_30841524(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectObject_o *v6; // x0
  const MethodInfo *v7; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
    goto LABEL_5;
  if ( supportSelectObject->max_length <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&classPos, method);
    sub_B170A0();
  }
  v6 = supportSelectObject->m_Items[classPos];
  if ( !v6 )
LABEL_5:
    sub_B170D4();
  SupportSelectObject__ClearItem(v6, *(const MethodInfo **)&classPos);
  SupportSelectListViewObject__setUpperClassIcon(this, classPos, v7);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, disp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  __int64 v9; // x21
  int namespaze; // w9
  EventCampaignEntity_array *monitor; // x22
  SupportServantData_o *v12; // x23
  SupportSelectObject_o *v13; // x24
  SupportSelectMenu_CallbackFunc_o *v14; // x25
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x2

  v6 = (Il2CppObject *)this;
  if ( (byte_40FD23E & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, *(_QWORD *)&deckNum);
    this = (SupportSelectListViewObject_o *)sub_B16FFC(&Method_SupportSelectListViewObject_callbackFuncObj__, v7);
    byte_40FD23E = 1;
  }
  klass = v6[7].klass;
  if ( !klass )
LABEL_9:
    sub_B170D4();
  v9 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v9 >= namespaze )
      break;
    if ( (unsigned int)v9 >= namespaze )
    {
      sub_B17100(this, *(_QWORD *)&deckNum, method);
      sub_B170A0();
    }
    v12 = (SupportServantData_o *)v6[9].klass;
    monitor = (EventCampaignEntity_array *)v6[9].monitor;
    v13 = (SupportSelectObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + v9);
    v14 = (SupportSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                SupportSelectMenu_CallbackFunc_TypeInfo,
                                                *(_QWORD *)&deckNum,
                                                method,
                                                v3,
                                                v4);
    SupportSelectMenu_CallbackFunc___ctor(v14, v6, Method_SupportSelectListViewObject_callbackFuncObj__, 0LL);
    if ( v13 )
    {
      SupportSelectObject__SetItem(v13, v12, deckNum, v9, monitor, v14, v15);
      SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v6, v9, v16);
      klass = v6[7].klass;
      ++v9;
      if ( klass )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj_30841616(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v7; // x20
  __int64 v8; // x1
  Il2CppClass *klass; // x8
  EventCampaignEntity_array *monitor; // x22
  SupportServantData_o *v11; // x23
  SupportSelectObject_o *v12; // x24
  SupportSelectMenu_CallbackFunc_o *v13; // x25
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x2

  v7 = (Il2CppObject *)this;
  if ( (byte_40FD23F & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, *(_QWORD *)&deckNum);
    this = (SupportSelectListViewObject_o *)sub_B16FFC(&Method_SupportSelectListViewObject_callbackFuncObj__, v8);
    byte_40FD23F = 1;
  }
  klass = v7[7].klass;
  if ( !klass )
    goto LABEL_7;
  if ( LODWORD(klass->_1.namespaze) <= classPos )
  {
    sub_B17100(this, *(_QWORD *)&deckNum, *(_QWORD *)&classPos);
    sub_B170A0();
  }
  v11 = (SupportServantData_o *)v7[9].klass;
  monitor = (EventCampaignEntity_array *)v7[9].monitor;
  v12 = (SupportSelectObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + classPos);
  v13 = (SupportSelectMenu_CallbackFunc_o *)sub_B170CC(
                                              SupportSelectMenu_CallbackFunc_TypeInfo,
                                              *(_QWORD *)&deckNum,
                                              *(_QWORD *)&classPos,
                                              method,
                                              v4);
  SupportSelectMenu_CallbackFunc___ctor(v13, v7, Method_SupportSelectListViewObject_callbackFuncObj__, 0LL);
  if ( !v12 )
LABEL_7:
    sub_B170D4();
  SupportSelectObject__SetItem(v12, v11, deckNum, classPos, monitor, v13, v14);
  SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v7, classPos, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setUpperClassIcon(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *supportServantData; // x0
  _QWORD **UserServantLeaderEntity; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_array *v9; // x8
  __int64 v10; // x21
  UISprite_o *v11; // x20
  __int64 v12; // x8
  struct UISprite_array *classIconSpriteList; // x8

  if ( (byte_40FD241 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewObject_TypeInfo, *(_QWORD *)&classPos);
    byte_40FD241 = 1;
  }
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_22;
  UserServantLeaderEntity = (_QWORD **)SupportServantData__getUserServantLeaderEntity(
                                         supportServantData,
                                         classPos,
                                         method);
  if ( !UserServantLeaderEntity || !UserServantLeaderEntity[7] )
  {
    classIconSpriteList = this->fields.classIconSpriteList;
    if ( !classIconSpriteList )
      goto LABEL_22;
    if ( classIconSpriteList->max_length <= classPos )
    {
LABEL_23:
      sub_B17100(UserServantLeaderEntity, v7, v8);
      sub_B170A0();
    }
    v10 = classPos;
    v11 = classIconSpriteList->m_Items[classPos];
    UserServantLeaderEntity = (_QWORD **)SupportSelectListViewObject_TypeInfo;
    if ( (BYTE3(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      UserServantLeaderEntity = (_QWORD **)SupportSelectListViewObject_TypeInfo;
    }
    v12 = *UserServantLeaderEntity[23];
    if ( v12 )
      goto LABEL_19;
LABEL_22:
    sub_B170D4();
  }
  v9 = this->fields.classIconSpriteList;
  if ( !v9 )
    goto LABEL_22;
  if ( v9->max_length <= classPos )
    goto LABEL_23;
  v10 = classPos;
  v11 = v9->m_Items[classPos];
  UserServantLeaderEntity = (_QWORD **)SupportSelectListViewObject_TypeInfo;
  if ( (BYTE3(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    UserServantLeaderEntity = (_QWORD **)SupportSelectListViewObject_TypeInfo;
  }
  v12 = UserServantLeaderEntity[23][1];
  if ( !v12 )
    goto LABEL_22;
LABEL_19:
  if ( *(_DWORD *)(v12 + 24) <= (unsigned int)classPos )
    goto LABEL_23;
  if ( !v11 )
    goto LABEL_22;
  UISprite__set_spriteName(v11, *(System_String_o **)(v12 + 8 * v10 + 32), 0LL);
}