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
    sub_B7076C(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x21
  System_Int32_array **v14; // x1
  _DWORD *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x1
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x1
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x1
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x1
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_Int32_array **v183; // x1
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Int32_array **v190; // x1
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x1
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x1
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  System_Int32_array **v211; // x1
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x1
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_Int32_array **v225; // x1
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  System_Int32_array **v232; // x1
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  System_Int32_array **v239; // x1
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Int32_array **v246; // x1
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Int32_array **v253; // x1
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_Int32_array **v260; // x1
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  System_Int32_array **v267; // x1
  __int64 v268; // x8
  unsigned __int64 v269; // x23
  signed __int64 v270; // x24
  __int64 v271; // x0
  Il2CppObject *v272; // x0
  CrashReporter_o *v273; // x19
  __int64 v274; // x0

  if ( (byte_4354F4C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_14291/*"The request timed out."*/);
    sub_B70694(&StringLiteral_20369/*"java.net.SocketException"*/);
    sub_B70694(&StringLiteral_12487/*"SSL CA certificate error"*/);
    sub_B70694(&StringLiteral_1206/*"404: Not Found"*/);
    sub_B70694(&StringLiteral_14223/*"The network connection was lost."*/);
    sub_B70694(&StringLiteral_1201/*"400: Bad Request"*/);
    sub_B70694(&StringLiteral_14970/*"Unable to complete SSL connection"*/);
    sub_B70694(&StringLiteral_15005/*"Unable to read data"*/);
    sub_B70694(&StringLiteral_17916/*"connect failed"*/);
    sub_B70694(&StringLiteral_7200/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_B70694(&StringLiteral_20371/*"java.net.UnknownHostException"*/);
    sub_B70694(&StringLiteral_1214/*"500: Internal Server Error"*/);
    sub_B70694(&StringLiteral_1216/*"502:"*/);
    sub_B70694(&StringLiteral_11580/*"Request timeout"*/);
    sub_B70694(&StringLiteral_4324/*"Connection reset by peer"*/);
    sub_B70694(&StringLiteral_4689/*"DLErrorType"*/);
    sub_B70694(&StringLiteral_4688/*"DLErrorAsset"*/);
    sub_B70694(&StringLiteral_1228/*"504: Gateway Timeout"*/);
    sub_B70694(&StringLiteral_15159/*"Unknown Error"*/);
    sub_B70694(&StringLiteral_1218/*"503 Auto retry count"*/);
    sub_B70694(&StringLiteral_20352/*"java.io.EOFException"*/);
    sub_B70694(&StringLiteral_20366/*"java.net.ConnectException"*/);
    sub_B70694(&StringLiteral_1204/*"403: Forbidden"*/);
    sub_B70694(&StringLiteral_4323/*"Connection refused"*/);
    sub_B70694(&StringLiteral_7201/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_B70694(&StringLiteral_1203/*"401: Authorization Required"*/);
    sub_B70694(&StringLiteral_20353/*"java.io.IOException"*/);
    sub_B70694(&StringLiteral_9595/*"No address associated with hostname"*/);
    sub_B70694(&StringLiteral_20368/*"java.net.ProtocolException"*/);
    sub_B70694(&StringLiteral_2130/*"AssetBundle file download time over"*/);
    sub_B70694(&StringLiteral_1207/*"408: Request Time-out"*/);
    sub_B70694(&StringLiteral_14699/*"Too many redirects"*/);
    sub_B70694(&StringLiteral_13093/*"Software caused connection abort"*/);
    sub_B70694(&StringLiteral_2129/*"AssetBundle file check sum error"*/);
    sub_B70694(&StringLiteral_20367/*"java.net.NoRouteToHostException"*/);
    sub_B70694(&StringLiteral_5356/*"Destination host has an erroneous SSL certificate"*/);
    sub_B70694(&StringLiteral_4325/*"Connection timed out"*/);
    sub_B70694(&StringLiteral_3874/*"Cannot resolve destination host"*/);
    sub_B70694(&StringLiteral_20370/*"java.net.SocketTimeoutException"*/);
    sub_B70694(&StringLiteral_2133/*"AssetLoadError"*/);
    byte_4354F4C = 1;
  }
  Instance = sub_B706AC(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_210;
  v13 = Instance;
  Instance = StringLiteral_9595/*"No address associated with hostname"*/;
  if ( StringLiteral_9595/*"No address associated with hostname"*/ )
  {
    Instance = sub_B70754(StringLiteral_9595/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v14 = (System_Int32_array **)StringLiteral_9595/*"No address associated with hostname"*/;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (_DWORD *)(v13 + 24);
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_195;
  *(_QWORD *)(v13 + 32) = v14;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 32), v14, v7, v8, v9, v10, v11, v12);
  Instance = StringLiteral_2130/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2130/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B70754(StringLiteral_2130/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v22 = (System_Int32_array **)StringLiteral_2130/*"AssetBundle file download time over"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *v15 <= 1u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 40) = v22;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 40), v22, v16, v17, v18, v19, v20, v21);
  Instance = StringLiteral_14223/*"The network connection was lost."*/;
  if ( StringLiteral_14223/*"The network connection was lost."*/ )
  {
    Instance = sub_B70754(StringLiteral_14223/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v29 = (System_Int32_array **)StringLiteral_14223/*"The network connection was lost."*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( *v15 <= 2u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 48) = v29;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 48), v29, v23, v24, v25, v26, v27, v28);
  Instance = StringLiteral_4324/*"Connection reset by peer"*/;
  if ( StringLiteral_4324/*"Connection reset by peer"*/ )
  {
    Instance = sub_B70754(StringLiteral_4324/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v36 = (System_Int32_array **)StringLiteral_4324/*"Connection reset by peer"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( *v15 <= 3u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 56) = v36;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 56), v36, v30, v31, v32, v33, v34, v35);
  Instance = StringLiteral_13093/*"Software caused connection abort"*/;
  if ( StringLiteral_13093/*"Software caused connection abort"*/ )
  {
    Instance = sub_B70754(StringLiteral_13093/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v43 = (System_Int32_array **)StringLiteral_13093/*"Software caused connection abort"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *v15 <= 4u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 64) = v43;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 64), v43, v37, v38, v39, v40, v41, v42);
  Instance = StringLiteral_4325/*"Connection timed out"*/;
  if ( StringLiteral_4325/*"Connection timed out"*/ )
  {
    Instance = sub_B70754(StringLiteral_4325/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v50 = (System_Int32_array **)StringLiteral_4325/*"Connection timed out"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( *v15 <= 5u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 72) = v50;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 72), v50, v44, v45, v46, v47, v48, v49);
  Instance = StringLiteral_4323/*"Connection refused"*/;
  if ( StringLiteral_4323/*"Connection refused"*/ )
  {
    Instance = sub_B70754(StringLiteral_4323/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v57 = (System_Int32_array **)StringLiteral_4323/*"Connection refused"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( *v15 <= 6u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 80) = v57;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 80), v57, v51, v52, v53, v54, v55, v56);
  Instance = StringLiteral_14291/*"The request timed out."*/;
  if ( StringLiteral_14291/*"The request timed out."*/ )
  {
    Instance = sub_B70754(StringLiteral_14291/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v64 = (System_Int32_array **)StringLiteral_14291/*"The request timed out."*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( *v15 <= 7u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 88) = v64;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 88), v64, v58, v59, v60, v61, v62, v63);
  Instance = StringLiteral_3874/*"Cannot resolve destination host"*/;
  if ( StringLiteral_3874/*"Cannot resolve destination host"*/ )
  {
    Instance = sub_B70754(StringLiteral_3874/*"Cannot resolve destination host"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v71 = (System_Int32_array **)StringLiteral_3874/*"Cannot resolve destination host"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( *v15 <= 8u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 96) = v71;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 96), v71, v65, v66, v67, v68, v69, v70);
  Instance = StringLiteral_14970/*"Unable to complete SSL connection"*/;
  if ( StringLiteral_14970/*"Unable to complete SSL connection"*/ )
  {
    Instance = sub_B70754(StringLiteral_14970/*"Unable to complete SSL connection"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v78 = (System_Int32_array **)StringLiteral_14970/*"Unable to complete SSL connection"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( *v15 <= 9u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 104) = v78;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 104), v78, v72, v73, v74, v75, v76, v77);
  Instance = StringLiteral_15159/*"Unknown Error"*/;
  if ( StringLiteral_15159/*"Unknown Error"*/ )
  {
    Instance = sub_B70754(StringLiteral_15159/*"Unknown Error"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v85 = (System_Int32_array **)StringLiteral_15159/*"Unknown Error"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( *v15 <= 0xAu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 112) = v85;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 112), v85, v79, v80, v81, v82, v83, v84);
  Instance = StringLiteral_11580/*"Request timeout"*/;
  if ( StringLiteral_11580/*"Request timeout"*/ )
  {
    Instance = sub_B70754(StringLiteral_11580/*"Request timeout"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v92 = (System_Int32_array **)StringLiteral_11580/*"Request timeout"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( *v15 <= 0xBu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 120) = v92;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 120), v92, v86, v87, v88, v89, v90, v91);
  Instance = StringLiteral_2129/*"AssetBundle file check sum error"*/;
  if ( StringLiteral_2129/*"AssetBundle file check sum error"*/ )
  {
    Instance = sub_B70754(StringLiteral_2129/*"AssetBundle file check sum error"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v99 = (System_Int32_array **)StringLiteral_2129/*"AssetBundle file check sum error"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( *v15 <= 0xCu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 128) = v99;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 128), v99, v93, v94, v95, v96, v97, v98);
  Instance = StringLiteral_12487/*"SSL CA certificate error"*/;
  if ( StringLiteral_12487/*"SSL CA certificate error"*/ )
  {
    Instance = sub_B70754(StringLiteral_12487/*"SSL CA certificate error"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v106 = (System_Int32_array **)StringLiteral_12487/*"SSL CA certificate error"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( *v15 <= 0xDu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 136) = v106;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 136), v106, v100, v101, v102, v103, v104, v105);
  Instance = StringLiteral_7200/*"HTTP/1.1 500 Internal Server Error"*/;
  if ( StringLiteral_7200/*"HTTP/1.1 500 Internal Server Error"*/ )
  {
    Instance = sub_B70754(StringLiteral_7200/*"HTTP/1.1 500 Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v113 = (System_Int32_array **)StringLiteral_7200/*"HTTP/1.1 500 Internal Server Error"*/;
  }
  else
  {
    v113 = 0LL;
  }
  if ( *v15 <= 0xEu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 144) = v113;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 144), v113, v107, v108, v109, v110, v111, v112);
  Instance = StringLiteral_7201/*"HTTP/1.1 504 Gateway Timeout"*/;
  if ( StringLiteral_7201/*"HTTP/1.1 504 Gateway Timeout"*/ )
  {
    Instance = sub_B70754(StringLiteral_7201/*"HTTP/1.1 504 Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v120 = (System_Int32_array **)StringLiteral_7201/*"HTTP/1.1 504 Gateway Timeout"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( *v15 <= 0xFu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 152) = v120;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 152), v120, v114, v115, v116, v117, v118, v119);
  Instance = StringLiteral_5356/*"Destination host has an erroneous SSL certificate"*/;
  if ( StringLiteral_5356/*"Destination host has an erroneous SSL certificate"*/ )
  {
    Instance = sub_B70754(StringLiteral_5356/*"Destination host has an erroneous SSL certificate"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v127 = (System_Int32_array **)StringLiteral_5356/*"Destination host has an erroneous SSL certificate"*/;
  }
  else
  {
    v127 = 0LL;
  }
  if ( *v15 <= 0x10u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 160) = v127;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 160), v127, v121, v122, v123, v124, v125, v126);
  Instance = StringLiteral_14699/*"Too many redirects"*/;
  if ( StringLiteral_14699/*"Too many redirects"*/ )
  {
    Instance = sub_B70754(StringLiteral_14699/*"Too many redirects"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v134 = (System_Int32_array **)StringLiteral_14699/*"Too many redirects"*/;
  }
  else
  {
    v134 = 0LL;
  }
  if ( *v15 <= 0x11u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 168) = v134;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 168), v134, v128, v129, v130, v131, v132, v133);
  Instance = StringLiteral_20352/*"java.io.EOFException"*/;
  if ( StringLiteral_20352/*"java.io.EOFException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20352/*"java.io.EOFException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v141 = (System_Int32_array **)StringLiteral_20352/*"java.io.EOFException"*/;
  }
  else
  {
    v141 = 0LL;
  }
  if ( *v15 <= 0x12u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 176) = v141;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 176), v141, v135, v136, v137, v138, v139, v140);
  Instance = StringLiteral_20369/*"java.net.SocketException"*/;
  if ( StringLiteral_20369/*"java.net.SocketException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20369/*"java.net.SocketException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v148 = (System_Int32_array **)StringLiteral_20369/*"java.net.SocketException"*/;
  }
  else
  {
    v148 = 0LL;
  }
  if ( *v15 <= 0x13u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 184) = v148;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 184), v148, v142, v143, v144, v145, v146, v147);
  Instance = StringLiteral_20370/*"java.net.SocketTimeoutException"*/;
  if ( StringLiteral_20370/*"java.net.SocketTimeoutException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20370/*"java.net.SocketTimeoutException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v155 = (System_Int32_array **)StringLiteral_20370/*"java.net.SocketTimeoutException"*/;
  }
  else
  {
    v155 = 0LL;
  }
  if ( *v15 <= 0x14u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 192) = v155;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 192), v155, v149, v150, v151, v152, v153, v154);
  Instance = StringLiteral_20367/*"java.net.NoRouteToHostException"*/;
  if ( StringLiteral_20367/*"java.net.NoRouteToHostException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20367/*"java.net.NoRouteToHostException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v162 = (System_Int32_array **)StringLiteral_20367/*"java.net.NoRouteToHostException"*/;
  }
  else
  {
    v162 = 0LL;
  }
  if ( *v15 <= 0x15u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 200) = v162;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 200), v162, v156, v157, v158, v159, v160, v161);
  Instance = StringLiteral_20353/*"java.io.IOException"*/;
  if ( StringLiteral_20353/*"java.io.IOException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20353/*"java.io.IOException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v169 = (System_Int32_array **)StringLiteral_20353/*"java.io.IOException"*/;
  }
  else
  {
    v169 = 0LL;
  }
  if ( *v15 <= 0x16u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 208) = v169;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 208), v169, v163, v164, v165, v166, v167, v168);
  Instance = StringLiteral_20366/*"java.net.ConnectException"*/;
  if ( StringLiteral_20366/*"java.net.ConnectException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20366/*"java.net.ConnectException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v176 = (System_Int32_array **)StringLiteral_20366/*"java.net.ConnectException"*/;
  }
  else
  {
    v176 = 0LL;
  }
  if ( *v15 <= 0x17u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 216) = v176;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 216), v176, v170, v171, v172, v173, v174, v175);
  Instance = StringLiteral_17916/*"connect failed"*/;
  if ( StringLiteral_17916/*"connect failed"*/ )
  {
    Instance = sub_B70754(StringLiteral_17916/*"connect failed"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v183 = (System_Int32_array **)StringLiteral_17916/*"connect failed"*/;
  }
  else
  {
    v183 = 0LL;
  }
  if ( *v15 <= 0x18u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 224) = v183;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 224), v183, v177, v178, v179, v180, v181, v182);
  Instance = StringLiteral_20368/*"java.net.ProtocolException"*/;
  if ( StringLiteral_20368/*"java.net.ProtocolException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20368/*"java.net.ProtocolException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v190 = (System_Int32_array **)StringLiteral_20368/*"java.net.ProtocolException"*/;
  }
  else
  {
    v190 = 0LL;
  }
  if ( *v15 <= 0x19u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 232) = v190;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 232), v190, v184, v185, v186, v187, v188, v189);
  Instance = StringLiteral_20371/*"java.net.UnknownHostException"*/;
  if ( StringLiteral_20371/*"java.net.UnknownHostException"*/ )
  {
    Instance = sub_B70754(StringLiteral_20371/*"java.net.UnknownHostException"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v197 = (System_Int32_array **)StringLiteral_20371/*"java.net.UnknownHostException"*/;
  }
  else
  {
    v197 = 0LL;
  }
  if ( *v15 <= 0x1Au )
    goto LABEL_195;
  *(_QWORD *)(v13 + 240) = v197;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 240), v197, v191, v192, v193, v194, v195, v196);
  Instance = StringLiteral_1201/*"400: Bad Request"*/;
  if ( StringLiteral_1201/*"400: Bad Request"*/ )
  {
    Instance = sub_B70754(StringLiteral_1201/*"400: Bad Request"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v204 = (System_Int32_array **)StringLiteral_1201/*"400: Bad Request"*/;
  }
  else
  {
    v204 = 0LL;
  }
  if ( *v15 <= 0x1Bu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 248) = v204;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 248), v204, v198, v199, v200, v201, v202, v203);
  Instance = StringLiteral_1203/*"401: Authorization Required"*/;
  if ( StringLiteral_1203/*"401: Authorization Required"*/ )
  {
    Instance = sub_B70754(StringLiteral_1203/*"401: Authorization Required"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v211 = (System_Int32_array **)StringLiteral_1203/*"401: Authorization Required"*/;
  }
  else
  {
    v211 = 0LL;
  }
  if ( *v15 <= 0x1Cu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 256) = v211;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 256), v211, v205, v206, v207, v208, v209, v210);
  Instance = StringLiteral_1204/*"403: Forbidden"*/;
  if ( StringLiteral_1204/*"403: Forbidden"*/ )
  {
    Instance = sub_B70754(StringLiteral_1204/*"403: Forbidden"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v218 = (System_Int32_array **)StringLiteral_1204/*"403: Forbidden"*/;
  }
  else
  {
    v218 = 0LL;
  }
  if ( *v15 <= 0x1Du )
    goto LABEL_195;
  *(_QWORD *)(v13 + 264) = v218;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 264), v218, v212, v213, v214, v215, v216, v217);
  Instance = StringLiteral_1206/*"404: Not Found"*/;
  if ( StringLiteral_1206/*"404: Not Found"*/ )
  {
    Instance = sub_B70754(StringLiteral_1206/*"404: Not Found"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v225 = (System_Int32_array **)StringLiteral_1206/*"404: Not Found"*/;
  }
  else
  {
    v225 = 0LL;
  }
  if ( *v15 <= 0x1Eu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 272) = v225;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 272), v225, v219, v220, v221, v222, v223, v224);
  Instance = StringLiteral_1207/*"408: Request Time-out"*/;
  if ( StringLiteral_1207/*"408: Request Time-out"*/ )
  {
    Instance = sub_B70754(StringLiteral_1207/*"408: Request Time-out"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v232 = (System_Int32_array **)StringLiteral_1207/*"408: Request Time-out"*/;
  }
  else
  {
    v232 = 0LL;
  }
  if ( *v15 <= 0x1Fu )
    goto LABEL_195;
  *(_QWORD *)(v13 + 280) = v232;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 280), v232, v226, v227, v228, v229, v230, v231);
  Instance = StringLiteral_1214/*"500: Internal Server Error"*/;
  if ( StringLiteral_1214/*"500: Internal Server Error"*/ )
  {
    Instance = sub_B70754(StringLiteral_1214/*"500: Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v239 = (System_Int32_array **)StringLiteral_1214/*"500: Internal Server Error"*/;
  }
  else
  {
    v239 = 0LL;
  }
  if ( *v15 <= 0x20u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 288) = v239;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 288), v239, v233, v234, v235, v236, v237, v238);
  Instance = StringLiteral_1216/*"502:"*/;
  if ( StringLiteral_1216/*"502:"*/ )
  {
    Instance = sub_B70754(StringLiteral_1216/*"502:"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v246 = (System_Int32_array **)StringLiteral_1216/*"502:"*/;
  }
  else
  {
    v246 = 0LL;
  }
  if ( *v15 <= 0x21u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 296) = v246;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 296), v246, v240, v241, v242, v243, v244, v245);
  Instance = StringLiteral_1218/*"503 Auto retry count"*/;
  if ( StringLiteral_1218/*"503 Auto retry count"*/ )
  {
    Instance = sub_B70754(StringLiteral_1218/*"503 Auto retry count"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v253 = (System_Int32_array **)StringLiteral_1218/*"503 Auto retry count"*/;
  }
  else
  {
    v253 = 0LL;
  }
  if ( *v15 <= 0x22u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 304) = v253;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 304), v253, v247, v248, v249, v250, v251, v252);
  Instance = StringLiteral_1228/*"504: Gateway Timeout"*/;
  if ( StringLiteral_1228/*"504: Gateway Timeout"*/ )
  {
    Instance = sub_B70754(StringLiteral_1228/*"504: Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v260 = (System_Int32_array **)StringLiteral_1228/*"504: Gateway Timeout"*/;
  }
  else
  {
    v260 = 0LL;
  }
  if ( *v15 <= 0x23u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 312) = v260;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 312), v260, v254, v255, v256, v257, v258, v259);
  Instance = StringLiteral_15005/*"Unable to read data"*/;
  if ( StringLiteral_15005/*"Unable to read data"*/ )
  {
    Instance = sub_B70754(StringLiteral_15005/*"Unable to read data"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( Instance )
    {
      v267 = (System_Int32_array **)StringLiteral_15005/*"Unable to read data"*/;
      goto LABEL_188;
    }
LABEL_209:
    v274 = sub_B7078C(Instance);
    sub_B70738(v274, 0LL);
  }
  v267 = 0LL;
LABEL_188:
  if ( *v15 <= 0x24u )
    goto LABEL_195;
  *(_QWORD *)(v13 + 320) = v267;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 320), v267, v261, v262, v263, v264, v265, v266);
  v268 = *(_QWORD *)(v13 + 24);
  if ( (int)v268 < 1 )
  {
LABEL_196:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v272 = (Il2CppObject *)errorCode;
    goto LABEL_208;
  }
  v269 = 0LL;
  v270 = (int)v268;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_210;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v13 + 32 + 8 * v269), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v269 >= v270 )
      goto LABEL_196;
    if ( v269 >= (unsigned int)*v15 )
      goto LABEL_195;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v273 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v6), !v273) )
  {
LABEL_210:
    sub_B7076C(Instance, v6);
  }
  CrashReporter__AddCustomKey(v273, (System_String_o *)StringLiteral_4688/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v269 >= *v15 )
  {
LABEL_195:
    v271 = sub_B70798(Instance);
    sub_B70738(v271, 0LL);
  }
  if ( !Instance )
    goto LABEL_210;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4689/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v269),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v272 = (Il2CppObject *)StringLiteral_2133/*"AssetLoadError"*/;
