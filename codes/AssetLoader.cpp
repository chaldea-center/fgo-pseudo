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
    sub_2213CDC(0, method);
  AssetData__AddEntry(data, 0);
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
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

  if ( (byte_596F746 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_14739/*"The request timed out."*/);
    sub_2213A60(&StringLiteral_22110/*"java.net.SocketException"*/);
    sub_2213A60(&StringLiteral_12815/*"SSL CA certificate error"*/);
    sub_2213A60(&StringLiteral_1491/*"404: Not Found"*/);
    sub_2213A60(&StringLiteral_14679/*"The network connection was lost."*/);
    sub_2213A60(&StringLiteral_1485/*"400: Bad Request"*/);
    sub_2213A60(&StringLiteral_15495/*"Unable to complete SSL connection"*/);
    sub_2213A60(&StringLiteral_15525/*"Unable to read data"*/);
    sub_2213A60(&StringLiteral_19030/*"connect failed"*/);
    sub_2213A60(&StringLiteral_7564/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_2213A60(&StringLiteral_22112/*"java.net.UnknownHostException"*/);
    sub_2213A60(&StringLiteral_1499/*"500: Internal Server Error"*/);
    sub_2213A60(&StringLiteral_1501/*"502:"*/);
    sub_2213A60(&StringLiteral_11836/*"Request timeout"*/);
    sub_2213A60(&StringLiteral_4842/*"Connection reset by peer"*/);
    sub_2213A60(&StringLiteral_5210/*"DLErrorType"*/);
    sub_2213A60(&StringLiteral_5209/*"DLErrorAsset"*/);
    sub_2213A60(&StringLiteral_1513/*"504: Gateway Timeout"*/);
    sub_2213A60(&StringLiteral_15696/*"Unknown Error"*/);
    sub_2213A60(&StringLiteral_1503/*"503 Auto retry count"*/);
    sub_2213A60(&StringLiteral_22094/*"java.io.EOFException"*/);
    sub_2213A60(&StringLiteral_22107/*"java.net.ConnectException"*/);
    sub_2213A60(&StringLiteral_1489/*"403: Forbidden"*/);
    sub_2213A60(&StringLiteral_4841/*"Connection refused"*/);
    sub_2213A60(&StringLiteral_7565/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_2213A60(&StringLiteral_1487/*"401: Authorization Required"*/);
    sub_2213A60(&StringLiteral_22095/*"java.io.IOException"*/);
    sub_2213A60(&StringLiteral_9846/*"No address associated with hostname"*/);
    sub_2213A60(&StringLiteral_22109/*"java.net.ProtocolException"*/);
    sub_2213A60(&StringLiteral_2482/*"AssetBundle file download time over"*/);
    sub_2213A60(&StringLiteral_1492/*"408: Request Time-out"*/);
    sub_2213A60(&StringLiteral_15138/*"Too many redirects"*/);
    sub_2213A60(&StringLiteral_13470/*"Software caused connection abort"*/);
    sub_2213A60(&StringLiteral_2481/*"AssetBundle file check sum error"*/);
    sub_2213A60(&StringLiteral_22108/*"java.net.NoRouteToHostException"*/);
    sub_2213A60(&StringLiteral_5441/*"Destination host has an erroneous SSL certificate"*/);
    sub_2213A60(&StringLiteral_4843/*"Connection timed out"*/);
    sub_2213A60(&StringLiteral_4399/*"Cannot resolve destination host"*/);
    sub_2213A60(&StringLiteral_22111/*"java.net.SocketTimeoutException"*/);
    sub_2213A60(&StringLiteral_2485/*"AssetLoadError"*/);
    byte_596F746 = 1;
  }
  Instance = sub_2213B20(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v13 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_57;
  v14 = StringLiteral_9846/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9846/*"No address associated with hostname"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_57;
  v21 = StringLiteral_2482/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_2482/*"AssetBundle file download time over"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v13 + 24) <= 2u )
    goto LABEL_57;
  v28 = StringLiteral_14679/*"The network connection was lost."*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_14679/*"The network connection was lost."*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_57;
  v35 = StringLiteral_4842/*"Connection reset by peer"*/;
  *(_QWORD *)(v13 + 56) = StringLiteral_4842/*"Connection reset by peer"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v13 + 24) <= 4u )
    goto LABEL_57;
  v42 = StringLiteral_13470/*"Software caused connection abort"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_13470/*"Software caused connection abort"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v13 + 24) <= 5u )
    goto LABEL_57;
  v49 = StringLiteral_4843/*"Connection timed out"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_4843/*"Connection timed out"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v13 + 24) <= 6u )
    goto LABEL_57;
  v56 = StringLiteral_4841/*"Connection refused"*/;
  *(_QWORD *)(v13 + 80) = StringLiteral_4841/*"Connection refused"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_57;
  v63 = StringLiteral_14739/*"The request timed out."*/;
  *(_QWORD *)(v13 + 88) = StringLiteral_14739/*"The request timed out."*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 88), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v13 + 24) <= 8u )
    goto LABEL_57;
  v70 = StringLiteral_4399/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v13 + 96) = StringLiteral_4399/*"Cannot resolve destination host"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 96), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v13 + 24) <= 9u )
    goto LABEL_57;
  v77 = StringLiteral_15495/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v13 + 104) = StringLiteral_15495/*"Unable to complete SSL connection"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 104), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v13 + 24) <= 0xAu )
    goto LABEL_57;
  v84 = StringLiteral_15696/*"Unknown Error"*/;
  *(_QWORD *)(v13 + 112) = StringLiteral_15696/*"Unknown Error"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 112), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v13 + 24) <= 0xBu )
    goto LABEL_57;
  v91 = StringLiteral_11836/*"Request timeout"*/;
  *(_QWORD *)(v13 + 120) = StringLiteral_11836/*"Request timeout"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 120), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v13 + 24) <= 0xCu )
    goto LABEL_57;
  v98 = StringLiteral_2481/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v13 + 128) = StringLiteral_2481/*"AssetBundle file check sum error"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 128), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v13 + 24) <= 0xDu )
    goto LABEL_57;
  v105 = StringLiteral_12815/*"SSL CA certificate error"*/;
  *(_QWORD *)(v13 + 136) = StringLiteral_12815/*"SSL CA certificate error"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 136), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v13 + 24) <= 0xEu )
    goto LABEL_57;
  v112 = StringLiteral_7564/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v13 + 144) = StringLiteral_7564/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 144), v112, v106, v107, v108, v109, v110, v111);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFF0) == 0 )
    goto LABEL_57;
  v119 = StringLiteral_7565/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v13 + 152) = StringLiteral_7565/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 152), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v13 + 24) <= 0x10u )
    goto LABEL_57;
  v126 = StringLiteral_5441/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v13 + 160) = StringLiteral_5441/*"Destination host has an erroneous SSL certificate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 160), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v13 + 24) <= 0x11u )
    goto LABEL_57;
  v133 = StringLiteral_15138/*"Too many redirects"*/;
  *(_QWORD *)(v13 + 168) = StringLiteral_15138/*"Too many redirects"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 168), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v13 + 24) <= 0x12u )
    goto LABEL_57;
  v140 = StringLiteral_22094/*"java.io.EOFException"*/;
  *(_QWORD *)(v13 + 176) = StringLiteral_22094/*"java.io.EOFException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 176), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v13 + 24) <= 0x13u )
    goto LABEL_57;
  v147 = StringLiteral_22110/*"java.net.SocketException"*/;
  *(_QWORD *)(v13 + 184) = StringLiteral_22110/*"java.net.SocketException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 184), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v13 + 24) <= 0x14u )
    goto LABEL_57;
  v154 = StringLiteral_22111/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v13 + 192) = StringLiteral_22111/*"java.net.SocketTimeoutException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 192), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v13 + 24) <= 0x15u )
    goto LABEL_57;
  v161 = StringLiteral_22108/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v13 + 200) = StringLiteral_22108/*"java.net.NoRouteToHostException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 200), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v13 + 24) <= 0x16u )
    goto LABEL_57;
  v168 = StringLiteral_22095/*"java.io.IOException"*/;
  *(_QWORD *)(v13 + 208) = StringLiteral_22095/*"java.io.IOException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 208), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v13 + 24) <= 0x17u )
    goto LABEL_57;
  v175 = StringLiteral_22107/*"java.net.ConnectException"*/;
  *(_QWORD *)(v13 + 216) = StringLiteral_22107/*"java.net.ConnectException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 216), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v13 + 24) <= 0x18u )
    goto LABEL_57;
  v182 = StringLiteral_19030/*"connect failed"*/;
  *(_QWORD *)(v13 + 224) = StringLiteral_19030/*"connect failed"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 224), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v13 + 24) <= 0x19u )
    goto LABEL_57;
  v189 = StringLiteral_22109/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v13 + 232) = StringLiteral_22109/*"java.net.ProtocolException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 232), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Au )
    goto LABEL_57;
  v196 = StringLiteral_22112/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v13 + 240) = StringLiteral_22112/*"java.net.UnknownHostException"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 240), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Bu )
    goto LABEL_57;
  v203 = StringLiteral_1485/*"400: Bad Request"*/;
  *(_QWORD *)(v13 + 248) = StringLiteral_1485/*"400: Bad Request"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 248), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Cu )
    goto LABEL_57;
  v210 = StringLiteral_1487/*"401: Authorization Required"*/;
  *(_QWORD *)(v13 + 256) = StringLiteral_1487/*"401: Authorization Required"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 256), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Du )
    goto LABEL_57;
  v217 = StringLiteral_1489/*"403: Forbidden"*/;
  *(_QWORD *)(v13 + 264) = StringLiteral_1489/*"403: Forbidden"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 264), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Eu )
    goto LABEL_57;
  v224 = StringLiteral_1491/*"404: Not Found"*/;
  *(_QWORD *)(v13 + 272) = StringLiteral_1491/*"404: Not Found"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 272), v224, v218, v219, v220, v221, v222, v223);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFE0) == 0 )
    goto LABEL_57;
  v231 = StringLiteral_1492/*"408: Request Time-out"*/;
  *(_QWORD *)(v13 + 280) = StringLiteral_1492/*"408: Request Time-out"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 280), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v13 + 24) <= 0x20u )
    goto LABEL_57;
  v238 = StringLiteral_1499/*"500: Internal Server Error"*/;
  *(_QWORD *)(v13 + 288) = StringLiteral_1499/*"500: Internal Server Error"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 288), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v13 + 24) <= 0x21u )
    goto LABEL_57;
  v245 = StringLiteral_1501/*"502:"*/;
  *(_QWORD *)(v13 + 296) = StringLiteral_1501/*"502:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 296), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v13 + 24) <= 0x22u
    || (v252 = StringLiteral_1503/*"503 Auto retry count"*/,
        *(_QWORD *)(v13 + 304) = StringLiteral_1503/*"503 Auto retry count"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 304), v252, v246, v247, v248, v249, v250, v251),
        *(_DWORD *)(v13 + 24) <= 0x23u)
    || (v259 = StringLiteral_1513/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v13 + 312) = StringLiteral_1513/*"504: Gateway Timeout"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 312), v259, v253, v254, v255, v256, v257, v258),
        *(_DWORD *)(v13 + 24) <= 0x24u) )
  {
LABEL_57:
    sub_2213CE4(Instance);
  }
  v266 = StringLiteral_15525/*"Unable to read data"*/;
  *(_QWORD *)(v13 + 320) = StringLiteral_15525/*"Unable to read data"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 320), v266, v260, v261, v262, v263, v264, v265);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v270 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0), !v270) )
  {
LABEL_58:
    sub_2213CDC(Instance, v6);
  }
  CrashReporter__AddCustomKey(v270, (System_String_o *)StringLiteral_5209/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v268 >= *(_DWORD *)(v13 + 24) )
    goto LABEL_57;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5210/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v268),
    0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v271, v272);
  errorCode = (System_String_o *)StringLiteral_2485/*"AssetLoadError"*/;
LABEL_56:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_596F743 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F743 = 1;
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
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)this, 0);
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
  sub_2213A04(
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
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0);
  return (char)data;
}


