void __fastcall AssetLoader___ctor(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AssetLoader__AddCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    AssetLoader__add_endCallback2(this, callbackFunc, method);
}


void __fastcall AssetLoader__AddEntry(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
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
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x21
  __int64 v55; // x0
  System_Int32_array **v56; // x1
  _DWORD *v57; // x22
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  __int64 v238; // x8
  unsigned __int64 v239; // x23
  signed __int64 v240; // x24
  Il2CppObject *v241; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v243; // x1
  CrashReporter_o *v244; // x19
  System_String_o *CacheName; // x0

  if ( (byte_40FCA12 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_14049, v7);
    sub_B16FFC(&StringLiteral_19973, v8);
    sub_B16FFC(&StringLiteral_12266, v9);
    sub_B16FFC(&StringLiteral_1178, v10);
    sub_B16FFC(&StringLiteral_13981, v11);
    sub_B16FFC(&StringLiteral_1173, v12);
    sub_B16FFC(&StringLiteral_14724, v13);
    sub_B16FFC(&StringLiteral_14759, v14);
    sub_B16FFC(&StringLiteral_17583, v15);
    sub_B16FFC(&StringLiteral_7075, v16);
    sub_B16FFC(&StringLiteral_19975, v17);
    sub_B16FFC(&StringLiteral_1186, v18);
    sub_B16FFC(&StringLiteral_1188, v19);
    sub_B16FFC(&StringLiteral_11390, v20);
    sub_B16FFC(&StringLiteral_4226, v21);
    sub_B16FFC(&StringLiteral_4590, v22);
    sub_B16FFC(&StringLiteral_4589, v23);
    sub_B16FFC(&StringLiteral_1200, v24);
    sub_B16FFC(&StringLiteral_14913, v25);
    sub_B16FFC(&StringLiteral_1190, v26);
    sub_B16FFC(&StringLiteral_19956, v27);
    sub_B16FFC(&StringLiteral_19970, v28);
    sub_B16FFC(&StringLiteral_1176, v29);
    sub_B16FFC(&StringLiteral_4225, v30);
    sub_B16FFC(&StringLiteral_7076, v31);
    sub_B16FFC(&StringLiteral_1175, v32);
    sub_B16FFC(&StringLiteral_19957, v33);
    sub_B16FFC(&StringLiteral_9452, v34);
    sub_B16FFC(&StringLiteral_19972, v35);
    sub_B16FFC(&StringLiteral_2090, v36);
    sub_B16FFC(&StringLiteral_1179, v37);
    sub_B16FFC(&StringLiteral_14454, v38);
    sub_B16FFC(&StringLiteral_12858, v39);
    sub_B16FFC(&StringLiteral_2089, v40);
    sub_B16FFC(&StringLiteral_19971, v41);
    sub_B16FFC(&StringLiteral_5252, v42);
    sub_B16FFC(&StringLiteral_4227, v43);
    sub_B16FFC(&StringLiteral_3785, v44);
    sub_B16FFC(&StringLiteral_19974, v45);
    sub_B16FFC(&StringLiteral_2093, v46);
    byte_40FCA12 = 1;
  }
  v47 = sub_B17014(string___TypeInfo, 37LL, method);
  if ( !v47 )
    goto LABEL_210;
  v54 = v47;
  v55 = StringLiteral_9452;
  if ( StringLiteral_9452 )
  {
    v55 = sub_B170BC(StringLiteral_9452, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_9452;
  }
  else
  {
    v56 = 0LL;
  }
  v57 = (_DWORD *)(v54 + 24);
  if ( !*(_DWORD *)(v54 + 24) )
    goto LABEL_195;
  *(_QWORD *)(v54 + 32) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 32), v56, v48, v49, v50, v51, v52, v53);
  v55 = StringLiteral_2090;
  if ( StringLiteral_2090 )
  {
    v55 = sub_B170BC(StringLiteral_2090, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_2090;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 1u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 40) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 40), v56, v48, v58, v59, v60, v61, v62);
  v55 = StringLiteral_13981;
  if ( StringLiteral_13981 )
  {
    v55 = sub_B170BC(StringLiteral_13981, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_13981;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 2u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 48) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 48), v56, v48, v63, v64, v65, v66, v67);
  v55 = StringLiteral_4226;
  if ( StringLiteral_4226 )
  {
    v55 = sub_B170BC(StringLiteral_4226, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_4226;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 3u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 56) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 56), v56, v48, v68, v69, v70, v71, v72);
  v55 = StringLiteral_12858;
  if ( StringLiteral_12858 )
  {
    v55 = sub_B170BC(StringLiteral_12858, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_12858;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 4u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 64) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 64), v56, v48, v73, v74, v75, v76, v77);
  v55 = StringLiteral_4227;
  if ( StringLiteral_4227 )
  {
    v55 = sub_B170BC(StringLiteral_4227, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_4227;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 5u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 72) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 72), v56, v48, v78, v79, v80, v81, v82);
  v55 = StringLiteral_4225;
  if ( StringLiteral_4225 )
  {
    v55 = sub_B170BC(StringLiteral_4225, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_4225;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 6u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 80) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 80), v56, v48, v83, v84, v85, v86, v87);
  v55 = StringLiteral_14049;
  if ( StringLiteral_14049 )
  {
    v55 = sub_B170BC(StringLiteral_14049, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_14049;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 7u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 88) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 88), v56, v48, v88, v89, v90, v91, v92);
  v55 = StringLiteral_3785;
  if ( StringLiteral_3785 )
  {
    v55 = sub_B170BC(StringLiteral_3785, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_3785;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 8u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 96) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 96), v56, v48, v93, v94, v95, v96, v97);
  v55 = StringLiteral_14724;
  if ( StringLiteral_14724 )
  {
    v55 = sub_B170BC(StringLiteral_14724, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_14724;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 9u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 104) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 104), v56, v48, v98, v99, v100, v101, v102);
  v55 = StringLiteral_14913;
  if ( StringLiteral_14913 )
  {
    v55 = sub_B170BC(StringLiteral_14913, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_14913;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xAu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 112) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 112), v56, v48, v103, v104, v105, v106, v107);
  v55 = StringLiteral_11390;
  if ( StringLiteral_11390 )
  {
    v55 = sub_B170BC(StringLiteral_11390, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_11390;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xBu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 120) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 120), v56, v48, v108, v109, v110, v111, v112);
  v55 = StringLiteral_2089;
  if ( StringLiteral_2089 )
  {
    v55 = sub_B170BC(StringLiteral_2089, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_2089;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xCu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 128) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 128), v56, v48, v113, v114, v115, v116, v117);
  v55 = StringLiteral_12266;
  if ( StringLiteral_12266 )
  {
    v55 = sub_B170BC(StringLiteral_12266, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_12266;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xDu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 136) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 136), v56, v48, v118, v119, v120, v121, v122);
  v55 = StringLiteral_7075;
  if ( StringLiteral_7075 )
  {
    v55 = sub_B170BC(StringLiteral_7075, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_7075;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xEu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 144) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 144), v56, v48, v123, v124, v125, v126, v127);
  v55 = StringLiteral_7076;
  if ( StringLiteral_7076 )
  {
    v55 = sub_B170BC(StringLiteral_7076, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_7076;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0xFu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 152) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 152), v56, v48, v128, v129, v130, v131, v132);
  v55 = StringLiteral_5252;
  if ( StringLiteral_5252 )
  {
    v55 = sub_B170BC(StringLiteral_5252, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_5252;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x10u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 160) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 160), v56, v48, v133, v134, v135, v136, v137);
  v55 = StringLiteral_14454;
  if ( StringLiteral_14454 )
  {
    v55 = sub_B170BC(StringLiteral_14454, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_14454;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x11u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 168) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 168), v56, v48, v138, v139, v140, v141, v142);
  v55 = StringLiteral_19956;
  if ( StringLiteral_19956 )
  {
    v55 = sub_B170BC(StringLiteral_19956, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19956;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x12u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 176) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 176), v56, v48, v143, v144, v145, v146, v147);
  v55 = StringLiteral_19973;
  if ( StringLiteral_19973 )
  {
    v55 = sub_B170BC(StringLiteral_19973, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19973;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x13u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 184) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 184), v56, v48, v148, v149, v150, v151, v152);
  v55 = StringLiteral_19974;
  if ( StringLiteral_19974 )
  {
    v55 = sub_B170BC(StringLiteral_19974, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19974;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x14u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 192) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 192), v56, v48, v153, v154, v155, v156, v157);
  v55 = StringLiteral_19971;
  if ( StringLiteral_19971 )
  {
    v55 = sub_B170BC(StringLiteral_19971, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19971;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x15u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 200) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 200), v56, v48, v158, v159, v160, v161, v162);
  v55 = StringLiteral_19957;
  if ( StringLiteral_19957 )
  {
    v55 = sub_B170BC(StringLiteral_19957, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19957;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x16u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 208) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 208), v56, v48, v163, v164, v165, v166, v167);
  v55 = StringLiteral_19970;
  if ( StringLiteral_19970 )
  {
    v55 = sub_B170BC(StringLiteral_19970, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19970;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x17u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 216) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 216), v56, v48, v168, v169, v170, v171, v172);
  v55 = StringLiteral_17583;
  if ( StringLiteral_17583 )
  {
    v55 = sub_B170BC(StringLiteral_17583, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_17583;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x18u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 224) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 224), v56, v48, v173, v174, v175, v176, v177);
  v55 = StringLiteral_19972;
  if ( StringLiteral_19972 )
  {
    v55 = sub_B170BC(StringLiteral_19972, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19972;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x19u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 232) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 232), v56, v48, v178, v179, v180, v181, v182);
  v55 = StringLiteral_19975;
  if ( StringLiteral_19975 )
  {
    v55 = sub_B170BC(StringLiteral_19975, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_19975;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Au )
    goto LABEL_195;
  *(_QWORD *)(v54 + 240) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 240), v56, v48, v183, v184, v185, v186, v187);
  v55 = StringLiteral_1173;
  if ( StringLiteral_1173 )
  {
    v55 = sub_B170BC(StringLiteral_1173, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1173;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Bu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 248) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 248), v56, v48, v188, v189, v190, v191, v192);
  v55 = StringLiteral_1175;
  if ( StringLiteral_1175 )
  {
    v55 = sub_B170BC(StringLiteral_1175, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1175;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Cu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 256) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 256), v56, v48, v193, v194, v195, v196, v197);
  v55 = StringLiteral_1176;
  if ( StringLiteral_1176 )
  {
    v55 = sub_B170BC(StringLiteral_1176, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1176;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Du )
    goto LABEL_195;
  *(_QWORD *)(v54 + 264) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 264), v56, v48, v198, v199, v200, v201, v202);
  v55 = StringLiteral_1178;
  if ( StringLiteral_1178 )
  {
    v55 = sub_B170BC(StringLiteral_1178, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1178;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Eu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 272) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 272), v56, v48, v203, v204, v205, v206, v207);
  v55 = StringLiteral_1179;
  if ( StringLiteral_1179 )
  {
    v55 = sub_B170BC(StringLiteral_1179, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1179;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x1Fu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 280) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 280), v56, v48, v208, v209, v210, v211, v212);
  v55 = StringLiteral_1186;
  if ( StringLiteral_1186 )
  {
    v55 = sub_B170BC(StringLiteral_1186, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1186;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x20u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 288) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 288), v56, v48, v213, v214, v215, v216, v217);
  v55 = StringLiteral_1188;
  if ( StringLiteral_1188 )
  {
    v55 = sub_B170BC(StringLiteral_1188, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1188;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x21u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 296) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 296), v56, v48, v218, v219, v220, v221, v222);
  v55 = StringLiteral_1190;
  if ( StringLiteral_1190 )
  {
    v55 = sub_B170BC(StringLiteral_1190, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1190;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x22u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 304) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 304), v56, v48, v223, v224, v225, v226, v227);
  v55 = StringLiteral_1200;
  if ( StringLiteral_1200 )
  {
    v55 = sub_B170BC(StringLiteral_1200, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !v55 )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_1200;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *v57 <= 0x23u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 312) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 312), v56, v48, v228, v229, v230, v231, v232);
  v55 = StringLiteral_14759;
  if ( StringLiteral_14759 )
  {
    v55 = sub_B170BC(StringLiteral_14759, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( v55 )
    {
      v56 = (System_Int32_array **)StringLiteral_14759;
      goto LABEL_188;
    }
LABEL_209:
    sub_B170F4(v55);
    sub_B170A0();
  }
  v56 = 0LL;
LABEL_188:
  if ( *v57 <= 0x24u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 320) = v56;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 320), v56, v48, v233, v234, v235, v236, v237);
  v238 = *(_QWORD *)(v54 + 24);
  if ( (int)v238 < 1 )
  {
LABEL_196:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v241 = (Il2CppObject *)errorCode;
    goto LABEL_208;
  }
  v239 = 0LL;
  v240 = (int)v238;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_210;
    v55 = System_String__Contains(errorCode, *(System_String_o **)(v54 + 32 + 8 * v239), 0LL);
    if ( (v55 & 1) != 0 )
      break;
    if ( (__int64)++v239 >= v240 )
      goto LABEL_196;
    if ( v239 >= (unsigned int)*v57 )
      goto LABEL_195;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v244 = (CrashReporter_o *)Instance, CacheName = AssetData__get_CacheName(this->fields.data, v243), !v244) )
  {
LABEL_210:
    sub_B170D4();
  }
  CrashReporter__AddCustomKey(v244, (System_String_o *)StringLiteral_4589, CacheName, 0LL);
  v55 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v239 >= *v57 )
  {
LABEL_195:
    sub_B17100(v55, v56, v48);
    sub_B170A0();
  }
  if ( !v55 )
    goto LABEL_210;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)v55,
    (System_String_o *)StringLiteral_4590,
    *(System_String_o **)(v54 + 32 + 8 * v239),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v241 = (Il2CppObject *)StringLiteral_2093;
