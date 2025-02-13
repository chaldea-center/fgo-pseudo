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
    sub_1C22094(this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x21
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x1
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x1
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x1
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x1
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x1
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x1
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  int64_t v196; // x1
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  int64_t v203; // x1
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  int64_t v210; // x1
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x1
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  int64_t v224; // x1
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  int64_t v231; // x1
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  int64_t v238; // x1
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  int64_t v245; // x1
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  int64_t v252; // x1
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  int64_t v259; // x1
  int64_t v260; // x2
  int32_t v261; // w3
  System_String_o *v262; // x4
  BattleSetupInfo_o *v263; // x5
  FollowerInfo_o *v264; // x6
  PartyListViewItem_o *v265; // x7
  int64_t v266; // x1
  __int64 v267; // x23
  __int64 v268; // x24
  CrashReporter_o *v269; // x19

  if ( (byte_4BDB59F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_14365/*"The request timed out."*/);
    sub_1C21E38(&StringLiteral_21304/*"java.net.SocketException"*/);
    sub_1C21E38(&StringLiteral_12452/*"SSL CA certificate error"*/);
    sub_1C21E38(&StringLiteral_1503/*"404: Not Found"*/);
    sub_1C21E38(&StringLiteral_14295/*"The network connection was lost."*/);
    sub_1C21E38(&StringLiteral_1497/*"400: Bad Request"*/);
    sub_1C21E38(&StringLiteral_15144/*"Unable to complete SSL connection"*/);
    sub_1C21E38(&StringLiteral_15176/*"Unable to read data"*/);
    sub_1C21E38(&StringLiteral_18515/*"connect failed"*/);
    sub_1C21E38(&StringLiteral_7344/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1C21E38(&StringLiteral_21306/*"java.net.UnknownHostException"*/);
    sub_1C21E38(&StringLiteral_1511/*"500: Internal Server Error"*/);
    sub_1C21E38(&StringLiteral_1513/*"502:"*/);
    sub_1C21E38(&StringLiteral_11523/*"Request timeout"*/);
    sub_1C21E38(&StringLiteral_4790/*"Connection reset by peer"*/);
    sub_1C21E38(&StringLiteral_5163/*"DLErrorType"*/);
    sub_1C21E38(&StringLiteral_5162/*"DLErrorAsset"*/);
    sub_1C21E38(&StringLiteral_1525/*"504: Gateway Timeout"*/);
    sub_1C21E38(&StringLiteral_15353/*"Unknown Error"*/);
    sub_1C21E38(&StringLiteral_1515/*"503 Auto retry count"*/);
    sub_1C21E38(&StringLiteral_21287/*"java.io.EOFException"*/);
    sub_1C21E38(&StringLiteral_21301/*"java.net.ConnectException"*/);
    sub_1C21E38(&StringLiteral_1501/*"403: Forbidden"*/);
    sub_1C21E38(&StringLiteral_4789/*"Connection refused"*/);
    sub_1C21E38(&StringLiteral_7345/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1C21E38(&StringLiteral_1499/*"401: Authorization Required"*/);
    sub_1C21E38(&StringLiteral_21288/*"java.io.IOException"*/);
    sub_1C21E38(&StringLiteral_9623/*"No address associated with hostname"*/);
    sub_1C21E38(&StringLiteral_21303/*"java.net.ProtocolException"*/);
    sub_1C21E38(&StringLiteral_2531/*"AssetBundle file download time over"*/);
    sub_1C21E38(&StringLiteral_1504/*"408: Request Time-out"*/);
    sub_1C21E38(&StringLiteral_14785/*"Too many redirects"*/);
    sub_1C21E38(&StringLiteral_13073/*"Software caused connection abort"*/);
    sub_1C21E38(&StringLiteral_2530/*"AssetBundle file check sum error"*/);
    sub_1C21E38(&StringLiteral_21302/*"java.net.NoRouteToHostException"*/);
    sub_1C21E38(&StringLiteral_5399/*"Destination host has an erroneous SSL certificate"*/);
    sub_1C21E38(&StringLiteral_4791/*"Connection timed out"*/);
    sub_1C21E38(&StringLiteral_4386/*"Cannot resolve destination host"*/);
    sub_1C21E38(&StringLiteral_21305/*"java.net.SocketTimeoutException"*/);
    sub_1C21E38(&StringLiteral_2534/*"AssetLoadError"*/);
    byte_4BDB59F = 1;
  }
  Instance = sub_1C21EE0(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v13 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v14 = StringLiteral_9623/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9623/*"No address associated with hostname"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(Instance + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_47;
  v21 = StringLiteral_2531/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_2531/*"AssetBundle file download time over"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v13 + 24) <= 2u )
    goto LABEL_47;
  v28 = StringLiteral_14295/*"The network connection was lost."*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_14295/*"The network connection was lost."*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v13 + 24) <= 3u )
    goto LABEL_47;
  v35 = StringLiteral_4790/*"Connection reset by peer"*/;
  *(_QWORD *)(v13 + 56) = StringLiteral_4790/*"Connection reset by peer"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v13 + 24) <= 4u )
    goto LABEL_47;
  v42 = StringLiteral_13073/*"Software caused connection abort"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_13073/*"Software caused connection abort"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v13 + 24) <= 5u )
    goto LABEL_47;
  v49 = StringLiteral_4791/*"Connection timed out"*/;
  *(_QWORD *)(v13 + 72) = StringLiteral_4791/*"Connection timed out"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v13 + 24) <= 6u )
    goto LABEL_47;
  v56 = StringLiteral_4789/*"Connection refused"*/;
  *(_QWORD *)(v13 + 80) = StringLiteral_4789/*"Connection refused"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v13 + 24) <= 7u )
    goto LABEL_47;
  v63 = StringLiteral_14365/*"The request timed out."*/;
  *(_QWORD *)(v13 + 88) = StringLiteral_14365/*"The request timed out."*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 88), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v13 + 24) <= 8u )
    goto LABEL_47;
  v70 = StringLiteral_4386/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v13 + 96) = StringLiteral_4386/*"Cannot resolve destination host"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 96), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v13 + 24) <= 9u )
    goto LABEL_47;
  v77 = StringLiteral_15144/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v13 + 104) = StringLiteral_15144/*"Unable to complete SSL connection"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 104), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v13 + 24) <= 0xAu )
    goto LABEL_47;
  v84 = StringLiteral_15353/*"Unknown Error"*/;
  *(_QWORD *)(v13 + 112) = StringLiteral_15353/*"Unknown Error"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 112), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v13 + 24) <= 0xBu )
    goto LABEL_47;
  v91 = StringLiteral_11523/*"Request timeout"*/;
  *(_QWORD *)(v13 + 120) = StringLiteral_11523/*"Request timeout"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 120), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v13 + 24) <= 0xCu )
    goto LABEL_47;
  v98 = StringLiteral_2530/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v13 + 128) = StringLiteral_2530/*"AssetBundle file check sum error"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 128), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v13 + 24) <= 0xDu )
    goto LABEL_47;
  v105 = StringLiteral_12452/*"SSL CA certificate error"*/;
  *(_QWORD *)(v13 + 136) = StringLiteral_12452/*"SSL CA certificate error"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 136), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v13 + 24) <= 0xEu )
    goto LABEL_47;
  v112 = StringLiteral_7344/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v13 + 144) = StringLiteral_7344/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 144), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v13 + 24) <= 0xFu )
    goto LABEL_47;
  v119 = StringLiteral_7345/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v13 + 152) = StringLiteral_7345/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 152), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v13 + 24) <= 0x10u )
    goto LABEL_47;
  v126 = StringLiteral_5399/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v13 + 160) = StringLiteral_5399/*"Destination host has an erroneous SSL certificate"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 160), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v13 + 24) <= 0x11u )
    goto LABEL_47;
  v133 = StringLiteral_14785/*"Too many redirects"*/;
  *(_QWORD *)(v13 + 168) = StringLiteral_14785/*"Too many redirects"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 168), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v13 + 24) <= 0x12u )
    goto LABEL_47;
  v140 = StringLiteral_21287/*"java.io.EOFException"*/;
  *(_QWORD *)(v13 + 176) = StringLiteral_21287/*"java.io.EOFException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 176), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v13 + 24) <= 0x13u )
    goto LABEL_47;
  v147 = StringLiteral_21304/*"java.net.SocketException"*/;
  *(_QWORD *)(v13 + 184) = StringLiteral_21304/*"java.net.SocketException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 184), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v13 + 24) <= 0x14u )
    goto LABEL_47;
  v154 = StringLiteral_21305/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v13 + 192) = StringLiteral_21305/*"java.net.SocketTimeoutException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 192), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v13 + 24) <= 0x15u )
    goto LABEL_47;
  v161 = StringLiteral_21302/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v13 + 200) = StringLiteral_21302/*"java.net.NoRouteToHostException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 200), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v13 + 24) <= 0x16u )
    goto LABEL_47;
  v168 = StringLiteral_21288/*"java.io.IOException"*/;
  *(_QWORD *)(v13 + 208) = StringLiteral_21288/*"java.io.IOException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 208), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v13 + 24) <= 0x17u )
    goto LABEL_47;
  v175 = StringLiteral_21301/*"java.net.ConnectException"*/;
  *(_QWORD *)(v13 + 216) = StringLiteral_21301/*"java.net.ConnectException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 216), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v13 + 24) <= 0x18u )
    goto LABEL_47;
  v182 = StringLiteral_18515/*"connect failed"*/;
  *(_QWORD *)(v13 + 224) = StringLiteral_18515/*"connect failed"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 224), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v13 + 24) <= 0x19u )
    goto LABEL_47;
  v189 = StringLiteral_21303/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v13 + 232) = StringLiteral_21303/*"java.net.ProtocolException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 232), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Au )
    goto LABEL_47;
  v196 = StringLiteral_21306/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v13 + 240) = StringLiteral_21306/*"java.net.UnknownHostException"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 240), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Bu )
    goto LABEL_47;
  v203 = StringLiteral_1497/*"400: Bad Request"*/;
  *(_QWORD *)(v13 + 248) = StringLiteral_1497/*"400: Bad Request"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 248), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Cu )
    goto LABEL_47;
  v210 = StringLiteral_1499/*"401: Authorization Required"*/;
  *(_QWORD *)(v13 + 256) = StringLiteral_1499/*"401: Authorization Required"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 256), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Du )
    goto LABEL_47;
  v217 = StringLiteral_1501/*"403: Forbidden"*/;
  *(_QWORD *)(v13 + 264) = StringLiteral_1501/*"403: Forbidden"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 264), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Eu )
    goto LABEL_47;
  v224 = StringLiteral_1503/*"404: Not Found"*/;
  *(_QWORD *)(v13 + 272) = StringLiteral_1503/*"404: Not Found"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 272), v224, v218, v219, v220, v221, v222, v223);
  if ( *(_DWORD *)(v13 + 24) <= 0x1Fu )
    goto LABEL_47;
  v231 = StringLiteral_1504/*"408: Request Time-out"*/;
  *(_QWORD *)(v13 + 280) = StringLiteral_1504/*"408: Request Time-out"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 280), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v13 + 24) <= 0x20u )
    goto LABEL_47;
  v238 = StringLiteral_1511/*"500: Internal Server Error"*/;
  *(_QWORD *)(v13 + 288) = StringLiteral_1511/*"500: Internal Server Error"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 288), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v13 + 24) <= 0x21u )
    goto LABEL_47;
  v245 = StringLiteral_1513/*"502:"*/;
  *(_QWORD *)(v13 + 296) = StringLiteral_1513/*"502:"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 296), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v13 + 24) <= 0x22u
    || (v252 = StringLiteral_1515/*"503 Auto retry count"*/,
        *(_QWORD *)(v13 + 304) = StringLiteral_1515/*"503 Auto retry count"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 304), v252, v246, v247, v248, v249, v250, v251),
        *(_DWORD *)(v13 + 24) <= 0x23u)
    || (v259 = StringLiteral_1525/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v13 + 312) = StringLiteral_1525/*"504: Gateway Timeout"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 312), v259, v253, v254, v255, v256, v257, v258),
        *(_DWORD *)(v13 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C2209C(Instance, v6);
  }
  v266 = StringLiteral_15176/*"Unable to read data"*/;
  *(_QWORD *)(v13 + 320) = StringLiteral_15176/*"Unable to read data"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 320), v266, v260, v261, v262, v263, v264, v265);
  if ( (int)*(_QWORD *)(v13 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v267 = 0LL;
  v268 = (unsigned int)*(_QWORD *)(v13 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v13 + 32 + 8 * v267), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v268 == v267 )
      goto LABEL_48;
    if ( ++v267 >= (unsigned __int64)*(unsigned int *)(v13 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v269 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v6), !v269) )
  {
LABEL_58:
    sub_1C22094(Instance, v6);
  }
  CrashReporter__AddCustomKey(v269, (System_String_o *)StringLiteral_5162/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v267 >= *(_DWORD *)(v13 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5163/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v267),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2534/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4BDB59C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB59C = 1;
  }
  endCallback = this->fields.endCallback;
  this->fields.isEndLoad = 1;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetLoader_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      this,
      *(_QWORD *)&endCallback->fields.extra_arg);
  endCallback2 = this->fields.endCallback2;
  if ( endCallback2 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct AssetData_o *, _QWORD))endCallback2->fields.m_target)(
      endCallback2->fields.original_method_info,
      this->fields.data,
      *(_QWORD *)&endCallback2->fields.extra_arg);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)this, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.data = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C22094(0LL, name);
  return System_String__Equals_63123792(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_39016232(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_39008676(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDB59B & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4BDB59B = 1;
  }
  v5 = sub_1C22084(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)resourceNames, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDB59D & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    byte_4BDB59D = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._decData, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ManagementManager_c *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4BDB59E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDB59E = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loader, 0LL, v10, v11, v12, v13, v14, v15);
  }
  this->fields.readData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4BDB610 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDB610 = 1;
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
    UnityEngine_Application__Quit_70662884(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v18);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


void __fastcall AssetLoader__StartLoad(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  bool v15; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callbackFunc,
    (int64_t)resourceNames,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v14 = (__int64)*(p_endCallback - 1);
  if ( !v14 )
    sub_1C22094(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
}


void __fastcall AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v10; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_1C22094(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BDB597 & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4BDB597 = 1;
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
    v9 = sub_1C5D328(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
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

  if ( (byte_4BDB599 & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4BDB599 = 1;
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
    v9 = sub_1C5D328(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
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
  downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(loader, 0LL);
  v5 = this->fields.data;
  if ( !v5 )
LABEL_10:
    sub_1C22094(this, method);
  v6 = downloadProgress * (float)v5->fields.size;
  if ( v6 == INFINITY )
    LODWORD(loader) = 0x80000000;
  else
    LODWORD(loader) = (int)v6;
  return (int)loader;
}


System_String_o *__fastcall AssetLoader__get_Name(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
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

  if ( (byte_4BDB598 & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4BDB598 = 1;
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
    v9 = sub_1C5D328(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
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

  if ( (byte_4BDB59A & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4BDB59A = 1;
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
    v9 = sub_1C5D328(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  AssetLoader__get_IsRequestDownload(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A62AF4;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1C21EF0(v10);
        v16 = sub_1C223AC(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A62BF0;
          else
            v13 = (Il2CppObject *)sub_1A62BB4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A62B30;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A62B04;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A62AD4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A62A8C;
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndDataHandler__BeginInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    data,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndHandler___ctor(
        AssetLoader_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A62904;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1C21EF0(v10);
        v16 = sub_1C223AC(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A62A00;
          else
            v13 = (Il2CppObject *)sub_1A629C4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A62940;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A62914;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A628E4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6289C;
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndHandler__BeginInvoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetLoader_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = loader;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetLoader_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    loader,
    *(_QWORD *)&this->fields.extra_arg);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetLoader__LoadDataCR_d__29_o *v8; // x19
  struct AssetLoader_o *_4__this; // x20
  bool v10; // w8
  const MethodInfo *v11; // x1
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v14; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v17; // x8
  AssetData_o *v18; // x20
  const MethodInfo *v19; // x3
  System_Collections_IEnumerator_o *v20; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct AssetData_o *data; // x8
  System_Byte_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Byte_array *readData; // x22
  struct AssetData_o *v52; // x8
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  float unscaledTime; // s0
  ManagerConfig_c *v72; // x0
  float v73; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v75; // x23
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x23
  ManagerConfig_c *v91; // x0
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  PartyOrganizationUtility_o *p_errorLocalizeCode_5__7; // x0
  int64_t v100; // x1
  System_String_o *Url; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v109; // x8
  AssetLoader__LoadDataCR_d__29_o *v110; // x22
  bool v111; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v130; // s8
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  float v137; // s0
  bool v138; // zf
  float v139; // s8
  UnityEngine_Networking_DownloadHandler_o *v140; // x0
  __int64 v141; // x10
  UnityEngine_Networking_DownloadHandler_o *v142; // x22
  System_String_o *v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int klass; // w8
  System_String_o *v151; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  UnityEngine_Networking_DownloadHandler_c *v158; // x0
  __int64 (**image)(void); // x8
  __int64 v160; // x10
  UnityEngine_Networking_DownloadHandler_c *v161; // x8
  AssetLoader__LoadDataCR_d__29_o *v162; // x22
  System_String_o *v163; // x0
  System_String_o *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  System_String_o *v171; // x1
  PartyOrganizationUtility_o *p_errorCode_5__6; // x0
  System_String_o *v173; // x22
  System_String_o *v174; // x0
  System_String_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v183; // x23
  Il2CppObject *v184; // x23
  AssetLoader__LoadDataCR_d__29_o *v185; // x23
  System_String_o *v186; // x24
  int v187; // w8
  System_String_o *v188; // x0
  struct AssetData_o *v189; // x9
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  AssetLoader__LoadDataCR_d__29_o *v196; // x22
  int64_t v197; // x1
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  int64_t v204; // x1
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  int64_t v211; // x1
  struct AssetData_o *v212; // x8
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  int64_t v225; // x1
  int64_t v226; // x2
  int32_t v227; // w3
  System_String_o *v228; // x4
  BattleSetupInfo_o *v229; // x5
  FollowerInfo_o *v230; // x6
  PartyListViewItem_o *v231; // x7
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  int64_t v238; // x1
  System_String_o *v239; // x0
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  ManagerConfig_c *v246; // x0
  struct AssetData_o *v247; // x8
  CommonUI_o *v248; // x21
  System_String_o *v249; // x22
  ErrorDialog_ClickDelegate_o *v250; // x23
  ManagementManager_c *v251; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v255; // x22
  System_String_o *v256; // x21
  System_String_o *v257; // x23
  System_String_o *v258; // x23
  ErrorDialog_ClickDelegate_o *v259; // x24
  System_String_o *v260; // x23
  System_String_o *v261; // x23
  ErrorDialog_ClickDelegate_o *v262; // x24
  UnityEngine_Networking_UnityWebRequest_o *v263; // x0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  AssetManager_c *v276; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  System_String_o *v284; // x21
  System_String_o *UrlString; // x0
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  AssetLoader__LoadDataCR_d__29_o **v292; // x21
  float v293; // s0
  ManagerConfig_c *v294; // x0
  float v295; // s8
  float v296; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v297; // x0
  int64_t v298; // x2
  int32_t v299; // w3
  System_String_o *v300; // x4
  BattleSetupInfo_o *v301; // x5
  FollowerInfo_o *v302; // x6
  PartyListViewItem_o *v303; // x7
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  float v310; // s0
  float v311; // s9
  float v312; // s8
  float v313; // s0
  float v314; // s8
  System_String_o **v315; // x21
  UnityEngine_Networking_UnityWebRequest_o **v316; // x22
  System_String_o *v317; // x0
  System_String_o *text; // x23
  System_String_o *v319; // x23
  int64_t v320; // x2
  int32_t v321; // w3
  System_String_o *v322; // x4
  BattleSetupInfo_o *v323; // x5
  FollowerInfo_o *v324; // x6
  PartyListViewItem_o *v325; // x7
  AssetLoader__LoadDataCR_d__29_o *v326; // x23
  int _2__current; // w8
  int32_t v328; // w0
  int32_t v329; // w25
  System_String_o *v330; // x24
  System_String_o *v331; // x23
  System_Byte_array *v332; // x25
  uint32_t v333; // w25
  int v334; // w8
  Il2CppObject *v335; // x8
  AssetLoader__LoadDataCR_d__29_o *v336; // x21
  int v337; // w25
  int v338; // w27
  System_String_o *v339; // x22
  Il2CppObject *v340; // x8
  AssetLoader__LoadDataCR_d__29_o *v341; // x22
  char v342; // w8
  const MethodInfo *v343; // x2
  System_String_o *v344; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v346; // x22
  System_String_o *v347; // x0
  const MethodInfo *v348; // x2
  int v349; // w23
  struct AssetData_o *v350; // x8
  ManagementManager_c *v351; // x0
  _BOOL4 v352; // w22
  Il2CppObject *v353; // x21
  System_String_o *v354; // x22
  ErrorDialog_ClickDelegate_o *v355; // x23
  ManagementManager_c *v356; // x0
  _BOOL4 v357; // w21
  Il2CppObject *v358; // x19
  __int64 *v359; // x8
  System_String_o *v360; // x21
  ErrorDialog_ClickDelegate_o *v361; // x22
  bool result; // w0
  __int64 *v363; // x8
  System_String_o *v364; // x22
  ErrorDialog_ClickDelegate_o *v365; // x23
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  int64_t v372; // x2
  int32_t v373; // w3
  System_String_o *v374; // x4
  BattleSetupInfo_o *v375; // x5
  FollowerInfo_o *v376; // x6
  PartyListViewItem_o *v377; // x7
  System_String_o *name; // x21
  AssetData_o *v379; // x22
  AssetLoader__LoadDataCR_d__29_o **v380; // x21
  __int64 v381; // x10
  __int64 v382; // x10
  System_Byte_array *v383; // x0
  UnityEngine_AssetBundleCreateRequest_o *v384; // x0
  int64_t v385; // x2
  int32_t v386; // w3
  System_String_o *v387; // x4
  BattleSetupInfo_o *v388; // x5
  FollowerInfo_o *v389; // x6
  PartyListViewItem_o *v390; // x7
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  int64_t req_5__13; // x1
  int64_t v398; // x2
  int32_t v399; // w3
  System_String_o *v400; // x4
  BattleSetupInfo_o *v401; // x5
  FollowerInfo_o *v402; // x6
  PartyListViewItem_o *v403; // x7
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  PartyOrganizationUtility_o *v405; // x20
  int64_t v406; // x2
  int32_t v407; // w3
  System_String_o *v408; // x4
  BattleSetupInfo_o *v409; // x5
  FollowerInfo_o *v410; // x6
  PartyListViewItem_o *v411; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v412; // x0
  int64_t v413; // x2
  int32_t v414; // w3
  System_String_o *v415; // x4
  BattleSetupInfo_o *v416; // x5
  FollowerInfo_o *v417; // x6
  PartyListViewItem_o *v418; // x7
  ManagerConfig_c *v419; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v422; // x20
  int64_t v423; // x2
  int32_t v424; // w3
  System_String_o *v425; // x4
  BattleSetupInfo_o *v426; // x5
  FollowerInfo_o *v427; // x6
  PartyListViewItem_o *v428; // x7
  int64_t v429; // x1
  int64_t v430; // x1
  int64_t v431; // x2
  int32_t v432; // w3
  System_String_o *v433; // x4
  BattleSetupInfo_o *v434; // x5
  FollowerInfo_o *v435; // x6
  PartyListViewItem_o *v436; // x7
  int64_t v437; // x2
  int32_t v438; // w3
  System_String_o *v439; // x4
  BattleSetupInfo_o *v440; // x5
  FollowerInfo_o *v441; // x6
  PartyListViewItem_o *v442; // x7
  int64_t v443; // x1
  System_String_o *v444; // x1
  int64_t v445; // x2
  int32_t v446; // w3
  System_String_o *v447; // x4
  BattleSetupInfo_o *v448; // x5
  FollowerInfo_o *v449; // x6
  PartyListViewItem_o *v450; // x7
  ManagerConfig_c *v451; // x0
  struct AssetData_o *v452; // x8
  CommonUI_o *v453; // x22
  System_String_o *v454; // x21
  ErrorDialog_ClickDelegate_o *v455; // x23
  int64_t v456; // x1
  ManagementManager_c *v457; // x0
  _BOOL4 v458; // w22
  Il2CppObject *v459; // x21
  System_String_o *v460; // x22
  ErrorDialog_ClickDelegate_o *v461; // x23
  System_String_o *v462; // x22
  ErrorDialog_ClickDelegate_o *v463; // x23
  int64_t v464; // x1
  UnityEngine_WaitForSeconds_o *v465; // x20
  int64_t v466; // x2
  int32_t v467; // w3
  System_String_o *v468; // x4
  BattleSetupInfo_o *v469; // x5
  FollowerInfo_o *v470; // x6
  PartyListViewItem_o *v471; // x7
  AssetLoader___c_c *v472; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v474; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int64_t v476; // x2
  int32_t v477; // w3
  System_String_o *v478; // x4
  BattleSetupInfo_o *v479; // x5
  FollowerInfo_o *v480; // x6
  PartyListViewItem_o *v481; // x7
  UnityEngine_WaitUntil_o *v482; // x21
  int64_t v483; // x2
  int32_t v484; // w3
  System_String_o *v485; // x4
  BattleSetupInfo_o *v486; // x5
  FollowerInfo_o *v487; // x6
  PartyListViewItem_o *v488; // x7
  UnityEngine_Networking_DownloadHandler_o *v489; // x0
  const MethodInfo *v490; // x2
  ManagerConfig_c *v491; // x0
  struct ManagerConfig_StaticFields *v492; // x8
  int64_t wait_5__10; // x1
  PartyOrganizationUtility_o *v494; // x19
  ManagerConfig_c *v495; // x0
  struct ManagerConfig_StaticFields *v496; // x8
  int64_t v497; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v500; // [xsp+18h] [xbp-88h]
  __int64 v501; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v8 = this;
  if ( (byte_4BDB5A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetLoader_EndRebootDialog__);
    sub_1C21E38(&Method_AssetLoader_EndRetryDialog__);
    sub_1C21E38(&Method_AssetLoader_EndWarningDialog__);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&CommonServicePluginScript_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C21E38(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1C21E38(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_IO_IOException_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1C21E38(&AssetLoader___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_9410/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1C21E38(&StringLiteral_7339/*"HTTP"*/);
    sub_1C21E38(&StringLiteral_5440/*"Disk full"*/);
    sub_1C21E38(&StringLiteral_2548/*"AssetStorageList download time over"*/);
    sub_1C21E38(&StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_2535/*"AssetName : "*/);
    sub_1C21E38(&StringLiteral_815/*")\n\n503 Auto retry count "*/);
    sub_1C21E38(&StringLiteral_818/*")\nfile crc ("*/);
    sub_1C21E38(&StringLiteral_1514/*"503"*/);
    sub_1C21E38(&StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_16213/*"[FFFF80]Download error for debug"*/);
    sub_1C21E38(&StringLiteral_2545/*"AssetStorageList download data error"*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    sub_1C21E38(&StringLiteral_12498/*"STATUS"*/);
    sub_1C21E38(&StringLiteral_814/*")\n\n"*/);
    sub_1C21E38(&StringLiteral_9409/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1C21E38(&StringLiteral_693/*"("*/);
    sub_1C21E38(&StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    sub_1C21E38(&StringLiteral_19381/*"error "*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_2546/*"AssetStorageList download error"*/);
    sub_1C21E38(&StringLiteral_817/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB5A2 = 1;
  }
  v501 = 0LL;
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      if ( this->fields.__1__state )
        v10 = 0;
      else
        v10 = AssetData__GetExt((AssetData_o *)this, method) == 0LL;
      v8->fields._isEncrypted_5__2 = v10;
      v8->fields._autoRetryCount_5__3 = 0;
      goto LABEL_59;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_78;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_148;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_173;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_172;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_196;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_337;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_352;
    case 8:
      v8->fields._asyncOperater_5__12 = 0LL;
      v8->fields.__1__state = -1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      goto LABEL_189;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_289;
    case 0xA:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_312;
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0LL);
      if ( !*p_loader )
        goto LABEL_375;
      v14 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v17 = downloadHandler;
          else
            v17 = 0LL;
          if ( (v14 & 1) != 0 )
            goto LABEL_30;
LABEL_47:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_375;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v37, v38, v39, v40, v41, v42);
          data = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !data )
            goto LABEL_375;
          data->fields.nowVersion = 0;
          goto LABEL_59;
        }
      }
      v17 = 0LL;
      if ( (v14 & 1) == 0 )
        goto LABEL_47;
