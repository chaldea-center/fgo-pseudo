void AssetLoader___ctor(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AssetLoader__AddCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    AssetLoader__add_endCallback2(this, callbackFunc, method);
}


void AssetLoader__AddEntry(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_21FFECC(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x21
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t v63; // w1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  int32_t v77; // w1
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int32_t v84; // w1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t v91; // w1
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  int32_t v98; // w1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  int32_t v105; // w1
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  int32_t v112; // w1
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  int32_t v119; // w1
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int32_t v126; // w1
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  int32_t v133; // w1
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  int32_t v140; // w1
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  int32_t v147; // w1
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  int32_t v154; // w1
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  int32_t v161; // w1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  int32_t v168; // w1
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  int32_t v175; // w1
  System_String_o *v176; // x2
  System_String_o *v177; // x3
  int32_t v178; // w4
  int32_t v179; // w5
  bool v180; // w6
  bool v181; // w7
  int32_t v182; // w1
  System_String_o *v183; // x2
  System_String_o *v184; // x3
  int32_t v185; // w4
  int32_t v186; // w5
  bool v187; // w6
  bool v188; // w7
  int32_t v189; // w1
  System_String_o *v190; // x2
  System_String_o *v191; // x3
  int32_t v192; // w4
  int32_t v193; // w5
  bool v194; // w6
  bool v195; // w7
  int32_t v196; // w1
  System_String_o *v197; // x2
  System_String_o *v198; // x3
  int32_t v199; // w4
  int32_t v200; // w5
  bool v201; // w6
  bool v202; // w7
  int32_t v203; // w1
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  int32_t v210; // w1
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  int32_t v217; // w1
  System_String_o *v218; // x2
  System_String_o *v219; // x3
  int32_t v220; // w4
  int32_t v221; // w5
  bool v222; // w6
  bool v223; // w7
  int32_t v224; // w1
  System_String_o *v225; // x2
  System_String_o *v226; // x3
  int32_t v227; // w4
  int32_t v228; // w5
  bool v229; // w6
  bool v230; // w7
  int32_t v231; // w1
  System_String_o *v232; // x2
  System_String_o *v233; // x3
  int32_t v234; // w4
  int32_t v235; // w5
  bool v236; // w6
  bool v237; // w7
  int32_t v238; // w1
  System_String_o *v239; // x2
  System_String_o *v240; // x3
  int32_t v241; // w4
  int32_t v242; // w5
  bool v243; // w6
  bool v244; // w7
  int32_t v245; // w1
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  int32_t v252; // w1
  System_String_o *v253; // x2
  System_String_o *v254; // x3
  int32_t v255; // w4
  int32_t v256; // w5
  bool v257; // w6
  bool v258; // w7
  int32_t v259; // w1
  System_String_o *v260; // x2
  System_String_o *v261; // x3
  int32_t v262; // w4
  int32_t v263; // w5
  bool v264; // w6
  bool v265; // w7
  int32_t v266; // w1
  __int64 v267; // x2
  unsigned __int64 v268; // x23
  __int64 v269; // x24
  CrashReporter_o *v270; // x19
  __int64 v271; // x1
  __int64 v272; // x2

  if ( (byte_59375E2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_14709/*"The request timed out."*/);
    sub_21FFC50(&StringLiteral_22067/*"java.net.SocketException"*/);
    sub_21FFC50(&StringLiteral_12789/*"SSL CA certificate error"*/);
    sub_21FFC50(&StringLiteral_1490/*"404: Not Found"*/);
    sub_21FFC50(&StringLiteral_14649/*"The network connection was lost."*/);
    sub_21FFC50(&StringLiteral_1484/*"400: Bad Request"*/);
    sub_21FFC50(&StringLiteral_15465/*"Unable to complete SSL connection"*/);
    sub_21FFC50(&StringLiteral_15495/*"Unable to read data"*/);
    sub_21FFC50(&StringLiteral_18990/*"connect failed"*/);
    sub_21FFC50(&StringLiteral_7552/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_21FFC50(&StringLiteral_22069/*"java.net.UnknownHostException"*/);
    sub_21FFC50(&StringLiteral_1498/*"500: Internal Server Error"*/);
    sub_21FFC50(&StringLiteral_1500/*"502:"*/);
    sub_21FFC50(&StringLiteral_11816/*"Request timeout"*/);
    sub_21FFC50(&StringLiteral_4834/*"Connection reset by peer"*/);
    sub_21FFC50(&StringLiteral_5198/*"DLErrorType"*/);
    sub_21FFC50(&StringLiteral_5197/*"DLErrorAsset"*/);
    sub_21FFC50(&StringLiteral_1512/*"504: Gateway Timeout"*/);
    sub_21FFC50(&StringLiteral_15666/*"Unknown Error"*/);
    sub_21FFC50(&StringLiteral_1502/*"503 Auto retry count"*/);
    sub_21FFC50(&StringLiteral_22051/*"java.io.EOFException"*/);
    sub_21FFC50(&StringLiteral_22064/*"java.net.ConnectException"*/);
    sub_21FFC50(&StringLiteral_1488/*"403: Forbidden"*/);
    sub_21FFC50(&StringLiteral_4833/*"Connection refused"*/);
    sub_21FFC50(&StringLiteral_7553/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_21FFC50(&StringLiteral_1486/*"401: Authorization Required"*/);
    sub_21FFC50(&StringLiteral_22052/*"java.io.IOException"*/);
    sub_21FFC50(&StringLiteral_9833/*"No address associated with hostname"*/);
    sub_21FFC50(&StringLiteral_22066/*"java.net.ProtocolException"*/);
    sub_21FFC50(&StringLiteral_2481/*"AssetBundle file download time over"*/);
    sub_21FFC50(&StringLiteral_1491/*"408: Request Time-out"*/);
    sub_21FFC50(&StringLiteral_15108/*"Too many redirects"*/);
    sub_21FFC50(&StringLiteral_13443/*"Software caused connection abort"*/);
    sub_21FFC50(&StringLiteral_2480/*"AssetBundle file check sum error"*/);
    sub_21FFC50(&StringLiteral_22065/*"java.net.NoRouteToHostException"*/);
    sub_21FFC50(&StringLiteral_5429/*"Destination host has an erroneous SSL certificate"*/);
    sub_21FFC50(&StringLiteral_4835/*"Connection timed out"*/);
    sub_21FFC50(&StringLiteral_4394/*"Cannot resolve destination host"*/);
    sub_21FFC50(&StringLiteral_22068/*"java.net.SocketTimeoutException"*/);
    sub_21FFC50(&StringLiteral_2484/*"AssetLoadError"*/);
    byte_59375E2 = 1;
  }
  Instance = sub_21FFD10(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v13 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_57;
  v14 = StringLiteral_9833/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9833/*"No address associated with hostname"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_57;
  v21 = StringLiteral_2481/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_2481/*"AssetBundle file download time over"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v13 + 24) <= 2u )
    goto LABEL_57;
  v28 = StringLiteral_14649/*"The network connection was lost."*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_14649/*"The network connection was lost."*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_57;
  v35 = StringLiteral_4834/*"Connection reset by peer"*/;
  *(_QWORD *)(v13 + 56) = StringLiteral_4834/*"Connection reset by peer"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v13 + 24) <= 4u )
    goto LABEL_57;
  v42 = StringLiteral_13443/*"Software caused connection abort"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_13443/*"Software caused connection abort"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v13 + 24) <= 5u )
    goto LABEL_57;
  v49 = StringLiteral_4835/*"Connection timed out"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_4835/*"Connection timed out"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v13 + 24) <= 6u )
    goto LABEL_57;
  v56 = StringLiteral_4833/*"Connection refused"*/;
  *(_QWORD *)(v13 + 80) = StringLiteral_4833/*"Connection refused"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_57;
  v63 = StringLiteral_14709/*"The request timed out."*/;
  *(_QWORD *)(v13 + 88) = StringLiteral_14709/*"The request timed out."*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 88), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v13 + 24) <= 8u )
    goto LABEL_57;
  v70 = StringLiteral_4394/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v13 + 96) = StringLiteral_4394/*"Cannot resolve destination host"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 96), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v13 + 24) <= 9u )
    goto LABEL_57;
  v77 = StringLiteral_15465/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v13 + 104) = StringLiteral_15465/*"Unable to complete SSL connection"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 104), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v13 + 24) <= 0xAu )
    goto LABEL_57;
  v84 = StringLiteral_15666/*"Unknown Error"*/;
  *(_QWORD *)(v13 + 112) = StringLiteral_15666/*"Unknown Error"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 112), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v13 + 24) <= 0xBu )
    goto LABEL_57;
  v91 = StringLiteral_11816/*"Request timeout"*/;
  *(_QWORD *)(v13 + 120) = StringLiteral_11816/*"Request timeout"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 120), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v13 + 24) <= 0xCu )
    goto LABEL_57;
  v98 = StringLiteral_2480/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v13 + 128) = StringLiteral_2480/*"AssetBundle file check sum error"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 128), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v13 + 24) <= 0xDu )
    goto LABEL_57;
  v105 = StringLiteral_12789/*"SSL CA certificate error"*/;
  *(_QWORD *)(v13 + 136) = StringLiteral_12789/*"SSL CA certificate error"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 136), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v13 + 24) <= 0xEu )
    goto LABEL_57;
  v112 = StringLiteral_7552/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v13 + 144) = StringLiteral_7552/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 144), v112, v106, v107, v108, v109, v110, v111);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFF0) == 0 )
    goto LABEL_57;
  v119 = StringLiteral_7553/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v13 + 152) = StringLiteral_7553/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 152), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v13 + 24) <= 0x10u )
    goto LABEL_57;
  v126 = StringLiteral_5429/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v13 + 160) = StringLiteral_5429/*"Destination host has an erroneous SSL certificate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 160), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v13 + 24) <= 0x11u )
    goto LABEL_57;
  v133 = StringLiteral_15108/*"Too many redirects"*/;
  *(_QWORD *)(v13 + 168) = StringLiteral_15108/*"Too many redirects"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 168), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v13 + 24) <= 0x12u )
    goto LABEL_57;
  v140 = StringLiteral_22051/*"java.io.EOFException"*/;
  *(_QWORD *)(v13 + 176) = StringLiteral_22051/*"java.io.EOFException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 176), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v13 + 24) <= 0x13u )
    goto LABEL_57;
  v147 = StringLiteral_22067/*"java.net.SocketException"*/;
  *(_QWORD *)(v13 + 184) = StringLiteral_22067/*"java.net.SocketException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 184), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v13 + 24) <= 0x14u )
    goto LABEL_57;
  v154 = StringLiteral_22068/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v13 + 192) = StringLiteral_22068/*"java.net.SocketTimeoutException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 192), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v13 + 24) <= 0x15u )
    goto LABEL_57;
  v161 = StringLiteral_22065/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v13 + 200) = StringLiteral_22065/*"java.net.NoRouteToHostException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 200), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v13 + 24) <= 0x16u )
    goto LABEL_57;
  v168 = StringLiteral_22052/*"java.io.IOException"*/;
  *(_QWORD *)(v13 + 208) = StringLiteral_22052/*"java.io.IOException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 208), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v13 + 24) <= 0x17u )
    goto LABEL_57;
  v175 = StringLiteral_22064/*"java.net.ConnectException"*/;
  *(_QWORD *)(v13 + 216) = StringLiteral_22064/*"java.net.ConnectException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 216), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v13 + 24) <= 0x18u )
    goto LABEL_57;
  v182 = StringLiteral_18990/*"connect failed"*/;
  *(_QWORD *)(v13 + 224) = StringLiteral_18990/*"connect failed"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 224), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v13 + 24) <= 0x19u )
    goto LABEL_57;
  v189 = StringLiteral_22066/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v13 + 232) = StringLiteral_22066/*"java.net.ProtocolException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 232), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Au )
    goto LABEL_57;
  v196 = StringLiteral_22069/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v13 + 240) = StringLiteral_22069/*"java.net.UnknownHostException"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 240), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Bu )
    goto LABEL_57;
  v203 = StringLiteral_1484/*"400: Bad Request"*/;
  *(_QWORD *)(v13 + 248) = StringLiteral_1484/*"400: Bad Request"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 248), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Cu )
    goto LABEL_57;
  v210 = StringLiteral_1486/*"401: Authorization Required"*/;
  *(_QWORD *)(v13 + 256) = StringLiteral_1486/*"401: Authorization Required"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 256), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Du )
    goto LABEL_57;
  v217 = StringLiteral_1488/*"403: Forbidden"*/;
  *(_QWORD *)(v13 + 264) = StringLiteral_1488/*"403: Forbidden"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 264), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Eu )
    goto LABEL_57;
  v224 = StringLiteral_1490/*"404: Not Found"*/;
  *(_QWORD *)(v13 + 272) = StringLiteral_1490/*"404: Not Found"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 272), v224, v218, v219, v220, v221, v222, v223);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFE0) == 0 )
    goto LABEL_57;
  v231 = StringLiteral_1491/*"408: Request Time-out"*/;
  *(_QWORD *)(v13 + 280) = StringLiteral_1491/*"408: Request Time-out"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 280), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v13 + 24) <= 0x20u )
    goto LABEL_57;
  v238 = StringLiteral_1498/*"500: Internal Server Error"*/;
  *(_QWORD *)(v13 + 288) = StringLiteral_1498/*"500: Internal Server Error"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 288), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v13 + 24) <= 0x21u )
    goto LABEL_57;
  v245 = StringLiteral_1500/*"502:"*/;
  *(_QWORD *)(v13 + 296) = StringLiteral_1500/*"502:"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 296), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v13 + 24) <= 0x22u
    || (v252 = StringLiteral_1502/*"503 Auto retry count"*/,
        *(_QWORD *)(v13 + 304) = StringLiteral_1502/*"503 Auto retry count"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 304), v252, v246, v247, v248, v249, v250, v251),
        *(_DWORD *)(v13 + 24) <= 0x23u)
    || (v259 = StringLiteral_1512/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v13 + 312) = StringLiteral_1512/*"504: Gateway Timeout"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 312), v259, v253, v254, v255, v256, v257, v258),
        *(_DWORD *)(v13 + 24) <= 0x24u) )
  {
LABEL_57:
    sub_21FFED4(Instance);
  }
  v266 = StringLiteral_15495/*"Unable to read data"*/;
  *(_QWORD *)(v13 + 320) = StringLiteral_15495/*"Unable to read data"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 320), v266, v260, v261, v262, v263, v264, v265);
  if ( (int)*(_QWORD *)(v13 + 24) < 1 )
  {
LABEL_47:
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v6, v267);
    goto LABEL_56;
  }
  v268 = 0;
  v269 = (unsigned int)*(_QWORD *)(v13 + 24);
  while ( 1 )
  {
    if ( v268 >= *(unsigned int *)(v13 + 24) )
      goto LABEL_57;
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v13 + 32 + 8 * v268), 0);
    if ( (Instance & 1) != 0 )
      break;
    if ( v269 == ++v268 )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v270 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v6), !v270) )
  {
LABEL_58:
    sub_21FFECC(Instance, v6);
  }
  CrashReporter__AddCustomKey(v270, (System_String_o *)StringLiteral_5197/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v268 >= *(_DWORD *)(v13 + 24) )
    goto LABEL_57;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5198/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v268),
    0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v271, v272);
  errorCode = (System_String_o *)StringLiteral_2484/*"AssetLoadError"*/;
LABEL_56:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_59375DF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59375DF = 1;
  }
  endCallback = this->fields.endCallback;
  this->fields.isEndLoad = 1;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, AssetLoader_o *, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      this,
      endCallback->fields.method);
  endCallback2 = this->fields.endCallback2;
  if ( endCallback2 )
    ((void (__fastcall *)(intptr_t, struct AssetData_o *, intptr_t))endCallback2->fields.invoke_impl)(
      endCallback2->fields.method_code,
      this->fields.data,
      endCallback2->fields.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void AssetLoader__EndRetryDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    AssetLoader__Reboot(this, (const MethodInfo *)isDecide);
}


void AssetLoader__EndWarningDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void AssetLoader__Init(AssetLoader_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.data = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  System_String_o *v4; // x0

  data = this->fields.data;
  if ( !data )
    return 0;
  v4 = data->fields.name;
  if ( !v4 )
    sub_21FFECC(0, name);
  return System_String__Equals_75473208(v4, name, 0);
}


bool AssetLoader__IsSame_47446612(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_47438384(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59375DE & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_59375DE = 1;
  }
  v5 = sub_21FFEBC(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)resourceNames, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *readData; // x20
  struct System_Byte_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59375E0 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    byte_59375E0 = 1;
  }
  readData = this->fields.readData;
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, method, v2);
  v5 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._decData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  ManagementManager_c *v18; // x0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1

  if ( (byte_59375E1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_59375E1 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loader, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.readData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v16, v17);
  if ( !byte_5937656 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937656 = 1;
  }
  v18 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v16, v17);
    v18 = ManagementManager_TypeInfo;
  }
  if ( v18->static_fields->isDuringStartup )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v16, v17);
    UnityEngine_Application__Quit_82963804(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v20);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void AssetLoader__StartLoad(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  bool v15; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callbackFunc,
    (System_String_o *)resourceNames,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v14 = (__int64)*(p_endCallback - 1);
  if ( !v14 )
    sub_21FFECC(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
}


void AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v10; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0) )
  {
    if ( !*p_threadDecrypt )
      sub_21FFECC(0, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_threadDecrypt, 0, v2, v3, v4, v5, v6, v7);
}


