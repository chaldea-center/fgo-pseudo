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
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(0, method);
  AssetData__AddEntry(data, 0);
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x21
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int32_t v77; // w1
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w1
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w1
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w1
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int32_t v105; // w1
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  int32_t v112; // w1
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  int32_t v126; // w1
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w1
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  int32_t v140; // w1
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  int32_t v147; // w1
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  int32_t v154; // w1
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  int32_t v161; // w1
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  int32_t v168; // w1
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  int32_t v175; // w1
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  int32_t v182; // w1
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  int32_t v189; // w1
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  int32_t v196; // w1
  int32_t v197; // w2
  int32_t v198; // w3
  System_String_o *v199; // x4
  int32_t v200; // w5
  int64_t v201; // x6
  System_String_o *v202; // x7
  int32_t v203; // w1
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  int32_t v210; // w1
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  int32_t v217; // w1
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  int32_t v224; // w1
  int32_t v225; // w2
  int32_t v226; // w3
  System_String_o *v227; // x4
  int32_t v228; // w5
  int64_t v229; // x6
  System_String_o *v230; // x7
  int32_t v231; // w1
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  int32_t v238; // w1
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o *v241; // x4
  int32_t v242; // w5
  int64_t v243; // x6
  System_String_o *v244; // x7
  int32_t v245; // w1
  int32_t v246; // w2
  int32_t v247; // w3
  System_String_o *v248; // x4
  int32_t v249; // w5
  int64_t v250; // x6
  System_String_o *v251; // x7
  int32_t v252; // w1
  int32_t v253; // w2
  int32_t v254; // w3
  System_String_o *v255; // x4
  int32_t v256; // w5
  int64_t v257; // x6
  System_String_o *v258; // x7
  int32_t v259; // w1
  int32_t v260; // w2
  int32_t v261; // w3
  System_String_o *v262; // x4
  int32_t v263; // w5
  int64_t v264; // x6
  System_String_o *v265; // x7
  int32_t v266; // w1
  __int64 v267; // x23
  __int64 v268; // x24
  CrashReporter_o *v269; // x19

  if ( (byte_4D2B7D5 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_14216/*"The request timed out."*/);
    sub_1C94098(&StringLiteral_21258/*"java.net.SocketException"*/);
    sub_1C94098(&StringLiteral_12346/*"SSL CA certificate error"*/);
    sub_1C94098(&StringLiteral_1408/*"404: Not Found"*/);
    sub_1C94098(&StringLiteral_14157/*"The network connection was lost."*/);
    sub_1C94098(&StringLiteral_1402/*"400: Bad Request"*/);
    sub_1C94098(&StringLiteral_14954/*"Unable to complete SSL connection"*/);
    sub_1C94098(&StringLiteral_14984/*"Unable to read data"*/);
    sub_1C94098(&StringLiteral_18315/*"connect failed"*/);
    sub_1C94098(&StringLiteral_7277/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1C94098(&StringLiteral_21260/*"java.net.UnknownHostException"*/);
    sub_1C94098(&StringLiteral_1416/*"500: Internal Server Error"*/);
    sub_1C94098(&StringLiteral_1418/*"502:"*/);
    sub_1C94098(&StringLiteral_11388/*"Request timeout"*/);
    sub_1C94098(&StringLiteral_4667/*"Connection reset by peer"*/);
    sub_1C94098(&StringLiteral_5025/*"DLErrorType"*/);
    sub_1C94098(&StringLiteral_5024/*"DLErrorAsset"*/);
    sub_1C94098(&StringLiteral_1430/*"504: Gateway Timeout"*/);
    sub_1C94098(&StringLiteral_15155/*"Unknown Error"*/);
    sub_1C94098(&StringLiteral_1420/*"503 Auto retry count"*/);
    sub_1C94098(&StringLiteral_21242/*"java.io.EOFException"*/);
    sub_1C94098(&StringLiteral_21255/*"java.net.ConnectException"*/);
    sub_1C94098(&StringLiteral_1406/*"403: Forbidden"*/);
    sub_1C94098(&StringLiteral_4666/*"Connection refused"*/);
    sub_1C94098(&StringLiteral_7278/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1C94098(&StringLiteral_1404/*"401: Authorization Required"*/);
    sub_1C94098(&StringLiteral_21243/*"java.io.IOException"*/);
    sub_1C94098(&StringLiteral_9478/*"No address associated with hostname"*/);
    sub_1C94098(&StringLiteral_21257/*"java.net.ProtocolException"*/);
    sub_1C94098(&StringLiteral_2373/*"AssetBundle file download time over"*/);
    sub_1C94098(&StringLiteral_1409/*"408: Request Time-out"*/);
    sub_1C94098(&StringLiteral_14601/*"Too many redirects"*/);
    sub_1C94098(&StringLiteral_12976/*"Software caused connection abort"*/);
    sub_1C94098(&StringLiteral_2372/*"AssetBundle file check sum error"*/);
    sub_1C94098(&StringLiteral_21256/*"java.net.NoRouteToHostException"*/);
    sub_1C94098(&StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/);
    sub_1C94098(&StringLiteral_4668/*"Connection timed out"*/);
    sub_1C94098(&StringLiteral_4257/*"Cannot resolve destination host"*/);
    sub_1C94098(&StringLiteral_21259/*"java.net.SocketTimeoutException"*/);
    sub_1C94098(&StringLiteral_2376/*"AssetLoadError"*/);
    byte_4D2B7D5 = 1;
  }
  Instance = sub_1C94140(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v13 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v14 = StringLiteral_9478/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9478/*"No address associated with hostname"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(Instance + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_47;
  v21 = StringLiteral_2373/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_2373/*"AssetBundle file download time over"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v13 + 24) <= 2u )
    goto LABEL_47;
  v28 = StringLiteral_14157/*"The network connection was lost."*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_14157/*"The network connection was lost."*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v13 + 24) <= 3u )
    goto LABEL_47;
  v35 = StringLiteral_4667/*"Connection reset by peer"*/;
  *(_QWORD *)(v13 + 56) = StringLiteral_4667/*"Connection reset by peer"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v13 + 24) <= 4u )
    goto LABEL_47;
  v42 = StringLiteral_12976/*"Software caused connection abort"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_12976/*"Software caused connection abort"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v13 + 24) <= 5u )
    goto LABEL_47;
  v49 = StringLiteral_4668/*"Connection timed out"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_4668/*"Connection timed out"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v13 + 24) <= 6u )
    goto LABEL_47;
  v56 = StringLiteral_4666/*"Connection refused"*/;
  *(_QWORD *)(v13 + 80) = StringLiteral_4666/*"Connection refused"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v13 + 24) <= 7u )
    goto LABEL_47;
  v63 = StringLiteral_14216/*"The request timed out."*/;
  *(_QWORD *)(v13 + 88) = StringLiteral_14216/*"The request timed out."*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 88), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v13 + 24) <= 8u )
    goto LABEL_47;
  v70 = StringLiteral_4257/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v13 + 96) = StringLiteral_4257/*"Cannot resolve destination host"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 96), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v13 + 24) <= 9u )
    goto LABEL_47;
  v77 = StringLiteral_14954/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v13 + 104) = StringLiteral_14954/*"Unable to complete SSL connection"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 104), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v13 + 24) <= 0xAu )
    goto LABEL_47;
  v84 = StringLiteral_15155/*"Unknown Error"*/;
  *(_QWORD *)(v13 + 112) = StringLiteral_15155/*"Unknown Error"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 112), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v13 + 24) <= 0xBu )
    goto LABEL_47;
  v91 = StringLiteral_11388/*"Request timeout"*/;
  *(_QWORD *)(v13 + 120) = StringLiteral_11388/*"Request timeout"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 120), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v13 + 24) <= 0xCu )
    goto LABEL_47;
  v98 = StringLiteral_2372/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v13 + 128) = StringLiteral_2372/*"AssetBundle file check sum error"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 128), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v13 + 24) <= 0xDu )
    goto LABEL_47;
  v105 = StringLiteral_12346/*"SSL CA certificate error"*/;
  *(_QWORD *)(v13 + 136) = StringLiteral_12346/*"SSL CA certificate error"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 136), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v13 + 24) <= 0xEu )
    goto LABEL_47;
  v112 = StringLiteral_7277/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v13 + 144) = StringLiteral_7277/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 144), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v13 + 24) <= 0xFu )
    goto LABEL_47;
  v119 = StringLiteral_7278/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v13 + 152) = StringLiteral_7278/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 152), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v13 + 24) <= 0x10u )
    goto LABEL_47;
  v126 = StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v13 + 160) = StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 160), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v13 + 24) <= 0x11u )
    goto LABEL_47;
  v133 = StringLiteral_14601/*"Too many redirects"*/;
  *(_QWORD *)(v13 + 168) = StringLiteral_14601/*"Too many redirects"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 168), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v13 + 24) <= 0x12u )
    goto LABEL_47;
  v140 = StringLiteral_21242/*"java.io.EOFException"*/;
  *(_QWORD *)(v13 + 176) = StringLiteral_21242/*"java.io.EOFException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 176), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v13 + 24) <= 0x13u )
    goto LABEL_47;
  v147 = StringLiteral_21258/*"java.net.SocketException"*/;
  *(_QWORD *)(v13 + 184) = StringLiteral_21258/*"java.net.SocketException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 184), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v13 + 24) <= 0x14u )
    goto LABEL_47;
  v154 = StringLiteral_21259/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v13 + 192) = StringLiteral_21259/*"java.net.SocketTimeoutException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 192), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v13 + 24) <= 0x15u )
    goto LABEL_47;
  v161 = StringLiteral_21256/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v13 + 200) = StringLiteral_21256/*"java.net.NoRouteToHostException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 200), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v13 + 24) <= 0x16u )
    goto LABEL_47;
  v168 = StringLiteral_21243/*"java.io.IOException"*/;
  *(_QWORD *)(v13 + 208) = StringLiteral_21243/*"java.io.IOException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 208), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v13 + 24) <= 0x17u )
    goto LABEL_47;
  v175 = StringLiteral_21255/*"java.net.ConnectException"*/;
  *(_QWORD *)(v13 + 216) = StringLiteral_21255/*"java.net.ConnectException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 216), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v13 + 24) <= 0x18u )
    goto LABEL_47;
  v182 = StringLiteral_18315/*"connect failed"*/;
  *(_QWORD *)(v13 + 224) = StringLiteral_18315/*"connect failed"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 224), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v13 + 24) <= 0x19u )
    goto LABEL_47;
  v189 = StringLiteral_21257/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v13 + 232) = StringLiteral_21257/*"java.net.ProtocolException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 232), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Au )
    goto LABEL_47;
  v196 = StringLiteral_21260/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v13 + 240) = StringLiteral_21260/*"java.net.UnknownHostException"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 240), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Bu )
    goto LABEL_47;
  v203 = StringLiteral_1402/*"400: Bad Request"*/;
  *(_QWORD *)(v13 + 248) = StringLiteral_1402/*"400: Bad Request"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 248), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Cu )
    goto LABEL_47;
  v210 = StringLiteral_1404/*"401: Authorization Required"*/;
  *(_QWORD *)(v13 + 256) = StringLiteral_1404/*"401: Authorization Required"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 256), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Du )
    goto LABEL_47;
  v217 = StringLiteral_1406/*"403: Forbidden"*/;
  *(_QWORD *)(v13 + 264) = StringLiteral_1406/*"403: Forbidden"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 264), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Eu )
    goto LABEL_47;
  v224 = StringLiteral_1408/*"404: Not Found"*/;
  *(_QWORD *)(v13 + 272) = StringLiteral_1408/*"404: Not Found"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 272), v224, v218, v219, v220, v221, v222, v223);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Fu )
    goto LABEL_47;
  v231 = StringLiteral_1409/*"408: Request Time-out"*/;
  *(_QWORD *)(v13 + 280) = StringLiteral_1409/*"408: Request Time-out"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 280), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v13 + 24) <= 0x20u )
    goto LABEL_47;
  v238 = StringLiteral_1416/*"500: Internal Server Error"*/;
  *(_QWORD *)(v13 + 288) = StringLiteral_1416/*"500: Internal Server Error"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 288), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v13 + 24) <= 0x21u )
    goto LABEL_47;
  v245 = StringLiteral_1418/*"502:"*/;
  *(_QWORD *)(v13 + 296) = StringLiteral_1418/*"502:"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 296), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v13 + 24) <= 0x22u
    || (v252 = StringLiteral_1420/*"503 Auto retry count"*/,
        *(_QWORD *)(v13 + 304) = StringLiteral_1420/*"503 Auto retry count"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 304), v252, v246, v247, v248, v249, v250, v251),
        *(_DWORD *)(v13 + 24) <= 0x23u)
    || (v259 = StringLiteral_1430/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v13 + 312) = StringLiteral_1430/*"504: Gateway Timeout"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 312), v259, v253, v254, v255, v256, v257, v258),
        *(_DWORD *)(v13 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C942F8(Instance);
  }
  v266 = StringLiteral_14984/*"Unable to read data"*/;
  *(_QWORD *)(v13 + 320) = StringLiteral_14984/*"Unable to read data"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 320), v266, v260, v261, v262, v263, v264, v265);
  if ( (int)*(_QWORD *)(v13 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v267 = 0;
  v268 = (unsigned int)*(_QWORD *)(v13 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v13 + 32 + 8 * v267), 0);
    if ( (Instance & 1) != 0 )
      break;
    if ( v268 == v267 )
      goto LABEL_48;
    if ( ++v267 >= (unsigned __int64)*(unsigned int *)(v13 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v269 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0), !v269) )
  {
LABEL_58:
    sub_1C942F0(Instance, v6);
  }
  CrashReporter__AddCustomKey(v269, (System_String_o *)StringLiteral_5024/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v267 >= *(_DWORD *)(v13 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5025/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v267),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2376/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4D2B7D2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B7D2 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)this, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.data = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
}


bool AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0);
  return (char)data;
}


bool AssetLoader__IsSame_41264944(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_41256836(data, type, name, 0);
  return (char)data;
}


System_Collections_IEnumerator_o *AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2B7D1 & 1) == 0 )
  {
    sub_1C94098(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4D2B7D1 = 1;
  }
  v5 = sub_1C942E4(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)resourceNames, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2B7D3 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    byte_4D2B7D3 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._decData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ManagementManager_c *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4D2B7D4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D2B7D4 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loader, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.readData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4D2B7C8 )
  {
    sub_1C94098(&ManagementManager_TypeInfo);
    byte_4D2B7C8 = 1;
  }
  v16 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v16 = ManagementManager_TypeInfo;
  }
  if ( v16->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71904136(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v18);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void AssetLoader__StartLoad(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x21
  __int64 v11; // x1
  AssetData_o *v12; // x0
  bool IsNeedUpdateVersion; // w0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)callbackFunc,
    (int32_t)resourceNames,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v12 )
    sub_1C942F0(0, v11);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v12, 0);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
}


void AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v10; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0) )
  {
    if ( !*p_threadDecrypt )
      sub_1C942F0(0, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_threadDecrypt, 0, v2, v3, v4, v5, v6, v7);
}


void AssetLoader__add_endCallback(AssetLoader_o *this, AssetLoader_LoadEndHandler_o *value, const MethodInfo *method)
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

  if ( (byte_4D2B7CD & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4D2B7CD = 1;
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
    v9 = sub_1CEFE6C(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetLoader__remove_endCallback(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B7CF & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2B7CF = 1;
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
    v9 = sub_1CEFE6C(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetLoader__remove_endCallback2(v11, v12, v13);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(this, method);
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
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B7CE & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4D2B7CE = 1;
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
    v9 = sub_1CEFE6C(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetLoader__add_endCallback2(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B7D0 & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2B7D0 = 1;
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
    v9 = sub_1CEFE6C(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetLoader__get_IsRequestDownload(v11, v12);
}


void AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC82F4;
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
        v15 = sub_1C94150(method);
        v16 = sub_1C946E4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AC83F0;
          else
            v13 = sub_1AC83B4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AC8330;
        }
        else
        {
          v13 = sub_1AC8304;
        }
      }
      else
      {
        v13 = sub_1AC82D4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC828C;
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
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC8104;
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
        v15 = sub_1C94150(method);
        v16 = sub_1C946E4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AC8200;
          else
            v13 = sub_1AC81C4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AC8140;
        }
        else
        {
          v13 = sub_1AC8114;
        }
      }
      else
      {
        v13 = sub_1AC80E4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC809C;
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
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v8; // x27
  AssetLoader__LoadDataCR_d__29_o *v9; // x19
  struct AssetLoader_o *_4__this; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  GrandQuestFolderBoardItem_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v20; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w8
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v31; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Networking_DownloadHandler_o *v34; // x8
  uint32_t klass; // w8
  AssetData_o *v36; // x20
  System_Collections_IEnumerator_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  const MethodInfo *v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Byte_array *data; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Byte_array *readData; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v85; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v87; // x23
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  const MethodInfo *v94; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  int64_t v103; // x23
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  GrandQuestFolderBoardItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v112; // w1
  System_String_o *Url; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  System_String_o *url_5__12; // x21
  struct AssetData_o *v121; // x8
  AssetLoader__LoadDataCR_d__29_o *v122; // x22
  bool v123; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__13; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v142; // s8
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  float v149; // s0
  bool v150; // zf
  float v151; // s8
  UnityEngine_Networking_DownloadHandler_o *v152; // x0
  __int64 v153; // x10
  DownloadHandlerFileWithCrcCheck_o *v154; // x22
  System_String_o *v155; // x0
  uint32_t crc; // w8
  System_String_o *v157; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  struct System_Exception_o *error_k__BackingField; // x0
  System_Exception_c *v171; // x8
  __int64 v172; // x10
  struct System_Exception_o *v173; // x8
  AssetLoader__LoadDataCR_d__29_o *v174; // x22
  System_String_o *v175; // x0
  System_String_o *v176; // x0
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x4
  int32_t v180; // w5
  int64_t v181; // x6
  System_String_o *v182; // x7
  int32_t v183; // w1
  GrandQuestFolderBoardItem_o *p_errorCode_5__6; // x0
  System_String_o *v185; // x22
  System_String_o *v186; // x0
  System_String_o *v187; // x0
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v195; // x23
  Il2CppObject *v196; // x23
  AssetLoader__LoadDataCR_d__29_o *v197; // x23
  System_String_o *v198; // x24
  int v199; // w8
  System_String_o *v200; // x0
  System_String_o *v201; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  AssetLoader__LoadDataCR_d__29_o *v208; // x22
  int32_t v209; // w1
  int32_t v210; // w2
  int32_t v211; // w3
  System_String_o *v212; // x4
  int32_t v213; // w5
  int64_t v214; // x6
  System_String_o *v215; // x7
  struct System_String_o *v216; // x1
  int32_t v217; // w2
  int32_t v218; // w3
  System_String_o *v219; // x4
  int32_t v220; // w5
  int64_t v221; // x6
  System_String_o *v222; // x7
  int32_t v223; // w1
  struct AssetData_o *v224; // x8
  int32_t v225; // w2
  int32_t v226; // w3
  System_String_o *v227; // x4
  int32_t v228; // w5
  int64_t v229; // x6
  System_String_o *v230; // x7
  int32_t v231; // w2
  int32_t v232; // w3
  System_String_o *v233; // x4
  int32_t v234; // w5
  int64_t v235; // x6
  System_String_o *v236; // x7
  int32_t v237; // w1
  int32_t v238; // w2
  int32_t v239; // w3
  System_String_o *v240; // x4
  int32_t v241; // w5
  int64_t v242; // x6
  System_String_o *v243; // x7
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  int32_t v250; // w1
  System_String_o *v251; // x0
  int32_t v252; // w2
  int32_t v253; // w3
  System_String_o *v254; // x4
  int32_t v255; // w5
  int64_t v256; // x6
  System_String_o *v257; // x7
  ManagerConfig_c *v258; // x0
  struct AssetData_o *v259; // x8
  CommonUI_o *v260; // x21
  System_String_o *v261; // x22
  ErrorDialog_ClickDelegate_o *v262; // x23
  ManagementManager_c *v263; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v267; // x22
  System_String_o *v268; // x21
  System_String_o *v269; // x23
  System_String_o *v270; // x23
  ErrorDialog_ClickDelegate_o *v271; // x24
  System_String_o *v272; // x23
  System_String_o *v273; // x23
  ErrorDialog_ClickDelegate_o *v274; // x24
  UnityEngine_Networking_UnityWebRequest_o *v275; // x0
  int32_t v276; // w2
  int32_t v277; // w3
  System_String_o *v278; // x4
  int32_t v279; // w5
  int64_t v280; // x6
  System_String_o *v281; // x7
  int32_t v282; // w2
  int32_t v283; // w3
  System_String_o *v284; // x4
  int32_t v285; // w5
  int64_t v286; // x6
  System_String_o *v287; // x7
  AssetManager_c *v288; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v290; // w2
  int32_t v291; // w3
  System_String_o *v292; // x4
  int32_t v293; // w5
  int64_t v294; // x6
  System_String_o *v295; // x7
  System_String_o *v296; // x21
  System_String_o *UrlString; // x0
  int32_t v298; // w2
  int32_t v299; // w3
  System_String_o *v300; // x4
  int32_t v301; // w5
  int64_t v302; // x6
  System_String_o *v303; // x7
  AssetLoader__LoadDataCR_d__29_o **v304; // x21
  float v305; // s8
  ManagerConfig_c *v306; // x0
  float v307; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v308; // x0
  int32_t v309; // w2
  int32_t v310; // w3
  System_String_o *v311; // x4
  int32_t v312; // w5
  int64_t v313; // x6
  System_String_o *v314; // x7
  int32_t v315; // w2
  int32_t v316; // w3
  System_String_o *v317; // x4
  int32_t v318; // w5
  int64_t v319; // x6
  System_String_o *v320; // x7
  System_String_o *ResponseHeader; // x21
  uint64_t freeSize_5__11; // x21
  ManagerConfig_c *v323; // x0
  float v324; // s0
  float v325; // s9
  float v326; // s8
  float v327; // s0
  float v328; // s8
  System_String_o **v329; // x21
  int32_t v330; // w2
  int32_t v331; // w3
  System_String_o *v332; // x4
  int32_t v333; // w5
  int64_t v334; // x6
  System_String_o *v335; // x7
  System_String_o *v336; // x0
  System_String_o *text; // x22
  System_String_o *v338; // x22
  int32_t v339; // w2
  int32_t v340; // w3
  System_String_o *v341; // x4
  int32_t v342; // w5
  int64_t v343; // x6
  System_String_o *v344; // x7
  AssetLoader__LoadDataCR_d__29_o *v345; // x22
  int v346; // w8
  int32_t v347; // w0
  int32_t v348; // w24
  System_String_o *v349; // x23
  System_String_o *v350; // x22
  System_Byte_array *v351; // x24
  uint32_t v352; // w24
  int v353; // w8
  Il2CppObject *v354; // x8
  AssetLoader__LoadDataCR_d__29_o *v355; // x21
  int v356; // w28
  int v357; // w29
  System_String_o *v358; // x22
  Il2CppObject *v359; // x8
  AssetLoader__LoadDataCR_d__29_o *v360; // x22
  char v361; // w8
  const MethodInfo *v362; // x2
  System_String_o *v363; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v365; // x22
  System_String_o *v366; // x0
  int v367; // w23
  struct AssetData_o *v368; // x8
  ManagementManager_c *v369; // x0
  _BOOL4 v370; // w22
  Il2CppObject *v371; // x21
  System_String_o *v372; // x22
  ErrorDialog_ClickDelegate_o *v373; // x23
  ManagementManager_c *v374; // x0
  _BOOL4 v375; // w21
  Il2CppObject *v376; // x19
  __int64 *v377; // x8
  System_String_o *v378; // x21
  ErrorDialog_ClickDelegate_o *v379; // x22
  bool v380; // w0
  __int64 *v381; // x8
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v383; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v385; // x20
  int32_t v386; // w2
  int32_t v387; // w3
  System_String_o *v388; // x4
  int32_t v389; // w5
  int64_t v390; // x6
  System_String_o *v391; // x7
  System_String_o *v392; // x22
  ErrorDialog_ClickDelegate_o *v393; // x23
  int32_t v394; // w2
  int32_t v395; // w3
  System_String_o *v396; // x4
  int32_t v397; // w5
  int64_t v398; // x6
  System_String_o *v399; // x7
  int32_t v400; // w2
  int32_t v401; // w3
  System_String_o *v402; // x4
  int32_t v403; // w5
  int64_t v404; // x6
  System_String_o *v405; // x7
  Il2CppObject *_2__current; // x21
  AssetData_o *v407; // x22
  AssetLoader__LoadDataCR_d__29_o **v408; // x21
  __int64 v409; // x10
  __int64 v410; // x10
  System_Byte_array *v411; // x0
  UnityEngine_AssetBundleCreateRequest_o *v412; // x0
  int32_t v413; // w2
  int32_t v414; // w3
  System_String_o *v415; // x4
  int32_t v416; // w5
  int64_t v417; // x6
  System_String_o *v418; // x7
  int32_t v419; // w2
  int32_t v420; // w3
  System_String_o *v421; // x4
  int32_t v422; // w5
  int64_t v423; // x6
  System_String_o *v424; // x7
  Il2CppObject *req_5__16; // x1
  int32_t v426; // w2
  int32_t v427; // w3
  System_String_o *v428; // x4
  int32_t v429; // w5
  int64_t v430; // x6
  System_String_o *v431; // x7
  AssetLoader___c_c *v432; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v434; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v436; // w2
  int32_t v437; // w3
  System_String_o *v438; // x4
  int32_t v439; // w5
  int64_t v440; // x6
  System_String_o *v441; // x7
  UnityEngine_WaitUntil_o *v442; // x21
  int32_t v443; // w2
  int32_t v444; // w3
  System_String_o *v445; // x4
  int32_t v446; // w5
  int64_t v447; // x6
  System_String_o *v448; // x7
  Il2CppObject *v449; // x1
  Il2CppObject *v450; // x1
  Il2CppObject *v451; // x1
  int32_t v452; // w2
  int32_t v453; // w3
  System_String_o *v454; // x4
  int32_t v455; // w5
  int64_t v456; // x6
  System_String_o *v457; // x7
  int32_t v458; // w2
  int32_t v459; // w3
  System_String_o *v460; // x4
  int32_t v461; // w5
  int64_t v462; // x6
  System_String_o *v463; // x7
  int32_t v464; // w1
  __int64 v465; // x1
  GrandQuestFolderBoardItem_o *v466; // x0
  System_String_o *v467; // x0
  UnityEngine_Networking_UnityWebRequest_o *v468; // x0
  int32_t v469; // w2
  int32_t v470; // w3
  System_String_o *v471; // x4
  int32_t v472; // w5
  int64_t v473; // x6
  System_String_o *v474; // x7
  ManagerConfig_c *v475; // x0
  struct AssetData_o *v476; // x8
  CommonUI_o *v477; // x22
  System_String_o *v478; // x21
  ErrorDialog_ClickDelegate_o *v479; // x23
  Il2CppObject *v480; // x1
  ManagementManager_c *v481; // x0
  _BOOL4 v482; // w22
  Il2CppObject *v483; // x21
  System_String_o *v484; // x22
  ErrorDialog_ClickDelegate_o *v485; // x23
  System_String_o *v486; // x22
  ErrorDialog_ClickDelegate_o *v487; // x23
  Il2CppObject *v488; // x1
  UnityEngine_WaitForSeconds_o *v489; // x20
  int32_t v490; // w2
  int32_t v491; // w3
  System_String_o *v492; // x4
  int32_t v493; // w5
  int64_t v494; // x6
  System_String_o *v495; // x7
  UnityEngine_Networking_DownloadHandler_o *v496; // x0
  ManagerConfig_c *v497; // x0
  struct ManagerConfig_StaticFields *v498; // x8
  Il2CppObject *wait_5__10; // x1
  GrandQuestFolderBoardItem_o *v500; // x19
  ManagerConfig_c *v501; // x0
  struct ManagerConfig_StaticFields *v502; // x8
  Il2CppObject *v503; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v507; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v9 = this;
  if ( (byte_4D2B7D8 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetLoader_EndRebootDialog__);
    sub_1C94098(&Method_AssetLoader_EndRetryDialog__);
    sub_1C94098(&Method_AssetLoader_EndWarningDialog__);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&char___TypeInfo);
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&CommonServicePluginScript_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C94098(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1C94098(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&System_IO_IOException_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1C94098(&AssetLoader___c_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_9263/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1C94098(&StringLiteral_7274/*"HTTP"*/);
    sub_1C94098(&StringLiteral_5293/*"Disk full"*/);
    sub_1C94098(&StringLiteral_2390/*"AssetStorageList download time over"*/);
    sub_1C94098(&StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_2377/*"AssetName : "*/);
    sub_1C94098(&StringLiteral_759/*")\n\n503 Auto retry count "*/);
    sub_1C94098(&StringLiteral_762/*")\nfile crc ("*/);
    sub_1C94098(&StringLiteral_1419/*"503"*/);
    sub_1C94098(&StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C94098(&StringLiteral_15983/*"[FFFF80]Download error for debug"*/);
    sub_1C94098(&StringLiteral_2387/*"AssetStorageList download data error"*/);
    sub_1C94098(&StringLiteral_4692/*"Content-Length"*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    sub_1C94098(&StringLiteral_12403/*"STATUS"*/);
    sub_1C94098(&StringLiteral_758/*")\n\n"*/);
    sub_1C94098(&StringLiteral_9262/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1C94098(&StringLiteral_650/*"("*/);
    sub_1C94098(&StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    sub_1C94098(&StringLiteral_19213/*"error "*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_2388/*"AssetStorageList download error"*/);
    sub_1C94098(&StringLiteral_761/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B7D8 = 1;
  }
  v507 = 0;
  value = 0;
  result = 0;
  _4__this = v9->fields.__4__this;
  switch ( v9->fields.__1__state )
  {
    case 0:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      v9->fields._isEncrypted_5__2 = AssetData__get_IsAssetBundle((AssetData_o *)this, 0);
      v9->fields._autoRetryCount_5__3 = 0;
      goto LABEL_58;
    case 1:
      v9->fields.__1__state = -1;
      goto LABEL_77;
    case 2:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_147;
    case 3:
      v9->fields.__1__state = -1;
      goto LABEL_172;
    case 4:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_171;
    case 5:
      v9->fields.__1__state = -1;
      goto LABEL_195;
    case 6:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_352;
    case 7:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_367;
    case 8:
      v9->fields._asyncOperater_5__13 = 0;
      v9->fields.__1__state = -1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._asyncOperater_5__13, 0, (int32_t)v2, v3, v4, v5, v6, v7);
      goto LABEL_188;
    case 9:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_301;
    case 0xA:
      v9->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_383;
    case 0xB:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0);
      if ( !*p_loader )
        goto LABEL_383;
      v31 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0);
      if ( downloadHandler )
      {
        naturalAligment = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment;
        if ( downloadHandler->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[naturalAligment - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v34 = downloadHandler;
          else
            v34 = 0;
          if ( (v31 & 1) != 0 )
            goto LABEL_31;
LABEL_46:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_383;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          _4__this->fields.loader = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v52, v53, v54, v55, v56, v57);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_383;
          AssetData__ResetVersion((AssetData_o *)this, 0);
          goto LABEL_58;
        }
      }
      v34 = 0;
      if ( (v31 & 1) == 0 )
        goto LABEL_46;
LABEL_31:
      if ( v34 )
      {
        klass = (uint32_t)v34[1].klass;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_383;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        _4__this->fields.readData = data;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.readData,
          (int32_t)data,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        klass = Crc32__Compute(readData, 0);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      if ( klass == this->fields._autoRetryCount_5__3 )
        goto LABEL_306;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      AssetData__ResetVersion((AssetData_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      _4__this->fields.loader = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v66, v67, v68, v69, v70, v71);
      _4__this->fields.readData = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.readData, 0, v72, v73, v74, v75, v76, v77);
LABEL_58:
      while ( 1 )
      {
        _4__this->fields.readData = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3, v4, v5, v6, v7);
        if ( _4__this->fields.isDownload )
          break;
LABEL_304:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_383;
        if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
        {
          if ( v9->fields._isEncrypted_5__2 )
          {
LABEL_22:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_383;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, 0);
            _4__this->fields.loader = LoadRequest;
            v13 = (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader;
            sub_1C9403C(v13, (int32_t)LoadRequest, v14, v15, v16, v17, v18, v19);
            this = (AssetLoader__LoadDataCR_d__29_o *)v13->klass;
            if ( !v13->klass )
              goto LABEL_383;
            v20 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v9->fields.__2__current = (Il2CppObject *)v20;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)v20, v22, v23, v24, v25, v26, v27);
            v28 = 11;
          }
          else
          {
            v432 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v432 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v432->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v432->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v432);
                v432 = AssetLoader___c_TypeInfo;
              }
              v434 = (Il2CppObject *)v432->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v434, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
                (int32_t)_9__29_0,
                v436,
                v437,
                v438,
                v439,
                v440,
                v441);
            }
            v442 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v442, _9__29_0, 0);
            v9->fields.__2__current = (Il2CppObject *)v442;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)v442, v443, v444, v445, v446, v447, v448);
            v28 = 10;
          }
          goto LABEL_370;
        }