LABEL_30:
      if ( v17 )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)LODWORD(v17[1].klass);
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v44 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = v44;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.readData,
          (int64_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)Crc32__Compute(readData, 0LL);
      }
      v52 = _4__this->fields.data;
      if ( !v52 )
        goto LABEL_375;
      if ( (_DWORD)this == v52->fields.crc )
        goto LABEL_294;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      v52->fields.nowVersion = 0;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v53, v54, v55, v56, v57, v58);
      _4__this->fields.readData = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v59, v60, v61, v62, v63, v64);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        if ( _4__this->fields.isDownload )
          break;
LABEL_292:
        v52 = _4__this->fields.data;
        if ( !v52 )
          goto LABEL_375;
        if ( v52->fields.entryCount >= 1 )
        {
          if ( v8->fields._isEncrypted_5__2 )
          {
LABEL_312:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_375;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
            _4__this->fields.loader = LoadRequest;
            v405 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
            sub_1C21DDC(v405, (int64_t)LoadRequest, v406, v407, v408, v409, v410, v411);
            this = (AssetLoader__LoadDataCR_d__29_o *)v405->klass;
            if ( !v405->klass )
              goto LABEL_375;
            v412 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v412;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, (int64_t)v412, v413, v414, v415, v416, v417, v418);
            v28 = 11;
          }
          else
          {
            v472 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v472 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v472->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v472->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v472);
                v472 = AssetLoader___c_TypeInfo;
              }
              v474 = (Il2CppObject *)v472->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v474, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
                (int64_t)_9__29_0,
                v476,
                v477,
                v478,
                v479,
                v480,
                v481);
            }
            v482 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v482, _9__29_0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v482;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, (int64_t)v482, v483, v484, v485, v486, v487, v488);
            v28 = 10;
          }
          goto LABEL_355;
        }