LABEL_208:
  UnityEngine_Debug__LogError(v272, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndHandler_o *endCallback; // x0
  AssetLoader_LoadEndDataHandler_o *endCallback2; // x0

  if ( (byte_4354F49 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354F49 = 1;
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
  UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)this, 0LL);
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
  sub_B70630(
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
    sub_B7076C(0LL, name);
  return System_String__Equals_44745508(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_31186144(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_31177892(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4354F48 & 1) == 0 )
  {
    sub_B70694(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4354F48 = 1;
  }
  v5 = sub_B70764(AssetLoader__LoadDataCR_d__29_TypeInfo);
  AssetLoader__LoadDataCR_d__29___ctor((AssetLoader__LoadDataCR_d__29_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)resourceNames,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
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

  if ( (byte_4354F4A & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    byte_4354F4A = 1;
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
  sub_B70630((BattleServantConfConponent_o *)p_decData, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ManagementManager_c *v16; // x0
  ManagementManager_o *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4354F4B & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4354F4B = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.loader, 0LL, v10, v11, v12, v13, v14, v15);
  }
  this->fields.readData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_434F41E )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_434F41E = 1;
  }
  v16 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v16 = ManagementManager_TypeInfo;
  }
  if ( v16->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_41043380(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v18);
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
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  bool v15; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callbackFunc,
    (System_String_array **)resourceNames,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v14 = (__int64)*(p_endCallback - 1);
  if ( !v14 )
    sub_B7076C(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
  __int64 v10; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_B7076C(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4354F44 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4354F44 = 1;
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
    v9 = sub_B650AC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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

  if ( (byte_4354F46 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4354F46 = 1;
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
    v9 = sub_B650AC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
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

  if ( (byte_4354F45 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4354F45 = 1;
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
    v9 = sub_B650AC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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

  if ( (byte_4354F47 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4354F47 = 1;
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
    v9 = sub_B650AC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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
  sub_B70630(
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, data);
      v31 = sub_B706C4(v28);
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
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
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
                  v23 = sub_B08590(data, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(AssetData_o *, _QWORD))sub_B70744(v15, v28);
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
                  v14 = sub_B08590(data, class_0, v9);
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
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
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
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))sub_B70744(v22, v28);
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
                v21 = sub_B08590(v29, v17, v16);
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
  sub_B70630(
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, loader);
      v31 = sub_B706C4(v28);
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
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
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
                  v23 = sub_B08590(loader, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(AssetLoader_o *, _QWORD))sub_B70744(v15, v28);
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
                  v14 = sub_B08590(loader, class_0, v9);
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
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
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
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))sub_B70744(v22, v28);
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
                v21 = sub_B08590(v29, v17, v16);
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
  AssetLoader__LoadDataCR_d__29_o *v9; // x26
  struct AssetLoader_o *_4__this; // x20
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v13; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 v15; // x10
  UnityEngine_Networking_DownloadHandler_o *v16; // x8
  uint32_t klass; // w8
  UnityEngine_AssetBundleCreateRequest_o *v18; // x8
  AssetData_o *v19; // x20
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int v27; // w8
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  AssetLoader__LoadDataCR_d__29_o **v29; // x21
  System_String_o **p_url_5__11; // x21
  UnityEngine_Networking_UnityWebRequest_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **data; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Byte_array *readData; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattleServantConfConponent_o *p_errorCode_5__6; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v72; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v74; // x23
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int64_t v89; // x23
  ManagerConfig_c *v90; // x0
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  BattleServantConfConponent_o *p_errorLocalizeCode_5__7; // x0
  System_Int32_array **v99; // x1
  System_Int32_array **Url; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v108; // x8
  System_String_o *v109; // x22
  bool v110; // w23
  System_String_o *Key; // x0
  System_Int32_array **v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  float progress; // s0
  float loadProgress_5__9; // s9
  float v128; // s8
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  float v135; // s0
  bool v136; // zf
  float v137; // s8
  UnityEngine_Networking_DownloadHandler_o *v138; // x0
  __int64 v139; // x10
  UnityEngine_Networking_DownloadHandler_o *v140; // x23
  System_String_o *v141; // x0
  int v142; // w8
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  UnityEngine_Networking_DownloadHandler_c *v156; // x0
  __int64 (**image)(void); // x8
  __int64 v158; // x10
  UnityEngine_Networking_DownloadHandler_c *v159; // x8
  System_String_o *v160; // x22
  System_String_o *v161; // x0
  System_Int32_array **v162; // x1
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_String_o *v169; // x22
  System_String_o *v170; // x0
  System_Int32_array **v171; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v179; // x23
  System_String_o *v180; // x23
  AssetLoader__LoadDataCR_d__29_o *v181; // x23
  System_String_o *v182; // x24
  int v183; // w8
  System_String_o *v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  AssetLoader__LoadDataCR_d__29_o *v191; // x22
  System_Int32_array **v192; // x1
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x23
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x1
  struct AssetData_o *v207; // x8
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x23
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  System_Int32_array **v221; // x1
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Int32_array **v228; // x23
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_Int32_array **v235; // x1
  System_Int32_array **v236; // x0
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  ManagerConfig_c *v243; // x0
  struct AssetData_o *v244; // x8
  CommonUI_o *v245; // x21
  System_String_o *v246; // x22
  ErrorDialog_ClickDelegate_o *v247; // x23
  ManagementManager_c *v248; // x0
  _BOOL4 isDuringStartup; // w19
  WebViewManager_o *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v252; // x22
  System_String_o *v253; // x21
  System_String_o *v254; // x23
  System_String_o *v255; // x23
  ErrorDialog_ClickDelegate_o *v256; // x24
  System_String_o *v257; // x23
  System_String_o *v258; // x23
  ErrorDialog_ClickDelegate_o *v259; // x24
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  System_String_o *v280; // x21
  System_String_o *UrlString; // x0
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  AssetLoader__LoadDataCR_d__29_o **v288; // x21
  float v289; // s8
  ManagerConfig_c *v290; // x0
  float v291; // s0
  System_Int32_array **v292; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  float v305; // s0
  float v306; // s9
  float v307; // s8
  float v308; // s0
  float v309; // s8
  System_String_o **v310; // x21
  UnityEngine_Networking_UnityWebRequest_o **v311; // x22
  System_String_o *v312; // x0
  System_String_o *text; // x23
  System_String_o *v314; // x23
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  System_String_o *v321; // x23
  int v322; // w8
  int32_t v323; // w0
  int32_t v324; // w25
  System_String_o *v325; // x24
  System_String_o *v326; // x23
  System_Byte_array *v327; // x25
  uint32_t v328; // w25
  int v329; // w8
  Il2CppObject *v330; // x25
  AssetLoader__LoadDataCR_d__29_o *v331; // x21
  unsigned int v332; // w26
  System_String_o *v333; // x22
  Il2CppObject *v334; // x8
  AssetLoader__LoadDataCR_d__29_o *v335; // x22
  char v336; // w8
  System_String_o *v337; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v339; // x22
  System_String_o *v340; // x0
  int v341; // w23
  __int64 v342; // x0
  struct AssetData_o *v343; // x8
  ManagementManager_c *v344; // x0
  _BOOL4 v345; // w19
  CommonUI_o *v346; // x21
  System_String_o *v347; // x22
  ErrorDialog_ClickDelegate_o *v348; // x23
  ManagementManager_c *v349; // x0
  _BOOL4 v350; // w21
  CommonUI_o *v351; // x19
  __int64 *v352; // x8
  System_String_o *v353; // x21
  ErrorDialog_ClickDelegate_o *v354; // x22
  bool result; // w0
  __int64 *v356; // x8
  System_String_o *v357; // x22
  ErrorDialog_ClickDelegate_o *v358; // x23
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  Il2CppObject *_2__current; // x21
  AssetData_o *v372; // x22
  AssetLoader__LoadDataCR_d__29_o **v373; // x21
  __int64 v374; // x10
  __int64 v375; // x10
  System_Byte_array *v376; // x0
  System_Int32_array **v377; // x0
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  System_String_array **v384; // x2
  System_String_array **v385; // x3
  System_Boolean_array **v386; // x4
  System_Int32_array **v387; // x5
  System_Int32_array *v388; // x6
  System_Int32_array *v389; // x7
  System_Int32_array **req_5__13; // x1
  System_String_array **v391; // x2
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  System_Int32_array **LoadRequest; // x0
  BattleServantConfConponent_o *v398; // x20
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  System_Int32_array **v405; // x0
  BattleServantConfConponent_o *p__2__current; // x26
  System_String_array **v407; // x2
  System_String_array **v408; // x3
  System_Boolean_array **v409; // x4
  System_Int32_array **v410; // x5
  System_Int32_array *v411; // x6
  System_Int32_array *v412; // x7
  int v413; // w8
  int autoRetryCount_5__3; // w19
  ManagerConfig_c *v415; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v417; // x20
  System_String_array **v418; // x2
  System_String_array **v419; // x3
  System_Boolean_array **v420; // x4
  System_Int32_array **v421; // x5
  System_Int32_array *v422; // x6
  System_Int32_array *v423; // x7
  System_Int32_array **v424; // x1
  System_String_array **v425; // x2
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  System_String_array **v431; // x2
  System_String_array **v432; // x3
  System_Boolean_array **v433; // x4
  System_Int32_array **v434; // x5
  System_Int32_array *v435; // x6
  System_Int32_array *v436; // x7
  System_Int32_array **v437; // x1
  System_Int32_array **v438; // x1
  System_Int32_array **v439; // x1
  System_String_array **v440; // x2
  System_String_array **v441; // x3
  System_Boolean_array **v442; // x4
  System_Int32_array **v443; // x5
  System_Int32_array *v444; // x6
  System_Int32_array *v445; // x7
  ManagerConfig_c *v446; // x0
  struct AssetData_o *v447; // x8
  CommonUI_o *v448; // x22
  System_String_o *v449; // x21
  ErrorDialog_ClickDelegate_o *v450; // x23
  System_Int32_array **v451; // x1
  ManagementManager_c *v452; // x0
  _BOOL4 v453; // w19
  CommonUI_o *v454; // x21
  System_String_o *v455; // x22
  ErrorDialog_ClickDelegate_o *v456; // x23
  System_String_o *v457; // x22
  ErrorDialog_ClickDelegate_o *v458; // x23
  System_Int32_array **v459; // x1
  UnityEngine_WaitForSeconds_o *v460; // x20
  System_String_array **v461; // x2
  System_String_array **v462; // x3
  System_Boolean_array **v463; // x4
  System_Int32_array **v464; // x5
  System_Int32_array *v465; // x6
  System_Int32_array *v466; // x7
  AssetLoader___c_c *v467; // x0
  struct AssetLoader___c_StaticFields *v468; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v470; // x21
  struct AssetLoader___c_StaticFields *v471; // x0
  System_String_array **v472; // x2
  System_String_array **v473; // x3
  System_Boolean_array **v474; // x4
  System_Int32_array **v475; // x5
  System_Int32_array *v476; // x6
  System_Int32_array *v477; // x7
  UnityEngine_WaitUntil_o *v478; // x21
  System_String_array **v479; // x2
  System_String_array **v480; // x3
  System_Boolean_array **v481; // x4
  System_Int32_array **v482; // x5
  System_Int32_array *v483; // x6
  System_Int32_array *v484; // x7
  UnityEngine_Networking_DownloadHandler_o *v485; // x0
  ManagerConfig_c *v486; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  System_Int32_array **wait_5__10; // x1
  ManagerConfig_c *v489; // x0
  struct ManagerConfig_StaticFields *v490; // x8
  System_Int32_array **v491; // x1
  __int64 v492; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  AssetLoader__LoadDataCR_d__29_o *v495; // [xsp+28h] [xbp-78h]
  __int64 v496; // [xsp+30h] [xbp-70h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-68h] BYREF

  v9 = this;
  if ( (byte_43509B9 & 1) == 0 )
  {
    sub_B70694(&Method_AssetLoader_EndRebootDialog__);
    sub_B70694(&Method_AssetLoader_EndRetryDialog__);
    sub_B70694(&Method_AssetLoader_EndWarningDialog__);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonServicePluginScript_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_B70694(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_B70694(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&System_IO_IOException_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_B70694(&AssetLoader___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_9386/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_B70694(&StringLiteral_7195/*"HTTP"*/);
    sub_B70694(&StringLiteral_5406/*"Disk full"*/);
    sub_B70694(&StringLiteral_2147/*"AssetStorageList download time over"*/);
    sub_B70694(&StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_2134/*"AssetName : "*/);
    sub_B70694(&StringLiteral_666/*")\n\n503 Auto retry count "*/);
    sub_B70694(&StringLiteral_669/*")\nfile crc ("*/);
    sub_B70694(&StringLiteral_1217/*"503"*/);
    sub_B70694(&StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_B70694(&StringLiteral_15966/*"[FFFF80]Download error for debug"*/);
    sub_B70694(&StringLiteral_2144/*"AssetStorageList download data error"*/);
    sub_B70694(&StringLiteral_24082/*"~"*/);
    sub_B70694(&StringLiteral_12536/*"STATUS"*/);
    sub_B70694(&StringLiteral_665/*")\n\n"*/);
    sub_B70694(&StringLiteral_9385/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_B70694(&StringLiteral_596/*"("*/);
    sub_B70694(&StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_18675/*"error "*/);
    sub_B70694(&StringLiteral_1565/*"@"*/);
    sub_B70694(&StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_2145/*"AssetStorageList download error"*/);
    sub_B70694(&StringLiteral_668/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43509B9 = 1;
  }
  v496 = 0LL;
  value = 0LL;
  _4__this = v9->fields.__4__this;
  switch ( v9->fields.__1__state )
  {
    case 0:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_438;
      v9->fields._isEncrypted_5__2 = AssetData__get_IsAssetBundle((AssetData_o *)this, 0LL);
      v9->fields._autoRetryCount_5__3 = 0;
      goto LABEL_57;
    case 1:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      v9->fields.__1__state = -1;
      goto LABEL_79;
    case 2:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_173;
    case 3:
      v9->fields.__1__state = -1;
      goto LABEL_202;
    case 4:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_201;
    case 5:
      v29 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      v9->fields.__1__state = -1;
      goto LABEL_230;
    case 6:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_388;
    case 7:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_409;
    case 8:
      v9->fields._asyncOperater_5__12 = 0LL;
      v9->fields.__1__state = -1;
      sub_B70630((BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12, 0LL, v2, v3, v4, v5, v6, v7);
      p_url_5__11 = &v9->fields._url_5__11;
      goto LABEL_221;
    case 9:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_338;
    case 0xA:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      goto LABEL_362;
    case 0xB:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_438;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0LL);
      if ( !*p_loader )
        goto LABEL_438;
      v13 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        v15 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1);
        if ( *(&downloadHandler->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[v15 - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v16 = downloadHandler;
          else
            v16 = 0LL;
          if ( (v13 & 1) != 0 )
            goto LABEL_13;
LABEL_44:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v38, v39, v40, v41, v42, v43);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_438;
          AssetData__ResetVersion((AssetData_o *)this, 0LL);
          goto LABEL_57;
        }
      }
      v16 = 0LL;
      if ( (v13 & 1) == 0 )
        goto LABEL_44;
LABEL_13:
      if ( v16 )
      {
        klass = (uint32_t)v16[1].klass;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_438;
        data = (System_Int32_array **)UnityEngine_Networking_DownloadHandler__get_data(
                                        (UnityEngine_Networking_DownloadHandler_o *)this,
                                        0LL);
        _4__this->fields.readData = (struct System_Byte_array *)data;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.readData, data, v45, v46, v47, v48, v49, v50);
        readData = _4__this->fields.readData;
        if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        klass = Crc32__Compute(readData, 0LL);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_438;
      if ( klass == this->fields._autoRetryCount_5__3 )
        goto LABEL_343;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      AssetData__ResetVersion((AssetData_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v52, v53, v54, v55, v56, v57);
      _4__this->fields.readData = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v58, v59, v60, v61, v62, v63);
      while ( 1 )
      {
LABEL_57:
        _4__this->fields.readData = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        if ( !_4__this->fields.isDownload )
          goto LABEL_341;
        *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
        v9->fields._errorCode_5__6 = 0LL;
        p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        v72 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v72 = ManagerConfig_TypeInfo;
        }
        TIMEOUT = v72->static_fields->TIMEOUT;
        v9->fields._loadProgress_5__9 = 0.0;
        v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
        v74 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v74, 0LL);
        v9->fields._wait_5__10 = v74;
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields._wait_5__10,
          (System_Int32_array **)v74,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80);
        Path = AssetStorageCache__GetPath(0LL);
        if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        }
        FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
        if ( FreeSize >= 1 )
        {
          v89 = FreeSize;
          v90 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v90 = ManagerConfig_TypeInfo;
          }
          if ( v89 < v90->static_fields->LIMIT_FREE_SIZE )
          {
            _4__this->fields.isErrorDialog = 1;
            v91 = (System_Int32_array **)StringLiteral_5406/*"Disk full"*/;
            p_errorCode_5__6->klass = (BattleServantConfConponent_c *)StringLiteral_5406/*"Disk full"*/;
            sub_B70630((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, v91, v83, v84, v85, v86, v87, v88);
            p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7;
            v99 = (System_Int32_array **)StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/;
            v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/;
            goto LABEL_165;
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        Url = (System_Int32_array **)AssetData__get_Url((AssetData_o *)this, 0LL);
        v9->fields._url_5__11 = (struct System_String_o *)Url;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._url_5__11, Url, v101, v102, v103, v104, v105, v106);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        url_5__11 = v9->fields._url_5__11;
        this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0LL);
        v108 = _4__this->fields.data;
        v109 = (System_String_o *)this;
        if ( v9->fields._isEncrypted_5__2 )
        {
          if ( !v108 )
            goto LABEL_438;
          v110 = v108->fields.entryCount > 0;
        }
        else
        {
          if ( !v108 )
            goto LABEL_438;
          v110 = 0;
        }
        Key = AssetData__get_Key(_4__this->fields.data, 0LL);
        v112 = (System_Int32_array **)UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, v109, v110, Key, 0LL);
        _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v112;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, v112, v113, v114, v115, v116, v117, v118);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v119 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                        0LL);
        v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v119;
        p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124,
          v125);
LABEL_79:
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
LABEL_438:
          sub_B7076C(this, method);
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                    (UnityEngine_AsyncOperation_o *)this,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = *p_asyncOperater_5__12;
          if ( !*p_asyncOperater_5__12 )
            goto LABEL_438;
          progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
          loadProgress_5__9 = v9->fields._loadProgress_5__9;
          v128 = progress;
          v135 = UnityEngine_Time__get_unscaledTime(0LL);
          v136 = v128 == loadProgress_5__9;
          v137 = v135;
          if ( !v136 )
          {
            v486 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v486 = ManagerConfig_TypeInfo;
            }
            static_fields = v486->static_fields;
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
            v9->fields._requestTime_5__8 = v137 + static_fields->TIMEOUT;
            if ( !this )
              goto LABEL_438;
            v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0LL);
LABEL_431:
            wait_5__10 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)wait_5__10;
            sub_B70630(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              wait_5__10,
              v129,
              v130,
              v131,
              v132,
              v133,
              v134);
            result = 1;
            v9->fields.__1__state = 1;
            return result;
          }
          if ( v135 < v9->fields._requestTime_5__8 )
            goto LABEL_431;
        }
        if ( !_4__this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v138 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0LL);
        if ( v138
          && (v139 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1),
              *(&v138->klass->_2.bitflags2 + 1) >= (unsigned int)v139) )
        {
          v140 = (DownloadHandlerFileWithCrcCheck_c *)v138->klass->_2.typeHierarchy[v139 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
               ? v138
               : 0LL;
        }
        else
        {
          v140 = 0LL;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v143 = (System_Int32_array **)System_String__Concat_44760452(
                                          (System_String_o *)StringLiteral_596/*"("*/,
                                          v9->fields._url_5__11,
                                          (System_String_o *)StringLiteral_668/*")\n\nAssetBundle file download time over"*/,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v143;
          sub_B70630(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v143,
            v144,
            v145,
            v146,
            v147,
            v148,
            v149);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          if ( v140 )
            DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v140, 0LL);
          goto LABEL_164;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v141 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( System_String__IsNullOrEmpty(v141, 0LL) )
        {
          if ( !v140 )
          {
            v142 = 0;
LABEL_127:
            HIDWORD(v496) = v142;
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_438;
            if ( v142 == this->fields._autoRetryCount_5__3 )
            {
              AssetData__UpdateVersion((AssetData_o *)this, 0LL);
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              _4__this->fields.isDownload = 0;
            }
            else
            {
              this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(string___TypeInfo, 7LL);
              if ( !this )
                goto LABEL_438;
              v191 = this;
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_596/*"("*/;
              if ( StringLiteral_596/*"("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(StringLiteral_596/*"("*/, v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v192 = (System_Int32_array **)StringLiteral_596/*"("*/;
              }
              else
              {
                v192 = 0LL;
              }
              if ( !LODWORD(v191->fields.__2__current) )
                goto LABEL_295;
              v191->fields.__4__this = (struct AssetLoader_o *)v192;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields.__4__this,
                v192,
                v185,
                v186,
                v187,
                v188,
                v189,
                v190);
              v199 = (System_Int32_array **)v9->fields._url_5__11;
              if ( v199 )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(
                                                            v9->fields._url_5__11,
                                                            v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v191->fields.__2__current) <= 1 )
                goto LABEL_295;
              v191->fields.resourceNames = (struct System_String_array *)v199;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields.resourceNames,
                v199,
                v193,
                v194,
                v195,
                v196,
                v197,
                v198);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              if ( StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v206 = (System_Int32_array **)StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              }
              else
              {
                v206 = 0LL;
              }
              if ( LODWORD(v191->fields.__2__current) <= 2 )
                goto LABEL_295;
              *(_QWORD *)&v191->fields._isEncrypted_5__2 = v206;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields._isEncrypted_5__2,
                v206,
                v200,
                v201,
                v202,
                v203,
                v204,
                v205);
              v207 = _4__this->fields.data;
              if ( !v207 )
                goto LABEL_438;
              LODWORD(v496) = v207->fields.crc;
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v496, 0LL);
              v214 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(this, v191->klass->_1.element_class);
                if ( !this )
                {
LABEL_439:
                  v492 = sub_B7078C(this);
                  sub_B70738(v492, 0LL);
                }
              }
              if ( LODWORD(v191->fields.__2__current) <= 3 )
                goto LABEL_295;
              *(_QWORD *)&v191->fields._isAutoRetry_5__4 = v214;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields._isAutoRetry_5__4,
                v214,
                v208,
                v209,
                v210,
                v211,
                v212,
                v213);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_669/*")\nfile crc ("*/;
              if ( StringLiteral_669/*")\nfile crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(StringLiteral_669/*")\nfile crc ("*/, v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v221 = (System_Int32_array **)StringLiteral_669/*")\nfile crc ("*/;
              }
              else
              {
                v221 = 0LL;
              }
              if ( LODWORD(v191->fields.__2__current) <= 4 )
                goto LABEL_295;
              v191->fields._errorCode_5__6 = (struct System_String_o *)v221;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields._errorCode_5__6,
                v221,
                v215,
                v216,
                v217,
                v218,
                v219,
                v220);
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v496 + 4, 0LL);
              v228 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(this, v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v191->fields.__2__current) <= 5 )
                goto LABEL_295;
              v191->fields._errorLocalizeCode_5__7 = (struct System_String_o *)v228;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields._errorLocalizeCode_5__7,
                v228,
                v222,
                v223,
                v224,
                v225,
                v226,
                v227);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_663/*")"*/;
              if ( StringLiteral_663/*")"*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B70754(StringLiteral_663/*")"*/, v191->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v235 = (System_Int32_array **)StringLiteral_663/*")"*/;
              }
              else
              {
                v235 = 0LL;
              }
              if ( LODWORD(v191->fields.__2__current) <= 6 )
                goto LABEL_295;
              *(_QWORD *)&v191->fields._requestTime_5__8 = v235;
              sub_B70630(
                (BattleServantConfConponent_o *)&v191->fields._requestTime_5__8,
                v235,
                v229,
                v230,
                v231,
                v232,
                v233,
                v234);
              v236 = (System_Int32_array **)System_String__Concat_44838292((System_String_array *)v191, 0LL);
              v9->fields._errorCode_5__6 = (struct System_String_o *)v236;
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              sub_B70630(
                (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
                v236,
                v237,
                v238,
                v239,
                v240,
                v241,
                v242);
              v9->fields._isCrcError_5__5 = 1;
            }
            goto LABEL_164;
          }
          if ( !v140[4].klass )
          {
            v142 = (int)v140[1].klass;
            goto LABEL_127;
          }
        }
        else if ( !v140 )
        {
          goto LABEL_110;
        }
        DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v140, 0LL);
        v156 = v140[4].klass;
        if ( !v156 )
        {
LABEL_110:
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          v169 = v9->fields._url_5__11;
          v170 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          v171 = (System_Int32_array **)System_String__Concat_44761580(
                                          (System_String_o *)StringLiteral_596/*"("*/,
                                          v169,
                                          (System_String_o *)StringLiteral_665/*")\n\n"*/,
                                          v170,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v171;
          sub_B70630(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v171,
            v172,
            v173,
            v174,
            v175,
            v176,
            v177);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                              0LL);
          if ( !ResponseHeaders )
            goto LABEL_164;
          v179 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
                 (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                  v179,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_12536/*"STATUS"*/,
                  &value,
                  (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
          {
            goto LABEL_164;
          }
          v180 = (System_String_o *)value;
          this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_438;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_295;
          LOWORD(this->fields.__4__this) = 32;
          if ( !v180 )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44818952(
                                                      v180,
                                                      (System_Char_array *)this,
                                                      1,
                                                      0LL);
          if ( !this )
            goto LABEL_438;
          v181 = this;
          if ( SLODWORD(this->fields.__2__current) < 2 )
            goto LABEL_164;
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_7195/*"HTTP"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_164;
          if ( LODWORD(v181->fields.__2__current) <= 1 )
            goto LABEL_295;
          this = (AssetLoader__LoadDataCR_d__29_o *)v181->fields.resourceNames;
          if ( !this )
            goto LABEL_438;
          if ( !System_String__Equals_44745508((System_String_o *)this, (System_String_o *)StringLiteral_1217/*"503"*/, 0LL) )
            goto LABEL_164;
          v182 = v9->fields._url_5__11;
          v183 = v9->fields._autoRetryCount_5__3 + 1;
          v9->fields._isAutoRetry_5__4 = 1;
          v9->fields._autoRetryCount_5__3 = v183;
          v184 = System_Int32__ToString((int)v9 + 52, 0LL);
          v162 = (System_Int32_array **)System_String__Concat_44761580(
                                          (System_String_o *)StringLiteral_596/*"("*/,
                                          v182,
                                          (System_String_o *)StringLiteral_666/*")\n\n503 Auto retry count "*/,
                                          v184,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v162;
          goto LABEL_109;
        }
        image = (__int64 (**)(void))v156->_1.image;
        v158 = *(&System_IO_IOException_TypeInfo->_2.bitflags2 + 1);
        if ( *((unsigned __int8 *)v156->_1.image + 300) >= (unsigned int)v158
          && *((System_IO_IOException_c **)image[25] + v158 - 1) == System_IO_IOException_TypeInfo )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)v140[4].klass;
          if ( !this )
            goto LABEL_438;
          v162 = (System_Int32_array **)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v162;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
          v159 = v140[4].klass;
          if ( !v159 )
            goto LABEL_438;
          v160 = (System_String_o *)this;
          v161 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v159->_1.image
                                     + 49))(
                                      v140[4].klass,
                                      *((_QWORD *)v159->_1.image + 50));
          v162 = (System_Int32_array **)System_String__Concat_44761580(
                                          (System_String_o *)StringLiteral_18675/*"error "*/,
                                          v160,
                                          (System_String_o *)StringLiteral_82/*" "*/,
                                          v161,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v162;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
LABEL_109:
        sub_B70630(p_errorCode_5__6, v162, v163, v164, v165, v166, v167, v168);
LABEL_164:
        v9->fields._url_5__11 = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v150, v151, v152, v153, v154, v155);
        p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)p_asyncOperater_5__12;
        v99 = 0LL;
        v9->fields._asyncOperater_5__12 = 0LL;