bool AssetLoader__IsSame_47476532(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_47468396(data, type, name, 0);
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

  if ( (byte_596F742 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_596F742 = 1;
  }
  v5 = sub_2213CCC(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)resourceNames, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_596F744 & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    byte_596F744 = 1;
  }
  readData = this->fields.readData;
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, method, v2);
  v5 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._decData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_596F745 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&ManagementManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596F745 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loader, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.readData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v16, v17);
  if ( !byte_596F739 )
  {
    sub_2213A60(&ManagementManager_TypeInfo);
    byte_596F739 = 1;
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
    UnityEngine_Application__Quit_83177108(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v20);
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
  __int64 v11; // x1
  AssetData_o *v12; // x0
  bool IsNeedUpdateVersion; // w0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callbackFunc,
    (System_String_o *)resourceNames,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v12 )
    sub_2213CDC(0, v11);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v12, 0);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
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
      sub_2213CDC(0, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_threadDecrypt, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596F73E & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_596F73E = 1;
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
    v11 = sub_224B48C(p_endCallback, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetLoader_LoadEndHandler_TypeInfo, v9, v10);
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

  if ( (byte_596F740 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596F740 = 1;
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
    v11 = sub_224B48C(p_endCallback2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
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

  if ( (byte_596F73F & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_596F73F = 1;
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
    v11 = sub_224B48C(p_endCallback, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetLoader_LoadEndHandler_TypeInfo, v9, v10);
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

  if ( (byte_596F741 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596F741 = 1;
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
    v11 = sub_224B48C(p_endCallback2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200C798;
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
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_200C890;
          else
            v13 = sub_200C854;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_200C7D0;
        }
        else
        {
          v13 = sub_200C7A8;
        }
      }
      else
      {
        v13 = sub_200C77C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_200C734;
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
  return sub_2213A14(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200C5B0;
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
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_200C6A8;
          else
            v13 = sub_200C66C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_200C5E8;
        }
        else
        {
          v13 = sub_200C5C0;
        }
      }
      else
      {
        v13 = sub_200C594;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_200C54C;
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
  return sub_2213A14(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v8; // x28
  AssetLoader__LoadDataCR_d__29_o *v9; // x19
  int32_t _1__state; // w8
  struct AssetLoader_o *_4__this; // x20
  bool IsAssetBundle; // w0
  AssetLoader__LoadDataCR_d__29_o **p_loader; // x21
  System_String_o *error; // x0
  bool IsNullOrEmpty; // w8
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 naturalAligment; // x10
  System_Byte_array *data; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Byte_array *readData; // x22
  uint32_t klass; // w8
  AssetData_o *v29; // x20
  System_Collections_IEnumerator_o *v30; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int v38; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x1
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  MissionNaviTransitionBoardItem_o *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x1
  __int64 v89; // x2
  float unscaledTime; // s8
  ManagerConfig_c *v91; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_c *v93; // x0
  UnityEngine_WaitForEndOfFrame_o *v94; // x23
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  const MethodInfo *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  int64_t v112; // x23
  int32_t v113; // w1
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  MissionNaviTransitionBoardItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v121; // w1
  System_String_o *Url; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *url_5__12; // x21
  struct AssetData_o *v130; // x8
  AssetLoader__LoadDataCR_d__29_o *v131; // x22
  bool v132; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v134; // x0
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v141; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__13; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v151; // s8
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  float v158; // s0
  bool v159; // zf
  float v160; // s8
  UnityEngine_Networking_DownloadHandler_o *v161; // x0
  DownloadHandlerFileWithCrcCheck_o *v162; // x22
  __int64 v163; // x10
  System_String_o *v164; // x0
  uint32_t crc; // w8
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  System_String_o *v172; // x0
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  struct System_Exception_o *error_k__BackingField; // x0
  System_Exception_c *v180; // x8
  __int64 v181; // x10
  struct System_Exception_o *v182; // x8
  AssetLoader__LoadDataCR_d__29_o *v183; // x22
  System_String_o *v184; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  int32_t v192; // w1
  MissionNaviTransitionBoardItem_o *p_errorCode_5__6; // x0
  System_String_o *v194; // x22
  System_String_o *v195; // x0
  System_String_o *v196; // x0
  System_String_o *v197; // x2
  System_String_o *v198; // x3
  int32_t v199; // w4
  int32_t v200; // w5
  bool v201; // w6
  bool v202; // w7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v204; // x23
  Il2CppObject *v205; // x23
  AssetLoader__LoadDataCR_d__29_o *v206; // x23
  int32_t autoRetryCount_5__3; // w8
  System_String_o *v208; // x24
  System_String_o *v209; // x0
  System_String_o *v210; // x0
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  AssetLoader__LoadDataCR_d__29_o *v217; // x22
  int32_t v218; // w1
  System_String_o *v219; // x2
  System_String_o *v220; // x3
  int32_t v221; // w4
  int32_t v222; // w5
  bool v223; // w6
  bool v224; // w7
  struct System_String_o *v225; // x1
  System_String_o *v226; // x2
  System_String_o *v227; // x3
  int32_t v228; // w4
  int32_t v229; // w5
  bool v230; // w6
  bool v231; // w7
  int32_t v232; // w1
  struct AssetData_o *v233; // x8
  System_String_o *v234; // x2
  System_String_o *v235; // x3
  int32_t v236; // w4
  int32_t v237; // w5
  bool v238; // w6
  bool v239; // w7
  System_String_o *v240; // x2
  System_String_o *v241; // x3
  int32_t v242; // w4
  int32_t v243; // w5
  bool v244; // w6
  bool v245; // w7
  int32_t v246; // w1
  System_String_o *v247; // x2
  System_String_o *v248; // x3
  int32_t v249; // w4
  int32_t v250; // w5
  bool v251; // w6
  bool v252; // w7
  System_String_o *v253; // x2
  System_String_o *v254; // x3
  int32_t v255; // w4
  int32_t v256; // w5
  bool v257; // w6
  bool v258; // w7
  int32_t v259; // w1
  System_String_o *v260; // x0
  System_String_o *v261; // x2
  System_String_o *v262; // x3
  int32_t v263; // w4
  int32_t v264; // w5
  bool v265; // w6
  bool v266; // w7
  ManagerConfig_c *v267; // x0
  struct AssetData_o *v268; // x8
  CommonUI_o *v269; // x21
  System_String_o *v270; // x22
  ErrorDialog_ClickDelegate_o *v271; // x23
  ManagementManager_c *v272; // x0
  _BOOL4 isDuringStartup; // w23
  __int64 v274; // x1
  __int64 v275; // x2
  Il2CppObject *Instance; // x22
  struct System_String_o *errorLocalizeCode_5__7; // x10
  System_String_o *v278; // x21
  int v279; // w9
  System_String_o *v280; // x23
  System_String_o *v281; // x23
  ErrorDialog_ClickDelegate_o *v282; // x24
  System_String_o *v283; // x23
  System_String_o *v284; // x23
  ErrorDialog_ClickDelegate_o *v285; // x24
  UnityEngine_Networking_UnityWebRequest_o *v286; // x0
  System_String_o *v287; // x2
  System_String_o *v288; // x3
  int32_t v289; // w4
  int32_t v290; // w5
  bool v291; // w6
  bool v292; // w7
  System_String_o *v293; // x2
  System_String_o *v294; // x3
  int32_t v295; // w4
  int32_t v296; // w5
  bool v297; // w6
  bool v298; // w7
  AssetManager_c *v299; // x0
  System_String_o *ConfigFileAddress; // x0
  System_String_o *v301; // x2
  System_String_o *v302; // x3
  int32_t v303; // w4
  int32_t v304; // w5
  bool v305; // w6
  bool v306; // w7
  System_String_o *v307; // x21
  System_String_o *UrlString; // x0
  System_String_o *v309; // x2
  System_String_o *v310; // x3
  int32_t v311; // w4
  int32_t v312; // w5
  bool v313; // w6
  bool v314; // w7
  __int64 v315; // x2
  float v316; // s8
  ManagerConfig_c *v317; // x0
  struct ManagerConfig_StaticFields *v318; // x8
  float v319; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v320; // x0
  System_String_o *v321; // x2
  System_String_o *v322; // x3
  int32_t v323; // w4
  int32_t v324; // w5
  bool v325; // w6
  bool v326; // w7
  System_String_o *v327; // x2
  System_String_o *v328; // x3
  int32_t v329; // w4
  int32_t v330; // w5
  bool v331; // w6
  bool v332; // w7
  System_String_o *ResponseHeader; // x21
  uint64_t freeSize_5__11; // x21
  ManagerConfig_c *v335; // x0
  float v336; // s0
  float v337; // s9
  float v338; // s8
  float v339; // s0
  float v340; // s8
  System_String_o **v341; // x21
  System_String_o *v342; // x2
  System_String_o *v343; // x3
  int32_t v344; // w4
  int32_t v345; // w5
  bool v346; // w6
  bool v347; // w7
  bool isDone; // w8
  System_String_o *v349; // x0
  bool v350; // w8
  __int64 v351; // x1
  __int64 v352; // x2
  System_String_o *text; // x22
  System_String_o *v354; // x22
  System_String_o *v355; // x2
  System_String_o *v356; // x3
  int32_t v357; // w4
  int32_t v358; // w5
  bool v359; // w6
  bool v360; // w7
  AssetLoader__LoadDataCR_d__29_o *v361; // x22
  int v362; // w8
  int32_t v363; // w0
  int32_t v364; // w24
  System_String_o *v365; // x23
  System_String_o *v366; // x22
  __int64 v367; // x1
  __int64 v368; // x2
  System_Byte_array *v369; // x24
  uint32_t v370; // w24
  int v371; // w8
  __int64 _2__current_low; // x29
  AssetLoader__LoadDataCR_d__29_o *v373; // x21
  unsigned __int64 v374; // x26
  System_String_o *v375; // x22
  Il2CppObject *v376; // x8
  AssetLoader__LoadDataCR_d__29_o *v377; // x22
  __int64 v378; // x1
  const MethodInfo *v379; // x2
  System_String_o *v380; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v382; // x22
  System_String_o *v383; // x0
  int v384; // w23
  struct AssetData_o *v385; // x8
  ManagementManager_c *v386; // x0
  _BOOL4 v387; // w22
  __int64 v388; // x1
  __int64 v389; // x2
  Il2CppObject *v390; // x21
  int v391; // w9
  System_String_o *v392; // x22
  ErrorDialog_ClickDelegate_o *v393; // x23
  ManagementManager_c *v394; // x0
  _BOOL4 v395; // w21
  __int64 v396; // x1
  __int64 v397; // x2
  Il2CppObject *v398; // x19
  int v399; // w9
  __int64 *v400; // x8
  System_String_o *v401; // x21
  ErrorDialog_ClickDelegate_o *v402; // x22
  __int64 *v404; // x8
  System_String_o *v405; // x22
  ErrorDialog_ClickDelegate_o *v406; // x23
  System_String_o *v407; // x2
  System_String_o *v408; // x3
  int32_t v409; // w4
  int32_t v410; // w5
  bool v411; // w6
  bool v412; // w7
  System_String_o *v413; // x2
  System_String_o *v414; // x3
  int32_t v415; // w4
  int32_t v416; // w5
  bool v417; // w6
  bool v418; // w7
  Il2CppObject *_2__current; // x21
  AssetData_o *v420; // x22
  AssetLoader__LoadDataCR_d__29_o **v421; // x21
  __int64 v422; // x10
  __int64 v423; // x10
  System_Byte_array *v424; // x0
  UnityEngine_AssetBundleCreateRequest_o *v425; // x0
  System_String_o *v426; // x2
  System_String_o *v427; // x3
  int32_t v428; // w4
  int32_t v429; // w5
  bool v430; // w6
  bool v431; // w7
  System_String_o *v432; // x2
  System_String_o *v433; // x3
  int32_t v434; // w4
  int32_t v435; // w5
  bool v436; // w6
  bool v437; // w7
  Il2CppObject *req_5__16; // x1
  System_String_o *v439; // x2
  System_String_o *v440; // x3
  int32_t v441; // w4
  int32_t v442; // w5
  bool v443; // w6
  bool v444; // w7
  AssetLoader___c_c *v445; // x0
  struct AssetLoader___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v448; // x21
  struct AssetLoader___c_StaticFields *v449; // x0
  System_String_o *v450; // x2
  System_String_o *v451; // x3
  int32_t v452; // w4
  int32_t v453; // w5
  bool v454; // w6
  bool v455; // w7
  UnityEngine_WaitUntil_o *v456; // x21
  System_String_o *v457; // x2
  System_String_o *v458; // x3
  int32_t v459; // w4
  int32_t v460; // w5
  bool v461; // w6
  bool v462; // w7
  int v463; // w20
  ManagerConfig_c *v464; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v466; // x0
  float v467; // s0
  Il2CppObject *v468; // x20
  System_String_o *v469; // x2
  System_String_o *v470; // x3
  int32_t v471; // w4
  int32_t v472; // w5
  bool v473; // w6
  bool v474; // w7
  Il2CppObject *v475; // x1
  Il2CppObject *v476; // x1
  Il2CppObject *v477; // x1
  System_String_o *v478; // x2
  System_String_o *v479; // x3
  int32_t v480; // w4
  int32_t v481; // w5
  bool v482; // w6
  bool v483; // w7
  System_String_o *v484; // x2
  System_String_o *v485; // x3
  int32_t v486; // w4
  int32_t v487; // w5
  bool v488; // w6
  bool v489; // w7
  int32_t v490; // w1
  __int64 v491; // x1
  MissionNaviTransitionBoardItem_o *v492; // x0
  System_String_o *v493; // x0
  UnityEngine_Networking_UnityWebRequest_o *v494; // x0
  System_String_o *v495; // x2
  System_String_o *v496; // x3
  int32_t v497; // w4
  int32_t v498; // w5
  bool v499; // w6
  bool v500; // w7
  ManagerConfig_c *v501; // x0
  struct AssetData_o *v502; // x8
  CommonUI_o *v503; // x22
  System_String_o *v504; // x21
  ErrorDialog_ClickDelegate_o *v505; // x23
  Il2CppObject *v506; // x1
  ManagementManager_c *v507; // x0
  _BOOL4 v508; // w22
  __int64 v509; // x1
  __int64 v510; // x2
  Il2CppObject *v511; // x21
  int v512; // w9
  System_String_o *v513; // x22
  ErrorDialog_ClickDelegate_o *v514; // x23
  System_String_o *v515; // x22
  ErrorDialog_ClickDelegate_o *v516; // x23
  Il2CppObject *v517; // x1
  UnityEngine_WaitForSeconds_o *v518; // x20
  System_String_o *v519; // x2
  System_String_o *v520; // x3
  int32_t v521; // w4
  int32_t v522; // w5
  bool v523; // w6
  bool v524; // w7
  UnityEngine_Networking_DownloadHandler_o *v525; // x0
  ManagerConfig_c *v526; // x0
  struct ManagerConfig_StaticFields *v527; // x8
  Il2CppObject *wait_5__10; // x1
  MissionNaviTransitionBoardItem_o *v529; // x19
  ManagerConfig_c *v530; // x0
  struct ManagerConfig_StaticFields *v531; // x8
  Il2CppObject *v532; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v536; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v9 = this;
  if ( (byte_596F749 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetLoader_EndRebootDialog__);
    sub_2213A60(&Method_AssetLoader_EndRetryDialog__);
    sub_2213A60(&Method_AssetLoader_EndWarningDialog__);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&CommonServicePluginScript_TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_2213A60(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_2213A60(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&System_IO_IOException_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ManagementManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_2213A60(&AssetLoader___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_9627/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_2213A60(&StringLiteral_7561/*"HTTP"*/);
    sub_2213A60(&StringLiteral_5483/*"Disk full"*/);
    sub_2213A60(&StringLiteral_2499/*"AssetStorageList download time over"*/);
    sub_2213A60(&StringLiteral_9636/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_2486/*"AssetName : "*/);
    sub_2213A60(&StringLiteral_792/*")\n\n503 Auto retry count "*/);
    sub_2213A60(&StringLiteral_795/*")\nfile crc ("*/);
    sub_2213A60(&StringLiteral_1502/*"503"*/);
    sub_2213A60(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16551/*"[FFFF80]Download error for debug"*/);
    sub_2213A60(&StringLiteral_2496/*"AssetStorageList download data error"*/);
    sub_2213A60(&StringLiteral_4867/*"Content-Length"*/);
    sub_2213A60(&StringLiteral_26661/*"~"*/);
    sub_2213A60(&StringLiteral_12872/*"STATUS"*/);
    sub_2213A60(&StringLiteral_791/*")\n\n"*/);
    sub_2213A60(&StringLiteral_9626/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_2213A60(&StringLiteral_681/*"("*/);
    sub_2213A60(&StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    sub_2213A60(&StringLiteral_19958/*"error "*/);
    sub_2213A60(&StringLiteral_1851/*"@"*/);
    sub_2213A60(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2497/*"AssetStorageList download error"*/);
    sub_2213A60(&StringLiteral_794/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F749 = 1;
  }
  _1__state = v9->fields.__1__state;
  v536 = 0;
  value = 0;
  result = 0;
  _4__this = v9->fields.__4__this;
  switch ( _1__state )
  {
    case 0:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_392;
      IsAssetBundle = AssetData__get_IsAssetBundle((AssetData_o *)this, 0);
      v9->fields._autoRetryCount_5__3 = 0;
      v9->fields._isEncrypted_5__2 = IsAssetBundle;
      goto LABEL_56;
    case 1:
      v9->fields.__1__state = -1;
      goto LABEL_74;
    case 2:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      goto LABEL_142;
    case 3:
      v9->fields.__1__state = -1;
      goto LABEL_167;
    case 4:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      goto LABEL_166;
    case 5:
      v9->fields.__1__state = -1;
      goto LABEL_190;
    case 6:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      goto LABEL_359;
    case 7:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      goto LABEL_376;
    case 8:
      v9->fields._asyncOperater_5__13 = 0;
      v9->fields.__1__state = -1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._asyncOperater_5__13, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_183;
    case 9:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      goto LABEL_301;
    case 10:
      v9->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( this )
          goto LABEL_46;
      }
      goto LABEL_392;
    case 11:
      v9->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_392;
      p_loader = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_392;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
      this = *p_loader;
      if ( !IsNullOrEmpty )
      {
        if ( !this )
          goto LABEL_392;
        UnityEngine_Networking_UnityWebRequest__get_downloadHandler((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_392;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v64, v65, v66, v67, v68, v69);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        *(_WORD *)&_4__this->fields.isRequestDownload = 257;
        if ( !this )
          goto LABEL_392;
        AssetData__ResetVersion((AssetData_o *)this, 0);
        goto LABEL_56;
      }
      if ( !this )
        goto LABEL_392;
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
          goto LABEL_392;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_392;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        _4__this->fields.readData = data;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData,
          (int32_t)data,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        readData = _4__this->fields.readData;
        if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v25, v26);
        klass = Crc32__Compute(readData, 0);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_392;
      if ( klass != this->fields._autoRetryCount_5__3 )
      {
        *(_WORD *)&_4__this->fields.isRequestDownload = 257;
        AssetData__ResetVersion((AssetData_o *)this, 0);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_392;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v70, v71, v72, v73, v74, v75);
        _4__this->fields.readData = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v76, v77, v78, v79, v80, v81);
        goto LABEL_56;
      }
      break;
    case 12:
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._req_5__16;
      v9->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      if ( !_4__this )
        goto LABEL_392;
      v29 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0);
      if ( !v29 )
        goto LABEL_392;
      v30 = AssetData__SetAssetBundleData(v29, (UnityEngine_AssetBundle_o *)this, v9->fields.resourceNames, 0);
      v9->fields.__2__current = (Il2CppObject *)v30;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v30, v32, v33, v34, v35, v36, v37);
      v38 = 13;
      goto LABEL_379;
    case 13:
      v9->fields.__1__state = -1;
LABEL_38:
      v9->fields._req_5__16 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._req_5__16, 0, v2, v3, v4, v5, v6, v7);
      if ( _4__this )
        goto LABEL_39;
      goto LABEL_392;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( !_4__this->fields.isDownload )
      goto LABEL_310;
    _2__current = this->fields.__2__current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage((System_String_o *)_2__current, method);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_310:
      v420 = _4__this->fields.data;
      if ( !v420 )
        goto LABEL_392;
      if ( v420->fields.entryCount >= 1 )
      {
        v421 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( v9->fields._isEncrypted_5__2 )
        {
          if ( !this )
            goto LABEL_392;
          this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                      0);
          if ( !this
            || (v422 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                this->klass->_2.naturalAligment < (unsigned int)v422)
            || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v422 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
          {
            this = *v421;
            if ( !*v421 )
              goto LABEL_392;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this )
              goto LABEL_392;
            v423 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
            if ( this->klass->_2.naturalAligment < (unsigned int)v423
              || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v423 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
            {
              goto LABEL_392;
            }
          }
          v424 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
          v425 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v424, 0);
          v9->fields._req_5__16 = v425;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v9->fields._req_5__16,
            (int32_t)v425,
            v426,
            v427,
            v428,
            v429,
            v430,
            v431);
          this = *v421;
          if ( !*v421 )
            goto LABEL_392;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          *v421 = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
            0,
            v432,
            v433,
            v434,
            v435,
            v436,
            v437);
          req_5__16 = (Il2CppObject *)v9->fields._req_5__16;
          v9->fields.__2__current = req_5__16;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)req_5__16, v439, v440, v441, v442, v443, v444);
          v38 = 12;
          goto LABEL_379;
        }
        if ( !this )
          goto LABEL_392;
        v525 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0);
        AssetData__SetData(v420, v525, 0);
      }
LABEL_39:
      loader = _4__this->fields.loader;
      if ( loader )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
        _4__this->fields.loader = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v40, v41, v42, v43, v44, v45);
      }
      _4__this->fields.readData = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
      AssetLoader__EndLoad(_4__this, v46);
      return 0;
    }
LABEL_56:
    _4__this->fields.readData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v2, v3, v4, v5, v6, v7);
    if ( _4__this->fields.isDownload )
      break;