LABEL_306:
        if ( _4__this->fields.isDownload )
        {
          _2__current = this->fields.__2__current;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(
                                                      (System_String_o *)_2__current,
                                                      method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_310:
        v407 = _4__this->fields.data;
        if ( !v407 )
          goto LABEL_383;
        if ( v407->fields.entryCount >= 1 )
        {
          v408 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v9->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this
              || (v409 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                  this->klass->_2.naturalAligment < (unsigned int)v409)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v409 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v408;
              if ( !*v408 )
                goto LABEL_383;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0);
              if ( !this )
                goto LABEL_383;
              v410 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v410
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v410 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_383;
              }
            }
            v411 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
            v412 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v411, 0);
            v9->fields._req_5__16 = v412;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v9->fields._req_5__16,
              (int32_t)v412,
              v413,
              v414,
              v415,
              v416,
              v417,
              v418);
            this = *v408;
            if ( !*v408 )
              goto LABEL_383;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
            *v408 = 0;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v419, v420, v421, v422, v423, v424);
            req_5__16 = (Il2CppObject *)v9->fields._req_5__16;
            v9->fields.__2__current = req_5__16;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)req_5__16, v426, v427, v428, v429, v430, v431);
            v28 = 12;
            goto LABEL_370;
          }
          if ( !this )
            goto LABEL_383;
          v496 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0);
          AssetData__SetData(v407, v496, 0);
        }
