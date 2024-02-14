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
    sub_B0D97C(this);
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
  __int64 Instance; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x21
  System_Int32_array **v55; // x1
  _DWORD *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x1
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x1
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x1
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x1
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x1
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x1
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x1
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **v210; // x1
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_Int32_array **v217; // x1
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  System_Int32_array **v224; // x1
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Int32_array **v231; // x1
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x1
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_Int32_array **v245; // x1
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  System_Int32_array **v252; // x1
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_Int32_array **v259; // x1
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Int32_array **v266; // x1
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **v273; // x1
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  System_Int32_array **v280; // x1
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  System_Int32_array **v287; // x1
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  System_Int32_array **v294; // x1
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_Int32_array **v301; // x1
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_Int32_array **v308; // x1
  __int64 v309; // x8
  unsigned __int64 v310; // x23
  signed __int64 v311; // x24
  __int64 v312; // x0
  Il2CppObject *v313; // x0
  const MethodInfo *v314; // x1
  CrashReporter_o *v315; // x19
  __int64 v316; // x0

  if ( (byte_4217401 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_14151/*"The request timed out."*/, v7);
    sub_B0D8A4(&StringLiteral_20118/*"java.net.SocketException"*/, v8);
    sub_B0D8A4(&StringLiteral_12357/*"SSL CA certificate error"*/, v9);
    sub_B0D8A4(&StringLiteral_1188/*"404: Not Found"*/, v10);
    sub_B0D8A4(&StringLiteral_14083/*"The network connection was lost."*/, v11);
    sub_B0D8A4(&StringLiteral_1183/*"400: Bad Request"*/, v12);
    sub_B0D8A4(&StringLiteral_14830/*"Unable to complete SSL connection"*/, v13);
    sub_B0D8A4(&StringLiteral_14865/*"Unable to read data"*/, v14);
    sub_B0D8A4(&StringLiteral_17706/*"connect failed"*/, v15);
    sub_B0D8A4(&StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_B0D8A4(&StringLiteral_20120/*"java.net.UnknownHostException"*/, v17);
    sub_B0D8A4(&StringLiteral_1196/*"500: Internal Server Error"*/, v18);
    sub_B0D8A4(&StringLiteral_1198/*"502:"*/, v19);
    sub_B0D8A4(&StringLiteral_11453/*"Request timeout"*/, v20);
    sub_B0D8A4(&StringLiteral_4259/*"Connection reset by peer"*/, v21);
    sub_B0D8A4(&StringLiteral_4621/*"DLErrorType"*/, v22);
    sub_B0D8A4(&StringLiteral_4620/*"DLErrorAsset"*/, v23);
    sub_B0D8A4(&StringLiteral_1210/*"504: Gateway Timeout"*/, v24);
    sub_B0D8A4(&StringLiteral_15019/*"Unknown Error"*/, v25);
    sub_B0D8A4(&StringLiteral_1200/*"503 Auto retry count"*/, v26);
    sub_B0D8A4(&StringLiteral_20101/*"java.io.EOFException"*/, v27);
    sub_B0D8A4(&StringLiteral_20115/*"java.net.ConnectException"*/, v28);
    sub_B0D8A4(&StringLiteral_1186/*"403: Forbidden"*/, v29);
    sub_B0D8A4(&StringLiteral_4258/*"Connection refused"*/, v30);
    sub_B0D8A4(&StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_B0D8A4(&StringLiteral_1185/*"401: Authorization Required"*/, v32);
    sub_B0D8A4(&StringLiteral_20102/*"java.io.IOException"*/, v33);
    sub_B0D8A4(&StringLiteral_9506/*"No address associated with hostname"*/, v34);
    sub_B0D8A4(&StringLiteral_20117/*"java.net.ProtocolException"*/, v35);
    sub_B0D8A4(&StringLiteral_2106/*"AssetBundle file download time over"*/, v36);
    sub_B0D8A4(&StringLiteral_1189/*"408: Request Time-out"*/, v37);
    sub_B0D8A4(&StringLiteral_14559/*"Too many redirects"*/, v38);
    sub_B0D8A4(&StringLiteral_12958/*"Software caused connection abort"*/, v39);
    sub_B0D8A4(&StringLiteral_2105/*"AssetBundle file check sum error"*/, v40);
    sub_B0D8A4(&StringLiteral_20116/*"java.net.NoRouteToHostException"*/, v41);
    sub_B0D8A4(&StringLiteral_5287/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_B0D8A4(&StringLiteral_4260/*"Connection timed out"*/, v43);
    sub_B0D8A4(&StringLiteral_3812/*"Cannot resolve destination host"*/, v44);
    sub_B0D8A4(&StringLiteral_20119/*"java.net.SocketTimeoutException"*/, v45);
    sub_B0D8A4(&StringLiteral_2109/*"AssetLoadError"*/, v46);
    byte_4217401 = 1;
  }
  Instance = sub_B0D8BC(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_210;
  v54 = Instance;
  Instance = StringLiteral_9506/*"No address associated with hostname"*/;
  if ( StringLiteral_9506/*"No address associated with hostname"*/ )
  {
    Instance = sub_B0D964(StringLiteral_9506/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v55 = (System_Int32_array **)StringLiteral_9506/*"No address associated with hostname"*/;
  }
  else
  {
    v55 = 0LL;
  }
  v56 = (_DWORD *)(v54 + 24);
  if ( !*(_DWORD *)(v54 + 24) )
    goto LABEL_195;
  *(_QWORD *)(v54 + 32) = v55;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 32), v55, v48, v49, v50, v51, v52, v53);
  Instance = StringLiteral_2106/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2106/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B0D964(StringLiteral_2106/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v63 = (System_Int32_array **)StringLiteral_2106/*"AssetBundle file download time over"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( *v56 <= 1u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 40) = v63;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 40), v63, v57, v58, v59, v60, v61, v62);
  Instance = StringLiteral_14083/*"The network connection was lost."*/;
  if ( StringLiteral_14083/*"The network connection was lost."*/ )
  {
    Instance = sub_B0D964(StringLiteral_14083/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v70 = (System_Int32_array **)StringLiteral_14083/*"The network connection was lost."*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( *v56 <= 2u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 48) = v70;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 48), v70, v64, v65, v66, v67, v68, v69);
  Instance = StringLiteral_4259/*"Connection reset by peer"*/;
  if ( StringLiteral_4259/*"Connection reset by peer"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4259/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v77 = (System_Int32_array **)StringLiteral_4259/*"Connection reset by peer"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( *v56 <= 3u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 56) = v77;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 56), v77, v71, v72, v73, v74, v75, v76);
  Instance = StringLiteral_12958/*"Software caused connection abort"*/;
  if ( StringLiteral_12958/*"Software caused connection abort"*/ )
  {
    Instance = sub_B0D964(StringLiteral_12958/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v84 = (System_Int32_array **)StringLiteral_12958/*"Software caused connection abort"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( *v56 <= 4u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 64) = v84;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 64), v84, v78, v79, v80, v81, v82, v83);
  Instance = StringLiteral_4260/*"Connection timed out"*/;
  if ( StringLiteral_4260/*"Connection timed out"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4260/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v91 = (System_Int32_array **)StringLiteral_4260/*"Connection timed out"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( *v56 <= 5u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 72) = v91;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 72), v91, v85, v86, v87, v88, v89, v90);
  Instance = StringLiteral_4258/*"Connection refused"*/;
  if ( StringLiteral_4258/*"Connection refused"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4258/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v98 = (System_Int32_array **)StringLiteral_4258/*"Connection refused"*/;
  }
  else
  {
    v98 = 0LL;
  }
  if ( *v56 <= 6u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 80) = v98;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 80), v98, v92, v93, v94, v95, v96, v97);
  Instance = StringLiteral_14151/*"The request timed out."*/;
  if ( StringLiteral_14151/*"The request timed out."*/ )
  {
    Instance = sub_B0D964(StringLiteral_14151/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v105 = (System_Int32_array **)StringLiteral_14151/*"The request timed out."*/;
  }
  else
  {
    v105 = 0LL;
  }
  if ( *v56 <= 7u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 88) = v105;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 88), v105, v99, v100, v101, v102, v103, v104);
  Instance = StringLiteral_3812/*"Cannot resolve destination host"*/;
  if ( StringLiteral_3812/*"Cannot resolve destination host"*/ )
  {
    Instance = sub_B0D964(StringLiteral_3812/*"Cannot resolve destination host"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v112 = (System_Int32_array **)StringLiteral_3812/*"Cannot resolve destination host"*/;
  }
  else
  {
    v112 = 0LL;
  }
  if ( *v56 <= 8u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 96) = v112;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 96), v112, v106, v107, v108, v109, v110, v111);
  Instance = StringLiteral_14830/*"Unable to complete SSL connection"*/;
  if ( StringLiteral_14830/*"Unable to complete SSL connection"*/ )
  {
    Instance = sub_B0D964(StringLiteral_14830/*"Unable to complete SSL connection"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v119 = (System_Int32_array **)StringLiteral_14830/*"Unable to complete SSL connection"*/;
  }
  else
  {
    v119 = 0LL;
  }
  if ( *v56 <= 9u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 104) = v119;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 104), v119, v113, v114, v115, v116, v117, v118);
  Instance = StringLiteral_15019/*"Unknown Error"*/;
  if ( StringLiteral_15019/*"Unknown Error"*/ )
  {
    Instance = sub_B0D964(StringLiteral_15019/*"Unknown Error"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v126 = (System_Int32_array **)StringLiteral_15019/*"Unknown Error"*/;
  }
  else
  {
    v126 = 0LL;
  }
  if ( *v56 <= 0xAu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 112) = v126;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 112), v126, v120, v121, v122, v123, v124, v125);
  Instance = StringLiteral_11453/*"Request timeout"*/;
  if ( StringLiteral_11453/*"Request timeout"*/ )
  {
    Instance = sub_B0D964(StringLiteral_11453/*"Request timeout"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v133 = (System_Int32_array **)StringLiteral_11453/*"Request timeout"*/;
  }
  else
  {
    v133 = 0LL;
  }
  if ( *v56 <= 0xBu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 120) = v133;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 120), v133, v127, v128, v129, v130, v131, v132);
  Instance = StringLiteral_2105/*"AssetBundle file check sum error"*/;
  if ( StringLiteral_2105/*"AssetBundle file check sum error"*/ )
  {
    Instance = sub_B0D964(StringLiteral_2105/*"AssetBundle file check sum error"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v140 = (System_Int32_array **)StringLiteral_2105/*"AssetBundle file check sum error"*/;
  }
  else
  {
    v140 = 0LL;
  }
  if ( *v56 <= 0xCu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 128) = v140;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 128), v140, v134, v135, v136, v137, v138, v139);
  Instance = StringLiteral_12357/*"SSL CA certificate error"*/;
  if ( StringLiteral_12357/*"SSL CA certificate error"*/ )
  {
    Instance = sub_B0D964(StringLiteral_12357/*"SSL CA certificate error"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v147 = (System_Int32_array **)StringLiteral_12357/*"SSL CA certificate error"*/;
  }
  else
  {
    v147 = 0LL;
  }
  if ( *v56 <= 0xDu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 136) = v147;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 136), v147, v141, v142, v143, v144, v145, v146);
  Instance = StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/;
  if ( StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/ )
  {
    Instance = sub_B0D964(StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v154 = (System_Int32_array **)StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( *v56 <= 0xEu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 144) = v154;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 144), v154, v148, v149, v150, v151, v152, v153);
  Instance = StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/;
  if ( StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/ )
  {
    Instance = sub_B0D964(StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v161 = (System_Int32_array **)StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/;
  }
  else
  {
    v161 = 0LL;
  }
  if ( *v56 <= 0xFu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 152) = v161;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 152), v161, v155, v156, v157, v158, v159, v160);
  Instance = StringLiteral_5287/*"Destination host has an erroneous SSL certificate"*/;
  if ( StringLiteral_5287/*"Destination host has an erroneous SSL certificate"*/ )
  {
    Instance = sub_B0D964(StringLiteral_5287/*"Destination host has an erroneous SSL certificate"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v168 = (System_Int32_array **)StringLiteral_5287/*"Destination host has an erroneous SSL certificate"*/;
  }
  else
  {
    v168 = 0LL;
  }
  if ( *v56 <= 0x10u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 160) = v168;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 160), v168, v162, v163, v164, v165, v166, v167);
  Instance = StringLiteral_14559/*"Too many redirects"*/;
  if ( StringLiteral_14559/*"Too many redirects"*/ )
  {
    Instance = sub_B0D964(StringLiteral_14559/*"Too many redirects"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v175 = (System_Int32_array **)StringLiteral_14559/*"Too many redirects"*/;
  }
  else
  {
    v175 = 0LL;
  }
  if ( *v56 <= 0x11u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 168) = v175;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 168), v175, v169, v170, v171, v172, v173, v174);
  Instance = StringLiteral_20101/*"java.io.EOFException"*/;
  if ( StringLiteral_20101/*"java.io.EOFException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20101/*"java.io.EOFException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v182 = (System_Int32_array **)StringLiteral_20101/*"java.io.EOFException"*/;
  }
  else
  {
    v182 = 0LL;
  }
  if ( *v56 <= 0x12u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 176) = v182;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 176), v182, v176, v177, v178, v179, v180, v181);
  Instance = StringLiteral_20118/*"java.net.SocketException"*/;
  if ( StringLiteral_20118/*"java.net.SocketException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20118/*"java.net.SocketException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v189 = (System_Int32_array **)StringLiteral_20118/*"java.net.SocketException"*/;
  }
  else
  {
    v189 = 0LL;
  }
  if ( *v56 <= 0x13u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 184) = v189;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 184), v189, v183, v184, v185, v186, v187, v188);
  Instance = StringLiteral_20119/*"java.net.SocketTimeoutException"*/;
  if ( StringLiteral_20119/*"java.net.SocketTimeoutException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20119/*"java.net.SocketTimeoutException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v196 = (System_Int32_array **)StringLiteral_20119/*"java.net.SocketTimeoutException"*/;
  }
  else
  {
    v196 = 0LL;
  }
  if ( *v56 <= 0x14u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 192) = v196;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 192), v196, v190, v191, v192, v193, v194, v195);
  Instance = StringLiteral_20116/*"java.net.NoRouteToHostException"*/;
  if ( StringLiteral_20116/*"java.net.NoRouteToHostException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20116/*"java.net.NoRouteToHostException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v203 = (System_Int32_array **)StringLiteral_20116/*"java.net.NoRouteToHostException"*/;
  }
  else
  {
    v203 = 0LL;
  }
  if ( *v56 <= 0x15u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 200) = v203;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 200), v203, v197, v198, v199, v200, v201, v202);
  Instance = StringLiteral_20102/*"java.io.IOException"*/;
  if ( StringLiteral_20102/*"java.io.IOException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20102/*"java.io.IOException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v210 = (System_Int32_array **)StringLiteral_20102/*"java.io.IOException"*/;
  }
  else
  {
    v210 = 0LL;
  }
  if ( *v56 <= 0x16u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 208) = v210;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 208), v210, v204, v205, v206, v207, v208, v209);
  Instance = StringLiteral_20115/*"java.net.ConnectException"*/;
  if ( StringLiteral_20115/*"java.net.ConnectException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20115/*"java.net.ConnectException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v217 = (System_Int32_array **)StringLiteral_20115/*"java.net.ConnectException"*/;
  }
  else
  {
    v217 = 0LL;
  }
  if ( *v56 <= 0x17u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 216) = v217;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 216), v217, v211, v212, v213, v214, v215, v216);
  Instance = StringLiteral_17706/*"connect failed"*/;
  if ( StringLiteral_17706/*"connect failed"*/ )
  {
    Instance = sub_B0D964(StringLiteral_17706/*"connect failed"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v224 = (System_Int32_array **)StringLiteral_17706/*"connect failed"*/;
  }
  else
  {
    v224 = 0LL;
  }
  if ( *v56 <= 0x18u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 224) = v224;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 224), v224, v218, v219, v220, v221, v222, v223);
  Instance = StringLiteral_20117/*"java.net.ProtocolException"*/;
  if ( StringLiteral_20117/*"java.net.ProtocolException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20117/*"java.net.ProtocolException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v231 = (System_Int32_array **)StringLiteral_20117/*"java.net.ProtocolException"*/;
  }
  else
  {
    v231 = 0LL;
  }
  if ( *v56 <= 0x19u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 232) = v231;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 232), v231, v225, v226, v227, v228, v229, v230);
  Instance = StringLiteral_20120/*"java.net.UnknownHostException"*/;
  if ( StringLiteral_20120/*"java.net.UnknownHostException"*/ )
  {
    Instance = sub_B0D964(StringLiteral_20120/*"java.net.UnknownHostException"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v238 = (System_Int32_array **)StringLiteral_20120/*"java.net.UnknownHostException"*/;
  }
  else
  {
    v238 = 0LL;
  }
  if ( *v56 <= 0x1Au )
    goto LABEL_195;
  *(_QWORD *)(v54 + 240) = v238;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 240), v238, v232, v233, v234, v235, v236, v237);
  Instance = StringLiteral_1183/*"400: Bad Request"*/;
  if ( StringLiteral_1183/*"400: Bad Request"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1183/*"400: Bad Request"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v245 = (System_Int32_array **)StringLiteral_1183/*"400: Bad Request"*/;
  }
  else
  {
    v245 = 0LL;
  }
  if ( *v56 <= 0x1Bu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 248) = v245;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 248), v245, v239, v240, v241, v242, v243, v244);
  Instance = StringLiteral_1185/*"401: Authorization Required"*/;
  if ( StringLiteral_1185/*"401: Authorization Required"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1185/*"401: Authorization Required"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v252 = (System_Int32_array **)StringLiteral_1185/*"401: Authorization Required"*/;
  }
  else
  {
    v252 = 0LL;
  }
  if ( *v56 <= 0x1Cu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 256) = v252;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 256), v252, v246, v247, v248, v249, v250, v251);
  Instance = StringLiteral_1186/*"403: Forbidden"*/;
  if ( StringLiteral_1186/*"403: Forbidden"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1186/*"403: Forbidden"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v259 = (System_Int32_array **)StringLiteral_1186/*"403: Forbidden"*/;
  }
  else
  {
    v259 = 0LL;
  }
  if ( *v56 <= 0x1Du )
    goto LABEL_195;
  *(_QWORD *)(v54 + 264) = v259;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 264), v259, v253, v254, v255, v256, v257, v258);
  Instance = StringLiteral_1188/*"404: Not Found"*/;
  if ( StringLiteral_1188/*"404: Not Found"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1188/*"404: Not Found"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v266 = (System_Int32_array **)StringLiteral_1188/*"404: Not Found"*/;
  }
  else
  {
    v266 = 0LL;
  }
  if ( *v56 <= 0x1Eu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 272) = v266;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 272), v266, v260, v261, v262, v263, v264, v265);
  Instance = StringLiteral_1189/*"408: Request Time-out"*/;
  if ( StringLiteral_1189/*"408: Request Time-out"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1189/*"408: Request Time-out"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v273 = (System_Int32_array **)StringLiteral_1189/*"408: Request Time-out"*/;
  }
  else
  {
    v273 = 0LL;
  }
  if ( *v56 <= 0x1Fu )
    goto LABEL_195;
  *(_QWORD *)(v54 + 280) = v273;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 280), v273, v267, v268, v269, v270, v271, v272);
  Instance = StringLiteral_1196/*"500: Internal Server Error"*/;
  if ( StringLiteral_1196/*"500: Internal Server Error"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1196/*"500: Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v280 = (System_Int32_array **)StringLiteral_1196/*"500: Internal Server Error"*/;
  }
  else
  {
    v280 = 0LL;
  }
  if ( *v56 <= 0x20u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 288) = v280;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 288), v280, v274, v275, v276, v277, v278, v279);
  Instance = StringLiteral_1198/*"502:"*/;
  if ( StringLiteral_1198/*"502:"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1198/*"502:"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v287 = (System_Int32_array **)StringLiteral_1198/*"502:"*/;
  }
  else
  {
    v287 = 0LL;
  }
  if ( *v56 <= 0x21u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 296) = v287;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 296), v287, v281, v282, v283, v284, v285, v286);
  Instance = StringLiteral_1200/*"503 Auto retry count"*/;
  if ( StringLiteral_1200/*"503 Auto retry count"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1200/*"503 Auto retry count"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v294 = (System_Int32_array **)StringLiteral_1200/*"503 Auto retry count"*/;
  }
  else
  {
    v294 = 0LL;
  }
  if ( *v56 <= 0x22u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 304) = v294;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 304), v294, v288, v289, v290, v291, v292, v293);
  Instance = StringLiteral_1210/*"504: Gateway Timeout"*/;
  if ( StringLiteral_1210/*"504: Gateway Timeout"*/ )
  {
    Instance = sub_B0D964(StringLiteral_1210/*"504: Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v301 = (System_Int32_array **)StringLiteral_1210/*"504: Gateway Timeout"*/;
  }
  else
  {
    v301 = 0LL;
  }
  if ( *v56 <= 0x23u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 312) = v301;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 312), v301, v295, v296, v297, v298, v299, v300);
  Instance = StringLiteral_14865/*"Unable to read data"*/;
  if ( StringLiteral_14865/*"Unable to read data"*/ )
  {
    Instance = sub_B0D964(StringLiteral_14865/*"Unable to read data"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( Instance )
    {
      v308 = (System_Int32_array **)StringLiteral_14865/*"Unable to read data"*/;
      goto LABEL_188;
    }
LABEL_209:
    v316 = sub_B0D99C(Instance);
    sub_B0D948(v316, 0LL);
  }
  v308 = 0LL;