LABEL_304:
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_392;
    if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
    {
      if ( v9->fields._isEncrypted_5__2 )
      {
LABEL_46:
        LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, 0);
        _4__this->fields.loader = LoadRequest;
        v48 = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
        sub_2213A04(v48, (int32_t)LoadRequest, v49, v50, v51, v52, v53, v54);
        this = (AssetLoader__LoadDataCR_d__29_o *)v48->klass;
        if ( !v48->klass )
          goto LABEL_392;
        v55 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                (UnityEngine_Networking_UnityWebRequest_o *)this,
                0);
        v9->fields.__2__current = (Il2CppObject *)v55;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v55, v56, v57, v58, v59, v60, v61);
        v38 = 11;
      }
      else
      {
        v445 = AssetLoader___c_TypeInfo;
        if ( !*(&AssetLoader___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo, method, v2);
          v445 = AssetLoader___c_TypeInfo;
        }
        static_fields = v445->static_fields;
        _9__29_0 = static_fields->__9__29_0;
        if ( !_9__29_0 )
        {
          if ( !*(&v445->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v445, method, v2);
            static_fields = AssetLoader___c_TypeInfo->static_fields;
          }
          v448 = (Il2CppObject *)static_fields->__9;
          _9__29_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__29_0, v448, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
          v449 = AssetLoader___c_TypeInfo->static_fields;
          v449->__9__29_0 = _9__29_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v449->__9__29_0,
            (int32_t)_9__29_0,
            v450,
            v451,
            v452,
            v453,
            v454,
            v455);
        }
        v456 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v456, _9__29_0, 0);
        v9->fields.__2__current = (Il2CppObject *)v456;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v456, v457, v458, v459, v460, v461, v462);
        v38 = 10;
      }
      goto LABEL_379;
    }
  }
  *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
  v9->fields._errorCode_5__6 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6, 0, v2, v3, v4, v5, v6, v7);
  v9->fields._errorLocalizeCode_5__7 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._errorLocalizeCode_5__7, 0, v82, v83, v84, v85, v86, v87);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  v91 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v88, v89);
    v91 = ManagerConfig_TypeInfo;
  }
  TIMEOUT = v91->static_fields->TIMEOUT;
  v9->fields._loadProgress_5__9 = 0.0;
  v93 = UnityEngine_WaitForEndOfFrame_TypeInfo;
  v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
  v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(v93);
  UnityEngine_WaitForEndOfFrame___ctor(v94, 0);
  v9->fields._wait_5__10 = v94;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._wait_5__10, (int32_t)v94, v95, v96, v97, v98, v99, v100);
  Path = AssetStorageCache__GetPath(v101);
  if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v102, v103);
  FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
  v9->fields._freeSize_5__11 = FreeSize;
  if ( FreeSize < 0 )
    goto LABEL_66;
  v112 = FreeSize;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v106);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_392;
  if ( v112 < ManagerConfig_TypeInfo->static_fields->LIMIT_FREE_SIZE + *(int *)&this->fields._isEncrypted_5__2 )
  {
LABEL_66:
    _4__this->fields.isErrorDialog = 1;
    v113 = StringLiteral_5483/*"Disk full"*/;
    v9->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5483/*"Disk full"*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6,
      v113,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    p_errorLocalizeCode_5__7 = (MissionNaviTransitionBoardItem_o *)&v9->fields._errorLocalizeCode_5__7;
    v121 = StringLiteral_9636/*"NETWORK_ERROR_DISK_FULL"*/;
    v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9636/*"NETWORK_ERROR_DISK_FULL"*/;
    goto LABEL_135;
  }
  Url = AssetData__get_Url((AssetData_o *)this, 0);
  v9->fields._url_5__12 = Url;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._url_5__12,
    (int32_t)Url,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_392;
  url_5__12 = v9->fields._url_5__12;
  this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0);
  v130 = _4__this->fields.data;
  v131 = this;
  if ( v9->fields._isEncrypted_5__2 )
  {
    if ( !v130 )
      goto LABEL_392;
    v132 = v130->fields.entryCount > 0;
  }
  else
  {
    v132 = 0;
    if ( !v130 )
      goto LABEL_392;
  }
  Key = AssetData__get_Key(_4__this->fields.data, 0);
  v134 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__12, (System_String_o *)v131, v132, Key, 0);
  _4__this->fields.loader = v134;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
    (int32_t)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_392;
  v141 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v9->fields._asyncOperater_5__13 = v141;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._asyncOperater_5__13,
    (int32_t)v141,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