void AssetLoader__add_endCallback(AssetLoader_o *this, AssetLoader_LoadEndHandler_o *value, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetLoader_o *v13; // x0
  AssetLoader_LoadEndHandler_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59375DA & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_59375DA = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_endCallback, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AssetLoader_LoadEndHandler_TypeInfo, v9, v10);
  AssetLoader__remove_endCallback(v13, v14, v15);
}


void AssetLoader__add_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetLoader_o *v13; // x0
  AssetLoader_LoadEndDataHandler_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59375DC & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_59375DC = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_endCallback2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
  AssetLoader__remove_endCallback2(v13, v14, v15);
}


bool AssetLoader__get_IsRequestDownload(AssetLoader_o *this, const MethodInfo *method)
{
  return this->fields.isRequestDownload;
}


int32_t AssetLoader__get_LoadSize(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  float downloadProgress; // s0
  struct AssetData_o *v5; // x8
  float v6; // s0
  struct AssetData_o *data; // x8

  if ( !this->fields.isDownload )
  {
    data = this->fields.data;
    if ( data )
    {
      LODWORD(loader) = data->fields.size;
      return (int)loader;
    }
    goto LABEL_10;
  }
  loader = this->fields.loader;
  if ( !loader )
    return (int)loader;
  downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(loader, 0);
  v5 = this->fields.data;
  if ( !v5 )
LABEL_10:
    sub_21FFECC(this, method);
  v6 = downloadProgress * (float)v5->fields.size;
  if ( v6 == INFINITY )
    LODWORD(loader) = 0x80000000;
  else
    LODWORD(loader) = (int)v6;
  return (int)loader;
}