LABEL_188:
  if ( *v56 <= 0x24u )
    goto LABEL_195;
  *(_QWORD *)(v54 + 320) = v308;
  sub_B0D840((BattleServantConfConponent_o *)(v54 + 320), v308, v302, v303, v304, v305, v306, v307);
  v309 = *(_QWORD *)(v54 + 24);
  if ( (int)v309 < 1 )
  {
LABEL_196:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v313 = (Il2CppObject *)errorCode;
    goto LABEL_208;
  }
  v310 = 0LL;
  v311 = (int)v309;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_210;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v54 + 32 + 8 * v310), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v310 >= v311 )
      goto LABEL_196;
    if ( v310 >= (unsigned int)*v56 )
      goto LABEL_195;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v315 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v314), !v315) )
  {
LABEL_210:
    sub_B0D97C(Instance);
  }
  CrashReporter__AddCustomKey(v315, (System_String_o *)StringLiteral_4620/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v310 >= *v56 )
  {
LABEL_195:
    v312 = sub_B0D9A8(Instance);
    sub_B0D948(v312, 0LL);
  }
  if ( !Instance )
    goto LABEL_210;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4621/*"DLErrorType"*/,
    *(System_String_o **)(v54 + 32 + 8 * v310),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v313 = (Il2CppObject *)StringLiteral_2109/*"AssetLoadError"*/;