LABEL_74:
  p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__13;
  this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
  if ( !this )
LABEL_392:
    sub_2213CDC(this, method);
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = *p_asyncOperater_5__13;
    if ( !*p_asyncOperater_5__13 )
      goto LABEL_392;
    progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
    loadProgress_5__9 = v9->fields._loadProgress_5__9;
    v151 = progress;
    v158 = UnityEngine_Time__get_unscaledTime(0);
    v159 = v151 == loadProgress_5__9;
    v160 = v158;
    if ( !v159 )
    {
      v526 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v152);
        v526 = ManagerConfig_TypeInfo;
      }
      v527 = v526->static_fields;
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
      v9->fields._requestTime_5__8 = v160 + v527->TIMEOUT;
      if ( !this )
        goto LABEL_392;
      v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
LABEL_386:
      wait_5__10 = (Il2CppObject *)v9->fields._wait_5__10;
      v9->fields.__2__current = wait_5__10;
      v529 = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(v529, (int32_t)wait_5__10, v152, v153, v154, v155, v156, v157);
      v529[-1].fields._BoardType_k__BackingField = 1;
      return 1;
    }
    if ( v158 < v9->fields._requestTime_5__8 )
      goto LABEL_386;
  }
  if ( !_4__this )
    goto LABEL_392;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_392;
  v161 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
           (UnityEngine_Networking_UnityWebRequest_o *)this,
           0);
  v162 = 0;
  if ( v161 )
  {
    v162 = 0;
    v163 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
    if ( v161->klass->_2.naturalAligment >= (unsigned int)v163 )
    {
      if ( (DownloadHandlerFileWithCrcCheck_c *)v161->klass->_2.typeHierarchy[v163 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo )
        v162 = (DownloadHandlerFileWithCrcCheck_o *)v161;
      else
        v162 = 0;
    }
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_392;
  if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
  {
    v172 = System_String__Concat_75694928(
             (System_String_o *)StringLiteral_681/*"("*/,
             v9->fields._url_5__12,
             (System_String_o *)StringLiteral_794/*")\n\nAssetBundle file download time over"*/,
             0);
    v9->fields._errorCode_5__6 = v172;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6,
      (int32_t)v172,
      v173,
      v174,
      v175,
      v176,
      v177,
      v178);
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_392;
    UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    if ( v162 )
      DownloadHandlerFileWithCrcCheck__CloseStream(v162, 0);
    goto LABEL_134;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_392;
  v164 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  if ( System_String__IsNullOrEmpty(v164, 0) )
  {
    crc = 0;
    if ( !v162 )
      goto LABEL_94;
    if ( !v162->fields._error_k__BackingField )
    {
      crc = v162->fields.crc;
LABEL_94:
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      HIDWORD(v536) = crc;
      if ( !this )
        goto LABEL_392;
      if ( crc == this->fields._autoRetryCount_5__3 )
      {
        AssetData__UpdateVersion((AssetData_o *)this, 0);
        _4__this->fields.isDownload = 0;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(string___TypeInfo, 7);
        if ( !this )
          goto LABEL_392;
        v217 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_393;
        v218 = StringLiteral_681/*"("*/;
        this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_681/*"("*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__4__this,
          v218,
          v211,
          v212,
          v213,
          v214,
          v215,
          v216);
        if ( ((__int64)v217->fields.__2__current & 0xFFFFFFFE) == 0 )
          goto LABEL_393;
        v225 = v9->fields._url_5__12;
        v217->fields.resourceNames = (struct System_String_array *)v225;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields.resourceNames,
          (int32_t)v225,
          v219,
          v220,
          v221,
          v222,
          v223,
          v224);
        if ( LODWORD(v217->fields.__2__current) <= 2 )
          goto LABEL_393;
        v232 = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
        *(_QWORD *)&v217->fields._isEncrypted_5__2 = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields._isEncrypted_5__2,
          v232,
          v226,
          v227,
          v228,
          v229,
          v230,
          v231);
        v233 = _4__this->fields.data;
        if ( !v233 )
          goto LABEL_392;
        LODWORD(v536) = v233->fields.crc;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v536, 0);
        if ( ((__int64)v217->fields.__2__current & 0xFFFFFFFC) == 0 )
          goto LABEL_393;
        *(_QWORD *)&v217->fields._isAutoRetry_5__4 = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields._isAutoRetry_5__4,
          (int32_t)this,
          v234,
          v235,
          v236,
          v237,
          v238,
          v239);
        if ( LODWORD(v217->fields.__2__current) <= 4 )
          goto LABEL_393;
        v246 = StringLiteral_795/*")\nfile crc ("*/;
        v217->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_795/*")\nfile crc ("*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields._errorCode_5__6,
          v246,
          v240,
          v241,
          v242,
          v243,
          v244,
          v245);
        this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v536 + 4, 0);
        if ( LODWORD(v217->fields.__2__current) <= 5 )
          goto LABEL_393;
        v217->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields._errorLocalizeCode_5__7,
          (int32_t)this,
          v247,
          v248,
          v249,
          v250,
          v251,
          v252);
        if ( LODWORD(v217->fields.__2__current) <= 6 )
          goto LABEL_393;
        v259 = StringLiteral_789/*")"*/;
        *(_QWORD *)&v217->fields._requestTime_5__8 = StringLiteral_789/*")"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v217->fields._requestTime_5__8,
          v259,
          v253,
          v254,
          v255,
          v256,
          v257,
          v258);
        v260 = System_String__Concat_75697120((System_String_array *)v217, 0);
        v9->fields._errorCode_5__6 = v260;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6,
          (int32_t)v260,
          v261,
          v262,
          v263,
          v264,
          v265,
          v266);
        v9->fields._isCrcError_5__5 = 1;
      }
      goto LABEL_134;
    }
  }
  else if ( !v162 )
  {
LABEL_108:
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_392;
    v194 = v9->fields._url_5__12;
    v195 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v196 = System_String__Concat_75696856(
             (System_String_o *)StringLiteral_681/*"("*/,
             v194,
             (System_String_o *)StringLiteral_791/*")\n\n"*/,
             v195,
             0);
    v9->fields._errorCode_5__6 = v196;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6,
      (int32_t)v196,
      v197,
      v198,
      v199,
      v200,
      v201,
      v202);
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_392;
    ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                        0);
    if ( !ResponseHeaders )
      goto LABEL_134;
    v204 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
           (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
      || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v204,
            (Il2CppObject *)StringLiteral_12872/*"STATUS"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      goto LABEL_134;
    }
    v205 = value;
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_392;
    method = (const MethodInfo *)this;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_393;
    LOWORD(this->fields.__4__this) = 32;
    if ( !v205 )
      goto LABEL_392;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75706100(
                                                (System_String_o *)v205,
                                                (System_Char_array *)this,
                                                1,
                                                0);
    if ( !this )
      goto LABEL_392;
    v206 = this;
    if ( SLODWORD(this->fields.__2__current) < 2 )
      goto LABEL_134;
    this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_392;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_7561/*"HTTP"*/,
                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_134;
    if ( ((__int64)v206->fields.__2__current & 0xFFFFFFFE) == 0 )
      goto LABEL_393;
    this = (AssetLoader__LoadDataCR_d__29_o *)v206->fields.resourceNames;
    if ( !this )
      goto LABEL_392;
    if ( !System_String__Equals_75686512((System_String_o *)this, (System_String_o *)StringLiteral_1502/*"503"*/, 0) )
      goto LABEL_134;
    autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
    v208 = v9->fields._url_5__12;
    v9->fields._isAutoRetry_5__4 = 1;
    v9->fields._autoRetryCount_5__3 = autoRetryCount_5__3 + 1;
    v209 = System_Int32__ToString((int)v9 + 52, 0);
    v210 = System_String__Concat_75696856(
             (System_String_o *)StringLiteral_681/*"("*/,
             v208,
             (System_String_o *)StringLiteral_792/*")\n\n503 Auto retry count "*/,
             v209,
             0);
    v192 = (int)v210;
    v9->fields._errorCode_5__6 = v210;
    p_errorCode_5__6 = (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6;
    goto LABEL_107;
  }
  DownloadHandlerFileWithCrcCheck__CloseStream(v162, 0);
  error_k__BackingField = v162->fields._error_k__BackingField;
  if ( !error_k__BackingField )
    goto LABEL_108;
  v180 = error_k__BackingField->klass;
  v181 = System_IO_IOException_TypeInfo->_2.naturalAligment;
  if ( error_k__BackingField->klass->_2.naturalAligment >= (unsigned int)v181
    && (System_IO_IOException_c *)v180->_2.typeHierarchy[v181 - 1] == System_IO_IOException_TypeInfo )
  {
    _4__this->fields.isErrorDialog = 1;
    v185 = (System_String_o *)((__int64 (__fastcall *)(struct System_Exception_o *, const MethodInfo *))error_k__BackingField->klass->vtable._5_get_Message.methodPtr)(
                                error_k__BackingField,
                                error_k__BackingField->klass->vtable._5_get_Message.method);
  }
  else
  {
    this = (AssetLoader__LoadDataCR_d__29_o *)((__int64 (*)(void))v180->vtable._3_ToString.methodPtr)();
    v182 = v162->fields._error_k__BackingField;
    if ( !v182 )
      goto LABEL_392;
    v183 = this;
    v184 = (System_String_o *)((System_String_o *(__fastcall *)(struct System_Exception_o *__return_ptr, struct System_Exception_o *, const MethodInfo *))v182->klass->vtable._5_get_Message.methodPtr)(
                                v182,
                                v182,
                                v182->klass->vtable._5_get_Message.method);
    v185 = System_String__Concat_75696856(
             (System_String_o *)StringLiteral_19958/*"error "*/,
             (System_String_o *)v183,
             (System_String_o *)StringLiteral_113/*" "*/,
             v184,
             0);
  }
  v192 = (int)v185;
  v9->fields._errorCode_5__6 = v185;
  p_errorCode_5__6 = (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6;
LABEL_107:
  sub_2213A04(p_errorCode_5__6, v192, v186, v187, v188, v189, v190, v191);
LABEL_134:
  v9->fields._url_5__12 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._url_5__12, 0, v166, v167, v168, v169, v170, v171);
  p_errorLocalizeCode_5__7 = (MissionNaviTransitionBoardItem_o *)&v9->fields._asyncOperater_5__13;
  v121 = 0;
  v9->fields._asyncOperater_5__13 = 0;
LABEL_135:
  sub_2213A04(p_errorLocalizeCode_5__7, v121, v114, v115, v116, v117, v118, v119);
  method = (const MethodInfo *)v9->fields._errorCode_5__6;
  if ( method )
  {
    AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, (const MethodInfo *)v2);
    v267 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
      v267 = ManagerConfig_TypeInfo;
    }
    if ( v267->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v268 = _4__this->fields.data;
      if ( !v268 )
        goto LABEL_392;
      v269 = (CommonUI_o *)this;
      v270 = System_String__Concat_75696856(
               (System_String_o *)StringLiteral_2486/*"AssetName : "*/,
               v268->fields.name,
               (System_String_o *)StringLiteral_43/*"\n"*/,
               v9->fields._errorCode_5__6,
               0);
      v271 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v271, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
      if ( !v269 )
        goto LABEL_392;
      v8 &= 0xFFFFFFFF00000000LL;
      LODWORD(effectDistance.fields.value.fields.y) = v8;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      CommonUI__OpenWarningDialog(
        v269,
        (System_String_o *)StringLiteral_16551/*"[FFFF80]Download error for debug"*/,
        v270,
        v271,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
LABEL_142:
      if ( _4__this->fields.isErrorDialog )
      {
        v475 = (Il2CppObject *)v9->fields._wait_5__10;
        v9->fields.__2__current = v475;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v475, v2, v3, v4, v5, v6, v7);
        v38 = 2;
        goto LABEL_379;
      }
    }
    if ( v9->fields._isAutoRetry_5__4 )
    {
      v463 = v9->fields._autoRetryCount_5__3;
      v464 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
        v464 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v464->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v466 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      v467 = (float)v463;
      v468 = (Il2CppObject *)v466;
      UnityEngine_WaitForSeconds___ctor(v466, DOWNLOAD_RETRY_DELAY_TIME * v467, 0);
      v9->fields.__2__current = v468;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v468, v469, v470, v471, v472, v473, v474);
      v38 = 3;
      goto LABEL_379;
    }
    if ( !v9->fields._isCrcError_5__5 )
    {
      _4__this->fields.isErrorDialog = 1;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
      if ( !byte_596F739 )
      {
        sub_2213A60(&ManagementManager_TypeInfo);
        byte_596F739 = 1;
      }
      v272 = ManagementManager_TypeInfo;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
        v272 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v272->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
      v278 = (System_String_o *)StringLiteral_1/*""*/;
      v279 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( isDuringStartup )
      {
        if ( errorLocalizeCode_5__7 )
          v280 = v9->fields._errorLocalizeCode_5__7;
        else
          v280 = (System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !v279 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v274, v275);
        v281 = LocalizationManager__Get(v280, 0);
        v282 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v282, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_392;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, v278, v281, v282, 1, 0);
      }
      else
      {
        if ( errorLocalizeCode_5__7 )
          v283 = v9->fields._errorLocalizeCode_5__7;
        else
          v283 = (System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !v279 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v274, v275);
        v284 = LocalizationManager__Get(v283, 0);
        v285 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v285, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_392;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, v278, v284, v285, 1, 0);
      }