System_String_o *AssetLoader__get_Name(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_21FFECC(this, method);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_21FFECC(this, method);
  return data->fields.size;
}


void AssetLoader__remove_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetLoader_o *v13; // x0
  AssetLoader_LoadEndDataHandler_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59375DB & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_59375DB = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_endCallback, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AssetLoader_LoadEndHandler_TypeInfo, v9, v10);
  AssetLoader__add_endCallback2(v13, v14, v15);
}


void AssetLoader__remove_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetLoader_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59375DD & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_59375DD = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_endCallback2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
  AssetLoader__get_IsRequestDownload(v13, v14);
}


void AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF9740;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_21FFD20(method);
        v16 = sub_22002A4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1FF9838;
          else
            v13 = sub_1FF97FC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1FF9778;
        }
        else
        {
          v13 = sub_1FF9750;
        }
      }
      else
      {
        v13 = sub_1FF9724;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1FF96DC;
}


System_IAsyncResult_o *AssetLoader_LoadEndDataHandler__BeginInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    data,
    this->fields.method);
}


void AssetLoader_LoadEndHandler___ctor(
        AssetLoader_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF9558;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_21FFD20(method);
        v16 = sub_22002A4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1FF9650;
          else
            v13 = sub_1FF9614;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1FF9590;
        }
        else
        {
          v13 = sub_1FF9568;
        }
      }
      else
      {
        v13 = sub_1FF953C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)&loc_1FF94F4;
}


System_IAsyncResult_o *AssetLoader_LoadEndHandler__BeginInvoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetLoader_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = loader;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, AssetLoader_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    loader,
    this->fields.method);
}