LABEL_165:
        sub_B70630(p_errorLocalizeCode_5__7, v99, v92, v93, v94, v95, v96, v97);
        method = (const MethodInfo *)p_errorCode_5__6->klass;
        if ( p_errorCode_5__6->klass )
        {
          AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
          v243 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v243 = ManagerConfig_TypeInfo;
          }
          if ( v243->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v244 = _4__this->fields.data;
            if ( !v244 )
              goto LABEL_438;
            v245 = (CommonUI_o *)this;
            v246 = System_String__Concat_44761580(
                     (System_String_o *)StringLiteral_2134/*"AssetName : "*/,
                     v244->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     (System_String_o *)p_errorCode_5__6->klass,
                     0LL);
            v247 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v247, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v245 )
              goto LABEL_438;
            v8 &= 0xFFFFFFFF00000000LL;
            *(_DWORD *)&effectDistance.fields.has_value = v8;
            effectDistance.fields.value = 0LL;
            CommonUI__OpenWarningDialog(
              v245,
              (System_String_o *)StringLiteral_15966/*"[FFFF80]Download error for debug"*/,
              v246,
              v247,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
LABEL_173:
            if ( _4__this->fields.isErrorDialog )
            {
              v438 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v438;
              sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v438, v2, v3, v4, v5, v6, v7);
              v27 = 2;
              goto LABEL_411;
            }
          }
          if ( v9->fields._isAutoRetry_5__4 )
          {
            autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
            v415 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v415 = ManagerConfig_TypeInfo;
            }
            DOWNLOAD_RETRY_DELAY_TIME = v415->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
            v417 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v417, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v417;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B70630(p__2__current, (System_Int32_array **)v417, v418, v419, v420, v421, v422, v423);
            v413 = 3;