LABEL_208:
  UnityEngine_Debug__LogError(v313, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndHandler_o *endCallback; // x0
  AssetLoader_LoadEndDataHandler_o *endCallback2; // x0

  if ( (byte_42173FE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42173FE = 1;
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
  UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)this, 0LL);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  return System_String__Equals_43837244(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_29505500(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_29497248(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42173FD & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_42173FD = 1;
  }
  v5 = sub_B0D974(AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames, method);
  AssetLoader__LoadDataCR_d__29___ctor((AssetLoader__LoadDataCR_d__29_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)resourceNames,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_42173FF & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    byte_42173FF = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)p_decData, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4217400 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v9);
    byte_4217400 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loader, 0LL, v11, v12, v13, v14, v15, v16);
  }
  this->fields.readData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42124C8 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, v17);
    byte_42124C8 = 1;
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
    UnityEngine_Application__Quit_40735960(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  bool v14; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callbackFunc,
    (System_String_array **)resourceNames,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (__int64)*(p_endCallback - 1);
  if ( !v13 )
    sub_B0D97C(v11);
  v14 = *(_DWORD *)(v13 + 40) != *(_DWORD *)(v13 + 44);
  this->fields.isDownload = v14;
  this->fields.isRequestDownload = v14;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_B0D97C(0LL);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42173F9 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_42173F9 = 1;
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
    v9 = sub_B022BC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_42173FB & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_42173FB = 1;
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
    v9 = sub_B022BC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
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

  if ( (byte_42173FA & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_42173FA = 1;
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
    v9 = sub_B022BC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_42173FC & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_42173FC = 1;
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
    v9 = sub_B022BC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  sub_B0D840(
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  AssetLoader_LoadEndDataHandler_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  AssetData_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(AssetData_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, AssetData_o *, _QWORD); // x0
  AssetLoader_LoadEndDataHandler_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(AssetData_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  AssetData_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndDataHandler_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (AssetLoader_LoadEndDataHandler_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(AssetData_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, data, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = data->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(data, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(AssetData_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(data, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = data->klass;
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(data, class_0, v10);
                }
                (*(void (__fastcall **)(AssetData_o *, _QWORD))v15)(data, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetData_o *, _QWORD))&data->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  data,
                  *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(data, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, data, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))v22)(v30, data, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))(*v30
                                                                       + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                       + 312))(
                v30,
                data,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetData_o *, __int64))v31)(v30, data, v29);
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
  sub_B0D840(
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  AssetLoader_LoadEndHandler_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  AssetLoader_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(AssetLoader_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, AssetLoader_o *, _QWORD); // x0
  AssetLoader_LoadEndHandler_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(AssetLoader_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  AssetLoader_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndHandler_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (AssetLoader_LoadEndHandler_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(AssetLoader_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, loader, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = loader->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(loader, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(AssetLoader_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(loader, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = loader->klass;
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(loader, class_0, v10);
                }
                (*(void (__fastcall **)(AssetLoader_o *, _QWORD))v15)(loader, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetLoader_o *, _QWORD))&loader->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  loader,
                  *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(loader, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, loader, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))v22)(v30, loader, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))(*v30
                                                                         + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                         + 312))(
                v30,
                loader,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetLoader_o *, __int64))v31)(v30, loader, v29);
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
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v66; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 v68; // x10
  UnityEngine_Networking_DownloadHandler_o *v69; // x8
  uint32_t klass; // w8
  UnityEngine_AssetBundleCreateRequest_o *v71; // x8
  AssetData_o *v72; // x20
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int v80; // w8
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  AssetLoader__LoadDataCR_d__29_o **v82; // x21
  System_String_o **p_url_5__11; // x21
  UnityEngine_Networking_UnityWebRequest_o *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **data; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Byte_array *readData; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v117; // x1
  BattleServantConfConponent_o *p_errorCode_5__6; // x22
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x1
  __int64 v126; // x2
  float unscaledTime; // s8
  ManagerConfig_c *v128; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v130; // x23
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int64_t v145; // x23
  ManagerConfig_c *v146; // x0
  System_Int32_array **v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  BattleServantConfConponent_o *p_errorLocalizeCode_5__7; // x0
  System_Int32_array **v155; // x1
  System_Int32_array **Url; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v164; // x8
  System_String_o *v165; // x22
  bool v166; // w23
  System_String_o *Key; // x0
  System_Int32_array **v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  float progress; // s0
  float loadProgress_5__9; // s9
  float v184; // s8
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  float v191; // s0
  bool v192; // zf
  float v193; // s8
  UnityEngine_Networking_DownloadHandler_o *v194; // x0
  __int64 v195; // x10
  UnityEngine_Networking_DownloadHandler_o *v196; // x23
  System_String_o *v197; // x0
  int v198; // w8
  System_Int32_array **v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  UnityEngine_Networking_DownloadHandler_c *v212; // x0
  __int64 (**image)(void); // x8
  __int64 v214; // x10
  UnityEngine_Networking_DownloadHandler_c *v215; // x8
  System_String_o *v216; // x22
  System_String_o *v217; // x0
  System_Int32_array **v218; // x1
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_String_o *v225; // x22
  System_String_o *v226; // x0
  System_Int32_array **v227; // x0
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v235; // x23
  System_String_o *v236; // x23
  AssetLoader__LoadDataCR_d__29_o *v237; // x23
  System_String_o *v238; // x24
  int v239; // w8
  System_String_o *v240; // x0
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  AssetLoader__LoadDataCR_d__29_o *v247; // x22
  System_Int32_array **v248; // x1
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_Int32_array **v255; // x23
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  System_Int32_array **v262; // x1
  struct AssetData_o *v263; // x8
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  System_Int32_array **v270; // x23
  System_String_array **v271; // x2
  System_String_array **v272; // x3
  System_Boolean_array **v273; // x4
  System_Int32_array **v274; // x5
  System_Int32_array *v275; // x6
  System_Int32_array *v276; // x7
  System_Int32_array **v277; // x1
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  System_Int32_array **v284; // x23
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  System_Int32_array **v291; // x1
  System_Int32_array **v292; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  ManagerConfig_c *v299; // x0
  struct AssetData_o *v300; // x8
  CommonUI_o *v301; // x21
  System_String_o *v302; // x22
  __int64 v303; // x1
  __int64 v304; // x2
  ErrorDialog_ClickDelegate_o *v305; // x23
  ManagementManager_c *v306; // x0
  _BOOL4 isDuringStartup; // w19
  WebViewManager_o *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v310; // x22
  System_String_o *v311; // x21
  System_String_o *v312; // x23
  System_String_o *v313; // x23
  __int64 v314; // x1
  __int64 v315; // x2
  ErrorDialog_ClickDelegate_o *v316; // x24
  System_String_o *v317; // x23
  System_String_o *v318; // x23
  __int64 v319; // x1
  __int64 v320; // x2
  ErrorDialog_ClickDelegate_o *v321; // x24
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v323; // x2
  System_String_array **v324; // x3
  System_Boolean_array **v325; // x4
  System_Int32_array **v326; // x5
  System_Int32_array *v327; // x6
  System_Int32_array *v328; // x7
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_String_o *v342; // x21
  System_String_o *UrlString; // x0
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  AssetLoader__LoadDataCR_d__29_o **v350; // x21
  float v351; // s8
  ManagerConfig_c *v352; // x0
  float v353; // s0
  System_Int32_array **v354; // x0
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  System_String_array **v361; // x2
  System_String_array **v362; // x3
  System_Boolean_array **v363; // x4
  System_Int32_array **v364; // x5
  System_Int32_array *v365; // x6
  System_Int32_array *v366; // x7
  float v367; // s0
  float v368; // s9
  float v369; // s8
  float v370; // s0
  float v371; // s8
  System_String_o **v372; // x21
  UnityEngine_Networking_UnityWebRequest_o **v373; // x22
  System_String_o *v374; // x0
  System_String_o *text; // x23
  System_String_o *v376; // x23
  System_String_array **v377; // x2
  System_String_array **v378; // x3
  System_Boolean_array **v379; // x4
  System_Int32_array **v380; // x5
  System_Int32_array *v381; // x6
  System_Int32_array *v382; // x7
  System_String_o *v383; // x23
  int v384; // w8
  int32_t v385; // w0
  int32_t v386; // w25
  System_String_o *v387; // x24
  System_String_o *v388; // x23
  System_Byte_array *v389; // x25
  uint32_t v390; // w25
  __int64 v391; // x1
  int v392; // w8
  Il2CppObject *v393; // x25
  AssetLoader__LoadDataCR_d__29_o *v394; // x21
  unsigned int v395; // w26
  System_String_o *v396; // x22
  Il2CppObject *v397; // x8
  AssetLoader__LoadDataCR_d__29_o *v398; // x22
  char v399; // w8
  System_String_o *v400; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v402; // x22
  System_String_o *v403; // x0
  int v404; // w23
  __int64 v405; // x0
  struct AssetData_o *v406; // x8
  ManagementManager_c *v407; // x0
  _BOOL4 v408; // w19
  CommonUI_o *v409; // x21
  System_String_o *v410; // x22
  __int64 v411; // x1
  __int64 v412; // x2
  ErrorDialog_ClickDelegate_o *v413; // x23
  ManagementManager_c *v414; // x0
  _BOOL4 v415; // w21
  CommonUI_o *v416; // x19
  __int64 *v417; // x8
  System_String_o *v418; // x21
  __int64 v419; // x1
  __int64 v420; // x2
  ErrorDialog_ClickDelegate_o *v421; // x22
  bool result; // w0
  __int64 *v423; // x8
  System_String_o *v424; // x22
  __int64 v425; // x1
  __int64 v426; // x2
  ErrorDialog_ClickDelegate_o *v427; // x23
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  System_String_array **v434; // x2
  System_String_array **v435; // x3
  System_Boolean_array **v436; // x4
  System_Int32_array **v437; // x5
  System_Int32_array *v438; // x6
  System_Int32_array *v439; // x7
  Il2CppObject *_2__current; // x21
  AssetData_o *v441; // x22
  AssetLoader__LoadDataCR_d__29_o **v442; // x21
  __int64 v443; // x10
  __int64 v444; // x10
  System_Byte_array *v445; // x0
  System_Int32_array **v446; // x0
  System_String_array **v447; // x2
  System_String_array **v448; // x3
  System_Boolean_array **v449; // x4
  System_Int32_array **v450; // x5
  System_Int32_array *v451; // x6
  System_Int32_array *v452; // x7
  System_String_array **v453; // x2
  System_String_array **v454; // x3
  System_Boolean_array **v455; // x4
  System_Int32_array **v456; // x5
  System_Int32_array *v457; // x6
  System_Int32_array *v458; // x7
  System_Int32_array **req_5__13; // x1
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  System_Int32_array **LoadRequest; // x0
  BattleServantConfConponent_o *v467; // x20
  System_String_array **v468; // x2
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  System_Int32_array **v474; // x0
  BattleServantConfConponent_o *p__2__current; // x26
  System_String_array **v476; // x2
  System_String_array **v477; // x3
  System_Boolean_array **v478; // x4
  System_Int32_array **v479; // x5
  System_Int32_array *v480; // x6
  System_Int32_array *v481; // x7
  int v482; // w8
  int autoRetryCount_5__3; // w19
  ManagerConfig_c *v484; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v486; // x20
  System_String_array **v487; // x2
  System_String_array **v488; // x3
  System_Boolean_array **v489; // x4
  System_Int32_array **v490; // x5
  System_Int32_array *v491; // x6
  System_Int32_array *v492; // x7
  System_Int32_array **v493; // x1
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
  System_Int32_array **v506; // x1
  System_Int32_array **v507; // x1
  System_Int32_array **v508; // x1
  System_String_array **v509; // x2
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  ManagerConfig_c *v515; // x0
  struct AssetData_o *v516; // x8
  CommonUI_o *v517; // x22
  System_String_o *v518; // x21
  __int64 v519; // x1
  __int64 v520; // x2
  ErrorDialog_ClickDelegate_o *v521; // x23
  System_Int32_array **v522; // x1
  ManagementManager_c *v523; // x0
  _BOOL4 v524; // w19
  CommonUI_o *v525; // x21
  System_String_o *v526; // x22
  __int64 v527; // x1
  __int64 v528; // x2
  ErrorDialog_ClickDelegate_o *v529; // x23
  System_String_o *v530; // x22
  __int64 v531; // x1
  __int64 v532; // x2
  ErrorDialog_ClickDelegate_o *v533; // x23
  System_Int32_array **v534; // x1
  UnityEngine_WaitForSeconds_o *v535; // x20
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  AssetLoader___c_c *v542; // x0
  struct AssetLoader___c_StaticFields *v543; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v545; // x21
  struct AssetLoader___c_StaticFields *v546; // x0
  System_String_array **v547; // x2
  System_String_array **v548; // x3
  System_Boolean_array **v549; // x4
  System_Int32_array **v550; // x5
  System_Int32_array *v551; // x6
  System_Int32_array *v552; // x7
  UnityEngine_WaitUntil_o *v553; // x21
  System_String_array **v554; // x2
  System_String_array **v555; // x3
  System_Boolean_array **v556; // x4
  System_Int32_array **v557; // x5
  System_Int32_array *v558; // x6
  System_Int32_array *v559; // x7
  UnityEngine_Networking_DownloadHandler_o *v560; // x0
  ManagerConfig_c *v561; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  System_Int32_array **wait_5__10; // x1
  ManagerConfig_c *v564; // x0
  struct ManagerConfig_StaticFields *v565; // x8
  System_Int32_array **v566; // x1
  __int64 v567; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  AssetLoader__LoadDataCR_d__29_o *v570; // [xsp+28h] [xbp-78h]
  __int64 v571; // [xsp+30h] [xbp-70h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-68h] BYREF

  v9 = this;
  if ( (byte_4213964 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetLoader_EndRebootDialog__, method);
    sub_B0D8A4(&Method_AssetLoader_EndRetryDialog__, v10);
    sub_B0D8A4(&Method_AssetLoader_EndWarningDialog__, v11);
    sub_B0D8A4(&AssetManager_TypeInfo, v12);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v13);
    sub_B0D8A4(&char___TypeInfo, v14);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_B0D8A4(&CommonServicePluginScript_TypeInfo, v16);
    sub_B0D8A4(&Crc32_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19);
    sub_B0D8A4(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v20);
    sub_B0D8A4(&DownloadHandlerFileWithCrcCheck_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v22);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v23);
    sub_B0D8A4(&System_IO_IOException_TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&ManagementManager_TypeInfo, v26);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v27);
    sub_B0D8A4(&NetworkManager_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B0D8A4(&string___TypeInfo, v30);
    sub_B0D8A4(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v31);
    sub_B0D8A4(&AssetLoader___c_TypeInfo, v32);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v33);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v34);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v35);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v36);
    sub_B0D8A4(&StringLiteral_9299/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v37);
    sub_B0D8A4(&StringLiteral_7118/*"HTTP"*/, v38);
    sub_B0D8A4(&StringLiteral_5336/*"Disk full"*/, v39);
    sub_B0D8A4(&StringLiteral_2123/*"AssetStorageList download time over"*/, v40);
    sub_B0D8A4(&StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/, v41);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v42);
    sub_B0D8A4(&StringLiteral_2110/*"AssetName : "*/, v43);
    sub_B0D8A4(&StringLiteral_661/*")\n\n503 Auto retry count "*/, v44);
    sub_B0D8A4(&StringLiteral_664/*")\nfile crc ("*/, v45);
    sub_B0D8A4(&StringLiteral_1199/*"503"*/, v46);
    sub_B0D8A4(&StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v47);
    sub_B0D8A4(&StringLiteral_15792/*"[FFFF80]Download error for debug"*/, v48);
    sub_B0D8A4(&StringLiteral_2120/*"AssetStorageList download data error"*/, v49);
    sub_B0D8A4(&StringLiteral_23776/*"~"*/, v50);
    sub_B0D8A4(&StringLiteral_12405/*"STATUS"*/, v51);
    sub_B0D8A4(&StringLiteral_660/*")\n\n"*/, v52);
    sub_B0D8A4(&StringLiteral_9298/*"NETWORK_ERROR_ASSET_UPDATE"*/, v53);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v54);
    sub_B0D8A4(&StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v55);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v56);
    sub_B0D8A4(&StringLiteral_18453/*"error "*/, v57);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v58);
    sub_B0D8A4(&StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v59);
    sub_B0D8A4(&StringLiteral_2121/*"AssetStorageList download error"*/, v60);
    sub_B0D8A4(&StringLiteral_663/*")\n\nAssetBundle file download time over"*/, v61);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v62);
    byte_4213964 = 1;
  }
  v571 = 0LL;
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
      v82 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
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
      sub_B0D840((BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12, 0LL, v2, v3, v4, v5, v6, v7);
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
      v66 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        v68 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1);
        if ( *(&downloadHandler->klass->_2.bitflags2 + 1) >= (unsigned int)v68 )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[v68 - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v69 = downloadHandler;
          else
            v69 = 0LL;
          if ( (v66 & 1) != 0 )
            goto LABEL_13;
LABEL_44:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v91, v92, v93, v94, v95, v96);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_438;
          AssetData__ResetVersion((AssetData_o *)this, 0LL);
          goto LABEL_57;
        }
      }
      v69 = 0LL;
      if ( (v66 & 1) == 0 )
        goto LABEL_44;