void AssetLoader__LoadDataCR_d__29___ctor(
        AssetLoader__LoadDataCR_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetLoader__LoadDataCR_d__29__MoveNext(AssetLoader__LoadDataCR_d__29_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetLoader__LoadDataCR_d__29_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetLoader_o *_4__this; // x20
  bool v11; // w8
  AssetLoader__LoadDataCR_d__29_o **p_loader; // x21
  System_String_o *error; // x0
  bool IsNullOrEmpty; // w8
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 naturalAligment; // x10
  System_Byte_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  System_Byte_array *readData; // x22
  uint32_t klass; // w8
  AssetData_o *v28; // x20
  const MethodInfo *v29; // x3
  System_Collections_IEnumerator_o *v30; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int v38; // w8
  UnityEngine_Networking_UnityWebRequest_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct AssetData_o *data; // x8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x1
  __int64 v76; // x2
  float unscaledTime; // s0
  ManagerConfig_c *v78; // x0
  float v79; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_c *v81; // x0
  UnityEngine_WaitForEndOfFrame_o *v82; // x23
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  __int64 v89; // x1
  __int64 v90; // x2
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int64_t v99; // x23
  int32_t v100; // w1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  MissionNaviTransitionBoardItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v108; // w1
  System_String_o *Url; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  System_String_o *url_5__12; // x21
  struct AssetData_o *v117; // x8
  AssetLoader__LoadDataCR_d__29_o *v118; // x22
  bool v119; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v128; // x0
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__13; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v138; // s8
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  float v145; // s0
  bool v146; // zf
  float v147; // s8
  UnityEngine_Networking_DownloadHandler_o *v148; // x0
  DownloadHandlerFileWithCrcCheck_o *v149; // x22
  __int64 v150; // x10
  System_String_o *v151; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  uint32_t crc; // w8
  struct AssetData_o *v159; // x9
  int32_t newVersion; // w8
  System_String_o *v161; // x0
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  struct System_Exception_o *error_k__BackingField; // x0
  System_Exception_c *v169; // x8
  __int64 v170; // x10
  struct System_Exception_o *v171; // x8
  AssetLoader__LoadDataCR_d__29_o *v172; // x22
  System_String_o *v173; // x0
  System_String_o *v174; // x0
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  int32_t v181; // w1
  MissionNaviTransitionBoardItem_o *p_errorCode_5__6; // x0
  System_String_o *v183; // x22
  System_String_o *v184; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v193; // x23
  Il2CppObject *v194; // x23
  AssetLoader__LoadDataCR_d__29_o *v195; // x23
  int32_t autoRetryCount_5__3; // w8
  System_String_o *v197; // x24
  System_String_o *v198; // x0
  System_String_o *v199; // x0
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  AssetLoader__LoadDataCR_d__29_o *v206; // x22
  int32_t v207; // w1
  System_String_o *v208; // x2
  System_String_o *v209; // x3
  int32_t v210; // w4
  int32_t v211; // w5
  bool v212; // w6
  bool v213; // w7
  struct System_String_o *v214; // x1
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  int32_t v221; // w1
  struct AssetData_o *v222; // x8
  System_String_o *v223; // x2
  System_String_o *v224; // x3
  int32_t v225; // w4
  int32_t v226; // w5
  bool v227; // w6
  bool v228; // w7
  System_String_o *v229; // x2
  System_String_o *v230; // x3
  int32_t v231; // w4
  int32_t v232; // w5
  bool v233; // w6
  bool v234; // w7
  int32_t v235; // w1
  System_String_o *v236; // x2
  System_String_o *v237; // x3
  int32_t v238; // w4
  int32_t v239; // w5
  bool v240; // w6
  bool v241; // w7
  System_String_o *v242; // x2
  System_String_o *v243; // x3
  int32_t v244; // w4
  int32_t v245; // w5
  bool v246; // w6
  bool v247; // w7
  int32_t v248; // w1
  System_String_o *v249; // x0
  System_String_o *v250; // x2
  System_String_o *v251; // x3
  int32_t v252; // w4
  int32_t v253; // w5
  bool v254; // w6
  bool v255; // w7
  ManagerConfig_c *v256; // x0
  struct AssetData_o *v257; // x8
  CommonUI_o *v258; // x21
  System_String_o *v259; // x22
  ErrorDialog_ClickDelegate_o *v260; // x23
  ManagementManager_c *v261; // x0
  _BOOL4 isDuringStartup; // w23
  __int64 v263; // x1
  __int64 v264; // x2
  Il2CppObject *Instance; // x22
  struct System_String_o *errorLocalizeCode_5__7; // x10
  System_String_o *v267; // x21
  int v268; // w9
  System_String_o *v269; // x23
  System_String_o *v270; // x23
  ErrorDialog_ClickDelegate_o *v271; // x24
  System_String_o *v272; // x23
  System_String_o *v273; // x23
  ErrorDialog_ClickDelegate_o *v274; // x24
  UnityEngine_Networking_UnityWebRequest_o *v275; // x0
  System_String_o *v276; // x2
  System_String_o *v277; // x3
  int32_t v278; // w4
  int32_t v279; // w5
  bool v280; // w6
  bool v281; // w7
  System_String_o *v282; // x2
  System_String_o *v283; // x3
  int32_t v284; // w4
  int32_t v285; // w5
  bool v286; // w6
  bool v287; // w7
  AssetManager_c *v288; // x0
  System_String_o *ConfigFileAddress; // x0
  System_String_o *v290; // x2
  System_String_o *v291; // x3
  int32_t v292; // w4
  int32_t v293; // w5
  bool v294; // w6
  bool v295; // w7
  System_String_o *v296; // x21
  System_String_o *UrlString; // x0
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  __int64 v304; // x2
  float v305; // s0
  ManagerConfig_c *v306; // x0
  float v307; // s8
  struct ManagerConfig_StaticFields *v308; // x8
  float v309; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v310; // x0
  System_String_o *v311; // x2
  System_String_o *v312; // x3
  int32_t v313; // w4
  int32_t v314; // w5
  bool v315; // w6
  bool v316; // w7
  System_String_o *v317; // x2
  System_String_o *v318; // x3
  int32_t v319; // w4
  int32_t v320; // w5
  bool v321; // w6
  bool v322; // w7
  System_String_o *ResponseHeader; // x21
  ManagerConfig_c *v324; // x0
  uint64_t freeSize_5__11; // x21
  float v326; // s0
  float v327; // s9
  float v328; // s8
  float v329; // s0
  float v330; // s8
  System_String_o **v331; // x21
  System_String_o *v332; // x2
  System_String_o *v333; // x3
  int32_t v334; // w4
  int32_t v335; // w5
  bool v336; // w6
  bool v337; // w7
  bool isDone; // w8
  System_String_o *v339; // x0
  bool v340; // w8
  __int64 v341; // x1
  __int64 v342; // x2
  System_String_o *text; // x22
  System_String_o *v344; // x22
  System_String_o *v345; // x2
  System_String_o *v346; // x3
  int32_t v347; // w4
  int32_t v348; // w5
  bool v349; // w6
  bool v350; // w7
  AssetLoader__LoadDataCR_d__29_o *v351; // x22
  int v352; // w8
  int32_t v353; // w0
  int32_t v354; // w24
  System_String_o *v355; // x23
  System_String_o *v356; // x22
  __int64 v357; // x1
  __int64 v358; // x2
  System_Byte_array *v359; // x24
  uint32_t v360; // w24
  int v361; // w8
  __int64 _2__current_low; // x27
  AssetLoader__LoadDataCR_d__29_o *v363; // x21
  unsigned __int64 v364; // x25
  System_String_o *v365; // x22
  Il2CppObject *v366; // x8
  AssetLoader__LoadDataCR_d__29_o *v367; // x22
  __int64 v368; // x1
  const MethodInfo *v369; // x2
  System_String_o *v370; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v372; // x22
  System_String_o *v373; // x0
  const MethodInfo *v374; // x2
  int v375; // w23
  struct AssetData_o *v376; // x8
  ManagementManager_c *v377; // x0
  _BOOL4 v378; // w22
  __int64 v379; // x1
  __int64 v380; // x2
  Il2CppObject *v381; // x21
  int v382; // w9
  System_String_o *v383; // x22
  ErrorDialog_ClickDelegate_o *v384; // x23
  ManagementManager_c *v385; // x0
  _BOOL4 v386; // w21
  __int64 v387; // x1
  __int64 v388; // x2
  Il2CppObject *v389; // x19
  int v390; // w9
  __int64 *v391; // x8
  System_String_o *v392; // x21
  ErrorDialog_ClickDelegate_o *v393; // x22
  bool v394; // w0
  __int64 *v395; // x8
  System_String_o *v396; // x22
  ErrorDialog_ClickDelegate_o *v397; // x23
  System_String_o *v398; // x2
  System_String_o *v399; // x3
  int32_t v400; // w4
  int32_t v401; // w5
  bool v402; // w6
  bool v403; // w7
  System_String_o *v404; // x2
  System_String_o *v405; // x3
  int32_t v406; // w4
  int32_t v407; // w5
  bool v408; // w6
  bool v409; // w7
  Il2CppObject *_2__current; // x21
  AssetData_o *v411; // x22
  AssetLoader__LoadDataCR_d__29_o **v412; // x21
  __int64 v413; // x10
  __int64 v414; // x10
  System_Byte_array *v415; // x0
  UnityEngine_AssetBundleCreateRequest_o *v416; // x0
  System_String_o *v417; // x2
  System_String_o *v418; // x3
  int32_t v419; // w4
  int32_t v420; // w5
  bool v421; // w6
  bool v422; // w7
  System_String_o *v423; // x2
  System_String_o *v424; // x3
  int32_t v425; // w4
  int32_t v426; // w5
  bool v427; // w6
  bool v428; // w7
  Il2CppObject *req_5__16; // x1
  System_String_o *v430; // x2
  System_String_o *v431; // x3
  int32_t v432; // w4
  int32_t v433; // w5
  bool v434; // w6
  bool v435; // w7
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  MissionNaviTransitionBoardItem_o *v437; // x20
  System_String_o *v438; // x2
  System_String_o *v439; // x3
  int32_t v440; // w4
  int32_t v441; // w5
  bool v442; // w6
  bool v443; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v444; // x0
  System_String_o *v445; // x2
  System_String_o *v446; // x3
  int32_t v447; // w4
  int32_t v448; // w5
  bool v449; // w6
  bool v450; // w7
  ManagerConfig_c *v451; // x0
  int v452; // w20
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v454; // x0
  float v455; // s0
  Il2CppObject *v456; // x20
  System_String_o *v457; // x2
  System_String_o *v458; // x3
  int32_t v459; // w4
  int32_t v460; // w5
  bool v461; // w6
  bool v462; // w7
  Il2CppObject *v463; // x1
  Il2CppObject *v464; // x1
  Il2CppObject *v465; // x1
  System_String_o *v466; // x2
  System_String_o *v467; // x3
  int32_t v468; // w4
  int32_t v469; // w5
  bool v470; // w6
  bool v471; // w7
  System_String_o *v472; // x2
  System_String_o *v473; // x3
  int32_t v474; // w4
  int32_t v475; // w5
  bool v476; // w6
  bool v477; // w7
  int32_t v478; // w1
  __int64 v479; // x1
  MissionNaviTransitionBoardItem_o *v480; // x0
  System_String_o *v481; // x0
  UnityEngine_Networking_UnityWebRequest_o *v482; // x0
  System_String_o *v483; // x2
  System_String_o *v484; // x3
  int32_t v485; // w4
  int32_t v486; // w5
  bool v487; // w6
  bool v488; // w7
  ManagerConfig_c *v489; // x0
  struct AssetData_o *v490; // x8
  CommonUI_o *v491; // x22
  System_String_o *v492; // x21
  ErrorDialog_ClickDelegate_o *v493; // x23
  Il2CppObject *v494; // x1
  ManagementManager_c *v495; // x0
  _BOOL4 v496; // w22
  __int64 v497; // x1
  __int64 v498; // x2
  Il2CppObject *v499; // x21
  int v500; // w9
  System_String_o *v501; // x22
  ErrorDialog_ClickDelegate_o *v502; // x23
  System_String_o *v503; // x22
  ErrorDialog_ClickDelegate_o *v504; // x23
  Il2CppObject *v505; // x1
  UnityEngine_WaitForSeconds_o *v506; // x20
  System_String_o *v507; // x2
  System_String_o *v508; // x3
  int32_t v509; // w4
  int32_t v510; // w5
  bool v511; // w6
  bool v512; // w7
  AssetLoader___c_c *v513; // x0
  struct AssetLoader___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v516; // x21
  struct AssetLoader___c_StaticFields *v517; // x0
  System_String_o *v518; // x2
  System_String_o *v519; // x3
  int32_t v520; // w4
  int32_t v521; // w5
  bool v522; // w6
  bool v523; // w7
  UnityEngine_WaitUntil_o *v524; // x21
  System_String_o *v525; // x2
  System_String_o *v526; // x3
  int32_t v527; // w4
  int32_t v528; // w5
  bool v529; // w6
  bool v530; // w7
  UnityEngine_Networking_DownloadHandler_o *v531; // x0
  const MethodInfo *v532; // x2
  ManagerConfig_c *v533; // x0
  struct ManagerConfig_StaticFields *v534; // x8
  Il2CppObject *wait_5__10; // x1
  MissionNaviTransitionBoardItem_o *v536; // x19
  ManagerConfig_c *v537; // x0
  struct ManagerConfig_StaticFields *v538; // x8
  Il2CppObject *v539; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v543; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v8 = this;
  if ( (byte_59375E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetLoader_EndRebootDialog__);
    sub_21FFC50(&Method_AssetLoader_EndRetryDialog__);
    sub_21FFC50(&Method_AssetLoader_EndWarningDialog__);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&CommonServicePluginScript_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_21FFC50(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_21FFC50(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&System_IO_IOException_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_21FFC50(&AssetLoader___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_9614/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_21FFC50(&StringLiteral_7549/*"HTTP"*/);
    sub_21FFC50(&StringLiteral_5471/*"Disk full"*/);
    sub_21FFC50(&StringLiteral_2498/*"AssetStorageList download time over"*/);
    sub_21FFC50(&StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_2485/*"AssetName : "*/);
    sub_21FFC50(&StringLiteral_792/*")\n\n503 Auto retry count "*/);
    sub_21FFC50(&StringLiteral_795/*")\nfile crc ("*/);
    sub_21FFC50(&StringLiteral_1501/*"503"*/);
    sub_21FFC50(&StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16519/*"[FFFF80]Download error for debug"*/);
    sub_21FFC50(&StringLiteral_2495/*"AssetStorageList download data error"*/);
    sub_21FFC50(&StringLiteral_4859/*"Content-Length"*/);
    sub_21FFC50(&StringLiteral_26609/*"~"*/);
    sub_21FFC50(&StringLiteral_12846/*"STATUS"*/);
    sub_21FFC50(&StringLiteral_791/*")\n\n"*/);
    sub_21FFC50(&StringLiteral_9613/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_19916/*"error "*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_2496/*"AssetStorageList download error"*/);
    sub_21FFC50(&StringLiteral_794/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59375E5 = 1;
  }
  _1__state = v8->fields.__1__state;
  v543 = 0;
  value = 0;
  result = 0;
  _4__this = v8->fields.__4__this;
  switch ( _1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_395;
      if ( this->fields.__1__state )
        v11 = 0;
      else
        v11 = AssetData__GetExt((AssetData_o *)this, method) == 0;
      v8->fields._isEncrypted_5__2 = v11;
      v8->fields._autoRetryCount_5__3 = 0;
      goto LABEL_58;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_76;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      goto LABEL_144;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_169;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      goto LABEL_168;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_192;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      goto LABEL_355;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      goto LABEL_372;
    case 8:
      v8->fields._asyncOperater_5__13 = 0;
      v8->fields.__1__state = -1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._asyncOperater_5__13, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_185;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      goto LABEL_302;
    case 10:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_395;
      goto LABEL_325;
    case 11:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_395;
      p_loader = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_395;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
      this = *p_loader;
      if ( !IsNullOrEmpty )
      {
        if ( !this )
          goto LABEL_395;
        UnityEngine_Networking_UnityWebRequest__get_downloadHandler((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_395;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v49, v50, v51, v52, v53, v54);
        data = _4__this->fields.data;
        *(_WORD *)&_4__this->fields.isRequestDownload = 257;
        if ( !data )
          goto LABEL_395;
        data->fields.nowVersion = 0;
        goto LABEL_58;
      }
      if ( !this )
        goto LABEL_395;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0);
      if ( downloadHandler
        && (naturalAligment = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
            downloadHandler->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[naturalAligment - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
      {
        klass = (uint32_t)downloadHandler[1].klass;
      }
      else
      {
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_395;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_395;
        v17 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        _4__this->fields.readData = v17;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData,
          (int32_t)v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        readData = _4__this->fields.readData;
        if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v24, v25);
        klass = Crc32__Compute(readData, 0);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_395;
      if ( klass != this->fields._autoRetryCount_5__3 )
      {
        loader = _4__this->fields.loader;
        *(_WORD *)&_4__this->fields.isRequestDownload = 257;
        LODWORD(this->fields.resourceNames) = 0;
        if ( !loader )
          goto LABEL_395;
        UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
        _4__this->fields.loader = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v57, v58, v59, v60, v61, v62);
        _4__this->fields.readData = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v63, v64, v65, v66, v67, v68);
        goto LABEL_58;
      }
      break;
    case 12:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._req_5__16;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_39;
      if ( !_4__this )
        goto LABEL_395;
      v28 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0);
      if ( !v28 )
        goto LABEL_395;
      v30 = AssetData__SetAssetBundleData(v28, (UnityEngine_AssetBundle_o *)this, v8->fields.resourceNames, v29);
      v8->fields.__2__current = (Il2CppObject *)v30;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v30, v32, v33, v34, v35, v36, v37);
      v38 = 13;
      goto LABEL_375;
    case 13:
      v8->fields.__1__state = -1;
LABEL_39:
      v8->fields._req_5__16 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._req_5__16, 0, v2, v3, v4, v5, v6, v7);
      if ( _4__this )
        goto LABEL_40;
      goto LABEL_395;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( !_4__this->fields.isDownload )
      goto LABEL_311;
    _2__current = this->fields.__2__current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage((System_String_o *)_2__current, method);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_311:
      v411 = _4__this->fields.data;
      if ( !v411 )
        goto LABEL_395;
      if ( v411->fields.entryCount >= 1 )
      {
        v412 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( v8->fields._isEncrypted_5__2 )
        {
          if ( !this )
            goto LABEL_395;
          this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                      0);
          if ( !this
            || (v413 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                this->klass->_2.naturalAligment < (unsigned int)v413)
            || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v413 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
          {
            this = *v412;
            if ( !*v412 )
              goto LABEL_395;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this )
              goto LABEL_395;
            v414 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
            if ( this->klass->_2.naturalAligment < (unsigned int)v414
              || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v414 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
            {
              goto LABEL_395;
            }
          }
          v415 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
          v416 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v415, 0);
          v8->fields._req_5__16 = v416;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v8->fields._req_5__16,
            (int32_t)v416,
            v417,
            v418,
            v419,
            v420,
            v421,
            v422);
          this = *v412;
          if ( !*v412 )
            goto LABEL_395;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          *v412 = 0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
            0,
            v423,
            v424,
            v425,
            v426,
            v427,
            v428);
          req_5__16 = (Il2CppObject *)v8->fields._req_5__16;
          v8->fields.__2__current = req_5__16;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(p__2__current, (int32_t)req_5__16, v430, v431, v432, v433, v434, v435);
          v38 = 12;
          goto LABEL_375;
        }
        if ( !this )
          goto LABEL_395;
        v531 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0);
        AssetData__SetData(v411, v531, v532);
      }
LABEL_40:
      v39 = _4__this->fields.loader;
      if ( v39 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v39, 0);
        _4__this->fields.loader = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v40, v41, v42, v43, v44, v45);
      }
      _4__this->fields.readData = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
      AssetLoader__EndLoad(_4__this, v46);
      return 0;
    }