LABEL_166:
      if ( _4__this->fields.isErrorDialog )
      {
        v477 = (Il2CppObject *)v9->fields._wait_5__10;
        v9->fields.__2__current = v477;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v477, v2, v3, v4, v5, v6, v7);
        v38 = 4;
        goto LABEL_379;
      }
    }
  }
LABEL_167:
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_596B88D )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B88D = 1;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 23) + 144LL) )
  {
    if ( !_4__this )
      goto LABEL_392;
    this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
    if ( !this )
      goto LABEL_392;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    _4__this->fields.loader = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v478, v479, v480, v481, v482, v483);
    _4__this->fields.readData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v484, v485, v486, v487, v488, v489);
    return 0;
  }
  if ( !_4__this )
    goto LABEL_392;
  if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
    goto LABEL_310;
  v286 = _4__this->fields.loader;
  if ( v286 )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v286, 0);
    _4__this->fields.loader = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v287, v288, v289, v290, v291, v292);
    _4__this->fields.readData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.readData, 0, v293, v294, v295, v296, v297, v298);
  }
  if ( !v9->fields._isCrcError_5__5 )
  {
LABEL_303:
    v9->fields._errorCode_5__6 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6, 0, v2, v3, v4, v5, v6, v7);
    v9->fields._errorLocalizeCode_5__7 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields._errorLocalizeCode_5__7,
      0,
      v407,
      v408,
      v409,
      v410,
      v411,
      v412);
    v9->fields._wait_5__10 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._wait_5__10, 0, v413, v414, v415, v416, v417, v418);
    goto LABEL_304;
  }
  v299 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v299);
  v9->fields._url_5__12 = ConfigFileAddress;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._url_5__12,
    (int32_t)ConfigFileAddress,
    v301,
    v302,
    v303,
    v304,
    v305,
    v306);
