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
    sub_1BCAA3C(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 Instance; // x0
  const MethodInfo *v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x21
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
  int64_t v267; // x2
  int32_t v268; // w3
  System_String_o *v269; // x4
  BattleSetupInfo_o *v270; // x5
  FollowerInfo_o *v271; // x6
  PartyListViewItem_o *v272; // x7
  int64_t v273; // x1
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  int64_t v280; // x1
  int64_t v281; // x2
  int32_t v282; // w3
  System_String_o *v283; // x4
  BattleSetupInfo_o *v284; // x5
  FollowerInfo_o *v285; // x6
  PartyListViewItem_o *v286; // x7
  int64_t v287; // x1
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  int64_t v294; // x1
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  int64_t v301; // x1
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  int64_t v308; // x1
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  int64_t v315; // x1
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  int64_t v322; // x1
  int64_t v323; // x2
  int32_t v324; // w3
  System_String_o *v325; // x4
  BattleSetupInfo_o *v326; // x5
  FollowerInfo_o *v327; // x6
  PartyListViewItem_o *v328; // x7
  int64_t v329; // x1
  int64_t v330; // x2
  int32_t v331; // w3
  System_String_o *v332; // x4
  BattleSetupInfo_o *v333; // x5
  FollowerInfo_o *v334; // x6
  PartyListViewItem_o *v335; // x7
  int64_t v336; // x1
  int64_t v337; // x2
  int32_t v338; // w3
  System_String_o *v339; // x4
  BattleSetupInfo_o *v340; // x5
  FollowerInfo_o *v341; // x6
  PartyListViewItem_o *v342; // x7
  int64_t v343; // x1
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  int64_t v350; // x1
  __int64 v351; // x23
  __int64 v352; // x24
  CrashReporter_o *v353; // x19
  __int64 v354; // x1

  v3 = errorCode;
  if ( (byte_4B15269 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, errorCode, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_14271/*"The request timed out."*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_21153/*"java.net.SocketException"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12370/*"SSL CA certificate error"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1498/*"404: Not Found"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_14201/*"The network connection was lost."*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1493/*"400: Bad Request"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15048/*"Unable to complete SSL connection"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_15079/*"Unable to read data"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18390/*"connect failed"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_7292/*"HTTP/1.1 500 Internal Server Error"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21155/*"java.net.UnknownHostException"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1507/*"500: Internal Server Error"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1509/*"502:"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11444/*"Request timeout"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_4763/*"Connection reset by peer"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5128/*"DLErrorType"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5127/*"DLErrorAsset"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1521/*"504: Gateway Timeout"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_15256/*"Unknown Error"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_1511/*"503 Auto retry count"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_21136/*"java.io.EOFException"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_21150/*"java.net.ConnectException"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1496/*"403: Forbidden"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_4762/*"Connection refused"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_7293/*"HTTP/1.1 504 Gateway Timeout"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_1495/*"401: Authorization Required"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_21137/*"java.io.IOException"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_9561/*"No address associated with hostname"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_21152/*"java.net.ProtocolException"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2512/*"AssetBundle file download time over"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_1499/*"408: Request Time-out"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_14689/*"Too many redirects"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_12981/*"Software caused connection abort"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_2511/*"AssetBundle file check sum error"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_21151/*"java.net.NoRouteToHostException"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_5364/*"Destination host has an erroneous SSL certificate"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_4764/*"Connection timed out"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_4360/*"Cannot resolve destination host"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_21154/*"java.net.SocketTimeoutException"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_2515/*"AssetLoadError"*/, v87, v88);
    byte_4B15269 = 1;
  }
  Instance = sub_1BCA888(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v97 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v98 = StringLiteral_9561/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9561/*"No address associated with hostname"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 32), v98, v91, v92, v93, v94, v95, v96);
  if ( *(_DWORD *)(v97 + 24) <= 1u )
    goto LABEL_47;
  v105 = StringLiteral_2512/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v97 + 40) = StringLiteral_2512/*"AssetBundle file download time over"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 40), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v97 + 24) <= 2u )
    goto LABEL_47;
  v112 = StringLiteral_14201/*"The network connection was lost."*/;
  *(_QWORD *)(v97 + 48) = StringLiteral_14201/*"The network connection was lost."*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 48), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v97 + 24) <= 3u )
    goto LABEL_47;
  v119 = StringLiteral_4763/*"Connection reset by peer"*/;
  *(_QWORD *)(v97 + 56) = StringLiteral_4763/*"Connection reset by peer"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 56), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v97 + 24) <= 4u )
    goto LABEL_47;
  v126 = StringLiteral_12981/*"Software caused connection abort"*/;
  *(_QWORD *)(v97 + 64) = StringLiteral_12981/*"Software caused connection abort"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 64), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v97 + 24) <= 5u )
    goto LABEL_47;
  v133 = StringLiteral_4764/*"Connection timed out"*/;
  *(_QWORD *)(v97 + 72) = StringLiteral_4764/*"Connection timed out"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 72), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v97 + 24) <= 6u )
    goto LABEL_47;
  v140 = StringLiteral_4762/*"Connection refused"*/;
  *(_QWORD *)(v97 + 80) = StringLiteral_4762/*"Connection refused"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 80), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v97 + 24) <= 7u )
    goto LABEL_47;
  v147 = StringLiteral_14271/*"The request timed out."*/;
  *(_QWORD *)(v97 + 88) = StringLiteral_14271/*"The request timed out."*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 88), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v97 + 24) <= 8u )
    goto LABEL_47;
  v154 = StringLiteral_4360/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v97 + 96) = StringLiteral_4360/*"Cannot resolve destination host"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 96), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v97 + 24) <= 9u )
    goto LABEL_47;
  v161 = StringLiteral_15048/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v97 + 104) = StringLiteral_15048/*"Unable to complete SSL connection"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 104), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v97 + 24) <= 0xAu )
    goto LABEL_47;
  v168 = StringLiteral_15256/*"Unknown Error"*/;
  *(_QWORD *)(v97 + 112) = StringLiteral_15256/*"Unknown Error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 112), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v97 + 24) <= 0xBu )
    goto LABEL_47;
  v175 = StringLiteral_11444/*"Request timeout"*/;
  *(_QWORD *)(v97 + 120) = StringLiteral_11444/*"Request timeout"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 120), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v97 + 24) <= 0xCu )
    goto LABEL_47;
  v182 = StringLiteral_2511/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v97 + 128) = StringLiteral_2511/*"AssetBundle file check sum error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 128), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v97 + 24) <= 0xDu )
    goto LABEL_47;
  v189 = StringLiteral_12370/*"SSL CA certificate error"*/;
  *(_QWORD *)(v97 + 136) = StringLiteral_12370/*"SSL CA certificate error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 136), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v97 + 24) <= 0xEu )
    goto LABEL_47;
  v196 = StringLiteral_7292/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v97 + 144) = StringLiteral_7292/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 144), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v97 + 24) <= 0xFu )
    goto LABEL_47;
  v203 = StringLiteral_7293/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v97 + 152) = StringLiteral_7293/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 152), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v97 + 24) <= 0x10u )
    goto LABEL_47;
  v210 = StringLiteral_5364/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v97 + 160) = StringLiteral_5364/*"Destination host has an erroneous SSL certificate"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 160), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v97 + 24) <= 0x11u )
    goto LABEL_47;
  v217 = StringLiteral_14689/*"Too many redirects"*/;
  *(_QWORD *)(v97 + 168) = StringLiteral_14689/*"Too many redirects"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 168), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v97 + 24) <= 0x12u )
    goto LABEL_47;
  v224 = StringLiteral_21136/*"java.io.EOFException"*/;
  *(_QWORD *)(v97 + 176) = StringLiteral_21136/*"java.io.EOFException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 176), v224, v218, v219, v220, v221, v222, v223);
  if ( *(_DWORD *)(v97 + 24) <= 0x13u )
    goto LABEL_47;
  v231 = StringLiteral_21153/*"java.net.SocketException"*/;
  *(_QWORD *)(v97 + 184) = StringLiteral_21153/*"java.net.SocketException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 184), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v97 + 24) <= 0x14u )
    goto LABEL_47;
  v238 = StringLiteral_21154/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v97 + 192) = StringLiteral_21154/*"java.net.SocketTimeoutException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 192), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v97 + 24) <= 0x15u )
    goto LABEL_47;
  v245 = StringLiteral_21151/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v97 + 200) = StringLiteral_21151/*"java.net.NoRouteToHostException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 200), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v97 + 24) <= 0x16u )
    goto LABEL_47;
  v252 = StringLiteral_21137/*"java.io.IOException"*/;
  *(_QWORD *)(v97 + 208) = StringLiteral_21137/*"java.io.IOException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 208), v252, v246, v247, v248, v249, v250, v251);
  if ( *(_DWORD *)(v97 + 24) <= 0x17u )
    goto LABEL_47;
  v259 = StringLiteral_21150/*"java.net.ConnectException"*/;
  *(_QWORD *)(v97 + 216) = StringLiteral_21150/*"java.net.ConnectException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 216), v259, v253, v254, v255, v256, v257, v258);
  if ( *(_DWORD *)(v97 + 24) <= 0x18u )
    goto LABEL_47;
  v266 = StringLiteral_18390/*"connect failed"*/;
  *(_QWORD *)(v97 + 224) = StringLiteral_18390/*"connect failed"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 224), v266, v260, v261, v262, v263, v264, v265);
  if ( *(_DWORD *)(v97 + 24) <= 0x19u )
    goto LABEL_47;
  v273 = StringLiteral_21152/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v97 + 232) = StringLiteral_21152/*"java.net.ProtocolException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 232), v273, v267, v268, v269, v270, v271, v272);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Au )
    goto LABEL_47;
  v280 = StringLiteral_21155/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v97 + 240) = StringLiteral_21155/*"java.net.UnknownHostException"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 240), v280, v274, v275, v276, v277, v278, v279);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Bu )
    goto LABEL_47;
  v287 = StringLiteral_1493/*"400: Bad Request"*/;
  *(_QWORD *)(v97 + 248) = StringLiteral_1493/*"400: Bad Request"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 248), v287, v281, v282, v283, v284, v285, v286);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Cu )
    goto LABEL_47;
  v294 = StringLiteral_1495/*"401: Authorization Required"*/;
  *(_QWORD *)(v97 + 256) = StringLiteral_1495/*"401: Authorization Required"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 256), v294, v288, v289, v290, v291, v292, v293);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Du )
    goto LABEL_47;
  v301 = StringLiteral_1496/*"403: Forbidden"*/;
  *(_QWORD *)(v97 + 264) = StringLiteral_1496/*"403: Forbidden"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 264), v301, v295, v296, v297, v298, v299, v300);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Eu )
    goto LABEL_47;
  v308 = StringLiteral_1498/*"404: Not Found"*/;
  *(_QWORD *)(v97 + 272) = StringLiteral_1498/*"404: Not Found"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 272), v308, v302, v303, v304, v305, v306, v307);
  if ( *(_DWORD *)(v97 + 24) <= 0x1Fu )
    goto LABEL_47;
  v315 = StringLiteral_1499/*"408: Request Time-out"*/;
  *(_QWORD *)(v97 + 280) = StringLiteral_1499/*"408: Request Time-out"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 280), v315, v309, v310, v311, v312, v313, v314);
  if ( *(_DWORD *)(v97 + 24) <= 0x20u )
    goto LABEL_47;
  v322 = StringLiteral_1507/*"500: Internal Server Error"*/;
  *(_QWORD *)(v97 + 288) = StringLiteral_1507/*"500: Internal Server Error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 288), v322, v316, v317, v318, v319, v320, v321);
  if ( *(_DWORD *)(v97 + 24) <= 0x21u )
    goto LABEL_47;
  v329 = StringLiteral_1509/*"502:"*/;
  *(_QWORD *)(v97 + 296) = StringLiteral_1509/*"502:"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 296), v329, v323, v324, v325, v326, v327, v328);
  if ( *(_DWORD *)(v97 + 24) <= 0x22u
    || (v336 = StringLiteral_1511/*"503 Auto retry count"*/,
        *(_QWORD *)(v97 + 304) = StringLiteral_1511/*"503 Auto retry count"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 304), v336, v330, v331, v332, v333, v334, v335),
        *(_DWORD *)(v97 + 24) <= 0x23u)
    || (v343 = StringLiteral_1521/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v97 + 312) = StringLiteral_1521/*"504: Gateway Timeout"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 312), v343, v337, v338, v339, v340, v341, v342),
        *(_DWORD *)(v97 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1BCAA44(Instance, v90);
  }
  v350 = StringLiteral_15079/*"Unable to read data"*/;
  *(_QWORD *)(v97 + 320) = StringLiteral_15079/*"Unable to read data"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 320), v350, v344, v345, v346, v347, v348, v349);
  if ( (int)*(_QWORD *)(v97 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v90);
    goto LABEL_57;
  }
  v351 = 0LL;
  v352 = (unsigned int)*(_QWORD *)(v97 + 24) - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_58;
    Instance = System_String__Contains(v3, *(System_String_o **)(v97 + 32 + 8 * v351), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v352 == v351 )
      goto LABEL_48;
    if ( ++v351 >= (unsigned __int64)*(unsigned int *)(v97 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v353 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v90), !v353) )
  {
LABEL_58:
    sub_1BCAA3C(Instance, v90);
  }
  CrashReporter__AddCustomKey(v353, (System_String_o *)StringLiteral_5127/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v351 >= *(_DWORD *)(v97 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5128/*"DLErrorType"*/,
    *(System_String_o **)(v97 + 32 + 8 * v351),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v354);
  v3 = (System_String_o *)StringLiteral_2515/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4B15266 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15266 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)this, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(0LL, name);
  return System_String__Equals_62409536(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_38487064(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_38479508(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B15265 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames, method);
    byte_4B15265 = 1;
  }
  v6 = sub_1BCAA2C(AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = resourceNames;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)resourceNames, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *readData; // x20
  struct System_Byte_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15267 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    byte_4B15267 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, method);
  v5 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._decData, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  ManagementManager_c *v22; // x0
  Il2CppObject *Instance; // x0
  __int64 v24; // x1

  if ( (byte_4B15268 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v11, v12);
    byte_4B15268 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loader, 0LL, v14, v15, v16, v17, v18, v19);
  }
  this->fields.readData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v20);
  if ( !byte_4B152DA )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, v20, v21);
    byte_4B152DA = 1;
  }
  v22 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v20);
    v22 = ManagementManager_TypeInfo;
  }
  if ( v22->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v20);
    UnityEngine_Application__Quit_69948112(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v24);
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
  sub_1BCA784(
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
    sub_1BCAA3C(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_1BCAA3C(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B15261 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndHandler_TypeInfo, value, method);
    byte_4B15261 = 1;
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
    v9 = sub_1C05CD0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B15263 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, value, method);
    byte_4B15263 = 1;
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
    v9 = sub_1C05CD0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B15262 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndHandler_TypeInfo, value, method);
    byte_4B15262 = 1;
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
    v9 = sub_1C05CD0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B15264 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, value, method);
    byte_4B15264 = 1;
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
    v9 = sub_1C05CD0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0C700;
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
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0C7FC;
          else
            v13 = (Il2CppObject *)sub_1A0C7C0;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0C73C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0C710;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0C6E0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C698;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0C510;
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
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0C60C;
          else
            v13 = (Il2CppObject *)sub_1A0C5D0;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0C54C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0C520;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0C4F0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C4A8;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetLoader__LoadDataCR_d__29_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  struct AssetLoader_o *_4__this; // x20
  bool v114; // w8
  const MethodInfo *v115; // x1
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v118; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v121; // x8
  AssetData_o *v122; // x20
  const MethodInfo *v123; // x3
  System_Collections_IEnumerator_o *v124; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int v132; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  const MethodInfo *v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct AssetData_o *data; // x8
  System_Byte_array *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  __int64 v155; // x1
  System_Byte_array *readData; // x22
  struct AssetData_o *v157; // x8
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  float unscaledTime; // s0
  ManagerConfig_c *v180; // x0
  float v181; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v183; // x23
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  __int64 v190; // x1
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x23
  ManagerConfig_c *v200; // x0
  int64_t v201; // x1
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  PartyOrganizationUtility_o *p_errorLocalizeCode_5__7; // x0
  int64_t v209; // x1
  System_String_o *Url; // x0
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v218; // x8
  AssetLoader__LoadDataCR_d__29_o *v219; // x22
  bool v220; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v222; // x0
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v229; // x0
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v239; // s8
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  float v246; // s0
  bool v247; // zf
  float v248; // s8
  UnityEngine_Networking_DownloadHandler_o *v249; // x0
  __int64 v250; // x10
  UnityEngine_Networking_DownloadHandler_o *v251; // x22
  System_String_o *v252; // x0
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  int klass; // w8
  System_String_o *v260; // x0
  int64_t v261; // x2
  int32_t v262; // w3
  System_String_o *v263; // x4
  BattleSetupInfo_o *v264; // x5
  FollowerInfo_o *v265; // x6
  PartyListViewItem_o *v266; // x7
  UnityEngine_Networking_DownloadHandler_c *v267; // x0
  __int64 (**image)(void); // x8
  __int64 v269; // x10
  UnityEngine_Networking_DownloadHandler_c *v270; // x8
  AssetLoader__LoadDataCR_d__29_o *v271; // x22
  System_String_o *v272; // x0
  System_String_o *v273; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  System_String_o *v280; // x1
  PartyOrganizationUtility_o *p_errorCode_5__6; // x0
  System_String_o *v282; // x22
  System_String_o *v283; // x0
  System_String_o *v284; // x0
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v292; // x23
  Il2CppObject *v293; // x23
  AssetLoader__LoadDataCR_d__29_o *v294; // x23
  System_String_o *v295; // x24
  int v296; // w8
  System_String_o *v297; // x0
  struct AssetData_o *v298; // x9
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  AssetLoader__LoadDataCR_d__29_o *v305; // x22
  int64_t v306; // x1
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  int64_t v313; // x1
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  int64_t v320; // x1
  struct AssetData_o *v321; // x8
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  int64_t v334; // x1
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  int64_t v347; // x1
  System_String_o *v348; // x0
  int64_t v349; // x2
  int32_t v350; // w3
  System_String_o *v351; // x4
  BattleSetupInfo_o *v352; // x5
  FollowerInfo_o *v353; // x6
  PartyListViewItem_o *v354; // x7
  ManagerConfig_c *v355; // x0
  struct AssetData_o *v356; // x8
  CommonUI_o *v357; // x21
  System_String_o *v358; // x22
  __int64 v359; // x1
  __int64 v360; // x2
  __int64 v361; // x3
  ErrorDialog_ClickDelegate_o *v362; // x23
  ManagementManager_c *v363; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  __int64 v366; // x1
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v368; // x22
  System_String_o *v369; // x21
  System_String_o *v370; // x23
  System_String_o *v371; // x23
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x3
  ErrorDialog_ClickDelegate_o *v375; // x24
  System_String_o *v376; // x23
  System_String_o *v377; // x23
  __int64 v378; // x1
  __int64 v379; // x2
  __int64 v380; // x3
  ErrorDialog_ClickDelegate_o *v381; // x24
  UnityEngine_Networking_UnityWebRequest_o *v382; // x0
  int64_t v383; // x2
  int32_t v384; // w3
  System_String_o *v385; // x4
  BattleSetupInfo_o *v386; // x5
  FollowerInfo_o *v387; // x6
  PartyListViewItem_o *v388; // x7
  int64_t v389; // x2
  int32_t v390; // w3
  System_String_o *v391; // x4
  BattleSetupInfo_o *v392; // x5
  FollowerInfo_o *v393; // x6
  PartyListViewItem_o *v394; // x7
  AssetManager_c *v395; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v397; // x2
  int32_t v398; // w3
  System_String_o *v399; // x4
  BattleSetupInfo_o *v400; // x5
  FollowerInfo_o *v401; // x6
  PartyListViewItem_o *v402; // x7
  System_String_o *v403; // x21
  System_String_o *UrlString; // x0
  int64_t v405; // x2
  int32_t v406; // w3
  System_String_o *v407; // x4
  BattleSetupInfo_o *v408; // x5
  FollowerInfo_o *v409; // x6
  PartyListViewItem_o *v410; // x7
  AssetLoader__LoadDataCR_d__29_o **v411; // x21
  float v412; // s0
  ManagerConfig_c *v413; // x0
  float v414; // s8
  float v415; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v416; // x0
  int64_t v417; // x2
  int32_t v418; // w3
  System_String_o *v419; // x4
  BattleSetupInfo_o *v420; // x5
  FollowerInfo_o *v421; // x6
  PartyListViewItem_o *v422; // x7
  int64_t v423; // x2
  int32_t v424; // w3
  System_String_o *v425; // x4
  BattleSetupInfo_o *v426; // x5
  FollowerInfo_o *v427; // x6
  PartyListViewItem_o *v428; // x7
  float v429; // s0
  float v430; // s9
  float v431; // s8
  float v432; // s0
  float v433; // s8
  System_String_o **v434; // x21
  UnityEngine_Networking_UnityWebRequest_o **v435; // x22
  System_String_o *v436; // x0
  __int64 v437; // x1
  System_String_o *text; // x23
  System_String_o *v439; // x23
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  AssetLoader__LoadDataCR_d__29_o *v446; // x23
  int _2__current; // w8
  int32_t v448; // w0
  int32_t v449; // w25
  System_String_o *v450; // x24
  System_String_o *v451; // x23
  __int64 v452; // x1
  System_Byte_array *v453; // x25
  uint32_t v454; // w25
  int v455; // w8
  Il2CppObject *v456; // x8
  AssetLoader__LoadDataCR_d__29_o *v457; // x21
  int v458; // w25
  int v459; // w27
  System_String_o *v460; // x22
  Il2CppObject *v461; // x8
  AssetLoader__LoadDataCR_d__29_o *v462; // x22
  char v463; // w8
  __int64 v464; // x1
  const MethodInfo *v465; // x2
  System_String_o *v466; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v468; // x22
  System_String_o *v469; // x0
  const MethodInfo *v470; // x2
  int v471; // w23
  struct AssetData_o *v472; // x8
  ManagementManager_c *v473; // x0
  _BOOL4 v474; // w22
  __int64 v475; // x1
  Il2CppObject *v476; // x21
  System_String_o *v477; // x22
  __int64 v478; // x1
  __int64 v479; // x2
  __int64 v480; // x3
  ErrorDialog_ClickDelegate_o *v481; // x23
  ManagementManager_c *v482; // x0
  _BOOL4 v483; // w21
  __int64 v484; // x1
  Il2CppObject *v485; // x19
  __int64 *v486; // x8
  System_String_o *v487; // x21
  __int64 v488; // x1
  __int64 v489; // x2
  __int64 v490; // x3
  ErrorDialog_ClickDelegate_o *v491; // x22
  bool result; // w0
  __int64 *v493; // x8
  System_String_o *v494; // x22
  __int64 v495; // x1
  __int64 v496; // x2
  __int64 v497; // x3
  ErrorDialog_ClickDelegate_o *v498; // x23
  int64_t v499; // x2
  int32_t v500; // w3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  int64_t v505; // x2
  int32_t v506; // w3
  System_String_o *v507; // x4
  BattleSetupInfo_o *v508; // x5
  FollowerInfo_o *v509; // x6
  PartyListViewItem_o *v510; // x7
  System_String_o *name; // x21
  AssetData_o *v512; // x22
  AssetLoader__LoadDataCR_d__29_o **v513; // x21
  __int64 v514; // x10
  __int64 v515; // x10
  System_Byte_array *v516; // x0
  UnityEngine_AssetBundleCreateRequest_o *v517; // x0
  int64_t v518; // x2
  int32_t v519; // w3
  System_String_o *v520; // x4
  BattleSetupInfo_o *v521; // x5
  FollowerInfo_o *v522; // x6
  PartyListViewItem_o *v523; // x7
  int64_t v524; // x2
  int32_t v525; // w3
  System_String_o *v526; // x4
  BattleSetupInfo_o *v527; // x5
  FollowerInfo_o *v528; // x6
  PartyListViewItem_o *v529; // x7
  int64_t req_5__13; // x1
  int64_t v531; // x2
  int32_t v532; // w3
  System_String_o *v533; // x4
  BattleSetupInfo_o *v534; // x5
  FollowerInfo_o *v535; // x6
  PartyListViewItem_o *v536; // x7
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  PartyOrganizationUtility_o *v538; // x20
  int64_t v539; // x2
  int32_t v540; // w3
  System_String_o *v541; // x4
  BattleSetupInfo_o *v542; // x5
  FollowerInfo_o *v543; // x6
  PartyListViewItem_o *v544; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v545; // x0
  int64_t v546; // x2
  int32_t v547; // w3
  System_String_o *v548; // x4
  BattleSetupInfo_o *v549; // x5
  FollowerInfo_o *v550; // x6
  PartyListViewItem_o *v551; // x7
  ManagerConfig_c *v552; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v555; // x20
  int64_t v556; // x2
  int32_t v557; // w3
  System_String_o *v558; // x4
  BattleSetupInfo_o *v559; // x5
  FollowerInfo_o *v560; // x6
  PartyListViewItem_o *v561; // x7
  int64_t v562; // x1
  int64_t v563; // x1
  int64_t v564; // x2
  int32_t v565; // w3
  System_String_o *v566; // x4
  BattleSetupInfo_o *v567; // x5
  FollowerInfo_o *v568; // x6
  PartyListViewItem_o *v569; // x7
  int64_t v570; // x2
  int32_t v571; // w3
  System_String_o *v572; // x4
  BattleSetupInfo_o *v573; // x5
  FollowerInfo_o *v574; // x6
  PartyListViewItem_o *v575; // x7
  int64_t v576; // x1
  System_String_o *v577; // x1
  int64_t v578; // x2
  int32_t v579; // w3
  System_String_o *v580; // x4
  BattleSetupInfo_o *v581; // x5
  FollowerInfo_o *v582; // x6
  PartyListViewItem_o *v583; // x7
  ManagerConfig_c *v584; // x0
  struct AssetData_o *v585; // x8
  CommonUI_o *v586; // x22
  System_String_o *v587; // x21
  __int64 v588; // x1
  __int64 v589; // x2
  __int64 v590; // x3
  ErrorDialog_ClickDelegate_o *v591; // x23
  int64_t v592; // x1
  ManagementManager_c *v593; // x0
  _BOOL4 v594; // w22
  __int64 v595; // x1
  Il2CppObject *v596; // x21
  System_String_o *v597; // x22
  __int64 v598; // x1
  __int64 v599; // x2
  __int64 v600; // x3
  ErrorDialog_ClickDelegate_o *v601; // x23
  System_String_o *v602; // x22
  __int64 v603; // x1
  __int64 v604; // x2
  __int64 v605; // x3
  ErrorDialog_ClickDelegate_o *v606; // x23
  int64_t v607; // x1
  UnityEngine_WaitForSeconds_o *v608; // x20
  int64_t v609; // x2
  int32_t v610; // w3
  System_String_o *v611; // x4
  BattleSetupInfo_o *v612; // x5
  FollowerInfo_o *v613; // x6
  PartyListViewItem_o *v614; // x7
  AssetLoader___c_c *v615; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v617; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int64_t v619; // x2
  int32_t v620; // w3
  System_String_o *v621; // x4
  BattleSetupInfo_o *v622; // x5
  FollowerInfo_o *v623; // x6
  PartyListViewItem_o *v624; // x7
  UnityEngine_WaitUntil_o *v625; // x21
  int64_t v626; // x2
  int32_t v627; // w3
  System_String_o *v628; // x4
  BattleSetupInfo_o *v629; // x5
  FollowerInfo_o *v630; // x6
  PartyListViewItem_o *v631; // x7
  UnityEngine_Networking_DownloadHandler_o *v632; // x0
  const MethodInfo *v633; // x2
  ManagerConfig_c *v634; // x0
  struct ManagerConfig_StaticFields *v635; // x8
  int64_t wait_5__10; // x1
  PartyOrganizationUtility_o *v637; // x19
  ManagerConfig_c *v638; // x0
  struct ManagerConfig_StaticFields *v639; // x8
  int64_t v640; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v643; // [xsp+18h] [xbp-88h]
  __int64 v644; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v8 = this;
  if ( (byte_4B1526C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetLoader_EndRebootDialog__, method, v2);
    sub_1BCA7E0(&Method_AssetLoader_EndRetryDialog__, v9, v10);
    sub_1BCA7E0(&Method_AssetLoader_EndWarningDialog__, v11, v12);
    sub_1BCA7E0(&AssetManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v15, v16);
    sub_1BCA7E0(&char___TypeInfo, v17, v18);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v19, v20);
    sub_1BCA7E0(&CommonServicePluginScript_TypeInfo, v21, v22);
    sub_1BCA7E0(&Crc32_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v27, v28);
    sub_1BCA7E0(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v29, v30);
    sub_1BCA7E0(&DownloadHandlerFileWithCrcCheck_TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_IO_IOException_TypeInfo, v35, v36);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v41, v42);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v45, v46);
    sub_1BCA7E0(&string___TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v49, v50);
    sub_1BCA7E0(&AssetLoader___c_TypeInfo, v51, v52);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v53, v54);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v55, v56);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v57, v58);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_9348/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_7287/*"HTTP"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_5402/*"Disk full"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2529/*"AssetStorageList download time over"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_2516/*"AssetName : "*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_812/*")\n\n503 Auto retry count "*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_815/*")\nfile crc ("*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_1510/*"503"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_16105/*"[FFFF80]Download error for debug"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_2526/*"AssetStorageList download data error"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_12416/*"STATUS"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_811/*")\n\n"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_9347/*"NETWORK_ERROR_ASSET_UPDATE"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_19250/*"error "*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_2527/*"AssetStorageList download error"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_814/*")\n\nAssetBundle file download time over"*/, v109, v110);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v111, v112);
    byte_4B1526C = 1;
  }
  v644 = 0LL;
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
        v114 = 0;
      else
        v114 = AssetData__GetExt((AssetData_o *)this, method) == 0LL;
      v8->fields._isEncrypted_5__2 = v114;
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
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
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
      v118 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v121 = downloadHandler;
          else
            v121 = 0LL;
          if ( (v118 & 1) != 0 )
            goto LABEL_30;