LABEL_208:
  UnityEngine_Debug__LogError(v241, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndHandler_o *endCallback; // x0
  AssetLoader_LoadEndDataHandler_o *endCallback2; // x0

  if ( (byte_40FCA0F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCA0F = 1;
  }
  endCallback = this->fields.endCallback;
  this->fields.isEndLoad = 1;
  if ( endCallback )
    AssetLoader_LoadEndHandler__Invoke(endCallback, this, 0LL);
  endCallback2 = this->fields.endCallback2;
  if ( endCallback2 )
    AssetLoader_LoadEndDataHandler__Invoke(endCallback2, this->fields.data, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader__EndRetryDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    AssetLoader__Reboot(this, (const MethodInfo *)isDecide);
}


void __fastcall AssetLoader__EndWarningDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall AssetLoader__Init(AssetLoader_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  System_String_o *v4; // x0

  data = this->fields.data;
  if ( !data )
    return 0;
  v4 = data->fields.name;
  if ( !v4 )
    sub_B170D4();
  return System_String__Equals_43731072(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_29936476(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_29928224(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FCA0E & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_40FCA0E = 1;
  }
  v7 = sub_B170CC(AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames, method, v3, v4);
  AssetLoader__LoadDataCR_d__29___ctor((AssetLoader__LoadDataCR_d__29_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = resourceNames;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)resourceNames,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  struct System_Byte_array **p_decData; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FCA10 & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, method);
    byte_40FCA10 = 1;
  }
  readData = this->fields.readData;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  p_decData = &this->fields._decData;
  sub_B16F98((BattleServantConfConponent_o *)p_decData, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  *((_BYTE *)p_decData - 8) = 1;
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  ManagementManager_c *v18; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_40FCA11 & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v9);
    byte_40FCA11 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loader, 0LL, v11, v12, v13, v14, v15, v16);
  }
  this->fields.readData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_40F7DF6 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, v17);
    byte_40F7DF6 = 1;
  }
  v18 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v18 = ManagementManager_TypeInfo;
  }
  if ( v18->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40644448(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


void __fastcall AssetLoader__StartLoad(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x21
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  bool v13; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callbackFunc,
    (System_String_array **)resourceNames,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (__int64)*(p_endCallback - 1);
  if ( !v12 )
    sub_B170D4();
  v13 = *(_DWORD *)(v12 + 40) != *(_DWORD *)(v12 + 44);
  this->fields.isDownload = v13;
  this->fields.isRequestDownload = v13;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
}


void __fastcall AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_B170D4();
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall AssetLoader__add_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCA0A & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_40FCA0A = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetLoader__remove_endCallback(v11, v12, v13);
}


void __fastcall AssetLoader__add_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCA0C & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_40FCA0C = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetLoader__remove_endCallback2(v11, v12, v13);
}


bool __fastcall AssetLoader__get_IsRequestDownload(AssetLoader_o *this, const MethodInfo *method)
{
  return this->fields.isRequestDownload;
}


int32_t __fastcall AssetLoader__get_LoadSize(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  float downloadProgress; // s0
  struct AssetData_o *v5; // x8
  float v6; // s0
  double v7; // d0
  struct AssetData_o *data; // x8

  if ( !this->fields.isDownload )
  {
    data = this->fields.data;
    if ( data )
    {
      LODWORD(loader) = data->fields.size;
      return (int)loader;
    }
    goto LABEL_11;
  }
  loader = this->fields.loader;
  if ( !loader )
    return (int)loader;
  downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(loader, 0LL);
  v5 = this->fields.data;
  if ( !v5 )
LABEL_11:
    sub_B170D4();
  v6 = downloadProgress * (float)v5->fields.size;
  if ( v6 == INFINITY )
    v7 = -v6;
  else
    v7 = v6;
  LODWORD(loader) = (int)v7;
  return (int)loader;
}


System_String_o *__fastcall AssetLoader__get_Name(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.size;
}


void __fastcall AssetLoader__remove_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCA0B & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_40FCA0B = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetLoader__add_endCallback2(v11, v12, v13);
}


void __fastcall AssetLoader__remove_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FCA0D & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_40FCA0D = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetLoader__get_IsRequestDownload(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndDataHandler__BeginInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)data;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AssetLoader_LoadEndDataHandler_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  AssetData_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(AssetData_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, AssetData_o *, _QWORD); // x0
  AssetLoader_LoadEndDataHandler_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(AssetData_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  AssetData_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndDataHandler_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (AssetLoader_LoadEndDataHandler_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(AssetData_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, data, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = data->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(data, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(AssetData_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(data, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = data->klass;
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(data, class_0, v9);
                }
                (*(void (__fastcall **)(AssetData_o *, _QWORD))v14)(data, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetData_o *, _QWORD))&data->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  data,
                  *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(data, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, data, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))v21)(v29, data, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))(*v29
                                                                       + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                       + 312))(
                v29,
                data,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetData_o *, __int64))v30)(v29, data, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndHandler___ctor(
        AssetLoader_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndHandler__BeginInvoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)loader;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AssetLoader_LoadEndHandler_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  AssetLoader_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(AssetLoader_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, AssetLoader_o *, _QWORD); // x0
  AssetLoader_LoadEndHandler_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(AssetLoader_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  AssetLoader_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndHandler_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (AssetLoader_LoadEndHandler_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(AssetLoader_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, loader, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = loader->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(loader, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(AssetLoader_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(loader, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = loader->klass;
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(loader, class_0, v9);
                }
                (*(void (__fastcall **)(AssetLoader_o *, _QWORD))v14)(loader, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetLoader_o *, _QWORD))&loader->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  loader,
                  *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(loader, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, loader, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))v21)(v29, loader, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))(*v29
                                                                         + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                         + 312))(
                v29,
                loader,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetLoader_o *, __int64))v30)(v29, loader, v28);
    }
  }
}