LABEL_183:
  v307 = v9->fields._url_5__12;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v62, v63);
  UrlString = AssetManager__getUrlString(v307, v62);
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
  if ( !_4__this )
    goto LABEL_392;
  _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader,
    (int32_t)this,
    v309,
    v310,
    v311,
    v312,
    v313,
    v314);
  v316 = UnityEngine_Time__get_unscaledTime(0);
  v317 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v315);
    v317 = ManagerConfig_TypeInfo;
  }
  v318 = v317->static_fields;
  v9->fields._loadProgress_5__9 = 0.0;
  v319 = v318->TIMEOUT;
  *(_WORD *)&v9->fields._isSizeChecked_5__14 = 0;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  v9->fields._requestTime_5__8 = v316 + v319;
  if ( !this )
    goto LABEL_392;
  v320 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v9->fields._asyncOperater_5__13 = v320;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._asyncOperater_5__13,
    (int32_t)v320,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
LABEL_190:
  this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
  if ( !this )
    goto LABEL_392;
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v9->fields._isSizeChecked_5__14 )
    {
      if ( !_4__this )
        goto LABEL_392;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_392;
      ResponseHeader = UnityEngine_Networking_UnityWebRequest__GetResponseHeader(
                         (UnityEngine_Networking_UnityWebRequest_o *)this,
                         (System_String_o *)StringLiteral_4867/*"Content-Length"*/,
                         0);
      if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
      {
        v9->fields._isSizeChecked_5__14 = 1;
        result = 0;
        System_UInt64__TryParse(ResponseHeader, &result, 0);
        freeSize_5__11 = v9->fields._freeSize_5__11;
        v335 = ManagerConfig_TypeInfo;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v327);
          v335 = ManagerConfig_TypeInfo;
        }
        if ( freeSize_5__11 < result + v335->static_fields->LIMIT_FREE_SIZE )
        {
          v9->fields._isDiskFull_5__15 = 1;
          goto LABEL_204;
        }
      }
    }
    this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
    if ( !this )
      goto LABEL_392;
    v336 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
    v337 = v9->fields._loadProgress_5__9;
    v338 = v336;
    v339 = UnityEngine_Time__get_unscaledTime(0);
    v159 = v338 == v337;
    v340 = v339;
    if ( !v159 )
    {
      v530 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v327);
        v530 = ManagerConfig_TypeInfo;
      }
      v531 = v530->static_fields;
      this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__13;
      v9->fields._requestTime_5__8 = v340 + v531->TIMEOUT;
      if ( !this )
        goto LABEL_392;
      v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
      goto LABEL_391;
    }
    if ( v339 < v9->fields._requestTime_5__8 )
    {
LABEL_391:
      v532 = (Il2CppObject *)v9->fields._wait_5__10;
      v9->fields.__2__current = v532;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v532, v327, v328, v329, v330, v331, v332);
      v38 = 5;
      goto LABEL_379;
    }
  }