LABEL_47:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_375;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v141, v142, v143, v144, v145, v146);
          data = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !data )
            goto LABEL_375;
          data->fields.nowVersion = 0;
          goto LABEL_59;
        }
      }
      v121 = 0LL;
      if ( (v118 & 1) == 0 )
        goto LABEL_47;
LABEL_30:
      if ( v121 )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)LODWORD(v121[1].klass);
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
        v148 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = v148;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.readData,
          (int64_t)v148,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v155);
        this = (AssetLoader__LoadDataCR_d__29_o *)Crc32__Compute(readData, 0LL);
      }
      v157 = _4__this->fields.data;
      if ( !v157 )
        goto LABEL_375;
      if ( (_DWORD)this == v157->fields.crc )
        goto LABEL_294;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      v157->fields.nowVersion = 0;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v158, v159, v160, v161, v162, v163);
      _4__this->fields.readData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v164, v165, v166, v167, v168, v169);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        if ( _4__this->fields.isDownload )
          break;
LABEL_292:
        v157 = _4__this->fields.data;
        if ( !v157 )
          goto LABEL_375;
        if ( v157->fields.entryCount >= 1 )
        {
          if ( v8->fields._isEncrypted_5__2 )
          {
LABEL_312:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_375;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
            _4__this->fields.loader = LoadRequest;
            v538 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
            sub_1BCA784(v538, (int64_t)LoadRequest, v539, v540, v541, v542, v543, v544);
            this = (AssetLoader__LoadDataCR_d__29_o *)v538->klass;
            if ( !v538->klass )
              goto LABEL_375;
            v545 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v545;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, (int64_t)v545, v546, v547, v548, v549, v550, v551);
            v132 = 11;
          }
          else
          {
            v615 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo, method);
              v615 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v615->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v615->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v615, method);
                v615 = AssetLoader___c_TypeInfo;
              }
              v617 = (Il2CppObject *)v615->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
              System_Func_bool____ctor(_9__29_0, v617, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
                (int64_t)_9__29_0,
                v619,
                v620,
                v621,
                v622,
                v623,
                v624);
            }
            v625 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, method, v2, v3);
            UnityEngine_WaitUntil___ctor(v625, _9__29_0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v625;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, (int64_t)v625, v626, v627, v628, v629, v630, v631);
            v132 = 10;
          }
          goto LABEL_355;
        }