LABEL_413:
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v413;
            return 1;
          }
          if ( !v9->fields._isCrcError_5__5 )
          {
            _4__this->fields.isErrorDialog = 1;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            }
            if ( !byte_434F41E )
            {
              sub_B70694(&ManagementManager_TypeInfo);
              byte_434F41E = 1;
            }
            v248 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v248 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v248->static_fields->isDuringStartup;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
            v252 = (CommonUI_o *)Instance;
            v253 = (System_String_o *)StringLiteral_1/*""*/;
            if ( isDuringStartup )
            {
              if ( errorLocalizeCode_5__7 )
                v254 = v9->fields._errorLocalizeCode_5__7;
              else
                v254 = (System_String_o *)StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v255 = LocalizationManager__Get(v254, 0LL);
              v256 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v256, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v252 )
                goto LABEL_438;
              CommonUI__OpenRetryBootDialog(v252, v253, v255, v256, 1, 0LL);
            }
            else
            {
              if ( errorLocalizeCode_5__7 )
                v257 = v9->fields._errorLocalizeCode_5__7;
              else
                v257 = (System_String_o *)StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v258 = LocalizationManager__Get(v257, 0LL);
              v259 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v259, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v252 )
                goto LABEL_438;
              CommonUI__OpenRetryDialog(v252, v253, v258, v259, 1, 0LL);
            }