LABEL_13:
      if ( v69 )
      {
        klass = (uint32_t)v69[1].klass;
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
        sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.readData, data, v98, v99, v100, v101, v102, v103);
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
      sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v105, v106, v107, v108, v109, v110);
      _4__this->fields.readData = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v111, v112, v113, v114, v115, v116);
      while ( 1 )
      {
LABEL_57:
        _4__this->fields.readData = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        if ( !_4__this->fields.isDownload )
          goto LABEL_341;
        *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
        v9->fields._errorCode_5__6 = 0LL;
        p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        v128 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v128 = ManagerConfig_TypeInfo;
        }
        TIMEOUT = v128->static_fields->TIMEOUT;
        v9->fields._loadProgress_5__9 = 0.0;
        v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
        v130 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v125, v126);
        UnityEngine_WaitForEndOfFrame___ctor(v130, 0LL);
        v9->fields._wait_5__10 = v130;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v9->fields._wait_5__10,
          (System_Int32_array **)v130,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136);
        Path = AssetStorageCache__GetPath(0LL);
        if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        }
        FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
        if ( FreeSize >= 1 )
        {
          v145 = FreeSize;
          v146 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v146 = ManagerConfig_TypeInfo;
          }
          if ( v145 < v146->static_fields->LIMIT_FREE_SIZE )
          {
            _4__this->fields.isErrorDialog = 1;
            v147 = (System_Int32_array **)StringLiteral_5336/*"Disk full"*/;
            p_errorCode_5__6->klass = (BattleServantConfConponent_c *)StringLiteral_5336/*"Disk full"*/;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
              v147,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
            p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7;
            v155 = (System_Int32_array **)StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/;
            v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/;
            goto LABEL_165;
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        Url = (System_Int32_array **)AssetData__get_Url((AssetData_o *)this, 0LL);
        v9->fields._url_5__11 = (struct System_String_o *)Url;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._url_5__11, Url, v157, v158, v159, v160, v161, v162);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        url_5__11 = v9->fields._url_5__11;
        this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0LL);
        v164 = _4__this->fields.data;
        v165 = (System_String_o *)this;
        if ( v9->fields._isEncrypted_5__2 )
        {
          if ( !v164 )
            goto LABEL_438;
          v166 = v164->fields.entryCount > 0;
        }
        else
        {
          if ( !v164 )
            goto LABEL_438;
          v166 = 0;
        }
        Key = AssetData__get_Key(_4__this->fields.data, 0LL);
        v168 = (System_Int32_array **)UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, v165, v166, Key, 0LL);
        _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v168;
        sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, v168, v169, v170, v171, v172, v173, v174);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v175 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                        0LL);
        v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v175;
        p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
          v175,
          v176,
          v177,
          v178,
          v179,
          v180,
          v181);