LABEL_39:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
          _4__this->fields.loader = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v45, v46, v47, v48, v49, v50);
        }
        _4__this->fields.readData = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, v51);
        return 0;
      }
      *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
      v9->fields._errorCode_5__6 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6, 0, (int32_t)v2, v3, v4, v5, v6, v7);
      v9->fields._errorLocalizeCode_5__7 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._errorLocalizeCode_5__7, 0, v78, v79, v80, v81, v82, v83);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      v85 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v85 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v85->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
      v87 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v87, 0);
      v9->fields._wait_5__10 = v87;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._wait_5__10, (int32_t)v87, v88, v89, v90, v91, v92, v93);
      Path = AssetStorageCache__GetPath(v94);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
      v9->fields._freeSize_5__11 = FreeSize;
      if ( FreeSize < 0 )
        goto LABEL_68;
      v103 = FreeSize;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      if ( v103 < ManagerConfig_TypeInfo->static_fields->LIMIT_FREE_SIZE + *(int *)&this->fields._isEncrypted_5__2 )
      {
LABEL_68:
        _4__this->fields.isErrorDialog = 1;
        v104 = StringLiteral_5293/*"Disk full"*/;
        v9->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5293/*"Disk full"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6, v104, v97, v98, v99, v100, v101, v102);
        p_errorLocalizeCode_5__7 = (GrandQuestFolderBoardItem_o *)&v9->fields._errorLocalizeCode_5__7;
        v112 = StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/;
        v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/;
        goto LABEL_140;
      }
      Url = AssetData__get_Url((AssetData_o *)this, 0);
      v9->fields._url_5__12 = Url;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v9->fields._url_5__12,
        (int32_t)Url,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      url_5__12 = v9->fields._url_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0);
      v121 = _4__this->fields.data;
      v122 = this;
      if ( v9->fields._isEncrypted_5__2 )
      {
        if ( !v121 )
          goto LABEL_383;
        v123 = v121->fields.entryCount > 0;
      }
      else
      {
        if ( !v121 )
          goto LABEL_383;
        v123 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, 0);
      v125 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__12, (System_String_o *)v122, v123, Key, 0);
      _4__this->fields.loader = v125;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader,
        (int32_t)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v132 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v9->fields._asyncOperater_5__13 = v132;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v9->fields._asyncOperater_5__13,
        (int32_t)v132,
        v133,
        v134,
        v135,
        v136,
        v137,
        v138);
LABEL_77:
      p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__13;
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
      if ( !this )
LABEL_383:
        sub_1C942F0(this, method);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_asyncOperater_5__13;
        if ( !*p_asyncOperater_5__13 )
          goto LABEL_383;
        progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        loadProgress_5__9 = v9->fields._loadProgress_5__9;
        v142 = progress;
        v149 = UnityEngine_Time__get_unscaledTime(0);
        v150 = v142 == loadProgress_5__9;
        v151 = v149;
        if ( !v150 )
        {
          v497 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v497 = ManagerConfig_TypeInfo;
          }
          v498 = v497->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
          v9->fields._requestTime_5__8 = v151 + v498->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
LABEL_377:
          wait_5__10 = (Il2CppObject *)v9->fields._wait_5__10;
          v9->fields.__2__current = wait_5__10;
          v500 = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
          sub_1C9403C(v500, (int32_t)wait_5__10, v143, v144, v145, v146, v147, v148);
          v380 = 1;
          LODWORD(v500[-1].fields._ClosedMessage_k__BackingField) = 1;
          return v380;
        }
        if ( v149 < v9->fields._requestTime_5__8 )
          goto LABEL_377;
      }
      if ( !_4__this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v152 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0);
      if ( v152
        && (v153 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment,
            v152->klass->_2.naturalAligment >= (unsigned int)v153) )
      {
        v154 = (DownloadHandlerFileWithCrcCheck_c *)v152->klass->_2.typeHierarchy[v153 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? (DownloadHandlerFileWithCrcCheck_o *)v152
             : 0LL;
      }
      else
      {
        v154 = 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
      {
        v157 = System_String__Concat_64456008(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v9->fields._url_5__12,
                 (System_String_o *)StringLiteral_761/*")\n\nAssetBundle file download time over"*/,
                 0);
        v9->fields._errorCode_5__6 = v157;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6,
          (int32_t)v157,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        if ( v154 )
          DownloadHandlerFileWithCrcCheck__CloseStream(v154, 0);
        goto LABEL_139;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v155 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v155, 0) )
      {
        if ( !v154 )
        {
          crc = 0;
LABEL_126:
          HIDWORD(v507) = crc;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          if ( !this )
            goto LABEL_383;
          if ( crc == this->fields._autoRetryCount_5__3 )
          {
            AssetData__UpdateVersion((AssetData_o *)this, 0);
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(string___TypeInfo, 7);
            if ( !this )
              goto LABEL_383;
            v208 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_267;
            v209 = StringLiteral_650/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_650/*"("*/;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&this->fields.__4__this,
              v209,
              v202,
              v203,
              v204,
              v205,
              v206,
              v207);
            if ( LODWORD(v208->fields.__2__current) <= 1 )
              goto LABEL_267;
            v216 = v9->fields._url_5__12;
            v208->fields.resourceNames = (struct System_String_array *)v216;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields.resourceNames,
              (int32_t)v216,
              v210,
              v211,
              v212,
              v213,
              v214,
              v215);
            if ( LODWORD(v208->fields.__2__current) <= 2 )
              goto LABEL_267;
            v223 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v208->fields._isEncrypted_5__2 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields._isEncrypted_5__2,
              v223,
              v217,
              v218,
              v219,
              v220,
              v221,
              v222);
            v224 = _4__this->fields.data;
            if ( !v224 )
              goto LABEL_383;
            LODWORD(v507) = v224->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v507, 0);
            if ( LODWORD(v208->fields.__2__current) <= 3 )
              goto LABEL_267;
            *(_QWORD *)&v208->fields._isAutoRetry_5__4 = this;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields._isAutoRetry_5__4,
              (int32_t)this,
              v225,
              v226,
              v227,
              v228,
              v229,
              v230);
            if ( LODWORD(v208->fields.__2__current) <= 4 )
              goto LABEL_267;
            v237 = StringLiteral_762/*")\nfile crc ("*/;
            v208->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_762/*")\nfile crc ("*/;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields._errorCode_5__6,
              v237,
              v231,
              v232,
              v233,
              v234,
              v235,
              v236);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v507 + 4, 0);
            if ( LODWORD(v208->fields.__2__current) <= 5 )
              goto LABEL_267;
            v208->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields._errorLocalizeCode_5__7,
              (int32_t)this,
              v238,
              v239,
              v240,
              v241,
              v242,
              v243);
            if ( LODWORD(v208->fields.__2__current) <= 6 )
              goto LABEL_267;
            v250 = StringLiteral_756/*")"*/;
            *(_QWORD *)&v208->fields._requestTime_5__8 = StringLiteral_756/*")"*/;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v208->fields._requestTime_5__8,
              v250,
              v244,
              v245,
              v246,
              v247,
              v248,
              v249);
            v251 = System_String__Concat_64458276((System_String_array *)v208, 0);
            v9->fields._errorCode_5__6 = v251;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6,
              (int32_t)v251,
              v252,
              v253,
              v254,
              v255,
              v256,
              v257);
            v9->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_139;
        }
        if ( !v154->fields._error_k__BackingField )
        {
          crc = v154->fields.crc;
          goto LABEL_126;
        }
      }
      else if ( !v154 )
      {
LABEL_109:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        v185 = v9->fields._url_5__12;
        v186 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        v187 = System_String__Concat_64458012(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v185,
                 (System_String_o *)StringLiteral_758/*")\n\n"*/,
                 v186,
                 0);
        v9->fields._errorCode_5__6 = v187;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6,
          (int32_t)v187,
          v188,
          v189,
          v190,
          v191,
          v192,
          v193);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0);
        if ( !ResponseHeaders )
          goto LABEL_139;
        v195 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v195,
                (Il2CppObject *)StringLiteral_12403/*"STATUS"*/,
                &value,
                (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_139;
        }
        v196 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v196 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64466952(
                                                    (System_String_o *)v196,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0);
        if ( !this )
          goto LABEL_383;
        v197 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_139;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7274/*"HTTP"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_139;
        if ( LODWORD(v197->fields.__2__current) <= 1 )
          goto LABEL_267;
        this = (AssetLoader__LoadDataCR_d__29_o *)v197->fields.resourceNames;
        if ( !this )
          goto LABEL_383;
        if ( !System_String__Equals_64453064((System_String_o *)this, (System_String_o *)StringLiteral_1419/*"503"*/, 0) )
          goto LABEL_139;
        v198 = v9->fields._url_5__12;
        v199 = v9->fields._autoRetryCount_5__3 + 1;
        v9->fields._isAutoRetry_5__4 = 1;
        v9->fields._autoRetryCount_5__3 = v199;
        v200 = System_Int32__ToString((int)v9 + 52, 0);
        v201 = System_String__Concat_64458012(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v198,
                 (System_String_o *)StringLiteral_759/*")\n\n503 Auto retry count "*/,
                 v200,
                 0);
        v183 = (int)v201;
        v9->fields._errorCode_5__6 = v201;
        p_errorCode_5__6 = (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6;
        goto LABEL_108;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream(v154, 0);
      error_k__BackingField = v154->fields._error_k__BackingField;
      if ( !error_k__BackingField )
        goto LABEL_109;
      v171 = error_k__BackingField->klass;
      v172 = System_IO_IOException_TypeInfo->_2.naturalAligment;
      if ( error_k__BackingField->klass->_2.naturalAligment >= (unsigned int)v172
        && (System_IO_IOException_c *)v171->_2.typeHierarchy[v172 - 1] == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v176 = (System_String_o *)((__int64 (__fastcall *)(struct System_Exception_o *, const MethodInfo *))error_k__BackingField->klass->vtable._5_get_Message.methodPtr)(
                                    error_k__BackingField,
                                    error_k__BackingField->klass->vtable._5_get_Message.method);
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)((__int64 (*)(void))v171->vtable._3_ToString.methodPtr)();
        v173 = v154->fields._error_k__BackingField;
        if ( !v173 )
          goto LABEL_383;
        v174 = this;
        v175 = (System_String_o *)((System_String_o *(__fastcall *)(struct System_Exception_o *__return_ptr, struct System_Exception_o *, const MethodInfo *))v173->klass->vtable._5_get_Message.methodPtr)(
                                    v173,
                                    v173,
                                    v173->klass->vtable._5_get_Message.method);
        v176 = System_String__Concat_64458012(
                 (System_String_o *)StringLiteral_19213/*"error "*/,
                 (System_String_o *)v174,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v175,
                 0);
      }
      v183 = (int)v176;
      v9->fields._errorCode_5__6 = v176;
      p_errorCode_5__6 = (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6;
LABEL_108:
      sub_1C9403C(p_errorCode_5__6, v183, v177, v178, v179, v180, v181, v182);
LABEL_139:
      v9->fields._url_5__12 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._url_5__12, 0, v164, v165, v166, v167, v168, v169);
      p_errorLocalizeCode_5__7 = (GrandQuestFolderBoardItem_o *)&v9->fields._asyncOperater_5__13;
      v112 = 0;
      v9->fields._asyncOperater_5__13 = 0;