LABEL_204:
  v9->fields._errorCode_5__6 = 0;
  v341 = &v9->fields._errorCode_5__6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6, 0, v327, v328, v329, v330, v331, v332);
  if ( v9->fields._isDiskFull_5__15 )
  {
    if ( !_4__this )
      goto LABEL_392;
    _4__this->fields.isErrorDialog = 1;
    v490 = StringLiteral_5483/*"Disk full"*/;
    v9->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5483/*"Disk full"*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6,
      v490,
      v342,
      v343,
      v344,
      v345,
      v346,
      v347);
    LODWORD(v491) = StringLiteral_9636/*"NETWORK_ERROR_DISK_FULL"*/;
    v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9636/*"NETWORK_ERROR_DISK_FULL"*/;
    v492 = (MissionNaviTransitionBoardItem_o *)&v9->fields._errorLocalizeCode_5__7;
LABEL_350:
    sub_2213A04(v492, v491, v355, v356, v357, v358, v359, v360);
    v494 = _4__this->fields.loader;
    if ( v494 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v494, 0);
      _4__this->fields.loader = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v495, v496, v497, v498, v499, v500);
    }
    if ( !*v341 )
      goto LABEL_378;
    v501 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
      v501 = ManagerConfig_TypeInfo;
    }
    if ( v501->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v502 = _4__this->fields.data;
      if ( !v502 )
        goto LABEL_392;
      v503 = (CommonUI_o *)this;
      v504 = System_String__Concat_75696856(
               (System_String_o *)StringLiteral_2486/*"AssetName : "*/,
               v502->fields.name,
               (System_String_o *)StringLiteral_43/*"\n"*/,
               *v341,
               0);
      v505 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v505, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
      if ( !v503 )
        goto LABEL_392;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v503,
        (System_String_o *)StringLiteral_16551/*"[FFFF80]Download error for debug"*/,
        v504,
        v505,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0);
LABEL_359:
      if ( _4__this->fields.isErrorDialog )
      {
        v506 = (Il2CppObject *)v9->fields._wait_5__10;
        v9->fields.__2__current = v506;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v506, v2, v3, v4, v5, v6, v7);
        v38 = 6;
        goto LABEL_379;
      }
    }
    _4__this->fields.isErrorDialog = 1;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
    if ( !byte_596F739 )
    {
      sub_2213A60(&ManagementManager_TypeInfo);
      byte_596F739 = 1;
    }
    v507 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
      v507 = ManagementManager_TypeInfo;
    }
    v508 = v507->static_fields->isDuringStartup;
    v511 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v512 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v508 )
    {
      if ( !v512 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v509, v510);
      v513 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
      v514 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v514, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( !v511 )
        goto LABEL_392;
      CommonUI__OpenRetryBootDialog((CommonUI_o *)v511, (System_String_o *)StringLiteral_1/*""*/, v513, v514, 0, 0);
    }
    else
    {
      if ( !v512 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v509, v510);
      v515 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v516 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v516, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( !v511 )
        goto LABEL_392;
      CommonUI__OpenRetryDialog((CommonUI_o *)v511, (System_String_o *)StringLiteral_1/*""*/, v515, v516, 0, 0);
    }
LABEL_376:
    if ( _4__this->fields.isErrorDialog )
    {
      v517 = (Il2CppObject *)v9->fields._wait_5__10;
      v9->fields.__2__current = v517;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v517, v2, v3, v4, v5, v6, v7);
      v38 = 7;
    }
    else
    {
LABEL_378:
      v518 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v518, 1.0, 0);
      v9->fields.__2__current = (Il2CppObject *)v518;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v518, v519, v520, v521, v522, v523, v524);
      v38 = 8;
    }