LABEL_79:
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
LABEL_438:
          sub_B0D97C(this);
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
          v184 = progress;
          v191 = UnityEngine_Time__get_unscaledTime(0LL);
          v192 = v184 == loadProgress_5__9;
          v193 = v191;
          if ( !v192 )
          {
            v561 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v561 = ManagerConfig_TypeInfo;
            }
            static_fields = v561->static_fields;
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
            v9->fields._requestTime_5__8 = v193 + static_fields->TIMEOUT;
            if ( !this )
              goto LABEL_438;
            v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0LL);
LABEL_431:
            wait_5__10 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)wait_5__10;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              wait_5__10,
              v185,
              v186,
              v187,
              v188,
              v189,
              v190);
            result = 1;
            v9->fields.__1__state = 1;
            return result;
          }
          if ( v191 < v9->fields._requestTime_5__8 )
            goto LABEL_431;
        }
        if ( !_4__this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v194 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0LL);
        if ( v194
          && (v195 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1),
              *(&v194->klass->_2.bitflags2 + 1) >= (unsigned int)v195) )
        {
          v196 = (DownloadHandlerFileWithCrcCheck_c *)v194->klass->_2.typeHierarchy[v195 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
               ? v194
               : 0LL;
        }
        else
        {
          v196 = 0LL;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v199 = (System_Int32_array **)System_String__Concat_43852188(
                                          (System_String_o *)StringLiteral_591/*"("*/,
                                          v9->fields._url_5__11,
                                          (System_String_o *)StringLiteral_663/*")\n\nAssetBundle file download time over"*/,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v199;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v199,
            v200,
            v201,
            v202,
            v203,
            v204,
            v205);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          if ( v196 )
            DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v196, 0LL);
          goto LABEL_164;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v197 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( System_String__IsNullOrEmpty(v197, 0LL) )
        {
          if ( !v196 )
          {
            v198 = 0;
LABEL_127:
            HIDWORD(v571) = v198;
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_438;
            if ( v198 == this->fields._autoRetryCount_5__3 )
            {
              AssetData__UpdateVersion((AssetData_o *)this, 0LL);
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              _4__this->fields.isDownload = 0;
            }
            else
            {
              this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(string___TypeInfo, 7LL);
              if ( !this )
                goto LABEL_438;
              v247 = this;
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_591/*"("*/;
              if ( StringLiteral_591/*"("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(StringLiteral_591/*"("*/, v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v248 = (System_Int32_array **)StringLiteral_591/*"("*/;
              }
              else
              {
                v248 = 0LL;
              }
              if ( !LODWORD(v247->fields.__2__current) )
                goto LABEL_295;
              v247->fields.__4__this = (struct AssetLoader_o *)v248;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields.__4__this,
                v248,
                v241,
                v242,
                v243,
                v244,
                v245,
                v246);
              v255 = (System_Int32_array **)v9->fields._url_5__11;
              if ( v255 )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(
                                                            v9->fields._url_5__11,
                                                            v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v247->fields.__2__current) <= 1 )
                goto LABEL_295;
              v247->fields.resourceNames = (struct System_String_array *)v255;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields.resourceNames,
                v255,
                v249,
                v250,
                v251,
                v252,
                v253,
                v254);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              if ( StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v262 = (System_Int32_array **)StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              }
              else
              {
                v262 = 0LL;
              }
              if ( LODWORD(v247->fields.__2__current) <= 2 )
                goto LABEL_295;
              *(_QWORD *)&v247->fields._isEncrypted_5__2 = v262;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields._isEncrypted_5__2,
                v262,
                v256,
                v257,
                v258,
                v259,
                v260,
                v261);
              v263 = _4__this->fields.data;
              if ( !v263 )
                goto LABEL_438;
              LODWORD(v571) = v263->fields.crc;
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v571, 0LL);
              v270 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(this, v247->klass->_1.element_class);
                if ( !this )
                {
LABEL_439:
                  v567 = sub_B0D99C();
                  sub_B0D948(v567, 0LL);
                }
              }
              if ( LODWORD(v247->fields.__2__current) <= 3 )
                goto LABEL_295;
              *(_QWORD *)&v247->fields._isAutoRetry_5__4 = v270;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields._isAutoRetry_5__4,
                v270,
                v264,
                v265,
                v266,
                v267,
                v268,
                v269);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_664/*")\nfile crc ("*/;
              if ( StringLiteral_664/*")\nfile crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(StringLiteral_664/*")\nfile crc ("*/, v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v277 = (System_Int32_array **)StringLiteral_664/*")\nfile crc ("*/;
              }
              else
              {
                v277 = 0LL;
              }
              if ( LODWORD(v247->fields.__2__current) <= 4 )
                goto LABEL_295;
              v247->fields._errorCode_5__6 = (struct System_String_o *)v277;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields._errorCode_5__6,
                v277,
                v271,
                v272,
                v273,
                v274,
                v275,
                v276);
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v571 + 4, 0LL);
              v284 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(this, v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v247->fields.__2__current) <= 5 )
                goto LABEL_295;
              v247->fields._errorLocalizeCode_5__7 = (struct System_String_o *)v284;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields._errorLocalizeCode_5__7,
                v284,
                v278,
                v279,
                v280,
                v281,
                v282,
                v283);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_658/*")"*/;
              if ( StringLiteral_658/*")"*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D964(StringLiteral_658/*")"*/, v247->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v291 = (System_Int32_array **)StringLiteral_658/*")"*/;
              }
              else
              {
                v291 = 0LL;
              }
              if ( LODWORD(v247->fields.__2__current) <= 6 )
                goto LABEL_295;
              *(_QWORD *)&v247->fields._requestTime_5__8 = v291;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v247->fields._requestTime_5__8,
                v291,
                v285,
                v286,
                v287,
                v288,
                v289,
                v290);
              v292 = (System_Int32_array **)System_String__Concat_43930028((System_String_array *)v247, 0LL);
              v9->fields._errorCode_5__6 = (struct System_String_o *)v292;
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
                v292,
                v293,
                v294,
                v295,
                v296,
                v297,
                v298);
              v9->fields._isCrcError_5__5 = 1;
            }
            goto LABEL_164;
          }
          if ( !v196[4].klass )
          {
            v198 = (int)v196[1].klass;
            goto LABEL_127;
          }
        }
        else if ( !v196 )
        {
          goto LABEL_110;
        }
        DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v196, 0LL);
        v212 = v196[4].klass;
        if ( !v212 )
        {
LABEL_110:
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          v225 = v9->fields._url_5__11;
          v226 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          v227 = (System_Int32_array **)System_String__Concat_43853316(
                                          (System_String_o *)StringLiteral_591/*"("*/,
                                          v225,
                                          (System_String_o *)StringLiteral_660/*")\n\n"*/,
                                          v226,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v227;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v227,
            v228,
            v229,
            v230,
            v231,
            v232,
            v233);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                              0LL);
          if ( !ResponseHeaders )
            goto LABEL_164;
          v235 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
                 (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                  v235,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_12405/*"STATUS"*/,
                  &value,
                  (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
          {
            goto LABEL_164;
          }
          v236 = (System_String_o *)value;
          this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_438;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_295;
          LOWORD(this->fields.__4__this) = 32;
          if ( !v236 )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_43910688(
                                                      v236,
                                                      (System_Char_array *)this,
                                                      1,
                                                      0LL);
          if ( !this )
            goto LABEL_438;
          v237 = this;
          if ( SLODWORD(this->fields.__2__current) < 2 )
            goto LABEL_164;
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_7118/*"HTTP"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_164;
          if ( LODWORD(v237->fields.__2__current) <= 1 )
            goto LABEL_295;
          this = (AssetLoader__LoadDataCR_d__29_o *)v237->fields.resourceNames;
          if ( !this )
            goto LABEL_438;
          if ( !System_String__Equals_43837244((System_String_o *)this, (System_String_o *)StringLiteral_1199/*"503"*/, 0LL) )
            goto LABEL_164;
          v238 = v9->fields._url_5__11;
          v239 = v9->fields._autoRetryCount_5__3 + 1;
          v9->fields._isAutoRetry_5__4 = 1;
          v9->fields._autoRetryCount_5__3 = v239;
          v240 = System_Int32__ToString((int)v9 + 52, 0LL);
          v218 = (System_Int32_array **)System_String__Concat_43853316(
                                          (System_String_o *)StringLiteral_591/*"("*/,
                                          v238,
                                          (System_String_o *)StringLiteral_661/*")\n\n503 Auto retry count "*/,
                                          v240,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v218;
          goto LABEL_109;
        }
        image = (__int64 (**)(void))v212->_1.image;
        v214 = *(&System_IO_IOException_TypeInfo->_2.bitflags2 + 1);
        if ( *((unsigned __int8 *)v212->_1.image + 300) >= (unsigned int)v214
          && *((System_IO_IOException_c **)image[25] + v214 - 1) == System_IO_IOException_TypeInfo )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)v196[4].klass;
          if ( !this )
            goto LABEL_438;
          v218 = (System_Int32_array **)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v218;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
          v215 = v196[4].klass;
          if ( !v215 )
            goto LABEL_438;
          v216 = (System_String_o *)this;
          v217 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v215->_1.image
                                     + 49))(
                                      v196[4].klass,
                                      *((_QWORD *)v215->_1.image + 50));
          v218 = (System_Int32_array **)System_String__Concat_43853316(
                                          (System_String_o *)StringLiteral_18453/*"error "*/,
                                          v216,
                                          (System_String_o *)StringLiteral_80/*" "*/,
                                          v217,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v218;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
LABEL_109:
        sub_B0D840(p_errorCode_5__6, v218, v219, v220, v221, v222, v223, v224);
LABEL_164:
        v9->fields._url_5__11 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v206, v207, v208, v209, v210, v211);
        p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)p_asyncOperater_5__12;
        v155 = 0LL;
        v9->fields._asyncOperater_5__12 = 0LL;