LABEL_58:
    _4__this->fields.readData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
    if ( _4__this->fields.isDownload )
      break;
LABEL_305:
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_395;
    if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
    {
      if ( v8->fields._isEncrypted_5__2 )
      {
LABEL_325:
        LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
        _4__this->fields.loader = LoadRequest;
        v437 = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
        sub_21FFBF4(v437, (int32_t)LoadRequest, v438, v439, v440, v441, v442, v443);
        this = (AssetLoader__LoadDataCR_d__29_o *)v437->klass;
        if ( !v437->klass )
          goto LABEL_395;
        v444 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0);
        v8->fields.__2__current = (Il2CppObject *)v444;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v444, v445, v446, v447, v448, v449, v450);
        v38 = 11;
      }
      else
      {
        v513 = AssetLoader___c_TypeInfo;
        if ( !*(&AssetLoader___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo, method, v2);
          v513 = AssetLoader___c_TypeInfo;
        }
        static_fields = v513->static_fields;
        _9__29_0 = static_fields->__9__29_0;
        if ( !_9__29_0 )
        {
          if ( !*(&v513->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v513, method, v2);
            static_fields = AssetLoader___c_TypeInfo->static_fields;
          }
          v516 = (Il2CppObject *)static_fields->__9;
          _9__29_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__29_0, v516, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
          v517 = AssetLoader___c_TypeInfo->static_fields;
          v517->__9__29_0 = _9__29_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v517->__9__29_0,
            (int32_t)_9__29_0,
            v518,
            v519,
            v520,
            v521,
            v522,
            v523);
        }
        v524 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v524, _9__29_0, 0);
        v8->fields.__2__current = (Il2CppObject *)v524;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v524, v525, v526, v527, v528, v529, v530);
        v38 = 10;
      }
      goto LABEL_375;
    }
  }
  *(_WORD *)&v8->fields._isAutoRetry_5__4 = 0;
  v8->fields._errorCode_5__6 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6, 0, v2, v3, v4, v5, v6, v7);
  v8->fields._errorLocalizeCode_5__7 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._errorLocalizeCode_5__7, 0, v69, v70, v71, v72, v73, v74);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  v78 = ManagerConfig_TypeInfo;
  v79 = unscaledTime;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v75, v76);
    v78 = ManagerConfig_TypeInfo;
  }
  TIMEOUT = v78->static_fields->TIMEOUT;
  v8->fields._loadProgress_5__9 = 0.0;
  v81 = UnityEngine_WaitForEndOfFrame_TypeInfo;
  v8->fields._requestTime_5__8 = v79 + TIMEOUT;
  v82 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(v81);
  UnityEngine_WaitForEndOfFrame___ctor(v82, 0);
  v8->fields._wait_5__10 = v82;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__10, (int32_t)v82, v83, v84, v85, v86, v87, v88);
  Path = AssetStorageCache__GetPath(0);
  if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v89, v90);
  FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
  v8->fields._freeSize_5__11 = FreeSize;
  if ( FreeSize < 0 )
    goto LABEL_68;
  v99 = FreeSize;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v93);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_395;
  if ( v99 < ManagerConfig_TypeInfo->static_fields->LIMIT_FREE_SIZE + *(int *)&this->fields._isEncrypted_5__2 )
  {
LABEL_68:
    _4__this->fields.isErrorDialog = 1;
    v100 = StringLiteral_5471/*"Disk full"*/;
    v8->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5471/*"Disk full"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6, v100, v93, v94, v95, v96, v97, v98);
    p_errorLocalizeCode_5__7 = (MissionNaviTransitionBoardItem_o *)&v8->fields._errorLocalizeCode_5__7;
    v108 = StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/;
    v8->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/;
    goto LABEL_137;
  }
  Url = AssetData__get_Url((AssetData_o *)this, method);
  v8->fields._url_5__12 = Url;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._url_5__12,
    (int32_t)Url,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_395;
  url_5__12 = v8->fields._url_5__12;
  this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
  v117 = _4__this->fields.data;
  v118 = this;
  if ( v8->fields._isEncrypted_5__2 )
  {
    if ( !v117 )
      goto LABEL_395;
    v119 = v117->fields.entryCount > 0;
  }
  else
  {
    v119 = 0;
    if ( !v117 )
      goto LABEL_395;
  }
  Key = AssetData__get_Key(_4__this->fields.data, method);
  v121 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__12, (System_String_o *)v118, v119, Key, 0);
  _4__this->fields.loader = v121;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
    (int32_t)v121,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_395;
  v128 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v8->fields._asyncOperater_5__13 = v128;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._asyncOperater_5__13,
    (int32_t)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
LABEL_76:
  p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v8->fields._asyncOperater_5__13;
  this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__13;
  if ( !this )
LABEL_395:
    sub_21FFECC(this, method);
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = *p_asyncOperater_5__13;
    if ( !*p_asyncOperater_5__13 )
      goto LABEL_395;
    progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
    loadProgress_5__9 = v8->fields._loadProgress_5__9;
    v138 = progress;
    v145 = UnityEngine_Time__get_unscaledTime(0);
    v146 = v138 == loadProgress_5__9;
    v147 = v145;
    if ( !v146 )
    {
      v533 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v139);
        v533 = ManagerConfig_TypeInfo;
      }
      v534 = v533->static_fields;
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__13;
      v8->fields._requestTime_5__8 = v147 + v534->TIMEOUT;
      if ( !this )
        goto LABEL_395;
      v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
LABEL_389:
      wait_5__10 = (Il2CppObject *)v8->fields._wait_5__10;
      v8->fields.__2__current = wait_5__10;
      v536 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v536, (int32_t)wait_5__10, v139, v140, v141, v142, v143, v144);
      v394 = 1;
      v536[-1].fields._BoardType_k__BackingField = 1;
      return v394;
    }
    if ( v145 < v8->fields._requestTime_5__8 )
      goto LABEL_389;
  }
  if ( !_4__this )
    goto LABEL_395;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_395;
  v148 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
           (UnityEngine_Networking_UnityWebRequest_o *)this,
           0);
  v149 = 0;
  if ( v148 )
  {
    v149 = 0;
    v150 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
    if ( v148->klass->_2.naturalAligment >= (unsigned int)v150 )
    {
      if ( (DownloadHandlerFileWithCrcCheck_c *)v148->klass->_2.typeHierarchy[v150 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo )
        v149 = (DownloadHandlerFileWithCrcCheck_o *)v148;
      else
        v149 = 0;
    }
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_395;
  if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
  {
    v161 = System_String__Concat_75481624(
             (System_String_o *)StringLiteral_681/*"("*/,
             v8->fields._url_5__12,
             (System_String_o *)StringLiteral_794/*")\n\nAssetBundle file download time over"*/,
             0);
    v8->fields._errorCode_5__6 = v161;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6,
      (int32_t)v161,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167);
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_395;
    UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    if ( v149 )
      DownloadHandlerFileWithCrcCheck__CloseStream(v149, 0);
    goto LABEL_136;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_395;
  v151 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v151, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    crc = 0;
    if ( !v149 )
      goto LABEL_96;
    if ( !v149->fields._error_k__BackingField )
    {
      crc = v149->fields.crc;
LABEL_96:
      v159 = _4__this->fields.data;
      HIDWORD(v543) = crc;
      if ( !v159 )
        goto LABEL_395;
      if ( crc == v159->fields.crc )
      {
        newVersion = v159->fields.newVersion;
        _4__this->fields.isDownload = 0;
        v159->fields.nowVersion = newVersion;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(string___TypeInfo, 7);
        if ( !this )
          goto LABEL_395;
        v206 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_396;
        v207 = StringLiteral_681/*"("*/;
        this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_681/*"("*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__4__this,
          v207,
          v200,
          v201,
          v202,
          v203,
          v204,
          v205);
        if ( ((__int64)v206->fields.__2__current & 0xFFFFFFFE) == 0 )
          goto LABEL_396;
        v214 = v8->fields._url_5__12;
        v206->fields.resourceNames = (struct System_String_array *)v214;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields.resourceNames,
          (int32_t)v214,
          v208,
          v209,
          v210,
          v211,
          v212,
          v213);
        if ( LODWORD(v206->fields.__2__current) <= 2 )
          goto LABEL_396;
        v221 = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
        *(_QWORD *)&v206->fields._isEncrypted_5__2 = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields._isEncrypted_5__2,
          v221,
          v215,
          v216,
          v217,
          v218,
          v219,
          v220);
        v222 = _4__this->fields.data;
        if ( !v222 )
          goto LABEL_395;
        LODWORD(v543) = v222->fields.crc;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v543, 0);
        if ( ((__int64)v206->fields.__2__current & 0xFFFFFFFC) == 0 )
          goto LABEL_396;
        *(_QWORD *)&v206->fields._isAutoRetry_5__4 = this;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields._isAutoRetry_5__4,
          (int32_t)this,
          v223,
          v224,
          v225,
          v226,
          v227,
          v228);
        if ( LODWORD(v206->fields.__2__current) <= 4 )
          goto LABEL_396;
        v235 = StringLiteral_795/*")\nfile crc ("*/;
        v206->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_795/*")\nfile crc ("*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields._errorCode_5__6,
          v235,
          v229,
          v230,
          v231,
          v232,
          v233,
          v234);
        this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v543 + 4, 0);
        if ( LODWORD(v206->fields.__2__current) <= 5 )
          goto LABEL_396;
        v206->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields._errorLocalizeCode_5__7,
          (int32_t)this,
          v236,
          v237,
          v238,
          v239,
          v240,
          v241);
        if ( LODWORD(v206->fields.__2__current) <= 6 )
          goto LABEL_396;
        v248 = StringLiteral_789/*")"*/;
        *(_QWORD *)&v206->fields._requestTime_5__8 = StringLiteral_789/*")"*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v206->fields._requestTime_5__8,
          v248,
          v242,
          v243,
          v244,
          v245,
          v246,
          v247);
        v249 = System_String__Concat_75483816((System_String_array *)v206, 0);
        v8->fields._errorCode_5__6 = v249;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6,
          (int32_t)v249,
          v250,
          v251,
          v252,
          v253,
          v254,
          v255);
        v8->fields._isCrcError_5__5 = 1;
      }
      goto LABEL_136;
    }
  }
  else if ( !v149 )
  {
LABEL_110:
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_395;
    v183 = v8->fields._url_5__12;
    v184 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v185 = System_String__Concat_75483552(
             (System_String_o *)StringLiteral_681/*"("*/,
             v183,
             (System_String_o *)StringLiteral_791/*")\n\n"*/,
             v184,
             0);
    v8->fields._errorCode_5__6 = v185;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6,
      (int32_t)v185,
      v186,
      v187,
      v188,
      v189,
      v190,
      v191);
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_395;
    ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                        0);
    if ( !ResponseHeaders )
      goto LABEL_136;
    v193 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
           (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
      || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v193,
            (Il2CppObject *)StringLiteral_12846/*"STATUS"*/,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      goto LABEL_136;
    }
    v194 = value;
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_395;
    method = (const MethodInfo *)this;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_396;
    LOWORD(this->fields.__4__this) = 32;
    if ( !v194 )
      goto LABEL_395;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75492796(
                                                (System_String_o *)v194,
                                                (System_Char_array *)this,
                                                1,
                                                0);
    if ( !this )
      goto LABEL_395;
    v195 = this;
    if ( SLODWORD(this->fields.__2__current) < 2 )
      goto LABEL_136;
    this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_395;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_7549/*"HTTP"*/,
                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_136;
    if ( ((__int64)v195->fields.__2__current & 0xFFFFFFFE) == 0 )
      goto LABEL_396;
    this = (AssetLoader__LoadDataCR_d__29_o *)v195->fields.resourceNames;
    if ( !this )
      goto LABEL_395;
    if ( !System_String__Equals_75473208((System_String_o *)this, (System_String_o *)StringLiteral_1501/*"503"*/, 0) )
      goto LABEL_136;
    autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
    v197 = v8->fields._url_5__12;
    v8->fields._isAutoRetry_5__4 = 1;
    v8->fields._autoRetryCount_5__3 = autoRetryCount_5__3 + 1;
    v198 = System_Int32__ToString((int)v8 + 52, 0);
    v199 = System_String__Concat_75483552(
             (System_String_o *)StringLiteral_681/*"("*/,
             v197,
             (System_String_o *)StringLiteral_792/*")\n\n503 Auto retry count "*/,
             v198,
             0);
    v181 = (int)v199;
    v8->fields._errorCode_5__6 = v199;
    p_errorCode_5__6 = (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6;
    goto LABEL_109;
  }
  DownloadHandlerFileWithCrcCheck__CloseStream(v149, 0);
  error_k__BackingField = v149->fields._error_k__BackingField;
  if ( !error_k__BackingField )
    goto LABEL_110;
  v169 = error_k__BackingField->klass;
  v170 = System_IO_IOException_TypeInfo->_2.naturalAligment;
  if ( error_k__BackingField->klass->_2.naturalAligment >= (unsigned int)v170
    && (System_IO_IOException_c *)v169->_2.typeHierarchy[v170 - 1] == System_IO_IOException_TypeInfo )
  {
    _4__this->fields.isErrorDialog = 1;
    v174 = (System_String_o *)((__int64 (__fastcall *)(struct System_Exception_o *, const MethodInfo *))error_k__BackingField->klass->vtable._5_get_Message.methodPtr)(
                                error_k__BackingField,
                                error_k__BackingField->klass->vtable._5_get_Message.method);
  }
  else
  {
    this = (AssetLoader__LoadDataCR_d__29_o *)((__int64 (*)(void))v169->vtable._3_ToString.methodPtr)();
    v171 = v149->fields._error_k__BackingField;
    if ( !v171 )
      goto LABEL_395;
    v172 = this;
    v173 = (System_String_o *)((System_String_o *(__fastcall *)(struct System_Exception_o *__return_ptr, struct System_Exception_o *, const MethodInfo *))v171->klass->vtable._5_get_Message.methodPtr)(
                                v171,
                                v171,
                                v171->klass->vtable._5_get_Message.method);
    v174 = System_String__Concat_75483552(
             (System_String_o *)StringLiteral_19916/*"error "*/,
             (System_String_o *)v172,
             (System_String_o *)StringLiteral_113/*" "*/,
             v173,
             0);
  }
  v181 = (int)v174;
  v8->fields._errorCode_5__6 = v174;
  p_errorCode_5__6 = (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6;
LABEL_109:
  sub_21FFBF4(p_errorCode_5__6, v181, v175, v176, v177, v178, v179, v180);
LABEL_136:
  v8->fields._url_5__12 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._url_5__12, 0, v152, v153, v154, v155, v156, v157);
  p_errorLocalizeCode_5__7 = (MissionNaviTransitionBoardItem_o *)&v8->fields._asyncOperater_5__13;
  v108 = 0;
  v8->fields._asyncOperater_5__13 = 0;