LABEL_294:
        if ( _4__this->fields.isDownload )
        {
          name = v52->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(name, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_298:
        v379 = _4__this->fields.data;
        if ( !v379 )
          goto LABEL_375;
        if ( v379->fields.entryCount >= 1 )
        {
          v380 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v8->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v381 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v381)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v381 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v380;
              if ( !*v380 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v382 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v382
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v382 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v383 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v384 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v383, 0LL);
            v8->fields._req_5__13 = v384;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields._req_5__13,
              (int64_t)v384,
              v385,
              v386,
              v387,
              v388,
              v389,
              v390);
            this = *v380;
            if ( !*v380 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v380 = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v391, v392, v393, v394, v395, v396);
            req_5__13 = (int64_t)v8->fields._req_5__13;
            v8->fields.__2__current = (Il2CppObject *)req_5__13;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, req_5__13, v398, v399, v400, v401, v402, v403);
            v28 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v489 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v379, v489, v490);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v30, v31, v32, v33, v34, v35);
        }
        _4__this->fields.readData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, v36);
        return 0;
      }
      *(_WORD *)&v8->fields._isAutoRetry_5__4 = 0;
      v8->fields._errorCode_5__6 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v8->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7, 0LL, v65, v66, v67, v68, v69, v70);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v72 = ManagerConfig_TypeInfo;
      v73 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v72 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v72->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v73 + TIMEOUT;
      v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v75, 0LL);
      v8->fields._wait_5__10 = v75;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__10, (int64_t)v75, v76, v77, v78, v79, v80, v81);
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v90 = FreeSize;
        v91 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v91 = ManagerConfig_TypeInfo;
        }
        if ( v90 < v91->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v92 = StringLiteral_5440/*"Disk full"*/;
          v8->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5440/*"Disk full"*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, v92, v84, v85, v86, v87, v88, v89);
          p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7;
          v100 = StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/;
          v8->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v8->fields._url_5__11 = Url;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)Url,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v8->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
      v109 = _4__this->fields.data;
      v110 = this;
      if ( v8->fields._isEncrypted_5__2 )
      {
        if ( !v109 )
          goto LABEL_375;
        v111 = v109->fields.entryCount > 0;
      }
      else
      {
        if ( !v109 )
          goto LABEL_375;
        v111 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, method);
      v113 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v110, v111, Key, 0LL);
      _4__this->fields.loader = v113;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v120 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v120;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v8->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1C22094(this, method);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
          goto LABEL_375;
        progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        loadProgress_5__9 = v8->fields._loadProgress_5__9;
        v130 = progress;
        v137 = UnityEngine_Time__get_unscaledTime(0LL);
        v138 = v130 == loadProgress_5__9;
        v139 = v137;
        if ( !v138 )
        {
          v491 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v491 = ManagerConfig_TypeInfo;
          }
          v492 = v491->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v139 + v492->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)wait_5__10;
          v494 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v494, wait_5__10, v131, v132, v133, v134, v135, v136);
          result = 1;
          *(_DWORD *)&v494[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        if ( v137 < v8->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v140 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v140
        && (v141 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v140->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v141) )
      {
        v142 = (DownloadHandlerFileWithCrcCheck_c *)v140->klass->_2.typeHierarchy[v141 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v140
             : 0LL;
      }
      else
      {
        v142 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v151 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v8->fields._url_5__11,
                 (System_String_o *)StringLiteral_817/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v8->fields._errorCode_5__6 = v151;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v151,
          v152,
          v153,
          v154,
          v155,
          v156,
          v157);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v142 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v142, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v143 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v143, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v142 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v501) = klass;
          v189 = _4__this->fields.data;
          if ( !v189 )
            goto LABEL_375;
          if ( klass == v189->fields.crc )
          {
            v189->fields.nowVersion = v189->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v196 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v197 = StringLiteral_693/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_693/*"("*/;
            sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__4__this, v197, v190, v191, v192, v193, v194, v195);
            if ( LODWORD(v196->fields.__2__current) <= 1 )
              goto LABEL_258;
            v204 = (int64_t)v8->fields._url_5__11;
            v196->fields.resourceNames = (struct System_String_array *)v204;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields.resourceNames,
              v204,
              v198,
              v199,
              v200,
              v201,
              v202,
              v203);
            if ( LODWORD(v196->fields.__2__current) <= 2 )
              goto LABEL_258;
            v211 = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v196->fields._isEncrypted_5__2 = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields._isEncrypted_5__2,
              v211,
              v205,
              v206,
              v207,
              v208,
              v209,
              v210);
            v212 = _4__this->fields.data;
            if ( !v212 )
              goto LABEL_375;
            LODWORD(v501) = v212->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v501, 0LL);
            if ( LODWORD(v196->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v196->fields._isAutoRetry_5__4 = this;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields._isAutoRetry_5__4,
              (int64_t)this,
              v213,
              v214,
              v215,
              v216,
              v217,
              v218);
            if ( LODWORD(v196->fields.__2__current) <= 4 )
              goto LABEL_258;
            v225 = StringLiteral_818/*")\nfile crc ("*/;
            v196->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_818/*")\nfile crc ("*/;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields._errorCode_5__6,
              v225,
              v219,
              v220,
              v221,
              v222,
              v223,
              v224);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v501 + 4, 0LL);
            if ( LODWORD(v196->fields.__2__current) <= 5 )
              goto LABEL_258;
            v196->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields._errorLocalizeCode_5__7,
              (int64_t)this,
              v226,
              v227,
              v228,
              v229,
              v230,
              v231);
            if ( LODWORD(v196->fields.__2__current) <= 6 )
              goto LABEL_258;
            v238 = StringLiteral_812/*")"*/;
            *(_QWORD *)&v196->fields._requestTime_5__8 = StringLiteral_812/*")"*/;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v196->fields._requestTime_5__8,
              v238,
              v232,
              v233,
              v234,
              v235,
              v236,
              v237);
            v239 = System_String__Concat_63129004((System_String_array *)v196, 0LL);
            v8->fields._errorCode_5__6 = v239;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
              (int64_t)v239,
              v240,
              v241,
              v242,
              v243,
              v244,
              v245);
            v8->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v142[4].klass )
        {
          klass = (int)v142[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v142 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v173 = v8->fields._url_5__11;
        v174 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v175 = System_String__Concat_63128740(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v173,
                 (System_String_o *)StringLiteral_814/*")\n\n"*/,
                 v174,
                 0LL);
        v8->fields._errorCode_5__6 = v175;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v175,
          v176,
          v177,
          v178,
          v179,
          v180,
          v181);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v183 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v183,
                (Il2CppObject *)StringLiteral_12498/*"STATUS"*/,
                &value,
                (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v184 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v184 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63137868(
                                                    (System_String_o *)v184,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v185 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7339/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v185->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v185->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_63123792((System_String_o *)this, (System_String_o *)StringLiteral_1514/*"503"*/, 0LL) )
          goto LABEL_140;
        v186 = v8->fields._url_5__11;
        v187 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__4 = 1;
        v8->fields._autoRetryCount_5__3 = v187;
        v188 = System_Int32__ToString((int)v8 + 52, 0LL);
        v171 = System_String__Concat_63128740(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v186,
                 (System_String_o *)StringLiteral_815/*")\n\n503 Auto retry count "*/,
                 v188,
                 0LL);
        v8->fields._errorCode_5__6 = v171;
        p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v142, 0LL);
      v158 = v142[4].klass;
      if ( !v158 )
        goto LABEL_110;
      image = (__int64 (**)(void))v158->_1.image;
      v160 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v158->_1.image + 304) >= (unsigned int)v160
        && *((System_IO_IOException_c **)image[25] + v160 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v164 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v158->_1.image
                                   + 49))(
                                    v158,
                                    *((_QWORD *)v158->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v161 = v142[4].klass;
        if ( !v161 )
          goto LABEL_375;
        v162 = this;
        v163 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v161->_1.image
                                   + 49))(
                                    v161,
                                    *((_QWORD *)v161->_1.image + 50));
        v164 = System_String__Concat_63128740(
                 (System_String_o *)StringLiteral_19381/*"error "*/,
                 (System_String_o *)v162,
                 (System_String_o *)StringLiteral_117/*" "*/,
                 v163,
                 0LL);
      }
      v171 = v164;
      v8->fields._errorCode_5__6 = v164;
      p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