LABEL_165:
        sub_B0D840(p_errorLocalizeCode_5__7, v155, v148, v149, v150, v151, v152, v153);
        method = (const MethodInfo *)p_errorCode_5__6->klass;
        if ( p_errorCode_5__6->klass )
        {
          AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
          v299 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v299 = ManagerConfig_TypeInfo;
          }
          if ( v299->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v300 = _4__this->fields.data;
            if ( !v300 )
              goto LABEL_438;
            v301 = (CommonUI_o *)this;
            v302 = System_String__Concat_43853316(
                     (System_String_o *)StringLiteral_2110/*"AssetName : "*/,
                     v300->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     (System_String_o *)p_errorCode_5__6->klass,
                     0LL);
            v305 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v303, v304);
            ErrorDialog_ClickDelegate___ctor(v305, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v301 )
              goto LABEL_438;
            v8 &= 0xFFFFFFFF00000000LL;
            *(_DWORD *)&effectDistance.fields.has_value = v8;
            effectDistance.fields.value = 0LL;
            CommonUI__OpenWarningDialog(
              v301,
              (System_String_o *)StringLiteral_15792/*"[FFFF80]Download error for debug"*/,
              v302,
              v305,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
LABEL_173:
            if ( _4__this->fields.isErrorDialog )
            {
              v507 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v507;
              sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v507, v2, v3, v4, v5, v6, v7);
              v80 = 2;
              goto LABEL_411;
            }
          }
          if ( v9->fields._isAutoRetry_5__4 )
          {
            autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
            v484 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v484 = ManagerConfig_TypeInfo;
            }
            DOWNLOAD_RETRY_DELAY_TIME = v484->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
            v486 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
            UnityEngine_WaitForSeconds___ctor(v486, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v486;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B0D840(p__2__current, (System_Int32_array **)v486, v487, v488, v489, v490, v491, v492);
            v482 = 3;
LABEL_413:
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v482;
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
            if ( !byte_42124C8 )
            {
              sub_B0D8A4(&ManagementManager_TypeInfo, method);
              byte_42124C8 = 1;
            }
            v306 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v306 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v306->static_fields->isDuringStartup;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
            v310 = (CommonUI_o *)Instance;
            v311 = (System_String_o *)StringLiteral_1/*""*/;
            if ( isDuringStartup )
            {
              if ( errorLocalizeCode_5__7 )
                v312 = v9->fields._errorLocalizeCode_5__7;
              else
                v312 = (System_String_o *)StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v313 = LocalizationManager__Get(v312, 0LL);
              v316 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v314, v315);
              ErrorDialog_ClickDelegate___ctor(v316, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v310 )
                goto LABEL_438;
              CommonUI__OpenRetryBootDialog(v310, v311, v313, v316, 1, 0LL);
            }
            else
            {
              if ( errorLocalizeCode_5__7 )
                v317 = v9->fields._errorLocalizeCode_5__7;
              else
                v317 = (System_String_o *)StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v318 = LocalizationManager__Get(v317, 0LL);
              v321 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v319, v320);
              ErrorDialog_ClickDelegate___ctor(v321, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v310 )
                goto LABEL_438;
              CommonUI__OpenRetryDialog(v310, v311, v318, v321, 1, 0LL);
            }