LABEL_294:
        if ( _4__this->fields.isDownload )
        {
          name = v157->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(name, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_298:
        v512 = _4__this->fields.data;
        if ( !v512 )
          goto LABEL_375;
        if ( v512->fields.entryCount >= 1 )
        {
          v513 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v8->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v514 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v514)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v514 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v513;
              if ( !*v513 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v515 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v515
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v515 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v516 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v517 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v516, 0LL);
            v8->fields._req_5__13 = v517;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._req_5__13,
              (int64_t)v517,
              v518,
              v519,
              v520,
              v521,
              v522,
              v523);
            this = *v513;
            if ( !*v513 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v513 = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v524, v525, v526, v527, v528, v529);
            req_5__13 = (int64_t)v8->fields._req_5__13;
            v8->fields.__2__current = (Il2CppObject *)req_5__13;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, req_5__13, v531, v532, v533, v534, v535, v536);
            v132 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v632 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v512, v632, v633);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v134, v135, v136, v137, v138, v139);
        }
        _4__this->fields.readData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, v140);
        return 0;
      }
      *(_WORD *)&v8->fields._isAutoRetry_5__4 = 0;
      v8->fields._errorCode_5__6 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v8->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7,
        0LL,
        v170,
        v171,
        v172,
        v173,
        v174,
        v175);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v180 = ManagerConfig_TypeInfo;
      v181 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v176);
        v180 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v180->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v181 + TIMEOUT;
      v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v176, v177, v178);
      UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
      v8->fields._wait_5__10 = v183;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__10,
        (int64_t)v183,
        v184,
        v185,
        v186,
        v187,
        v188,
        v189);
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v190);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v199 = FreeSize;
        v200 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v200 = ManagerConfig_TypeInfo;
        }
        if ( v199 < v200->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v201 = StringLiteral_5402/*"Disk full"*/;
          v8->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5402/*"Disk full"*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
            v201,
            v193,
            v194,
            v195,
            v196,
            v197,
            v198);
          p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7;
          v209 = StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/;
          v8->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v8->fields._url_5__11 = Url;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)Url,
        v211,
        v212,
        v213,
        v214,
        v215,
        v216);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v8->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
      v218 = _4__this->fields.data;
      v219 = this;
      if ( v8->fields._isEncrypted_5__2 )
      {
        if ( !v218 )
          goto LABEL_375;
        v220 = v218->fields.entryCount > 0;
      }
      else
      {
        if ( !v218 )
          goto LABEL_375;
        v220 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, method);
      v222 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v219, v220, Key, 0LL);
      _4__this->fields.loader = v222;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)v222,
        v223,
        v224,
        v225,
        v226,
        v227,
        v228);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v229 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v229;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v229,
        v230,
        v231,
        v232,
        v233,
        v234,
        v235);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v8->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1BCAA3C(this, method);
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
        v239 = progress;
        v246 = UnityEngine_Time__get_unscaledTime(0LL);
        v247 = v239 == loadProgress_5__9;
        v248 = v246;
        if ( !v247 )
        {
          v634 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v634 = ManagerConfig_TypeInfo;
          }
          v635 = v634->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v248 + v635->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)wait_5__10;
          v637 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v637, wait_5__10, v240, v241, v242, v243, v244, v245);
          result = 1;
          *(_DWORD *)&v637[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        if ( v246 < v8->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v249 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v249
        && (v250 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v249->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v250) )
      {
        v251 = (DownloadHandlerFileWithCrcCheck_c *)v249->klass->_2.typeHierarchy[v250 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v249
             : 0LL;
      }
      else
      {
        v251 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v260 = System_String__Concat_62412480(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 v8->fields._url_5__11,
                 (System_String_o *)StringLiteral_814/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v8->fields._errorCode_5__6 = v260;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v260,
          v261,
          v262,
          v263,
          v264,
          v265,
          v266);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v251 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v251, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v252 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v252, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v251 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v644) = klass;
          v298 = _4__this->fields.data;
          if ( !v298 )
            goto LABEL_375;
          if ( klass == v298->fields.crc )
          {
            v298->fields.nowVersion = v298->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v305 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v306 = StringLiteral_691/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_691/*"("*/;
            sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__4__this, v306, v299, v300, v301, v302, v303, v304);
            if ( LODWORD(v305->fields.__2__current) <= 1 )
              goto LABEL_258;
            v313 = (int64_t)v8->fields._url_5__11;
            v305->fields.resourceNames = (struct System_String_array *)v313;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields.resourceNames,
              v313,
              v307,
              v308,
              v309,
              v310,
              v311,
              v312);
            if ( LODWORD(v305->fields.__2__current) <= 2 )
              goto LABEL_258;
            v320 = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v305->fields._isEncrypted_5__2 = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields._isEncrypted_5__2,
              v320,
              v314,
              v315,
              v316,
              v317,
              v318,
              v319);
            v321 = _4__this->fields.data;
            if ( !v321 )
              goto LABEL_375;
            LODWORD(v644) = v321->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v644, 0LL);
            if ( LODWORD(v305->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v305->fields._isAutoRetry_5__4 = this;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields._isAutoRetry_5__4,
              (int64_t)this,
              v322,
              v323,
              v324,
              v325,
              v326,
              v327);
            if ( LODWORD(v305->fields.__2__current) <= 4 )
              goto LABEL_258;
            v334 = StringLiteral_815/*")\nfile crc ("*/;
            v305->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_815/*")\nfile crc ("*/;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields._errorCode_5__6,
              v334,
              v328,
              v329,
              v330,
              v331,
              v332,
              v333);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v644 + 4, 0LL);
            if ( LODWORD(v305->fields.__2__current) <= 5 )
              goto LABEL_258;
            v305->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields._errorLocalizeCode_5__7,
              (int64_t)this,
              v335,
              v336,
              v337,
              v338,
              v339,
              v340);
            if ( LODWORD(v305->fields.__2__current) <= 6 )
              goto LABEL_258;
            v347 = StringLiteral_809/*")"*/;
            *(_QWORD *)&v305->fields._requestTime_5__8 = StringLiteral_809/*")"*/;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v305->fields._requestTime_5__8,
              v347,
              v341,
              v342,
              v343,
              v344,
              v345,
              v346);
            v348 = System_String__Concat_62414748((System_String_array *)v305, 0LL);
            v8->fields._errorCode_5__6 = v348;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
              (int64_t)v348,
              v349,
              v350,
              v351,
              v352,
              v353,
              v354);
            v8->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v251[4].klass )
        {
          klass = (int)v251[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v251 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v282 = v8->fields._url_5__11;
        v283 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v284 = System_String__Concat_62414484(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 v282,
                 (System_String_o *)StringLiteral_811/*")\n\n"*/,
                 v283,
                 0LL);
        v8->fields._errorCode_5__6 = v284;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v284,
          v285,
          v286,
          v287,
          v288,
          v289,
          v290);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v292 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v292,
                (Il2CppObject *)StringLiteral_12416/*"STATUS"*/,
                &value,
                (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v293 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v293 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62423612(
                                                    (System_String_o *)v293,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v294 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7287/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v294->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v294->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_62409536((System_String_o *)this, (System_String_o *)StringLiteral_1510/*"503"*/, 0LL) )
          goto LABEL_140;
        v295 = v8->fields._url_5__11;
        v296 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__4 = 1;
        v8->fields._autoRetryCount_5__3 = v296;
        v297 = System_Int32__ToString((int)v8 + 52, 0LL);
        v280 = System_String__Concat_62414484(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 v295,
                 (System_String_o *)StringLiteral_812/*")\n\n503 Auto retry count "*/,
                 v297,
                 0LL);
        v8->fields._errorCode_5__6 = v280;
        p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v251, 0LL);
      v267 = v251[4].klass;
      if ( !v267 )
        goto LABEL_110;
      image = (__int64 (**)(void))v267->_1.image;
      v269 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v267->_1.image + 304) >= (unsigned int)v269
        && *((System_IO_IOException_c **)image[25] + v269 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v273 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v267->_1.image
                                   + 49))(
                                    v267,
                                    *((_QWORD *)v267->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v270 = v251[4].klass;
        if ( !v270 )
          goto LABEL_375;
        v271 = this;
        v272 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v270->_1.image
                                   + 49))(
                                    v270,
                                    *((_QWORD *)v270->_1.image + 50));
        v273 = System_String__Concat_62414484(
                 (System_String_o *)StringLiteral_19250/*"error "*/,
                 (System_String_o *)v271,
                 (System_String_o *)StringLiteral_116/*" "*/,
                 v272,
                 0LL);
      }
      v280 = v273;
      v8->fields._errorCode_5__6 = v273;
      p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