LABEL_137:
  sub_21FFBF4(p_errorLocalizeCode_5__7, v108, v101, v102, v103, v104, v105, v106);
  method = (const MethodInfo *)v8->fields._errorCode_5__6;
  if ( method )
  {
    AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, (const MethodInfo *)v2);
    v256 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
      v256 = ManagerConfig_TypeInfo;
    }
    if ( v256->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v257 = _4__this->fields.data;
      if ( !v257 )
        goto LABEL_395;
      v258 = (CommonUI_o *)this;
      v259 = System_String__Concat_75483552(
               (System_String_o *)StringLiteral_2485/*"AssetName : "*/,
               v257->fields.name,
               (System_String_o *)StringLiteral_43/*"\n"*/,
               v8->fields._errorCode_5__6,
               0);
      v260 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v260, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
      if ( !v258 )
        goto LABEL_395;
      effectDistance.fields.value.fields.y = 0.0;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      CommonUI__OpenWarningDialog(
        v258,
        (System_String_o *)StringLiteral_16519/*"[FFFF80]Download error for debug"*/,
        v259,
        v260,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
LABEL_144:
      if ( _4__this->fields.isErrorDialog )
      {
        v463 = (Il2CppObject *)v8->fields._wait_5__10;
        v8->fields.__2__current = v463;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v463, v2, v3, v4, v5, v6, v7);
        v38 = 2;
        goto LABEL_375;
      }
    }
    if ( v8->fields._isAutoRetry_5__4 )
    {
      v451 = ManagerConfig_TypeInfo;
      v452 = v8->fields._autoRetryCount_5__3;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
        v451 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v451->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v454 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      v455 = (float)v452;
      v456 = (Il2CppObject *)v454;
      UnityEngine_WaitForSeconds___ctor(v454, DOWNLOAD_RETRY_DELAY_TIME * v455, 0);
      v8->fields.__2__current = v456;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v456, v457, v458, v459, v460, v461, v462);
      v38 = 3;
      goto LABEL_375;
    }
    if ( !v8->fields._isCrcError_5__5 )
    {
      _4__this->fields.isErrorDialog = 1;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
      if ( !byte_5937656 )
      {
        sub_21FFC50(&ManagementManager_TypeInfo);
        byte_5937656 = 1;
      }
      v261 = ManagementManager_TypeInfo;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
        v261 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v261->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__7 = v8->fields._errorLocalizeCode_5__7;
      v267 = (System_String_o *)StringLiteral_1/*""*/;
      v268 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( isDuringStartup )
      {
        if ( errorLocalizeCode_5__7 )
          v269 = v8->fields._errorLocalizeCode_5__7;
        else
          v269 = (System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !v268 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v263, v264);
        v270 = LocalizationManager__Get(v269, 0);
        v271 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v271, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_395;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, v267, v270, v271, 1, 0);
      }
      else
      {
        if ( errorLocalizeCode_5__7 )
          v272 = v8->fields._errorLocalizeCode_5__7;
        else
          v272 = (System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !v268 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v263, v264);
        v273 = LocalizationManager__Get(v272, 0);
        v274 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v274, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_395;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, v267, v273, v274, 1, 0);
      }