LABEL_201:
            if ( _4__this->fields.isErrorDialog )
            {
              v424 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v424;
              sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v424, v2, v3, v4, v5, v6, v7);
              v27 = 4;
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
        if ( !byte_434F41F )
        {
          sub_B70694(&NetworkManager_TypeInfo);
          byte_434F41F = 1;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
        }
        if ( !_4__this )
          goto LABEL_438;
        if ( LOBYTE(this[1].fields._errorCode_5__6[5].fields.m_stringLength) )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v425, v426, v427, v428, v429, v430);
          _4__this->fields.readData = 0LL;
          sub_B70630(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v431,
            v432,
            v433,
            v434,
            v435,
            v436);
          return 0;
        }
        if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
          goto LABEL_348;
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v261, v262, v263, v264, v265, v266);
          _4__this->fields.readData = 0LL;
          sub_B70630(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v267,
            v268,
            v269,
            v270,
            v271,
            v272);
        }
        if ( v9->fields._isCrcError_5__5 )
          break;
LABEL_340:
        v9->fields._errorCode_5__6 = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v359,
          v360,
          v361,
          v362,
          v363,
          v364);
        v9->fields._wait_5__10 = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._wait_5__10, 0LL, v365, v366, v367, v368, v369, v370);
LABEL_341:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
        {
          if ( v9->fields._isEncrypted_5__2 )
          {
LABEL_362:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_438;
            LoadRequest = (System_Int32_array **)AssetData__GetLoadRequest((AssetData_o *)this, 0LL);
            _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)LoadRequest;
            v398 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
            sub_B70630(v398, LoadRequest, v399, v400, v401, v402, v403, v404);
            this = (AssetLoader__LoadDataCR_d__29_o *)v398->klass;
            if ( !v398->klass )
              goto LABEL_438;
            v405 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
            v9->fields.__2__current = (Il2CppObject *)v405;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B70630(p__2__current, v405, v407, v408, v409, v410, v411, v412);
            v413 = 11;
          }
          else
          {
            v467 = AssetLoader___c_TypeInfo;
            if ( (BYTE3(AssetLoader___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v467 = AssetLoader___c_TypeInfo;
            }
            v468 = v467->static_fields;
            _9__29_0 = v468->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( (BYTE3(v467->vtable._0_Equals.methodPtr) & 4) != 0 && !v467->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v467);
                v468 = AssetLoader___c_TypeInfo->static_fields;
              }
              v470 = (Il2CppObject *)v468->__9;
              _9__29_0 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__29_0,
                v470,
                Method_AssetLoader___c__LoadDataCR_b__29_0__,
                (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
              v471 = AssetLoader___c_TypeInfo->static_fields;
              v471->__9__29_0 = _9__29_0;
              sub_B70630(
                (BattleServantConfConponent_o *)&v471->__9__29_0,
                (System_Int32_array **)_9__29_0,
                v472,
                v473,
                v474,
                v475,
                v476,
                v477);
            }
            v478 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v478, _9__29_0, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v478;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B70630(p__2__current, (System_Int32_array **)v478, v479, v480, v481, v482, v483, v484);
            v413 = 10;
          }
          goto LABEL_413;
        }