LABEL_109:
      sub_1BCA784(p_errorCode_5__6, (int64_t)v280, v274, v275, v276, v277, v278, v279);
LABEL_140:
      v8->fields._url_5__11 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, v253, v254, v255, v256, v257, v258);
      p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12;
      v209 = 0LL;
      v8->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1BCA784(p_errorLocalizeCode_5__7, v209, v202, v203, v204, v205, v206, v207);
      method = (const MethodInfo *)v8->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v355 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v355 = ManagerConfig_TypeInfo;
        }
        if ( v355->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v356 = _4__this->fields.data;
          if ( !v356 )
            goto LABEL_375;
          v357 = (CommonUI_o *)this;
          v358 = System_String__Concat_62414484(
                   (System_String_o *)StringLiteral_2516/*"AssetName : "*/,
                   v356->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v8->fields._errorCode_5__6,
                   0LL);
          v362 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v359, v360, v361);
          ErrorDialog_ClickDelegate___ctor(v362, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v357 )
            goto LABEL_375;
          v643 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v643;
          CommonUI__OpenWarningDialog(
            v357,
            (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
            v358,
            v362,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v562 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v562;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, v562, (int64_t)v2, v3, v4, v5, v6, v7);
            v132 = 2;
            goto LABEL_355;
          }
        }
        if ( v8->fields._isAutoRetry_5__4 )
        {
          v552 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v552 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v552->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v555 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
          UnityEngine_WaitForSeconds___ctor(v555, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v555;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v555, v556, v557, v558, v559, v560, v561);
          v132 = 3;
          goto LABEL_355;
        }
        if ( !v8->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
          if ( !byte_4B152DA )
          {
            sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
            byte_4B152DA = 1;
          }
          v363 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
            v363 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v363->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v8->fields._errorLocalizeCode_5__7;
          v368 = (CommonUI_o *)Instance;
          v369 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v370 = v8->fields._errorLocalizeCode_5__7;
            else
              v370 = (System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v366);
            v371 = LocalizationManager__Get(v370, 0LL);
            v375 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v372, v373, v374);
            ErrorDialog_ClickDelegate___ctor(v375, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v368 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v368, v369, v371, v375, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v376 = v8->fields._errorLocalizeCode_5__7;
            else
              v376 = (System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v366);
            v377 = LocalizationManager__Get(v376, 0LL);
            v381 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v378, v379, v380);
            ErrorDialog_ClickDelegate___ctor(v381, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v368 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v368, v369, v377, v381, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v563 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v563;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, v563, (int64_t)v2, v3, v4, v5, v6, v7);
            v132 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
      if ( !byte_4B1194F )
      {
        sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
        byte_4B1194F = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_375;
      if ( LOBYTE(this[1].fields._errorCode_5__6[5].fields._stringLength) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v564, v565, v566, v567, v568, v569);
        _4__this->fields.readData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v570, v571, v572, v573, v574, v575);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v8->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v382 = _4__this->fields.loader;
      if ( v382 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v382, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v383, v384, v385, v386, v387, v388);
        _4__this->fields.readData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v389, v390, v391, v392, v393, v394);
      }
      if ( !v8->fields._isCrcError_5__5 )
      {
LABEL_291:
        v8->fields._errorCode_5__6 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7,
          0LL,
          v499,
          v500,
          v501,
          v502,
          v503,
          v504);
        v8->fields._wait_5__10 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__10, 0LL, v505, v506, v507, v508, v509, v510);
        goto LABEL_292;
      }
      v395 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v395);
      v8->fields._url_5__11 = ConfigFileAddress;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)ConfigFileAddress,
        v397,
        v398,
        v399,
        v400,
        v401,
        v402);