LABEL_140:
      sub_1C9403C(p_errorLocalizeCode_5__7, v112, v105, v106, v107, v108, v109, v110);
      method = (const MethodInfo *)v9->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v258 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v258 = ManagerConfig_TypeInfo;
        }
        if ( v258->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v259 = _4__this->fields.data;
          if ( !v259 )
            goto LABEL_383;
          v260 = (CommonUI_o *)this;
          v261 = System_String__Concat_64458012(
                   (System_String_o *)StringLiteral_2377/*"AssetName : "*/,
                   v259->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v9->fields._errorCode_5__6,
                   0);
          v262 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v262, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v260 )
            goto LABEL_383;
          v8 &= 0xFFFFFFFF00000000LL;
          LODWORD(effectDistance.fields.value.fields.y) = v8;
          *(_QWORD *)&effectDistance.fields.hasValue = 0;
          CommonUI__OpenWarningDialog(
            v260,
            (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
            v261,
            v262,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0);
LABEL_147:
          if ( _4__this->fields.isErrorDialog )
          {
            v449 = (Il2CppObject *)v9->fields._wait_5__10;
            v9->fields.__2__current = v449;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)v449, (int32_t)v2, v3, v4, v5, v6, v7);
            v28 = 2;
            goto LABEL_370;
          }
        }
        if ( v9->fields._isAutoRetry_5__4 )
        {
          autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
          v383 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v383 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v383->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v385 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v385, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
          v9->fields.__2__current = (Il2CppObject *)v385;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v385, v386, v387, v388, v389, v390, v391);
          v28 = 3;
          goto LABEL_370;
        }
        if ( !v9->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4D2B7C8 )
          {
            sub_1C94098(&ManagementManager_TypeInfo);
            byte_4D2B7C8 = 1;
          }
          v263 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v263 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v263->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
          v267 = (CommonUI_o *)Instance;
          v268 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v269 = v9->fields._errorLocalizeCode_5__7;
            else
              v269 = (System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v270 = LocalizationManager__Get(v269, 0);
            v271 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v271, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v267 )
              goto LABEL_383;
            CommonUI__OpenRetryBootDialog(v267, v268, v270, v271, 1, 0);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v272 = v9->fields._errorLocalizeCode_5__7;
            else
              v272 = (System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v273 = LocalizationManager__Get(v272, 0);
            v274 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v274, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v267 )
              goto LABEL_383;
            CommonUI__OpenRetryDialog(v267, v268, v273, v274, 1, 0);
          }