LABEL_168:
      if ( _4__this->fields.isErrorDialog )
      {
        v464 = (Il2CppObject *)v8->fields._wait_5__10;
        v8->fields.__2__current = v464;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v464, v2, v3, v4, v5, v6, v7);
        v38 = 4;
        goto LABEL_375;
      }
    }
  }
LABEL_169:
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5933778 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5933778 = 1;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&this[1].fields._isEncrypted_5__2 + 144LL) )
  {
    if ( !_4__this )
      goto LABEL_395;
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_395;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    _4__this->fields.loader = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v466, v467, v468, v469, v470, v471);
    _4__this->fields.readData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v472, v473, v474, v475, v476, v477);
    return 0;
  }
  if ( !_4__this )
    goto LABEL_395;
  if ( !_4__this->fields.isDownload && !v8->fields._isEncrypted_5__2 )
    goto LABEL_311;
  v275 = _4__this->fields.loader;
  if ( v275 )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v275, 0);
    _4__this->fields.loader = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v276, v277, v278, v279, v280, v281);
    _4__this->fields.readData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v282, v283, v284, v285, v286, v287);
  }
  if ( !v8->fields._isCrcError_5__5 )
  {
LABEL_304:
    v8->fields._errorCode_5__6 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6, 0, v2, v3, v4, v5, v6, v7);
    v8->fields._errorLocalizeCode_5__7 = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._errorLocalizeCode_5__7,
      0,
      v398,
      v399,
      v400,
      v401,
      v402,
      v403);
    v8->fields._wait_5__10 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__10, 0, v404, v405, v406, v407, v408, v409);
    goto LABEL_305;
  }
  v288 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v288);
  v8->fields._url_5__12 = ConfigFileAddress;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._url_5__12,
    (int32_t)ConfigFileAddress,
    v290,
    v291,
    v292,
    v293,
    v294,
    v295);
LABEL_185:
  v296 = v8->fields._url_5__12;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47, v48);
  UrlString = AssetManager__getUrlString(v296, v47);
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
  if ( !_4__this )
    goto LABEL_395;
  _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
    (int32_t)this,
    v298,
    v299,
    v300,
    v301,
    v302,
    v303);
  v305 = UnityEngine_Time__get_unscaledTime(0);
  v306 = ManagerConfig_TypeInfo;
  v307 = v305;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v304);
    v306 = ManagerConfig_TypeInfo;
  }
  v308 = v306->static_fields;
  v8->fields._loadProgress_5__9 = 0.0;
  v309 = v308->TIMEOUT;
  *(_WORD *)&v8->fields._isSizeChecked_5__14 = 0;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  v8->fields._requestTime_5__8 = v307 + v309;
  if ( !this )
    goto LABEL_395;
  v310 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v8->fields._asyncOperater_5__13 = v310;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._asyncOperater_5__13,
    (int32_t)v310,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
LABEL_192:
  this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__13;
  if ( !this )
    goto LABEL_395;
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v8->fields._isSizeChecked_5__14 )
    {
      if ( !_4__this )
        goto LABEL_395;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_395;
      ResponseHeader = UnityEngine_Networking_UnityWebRequest__GetResponseHeader(
                         (UnityEngine_Networking_UnityWebRequest_o *)this,
                         (System_String_o *)StringLiteral_4859/*"Content-Length"*/,
                         0);
      if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
      {
        v8->fields._isSizeChecked_5__14 = 1;
        result = 0;
        System_UInt64__TryParse(ResponseHeader, &result, 0);
        v324 = ManagerConfig_TypeInfo;
        freeSize_5__11 = v8->fields._freeSize_5__11;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v317);
          v324 = ManagerConfig_TypeInfo;
        }
        if ( freeSize_5__11 < result + v324->static_fields->LIMIT_FREE_SIZE )
        {
          v8->fields._isDiskFull_5__15 = 1;
          goto LABEL_206;
        }
      }
    }
    this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__13;
    if ( !this )
      goto LABEL_395;
    v326 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
    v327 = v8->fields._loadProgress_5__9;
    v328 = v326;
    v329 = UnityEngine_Time__get_unscaledTime(0);
    v146 = v328 == v327;
    v330 = v329;
    if ( !v146 )
    {
      v537 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v317);
        v537 = ManagerConfig_TypeInfo;
      }
      v538 = v537->static_fields;
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__13;
      v8->fields._requestTime_5__8 = v330 + v538->TIMEOUT;
      if ( !this )
        goto LABEL_395;
      v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
      goto LABEL_394;
    }
    if ( v329 < v8->fields._requestTime_5__8 )
    {
LABEL_394:
      v539 = (Il2CppObject *)v8->fields._wait_5__10;
      v8->fields.__2__current = v539;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v539, v317, v318, v319, v320, v321, v322);
      v38 = 5;
      goto LABEL_375;
    }
  }
LABEL_206:
  v8->fields._errorCode_5__6 = 0;
  v331 = &v8->fields._errorCode_5__6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6, 0, v317, v318, v319, v320, v321, v322);
  if ( v8->fields._isDiskFull_5__15 )
  {
    if ( !_4__this )
      goto LABEL_395;
    _4__this->fields.isErrorDialog = 1;
    v478 = StringLiteral_5471/*"Disk full"*/;
    v8->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5471/*"Disk full"*/;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6,
      v478,
      v332,
      v333,
      v334,
      v335,
      v336,
      v337);
    LODWORD(v479) = StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/;
    v8->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/;
    v480 = (MissionNaviTransitionBoardItem_o *)&v8->fields._errorLocalizeCode_5__7;
LABEL_346:
    sub_21FFBF4(v480, v479, v345, v346, v347, v348, v349, v350);
    v482 = _4__this->fields.loader;
    if ( v482 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v482, 0);
      _4__this->fields.loader = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v483, v484, v485, v486, v487, v488);
    }
    if ( !*v331 )
      goto LABEL_374;
    v489 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
      v489 = ManagerConfig_TypeInfo;
    }
    if ( v489->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v490 = _4__this->fields.data;
      if ( !v490 )
        goto LABEL_395;
      v491 = (CommonUI_o *)this;
      v492 = System_String__Concat_75483552(
               (System_String_o *)StringLiteral_2485/*"AssetName : "*/,
               v490->fields.name,
               (System_String_o *)StringLiteral_43/*"\n"*/,
               *v331,
               0);
      v493 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v493, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
      if ( !v491 )
        goto LABEL_395;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v491,
        (System_String_o *)StringLiteral_16519/*"[FFFF80]Download error for debug"*/,
        v492,
        v493,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0);
LABEL_355:
      if ( _4__this->fields.isErrorDialog )
      {
        v494 = (Il2CppObject *)v8->fields._wait_5__10;
        v8->fields.__2__current = v494;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v494, v2, v3, v4, v5, v6, v7);
        v38 = 6;
        goto LABEL_375;
      }
    }
    _4__this->fields.isErrorDialog = 1;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
    if ( !byte_5937656 )
    {
      sub_21FFC50(&ManagementManager_TypeInfo);
      byte_5937656 = 1;
    }
    v495 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
      v495 = ManagementManager_TypeInfo;
    }
    v496 = v495->static_fields->isDuringStartup;
    v499 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v500 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v496 )
    {
      if ( !v500 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v497, v498);
      v501 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
      v502 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v502, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( !v499 )
        goto LABEL_395;
      CommonUI__OpenRetryBootDialog((CommonUI_o *)v499, (System_String_o *)StringLiteral_1/*""*/, v501, v502, 0, 0);
    }
    else
    {
      if ( !v500 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v497, v498);
      v503 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v504 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v504, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( !v499 )
        goto LABEL_395;
      CommonUI__OpenRetryDialog((CommonUI_o *)v499, (System_String_o *)StringLiteral_1/*""*/, v503, v504, 0, 0);
    }