void __fastcall AssetLoader__LoadDataCR_d__29___ctor(
        AssetLoader__LoadDataCR_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetLoader__LoadDataCR_d__29__MoveNext(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x28
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
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  struct AssetLoader_o *_4__this; // x20
  AssetData_o *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  bool IsNullOrEmpty; // w0
  bool v69; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 v71; // x10
  UnityEngine_Networking_DownloadHandler_o *v72; // x8
  uint32_t klass; // w8
  BattleServantConfConponent_o *p_req_5__13; // x0
  UnityEngine_AssetBundleCreateRequest_o *v75; // x8
  AssetData_o *v76; // x20
  UnityEngine_AssetBundle_o *assetBundle; // x0
  Il2CppObject *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int32_t v85; // w8
  UnityEngine_AsyncOperation_o **p_asyncOperater_5__12; // x21
  UnityEngine_AsyncOperation_o **v87; // x21
  struct System_String_o **p_url_5__11; // x21
  UnityEngine_Networking_UnityWebRequest_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  AssetData_o *v102; // x0
  UnityEngine_Networking_DownloadHandler_o *v103; // x0
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Byte_array *readData; // x22
  AssetData_o *v112; // x0
  UnityEngine_Networking_UnityWebRequest_o *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x1
  BattleServantConfConponent_o *p_errorCode_5__6; // x22
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  float unscaledTime; // s8
  ManagerConfig_c *v139; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v141; // x23
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  int64_t v156; // x23
  ManagerConfig_c *v157; // x0
  System_Int32_array **v158; // x1
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  struct System_String_o **p_errorLocalizeCode_5__7; // x0
  System_Int32_array **v166; // x1
  AssetData_o *v167; // x0
  struct System_String_o *Url; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  AssetData_o *v175; // x0
  System_String_o *url_5__11; // x21
  System_String_o *v177; // x0
  struct AssetData_o *v178; // x8
  System_String_o *v179; // x22
  bool v180; // w23
  System_String_o *Key; // x0
  System_Int32_array **v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  UnityEngine_Networking_UnityWebRequest_o *v189; // x0
  struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v190; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  float progress; // s0
  float loadProgress_5__9; // s9
  float v199; // s8
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  float v206; // s0
  bool v207; // zf
  float v208; // s8
  UnityEngine_Networking_UnityWebRequest_o *v209; // x0
  UnityEngine_Networking_DownloadHandler_o *v210; // x0
  __int64 v211; // x10
  UnityEngine_Networking_DownloadHandler_o *v212; // x23
  UnityEngine_Networking_UnityWebRequest_o *v213; // x0
  UnityEngine_Networking_UnityWebRequest_o *v214; // x0
  System_String_o *v215; // x0
  __int64 v216; // x2
  int v217; // w8
  struct System_String_o *v218; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  UnityEngine_Networking_UnityWebRequest_o *v225; // x0
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  UnityEngine_Networking_DownloadHandler_c *v232; // x0
  __int64 (**image)(void); // x8
  __int64 v234; // x10
  __int64 v235; // x0
  UnityEngine_Networking_DownloadHandler_c *v236; // x8
  System_String_o *v237; // x22
  System_String_o *v238; // x0
  struct System_String_o *v239; // x1
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  UnityEngine_Networking_UnityWebRequest_o *v246; // x0
  System_String_o *v247; // x22
  System_String_o *v248; // x0
  struct System_String_o *v249; // x0
  System_String_array **v250; // x2
  System_String_array **v251; // x3
  System_Boolean_array **v252; // x4
  System_Int32_array **v253; // x5
  System_Int32_array *v254; // x6
  System_Int32_array *v255; // x7
  UnityEngine_Networking_UnityWebRequest_o *v256; // x0
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v258; // x23
  System_String_o *v259; // x23
  unsigned __int64 IsSame; // x0
  System_Int32_array **v261; // x1
  System_String_array *v262; // x0
  System_String_array *v263; // x23
  System_String_o *v264; // x0
  System_String_o *v265; // x0
  System_String_o *v266; // x24
  int32_t v267; // w8
  System_String_o *v268; // x0
  AssetData_o *v269; // x0
  __int64 v270; // x0
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  System_String_array *v276; // x22
  UnityEngine_Networking_DownloadHandler_c *v277; // x0
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  System_Int32_array **v283; // x23
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  struct AssetData_o *v289; // x8
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  System_Int32_array **v295; // x23
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_String_array **v301; // x3
  System_Boolean_array **v302; // x4
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  System_Int32_array **v306; // x23
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  struct System_String_o *v312; // x0
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  ManagerConfig_c *v319; // x0
  WebViewManager_o *Instance; // x0
  struct AssetData_o *v321; // x8
  CommonUI_o *v322; // x21
  System_String_o *v323; // x22
  __int64 v324; // x1
  __int64 v325; // x2
  __int64 v326; // x3
  __int64 v327; // x4
  ErrorDialog_ClickDelegate_o *v328; // x23
  ManagementManager_c *v329; // x0
  _BOOL4 isDuringStartup; // w19
  WebViewManager_o *v331; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v333; // x22
  System_String_o *v334; // x21
  System_String_o *v335; // x23
  System_String_o *v336; // x23
  __int64 v337; // x1
  __int64 v338; // x2
  __int64 v339; // x3
  __int64 v340; // x4
  ErrorDialog_ClickDelegate_o *v341; // x24
  System_String_o *v342; // x23
  System_String_o *v343; // x23
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x3
  __int64 v347; // x4
  ErrorDialog_ClickDelegate_o *v348; // x24
  NetworkManager_c *v349; // x0
  UnityEngine_Networking_UnityWebRequest_o *v350; // x0
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  System_String_array **v357; // x2
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  System_Int32_array **v360; // x5
  System_Int32_array *v361; // x6
  System_Int32_array *v362; // x7
  struct System_String_o *ConfigFileAddress; // x0
  System_String_array **v364; // x2
  System_String_array **v365; // x3
  System_Boolean_array **v366; // x4
  System_Int32_array **v367; // x5
  System_Int32_array *v368; // x6
  System_Int32_array *v369; // x7
  System_String_o *v370; // x21
  System_String_o *UrlString; // x0
  System_Int32_array **v372; // x0
  System_String_array **v373; // x2
  System_String_array **v374; // x3
  System_Boolean_array **v375; // x4
  System_Int32_array **v376; // x5
  System_Int32_array *v377; // x6
  System_Int32_array *v378; // x7
  UnityEngine_Networking_UnityWebRequest_o **v379; // x21
  float v380; // s8
  ManagerConfig_c *v381; // x0
  float v382; // s0
  struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v383; // x0
  System_String_array **v384; // x2
  System_String_array **v385; // x3
  System_Boolean_array **v386; // x4
  System_Int32_array **v387; // x5
  System_Int32_array *v388; // x6
  System_Int32_array *v389; // x7
  System_String_array **v390; // x2
  System_String_array **v391; // x3
  System_Boolean_array **v392; // x4
  System_Int32_array **v393; // x5
  System_Int32_array *v394; // x6
  System_Int32_array *v395; // x7
  float v396; // s0
  float v397; // s9
  float v398; // s8
  float v399; // s0
  float v400; // s8
  System_String_o **v401; // x21
  UnityEngine_Networking_UnityWebRequest_o *v402; // x0
  UnityEngine_Networking_UnityWebRequest_o **v403; // x22
  bool isDone; // w0
  System_String_o *v405; // x0
  bool v406; // w0
  UnityEngine_Networking_DownloadHandler_o *v407; // x0
  System_String_o *text; // x23
  System_String_o *v409; // x23
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  System_String_o *v416; // x0
  System_String_o *v417; // x23
  int v418; // w8
  int32_t v419; // w0
  int32_t v420; // w25
  System_String_o *v421; // x24
  System_String_o *v422; // x23
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v424; // x25
  uint32_t v425; // w25
  int v426; // w8
  System_String_array *v427; // x0
  __int64 v428; // x25
  System_String_array *v429; // x21
  il2cpp_array_size_t v430; // w26
  System_String_o *v431; // x22
  System_String_array *v432; // x0
  __int64 v433; // x8
  System_String_array *v434; // x22
  System_String_o *v435; // x0
  char v436; // w8
  System_String_o *v437; // x0
  System_String_o *v438; // x23
  System_String_o **v439; // x9
  System_String_o *v440; // x22
  System_String_o *v441; // x0
  System_String_o *v442; // x0
  System_String_o *v443; // x0
  int v444; // w23
  struct AssetData_o *v445; // x8
  ManagementManager_c *v446; // x0
  _BOOL4 v447; // w19
  CommonUI_o *v448; // x21
  System_String_o *v449; // x22
  __int64 v450; // x1
  __int64 v451; // x2
  __int64 v452; // x3
  __int64 v453; // x4
  ErrorDialog_ClickDelegate_o *v454; // x23
  ManagementManager_c *v455; // x0
  _BOOL4 v456; // w21
  CommonUI_o *v457; // x19
  __int64 *v458; // x8
  System_String_o *v459; // x21
  __int64 v460; // x1
  __int64 v461; // x2
  __int64 v462; // x3
  __int64 v463; // x4
  ErrorDialog_ClickDelegate_o *v464; // x22
  bool result; // w0
  __int64 *v466; // x8
  System_String_o *v467; // x22
  __int64 v468; // x1
  __int64 v469; // x2
  __int64 v470; // x3
  __int64 v471; // x4
  ErrorDialog_ClickDelegate_o *v472; // x23
  System_String_array **v473; // x2
  System_String_array **v474; // x3
  System_Boolean_array **v475; // x4
  System_Int32_array **v476; // x5
  System_Int32_array *v477; // x6
  System_Int32_array *v478; // x7
  System_String_array **v479; // x2
  System_String_array **v480; // x3
  System_Boolean_array **v481; // x4
  System_Int32_array **v482; // x5
  System_Int32_array *v483; // x6
  System_Int32_array *v484; // x7
  System_String_o *name; // x21
  AssetData_o *v486; // x22
  UnityEngine_Networking_UnityWebRequest_o *v487; // x0
  UnityEngine_Networking_UnityWebRequest_o **v488; // x21
  UnityEngine_Networking_DownloadHandler_o *v489; // x0
  __int64 v490; // x10
  __int64 v491; // x10
  System_Byte_array *v492; // x0
  struct UnityEngine_AssetBundleCreateRequest_o *v493; // x0
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  System_String_array **v500; // x2
  System_String_array **v501; // x3
  System_Boolean_array **v502; // x4
  System_Int32_array **v503; // x5
  System_Int32_array *v504; // x6
  System_Int32_array *v505; // x7
  Il2CppObject *req_5__13; // x1
  System_String_array **v507; // x2
  System_String_array **v508; // x3
  System_Boolean_array **v509; // x4
  System_Int32_array **v510; // x5
  System_Int32_array *v511; // x6
  System_Int32_array *v512; // x7
  AssetData_o *v513; // x0
  System_Int32_array **LoadRequest; // x0
  BattleServantConfConponent_o *v515; // x20
  System_String_array **v516; // x2
  System_String_array **v517; // x3
  System_Boolean_array **v518; // x4
  System_Int32_array **v519; // x5
  System_Int32_array *v520; // x6
  System_Int32_array *v521; // x7
  Il2CppObject *v522; // x0
  Il2CppObject **p__2__current; // x26
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  int v530; // w8
  int32_t autoRetryCount_5__3; // w19
  ManagerConfig_c *v532; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v534; // x20
  System_String_array **v535; // x2
  System_String_array **v536; // x3
  System_Boolean_array **v537; // x4
  System_Int32_array **v538; // x5
  System_Int32_array *v539; // x6
  System_Int32_array *v540; // x7
  Il2CppObject *v541; // x1
  UnityEngine_Networking_UnityWebRequest_o *v542; // x0
  System_String_array **v543; // x2
  System_String_array **v544; // x3
  System_Boolean_array **v545; // x4
  System_Int32_array **v546; // x5
  System_Int32_array *v547; // x6
  System_Int32_array *v548; // x7
  System_String_array **v549; // x2
  System_String_array **v550; // x3
  System_Boolean_array **v551; // x4
  System_Int32_array **v552; // x5
  System_Int32_array *v553; // x6
  System_Int32_array *v554; // x7
  Il2CppObject *v555; // x1
  Il2CppObject *v556; // x1
  System_Int32_array **v557; // x1
  System_String_array **v558; // x2
  System_String_array **v559; // x3
  System_Boolean_array **v560; // x4
  System_Int32_array **v561; // x5
  System_Int32_array *v562; // x6
  System_Int32_array *v563; // x7
  ManagerConfig_c *v564; // x0
  WebViewManager_o *v565; // x0
  struct AssetData_o *v566; // x8
  CommonUI_o *v567; // x22
  System_String_o *v568; // x21
  __int64 v569; // x1
  __int64 v570; // x2
  __int64 v571; // x3
  __int64 v572; // x4
  ErrorDialog_ClickDelegate_o *v573; // x23
  Il2CppObject *v574; // x1
  ManagementManager_c *v575; // x0
  _BOOL4 v576; // w19
  CommonUI_o *v577; // x21
  System_String_o *v578; // x22
  __int64 v579; // x1
  __int64 v580; // x2
  __int64 v581; // x3
  __int64 v582; // x4
  ErrorDialog_ClickDelegate_o *v583; // x23
  System_String_o *v584; // x22
  __int64 v585; // x1
  __int64 v586; // x2
  __int64 v587; // x3
  __int64 v588; // x4
  ErrorDialog_ClickDelegate_o *v589; // x23
  Il2CppObject *v590; // x1
  UnityEngine_WaitForSeconds_o *v591; // x20
  System_String_array **v592; // x2
  System_String_array **v593; // x3
  System_Boolean_array **v594; // x4
  System_Int32_array **v595; // x5
  System_Int32_array *v596; // x6
  System_Int32_array *v597; // x7
  AssetLoader___c_c *v598; // x0
  struct AssetLoader___c_StaticFields *v599; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v601; // x21
  struct AssetLoader___c_StaticFields *v602; // x0
  System_String_array **v603; // x2
  System_String_array **v604; // x3
  System_Boolean_array **v605; // x4
  System_Int32_array **v606; // x5
  System_Int32_array *v607; // x6
  System_Int32_array *v608; // x7
  UnityEngine_WaitUntil_o *v609; // x21
  System_String_array **v610; // x2
  System_String_array **v611; // x3
  System_Boolean_array **v612; // x4
  System_Int32_array **v613; // x5
  System_Int32_array *v614; // x6
  System_Int32_array *v615; // x7
  UnityEngine_Networking_DownloadHandler_o *v616; // x0
  ManagerConfig_c *v617; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_AsyncOperation_o *asyncOperater_5__12; // x0
  Il2CppObject *wait_5__10; // x1
  ManagerConfig_c *v621; // x0
  struct ManagerConfig_StaticFields *v622; // x8
  UnityEngine_AsyncOperation_o *v623; // x0
  Il2CppObject *v624; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  AssetLoader__LoadDataCR_d__29_o *v627; // [xsp+28h] [xbp-78h]
  __int64 v628; // [xsp+30h] [xbp-70h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_40F9124 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetLoader_EndRebootDialog__, method);
    sub_B16FFC(&Method_AssetLoader_EndRetryDialog__, v10);
    sub_B16FFC(&Method_AssetLoader_EndWarningDialog__, v11);
    sub_B16FFC(&AssetManager_TypeInfo, v12);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v13);
    sub_B16FFC(&char___TypeInfo, v14);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_B16FFC(&CommonServicePluginScript_TypeInfo, v16);
    sub_B16FFC(&Crc32_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19);
    sub_B16FFC(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v20);
    sub_B16FFC(&DownloadHandlerFileWithCrcCheck_TypeInfo, v21);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v22);
    sub_B16FFC(&System_Func_bool__TypeInfo, v23);
    sub_B16FFC(&System_IO_IOException_TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&ManagementManager_TypeInfo, v26);
    sub_B16FFC(&ManagerConfig_TypeInfo, v27);
    sub_B16FFC(&NetworkManager_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B16FFC(&string___TypeInfo, v30);
    sub_B16FFC(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v31);
    sub_B16FFC(&AssetLoader___c_TypeInfo, v32);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v33);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v34);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v35);
    sub_B16FFC(&StringLiteral_26, v36);
    sub_B16FFC(&StringLiteral_9246, v37);
    sub_B16FFC(&StringLiteral_7070, v38);
    sub_B16FFC(&StringLiteral_5301, v39);
    sub_B16FFC(&StringLiteral_2107, v40);
    sub_B16FFC(&StringLiteral_9255, v41);
    sub_B16FFC(&StringLiteral_80, v42);
    sub_B16FFC(&StringLiteral_2094, v43);
    sub_B16FFC(&StringLiteral_654, v44);
    sub_B16FFC(&StringLiteral_657, v45);
    sub_B16FFC(&StringLiteral_1189, v46);
    sub_B16FFC(&StringLiteral_1743, v47);
    sub_B16FFC(&StringLiteral_15682, v48);
    sub_B16FFC(&StringLiteral_2104, v49);
    sub_B16FFC(&StringLiteral_23604, v50);
    sub_B16FFC(&StringLiteral_12312, v51);
    sub_B16FFC(&StringLiteral_653, v52);
    sub_B16FFC(&StringLiteral_9245, v53);
    sub_B16FFC(&StringLiteral_585, v54);
    sub_B16FFC(&StringLiteral_655, v55);
    sub_B16FFC(&StringLiteral_651, v56);
    sub_B16FFC(&StringLiteral_18327, v57);
    sub_B16FFC(&StringLiteral_1533, v58);
    sub_B16FFC(&StringLiteral_1744, v59);
    sub_B16FFC(&StringLiteral_2105, v60);
    sub_B16FFC(&StringLiteral_656, v61);
    sub_B16FFC(&StringLiteral_1, v62);
    byte_40F9124 = 1;
  }
  v628 = 0LL;
  value = 0LL;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      data = _4__this->fields.data;
      if ( !data )
        goto LABEL_438;
      this->fields._isEncrypted_5__2 = AssetData__get_IsAssetBundle(data, 0LL);
      this->fields._autoRetryCount_5__3 = 0;
      goto LABEL_57;
    case 1:
      p_asyncOperater_5__12 = (UnityEngine_AsyncOperation_o **)&this->fields._asyncOperater_5__12;
      this->fields.__1__state = -1;
      goto LABEL_79;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_173;
    case 3:
      this->fields.__1__state = -1;
      goto LABEL_202;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_201;
    case 5:
      v87 = (UnityEngine_AsyncOperation_o **)&this->fields._asyncOperater_5__12;
      this->fields.__1__state = -1;
      goto LABEL_230;
    case 6:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_388;
    case 7:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_409;
    case 8:
      this->fields._asyncOperater_5__12 = 0LL;
      this->fields.__1__state = -1;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._asyncOperater_5__12, 0LL, v2, v3, v4, v5, v6, v7);
      p_url_5__11 = &this->fields._url_5__11;
      goto LABEL_221;
    case 9:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_338;
    case 0xA:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_362;
    case 0xB:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      p_loader = &_4__this->fields.loader;
      loader = _4__this->fields.loader;
      if ( !loader )
        goto LABEL_438;
      error = UnityEngine_Networking_UnityWebRequest__get_error(loader, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
      if ( !*p_loader )
        goto LABEL_438;
      v69 = IsNullOrEmpty;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        v71 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1);
        if ( *(&downloadHandler->klass->_2.bitflags2 + 1) >= (unsigned int)v71 )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[v71 - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v72 = downloadHandler;
          else
            v72 = 0LL;
          if ( v69 )
            goto LABEL_13;
LABEL_44:
          if ( !*p_loader )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose(*p_loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v96, v97, v98, v99, v100, v101);
          v102 = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !v102 )
            goto LABEL_438;
          AssetData__ResetVersion(v102, 0LL);
          goto LABEL_57;
        }
      }
      v72 = 0LL;
      if ( !v69 )
        goto LABEL_44;