LABEL_343:
        if ( _4__this->fields.isDownload )
        {
          _2__current = this->fields.__2__current;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(
                                                      (System_String_o *)_2__current,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_348:
        v372 = _4__this->fields.data;
        if ( !v372 )
          goto LABEL_438;
        if ( v372->fields.entryCount >= 1 )
        {
          v373 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v9->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v374 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1),
                  *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v374)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v374 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v373;
              if ( !*v373 )
                goto LABEL_438;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_438;
              v375 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v375
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v375 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_438;
              }
            }
            v376 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v377 = (System_Int32_array **)UnityEngine_AssetBundle__LoadFromMemoryAsync(v376, 0LL);
            v9->fields._req_5__13 = (struct UnityEngine_AssetBundleCreateRequest_o *)v377;
            sub_B70630((BattleServantConfConponent_o *)&v9->fields._req_5__13, v377, v378, v379, v380, v381, v382, v383);
            this = *v373;
            if ( !*v373 )
              goto LABEL_438;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v373 = 0LL;
            sub_B70630(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              0LL,
              v384,
              v385,
              v386,
              v387,
              v388,
              v389);
            req_5__13 = (System_Int32_array **)v9->fields._req_5__13;
            v9->fields.__2__current = (Il2CppObject *)req_5__13;
            sub_B70630(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              req_5__13,
              v391,
              v392,
              v393,
              v394,
              v395,
              v396);
            v27 = 12;
            goto LABEL_411;
          }
          if ( !this )
            goto LABEL_438;
          v485 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v372, v485, 0LL);
        }