LABEL_189:
      v403 = v8->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v115);
      UrlString = AssetManager__getUrlString(v403, v115);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v411 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)this,
        v405,
        v406,
        v407,
        v408,
        v409,
        v410);
      v412 = UnityEngine_Time__get_unscaledTime(0LL);
      v413 = ManagerConfig_TypeInfo;
      v414 = v412;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
        v413 = ManagerConfig_TypeInfo;
      }
      v415 = v413->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v414 + v415;
      this = *v411;
      if ( !*v411 )
        goto LABEL_375;
      v416 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v416;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v416,
        v417,
        v418,
        v419,
        v420,
        v421,
        v422);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v429 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v430 = v8->fields._loadProgress_5__9;
        v431 = v429;
        v432 = UnityEngine_Time__get_unscaledTime(0LL);
        v247 = v431 == v430;
        v433 = v432;
        if ( !v247 )
        {
          v638 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v638 = ManagerConfig_TypeInfo;
          }
          v639 = v638->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v433 + v639->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v432 < v8->fields._requestTime_5__8 )
        {
LABEL_374:
          v640 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v640;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, v640, v423, v424, v425, v426, v427, v428);
          v132 = 5;
          goto LABEL_355;
        }
      }
      v8->fields._errorCode_5__6 = 0LL;
      v434 = &v8->fields._errorCode_5__6;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, v423, v424, v425, v426, v427, v428);
      if ( !_4__this )
        goto LABEL_375;
      v435 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v435 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v435, 0LL);
        v493 = &StringLiteral_2529/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v436 = UnityEngine_Networking_UnityWebRequest__get_error(*v435, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v436, 0LL);
      if ( !*v435 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v577 = UnityEngine_Networking_UnityWebRequest__get_error(*v435, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v435, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v437);
      v439 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v439, 0LL) )
      {
        v493 = &StringLiteral_2527/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v439 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_62430968(v439, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v446 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25411/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(char___TypeInfo, 2LL);
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
      v448 = System_String__IndexOfAny((System_String_o *)v446, (System_Char_array *)this, 0LL);
      if ( v448 < 2 )
        goto LABEL_286;
      v449 = v448;
      v450 = System_String__Substring_62420224((System_String_o *)v446, 1, v448 - 1, 0LL);
      v451 = System_String__Substring((System_String_o *)v446, v449 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v453 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                    this,
                                    v451,
                                    this->klass[1]._1.interfaceOffsets);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v452);
      v454 = Crc32__Compute(v453, 0LL);
      if ( System_UInt32__Parse(v450, 0LL) != v454 )
      {
LABEL_286:
        v493 = &StringLiteral_2526/*"AssetStorageList download data error"*/;
LABEL_327:
        v577 = (System_String_o *)*v493;
LABEL_328:
        *v434 = v577;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v577,
          v440,
          v441,
          v442,
          v443,
          v444,
          v445);
        if ( *v435 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v435, 0LL);
          *v435 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v578, v579, v580, v581, v582, v583);
        }
        if ( !*v434 )
          goto LABEL_354;
        v584 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v584 = ManagerConfig_TypeInfo;
        }
        if ( v584->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v585 = _4__this->fields.data;
          if ( !v585 )
            goto LABEL_375;
          v586 = (CommonUI_o *)this;
          v587 = System_String__Concat_62414484(
                   (System_String_o *)StringLiteral_2516/*"AssetName : "*/,
                   v585->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v434,
                   0LL);
          v591 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v588, v589, v590);
          ErrorDialog_ClickDelegate___ctor(v591, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v586 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v586,
            (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
            v587,
            v591,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v592 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v592;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, v592, (int64_t)v2, v3, v4, v5, v6, v7);
            v132 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        if ( !byte_4B152DA )
        {
          sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
          byte_4B152DA = 1;
        }
        v593 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
          v593 = ManagementManager_TypeInfo;
        }
        v594 = v593->static_fields->isDuringStartup;
        v596 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v595);
        if ( v594 )
        {
          v597 = LocalizationManager__Get((System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v601 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v598, v599, v600);
          ErrorDialog_ClickDelegate___ctor(v601, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v596 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v596, (System_String_o *)StringLiteral_1/*""*/, v597, v601, 0, 0LL);
        }
        else
        {
          v602 = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v606 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v603, v604, v605);
          ErrorDialog_ClickDelegate___ctor(v606, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v596 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v596, (System_String_o *)StringLiteral_1/*""*/, v602, v606, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v607 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v607;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, v607, (int64_t)v2, v3, v4, v5, v6, v7);
          v132 = 7;
        }
        else
        {
LABEL_354:
          v608 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
          UnityEngine_WaitForSeconds___ctor(v608, 1.0, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v608;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v608, v609, v610, v611, v612, v613, v614);
          v132 = 8;
        }