LABEL_13:
      if ( v72 )
      {
        klass = (uint32_t)v72[1].klass;
      }
      else
      {
        if ( !*p_loader )
          goto LABEL_438;
        v103 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
        if ( !v103 )
          goto LABEL_438;
        v104 = (System_Int32_array **)UnityEngine_Networking_DownloadHandler__get_data(v103, 0LL);
        _4__this->fields.readData = (struct System_Byte_array *)v104;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.readData, v104, v105, v106, v107, v108, v109, v110);
        readData = _4__this->fields.readData;
        if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        klass = Crc32__Compute(readData, 0LL);
      }
      v112 = _4__this->fields.data;
      if ( !v112 )
        goto LABEL_438;
      if ( klass == v112->fields.crc )
        goto LABEL_343;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      AssetData__ResetVersion(v112, 0LL);
      v113 = _4__this->fields.loader;
      if ( !v113 )
        goto LABEL_438;
      UnityEngine_Networking_UnityWebRequest__Dispose(v113, 0LL);
      _4__this->fields.loader = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v114, v115, v116, v117, v118, v119);
      _4__this->fields.readData = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v120, v121, v122, v123, v124, v125);
      while ( 1 )
      {
LABEL_57:
        _4__this->fields.readData = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        if ( !_4__this->fields.isDownload )
          goto LABEL_341;
        *(_WORD *)&this->fields._isAutoRetry_5__4 = 0;
        this->fields._errorCode_5__6 = 0LL;
        p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        this->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__7,
          0LL,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        v139 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v139 = ManagerConfig_TypeInfo;
        }
        TIMEOUT = v139->static_fields->TIMEOUT;
        this->fields._loadProgress_5__9 = 0.0;
        this->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
        v141 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v134,
                                                    v135,
                                                    v136,
                                                    v137);
        UnityEngine_WaitForEndOfFrame___ctor(v141, 0LL);
        this->fields._wait_5__10 = v141;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._wait_5__10,
          (System_Int32_array **)v141,
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
        Path = AssetStorageCache__GetPath(0LL);
        if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        }
        FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
        if ( FreeSize >= 1 )
        {
          v156 = FreeSize;
          v157 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v157 = ManagerConfig_TypeInfo;
          }
          if ( v156 < v157->static_fields->LIMIT_FREE_SIZE )
          {
            _4__this->fields.isErrorDialog = 1;
            v158 = (System_Int32_array **)StringLiteral_5301;
            p_errorCode_5__6->klass = (BattleServantConfConponent_c *)StringLiteral_5301;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorCode_5__6,
              v158,
              v150,
              v151,
              v152,
              v153,
              v154,
              v155);
            p_errorLocalizeCode_5__7 = &this->fields._errorLocalizeCode_5__7;
            v166 = (System_Int32_array **)StringLiteral_9255;
            this->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9255;
            goto LABEL_165;
          }
        }
        v167 = _4__this->fields.data;
        if ( !v167 )
          goto LABEL_438;
        Url = AssetData__get_Url(v167, 0LL);
        this->fields._url_5__11 = Url;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._url_5__11,
          (System_Int32_array **)Url,
          v169,
          v170,
          v171,
          v172,
          v173,
          v174);
        v175 = _4__this->fields.data;
        if ( !v175 )
          goto LABEL_438;
        url_5__11 = this->fields._url_5__11;
        v177 = AssetData__get_Path(v175, 0LL);
        v178 = _4__this->fields.data;
        v179 = v177;
        if ( this->fields._isEncrypted_5__2 )
        {
          if ( !v178 )
            goto LABEL_438;
          v180 = v178->fields.entryCount > 0;
        }
        else
        {
          if ( !v178 )
            goto LABEL_438;
          v180 = 0;
        }
        Key = AssetData__get_Key(_4__this->fields.data, 0LL);
        v182 = (System_Int32_array **)UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, v179, v180, Key, 0LL);
        _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v182;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, v182, v183, v184, v185, v186, v187, v188);
        v189 = _4__this->fields.loader;
        if ( !v189 )
          goto LABEL_438;
        v190 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(v189, 0LL);
        this->fields._asyncOperater_5__12 = v190;
        p_asyncOperater_5__12 = (UnityEngine_AsyncOperation_o **)&this->fields._asyncOperater_5__12;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._asyncOperater_5__12,
          (System_Int32_array **)v190,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196);