LABEL_109:
      sub_1C21DDC(p_errorCode_5__6, (int64_t)v171, v165, v166, v167, v168, v169, v170);
LABEL_140:
      v8->fields._url_5__11 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, v144, v145, v146, v147, v148, v149);
      p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12;
      v100 = 0LL;
      v8->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1C21DDC(p_errorLocalizeCode_5__7, v100, v93, v94, v95, v96, v97, v98);
      method = (const MethodInfo *)v8->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v246 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v246 = ManagerConfig_TypeInfo;
        }
        if ( v246->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v247 = _4__this->fields.data;
          if ( !v247 )
            goto LABEL_375;
          v248 = (CommonUI_o *)this;
          v249 = System_String__Concat_63128740(
                   (System_String_o *)StringLiteral_2535/*"AssetName : "*/,
                   v247->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v8->fields._errorCode_5__6,
                   0LL);
          v250 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v250, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v248 )
            goto LABEL_375;
          v500 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v500;
          CommonUI__OpenWarningDialog(
            v248,
            (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
            v249,
            v250,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v429 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v429;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, v429, (int64_t)v2, v3, v4, v5, v6, v7);
            v28 = 2;
            goto LABEL_355;
          }
        }
        if ( v8->fields._isAutoRetry_5__4 )
        {
          v419 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v419 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v419->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v422 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v422, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v422;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v422, v423, v424, v425, v426, v427, v428);
          v28 = 3;
          goto LABEL_355;
        }
        if ( !v8->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4BDB610 )
          {
            sub_1C21E38(&ManagementManager_TypeInfo);
            byte_4BDB610 = 1;
          }
          v251 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v251 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v251->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v8->fields._errorLocalizeCode_5__7;
          v255 = (CommonUI_o *)Instance;
          v256 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v257 = v8->fields._errorLocalizeCode_5__7;
            else
              v257 = (System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v258 = LocalizationManager__Get(v257, 0LL);
            v259 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v259, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v255 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v255, v256, v258, v259, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v260 = v8->fields._errorLocalizeCode_5__7;
            else
              v260 = (System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v261 = LocalizationManager__Get(v260, 0LL);
            v262 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v262, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v255 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v255, v256, v261, v262, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v430 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v430;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, v430, (int64_t)v2, v3, v4, v5, v6, v7);
            v28 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD7BC5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD7BC5 = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_375;
      if ( LOBYTE(this[1].fields._errorCode_5__6[6].klass) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v431, v432, v433, v434, v435, v436);
        _4__this->fields.readData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v437, v438, v439, v440, v441, v442);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v8->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v263 = _4__this->fields.loader;
      if ( v263 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v263, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v264, v265, v266, v267, v268, v269);
        _4__this->fields.readData = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v270, v271, v272, v273, v274, v275);
      }
      if ( !v8->fields._isCrcError_5__5 )
      {
LABEL_291:
        v8->fields._errorCode_5__6 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7,
          0LL,
          v366,
          v367,
          v368,
          v369,
          v370,
          v371);
        v8->fields._wait_5__10 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__10, 0LL, v372, v373, v374, v375, v376, v377);
        goto LABEL_292;
      }
      v276 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v276);
      v8->fields._url_5__11 = ConfigFileAddress;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)ConfigFileAddress,
        v278,
        v279,
        v280,
        v281,
        v282,
        v283);