LABEL_355:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v132;
        return 1;
      }
      if ( !v451 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v455 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v455 || (LOWORD(this->fields.__4__this) = 13, v455 == 1) )
LABEL_258:
        sub_1BCAA44(this, method);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62423612(v451, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v456 = this->fields.__2__current;
      v457 = this;
      v458 = (_DWORD)v456 - 1;
      if ( (int)v456 < 1 )
        goto LABEL_272;
      v459 = 0;
      while ( 2 )
      {
        v460 = (System_String_o *)*((_QWORD *)&v457->fields.__4__this + v459);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCA888(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v460 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62423376(v460, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v461 = this->fields.__2__current;
        v462 = this;
        if ( (int)v461 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1883/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v462->fields.__2__current) )
            goto LABEL_258;
          v463 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v462->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v463 & 1) != 0 )
          {
            v466 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v462->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v462->fields.resourceNames;
            v468 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v464);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v466, v468, v465);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25411/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v462->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v462->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v461 = v462->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v458 == v459 )
            goto LABEL_272;
          if ( (unsigned int)++v459 >= LODWORD(v457->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v461 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v462->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v469 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v469, 0LL);
      if ( LODWORD(v462->fields.__2__current) <= 4 )
        goto LABEL_258;
      v471 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v462->fields._errorCode_5__6, v470);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v472 = _4__this->fields.data;
      if ( !v472 )
        goto LABEL_375;
      if ( v471 == v472->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        if ( !byte_4B152DA )
        {
          sub_1BCA7E0(&ManagementManager_TypeInfo, method, v440);
          byte_4B152DA = 1;
        }
        v473 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
          v473 = ManagementManager_TypeInfo;
        }
        v474 = v473->static_fields->isDuringStartup;
        v476 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v475);
        if ( v474 )
        {
          v477 = LocalizationManager__Get((System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v481 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v478, v479, v480);
          ErrorDialog_ClickDelegate___ctor(v481, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v476 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v476, (System_String_o *)StringLiteral_1/*""*/, v477, v481, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v494 = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v498 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v495, v496, v497);
        ErrorDialog_ClickDelegate___ctor(v498, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v476 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v476, (System_String_o *)StringLiteral_1/*""*/, v494, v498, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v8->fields._url_5__11 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
          goto LABEL_291;
        }
        v576 = (int64_t)v8->fields._wait_5__10;
        v8->fields.__2__current = (Il2CppObject *)v576;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, v576, (int64_t)v2, v3, v4, v5, v6, v7);
        v132 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
      if ( !byte_4B152DA )
      {
        sub_1BCA7E0(&ManagementManager_TypeInfo, method, v440);
        byte_4B152DA = 1;
      }
      v482 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        v482 = ManagementManager_TypeInfo;
      }
      v483 = v482->static_fields->isDuringStartup;
      v485 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v483 )
          goto LABEL_280;
LABEL_282:
        v486 = &StringLiteral_9347/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v484);
        if ( !v483 )
          goto LABEL_282;
LABEL_280:
        v486 = &StringLiteral_9348/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v487 = LocalizationManager__Get((System_String_o *)*v486, 0LL);
      v491 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v488, v489, v490);
      ErrorDialog_ClickDelegate___ctor(v491, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v485 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v485, (System_String_o *)StringLiteral_1/*""*/, v487, v491, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._req_5__13;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_37;
      if ( !_4__this )
        goto LABEL_375;
      v122 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v122 )
        goto LABEL_375;
      v124 = AssetData__SetAssetBundleData(v122, (UnityEngine_AssetBundle_o *)this, v8->fields.resourceNames, v123);
      v8->fields.__2__current = (Il2CppObject *)v124;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v124, v126, v127, v128, v129, v130, v131);
      v132 = 13;
      goto LABEL_355;
    case 0xD:
      v8->fields.__1__state = -1;
LABEL_37:
      v8->fields._req_5__13 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._req_5__13, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1526A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader___c_TypeInfo, v1, v2);
    byte_4B1526A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AssetLoader___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AssetLoader___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1526B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method, v2);
    byte_4B1526B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return BYTE4(Instance[7].monitor) == 0;
}