LABEL_79:
        if ( !*p_asyncOperater_5__12 )
LABEL_438:
          sub_B170D4();
        if ( !UnityEngine_AsyncOperation__get_isDone(*p_asyncOperater_5__12, 0LL) )
        {
          if ( !*p_asyncOperater_5__12 )
            goto LABEL_438;
          progress = UnityEngine_AsyncOperation__get_progress(*p_asyncOperater_5__12, 0LL);
          loadProgress_5__9 = this->fields._loadProgress_5__9;
          v199 = progress;
          v206 = UnityEngine_Time__get_unscaledTime(0LL);
          v207 = v199 == loadProgress_5__9;
          v208 = v206;
          if ( !v207 )
          {
            v617 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v617 = ManagerConfig_TypeInfo;
            }
            static_fields = v617->static_fields;
            asyncOperater_5__12 = (UnityEngine_AsyncOperation_o *)this->fields._asyncOperater_5__12;
            this->fields._requestTime_5__8 = v208 + static_fields->TIMEOUT;
            if ( !asyncOperater_5__12 )
              goto LABEL_438;
            this->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(asyncOperater_5__12, 0LL);
LABEL_431:
            wait_5__10 = (Il2CppObject *)this->fields._wait_5__10;
            this->fields.__2__current = wait_5__10;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)wait_5__10,
              v200,
              v201,
              v202,
              v203,
              v204,
              v205);
            result = 1;
            this->fields.__1__state = 1;
            return result;
          }
          if ( v206 < this->fields._requestTime_5__8 )
            goto LABEL_431;
        }
        if ( !_4__this )
          goto LABEL_438;
        v209 = _4__this->fields.loader;
        if ( !v209 )
          goto LABEL_438;
        v210 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(v209, 0LL);
        if ( v210
          && (v211 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1),
              *(&v210->klass->_2.bitflags2 + 1) >= (unsigned int)v211) )
        {
          v212 = (DownloadHandlerFileWithCrcCheck_c *)v210->klass->_2.typeHierarchy[v211 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
               ? v210
               : 0LL;
        }
        else
        {
          v212 = 0LL;
        }
        v213 = _4__this->fields.loader;
        if ( !v213 )
          goto LABEL_438;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(v213, 0LL) )
        {
          v218 = System_String__Concat_43746016(
                   (System_String_o *)StringLiteral_585,
                   this->fields._url_5__11,
                   (System_String_o *)StringLiteral_656,
                   0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
          this->fields._errorCode_5__6 = v218;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._errorCode_5__6,
            (System_Int32_array **)v218,
            v219,
            v220,
            v221,
            v222,
            v223,
            v224);
          v225 = _4__this->fields.loader;
          if ( !v225 )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Abort(v225, 0LL);
          if ( v212 )
            DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v212, 0LL);
          goto LABEL_164;
        }
        v214 = _4__this->fields.loader;
        if ( !v214 )
          goto LABEL_438;
        v215 = UnityEngine_Networking_UnityWebRequest__get_error(v214, 0LL);
        if ( System_String__IsNullOrEmpty(v215, 0LL) )
        {
          if ( !v212 )
          {
            v217 = 0;
LABEL_127:
            HIDWORD(v628) = v217;
            v269 = _4__this->fields.data;
            if ( !v269 )
              goto LABEL_438;
            if ( v217 == v269->fields.crc )
            {
              AssetData__UpdateVersion(v269, 0LL);
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
              _4__this->fields.isDownload = 0;
            }
            else
            {
              v270 = sub_B17014(string___TypeInfo, 7LL, v216);
              if ( !v270 )
                goto LABEL_438;
              v276 = (System_String_array *)v270;
              IsSame = StringLiteral_585;
              if ( StringLiteral_585 )
              {
                IsSame = sub_B170BC(StringLiteral_585, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
                v261 = (System_Int32_array **)StringLiteral_585;
              }
              else
              {
                v261 = 0LL;
              }
              if ( !v276->max_length )
                goto LABEL_295;
              v276->m_Items[0] = (System_String_o *)v261;
              sub_B16F98((BattleServantConfConponent_o *)v276->m_Items, v261, v226, v271, v272, v273, v274, v275);
              v283 = (System_Int32_array **)this->fields._url_5__11;
              if ( v283 )
              {
                IsSame = sub_B170BC(this->fields._url_5__11, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
              }
              if ( v276->max_length <= 1 )
                goto LABEL_295;
              v276->m_Items[1] = (System_String_o *)v283;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[1], v283, v226, v278, v279, v280, v281, v282);
              IsSame = StringLiteral_655;
              if ( StringLiteral_655 )
              {
                IsSame = sub_B170BC(StringLiteral_655, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
                v261 = (System_Int32_array **)StringLiteral_655;
              }
              else
              {
                v261 = 0LL;
              }
              if ( v276->max_length <= 2 )
                goto LABEL_295;
              v276->m_Items[2] = (System_String_o *)v261;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[2], v261, v226, v284, v285, v286, v287, v288);
              v289 = _4__this->fields.data;
              if ( !v289 )
                goto LABEL_438;
              LODWORD(v628) = v289->fields.crc;
              IsSame = (unsigned __int64)System_UInt32__ToString((uint32_t)&v628, 0LL);
              v295 = (System_Int32_array **)IsSame;
              if ( IsSame )
              {
                IsSame = sub_B170BC(IsSame, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                {
LABEL_439:
                  sub_B170F4(IsSame);
                  sub_B170A0();
                }
              }
              if ( v276->max_length <= 3 )
                goto LABEL_295;
              v276->m_Items[3] = (System_String_o *)v295;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[3], v295, v226, v290, v291, v292, v293, v294);
              IsSame = StringLiteral_657;
              if ( StringLiteral_657 )
              {
                IsSame = sub_B170BC(StringLiteral_657, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
                v261 = (System_Int32_array **)StringLiteral_657;
              }
              else
              {
                v261 = 0LL;
              }
              if ( v276->max_length <= 4 )
                goto LABEL_295;
              v276->m_Items[4] = (System_String_o *)v261;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[4], v261, v226, v296, v297, v298, v299, v300);
              IsSame = (unsigned __int64)System_UInt32__ToString((uint32_t)&v628 + 4, 0LL);
              v306 = (System_Int32_array **)IsSame;
              if ( IsSame )
              {
                IsSame = sub_B170BC(IsSame, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
              }
              if ( v276->max_length <= 5 )
                goto LABEL_295;
              v276->m_Items[5] = (System_String_o *)v306;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[5], v306, v226, v301, v302, v303, v304, v305);
              IsSame = StringLiteral_651;
              if ( StringLiteral_651 )
              {
                IsSame = sub_B170BC(StringLiteral_651, v276->obj.klass->_1.element_class);
                if ( !IsSame )
                  goto LABEL_439;
                v261 = (System_Int32_array **)StringLiteral_651;
              }
              else
              {
                v261 = 0LL;
              }
              if ( v276->max_length <= 6 )
                goto LABEL_295;
              v276->m_Items[6] = (System_String_o *)v261;
              sub_B16F98((BattleServantConfConponent_o *)&v276->m_Items[6], v261, v226, v307, v308, v309, v310, v311);
              v312 = System_String__Concat_43823856(v276, 0LL);
              this->fields._errorCode_5__6 = v312;
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._errorCode_5__6,
                (System_Int32_array **)v312,
                v313,
                v314,
                v315,
                v316,
                v317,
                v318);
              this->fields._isCrcError_5__5 = 1;
            }
            goto LABEL_164;
          }
          if ( !v212[4].klass )
          {
            v217 = (int)v212[1].klass;
            goto LABEL_127;
          }
        }
        else if ( !v212 )
        {
          goto LABEL_110;
        }
        DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v212, 0LL);
        v232 = v212[4].klass;
        if ( !v232 )
        {
LABEL_110:
          v246 = _4__this->fields.loader;
          if ( !v246 )
            goto LABEL_438;
          v247 = this->fields._url_5__11;
          v248 = UnityEngine_Networking_UnityWebRequest__get_error(v246, 0LL);
          v249 = System_String__Concat_43747144(
                   (System_String_o *)StringLiteral_585,
                   v247,
                   (System_String_o *)StringLiteral_653,
                   v248,
                   0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
          this->fields._errorCode_5__6 = v249;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._errorCode_5__6,
            (System_Int32_array **)v249,
            v250,
            v251,
            v252,
            v253,
            v254,
            v255);
          v256 = _4__this->fields.loader;
          if ( !v256 )
            goto LABEL_438;
          ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v256, 0LL);
          if ( !ResponseHeaders )
            goto LABEL_164;
          v258 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
                 (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                  v258,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_12312,
                  &value,
                  (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
          {
            goto LABEL_164;
          }
          v259 = (System_String_o *)value;
          IsSame = sub_B17014(char___TypeInfo, 1LL, v226);
          if ( !IsSame )
            goto LABEL_438;
          v261 = (System_Int32_array **)IsSame;
          if ( !*(_DWORD *)(IsSame + 24) )
            goto LABEL_295;
          *(_WORD *)(IsSame + 32) = 32;
          if ( !v259 )
            goto LABEL_438;
          v262 = System_String__Split_43804516(v259, (System_Char_array *)IsSame, 1, 0LL);
          if ( !v262 )
            goto LABEL_438;
          v263 = v262;
          if ( (int)v262->max_length < 2 )
            goto LABEL_164;
          v264 = v262->m_Items[0];
          if ( !v264 )
            goto LABEL_438;
          IsSame = System_String__StartsWith(v264, (System_String_o *)StringLiteral_7070, 0LL);
          if ( (IsSame & 1) == 0 )
            goto LABEL_164;
          if ( v263->max_length <= 1 )
            goto LABEL_295;
          v265 = v263->m_Items[1];
          if ( !v265 )
            goto LABEL_438;
          if ( !System_String__Equals_43731072(v265, (System_String_o *)StringLiteral_1189, 0LL) )
            goto LABEL_164;
          v266 = this->fields._url_5__11;
          v267 = this->fields._autoRetryCount_5__3 + 1;
          this->fields._isAutoRetry_5__4 = 1;
          this->fields._autoRetryCount_5__3 = v267;
          v268 = System_Int32__ToString((int)this + 52, 0LL);
          v239 = System_String__Concat_43747144(
                   (System_String_o *)StringLiteral_585,
                   v266,
                   (System_String_o *)StringLiteral_654,
                   v268,
                   0LL);
          this->fields._errorCode_5__6 = v239;
          goto LABEL_109;
        }
        image = (__int64 (**)(void))v232->_1.image;
        v234 = *(&System_IO_IOException_TypeInfo->_2.bitflags2 + 1);
        if ( *((unsigned __int8 *)v232->_1.image + 300) >= (unsigned int)v234
          && *((System_IO_IOException_c **)image[25] + v234 - 1) == System_IO_IOException_TypeInfo )
        {
          _4__this->fields.isErrorDialog = 1;
          v277 = v212[4].klass;
          if ( !v277 )
            goto LABEL_438;
          v239 = (struct System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v277->_1.image
                                            + 49))(
                                             v277,
                                             *((_QWORD *)v277->_1.image + 50));
          this->fields._errorCode_5__6 = v239;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
        }
        else
        {
          v235 = image[45]();
          v236 = v212[4].klass;
          if ( !v236 )
            goto LABEL_438;
          v237 = (System_String_o *)v235;
          v238 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v236->_1.image
                                     + 49))(
                                      v212[4].klass,
                                      *((_QWORD *)v236->_1.image + 50));
          v239 = System_String__Concat_43747144(
                   (System_String_o *)StringLiteral_18327,
                   v237,
                   (System_String_o *)StringLiteral_80,
                   v238,
                   0LL);
          this->fields._errorCode_5__6 = v239;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&this->fields._errorCode_5__6;
        }