LABEL_379:
    p__2__current[-1].fields._BoardType_k__BackingField = v38;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_392;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !this )
    goto LABEL_392;
  isDone = UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !isDone )
  {
    if ( !this )
      goto LABEL_392;
    UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v404 = &StringLiteral_2499/*"AssetStorageList download time over"*/;
    goto LABEL_348;
  }
  if ( !this )
    goto LABEL_392;
  v349 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v350 = System_String__IsNullOrEmpty(v349, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
  if ( !v350 )
  {
    if ( !this )
      goto LABEL_392;
    v493 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    LODWORD(v491) = (_DWORD)v493;
    *v341 = v493;
    goto LABEL_349;
  }
  if ( !this )
    goto LABEL_392;
  this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                                              0);
  if ( !this )
    goto LABEL_392;
  text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v351, v352);
  v354 = CatAndMouseGame__MouseGame3(text, 0);
  if ( System_String__IsNullOrEmpty(v354, 0) )
  {
    v404 = &StringLiteral_2497/*"AssetStorageList download error"*/;
    goto LABEL_348;
  }
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(char___TypeInfo, 1);
  if ( !this )
    goto LABEL_392;
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.__2__current) )
    goto LABEL_393;
  LOWORD(this->fields.__4__this) = -257;
  if ( !v354 )
    goto LABEL_392;
  this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_75713456(v354, (System_Char_array *)this, 0);
  if ( !this )
    goto LABEL_392;
  v361 = this;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_26661/*"~"*/, 0) )
    goto LABEL_296;
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_392;
  v362 = (int)this->fields.__2__current;
  if ( !v362 )
    goto LABEL_393;
  LOWORD(this->fields.__4__this) = 13;
  if ( v362 == 1 )
    goto LABEL_393;
  WORD1(this->fields.__4__this) = 10;
  v363 = System_String__IndexOfAny((System_String_o *)v361, (System_Char_array *)this, 0);
  if ( v363 < 2 )
    goto LABEL_296;
  v364 = v363;
  v365 = System_String__Substring_75702848((System_String_o *)v361, 1, v363 - 1, 0);
  v366 = System_String__Substring((System_String_o *)v361, v364 + 1, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
  if ( !this )
    goto LABEL_392;
  v369 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                this,
                                v366,
                                this->klass[1]._1.methods);
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v367, v368);
  v370 = Crc32__Compute(v369, 0);
  if ( System_UInt32__Parse(v365, 0) != v370 )
  {
LABEL_296:
    v404 = &StringLiteral_2496/*"AssetStorageList download data error"*/;
LABEL_348:
    v491 = *v404;
    *v341 = (System_String_o *)*v404;
LABEL_349:
    v492 = (MissionNaviTransitionBoardItem_o *)&v9->fields._errorCode_5__6;
    goto LABEL_350;
  }
  if ( !v366 )
    goto LABEL_280;
  this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(char___TypeInfo, 2);
  if ( !this )
    goto LABEL_392;
  v371 = (int)this->fields.__2__current;
  if ( !v371 )
    goto LABEL_393;
  LOWORD(this->fields.__4__this) = 13;
  if ( v371 == 1 )
    goto LABEL_393;
  WORD1(this->fields.__4__this) = 10;
  this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75706100(v366, (System_Char_array *)this, 1, 0);
  if ( !this )
    goto LABEL_392;
  _2__current_low = LODWORD(this->fields.__2__current);
  v373 = this;
  if ( (int)_2__current_low < 1 )
    goto LABEL_280;
  if ( !LODWORD(this->fields.__2__current) )
LABEL_393:
    sub_2213CE4(this);
  v374 = 0;
  while ( 1 )
  {
    v375 = (System_String_o *)*((_QWORD *)&v373->fields.__4__this + v374);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_2213B20(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_392;
    method = (const MethodInfo *)this;
    if ( !LODWORD(this->fields.__2__current) )
      goto LABEL_393;
    LOWORD(this->fields.__4__this) = 44;
    if ( !v375 )
      goto LABEL_392;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_75705984(v375, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_392;
    v376 = this->fields.__2__current;
    v377 = this;
    if ( (int)v376 < 1 )
      break;
    this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_392;
    this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1851/*"@"*/,
                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !LODWORD(v377->fields.__2__current) )
        goto LABEL_393;
      this = (AssetLoader__LoadDataCR_d__29_o *)v377->fields.__4__this;
      if ( !this )
        goto LABEL_392;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                  (System_String_o *)this,
                                                  (System_String_o *)StringLiteral_26661/*"~"*/,
                                                  0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_263;
      if ( !LODWORD(v377->fields.__2__current) )
        goto LABEL_393;
      this = (AssetLoader__LoadDataCR_d__29_o *)v377->fields.__4__this;
      if ( !this )
        goto LABEL_392;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
      if ( (_DWORD)this == 1 )
        goto LABEL_263;
      LODWORD(v376) = v377->fields.__2__current;
      break;
    }
    if ( !LODWORD(v377->fields.__2__current) )
      goto LABEL_393;
    this = (AssetLoader__LoadDataCR_d__29_o *)v377->fields.__4__this;
    if ( !this )
      goto LABEL_392;
    v380 = System_String__Substring((System_String_o *)this, 1, 0);
    p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
    if ( SLODWORD(v377->fields.__2__current) > 1 )
      p_resourceNames = (System_String_o **)&v377->fields.resourceNames;
    v382 = *p_resourceNames;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v378, v379);
    this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v380, v382, v379);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_280;
LABEL_263:
    if ( ++v374 == _2__current_low )
      goto LABEL_280;
    if ( v374 >= LODWORD(v373->fields.__2__current) )
      goto LABEL_393;
  }
  if ( (_DWORD)v376 != 5 )
    goto LABEL_280;
  this = *(AssetLoader__LoadDataCR_d__29_o **)&v377->fields._isAutoRetry_5__4;
  if ( !this )
    goto LABEL_392;
  v383 = System_String__Trim((System_String_o *)this, 0);
  this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v383, 0);
  if ( LODWORD(v377->fields.__2__current) <= 4 )
    goto LABEL_393;
  v384 = (int)this;
  this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_263;
  this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame((AssetData_o *)this, v377->fields._errorCode_5__6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_263;
  v385 = _4__this->fields.data;
  if ( !v385 )
    goto LABEL_392;
  if ( v384 == v385->fields.crc )
  {
    _4__this->fields.isErrorDialog = 1;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v355);
    if ( !byte_596F739 )
    {
      sub_2213A60(&ManagementManager_TypeInfo);
      byte_596F739 = 1;
    }
    v386 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v355);
      v386 = ManagementManager_TypeInfo;
    }
    v387 = v386->static_fields->isDuringStartup;
    v390 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v391 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v387 )
    {
      if ( !v391 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v388, v389);
      v392 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
      v393 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v393, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
      if ( v390 )
      {
        CommonUI__OpenRetryBootDialog((CommonUI_o *)v390, (System_String_o *)StringLiteral_1/*""*/, v392, v393, 1, 0);
        goto LABEL_301;
      }
      goto LABEL_392;
    }
    if ( !v391 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v388, v389);
    v405 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
    v406 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v406, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
    if ( !v390 )
      goto LABEL_392;
    CommonUI__OpenRetryDialog((CommonUI_o *)v390, (System_String_o *)StringLiteral_1/*""*/, v405, v406, 1, 0);
LABEL_301:
    if ( !_4__this->fields.isErrorDialog )
    {
      v9->fields._url_5__12 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields._url_5__12, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_303;
    }
    v476 = (Il2CppObject *)v9->fields._wait_5__10;
    v9->fields.__2__current = v476;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v9->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v476, v2, v3, v4, v5, v6, v7);
    v38 = 9;
    goto LABEL_379;
  }
LABEL_280:
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v355);
  if ( !byte_596F739 )
  {
    sub_2213A60(&ManagementManager_TypeInfo);
    byte_596F739 = 1;
  }
  v394 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v355);
    v394 = ManagementManager_TypeInfo;
  }
  v395 = v394->static_fields->isDuringStartup;
  v398 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v399 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v395 )
  {
    if ( !v399 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v396, v397);
    v400 = &StringLiteral_9627/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
  }
  else
  {
    if ( !v399 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v396, v397);
    v400 = &StringLiteral_9626/*"NETWORK_ERROR_ASSET_UPDATE"*/;
  }
  v401 = LocalizationManager__Get((System_String_o *)*v400, 0);
  v402 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v402, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
  if ( !v398 )
    goto LABEL_392;
  CommonUI__OpenErrorDialog((CommonUI_o *)v398, (System_String_o *)StringLiteral_1/*""*/, v401, v402, 0, 0);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F747 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader___c_TypeInfo);
    byte_596F747 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_2213A04(
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

  if ( (byte_596F748 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F748 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  return BYTE4(Instance[7].monitor) == 0;
}