LABEL_171:
          if ( _4__this->fields.isErrorDialog )
          {
            v450 = (Il2CppObject *)v9->fields._wait_5__10;
            v9->fields.__2__current = v450;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)v450, (int32_t)v2, v3, v4, v5, v6, v7);
            v28 = 4;
            goto LABEL_370;
          }
        }
      }
LABEL_172:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D27B37 )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D27B37 = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_383;
      if ( *(_BYTE *)(*(_QWORD *)&this[1].fields._isEncrypted_5__2 + 144LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v452, v453, v454, v455, v456, v457);
        _4__this->fields.readData = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.readData, 0, v458, v459, v460, v461, v462, v463);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
        goto LABEL_310;
      v275 = _4__this->fields.loader;
      if ( v275 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v275, 0);
        _4__this->fields.loader = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v276, v277, v278, v279, v280, v281);
        _4__this->fields.readData = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.readData, 0, v282, v283, v284, v285, v286, v287);
      }
      if ( !v9->fields._isCrcError_5__5 )
      {
LABEL_303:
        v9->fields._errorCode_5__6 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6, 0, (int32_t)v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v9->fields._errorLocalizeCode_5__7,
          0,
          v394,
          v395,
          v396,
          v397,
          v398,
          v399);
        v9->fields._wait_5__10 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._wait_5__10, 0, v400, v401, v402, v403, v404, v405);
        goto LABEL_304;
      }
      v288 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v288);
      v9->fields._url_5__12 = ConfigFileAddress;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v9->fields._url_5__12,
        (int32_t)ConfigFileAddress,
        v290,
        v291,
        v292,
        v293,
        v294,
        v295);