LABEL_201:
            if ( _4__this->fields.isErrorDialog )
            {
              v493 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v493;
              sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v493, v2, v3, v4, v5, v6, v7);
              v80 = 4;
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
        if ( !byte_42124CA )
        {
          sub_B0D8A4(&NetworkManager_TypeInfo, method);
          byte_42124CA = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v494, v495, v496, v497, v498, v499);
          _4__this->fields.readData = 0LL;
          sub_B0D840(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v500,
            v501,
            v502,
            v503,
            v504,
            v505);
          return 0;
        }
        if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
          goto LABEL_348;
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v323, v324, v325, v326, v327, v328);
          _4__this->fields.readData = 0LL;
          sub_B0D840(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v329,
            v330,
            v331,
            v332,
            v333,
            v334);
        }
        if ( v9->fields._isCrcError_5__5 )
          break;
LABEL_340:
        v9->fields._errorCode_5__6 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v428,
          v429,
          v430,
          v431,
          v432,
          v433);
        v9->fields._wait_5__10 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._wait_5__10, 0LL, v434, v435, v436, v437, v438, v439);
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
            v467 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
            sub_B0D840(v467, LoadRequest, v468, v469, v470, v471, v472, v473);
            this = (AssetLoader__LoadDataCR_d__29_o *)v467->klass;
            if ( !v467->klass )
              goto LABEL_438;
            v474 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
            v9->fields.__2__current = (Il2CppObject *)v474;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B0D840(p__2__current, v474, v476, v477, v478, v479, v480, v481);
            v482 = 11;
          }
          else
          {
            v542 = AssetLoader___c_TypeInfo;
            if ( (BYTE3(AssetLoader___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v542 = AssetLoader___c_TypeInfo;
            }
            v543 = v542->static_fields;
            _9__29_0 = v543->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( (BYTE3(v542->vtable._0_Equals.methodPtr) & 4) != 0 && !v542->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v542);
                v543 = AssetLoader___c_TypeInfo->static_fields;
              }
              v545 = (Il2CppObject *)v543->__9;
              _9__29_0 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v117, v2);
              System_Func_bool____ctor(
                _9__29_0,
                v545,
                Method_AssetLoader___c__LoadDataCR_b__29_0__,
                (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
              v546 = AssetLoader___c_TypeInfo->static_fields;
              v546->__9__29_0 = _9__29_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v546->__9__29_0,
                (System_Int32_array **)_9__29_0,
                v547,
                v548,
                v549,
                v550,
                v551,
                v552);
            }
            v553 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v117, v2);
            UnityEngine_WaitUntil___ctor(v553, _9__29_0, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v553;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B0D840(p__2__current, (System_Int32_array **)v553, v554, v555, v556, v557, v558, v559);
            v482 = 10;
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
        v441 = _4__this->fields.data;
        if ( !v441 )
          goto LABEL_438;
        if ( v441->fields.entryCount >= 1 )
        {
          v442 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v9->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v443 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1),
                  *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v443)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v443 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v442;
              if ( !*v442 )
                goto LABEL_438;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_438;
              v444 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v444
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v444 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_438;
              }
            }
            v445 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v446 = (System_Int32_array **)UnityEngine_AssetBundle__LoadFromMemoryAsync(v445, 0LL);
            v9->fields._req_5__13 = (struct UnityEngine_AssetBundleCreateRequest_o *)v446;
            sub_B0D840((BattleServantConfConponent_o *)&v9->fields._req_5__13, v446, v447, v448, v449, v450, v451, v452);
            this = *v442;
            if ( !*v442 )
              goto LABEL_438;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v442 = 0LL;
            sub_B0D840(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              0LL,
              v453,
              v454,
              v455,
              v456,
              v457,
              v458);
            req_5__13 = (System_Int32_array **)v9->fields._req_5__13;
            v9->fields.__2__current = (Il2CppObject *)req_5__13;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              req_5__13,
              v460,
              v461,
              v462,
              v463,
              v464,
              v465);
            v80 = 12;
            goto LABEL_411;
          }
          if ( !this )
            goto LABEL_438;
          v560 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v441, v560, 0LL);
        }
LABEL_37:
        v84 = _4__this->fields.loader;
        if ( v84 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v84, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v85, v86, v87, v88, v89, v90);
        }
        _4__this->fields.readData = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&v9->fields._url_5__11,
        ConfigFileAddress,
        v336,
        v337,
        v338,
        v339,
        v340,
        v341);
LABEL_221:
      v342 = *p_url_5__11;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v342, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_438;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v350 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.loader,
        (System_Int32_array **)this,
        v344,
        v345,
        v346,
        v347,
        v348,
        v349);
      v351 = UnityEngine_Time__get_unscaledTime(0LL);
      v352 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v352 = ManagerConfig_TypeInfo;
      }
      v353 = v352->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      v9->fields._requestTime_5__8 = v351 + v353;
      this = *v350;
      if ( !*v350 )
        goto LABEL_438;
      v354 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                      0LL);
      v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v354;
      v82 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
        v354,
        v355,
        v356,
        v357,
        v358,
        v359,
        v360);
LABEL_230:
      this = *v82;
      if ( !*v82 )
        goto LABEL_438;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = *v82;
        if ( !*v82 )
          goto LABEL_438;
        v367 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v368 = v9->fields._loadProgress_5__9;
        v369 = v367;
        v370 = UnityEngine_Time__get_unscaledTime(0LL);
        v192 = v369 == v368;
        v371 = v370;
        if ( !v192 )
        {
          v564 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v564 = ManagerConfig_TypeInfo;
          }
          v565 = v564->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
          v9->fields._requestTime_5__8 = v371 + v565->TIMEOUT;
          if ( !this )
            goto LABEL_438;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_437;
        }
        if ( v370 < v9->fields._requestTime_5__8 )
        {
LABEL_437:
          v566 = (System_Int32_array **)v9->fields._wait_5__10;
          v9->fields.__2__current = (Il2CppObject *)v566;
          sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v566, v361, v362, v363, v364, v365, v366);
          v80 = 5;
          goto LABEL_411;
        }
      }
      v9->fields._errorCode_5__6 = 0LL;
      v372 = &v9->fields._errorCode_5__6;
      sub_B0D840((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v361, v362, v363, v364, v365, v366);
      if ( !_4__this )
        goto LABEL_438;
      v373 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v373 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v373, 0LL);
        v423 = &StringLiteral_2123/*"AssetStorageList download time over"*/;
        goto LABEL_377;
      }
      v374 = UnityEngine_Networking_UnityWebRequest__get_error(*v373, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v374, 0LL);
      if ( !*v373 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v508 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__get_error(*v373, 0LL);
        *v372 = (System_String_o *)v508;
        goto LABEL_378;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v373, 0LL);
      if ( !this )
        goto LABEL_438;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v376 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v376, 0LL) )
      {
        v423 = &StringLiteral_2121/*"AssetStorageList download error"*/;
        goto LABEL_377;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_438;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v376 )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim(v376, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_438;
      v383 = (System_String_o *)this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_23776/*"~"*/, 0LL) )
        goto LABEL_332;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v384 = (int)this->fields.__2__current;
      if ( !v384 )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = 13;
      if ( v384 == 1 )
        goto LABEL_295;
      WORD1(this->fields.__4__this) = 10;
      v385 = System_String__IndexOfAny(v383, (System_Char_array *)this, 0LL);
      if ( v385 < 2 )
        goto LABEL_332;
      v386 = v385;
      v387 = System_String__Substring_43913640(v383, 1, v385 - 1, 0LL);
      v388 = System_String__Substring(v383, v386 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_438;
      v389 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v388,
                                    this->klass[1]._1.nestedTypes);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v390 = Crc32__Compute(v389, 0LL);
      if ( System_UInt32__Parse(v387, 0LL) != v390 )
      {
LABEL_332:
        v423 = &StringLiteral_2120/*"AssetStorageList download data error"*/;
LABEL_377:
        v508 = (System_Int32_array **)*v423;
        *v372 = (System_String_o *)*v423;
LABEL_378:
        sub_B0D840(
          (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
          v508,
          v377,
          v378,
          v379,
          v380,
          v381,
          v382);
        if ( *v373 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v373, 0LL);
          *v373 = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v509, v510, v511, v512, v513, v514);
        }
        if ( *v372 )
        {
          v515 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v515 = ManagerConfig_TypeInfo;
          }
          if ( v515->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v516 = _4__this->fields.data;
            if ( !v516 )
              goto LABEL_438;
            v517 = (CommonUI_o *)this;
            v518 = System_String__Concat_43853316(
                     (System_String_o *)StringLiteral_2110/*"AssetName : "*/,
                     v516->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     *v372,
                     0LL);
            v521 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v519, v520);
            ErrorDialog_ClickDelegate___ctor(v521, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v517 )
              goto LABEL_438;
            effectDistancea.fields.value = 0LL;
            *(_DWORD *)&effectDistancea.fields.has_value = 0;
            CommonUI__OpenWarningDialog(
              v517,
              (System_String_o *)StringLiteral_15792/*"[FFFF80]Download error for debug"*/,
              v518,
              v521,
              1,
              0,
              -1.0,
              1,
              effectDistancea,
              0LL);