LABEL_109:
        sub_B16F98(p_errorCode_5__6, (System_Int32_array **)v239, v240, v241, v242, v243, v244, v245);
LABEL_164:
        this->fields._url_5__11 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._url_5__11, 0LL, v226, v227, v228, v229, v230, v231);
        p_errorLocalizeCode_5__7 = (struct System_String_o **)p_asyncOperater_5__12;
        v166 = 0LL;
        this->fields._asyncOperater_5__12 = 0LL;
LABEL_165:
        sub_B16F98((BattleServantConfConponent_o *)p_errorLocalizeCode_5__7, v166, v159, v160, v161, v162, v163, v164);
        method = (const MethodInfo *)p_errorCode_5__6->klass;
        if ( p_errorCode_5__6->klass )
        {
          AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
          v319 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v319 = ManagerConfig_TypeInfo;
          }
          if ( v319->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v321 = _4__this->fields.data;
            if ( !v321 )
              goto LABEL_438;
            v322 = (CommonUI_o *)Instance;
            v323 = System_String__Concat_43747144(
                     (System_String_o *)StringLiteral_2094,
                     v321->fields.name,
                     (System_String_o *)StringLiteral_26,
                     (System_String_o *)p_errorCode_5__6->klass,
                     0LL);
            v328 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v324, v325, v326, v327);
            ErrorDialog_ClickDelegate___ctor(v328, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v322 )
              goto LABEL_438;
            v8 &= 0xFFFFFFFF00000000LL;
            *(_DWORD *)&effectDistance.fields.has_value = v8;
            effectDistance.fields.value = 0LL;
            CommonUI__OpenWarningDialog(
              v322,
              (System_String_o *)StringLiteral_15682,
              v323,
              v328,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
LABEL_173:
            if ( _4__this->fields.isErrorDialog )
            {
              v556 = (Il2CppObject *)this->fields._wait_5__10;
              this->fields.__2__current = v556;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.__2__current,
                (System_Int32_array **)v556,
                v2,
                v3,
                v4,
                v5,
                v6,
                v7);
              v85 = 2;
              goto LABEL_411;
            }
          }
          if ( this->fields._isAutoRetry_5__4 )
          {
            autoRetryCount_5__3 = this->fields._autoRetryCount_5__3;
            v532 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v532 = ManagerConfig_TypeInfo;
            }
            DOWNLOAD_RETRY_DELAY_TIME = v532->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
            v534 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
            UnityEngine_WaitForSeconds___ctor(v534, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
            this->fields.__2__current = (Il2CppObject *)v534;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v534,
              v535,
              v536,
              v537,
              v538,
              v539,
              v540);
            v530 = 3;
LABEL_413:
            *((_DWORD *)p__2__current - 2) = v530;
            return 1;
          }
          if ( !this->fields._isCrcError_5__5 )
          {
            _4__this->fields.isErrorDialog = 1;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            }
            if ( !byte_40F7DF6 )
            {
              sub_B16FFC(&ManagementManager_TypeInfo, method);
              byte_40F7DF6 = 1;
            }
            v329 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v329 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v329->static_fields->isDuringStartup;
            v331 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            errorLocalizeCode_5__7 = this->fields._errorLocalizeCode_5__7;
            v333 = (CommonUI_o *)v331;
            v334 = (System_String_o *)StringLiteral_1;
            if ( isDuringStartup )
            {
              if ( errorLocalizeCode_5__7 )
                v335 = this->fields._errorLocalizeCode_5__7;
              else
                v335 = (System_String_o *)StringLiteral_1743;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v336 = LocalizationManager__Get(v335, 0LL);
              v341 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                      ErrorDialog_ClickDelegate_TypeInfo,
                                                      v337,
                                                      v338,
                                                      v339,
                                                      v340);
              ErrorDialog_ClickDelegate___ctor(v341, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v333 )
                goto LABEL_438;
              CommonUI__OpenRetryBootDialog(v333, v334, v336, v341, 1, 0LL);
            }
            else
            {
              if ( errorLocalizeCode_5__7 )
                v342 = this->fields._errorLocalizeCode_5__7;
              else
                v342 = (System_String_o *)StringLiteral_1744;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v343 = LocalizationManager__Get(v342, 0LL);
              v348 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                      ErrorDialog_ClickDelegate_TypeInfo,
                                                      v344,
                                                      v345,
                                                      v346,
                                                      v347);
              ErrorDialog_ClickDelegate___ctor(v348, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v333 )
                goto LABEL_438;
              CommonUI__OpenRetryDialog(v333, v334, v343, v348, 1, 0LL);
            }
LABEL_201:
            if ( _4__this->fields.isErrorDialog )
            {
              v541 = (Il2CppObject *)this->fields._wait_5__10;
              this->fields.__2__current = v541;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.__2__current,
                (System_Int32_array **)v541,
                v2,
                v3,
                v4,
                v5,
                v6,
                v7);
              v85 = 4;
              goto LABEL_411;
            }
          }
        }
LABEL_202:
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( !byte_40F7166 )
        {
          sub_B16FFC(&NetworkManager_TypeInfo, method);
          byte_40F7166 = 1;
        }
        v349 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v349 = NetworkManager_TypeInfo;
        }
        if ( !_4__this )
          goto LABEL_438;
        if ( v349->static_fields->isRebootBlock )
        {
          v542 = _4__this->fields.loader;
          if ( !v542 )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose(v542, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v543, v544, v545, v546, v547, v548);
          _4__this->fields.readData = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v549,
            v550,
            v551,
            v552,
            v553,
            v554);
          return 0;
        }
        if ( !_4__this->fields.isDownload && !this->fields._isEncrypted_5__2 )
          goto LABEL_348;
        v350 = _4__this->fields.loader;
        if ( v350 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v350, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v351, v352, v353, v354, v355, v356);
          _4__this->fields.readData = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v357,
            v358,
            v359,
            v360,
            v361,
            v362);
        }
        if ( this->fields._isCrcError_5__5 )
          break;
LABEL_340:
        this->fields._errorCode_5__6 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        this->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__7,
          0LL,
          v473,
          v474,
          v475,
          v476,
          v477,
          v478);
        this->fields._wait_5__10 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__10, 0LL, v479, v480, v481, v482, v483, v484);