LABEL_188:
      v296 = v9->fields._url_5__12;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v296, v11);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      if ( !_4__this )
        goto LABEL_383;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v304 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader,
        (int32_t)this,
        v298,
        v299,
        v300,
        v301,
        v302,
        v303);
      v305 = UnityEngine_Time__get_unscaledTime(0);
      v306 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v306 = ManagerConfig_TypeInfo;
      }
      v307 = v306->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      *(_WORD *)&v9->fields._isSizeChecked_5__14 = 0;
      v9->fields._requestTime_5__8 = v305 + v307;
      this = *v304;
      if ( !*v304 )
        goto LABEL_383;
      v308 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v9->fields._asyncOperater_5__13 = v308;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v9->fields._asyncOperater_5__13,
        (int32_t)v308,
        v309,
        v310,
        v311,
        v312,
        v313,
        v314);
LABEL_195:
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
      if ( !this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v9->fields._isSizeChecked_5__14 )
        {
          if ( !_4__this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_383;
          ResponseHeader = UnityEngine_Networking_UnityWebRequest__GetResponseHeader(
                             (UnityEngine_Networking_UnityWebRequest_o *)this,
                             (System_String_o *)StringLiteral_4692/*"Content-Length"*/,
                             0);
          if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
          {
            v9->fields._isSizeChecked_5__14 = 1;
            result = 0;
            System_UInt64__TryParse(ResponseHeader, &result, 0);
            freeSize_5__11 = v9->fields._freeSize_5__11;
            v323 = ManagerConfig_TypeInfo;
            if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v323 = ManagerConfig_TypeInfo;
            }
            if ( freeSize_5__11 < result + v323->static_fields->LIMIT_FREE_SIZE )
            {
              v9->fields._isDiskFull_5__15 = 1;
              goto LABEL_209;
            }
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
        if ( !this )
          goto LABEL_383;
        v324 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        v325 = v9->fields._loadProgress_5__9;
        v326 = v324;
        v327 = UnityEngine_Time__get_unscaledTime(0);
        v150 = v326 == v325;
        v328 = v327;
        if ( !v150 )
        {
          v501 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v501 = ManagerConfig_TypeInfo;
          }
          v502 = v501->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
          v9->fields._requestTime_5__8 = v328 + v502->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
          goto LABEL_382;
        }
        if ( v327 < v9->fields._requestTime_5__8 )
        {
LABEL_382:
          v503 = (Il2CppObject *)v9->fields._wait_5__10;
          v9->fields.__2__current = v503;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v503, v315, v316, v317, v318, v319, v320);
          v28 = 5;
          goto LABEL_370;
        }
      }