LABEL_37:
        v31 = _4__this->fields.loader;
        if ( v31 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v31, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v32, v33, v34, v35, v36, v37);
        }
        _4__this->fields.readData = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, 0LL);
        return 0;
      }
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      ConfigFileAddress = (System_Int32_array **)AssetManager__get_ConfigFileAddress(0LL);
      v9->fields._url_5__11 = (struct System_String_o *)ConfigFileAddress;
      p_url_5__11 = &v9->fields._url_5__11;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->fields._url_5__11,
        ConfigFileAddress,
        v274,
        v275,
        v276,
        v277,
        v278,
        v279);
LABEL_221:
      v280 = *p_url_5__11;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v280, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_438;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v288 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_B70630(
        (BattleServantConfConponent_o *)&_4__this->fields.loader,
        (System_Int32_array **)this,
        v282,
        v283,
        v284,
        v285,
        v286,
        v287);
      v289 = UnityEngine_Time__get_unscaledTime(0LL);
      v290 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v290 = ManagerConfig_TypeInfo;
      }
      v291 = v290->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      v9->fields._requestTime_5__8 = v289 + v291;
      this = *v288;
      if ( !*v288 )
        goto LABEL_438;
      v292 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                      0LL);
      v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v292;
      v29 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
        v292,
        v293,
        v294,
        v295,
        v296,
        v297,
        v298);
LABEL_230:
      this = *v29;
      if ( !*v29 )
        goto LABEL_438;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = *v29;
        if ( !*v29 )
          goto LABEL_438;
        v305 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v306 = v9->fields._loadProgress_5__9;
        v307 = v305;
        v308 = UnityEngine_Time__get_unscaledTime(0LL);
        v136 = v307 == v306;
        v309 = v308;
        if ( !v136 )
        {
          v489 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v489 = ManagerConfig_TypeInfo;
          }
          v490 = v489->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
          v9->fields._requestTime_5__8 = v309 + v490->TIMEOUT;
          if ( !this )
            goto LABEL_438;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_437;
        }
        if ( v308 < v9->fields._requestTime_5__8 )
        {
LABEL_437:
          v491 = (System_Int32_array **)v9->fields._wait_5__10;
          v9->fields.__2__current = (Il2CppObject *)v491;
          sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v491, v299, v300, v301, v302, v303, v304);
          v27 = 5;
          goto LABEL_411;
        }
      }
      v9->fields._errorCode_5__6 = 0LL;
      v310 = &v9->fields._errorCode_5__6;
      sub_B70630((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v299, v300, v301, v302, v303, v304);
      if ( !_4__this )
        goto LABEL_438;
      v311 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v311 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v311, 0LL);
        v356 = &StringLiteral_2147/*"AssetStorageList download time over"*/;
        goto LABEL_377;
      }
      v312 = UnityEngine_Networking_UnityWebRequest__get_error(*v311, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v312, 0LL);
      if ( !*v311 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v439 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__get_error(*v311, 0LL);
        *v310 = (System_String_o *)v439;
        goto LABEL_378;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v311, 0LL);
      if ( !this )
        goto LABEL_438;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v314 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v314, 0LL) )
      {
        v356 = &StringLiteral_2145/*"AssetStorageList download error"*/;
        goto LABEL_377;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_438;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v314 )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim(v314, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_438;
      v321 = (System_String_o *)this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_24082/*"~"*/, 0LL) )
        goto LABEL_332;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v322 = (int)this->fields.__2__current;
      if ( !v322 )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = 13;
      if ( v322 == 1 )
        goto LABEL_295;
      WORD1(this->fields.__4__this) = 10;
      v323 = System_String__IndexOfAny(v321, (System_Char_array *)this, 0LL);
      if ( v323 < 2 )
        goto LABEL_332;
      v324 = v323;
      v325 = System_String__Substring_44821904(v321, 1, v323 - 1, 0LL);
      v326 = System_String__Substring(v321, v324 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_438;
      v327 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v326,
                                    this->klass[1]._1.nestedTypes);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v328 = Crc32__Compute(v327, 0LL);
      if ( System_UInt32__Parse(v325, 0LL) != v328 )
      {
LABEL_332:
        v356 = &StringLiteral_2144/*"AssetStorageList download data error"*/;
LABEL_377:
        v439 = (System_Int32_array **)*v356;
        *v310 = (System_String_o *)*v356;
LABEL_378:
        sub_B70630(
          (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
          v439,
          v315,
          v316,
          v317,
          v318,
          v319,
          v320);
        if ( *v311 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v311, 0LL);
          *v311 = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v440, v441, v442, v443, v444, v445);
        }
        if ( *v310 )
        {
          v446 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v446 = ManagerConfig_TypeInfo;
          }
          if ( v446->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v447 = _4__this->fields.data;
            if ( !v447 )
              goto LABEL_438;
            v448 = (CommonUI_o *)this;
            v449 = System_String__Concat_44761580(
                     (System_String_o *)StringLiteral_2134/*"AssetName : "*/,
                     v447->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     *v310,
                     0LL);
            v450 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v450, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v448 )
              goto LABEL_438;
            effectDistancea.fields.value = 0LL;
            *(_DWORD *)&effectDistancea.fields.has_value = 0;
            CommonUI__OpenWarningDialog(
              v448,
              (System_String_o *)StringLiteral_15966/*"[FFFF80]Download error for debug"*/,
              v449,
              v450,
              1,
              0,
              -1.0,
              1,
              effectDistancea,
              0LL);