LABEL_372:
    if ( _4__this->fields.isErrorDialog )
    {
      v505 = (Il2CppObject *)v8->fields._wait_5__10;
      v8->fields.__2__current = v505;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v505, v2, v3, v4, v5, v6, v7);
      v38 = 7;
    }
    else
    {
LABEL_374:
      v506 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v506, 1.0, 0);
      v8->fields.__2__current = (Il2CppObject *)v506;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v506, v507, v508, v509, v510, v511, v512);
      v38 = 8;
    }
LABEL_375:
    p__2__current[-1].fields._BoardType_k__BackingField = v38;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_395;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_395;
  isDone = UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !isDone )
  {
    if ( !this )
      goto LABEL_395;
    UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v395 = &StringLiteral_2498/*"AssetStorageList download time over"*/;
    goto LABEL_344;
  }
  if ( !this )
    goto LABEL_395;
  v339 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v340 = System_String__IsNullOrEmpty(v339, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !v340 )
  {
    if ( !this )
      goto LABEL_395;
    v481 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    LODWORD(v479) = (_DWORD)v481;
    *v331 = v481;
    goto LABEL_345;
  }
  if ( !this )
    goto LABEL_395;
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                                              0);
  if ( !this )
    goto LABEL_395;
  text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v341, v342);
  v344 = CatAndMouseGame__MouseGame3(text, 0);
  if ( System_String__IsNullOrEmpty(v344, 0) )
  {
    v395 = &StringLiteral_2496/*"AssetStorageList download error"*/;
    goto LABEL_344;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(char___TypeInfo, 1);
  if ( !this )
    goto LABEL_395;
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.__2__current) )
    goto LABEL_396;
  LOWORD(this->fields.__4__this) = -257;
  if ( !v344 )
    goto LABEL_395;
  this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_75500152(v344, (System_Char_array *)this, 0);
  if ( !this )
    goto LABEL_395;
  v351 = this;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_26609/*"~"*/, 0) )
    goto LABEL_297;
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_395;
  v352 = (int)this->fields.__2__current;
  if ( !v352 )
    goto LABEL_396;
  LOWORD(this->fields.__4__this) = 13;
  if ( v352 == 1 )
    goto LABEL_396;
  WORD1(this->fields.__4__this) = 10;
  v353 = System_String__IndexOfAny((System_String_o *)v351, (System_Char_array *)this, 0);
  if ( v353 < 2 )
    goto LABEL_297;
  v354 = v353;
  v355 = System_String__Substring_75489544((System_String_o *)v351, 1, v353 - 1, 0);
  v356 = System_String__Substring((System_String_o *)v351, v354 + 1, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
  if ( !this )
    goto LABEL_395;
  v359 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                this,
                                v356,
                                this->klass[1]._1.methods);
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v357, v358);
  v360 = Crc32__Compute(v359, 0);
  if ( System_UInt32__Parse(v355, 0) != v360 )
  {
LABEL_297:
    v395 = &StringLiteral_2495/*"AssetStorageList download data error"*/;
LABEL_344:
    v479 = *v395;
    *v331 = (System_String_o *)*v395;
LABEL_345:
    v480 = (MissionNaviTransitionBoardItem_o *)&v8->fields._errorCode_5__6;
    goto LABEL_346;
  }
  if ( !v356 )
    goto LABEL_281;
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_395;
  v361 = (int)this->fields.__2__current;
  if ( !v361 )
    goto LABEL_396;
  LOWORD(this->fields.__4__this) = 13;
  if ( v361 == 1 )
    goto LABEL_396;
  WORD1(this->fields.__4__this) = 10;
  this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75492796(v356, (System_Char_array *)this, 1, 0);
  if ( !this )
    goto LABEL_395;
  _2__current_low = LODWORD(this->fields.__2__current);
  v363 = this;
  if ( (int)_2__current_low < 1 )
    goto LABEL_281;
  if ( !LODWORD(this->fields.__2__current) )
LABEL_396:
    sub_21FFED4(this);
  v364 = 0;
  while ( 1 )
  {
    v365 = (System_String_o *)*((_QWORD *)&v363->fields.__4__this + v364);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_21FFD10(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_395;
    method = (const MethodInfo *)this;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_396;
    LOWORD(this->fields.__4__this) = 44;
    if ( !v365 )
      goto LABEL_395;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75492680(v365, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_395;
    v366 = this->fields.__2__current;
    v367 = this;
    if ( (int)v366 < 1 )
      break;
    this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_395;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1850/*"@"*/,
                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !LODWORD(v367->fields.__2__current) )
        goto LABEL_396;
      this = (AssetLoader__LoadDataCR_d__29_o *)v367->fields.__4__this;
      if ( !this )
        goto LABEL_395;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                  (System_String_o *)this,
                                                  (System_String_o *)StringLiteral_26609/*"~"*/,
                                                  0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_264;
      if ( !LODWORD(v367->fields.__2__current) )
        goto LABEL_396;
      this = (AssetLoader__LoadDataCR_d__29_o *)v367->fields.__4__this;
      if ( !this )
        goto LABEL_395;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
      if ( (_DWORD)this == 1 )
        goto LABEL_264;
      LODWORD(v366) = v367->fields.__2__current;
      break;
    }
    if ( !LODWORD(v367->fields.__2__current) )
      goto LABEL_396;
    this = (AssetLoader__LoadDataCR_d__29_o *)v367->fields.__4__this;
    if ( !this )
      goto LABEL_395;
    v370 = System_String__Substring((System_String_o *)this, 1, 0);
    p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
    if ( SLODWORD(v367->fields.__2__current) > 1 )
      p_resourceNames = (System_String_o **)&v367->fields.resourceNames;
    v372 = *p_resourceNames;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v368, v369);
    this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v370, v372, v369);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_281;
LABEL_264:
    if ( ++v364 == _2__current_low )
      goto LABEL_281;
    if ( v364 >= LODWORD(v363->fields.__2__current) )
      goto LABEL_396;
  }
  if ( (_DWORD)v366 != 5 )
    goto LABEL_281;
  this = *(AssetLoader__LoadDataCR_d__29_o **)&v367->fields._isAutoRetry_5__4;
  if ( !this )
    goto LABEL_395;
  v373 = System_String__Trim((System_String_o *)this, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v373, 0);
  if ( LODWORD(v367->fields.__2__current) <= 4 )
    goto LABEL_396;
  v375 = (int)this;
  this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v367->fields._errorCode_5__6, v374);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_264;
  v376 = _4__this->fields.data;
  if ( !v376 )
    goto LABEL_395;
  if ( v375 == v376->fields.crc )
  {
    _4__this->fields.isErrorDialog = 1;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v345);
    if ( !byte_5937656 )
    {
      sub_21FFC50(&ManagementManager_TypeInfo);
      byte_5937656 = 1;
    }
    v377 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v345);
      v377 = ManagementManager_TypeInfo;
    }
    v378 = v377->static_fields->isDuringStartup;
    v381 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v382 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v378 )
    {
      if ( !v382 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v379, v380);
      v383 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
      v384 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v384, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( v381 )
      {
        CommonUI__OpenRetryBootDialog((CommonUI_o *)v381, (System_String_o *)StringLiteral_1/*""*/, v383, v384, 1, 0);
        goto LABEL_302;
      }
      goto LABEL_395;
    }
    if ( !v382 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v379, v380);
    v396 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
    v397 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v397, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
    if ( !v381 )
      goto LABEL_395;
    CommonUI__OpenRetryDialog((CommonUI_o *)v381, (System_String_o *)StringLiteral_1/*""*/, v396, v397, 1, 0);
LABEL_302:
    if ( !_4__this->fields.isErrorDialog )
    {
      v8->fields._url_5__12 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._url_5__12, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_304;
    }
    v465 = (Il2CppObject *)v8->fields._wait_5__10;
    v8->fields.__2__current = v465;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v465, v2, v3, v4, v5, v6, v7);
    v38 = 9;
    goto LABEL_375;
  }
LABEL_281:
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v345);
  if ( !byte_5937656 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937656 = 1;
  }
  v385 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v345);
    v385 = ManagementManager_TypeInfo;
  }
  v386 = v385->static_fields->isDuringStartup;
  v389 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v390 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v386 )
  {
    if ( !v390 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v387, v388);
    v391 = &StringLiteral_9614/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
  }
  else
  {
    if ( !v390 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v387, v388);
    v391 = &StringLiteral_9613/*"NETWORK_ERROR_ASSET_UPDATE"*/;
  }
  v392 = LocalizationManager__Get((System_String_o *)*v391, 0);
  v393 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v393, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
  if ( !v389 )
    goto LABEL_395;
  CommonUI__OpenErrorDialog((CommonUI_o *)v389, (System_String_o *)StringLiteral_1/*""*/, v392, v393, 0, 0);
  return 0;
}


Il2CppObject *AssetLoader__LoadDataCR_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_Reset(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetLoader__LoadDataCR_d__29__System_IDisposable_Dispose(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetLoader___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59375E3 & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader___c_TypeInfo);
    byte_59375E3 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AssetLoader___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59375E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_59375E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  return BYTE4(Instance[7].monitor) == 0;
}