LABEL_209:
      v9->fields._errorCode_5__6 = 0;
      v329 = &v9->fields._errorCode_5__6;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6, 0, v315, v316, v317, v318, v319, v320);
      if ( !_4__this )
        goto LABEL_383;
      if ( v9->fields._isDiskFull_5__15 )
      {
        _4__this->fields.isErrorDialog = 1;
        v464 = StringLiteral_5293/*"Disk full"*/;
        v9->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5293/*"Disk full"*/;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6,
          v464,
          v330,
          v331,
          v332,
          v333,
          v334,
          v335);
        LODWORD(v465) = StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/;
        v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/;
        v466 = (GrandQuestFolderBoardItem_o *)&v9->fields._errorLocalizeCode_5__7;
        goto LABEL_343;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(_4__this->fields.loader, 0);
        v381 = &StringLiteral_2390/*"AssetStorageList download time over"*/;
        goto LABEL_341;
      }
      v336 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v336, 0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v467 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
        LODWORD(v465) = (_DWORD)v467;
        *v329 = v467;
LABEL_342:
        v466 = (GrandQuestFolderBoardItem_o *)&v9->fields._errorCode_5__6;
LABEL_343:
        sub_1C9403C(v466, v465, v339, v340, v341, v342, v343, v344);
        v468 = _4__this->fields.loader;
        if ( v468 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v468, 0);
          _4__this->fields.loader = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v469, v470, v471, v472, v473, v474);
        }
        if ( !*v329 )
          goto LABEL_369;
        v475 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v475 = ManagerConfig_TypeInfo;
        }
        if ( v475->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v476 = _4__this->fields.data;
          if ( !v476 )
            goto LABEL_383;
          v477 = (CommonUI_o *)this;
          v478 = System_String__Concat_64458012(
                   (System_String_o *)StringLiteral_2377/*"AssetName : "*/,
                   v476->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v329,
                   0);
          v479 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v479, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v477 )
            goto LABEL_383;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v477,
            (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
            v478,
            v479,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0);