LABEL_189:
      v284 = v8->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v284, v11);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v292 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)this,
        v286,
        v287,
        v288,
        v289,
        v290,
        v291);
      v293 = UnityEngine_Time__get_unscaledTime(0LL);
      v294 = ManagerConfig_TypeInfo;
      v295 = v293;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v294 = ManagerConfig_TypeInfo;
      }
      v296 = v294->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v295 + v296;
      this = *v292;
      if ( !*v292 )
        goto LABEL_375;
      v297 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v297;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v297,
        v298,
        v299,
        v300,
        v301,
        v302,
        v303);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v310 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v311 = v8->fields._loadProgress_5__9;
        v312 = v310;
        v313 = UnityEngine_Time__get_unscaledTime(0LL);
        v138 = v312 == v311;
        v314 = v313;
        if ( !v138 )
        {
          v495 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v495 = ManagerConfig_TypeInfo;
          }
          v496 = v495->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v314 + v496->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v313 < v8->fields._requestTime_5__8 )
        {
LABEL_374:
          v497 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v497;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, v497, v304, v305, v306, v307, v308, v309);
          v28 = 5;
          goto LABEL_355;
        }
      }
      v8->fields._errorCode_5__6 = 0LL;
      v315 = &v8->fields._errorCode_5__6;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, v304, v305, v306, v307, v308, v309);
      if ( !_4__this )
        goto LABEL_375;
      v316 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v316 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v316, 0LL);
        v363 = &StringLiteral_2548/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v317 = UnityEngine_Networking_UnityWebRequest__get_error(*v316, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v317, 0LL);
      if ( !*v316 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v444 = UnityEngine_Networking_UnityWebRequest__get_error(*v316, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v316, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v319 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v319, 0LL) )
      {
        v363 = &StringLiteral_2546/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v319 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_63145224(v319, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v326 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25605/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      _2__current = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !_2__current )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = 13;
      if ( _2__current == 1 )
        goto LABEL_258;
      WORD1(this->fields.__4__this) = 10;
      v328 = System_String__IndexOfAny((System_String_o *)v326, (System_Char_array *)this, 0LL);
      if ( v328 < 2 )
        goto LABEL_286;
      v329 = v328;
      v330 = System_String__Substring_63134480((System_String_o *)v326, 1, v328 - 1, 0LL);
      v331 = System_String__Substring((System_String_o *)v326, v329 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v332 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                    this,
                                    v331,
                                    this->klass[1]._1.interfaceOffsets);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v333 = Crc32__Compute(v332, 0LL);
      if ( System_UInt32__Parse(v330, 0LL) != v333 )
      {
LABEL_286:
        v363 = &StringLiteral_2545/*"AssetStorageList download data error"*/;
LABEL_327:
        v444 = (System_String_o *)*v363;
LABEL_328:
        *v315 = v444;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v444,
          v320,
          v321,
          v322,
          v323,
          v324,
          v325);
        if ( *v316 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v316, 0LL);
          *v316 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v445, v446, v447, v448, v449, v450);
        }
        if ( !*v315 )
          goto LABEL_354;
        v451 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v451 = ManagerConfig_TypeInfo;
        }
        if ( v451->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v452 = _4__this->fields.data;
          if ( !v452 )
            goto LABEL_375;
          v453 = (CommonUI_o *)this;
          v454 = System_String__Concat_63128740(
                   (System_String_o *)StringLiteral_2535/*"AssetName : "*/,
                   v452->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v315,
                   0LL);
          v455 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v455, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v453 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v453,
            (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
            v454,
            v455,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v456 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v456;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, v456, (int64_t)v2, v3, v4, v5, v6, v7);
            v28 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4BDB610 )
        {
          sub_1C21E38(&ManagementManager_TypeInfo);
          byte_4BDB610 = 1;
        }
        v457 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v457 = ManagementManager_TypeInfo;
        }
        v458 = v457->static_fields->isDuringStartup;
        v459 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v458 )
        {
          v460 = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v461 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v461, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v459 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v459, (System_String_o *)StringLiteral_1/*""*/, v460, v461, 0, 0LL);
        }
        else
        {
          v462 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v463 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v463, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v459 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v459, (System_String_o *)StringLiteral_1/*""*/, v462, v463, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v464 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v464;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, v464, (int64_t)v2, v3, v4, v5, v6, v7);
          v28 = 7;
        }
        else
        {
LABEL_354:
          v465 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v465, 1.0, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v465;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v465, v466, v467, v468, v469, v470, v471);
          v28 = 8;
        }