LABEL_341:
        v112 = _4__this->fields.data;
        if ( !v112 )
          goto LABEL_438;
        if ( v112->fields.entryCount >= 1 )
        {
          if ( this->fields._isEncrypted_5__2 )
          {
LABEL_362:
            v513 = _4__this->fields.data;
            if ( !v513 )
              goto LABEL_438;
            LoadRequest = (System_Int32_array **)AssetData__GetLoadRequest(v513, 0LL);
            _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)LoadRequest;
            v515 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
            sub_B16F98(v515, LoadRequest, v516, v517, v518, v519, v520, v521);
            if ( !v515->klass )
              goto LABEL_438;
            v522 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                     (UnityEngine_Networking_UnityWebRequest_o *)v515->klass,
                                     0LL);
            this->fields.__2__current = v522;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v522,
              v524,
              v525,
              v526,
              v527,
              v528,
              v529);
            v530 = 11;
          }
          else
          {
            v598 = AssetLoader___c_TypeInfo;
            if ( (BYTE3(AssetLoader___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v598 = AssetLoader___c_TypeInfo;
            }
            v599 = v598->static_fields;
            _9__29_0 = v599->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( (BYTE3(v598->vtable._0_Equals.methodPtr) & 4) != 0 && !v598->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v598);
                v599 = AssetLoader___c_TypeInfo->static_fields;
              }
              v601 = (Il2CppObject *)v599->__9;
              _9__29_0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v126, v2, v3, v4);
              System_Func_bool____ctor(
                _9__29_0,
                v601,
                Method_AssetLoader___c__LoadDataCR_b__29_0__,
                (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
              v602 = AssetLoader___c_TypeInfo->static_fields;
              v602->__9__29_0 = _9__29_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v602->__9__29_0,
                (System_Int32_array **)_9__29_0,
                v603,
                v604,
                v605,
                v606,
                v607,
                v608);
            }
            v609 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v126, v2, v3, v4);
            UnityEngine_WaitUntil___ctor(v609, _9__29_0, 0LL);
            this->fields.__2__current = (Il2CppObject *)v609;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v609,
              v610,
              v611,
              v612,
              v613,
              v614,
              v615);
            v530 = 10;
          }
          goto LABEL_413;
        }
LABEL_343:
        if ( _4__this->fields.isDownload )
        {
          name = v112->fields.name;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__isExistAssetStorage(name, 0LL) )
            continue;
        }
LABEL_348:
        v486 = _4__this->fields.data;
        if ( !v486 )
          goto LABEL_438;
        if ( v486->fields.entryCount >= 1 )
        {
          v488 = &_4__this->fields.loader;
          v487 = _4__this->fields.loader;
          if ( this->fields._isEncrypted_5__2 )
          {
            if ( !v487 )
              goto LABEL_438;
            v489 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(v487, 0LL);
            if ( !v489
              || (v490 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1),
                  *(&v489->klass->_2.bitflags2 + 1) < (unsigned int)v490)
              || (DownloadHandlerDecryptFileWithCrc_c *)v489->klass->_2.typeHierarchy[v490 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              if ( !*v488 )
                goto LABEL_438;
              v489 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v488, 0LL);
              if ( !v489 )
                goto LABEL_438;
              v491 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v489->klass->_2.bitflags2 + 1) < (unsigned int)v491
                || (DownloadHandlerFileWithCrcCheck_c *)v489->klass->_2.typeHierarchy[v491 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_438;
              }
            }
            v492 = UnityEngine_Networking_DownloadHandler__get_data(v489, 0LL);
            v493 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v492, 0LL);
            this->fields._req_5__13 = v493;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._req_5__13,
              (System_Int32_array **)v493,
              v494,
              v495,
              v496,
              v497,
              v498,
              v499);
            if ( !*v488 )
              goto LABEL_438;
            UnityEngine_Networking_UnityWebRequest__Dispose(*v488, 0LL);
            *v488 = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              0LL,
              v500,
              v501,
              v502,
              v503,
              v504,
              v505);
            req_5__13 = (Il2CppObject *)this->fields._req_5__13;
            this->fields.__2__current = req_5__13;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)req_5__13,
              v507,
              v508,
              v509,
              v510,
              v511,
              v512);
            v85 = 12;
            goto LABEL_411;
          }
          if ( !v487 )
            goto LABEL_438;
          v616 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(v487, 0LL);
          AssetData__SetData(v486, v616, 0LL);
        }
LABEL_37:
        v89 = _4__this->fields.loader;
        if ( v89 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v89, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v90, v91, v92, v93, v94, v95);
        }
        _4__this->fields.readData = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, 0LL);
        return 0;
      }
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      ConfigFileAddress = AssetManager__get_ConfigFileAddress(0LL);
      this->fields._url_5__11 = ConfigFileAddress;
      p_url_5__11 = &this->fields._url_5__11;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._url_5__11,
        (System_Int32_array **)ConfigFileAddress,
        v364,
        v365,
        v366,
        v367,
        v368,
        v369);
LABEL_221:
      v370 = *p_url_5__11;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v370, 0LL);
      v372 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_438;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v372;
      v379 = &_4__this->fields.loader;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, v372, v373, v374, v375, v376, v377, v378);
      v380 = UnityEngine_Time__get_unscaledTime(0LL);
      v381 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v381 = ManagerConfig_TypeInfo;
      }
      v382 = v381->static_fields->TIMEOUT;
      this->fields._loadProgress_5__9 = 0.0;
      this->fields._requestTime_5__8 = v380 + v382;
      if ( !*v379 )
        goto LABEL_438;
      v383 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*v379, 0LL);
      this->fields._asyncOperater_5__12 = v383;
      v87 = (UnityEngine_AsyncOperation_o **)&this->fields._asyncOperater_5__12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._asyncOperater_5__12,
        (System_Int32_array **)v383,
        v384,
        v385,
        v386,
        v387,
        v388,
        v389);
LABEL_230:
      if ( !*v87 )
        goto LABEL_438;
      if ( !UnityEngine_AsyncOperation__get_isDone(*v87, 0LL) )
      {
        if ( !*v87 )
          goto LABEL_438;
        v396 = UnityEngine_AsyncOperation__get_progress(*v87, 0LL);
        v397 = this->fields._loadProgress_5__9;
        v398 = v396;
        v399 = UnityEngine_Time__get_unscaledTime(0LL);
        v207 = v398 == v397;
        v400 = v399;
        if ( !v207 )
        {
          v621 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v621 = ManagerConfig_TypeInfo;
          }
          v622 = v621->static_fields;
          v623 = (UnityEngine_AsyncOperation_o *)this->fields._asyncOperater_5__12;
          this->fields._requestTime_5__8 = v400 + v622->TIMEOUT;
          if ( !v623 )
            goto LABEL_438;
          this->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(v623, 0LL);
          goto LABEL_437;
        }
        if ( v399 < this->fields._requestTime_5__8 )
        {
LABEL_437:
          v624 = (Il2CppObject *)this->fields._wait_5__10;
          this->fields.__2__current = v624;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)v624,
            v390,
            v391,
            v392,
            v393,
            v394,
            v395);
          v85 = 5;
          goto LABEL_411;
        }
      }
      this->fields._errorCode_5__6 = 0LL;
      v401 = &this->fields._errorCode_5__6;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._errorCode_5__6, 0LL, v390, v391, v392, v393, v394, v395);
      if ( !_4__this )
        goto LABEL_438;
      v403 = &_4__this->fields.loader;
      v402 = _4__this->fields.loader;
      if ( !v402 )
        goto LABEL_438;
      isDone = UnityEngine_Networking_UnityWebRequest__get_isDone(v402, 0LL);
      if ( !*v403 )
        goto LABEL_438;
      if ( !isDone )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v403, 0LL);
        v466 = &StringLiteral_2107;
        goto LABEL_377;
      }
      v405 = UnityEngine_Networking_UnityWebRequest__get_error(*v403, 0LL);
      v406 = System_String__IsNullOrEmpty(v405, 0LL);
      if ( !*v403 )
        goto LABEL_438;
      if ( !v406 )
      {
        v557 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__get_error(*v403, 0LL);
        *v401 = (System_String_o *)v557;
        goto LABEL_378;
      }
      v407 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v403, 0LL);
      if ( !v407 )
        goto LABEL_438;
      text = UnityEngine_Networking_DownloadHandler__get_text(v407, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v409 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v409, 0LL) )
      {
        v466 = &StringLiteral_2105;
        goto LABEL_377;
      }
      IsSame = sub_B17014(char___TypeInfo, 1LL, v410);
      if ( !IsSame )
        goto LABEL_438;
      v261 = (System_Int32_array **)IsSame;
      if ( !*(_DWORD *)(IsSame + 24) )
        goto LABEL_295;
      *(_WORD *)(IsSame + 32) = -257;
      if ( !v409 )
        goto LABEL_438;
      v416 = System_String__Trim(v409, (System_Char_array *)IsSame, 0LL);
      if ( !v416 )
        goto LABEL_438;
      v417 = v416;
      if ( !System_String__StartsWith(v416, (System_String_o *)StringLiteral_23604, 0LL) )
        goto LABEL_332;
      IsSame = sub_B17014(char___TypeInfo, 2LL, v410);
      if ( !IsSame )
        goto LABEL_438;
      v418 = *(_DWORD *)(IsSame + 24);
      v261 = (System_Int32_array **)IsSame;
      if ( !v418 )
        goto LABEL_295;
      *(_WORD *)(IsSame + 32) = 13;
      if ( v418 == 1 )
        goto LABEL_295;
      *(_WORD *)(IsSame + 34) = 10;
      v419 = System_String__IndexOfAny(v417, (System_Char_array *)IsSame, 0LL);
      if ( v419 < 2 )
        goto LABEL_332;
      v420 = v419;
      v421 = System_String__Substring_43807468(v417, 1, v419 - 1, 0LL);
      v422 = System_String__Substring(v417, v420 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        goto LABEL_438;
      v424 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                    UTF8,
                                    v422,
                                    UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v425 = Crc32__Compute(v424, 0LL);
      if ( System_UInt32__Parse(v421, 0LL) != v425 )
      {
LABEL_332:
        v466 = &StringLiteral_2104;
LABEL_377:
        v557 = (System_Int32_array **)*v466;
        *v401 = (System_String_o *)*v466;
LABEL_378:
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__6,
          v557,
          v410,
          v411,
          v412,
          v413,
          v414,
          v415);
        if ( *v403 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v403, 0LL);
          *v403 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v558, v559, v560, v561, v562, v563);
        }
        if ( *v401 )
        {
          v564 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v564 = ManagerConfig_TypeInfo;
          }
          if ( v564->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            v565 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v566 = _4__this->fields.data;
            if ( !v566 )
              goto LABEL_438;
            v567 = (CommonUI_o *)v565;
            v568 = System_String__Concat_43747144(
                     (System_String_o *)StringLiteral_2094,
                     v566->fields.name,
                     (System_String_o *)StringLiteral_26,
                     *v401,
                     0LL);
            v573 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v569, v570, v571, v572);
            ErrorDialog_ClickDelegate___ctor(v573, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v567 )
              goto LABEL_438;
            effectDistancea.fields.value = 0LL;
            *(_DWORD *)&effectDistancea.fields.has_value = 0;
            CommonUI__OpenWarningDialog(
              v567,
              (System_String_o *)StringLiteral_15682,
              v568,
              v573,
              1,
              0,
              -1.0,
              1,
              effectDistancea,
              0LL);