LABEL_352:
          if ( _4__this->fields.isErrorDialog )
          {
            v480 = (Il2CppObject *)v9->fields._wait_5__10;
            v9->fields.__2__current = v480;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
            sub_1C9403C(p__2__current, (int32_t)v480, (int32_t)v2, v3, v4, v5, v6, v7);
            v28 = 6;
            goto LABEL_370;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4D2B7C8 )
        {
          sub_1C94098(&ManagementManager_TypeInfo);
          byte_4D2B7C8 = 1;
        }
        v481 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v481 = ManagementManager_TypeInfo;
        }
        v482 = v481->static_fields->isDuringStartup;
        v483 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v482 )
        {
          v484 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v485 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v485, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v483 )
            goto LABEL_383;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v483, (System_String_o *)StringLiteral_1/*""*/, v484, v485, 0, 0);
        }
        else
        {
          v486 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
          v487 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v487, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v483 )
            goto LABEL_383;
          CommonUI__OpenRetryDialog((CommonUI_o *)v483, (System_String_o *)StringLiteral_1/*""*/, v486, v487, 0, 0);
        }
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v488 = (Il2CppObject *)v9->fields._wait_5__10;
          v9->fields.__2__current = v488;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v488, (int32_t)v2, v3, v4, v5, v6, v7);
          v28 = 7;
        }
        else
        {
LABEL_369:
          v489 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v489, 1.0, 0);
          v9->fields.__2__current = (Il2CppObject *)v489;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v489, v490, v491, v492, v493, v494, v495);
          v28 = 8;
        }
LABEL_370:
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = v28;
        return 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  _4__this->fields.loader,
                                                  0);
      if ( !this )
        goto LABEL_383;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v338 = CatAndMouseGame__MouseGame3(text, 0);
      if ( System_String__IsNullOrEmpty(v338, 0) )
      {
        v381 = &StringLiteral_2388/*"AssetStorageList download error"*/;
        goto LABEL_341;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_383;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v338 )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_64474308(v338, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_383;
      v345 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25513/*"~"*/, 0) )
        goto LABEL_295;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v346 = (int)this->fields.__2__current;
      if ( !v346 )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = 13;
      if ( v346 == 1 )
        goto LABEL_267;
      WORD1(this->fields.__4__this) = 10;
      v347 = System_String__IndexOfAny((System_String_o *)v345, (System_Char_array *)this, 0);
      if ( v347 < 2 )
        goto LABEL_295;
      v348 = v347;
      v349 = System_String__Substring_64463684((System_String_o *)v345, 1, v347 - 1, 0);
      v350 = System_String__Substring((System_String_o *)v345, v348 + 1, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
      if ( !this )
        goto LABEL_383;
      v351 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                    this,
                                    v350,
                                    this->klass[1]._1.methods);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v352 = Crc32__Compute(v351, 0);
      if ( System_UInt32__Parse(v349, 0) != v352 )
      {
LABEL_295:
        v381 = &StringLiteral_2387/*"AssetStorageList download data error"*/;
LABEL_341:
        v465 = *v381;
        *v329 = (System_String_o *)*v381;
        goto LABEL_342;
      }
      if ( !v350 )
        goto LABEL_281;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v353 = (int)this->fields.__2__current;
      if ( !v353 || (LOWORD(this->fields.__4__this) = 13, v353 == 1) )
LABEL_267:
        sub_1C942F8(this);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64466952(v350, (System_Char_array *)this, 1, 0);
      if ( !this )
        goto LABEL_383;
      v354 = this->fields.__2__current;
      v355 = this;
      v356 = (_DWORD)v354 - 1;
      if ( (int)v354 < 1 )
        goto LABEL_281;
      v357 = 0;
      while ( 2 )
      {
        v358 = (System_String_o *)*((_QWORD *)&v355->fields.__4__this + v357);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C94140(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v358 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64466836(v358, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_383;
        v359 = this->fields.__2__current;
        v360 = this;
        if ( (int)v359 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1763/*"@"*/,
                                                      0);
          if ( !LODWORD(v360->fields.__2__current) )
            goto LABEL_267;
          v361 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v360->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          if ( (v361 & 1) != 0 )
          {
            v363 = System_String__Substring((System_String_o *)this, 1, 0);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v360->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v360->fields.resourceNames;
            v365 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v363, v365, v362);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_281;
            goto LABEL_265;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25513/*"~"*/,
                                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v360->fields.__2__current) )
              goto LABEL_267;
            this = (AssetLoader__LoadDataCR_d__29_o *)v360->fields.__4__this;
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
            if ( (_DWORD)this != 1 )
            {
              v359 = v360->fields.__2__current;
              break;
            }
          }
LABEL_265:
          if ( v356 == v357 )
            goto LABEL_281;
          if ( (unsigned int)++v357 >= LODWORD(v355->fields.__2__current) )
            goto LABEL_267;
          continue;
        }
        break;
      }
      if ( (_DWORD)v359 != 5 )
        goto LABEL_281;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v360->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_383;
      v366 = System_String__Trim((System_String_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v366, 0);
      if ( LODWORD(v360->fields.__2__current) <= 4 )
        goto LABEL_267;
      v367 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_265;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame((AssetData_o *)this, v360->fields._errorCode_5__6, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_265;
      v368 = _4__this->fields.data;
      if ( !v368 )
        goto LABEL_383;
      if ( v367 == v368->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4D2B7C8 )
        {
          sub_1C94098(&ManagementManager_TypeInfo);
          byte_4D2B7C8 = 1;
        }
        v369 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v369 = ManagementManager_TypeInfo;
        }
        v370 = v369->static_fields->isDuringStartup;
        v371 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v370 )
        {
          v372 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v373 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v373, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( v371 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v371, (System_String_o *)StringLiteral_1/*""*/, v372, v373, 1, 0);
            goto LABEL_301;
          }
          goto LABEL_383;
        }
        v392 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v393 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v393, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !v371 )
          goto LABEL_383;
        CommonUI__OpenRetryDialog((CommonUI_o *)v371, (System_String_o *)StringLiteral_1/*""*/, v392, v393, 1, 0);
LABEL_301:
        if ( !_4__this->fields.isErrorDialog )
        {
          v9->fields._url_5__12 = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._url_5__12, 0, (int32_t)v2, v3, v4, v5, v6, v7);
          goto LABEL_303;
        }
        v451 = (Il2CppObject *)v9->fields._wait_5__10;
        v9->fields.__2__current = v451;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)v451, (int32_t)v2, v3, v4, v5, v6, v7);
        v28 = 9;
        goto LABEL_370;
      }
LABEL_281:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4D2B7C8 )
      {
        sub_1C94098(&ManagementManager_TypeInfo);
        byte_4D2B7C8 = 1;
      }
      v374 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v374 = ManagementManager_TypeInfo;
      }
      v375 = v374->static_fields->isDuringStartup;
      v376 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v375 )
          goto LABEL_289;
LABEL_291:
        v377 = &StringLiteral_9262/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v375 )
          goto LABEL_291;
LABEL_289:
        v377 = &StringLiteral_9263/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v378 = LocalizationManager__Get((System_String_o *)*v377, 0);
      v379 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v379, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
      if ( !v376 )
        goto LABEL_383;
      CommonUI__OpenErrorDialog((CommonUI_o *)v376, (System_String_o *)StringLiteral_1/*""*/, v378, v379, 0, 0);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._req_5__16;
      v9->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      if ( !_4__this )
        goto LABEL_383;
      v36 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0);
      if ( !v36 )
        goto LABEL_383;
      v37 = AssetData__SetAssetBundleData(v36, (UnityEngine_AssetBundle_o *)this, v9->fields.resourceNames, 0);
      v9->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v9->fields.__2__current;
      sub_1C9403C(p__2__current, (int32_t)v37, v38, v39, v40, v41, v42, v43);
      v28 = 13;
      goto LABEL_370;
    case 0xD:
      v9->fields.__1__state = -1;
LABEL_38:
      v9->fields._req_5__16 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields._req_5__16, 0, (int32_t)v2, v3, v4, v5, v6, v7);
      if ( _4__this )
        goto LABEL_39;
      goto LABEL_383;
    default:
      return 0;
  }
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B7D6 & 1) == 0 )
  {
    sub_1C94098(&AssetLoader___c_TypeInfo);
    byte_4D2B7D6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AssetLoader___c_TypeInfo->static_fields,
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

  if ( (byte_4D2B7D7 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  return BYTE4(Instance[7].monitor) == 0;
}