LABEL_355:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v28;
        return 1;
      }
      if ( !v331 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v334 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v334 || (LOWORD(this->fields.__4__this) = 13, v334 == 1) )
LABEL_258:
        sub_1C2209C(this, method);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63137868(v331, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v335 = this->fields.__2__current;
      v336 = this;
      v337 = (_DWORD)v335 - 1;
      if ( (int)v335 < 1 )
        goto LABEL_272;
      v338 = 0;
      while ( 2 )
      {
        v339 = (System_String_o *)*((_QWORD *)&v336->fields.__4__this + v338);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C21EE0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v339 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63137632(v339, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v340 = this->fields.__2__current;
        v341 = this;
        if ( (int)v340 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1892/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v341->fields.__2__current) )
            goto LABEL_258;
          v342 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v341->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v342 & 1) != 0 )
          {
            v344 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v341->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v341->fields.resourceNames;
            v346 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v344, v346, v343);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25605/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v341->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v341->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v340 = v341->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v337 == v338 )
            goto LABEL_272;
          if ( (unsigned int)++v338 >= LODWORD(v336->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v340 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v341->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v347 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v347, 0LL);
      if ( LODWORD(v341->fields.__2__current) <= 4 )
        goto LABEL_258;
      v349 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v341->fields._errorCode_5__6, v348);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v350 = _4__this->fields.data;
      if ( !v350 )
        goto LABEL_375;
      if ( v349 == v350->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4BDB610 )
        {
          sub_1C21E38(&ManagementManager_TypeInfo);
          byte_4BDB610 = 1;
        }
        v351 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v351 = ManagementManager_TypeInfo;
        }
        v352 = v351->static_fields->isDuringStartup;
        v353 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v352 )
        {
          v354 = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v355 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v355, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v353 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v353, (System_String_o *)StringLiteral_1/*""*/, v354, v355, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v364 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v365 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v365, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v353 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v353, (System_String_o *)StringLiteral_1/*""*/, v364, v365, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v8->fields._url_5__11 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
          goto LABEL_291;
        }
        v443 = (int64_t)v8->fields._wait_5__10;
        v8->fields.__2__current = (Il2CppObject *)v443;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, v443, (int64_t)v2, v3, v4, v5, v6, v7);
        v28 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4BDB610 )
      {
        sub_1C21E38(&ManagementManager_TypeInfo);
        byte_4BDB610 = 1;
      }
      v356 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v356 = ManagementManager_TypeInfo;
      }
      v357 = v356->static_fields->isDuringStartup;
      v358 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v357 )
          goto LABEL_280;
LABEL_282:
        v359 = &StringLiteral_9409/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v357 )
          goto LABEL_282;
LABEL_280:
        v359 = &StringLiteral_9410/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v360 = LocalizationManager__Get((System_String_o *)*v359, 0LL);
      v361 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v361, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v358 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v358, (System_String_o *)StringLiteral_1/*""*/, v360, v361, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._req_5__13;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_37;
      if ( !_4__this )
        goto LABEL_375;
      v18 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v18 )
        goto LABEL_375;
      v20 = AssetData__SetAssetBundleData(v18, (UnityEngine_AssetBundle_o *)this, v8->fields.resourceNames, v19);
      v8->fields.__2__current = (Il2CppObject *)v20;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
      v28 = 13;
      goto LABEL_355;
    case 0xD:
      v8->fields.__1__state = -1;
LABEL_37:
      v8->fields._req_5__13 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._req_5__13, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      if ( _4__this )
        goto LABEL_38;
      goto LABEL_375;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDB5A0 & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader___c_TypeInfo);
    byte_4BDB5A0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AssetLoader___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDB5A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}