LABEL_388:
            if ( _4__this->fields.isErrorDialog )
            {
              v451 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v451;
              sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v451, v2, v3, v4, v5, v6, v7);
              v27 = 6;
              goto LABEL_411;
            }
          }
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_434F41E )
          {
            sub_B70694(&ManagementManager_TypeInfo);
            byte_434F41E = 1;
          }
          v452 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v452 = ManagementManager_TypeInfo;
          }
          v453 = v452->static_fields->isDuringStartup;
          v454 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v453 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v455 = LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v456 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v456, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v454 )
              goto LABEL_438;
            CommonUI__OpenRetryBootDialog(v454, (System_String_o *)StringLiteral_1/*""*/, v455, v456, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v457 = LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v458 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v458, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v454 )
              goto LABEL_438;
            CommonUI__OpenRetryDialog(v454, (System_String_o *)StringLiteral_1/*""*/, v457, v458, 0, 0LL);
          }
LABEL_409:
          if ( _4__this->fields.isErrorDialog )
          {
            v459 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)v459;
            sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v459, v2, v3, v4, v5, v6, v7);
            v27 = 7;
            goto LABEL_411;
          }
        }
        v460 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v460, 1.0, 0LL);
        v9->fields.__2__current = (Il2CppObject *)v460;
        p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
        sub_B70630(p__2__current, (System_Int32_array **)v460, v461, v462, v463, v464, v465, v466);
        v413 = 8;
        goto LABEL_413;
      }
      v495 = v9;
      if ( !v326 )
      {
LABEL_312:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_434F41E )
        {
          sub_B70694(&ManagementManager_TypeInfo);
          byte_434F41E = 1;
        }
        v349 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v349 = ManagementManager_TypeInfo;
        }
        v350 = v349->static_fields->isDuringStartup;
        v351 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v350 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v352 = &StringLiteral_9386/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v352 = &StringLiteral_9385/*"NETWORK_ERROR_ASSET_UPDATE"*/;
        }
        v353 = LocalizationManager__Get((System_String_o *)*v352, 0LL);
        v354 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v354, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
        if ( !v351 )
          goto LABEL_438;
        CommonUI__OpenErrorDialog(v351, (System_String_o *)StringLiteral_1/*""*/, v353, v354, 0, 0LL);
        return 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v329 = (int)this->fields.__2__current;
      if ( !v329 || (LOWORD(this->fields.__4__this) = 13, v329 == 1) )
      {
LABEL_295:
        v342 = sub_B70798(this);
        sub_B70738(v342, 0LL);
      }
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44818952(v326, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_438;
      v330 = this->fields.__2__current;
      v331 = this;
      if ( (int)v330 < 1 )
        goto LABEL_312;
      v332 = 0;
      while ( 1 )
      {
        v333 = (System_String_o *)*((_QWORD *)&v331->fields.__4__this + (int)v332);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_438;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_295;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v333 )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split(v333, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_438;
        v334 = this->fields.__2__current;
        v335 = this;
        if ( (int)v334 < 1 )
          break;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1565/*"@"*/,
                                                    0LL);
        if ( !LODWORD(v335->fields.__2__current) )
          goto LABEL_295;
        v336 = (char)this;
        this = (AssetLoader__LoadDataCR_d__29_o *)v335->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        if ( (v336 & 1) != 0 )
        {
          v337 = System_String__Substring((System_String_o *)this, 1, 0LL);
          p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
          if ( SLODWORD(v335->fields.__2__current) > 1 )
            p_resourceNames = (System_String_o **)&v335->fields.resourceNames;
          v339 = *p_resourceNames;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v337, v339, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_312;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_24082/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v335->fields.__2__current) )
              goto LABEL_295;
            this = (AssetLoader__LoadDataCR_d__29_o *)v335->fields.__4__this;
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v334 = v335->fields.__2__current;
              break;
            }
          }
        }
LABEL_293:
        if ( (int)++v332 >= (int)v330 )
          goto LABEL_312;
        if ( v332 >= LODWORD(v331->fields.__2__current) )
          goto LABEL_295;
      }
      if ( (_DWORD)v334 != 5 )
        goto LABEL_312;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v335->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_438;
      v340 = System_String__Trim_44745500((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v340, 0LL);
      if ( LODWORD(v335->fields.__2__current) <= 4 )
        goto LABEL_295;
      v341 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v335->fields._errorCode_5__6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_293;
      v343 = _4__this->fields.data;
      if ( !v343 )
        goto LABEL_438;
      if ( v341 != v343->fields.crc )
        goto LABEL_312;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_434F41E )
      {
        sub_B70694(&ManagementManager_TypeInfo);
        byte_434F41E = 1;
      }
      v344 = ManagementManager_TypeInfo;
      v9 = v495;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v344 = ManagementManager_TypeInfo;
      }
      v345 = v344->static_fields->isDuringStartup;
      v346 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v345 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v347 = LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v348 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v348, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( v346 )
        {
          CommonUI__OpenRetryBootDialog(v346, (System_String_o *)StringLiteral_1/*""*/, v347, v348, 1, 0LL);
          goto LABEL_338;
        }
        goto LABEL_438;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v357 = LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v358 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v358, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
      if ( !v346 )
        goto LABEL_438;
      CommonUI__OpenRetryDialog(v346, (System_String_o *)StringLiteral_1/*""*/, v357, v358, 1, 0LL);
LABEL_338:
      if ( !_4__this->fields.isErrorDialog )
      {
        v9->fields._url_5__11 = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v2, v3, v4, v5, v6, v7);
        goto LABEL_340;
      }
      v437 = (System_Int32_array **)v9->fields._wait_5__10;
      v9->fields.__2__current = (Il2CppObject *)v437;
      sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v437, v2, v3, v4, v5, v6, v7);
      v27 = 9;
LABEL_411:
      v9->fields.__1__state = v27;
      return 1;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v18 = v9->fields._req_5__13;
      v9->fields.__1__state = -1;
      if ( !v18 )
        goto LABEL_36;
      if ( !_4__this )
        goto LABEL_438;
      v19 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(v18, 0LL);
      if ( !v19 )
        goto LABEL_438;
      v20 = (System_Int32_array **)AssetData__SetAssetBundleData(
                                     v19,
                                     (UnityEngine_AssetBundle_o *)this,
                                     v9->fields.resourceNames,
                                     0LL);
      v9->fields.__2__current = (Il2CppObject *)v20;
      sub_B70630((BattleServantConfConponent_o *)&v9->fields.__2__current, v20, v21, v22, v23, v24, v25, v26);
      v27 = 13;
      goto LABEL_411;
    case 0xD:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v9->fields.__1__state = -1;
LABEL_36:
      this->klass = 0LL;
      sub_B70630((BattleServantConfConponent_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43509B7 & 1) == 0 )
  {
    sub_B70694(&AssetLoader___c_TypeInfo);
    byte_43509B7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssetLoader___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_43509B8 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_43509B8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  return BYTE4(Instance[1].monitor) == 0;
}