LABEL_388:
            if ( _4__this->fields.isErrorDialog )
            {
              v574 = (Il2CppObject *)this->fields._wait_5__10;
              this->fields.__2__current = v574;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.__2__current,
                (System_Int32_array **)v574,
                v2,
                v3,
                v4,
                v5,
                v6,
                v7);
              v85 = 6;
              goto LABEL_411;
            }
          }
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_40F7DF6 )
          {
            sub_B16FFC(&ManagementManager_TypeInfo, method);
            byte_40F7DF6 = 1;
          }
          v575 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v575 = ManagementManager_TypeInfo;
          }
          v576 = v575->static_fields->isDuringStartup;
          v577 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v576 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v578 = LocalizationManager__Get((System_String_o *)StringLiteral_1743, 0LL);
            v583 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v579, v580, v581, v582);
            ErrorDialog_ClickDelegate___ctor(v583, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v577 )
              goto LABEL_438;
            CommonUI__OpenRetryBootDialog(v577, (System_String_o *)StringLiteral_1, v578, v583, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v584 = LocalizationManager__Get((System_String_o *)StringLiteral_1744, 0LL);
            v589 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v585, v586, v587, v588);
            ErrorDialog_ClickDelegate___ctor(v589, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v577 )
              goto LABEL_438;
            CommonUI__OpenRetryDialog(v577, (System_String_o *)StringLiteral_1, v584, v589, 0, 0LL);
          }
LABEL_409:
          if ( _4__this->fields.isErrorDialog )
          {
            v590 = (Il2CppObject *)this->fields._wait_5__10;
            this->fields.__2__current = v590;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)v590,
              v2,
              v3,
              v4,
              v5,
              v6,
              v7);
            v85 = 7;
            goto LABEL_411;
          }
        }
        v591 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForSeconds___ctor(v591, 1.0, 0LL);
        this->fields.__2__current = (Il2CppObject *)v591;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v591,
          v592,
          v593,
          v594,
          v595,
          v596,
          v597);
        v530 = 8;
        goto LABEL_413;
      }
      v627 = this;
      if ( !v422 )
      {
LABEL_312:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_40F7DF6 )
        {
          sub_B16FFC(&ManagementManager_TypeInfo, v261);
          byte_40F7DF6 = 1;
        }
        v455 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v455 = ManagementManager_TypeInfo;
        }
        v456 = v455->static_fields->isDuringStartup;
        v457 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v456 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v458 = &StringLiteral_9246;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v458 = &StringLiteral_9245;
        }
        v459 = LocalizationManager__Get((System_String_o *)*v458, 0LL);
        v464 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v460, v461, v462, v463);
        ErrorDialog_ClickDelegate___ctor(v464, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
        if ( !v457 )
          goto LABEL_438;
        CommonUI__OpenErrorDialog(v457, (System_String_o *)StringLiteral_1, v459, v464, 0, 0LL);
        return 0;
      }
      IsSame = sub_B17014(char___TypeInfo, 2LL, v410);
      if ( !IsSame )
        goto LABEL_438;
      v426 = *(_DWORD *)(IsSame + 24);
      v261 = (System_Int32_array **)IsSame;
      if ( !v426 || (*(_WORD *)(IsSame + 32) = 13, v426 == 1) )
      {
LABEL_295:
        sub_B17100(IsSame, v261, v226);
        sub_B170A0();
      }
      *(_WORD *)(IsSame + 34) = 10;
      v427 = System_String__Split_43804516(v422, (System_Char_array *)IsSame, 1, 0LL);
      if ( !v427 )
        goto LABEL_438;
      v428 = *(_QWORD *)&v427->max_length;
      v429 = v427;
      if ( (int)v428 < 1 )
        goto LABEL_312;
      v430 = 0;
      while ( 1 )
      {
        v431 = v429->m_Items[v430];
        IsSame = sub_B17014(char___TypeInfo, 1LL, v226);
        if ( !IsSame )
          goto LABEL_438;
        v261 = (System_Int32_array **)IsSame;
        if ( !*(_DWORD *)(IsSame + 24) )
          goto LABEL_295;
        *(_WORD *)(IsSame + 32) = 44;
        if ( !v431 )
          goto LABEL_438;
        v432 = System_String__Split(v431, (System_Char_array *)IsSame, 0LL);
        if ( !v432 )
          goto LABEL_438;
        v433 = *(_QWORD *)&v432->max_length;
        v434 = v432;
        if ( (int)v433 < 1 )
          break;
        v435 = v432->m_Items[0];
        if ( !v435 )
          goto LABEL_438;
        IsSame = System_String__StartsWith(v435, (System_String_o *)StringLiteral_1533, 0LL);
        if ( !v434->max_length )
          goto LABEL_295;
        v436 = IsSame;
        v437 = v434->m_Items[0];
        if ( !v437 )
          goto LABEL_438;
        if ( (v436 & 1) != 0 )
        {
          v438 = System_String__Substring(v437, 1, 0LL);
          v439 = (System_String_o **)&StringLiteral_1;
          if ( (int)v434->max_length > 1 )
            v439 = &v434->m_Items[1];
          v440 = *v439;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          IsSame = AssetManager__CheckVersion(v438, v440, 0LL);
          if ( (IsSame & 1) == 0 )
            goto LABEL_312;
        }
        else
        {
          IsSame = System_String__StartsWith(v437, (System_String_o *)StringLiteral_23604, 0LL);
          if ( (IsSame & 1) == 0 )
          {
            if ( !v434->max_length )
              goto LABEL_295;
            v441 = v434->m_Items[0];
            if ( !v441 )
              goto LABEL_438;
            IsSame = System_String__IndexOf(v441, 0x7Eu, 0LL);
            if ( (_DWORD)IsSame != 1 )
            {
              v433 = *(_QWORD *)&v434->max_length;
              break;
            }
          }
        }
LABEL_293:
        if ( (int)++v430 >= (int)v428 )
          goto LABEL_312;
        if ( v430 >= v429->max_length )
          goto LABEL_295;
      }
      if ( (_DWORD)v433 != 5 )
        goto LABEL_312;
      v442 = v434->m_Items[3];
      if ( !v442 )
        goto LABEL_438;
      v443 = System_String__Trim_43731064(v442, 0LL);
      IsSame = System_UInt32__Parse(v443, 0LL);
      if ( v434->max_length <= 4 )
        goto LABEL_295;
      v444 = IsSame;
      IsSame = AssetLoader__IsSame(_4__this, v434->m_Items[4], 0LL);
      if ( (IsSame & 1) == 0 )
        goto LABEL_293;
      v445 = _4__this->fields.data;
      if ( !v445 )
        goto LABEL_438;
      if ( v444 != v445->fields.crc )
        goto LABEL_312;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_40F7DF6 )
      {
        sub_B16FFC(&ManagementManager_TypeInfo, v261);
        byte_40F7DF6 = 1;
      }
      v446 = ManagementManager_TypeInfo;
      this = v627;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v446 = ManagementManager_TypeInfo;
      }
      v447 = v446->static_fields->isDuringStartup;
      v448 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v447 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v449 = LocalizationManager__Get((System_String_o *)StringLiteral_1743, 0LL);
        v454 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v450, v451, v452, v453);
        ErrorDialog_ClickDelegate___ctor(v454, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( v448 )
        {
          CommonUI__OpenRetryBootDialog(v448, (System_String_o *)StringLiteral_1, v449, v454, 1, 0LL);
          goto LABEL_338;
        }
        goto LABEL_438;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v467 = LocalizationManager__Get((System_String_o *)StringLiteral_1744, 0LL);
      v472 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v468, v469, v470, v471);
      ErrorDialog_ClickDelegate___ctor(v472, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
      if ( !v448 )
        goto LABEL_438;
      CommonUI__OpenRetryDialog(v448, (System_String_o *)StringLiteral_1, v467, v472, 1, 0LL);
LABEL_338:
      if ( !_4__this->fields.isErrorDialog )
      {
        this->fields._url_5__11 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._url_5__11, 0LL, v2, v3, v4, v5, v6, v7);
        goto LABEL_340;
      }
      v555 = (Il2CppObject *)this->fields._wait_5__10;
      this->fields.__2__current = v555;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v555,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v85 = 9;
LABEL_411:
      this->fields.__1__state = v85;
      return 1;
    case 0xC:
      p_req_5__13 = (BattleServantConfConponent_o *)&this->fields._req_5__13;
      v75 = this->fields._req_5__13;
      this->fields.__1__state = -1;
      if ( !v75 )
        goto LABEL_36;
      if ( !_4__this )
        goto LABEL_438;
      v76 = _4__this->fields.data;
      assetBundle = UnityEngine_AssetBundleCreateRequest__get_assetBundle(v75, 0LL);
      if ( !v76 )
        goto LABEL_438;
      v78 = (Il2CppObject *)AssetData__SetAssetBundleData(v76, assetBundle, this->fields.resourceNames, 0LL);
      this->fields.__2__current = v78;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v78,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      v85 = 13;
      goto LABEL_411;
    case 0xD:
      p_req_5__13 = (BattleServantConfConponent_o *)&this->fields._req_5__13;
      this->fields.__1__state = -1;
LABEL_36:
      p_req_5__13->klass = 0LL;
      sub_B16F98(p_req_5__13, 0LL, v2, v3, v4, v5, v6, v7);
      if ( _4__this )
        goto LABEL_37;
      goto LABEL_438;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetLoader__LoadDataCR_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_Reset(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetLoader__LoadDataCR_d__29__System_IDisposable_Dispose(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetLoader___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9122 & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader___c_TypeInfo, v1);
    byte_40F9122 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AssetLoader___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssetLoader___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F9123 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_40F9123 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return BYTE4(Instance[1].monitor) == 0;
}