LABEL_388:
            if ( _4__this->fields.isErrorDialog )
            {
              v522 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v522;
              sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v522, v2, v3, v4, v5, v6, v7);
              v80 = 6;
              goto LABEL_411;
            }
          }
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_42124C8 )
          {
            sub_B0D8A4(&ManagementManager_TypeInfo, method);
            byte_42124C8 = 1;
          }
          v523 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v523 = ManagementManager_TypeInfo;
          }
          v524 = v523->static_fields->isDuringStartup;
          v525 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v524 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v526 = LocalizationManager__Get((System_String_o *)StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v529 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v527, v528);
            ErrorDialog_ClickDelegate___ctor(v529, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v525 )
              goto LABEL_438;
            CommonUI__OpenRetryBootDialog(v525, (System_String_o *)StringLiteral_1/*""*/, v526, v529, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v530 = LocalizationManager__Get((System_String_o *)StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v533 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v531, v532);
            ErrorDialog_ClickDelegate___ctor(v533, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v525 )
              goto LABEL_438;
            CommonUI__OpenRetryDialog(v525, (System_String_o *)StringLiteral_1/*""*/, v530, v533, 0, 0LL);
          }
LABEL_409:
          if ( _4__this->fields.isErrorDialog )
          {
            v534 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)v534;
            sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v534, v2, v3, v4, v5, v6, v7);
            v80 = 7;
            goto LABEL_411;
          }
        }
        v535 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v535, 1.0, 0LL);
        v9->fields.__2__current = (Il2CppObject *)v535;
        p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
        sub_B0D840(p__2__current, (System_Int32_array **)v535, v536, v537, v538, v539, v540, v541);
        v482 = 8;
        goto LABEL_413;
      }
      v570 = v9;
      if ( !v388 )
      {
LABEL_312:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_42124C8 )
        {
          sub_B0D8A4(&ManagementManager_TypeInfo, v391);
          byte_42124C8 = 1;
        }
        v414 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v414 = ManagementManager_TypeInfo;
        }
        v415 = v414->static_fields->isDuringStartup;
        v416 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v415 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v417 = &StringLiteral_9299/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v417 = &StringLiteral_9298/*"NETWORK_ERROR_ASSET_UPDATE"*/;
        }
        v418 = LocalizationManager__Get((System_String_o *)*v417, 0LL);
        v421 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v419, v420);
        ErrorDialog_ClickDelegate___ctor(v421, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
        if ( !v416 )
          goto LABEL_438;
        CommonUI__OpenErrorDialog(v416, (System_String_o *)StringLiteral_1/*""*/, v418, v421, 0, 0LL);
        return 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v392 = (int)this->fields.__2__current;
      if ( !v392 || (LOWORD(this->fields.__4__this) = 13, v392 == 1) )
      {
LABEL_295:
        v405 = sub_B0D9A8(this);
        sub_B0D948(v405, 0LL);
      }
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_43910688(v388, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_438;
      v393 = this->fields.__2__current;
      v394 = this;
      if ( (int)v393 < 1 )
        goto LABEL_312;
      v395 = 0;
      while ( 1 )
      {
        v396 = (System_String_o *)*((_QWORD *)&v394->fields.__4__this + (int)v395);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_438;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_295;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v396 )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split(v396, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_438;
        v397 = this->fields.__2__current;
        v398 = this;
        if ( (int)v397 < 1 )
          break;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1543/*"@"*/,
                                                    0LL);
        if ( !LODWORD(v398->fields.__2__current) )
          goto LABEL_295;
        v399 = (char)this;
        this = (AssetLoader__LoadDataCR_d__29_o *)v398->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        if ( (v399 & 1) != 0 )
        {
          v400 = System_String__Substring((System_String_o *)this, 1, 0LL);
          p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
          if ( SLODWORD(v398->fields.__2__current) > 1 )
            p_resourceNames = (System_String_o **)&v398->fields.resourceNames;
          v402 = *p_resourceNames;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v400, v402, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_312;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_23776/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v398->fields.__2__current) )
              goto LABEL_295;
            this = (AssetLoader__LoadDataCR_d__29_o *)v398->fields.__4__this;
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v397 = v398->fields.__2__current;
              break;
            }
          }
        }
LABEL_293:
        if ( (int)++v395 >= (int)v393 )
          goto LABEL_312;
        if ( v395 >= LODWORD(v394->fields.__2__current) )
          goto LABEL_295;
      }
      if ( (_DWORD)v397 != 5 )
        goto LABEL_312;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v398->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_438;
      v403 = System_String__Trim_43837236((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v403, 0LL);
      if ( LODWORD(v398->fields.__2__current) <= 4 )
        goto LABEL_295;
      v404 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v398->fields._errorCode_5__6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_293;
      v406 = _4__this->fields.data;
      if ( !v406 )
        goto LABEL_438;
      if ( v404 != v406->fields.crc )
        goto LABEL_312;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_42124C8 )
      {
        sub_B0D8A4(&ManagementManager_TypeInfo, v391);
        byte_42124C8 = 1;
      }
      v407 = ManagementManager_TypeInfo;
      v9 = v570;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v407 = ManagementManager_TypeInfo;
      }
      v408 = v407->static_fields->isDuringStartup;
      v409 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v408 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v410 = LocalizationManager__Get((System_String_o *)StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v413 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v411, v412);
        ErrorDialog_ClickDelegate___ctor(v413, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( v409 )
        {
          CommonUI__OpenRetryBootDialog(v409, (System_String_o *)StringLiteral_1/*""*/, v410, v413, 1, 0LL);
          goto LABEL_338;
        }
        goto LABEL_438;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v424 = LocalizationManager__Get((System_String_o *)StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v427 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v425, v426);
      ErrorDialog_ClickDelegate___ctor(v427, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
      if ( !v409 )
        goto LABEL_438;
      CommonUI__OpenRetryDialog(v409, (System_String_o *)StringLiteral_1/*""*/, v424, v427, 1, 0LL);
LABEL_338:
      if ( !_4__this->fields.isErrorDialog )
      {
        v9->fields._url_5__11 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v2, v3, v4, v5, v6, v7);
        goto LABEL_340;
      }
      v506 = (System_Int32_array **)v9->fields._wait_5__10;
      v9->fields.__2__current = (Il2CppObject *)v506;
      sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v506, v2, v3, v4, v5, v6, v7);
      v80 = 9;
LABEL_411:
      v9->fields.__1__state = v80;
      return 1;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v71 = v9->fields._req_5__13;
      v9->fields.__1__state = -1;
      if ( !v71 )
        goto LABEL_36;
      if ( !_4__this )
        goto LABEL_438;
      v72 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(v71, 0LL);
      if ( !v72 )
        goto LABEL_438;
      v73 = (System_Int32_array **)AssetData__SetAssetBundleData(
                                     v72,
                                     (UnityEngine_AssetBundle_o *)this,
                                     v9->fields.resourceNames,
                                     0LL);
      v9->fields.__2__current = (Il2CppObject *)v73;
      sub_B0D840((BattleServantConfConponent_o *)&v9->fields.__2__current, v73, v74, v75, v76, v77, v78, v79);
      v80 = 13;
      goto LABEL_411;
    case 0xD:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v9->fields.__1__state = -1;
LABEL_36:
      this->klass = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213962 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader___c_TypeInfo, v1);
    byte_4213962 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AssetLoader___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssetLoader___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_4213963 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4213963 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return BYTE4(Instance[1].monitor) == 0;
}