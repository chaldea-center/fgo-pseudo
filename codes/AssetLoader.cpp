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
    sub_B5D69C(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  __int64 Instance; // x0
  const MethodInfo *v133; // x1
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x21
  System_Int32_array **v141; // x1
  _DWORD *v142; // x22
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x1
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x1
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x1
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x1
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x1
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Int32_array **v191; // x1
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Int32_array **v198; // x1
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Int32_array **v205; // x1
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Int32_array **v212; // x1
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_Int32_array **v219; // x1
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Int32_array **v226; // x1
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_Int32_array **v233; // x1
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  System_Int32_array **v240; // x1
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  System_Int32_array **v247; // x1
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Int32_array **v254; // x1
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Int32_array **v261; // x1
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  System_Int32_array **v268; // x1
  System_String_array **v269; // x2
  System_String_array **v270; // x3
  System_Boolean_array **v271; // x4
  System_Int32_array **v272; // x5
  System_Int32_array *v273; // x6
  System_Int32_array *v274; // x7
  System_Int32_array **v275; // x1
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  System_Int32_array **v282; // x1
  System_String_array **v283; // x2
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  System_Int32_array **v289; // x1
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_Int32_array **v296; // x1
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  System_Int32_array **v303; // x1
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  System_Int32_array **v310; // x1
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  System_Int32_array **v317; // x1
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  System_Int32_array **v324; // x1
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  System_Int32_array **v331; // x1
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  System_Int32_array **v338; // x1
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  System_Int32_array **v345; // x1
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  System_Int32_array **v352; // x1
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_Int32_array **v359; // x1
  System_String_array **v360; // x2
  System_String_array **v361; // x3
  System_Boolean_array **v362; // x4
  System_Int32_array **v363; // x5
  System_Int32_array *v364; // x6
  System_Int32_array *v365; // x7
  System_Int32_array **v366; // x1
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  System_Int32_array **v373; // x1
  System_String_array **v374; // x2
  System_String_array **v375; // x3
  System_Boolean_array **v376; // x4
  System_Int32_array **v377; // x5
  System_Int32_array *v378; // x6
  System_Int32_array *v379; // x7
  System_Int32_array **v380; // x1
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  System_Int32_array **v387; // x1
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  System_Int32_array **v394; // x1
  __int64 v395; // x8
  unsigned __int64 v396; // x23
  signed __int64 v397; // x24
  __int64 v398; // x0
  Il2CppObject *v399; // x0
  CrashReporter_o *v400; // x19
  __int64 v401; // x0

  if ( (byte_42EB797 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)errorCode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&string___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14263/*"The request timed out."*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_20309/*"java.net.SocketException"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12466/*"SSL CA certificate error"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1201/*"404: Not Found"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_14195/*"The network connection was lost."*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1196/*"400: Bad Request"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_14942/*"Unable to complete SSL connection"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_14977/*"Unable to read data"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17869/*"connect failed"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_7185/*"HTTP/1.1 500 Internal Server Error"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_20311/*"java.net.UnknownHostException"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_1209/*"500: Internal Server Error"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1211/*"502:"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11559/*"Request timeout"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_4315/*"Connection reset by peer"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_4679/*"DLErrorType"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_4678/*"DLErrorAsset"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_1223/*"504: Gateway Timeout"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_15131/*"Unknown Error"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_1213/*"503 Auto retry count"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_20292/*"java.io.EOFException"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_20306/*"java.net.ConnectException"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_1199/*"403: Forbidden"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_4314/*"Connection refused"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_7186/*"HTTP/1.1 504 Gateway Timeout"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_1198/*"401: Authorization Required"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_20293/*"java.io.IOException"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_9579/*"No address associated with hostname"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_20308/*"java.net.ProtocolException"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_2125/*"AssetBundle file download time over"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_1202/*"408: Request Time-out"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_14671/*"Too many redirects"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_13070/*"Software caused connection abort"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_2124/*"AssetBundle file check sum error"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_20307/*"java.net.NoRouteToHostException"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_5346/*"Destination host has an erroneous SSL certificate"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_4316/*"Connection timed out"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_3865/*"Cannot resolve destination host"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_20310/*"java.net.SocketTimeoutException"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_2128/*"AssetLoadError"*/, v129, v130, v131);
    byte_42EB797 = 1;
  }
  Instance = sub_B5D5DC(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_210;
  v140 = Instance;
  Instance = StringLiteral_9579/*"No address associated with hostname"*/;
  if ( StringLiteral_9579/*"No address associated with hostname"*/ )
  {
    Instance = sub_B5D684(StringLiteral_9579/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v141 = (System_Int32_array **)StringLiteral_9579/*"No address associated with hostname"*/;
  }
  else
  {
    v141 = 0LL;
  }
  v142 = (_DWORD *)(v140 + 24);
  if ( !*(_DWORD *)(v140 + 24) )
    goto LABEL_195;
  *(_QWORD *)(v140 + 32) = v141;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 32), v141, v134, v135, v136, v137, v138, v139);
  Instance = StringLiteral_2125/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2125/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B5D684(StringLiteral_2125/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v149 = (System_Int32_array **)StringLiteral_2125/*"AssetBundle file download time over"*/;
  }
  else
  {
    v149 = 0LL;
  }
  if ( *v142 <= 1u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 40) = v149;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 40), v149, v143, v144, v145, v146, v147, v148);
  Instance = StringLiteral_14195/*"The network connection was lost."*/;
  if ( StringLiteral_14195/*"The network connection was lost."*/ )
  {
    Instance = sub_B5D684(StringLiteral_14195/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v156 = (System_Int32_array **)StringLiteral_14195/*"The network connection was lost."*/;
  }
  else
  {
    v156 = 0LL;
  }
  if ( *v142 <= 2u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 48) = v156;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 48), v156, v150, v151, v152, v153, v154, v155);
  Instance = StringLiteral_4315/*"Connection reset by peer"*/;
  if ( StringLiteral_4315/*"Connection reset by peer"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4315/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v163 = (System_Int32_array **)StringLiteral_4315/*"Connection reset by peer"*/;
  }
  else
  {
    v163 = 0LL;
  }
  if ( *v142 <= 3u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 56) = v163;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 56), v163, v157, v158, v159, v160, v161, v162);
  Instance = StringLiteral_13070/*"Software caused connection abort"*/;
  if ( StringLiteral_13070/*"Software caused connection abort"*/ )
  {
    Instance = sub_B5D684(StringLiteral_13070/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v170 = (System_Int32_array **)StringLiteral_13070/*"Software caused connection abort"*/;
  }
  else
  {
    v170 = 0LL;
  }
  if ( *v142 <= 4u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 64) = v170;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 64), v170, v164, v165, v166, v167, v168, v169);
  Instance = StringLiteral_4316/*"Connection timed out"*/;
  if ( StringLiteral_4316/*"Connection timed out"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4316/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v177 = (System_Int32_array **)StringLiteral_4316/*"Connection timed out"*/;
  }
  else
  {
    v177 = 0LL;
  }
  if ( *v142 <= 5u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 72) = v177;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 72), v177, v171, v172, v173, v174, v175, v176);
  Instance = StringLiteral_4314/*"Connection refused"*/;
  if ( StringLiteral_4314/*"Connection refused"*/ )
  {
    Instance = sub_B5D684(StringLiteral_4314/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v184 = (System_Int32_array **)StringLiteral_4314/*"Connection refused"*/;
  }
  else
  {
    v184 = 0LL;
  }
  if ( *v142 <= 6u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 80) = v184;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 80), v184, v178, v179, v180, v181, v182, v183);
  Instance = StringLiteral_14263/*"The request timed out."*/;
  if ( StringLiteral_14263/*"The request timed out."*/ )
  {
    Instance = sub_B5D684(StringLiteral_14263/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v191 = (System_Int32_array **)StringLiteral_14263/*"The request timed out."*/;
  }
  else
  {
    v191 = 0LL;
  }
  if ( *v142 <= 7u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 88) = v191;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 88), v191, v185, v186, v187, v188, v189, v190);
  Instance = StringLiteral_3865/*"Cannot resolve destination host"*/;
  if ( StringLiteral_3865/*"Cannot resolve destination host"*/ )
  {
    Instance = sub_B5D684(StringLiteral_3865/*"Cannot resolve destination host"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v198 = (System_Int32_array **)StringLiteral_3865/*"Cannot resolve destination host"*/;
  }
  else
  {
    v198 = 0LL;
  }
  if ( *v142 <= 8u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 96) = v198;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 96), v198, v192, v193, v194, v195, v196, v197);
  Instance = StringLiteral_14942/*"Unable to complete SSL connection"*/;
  if ( StringLiteral_14942/*"Unable to complete SSL connection"*/ )
  {
    Instance = sub_B5D684(StringLiteral_14942/*"Unable to complete SSL connection"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v205 = (System_Int32_array **)StringLiteral_14942/*"Unable to complete SSL connection"*/;
  }
  else
  {
    v205 = 0LL;
  }
  if ( *v142 <= 9u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 104) = v205;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 104), v205, v199, v200, v201, v202, v203, v204);
  Instance = StringLiteral_15131/*"Unknown Error"*/;
  if ( StringLiteral_15131/*"Unknown Error"*/ )
  {
    Instance = sub_B5D684(StringLiteral_15131/*"Unknown Error"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v212 = (System_Int32_array **)StringLiteral_15131/*"Unknown Error"*/;
  }
  else
  {
    v212 = 0LL;
  }
  if ( *v142 <= 0xAu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 112) = v212;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 112), v212, v206, v207, v208, v209, v210, v211);
  Instance = StringLiteral_11559/*"Request timeout"*/;
  if ( StringLiteral_11559/*"Request timeout"*/ )
  {
    Instance = sub_B5D684(StringLiteral_11559/*"Request timeout"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v219 = (System_Int32_array **)StringLiteral_11559/*"Request timeout"*/;
  }
  else
  {
    v219 = 0LL;
  }
  if ( *v142 <= 0xBu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 120) = v219;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 120), v219, v213, v214, v215, v216, v217, v218);
  Instance = StringLiteral_2124/*"AssetBundle file check sum error"*/;
  if ( StringLiteral_2124/*"AssetBundle file check sum error"*/ )
  {
    Instance = sub_B5D684(StringLiteral_2124/*"AssetBundle file check sum error"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v226 = (System_Int32_array **)StringLiteral_2124/*"AssetBundle file check sum error"*/;
  }
  else
  {
    v226 = 0LL;
  }
  if ( *v142 <= 0xCu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 128) = v226;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 128), v226, v220, v221, v222, v223, v224, v225);
  Instance = StringLiteral_12466/*"SSL CA certificate error"*/;
  if ( StringLiteral_12466/*"SSL CA certificate error"*/ )
  {
    Instance = sub_B5D684(StringLiteral_12466/*"SSL CA certificate error"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v233 = (System_Int32_array **)StringLiteral_12466/*"SSL CA certificate error"*/;
  }
  else
  {
    v233 = 0LL;
  }
  if ( *v142 <= 0xDu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 136) = v233;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 136), v233, v227, v228, v229, v230, v231, v232);
  Instance = StringLiteral_7185/*"HTTP/1.1 500 Internal Server Error"*/;
  if ( StringLiteral_7185/*"HTTP/1.1 500 Internal Server Error"*/ )
  {
    Instance = sub_B5D684(StringLiteral_7185/*"HTTP/1.1 500 Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v240 = (System_Int32_array **)StringLiteral_7185/*"HTTP/1.1 500 Internal Server Error"*/;
  }
  else
  {
    v240 = 0LL;
  }
  if ( *v142 <= 0xEu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 144) = v240;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 144), v240, v234, v235, v236, v237, v238, v239);
  Instance = StringLiteral_7186/*"HTTP/1.1 504 Gateway Timeout"*/;
  if ( StringLiteral_7186/*"HTTP/1.1 504 Gateway Timeout"*/ )
  {
    Instance = sub_B5D684(StringLiteral_7186/*"HTTP/1.1 504 Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v247 = (System_Int32_array **)StringLiteral_7186/*"HTTP/1.1 504 Gateway Timeout"*/;
  }
  else
  {
    v247 = 0LL;
  }
  if ( *v142 <= 0xFu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 152) = v247;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 152), v247, v241, v242, v243, v244, v245, v246);
  Instance = StringLiteral_5346/*"Destination host has an erroneous SSL certificate"*/;
  if ( StringLiteral_5346/*"Destination host has an erroneous SSL certificate"*/ )
  {
    Instance = sub_B5D684(StringLiteral_5346/*"Destination host has an erroneous SSL certificate"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v254 = (System_Int32_array **)StringLiteral_5346/*"Destination host has an erroneous SSL certificate"*/;
  }
  else
  {
    v254 = 0LL;
  }
  if ( *v142 <= 0x10u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 160) = v254;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 160), v254, v248, v249, v250, v251, v252, v253);
  Instance = StringLiteral_14671/*"Too many redirects"*/;
  if ( StringLiteral_14671/*"Too many redirects"*/ )
  {
    Instance = sub_B5D684(StringLiteral_14671/*"Too many redirects"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v261 = (System_Int32_array **)StringLiteral_14671/*"Too many redirects"*/;
  }
  else
  {
    v261 = 0LL;
  }
  if ( *v142 <= 0x11u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 168) = v261;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 168), v261, v255, v256, v257, v258, v259, v260);
  Instance = StringLiteral_20292/*"java.io.EOFException"*/;
  if ( StringLiteral_20292/*"java.io.EOFException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20292/*"java.io.EOFException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v268 = (System_Int32_array **)StringLiteral_20292/*"java.io.EOFException"*/;
  }
  else
  {
    v268 = 0LL;
  }
  if ( *v142 <= 0x12u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 176) = v268;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 176), v268, v262, v263, v264, v265, v266, v267);
  Instance = StringLiteral_20309/*"java.net.SocketException"*/;
  if ( StringLiteral_20309/*"java.net.SocketException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20309/*"java.net.SocketException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v275 = (System_Int32_array **)StringLiteral_20309/*"java.net.SocketException"*/;
  }
  else
  {
    v275 = 0LL;
  }
  if ( *v142 <= 0x13u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 184) = v275;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 184), v275, v269, v270, v271, v272, v273, v274);
  Instance = StringLiteral_20310/*"java.net.SocketTimeoutException"*/;
  if ( StringLiteral_20310/*"java.net.SocketTimeoutException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20310/*"java.net.SocketTimeoutException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v282 = (System_Int32_array **)StringLiteral_20310/*"java.net.SocketTimeoutException"*/;
  }
  else
  {
    v282 = 0LL;
  }
  if ( *v142 <= 0x14u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 192) = v282;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 192), v282, v276, v277, v278, v279, v280, v281);
  Instance = StringLiteral_20307/*"java.net.NoRouteToHostException"*/;
  if ( StringLiteral_20307/*"java.net.NoRouteToHostException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20307/*"java.net.NoRouteToHostException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v289 = (System_Int32_array **)StringLiteral_20307/*"java.net.NoRouteToHostException"*/;
  }
  else
  {
    v289 = 0LL;
  }
  if ( *v142 <= 0x15u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 200) = v289;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 200), v289, v283, v284, v285, v286, v287, v288);
  Instance = StringLiteral_20293/*"java.io.IOException"*/;
  if ( StringLiteral_20293/*"java.io.IOException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20293/*"java.io.IOException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v296 = (System_Int32_array **)StringLiteral_20293/*"java.io.IOException"*/;
  }
  else
  {
    v296 = 0LL;
  }
  if ( *v142 <= 0x16u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 208) = v296;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 208), v296, v290, v291, v292, v293, v294, v295);
  Instance = StringLiteral_20306/*"java.net.ConnectException"*/;
  if ( StringLiteral_20306/*"java.net.ConnectException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20306/*"java.net.ConnectException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v303 = (System_Int32_array **)StringLiteral_20306/*"java.net.ConnectException"*/;
  }
  else
  {
    v303 = 0LL;
  }
  if ( *v142 <= 0x17u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 216) = v303;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 216), v303, v297, v298, v299, v300, v301, v302);
  Instance = StringLiteral_17869/*"connect failed"*/;
  if ( StringLiteral_17869/*"connect failed"*/ )
  {
    Instance = sub_B5D684(StringLiteral_17869/*"connect failed"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v310 = (System_Int32_array **)StringLiteral_17869/*"connect failed"*/;
  }
  else
  {
    v310 = 0LL;
  }
  if ( *v142 <= 0x18u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 224) = v310;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 224), v310, v304, v305, v306, v307, v308, v309);
  Instance = StringLiteral_20308/*"java.net.ProtocolException"*/;
  if ( StringLiteral_20308/*"java.net.ProtocolException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20308/*"java.net.ProtocolException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v317 = (System_Int32_array **)StringLiteral_20308/*"java.net.ProtocolException"*/;
  }
  else
  {
    v317 = 0LL;
  }
  if ( *v142 <= 0x19u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 232) = v317;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 232), v317, v311, v312, v313, v314, v315, v316);
  Instance = StringLiteral_20311/*"java.net.UnknownHostException"*/;
  if ( StringLiteral_20311/*"java.net.UnknownHostException"*/ )
  {
    Instance = sub_B5D684(StringLiteral_20311/*"java.net.UnknownHostException"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v324 = (System_Int32_array **)StringLiteral_20311/*"java.net.UnknownHostException"*/;
  }
  else
  {
    v324 = 0LL;
  }
  if ( *v142 <= 0x1Au )
    goto LABEL_195;
  *(_QWORD *)(v140 + 240) = v324;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 240), v324, v318, v319, v320, v321, v322, v323);
  Instance = StringLiteral_1196/*"400: Bad Request"*/;
  if ( StringLiteral_1196/*"400: Bad Request"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1196/*"400: Bad Request"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v331 = (System_Int32_array **)StringLiteral_1196/*"400: Bad Request"*/;
  }
  else
  {
    v331 = 0LL;
  }
  if ( *v142 <= 0x1Bu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 248) = v331;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 248), v331, v325, v326, v327, v328, v329, v330);
  Instance = StringLiteral_1198/*"401: Authorization Required"*/;
  if ( StringLiteral_1198/*"401: Authorization Required"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1198/*"401: Authorization Required"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v338 = (System_Int32_array **)StringLiteral_1198/*"401: Authorization Required"*/;
  }
  else
  {
    v338 = 0LL;
  }
  if ( *v142 <= 0x1Cu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 256) = v338;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 256), v338, v332, v333, v334, v335, v336, v337);
  Instance = StringLiteral_1199/*"403: Forbidden"*/;
  if ( StringLiteral_1199/*"403: Forbidden"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1199/*"403: Forbidden"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v345 = (System_Int32_array **)StringLiteral_1199/*"403: Forbidden"*/;
  }
  else
  {
    v345 = 0LL;
  }
  if ( *v142 <= 0x1Du )
    goto LABEL_195;
  *(_QWORD *)(v140 + 264) = v345;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 264), v345, v339, v340, v341, v342, v343, v344);
  Instance = StringLiteral_1201/*"404: Not Found"*/;
  if ( StringLiteral_1201/*"404: Not Found"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1201/*"404: Not Found"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v352 = (System_Int32_array **)StringLiteral_1201/*"404: Not Found"*/;
  }
  else
  {
    v352 = 0LL;
  }
  if ( *v142 <= 0x1Eu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 272) = v352;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 272), v352, v346, v347, v348, v349, v350, v351);
  Instance = StringLiteral_1202/*"408: Request Time-out"*/;
  if ( StringLiteral_1202/*"408: Request Time-out"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1202/*"408: Request Time-out"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v359 = (System_Int32_array **)StringLiteral_1202/*"408: Request Time-out"*/;
  }
  else
  {
    v359 = 0LL;
  }
  if ( *v142 <= 0x1Fu )
    goto LABEL_195;
  *(_QWORD *)(v140 + 280) = v359;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 280), v359, v353, v354, v355, v356, v357, v358);
  Instance = StringLiteral_1209/*"500: Internal Server Error"*/;
  if ( StringLiteral_1209/*"500: Internal Server Error"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1209/*"500: Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v366 = (System_Int32_array **)StringLiteral_1209/*"500: Internal Server Error"*/;
  }
  else
  {
    v366 = 0LL;
  }
  if ( *v142 <= 0x20u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 288) = v366;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 288), v366, v360, v361, v362, v363, v364, v365);
  Instance = StringLiteral_1211/*"502:"*/;
  if ( StringLiteral_1211/*"502:"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1211/*"502:"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v373 = (System_Int32_array **)StringLiteral_1211/*"502:"*/;
  }
  else
  {
    v373 = 0LL;
  }
  if ( *v142 <= 0x21u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 296) = v373;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 296), v373, v367, v368, v369, v370, v371, v372);
  Instance = StringLiteral_1213/*"503 Auto retry count"*/;
  if ( StringLiteral_1213/*"503 Auto retry count"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1213/*"503 Auto retry count"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v380 = (System_Int32_array **)StringLiteral_1213/*"503 Auto retry count"*/;
  }
  else
  {
    v380 = 0LL;
  }
  if ( *v142 <= 0x22u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 304) = v380;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 304), v380, v374, v375, v376, v377, v378, v379);
  Instance = StringLiteral_1223/*"504: Gateway Timeout"*/;
  if ( StringLiteral_1223/*"504: Gateway Timeout"*/ )
  {
    Instance = sub_B5D684(StringLiteral_1223/*"504: Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v387 = (System_Int32_array **)StringLiteral_1223/*"504: Gateway Timeout"*/;
  }
  else
  {
    v387 = 0LL;
  }
  if ( *v142 <= 0x23u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 312) = v387;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 312), v387, v381, v382, v383, v384, v385, v386);
  Instance = StringLiteral_14977/*"Unable to read data"*/;
  if ( StringLiteral_14977/*"Unable to read data"*/ )
  {
    Instance = sub_B5D684(StringLiteral_14977/*"Unable to read data"*/, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
    if ( Instance )
    {
      v394 = (System_Int32_array **)StringLiteral_14977/*"Unable to read data"*/;
      goto LABEL_188;
    }
LABEL_209:
    v401 = sub_B5D6BC(Instance);
    sub_B5D668(v401, 0LL);
  }
  v394 = 0LL;
LABEL_188:
  if ( *v142 <= 0x24u )
    goto LABEL_195;
  *(_QWORD *)(v140 + 320) = v394;
  sub_B5D560((BattleServantConfConponent_o *)(v140 + 320), v394, v388, v389, v390, v391, v392, v393);
  v395 = *(_QWORD *)(v140 + 24);
  if ( (int)v395 < 1 )
  {
LABEL_196:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v399 = (Il2CppObject *)errorCode;
    goto LABEL_208;
  }
  v396 = 0LL;
  v397 = (int)v395;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_210;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v140 + 32 + 8 * v396), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v396 >= v397 )
      goto LABEL_196;
    if ( v396 >= (unsigned int)*v142 )
      goto LABEL_195;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v400 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v133), !v400) )
  {
LABEL_210:
    sub_B5D69C(Instance, v133);
  }
  CrashReporter__AddCustomKey(v400, (System_String_o *)StringLiteral_4678/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v396 >= *v142 )
  {
LABEL_195:
    v398 = sub_B5D6C8(Instance);
    sub_B5D668(v398, 0LL);
  }
  if ( !Instance )
    goto LABEL_210;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4679/*"DLErrorType"*/,
    *(System_String_o **)(v140 + 32 + 8 * v396),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v399 = (Il2CppObject *)StringLiteral_2128/*"AssetLoadError"*/;
LABEL_208:
  UnityEngine_Debug__LogError(v399, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetLoader_LoadEndHandler_o *endCallback; // x0
  AssetLoader_LoadEndDataHandler_o *endCallback2; // x0

  if ( (byte_42EB794 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB794 = 1;
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
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, name);
  return System_String__Equals_44565128(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_30646664(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_30638412(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EB793 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader__LoadDataCR_d__29_TypeInfo, (_DWORD)resourceNames, (_DWORD)method, v3);
    byte_42EB793 = 1;
  }
  v6 = sub_B5D694(AssetLoader__LoadDataCR_d__29_TypeInfo);
  AssetLoader__LoadDataCR_d__29___ctor((AssetLoader__LoadDataCR_d__29_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = resourceNames;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)resourceNames,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Byte_array *readData; // x20
  struct System_Byte_array *v6; // x0
  struct System_Byte_array **p_decData; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB795 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB795 = 1;
  }
  readData = this->fields.readData;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v6 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v6;
  p_decData = &this->fields._decData;
  sub_B5D560((BattleServantConfConponent_o *)p_decData, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  ManagementManager_c *v22; // x0
  ManagementManager_o *Instance; // x0
  __int64 v24; // x1

  if ( (byte_42EB796 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v9, v10, v11);
    byte_42EB796 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loader, 0LL, v13, v14, v15, v16, v17, v18);
  }
  this->fields.readData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42E5AE3 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, v19, v20, v21);
    byte_42E5AE3 = 1;
  }
  v22 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v22 = ManagementManager_TypeInfo;
  }
  if ( v22->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_41546252(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v24);
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
  sub_B5D560(
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
    sub_B5D69C(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_B5D69C(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall AssetLoader__add_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v7; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetLoader_o *v12; // x0
  AssetLoader_LoadEndHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB78F & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB78F = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v7 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v9->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_endCallback, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetLoader__remove_endCallback(v12, v13, v14);
}


void __fastcall AssetLoader__add_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v7; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetLoader_o *v12; // x0
  AssetLoader_LoadEndDataHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB791 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB791 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v7 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v9->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_endCallback2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetLoader__remove_endCallback2(v12, v13, v14);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.size;
}


void __fastcall AssetLoader__remove_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v7; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetLoader_o *v12; // x0
  AssetLoader_LoadEndDataHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB790 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB790 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v7 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v9->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_endCallback, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetLoader__add_endCallback2(v12, v13, v14);
}


void __fastcall AssetLoader__remove_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v7; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetLoader_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB792 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB792 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v7 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v9->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_endCallback2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetLoader__get_IsRequestDownload(v12, v13);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  AssetData_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(AssetData_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, AssetData_o *, _QWORD); // x0
  AssetLoader_LoadEndDataHandler_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(AssetData_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  AssetData_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndDataHandler_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(AssetData_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, data, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = data->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(data, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(AssetData_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(data, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(data, class_0, v9, v11);
                }
                (*(void (__fastcall **)(AssetData_o *, _QWORD))v15)(data, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetData_o *, _QWORD))&data->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  data,
                  *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(data, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, data, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))v23)(v31, data, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))(*v31
                                                                       + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                       + 312))(
                v31,
                data,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetData_o *, __int64))v32)(v31, data, v30);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  AssetLoader_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(AssetLoader_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, AssetLoader_o *, _QWORD); // x0
  AssetLoader_LoadEndHandler_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(AssetLoader_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  AssetLoader_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndHandler_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(AssetLoader_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, loader, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = loader->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(loader, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(AssetLoader_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(loader, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(loader, class_0, v9, v11);
                }
                (*(void (__fastcall **)(AssetLoader_o *, _QWORD))v15)(loader, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetLoader_o *, _QWORD))&loader->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  loader,
                  *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(loader, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, loader, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))v23)(v31, loader, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))(*v31
                                                                         + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                         + 312))(
                v31,
                loader,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetLoader_o *, __int64))v32)(v31, loader, v30);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int v163; // w1
  int v164; // w2
  __int64 v165; // x3
  int v166; // w1
  int v167; // w2
  __int64 v168; // x3
  struct AssetLoader_o *_4__this; // x20
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v172; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 v174; // x10
  UnityEngine_Networking_DownloadHandler_o *v175; // x8
  uint32_t klass; // w8
  UnityEngine_AssetBundleCreateRequest_o *v177; // x8
  AssetData_o *v178; // x20
  System_Int32_array **v179; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  int v186; // w8
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  AssetLoader__LoadDataCR_d__29_o **v188; // x21
  System_String_o **p_url_5__11; // x21
  UnityEngine_Networking_UnityWebRequest_o *v190; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **data; // x0
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Byte_array *readData; // x22
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  BattleServantConfConponent_o *p_errorCode_5__6; // x22
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v231; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v233; // x23
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  int64_t v248; // x23
  ManagerConfig_c *v249; // x0
  System_Int32_array **v250; // x1
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  BattleServantConfConponent_o *p_errorLocalizeCode_5__7; // x0
  System_Int32_array **v258; // x1
  System_Int32_array **Url; // x0
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v267; // x8
  System_String_o *v268; // x22
  bool v269; // w23
  System_String_o *Key; // x0
  System_Int32_array **v271; // x0
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_Int32_array **v278; // x0
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  float progress; // s0
  float loadProgress_5__9; // s9
  float v287; // s8
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  float v294; // s0
  bool v295; // zf
  float v296; // s8
  UnityEngine_Networking_DownloadHandler_o *v297; // x0
  __int64 v298; // x10
  UnityEngine_Networking_DownloadHandler_o *v299; // x23
  System_String_o *v300; // x0
  int v301; // w8
  System_Int32_array **v302; // x0
  System_String_array **v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  System_String_array **v309; // x2
  System_String_array **v310; // x3
  System_Boolean_array **v311; // x4
  System_Int32_array **v312; // x5
  System_Int32_array *v313; // x6
  System_Int32_array *v314; // x7
  UnityEngine_Networking_DownloadHandler_c *v315; // x0
  __int64 (**image)(void); // x8
  __int64 v317; // x10
  UnityEngine_Networking_DownloadHandler_c *v318; // x8
  System_String_o *v319; // x22
  System_String_o *v320; // x0
  System_Int32_array **v321; // x1
  System_String_array **v322; // x2
  System_String_array **v323; // x3
  System_Boolean_array **v324; // x4
  System_Int32_array **v325; // x5
  System_Int32_array *v326; // x6
  System_Int32_array *v327; // x7
  System_String_o *v328; // x22
  System_String_o *v329; // x0
  System_Int32_array **v330; // x0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v338; // x23
  System_String_o *v339; // x23
  AssetLoader__LoadDataCR_d__29_o *v340; // x23
  System_String_o *v341; // x24
  int v342; // w8
  System_String_o *v343; // x0
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  AssetLoader__LoadDataCR_d__29_o *v350; // x22
  System_Int32_array **v351; // x1
  System_String_array **v352; // x2
  System_String_array **v353; // x3
  System_Boolean_array **v354; // x4
  System_Int32_array **v355; // x5
  System_Int32_array *v356; // x6
  System_Int32_array *v357; // x7
  System_Int32_array **v358; // x23
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  System_Int32_array **v365; // x1
  struct AssetData_o *v366; // x8
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  System_Int32_array **v373; // x23
  System_String_array **v374; // x2
  System_String_array **v375; // x3
  System_Boolean_array **v376; // x4
  System_Int32_array **v377; // x5
  System_Int32_array *v378; // x6
  System_Int32_array *v379; // x7
  System_Int32_array **v380; // x1
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  System_Int32_array **v387; // x23
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  System_Int32_array **v394; // x1
  System_Int32_array **v395; // x0
  System_String_array **v396; // x2
  System_String_array **v397; // x3
  System_Boolean_array **v398; // x4
  System_Int32_array **v399; // x5
  System_Int32_array *v400; // x6
  System_Int32_array *v401; // x7
  ManagerConfig_c *v402; // x0
  struct AssetData_o *v403; // x8
  CommonUI_o *v404; // x21
  System_String_o *v405; // x22
  ErrorDialog_ClickDelegate_o *v406; // x23
  ManagementManager_c *v407; // x0
  _BOOL4 isDuringStartup; // w19
  WebViewManager_o *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v411; // x22
  System_String_o *v412; // x21
  System_String_o *v413; // x23
  System_String_o *v414; // x23
  ErrorDialog_ClickDelegate_o *v415; // x24
  System_String_o *v416; // x23
  System_String_o *v417; // x23
  ErrorDialog_ClickDelegate_o *v418; // x24
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v420; // x2
  System_String_array **v421; // x3
  System_Boolean_array **v422; // x4
  System_Int32_array **v423; // x5
  System_Int32_array *v424; // x6
  System_Int32_array *v425; // x7
  System_String_array **v426; // x2
  System_String_array **v427; // x3
  System_Boolean_array **v428; // x4
  System_Int32_array **v429; // x5
  System_Int32_array *v430; // x6
  System_Int32_array *v431; // x7
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v433; // x2
  System_String_array **v434; // x3
  System_Boolean_array **v435; // x4
  System_Int32_array **v436; // x5
  System_Int32_array *v437; // x6
  System_Int32_array *v438; // x7
  System_String_o *v439; // x21
  System_String_o *UrlString; // x0
  System_String_array **v441; // x2
  System_String_array **v442; // x3
  System_Boolean_array **v443; // x4
  System_Int32_array **v444; // x5
  System_Int32_array *v445; // x6
  System_Int32_array *v446; // x7
  AssetLoader__LoadDataCR_d__29_o **v447; // x21
  float v448; // s8
  ManagerConfig_c *v449; // x0
  float v450; // s0
  System_Int32_array **v451; // x0
  System_String_array **v452; // x2
  System_String_array **v453; // x3
  System_Boolean_array **v454; // x4
  System_Int32_array **v455; // x5
  System_Int32_array *v456; // x6
  System_Int32_array *v457; // x7
  System_String_array **v458; // x2
  System_String_array **v459; // x3
  System_Boolean_array **v460; // x4
  System_Int32_array **v461; // x5
  System_Int32_array *v462; // x6
  System_Int32_array *v463; // x7
  float v464; // s0
  float v465; // s9
  float v466; // s8
  float v467; // s0
  float v468; // s8
  System_String_o **v469; // x21
  UnityEngine_Networking_UnityWebRequest_o **v470; // x22
  System_String_o *v471; // x0
  System_String_o *text; // x23
  System_String_o *v473; // x23
  System_String_array **v474; // x2
  System_String_array **v475; // x3
  System_Boolean_array **v476; // x4
  System_Int32_array **v477; // x5
  System_Int32_array *v478; // x6
  System_Int32_array *v479; // x7
  System_String_o *v480; // x23
  int v481; // w8
  int32_t v482; // w0
  int32_t v483; // w25
  System_String_o *v484; // x24
  System_String_o *v485; // x23
  System_Byte_array *v486; // x25
  uint32_t v487; // w25
  int v488; // w8
  Il2CppObject *v489; // x25
  AssetLoader__LoadDataCR_d__29_o *v490; // x21
  unsigned int v491; // w26
  System_String_o *v492; // x22
  Il2CppObject *v493; // x8
  AssetLoader__LoadDataCR_d__29_o *v494; // x22
  char v495; // w8
  System_String_o *v496; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v498; // x22
  System_String_o *v499; // x0
  int v500; // w23
  __int64 v501; // x0
  struct AssetData_o *v502; // x8
  ManagementManager_c *v503; // x0
  _BOOL4 v504; // w19
  CommonUI_o *v505; // x21
  System_String_o *v506; // x22
  ErrorDialog_ClickDelegate_o *v507; // x23
  ManagementManager_c *v508; // x0
  _BOOL4 v509; // w21
  CommonUI_o *v510; // x19
  __int64 *v511; // x8
  System_String_o *v512; // x21
  ErrorDialog_ClickDelegate_o *v513; // x22
  bool result; // w0
  __int64 *v515; // x8
  System_String_o *v516; // x22
  ErrorDialog_ClickDelegate_o *v517; // x23
  System_String_array **v518; // x2
  System_String_array **v519; // x3
  System_Boolean_array **v520; // x4
  System_Int32_array **v521; // x5
  System_Int32_array *v522; // x6
  System_Int32_array *v523; // x7
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  Il2CppObject *_2__current; // x21
  AssetData_o *v531; // x22
  AssetLoader__LoadDataCR_d__29_o **v532; // x21
  __int64 v533; // x10
  __int64 v534; // x10
  System_Byte_array *v535; // x0
  System_Int32_array **v536; // x0
  System_String_array **v537; // x2
  System_String_array **v538; // x3
  System_Boolean_array **v539; // x4
  System_Int32_array **v540; // x5
  System_Int32_array *v541; // x6
  System_Int32_array *v542; // x7
  System_String_array **v543; // x2
  System_String_array **v544; // x3
  System_Boolean_array **v545; // x4
  System_Int32_array **v546; // x5
  System_Int32_array *v547; // x6
  System_Int32_array *v548; // x7
  System_Int32_array **req_5__13; // x1
  System_String_array **v550; // x2
  System_String_array **v551; // x3
  System_Boolean_array **v552; // x4
  System_Int32_array **v553; // x5
  System_Int32_array *v554; // x6
  System_Int32_array *v555; // x7
  System_Int32_array **LoadRequest; // x0
  BattleServantConfConponent_o *v557; // x20
  System_String_array **v558; // x2
  System_String_array **v559; // x3
  System_Boolean_array **v560; // x4
  System_Int32_array **v561; // x5
  System_Int32_array *v562; // x6
  System_Int32_array *v563; // x7
  System_Int32_array **v564; // x0
  BattleServantConfConponent_o *p__2__current; // x26
  System_String_array **v566; // x2
  System_String_array **v567; // x3
  System_Boolean_array **v568; // x4
  System_Int32_array **v569; // x5
  System_Int32_array *v570; // x6
  System_Int32_array *v571; // x7
  int v572; // w8
  int autoRetryCount_5__3; // w19
  ManagerConfig_c *v574; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v576; // x20
  System_String_array **v577; // x2
  System_String_array **v578; // x3
  System_Boolean_array **v579; // x4
  System_Int32_array **v580; // x5
  System_Int32_array *v581; // x6
  System_Int32_array *v582; // x7
  System_Int32_array **v583; // x1
  System_String_array **v584; // x2
  System_String_array **v585; // x3
  System_Boolean_array **v586; // x4
  System_Int32_array **v587; // x5
  System_Int32_array *v588; // x6
  System_Int32_array *v589; // x7
  System_String_array **v590; // x2
  System_String_array **v591; // x3
  System_Boolean_array **v592; // x4
  System_Int32_array **v593; // x5
  System_Int32_array *v594; // x6
  System_Int32_array *v595; // x7
  System_Int32_array **v596; // x1
  System_Int32_array **v597; // x1
  System_Int32_array **v598; // x1
  System_String_array **v599; // x2
  System_String_array **v600; // x3
  System_Boolean_array **v601; // x4
  System_Int32_array **v602; // x5
  System_Int32_array *v603; // x6
  System_Int32_array *v604; // x7
  ManagerConfig_c *v605; // x0
  struct AssetData_o *v606; // x8
  CommonUI_o *v607; // x22
  System_String_o *v608; // x21
  ErrorDialog_ClickDelegate_o *v609; // x23
  System_Int32_array **v610; // x1
  ManagementManager_c *v611; // x0
  _BOOL4 v612; // w19
  CommonUI_o *v613; // x21
  System_String_o *v614; // x22
  ErrorDialog_ClickDelegate_o *v615; // x23
  System_String_o *v616; // x22
  ErrorDialog_ClickDelegate_o *v617; // x23
  System_Int32_array **v618; // x1
  UnityEngine_WaitForSeconds_o *v619; // x20
  System_String_array **v620; // x2
  System_String_array **v621; // x3
  System_Boolean_array **v622; // x4
  System_Int32_array **v623; // x5
  System_Int32_array *v624; // x6
  System_Int32_array *v625; // x7
  AssetLoader___c_c *v626; // x0
  struct AssetLoader___c_StaticFields *v627; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v629; // x21
  struct AssetLoader___c_StaticFields *v630; // x0
  System_String_array **v631; // x2
  System_String_array **v632; // x3
  System_Boolean_array **v633; // x4
  System_Int32_array **v634; // x5
  System_Int32_array *v635; // x6
  System_Int32_array *v636; // x7
  UnityEngine_WaitUntil_o *v637; // x21
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  UnityEngine_Networking_DownloadHandler_o *v644; // x0
  ManagerConfig_c *v645; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  System_Int32_array **wait_5__10; // x1
  ManagerConfig_c *v648; // x0
  struct ManagerConfig_StaticFields *v649; // x8
  System_Int32_array **v650; // x1
  __int64 v651; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  AssetLoader__LoadDataCR_d__29_o *v654; // [xsp+28h] [xbp-78h]
  __int64 v655; // [xsp+30h] [xbp-70h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-68h] BYREF

  v9 = this;
  if ( (byte_42E751A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetLoader_EndRebootDialog__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_AssetLoader_EndRetryDialog__, v10, v11, v12);
    sub_B5D5C4(&Method_AssetLoader_EndWarningDialog__, v13, v14, v15);
    sub_B5D5C4(&AssetManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&char___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CommonServicePluginScript_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Crc32_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v37, v38, v39);
    sub_B5D5C4(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&DownloadHandlerFileWithCrcCheck_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v46, v47, v48);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&System_IO_IOException_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&ManagementManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&NetworkManager_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v67, v68, v69);
    sub_B5D5C4(&string___TypeInfo, v70, v71, v72);
    sub_B5D5C4(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v73, v74, v75);
    sub_B5D5C4(&AssetLoader___c_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_9371/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_7180/*"HTTP"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_5396/*"Disk full"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_2142/*"AssetStorageList download time over"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_2129/*"AssetName : "*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_662/*")\n\n503 Auto retry count "*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_665/*")\nfile crc ("*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_1212/*"503"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_15935/*"[FFFF80]Download error for debug"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_2139/*"AssetStorageList download data error"*/, v127, v128, v129);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v130, v131, v132);
    sub_B5D5C4(&StringLiteral_12515/*"STATUS"*/, v133, v134, v135);
    sub_B5D5C4(&StringLiteral_661/*")\n\n"*/, v136, v137, v138);
    sub_B5D5C4(&StringLiteral_9370/*"NETWORK_ERROR_ASSET_UPDATE"*/, v139, v140, v141);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v142, v143, v144);
    sub_B5D5C4(&StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_18625/*"error "*/, v151, v152, v153);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v154, v155, v156);
    sub_B5D5C4(&StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v157, v158, v159);
    sub_B5D5C4(&StringLiteral_2140/*"AssetStorageList download error"*/, v160, v161, v162);
    sub_B5D5C4(&StringLiteral_664/*")\n\nAssetBundle file download time over"*/, v163, v164, v165);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v166, v167, v168);
    byte_42E751A = 1;
  }
  v655 = 0LL;
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
      v188 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
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
      sub_B5D560((BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12, 0LL, v2, v3, v4, v5, v6, v7);
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
      v172 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        v174 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1);
        if ( *(&downloadHandler->klass->_2.bitflags2 + 1) >= (unsigned int)v174 )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[v174 - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v175 = downloadHandler;
          else
            v175 = 0LL;
          if ( (v172 & 1) != 0 )
            goto LABEL_13;
LABEL_44:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v197, v198, v199, v200, v201, v202);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_438;
          AssetData__ResetVersion((AssetData_o *)this, 0LL);
          goto LABEL_57;
        }
      }
      v175 = 0LL;
      if ( (v172 & 1) == 0 )
        goto LABEL_44;
LABEL_13:
      if ( v175 )
      {
        klass = (uint32_t)v175[1].klass;
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
        sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.readData, data, v204, v205, v206, v207, v208, v209);
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
      sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v211, v212, v213, v214, v215, v216);
      _4__this->fields.readData = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v217, v218, v219, v220, v221, v222);
      while ( 1 )
      {
LABEL_57:
        _4__this->fields.readData = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        if ( !_4__this->fields.isDownload )
          goto LABEL_341;
        *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
        v9->fields._errorCode_5__6 = 0LL;
        p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v224,
          v225,
          v226,
          v227,
          v228,
          v229);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        v231 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v231 = ManagerConfig_TypeInfo;
        }
        TIMEOUT = v231->static_fields->TIMEOUT;
        v9->fields._loadProgress_5__9 = 0.0;
        v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
        v233 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v233, 0LL);
        v9->fields._wait_5__10 = v233;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields._wait_5__10,
          (System_Int32_array **)v233,
          v234,
          v235,
          v236,
          v237,
          v238,
          v239);
        Path = AssetStorageCache__GetPath(0LL);
        if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        }
        FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
        if ( FreeSize >= 1 )
        {
          v248 = FreeSize;
          v249 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v249 = ManagerConfig_TypeInfo;
          }
          if ( v248 < v249->static_fields->LIMIT_FREE_SIZE )
          {
            _4__this->fields.isErrorDialog = 1;
            v250 = (System_Int32_array **)StringLiteral_5396/*"Disk full"*/;
            p_errorCode_5__6->klass = (BattleServantConfConponent_c *)StringLiteral_5396/*"Disk full"*/;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
              v250,
              v242,
              v243,
              v244,
              v245,
              v246,
              v247);
            p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7;
            v258 = (System_Int32_array **)StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/;
            v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/;
            goto LABEL_165;
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        Url = (System_Int32_array **)AssetData__get_Url((AssetData_o *)this, 0LL);
        v9->fields._url_5__11 = (struct System_String_o *)Url;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._url_5__11, Url, v260, v261, v262, v263, v264, v265);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        url_5__11 = v9->fields._url_5__11;
        this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0LL);
        v267 = _4__this->fields.data;
        v268 = (System_String_o *)this;
        if ( v9->fields._isEncrypted_5__2 )
        {
          if ( !v267 )
            goto LABEL_438;
          v269 = v267->fields.entryCount > 0;
        }
        else
        {
          if ( !v267 )
            goto LABEL_438;
          v269 = 0;
        }
        Key = AssetData__get_Key(_4__this->fields.data, 0LL);
        v271 = (System_Int32_array **)UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, v268, v269, Key, 0LL);
        _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v271;
        sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, v271, v272, v273, v274, v275, v276, v277);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v278 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                        0LL);
        v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v278;
        p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
          v278,
          v279,
          v280,
          v281,
          v282,
          v283,
          v284);
LABEL_79:
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
LABEL_438:
          sub_B5D69C(this, method);
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
          v287 = progress;
          v294 = UnityEngine_Time__get_unscaledTime(0LL);
          v295 = v287 == loadProgress_5__9;
          v296 = v294;
          if ( !v295 )
          {
            v645 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v645 = ManagerConfig_TypeInfo;
            }
            static_fields = v645->static_fields;
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
            v9->fields._requestTime_5__8 = v296 + static_fields->TIMEOUT;
            if ( !this )
              goto LABEL_438;
            v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0LL);
LABEL_431:
            wait_5__10 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)wait_5__10;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              wait_5__10,
              v288,
              v289,
              v290,
              v291,
              v292,
              v293);
            result = 1;
            v9->fields.__1__state = 1;
            return result;
          }
          if ( v294 < v9->fields._requestTime_5__8 )
            goto LABEL_431;
        }
        if ( !_4__this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v297 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0LL);
        if ( v297
          && (v298 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1),
              *(&v297->klass->_2.bitflags2 + 1) >= (unsigned int)v298) )
        {
          v299 = (DownloadHandlerFileWithCrcCheck_c *)v297->klass->_2.typeHierarchy[v298 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
               ? v297
               : 0LL;
        }
        else
        {
          v299 = 0LL;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v302 = (System_Int32_array **)System_String__Concat_44580072(
                                          (System_String_o *)StringLiteral_592/*"("*/,
                                          v9->fields._url_5__11,
                                          (System_String_o *)StringLiteral_664/*")\n\nAssetBundle file download time over"*/,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v302;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v302,
            v303,
            v304,
            v305,
            v306,
            v307,
            v308);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          if ( v299 )
            DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v299, 0LL);
          goto LABEL_164;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v300 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( System_String__IsNullOrEmpty(v300, 0LL) )
        {
          if ( !v299 )
          {
            v301 = 0;
LABEL_127:
            HIDWORD(v655) = v301;
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_438;
            if ( v301 == this->fields._autoRetryCount_5__3 )
            {
              AssetData__UpdateVersion((AssetData_o *)this, 0LL);
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              _4__this->fields.isDownload = 0;
            }
            else
            {
              this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(string___TypeInfo, 7LL);
              if ( !this )
                goto LABEL_438;
              v350 = this;
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_592/*"("*/;
              if ( StringLiteral_592/*"("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(StringLiteral_592/*"("*/, v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v351 = (System_Int32_array **)StringLiteral_592/*"("*/;
              }
              else
              {
                v351 = 0LL;
              }
              if ( !LODWORD(v350->fields.__2__current) )
                goto LABEL_295;
              v350->fields.__4__this = (struct AssetLoader_o *)v351;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields.__4__this,
                v351,
                v344,
                v345,
                v346,
                v347,
                v348,
                v349);
              v358 = (System_Int32_array **)v9->fields._url_5__11;
              if ( v358 )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(
                                                            v9->fields._url_5__11,
                                                            v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v350->fields.__2__current) <= 1 )
                goto LABEL_295;
              v350->fields.resourceNames = (struct System_String_array *)v358;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields.resourceNames,
                v358,
                v352,
                v353,
                v354,
                v355,
                v356,
                v357);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              if ( StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v365 = (System_Int32_array **)StringLiteral_663/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              }
              else
              {
                v365 = 0LL;
              }
              if ( LODWORD(v350->fields.__2__current) <= 2 )
                goto LABEL_295;
              *(_QWORD *)&v350->fields._isEncrypted_5__2 = v365;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields._isEncrypted_5__2,
                v365,
                v359,
                v360,
                v361,
                v362,
                v363,
                v364);
              v366 = _4__this->fields.data;
              if ( !v366 )
                goto LABEL_438;
              LODWORD(v655) = v366->fields.crc;
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v655, 0LL);
              v373 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(this, v350->klass->_1.element_class);
                if ( !this )
                {
LABEL_439:
                  v651 = sub_B5D6BC();
                  sub_B5D668(v651, 0LL);
                }
              }
              if ( LODWORD(v350->fields.__2__current) <= 3 )
                goto LABEL_295;
              *(_QWORD *)&v350->fields._isAutoRetry_5__4 = v373;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields._isAutoRetry_5__4,
                v373,
                v367,
                v368,
                v369,
                v370,
                v371,
                v372);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_665/*")\nfile crc ("*/;
              if ( StringLiteral_665/*")\nfile crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(StringLiteral_665/*")\nfile crc ("*/, v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v380 = (System_Int32_array **)StringLiteral_665/*")\nfile crc ("*/;
              }
              else
              {
                v380 = 0LL;
              }
              if ( LODWORD(v350->fields.__2__current) <= 4 )
                goto LABEL_295;
              v350->fields._errorCode_5__6 = (struct System_String_o *)v380;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields._errorCode_5__6,
                v380,
                v374,
                v375,
                v376,
                v377,
                v378,
                v379);
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v655 + 4, 0LL);
              v387 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(this, v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v350->fields.__2__current) <= 5 )
                goto LABEL_295;
              v350->fields._errorLocalizeCode_5__7 = (struct System_String_o *)v387;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields._errorLocalizeCode_5__7,
                v387,
                v381,
                v382,
                v383,
                v384,
                v385,
                v386);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_659/*")"*/;
              if ( StringLiteral_659/*")"*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D684(StringLiteral_659/*")"*/, v350->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v394 = (System_Int32_array **)StringLiteral_659/*")"*/;
              }
              else
              {
                v394 = 0LL;
              }
              if ( LODWORD(v350->fields.__2__current) <= 6 )
                goto LABEL_295;
              *(_QWORD *)&v350->fields._requestTime_5__8 = v394;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v350->fields._requestTime_5__8,
                v394,
                v388,
                v389,
                v390,
                v391,
                v392,
                v393);
              v395 = (System_Int32_array **)System_String__Concat_44657912((System_String_array *)v350, 0LL);
              v9->fields._errorCode_5__6 = (struct System_String_o *)v395;
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
                v395,
                v396,
                v397,
                v398,
                v399,
                v400,
                v401);
              v9->fields._isCrcError_5__5 = 1;
            }
            goto LABEL_164;
          }
          if ( !v299[4].klass )
          {
            v301 = (int)v299[1].klass;
            goto LABEL_127;
          }
        }
        else if ( !v299 )
        {
          goto LABEL_110;
        }
        DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v299, 0LL);
        v315 = v299[4].klass;
        if ( !v315 )
        {
LABEL_110:
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          v328 = v9->fields._url_5__11;
          v329 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          v330 = (System_Int32_array **)System_String__Concat_44581200(
                                          (System_String_o *)StringLiteral_592/*"("*/,
                                          v328,
                                          (System_String_o *)StringLiteral_661/*")\n\n"*/,
                                          v329,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v330;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v330,
            v331,
            v332,
            v333,
            v334,
            v335,
            v336);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                              0LL);
          if ( !ResponseHeaders )
            goto LABEL_164;
          v338 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
                 (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                  v338,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_12515/*"STATUS"*/,
                  &value,
                  (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
          {
            goto LABEL_164;
          }
          v339 = (System_String_o *)value;
          this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_438;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_295;
          LOWORD(this->fields.__4__this) = 32;
          if ( !v339 )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44638572(
                                                      v339,
                                                      (System_Char_array *)this,
                                                      1,
                                                      0LL);
          if ( !this )
            goto LABEL_438;
          v340 = this;
          if ( SLODWORD(this->fields.__2__current) < 2 )
            goto LABEL_164;
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_7180/*"HTTP"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_164;
          if ( LODWORD(v340->fields.__2__current) <= 1 )
            goto LABEL_295;
          this = (AssetLoader__LoadDataCR_d__29_o *)v340->fields.resourceNames;
          if ( !this )
            goto LABEL_438;
          if ( !System_String__Equals_44565128((System_String_o *)this, (System_String_o *)StringLiteral_1212/*"503"*/, 0LL) )
            goto LABEL_164;
          v341 = v9->fields._url_5__11;
          v342 = v9->fields._autoRetryCount_5__3 + 1;
          v9->fields._isAutoRetry_5__4 = 1;
          v9->fields._autoRetryCount_5__3 = v342;
          v343 = System_Int32__ToString((int)v9 + 52, 0LL);
          v321 = (System_Int32_array **)System_String__Concat_44581200(
                                          (System_String_o *)StringLiteral_592/*"("*/,
                                          v341,
                                          (System_String_o *)StringLiteral_662/*")\n\n503 Auto retry count "*/,
                                          v343,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v321;
          goto LABEL_109;
        }
        image = (__int64 (**)(void))v315->_1.image;
        v317 = *(&System_IO_IOException_TypeInfo->_2.bitflags2 + 1);
        if ( *((unsigned __int8 *)v315->_1.image + 300) >= (unsigned int)v317
          && *((System_IO_IOException_c **)image[25] + v317 - 1) == System_IO_IOException_TypeInfo )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)v299[4].klass;
          if ( !this )
            goto LABEL_438;
          v321 = (System_Int32_array **)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v321;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
          v318 = v299[4].klass;
          if ( !v318 )
            goto LABEL_438;
          v319 = (System_String_o *)this;
          v320 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v318->_1.image
                                     + 49))(
                                      v299[4].klass,
                                      *((_QWORD *)v318->_1.image + 50));
          v321 = (System_Int32_array **)System_String__Concat_44581200(
                                          (System_String_o *)StringLiteral_18625/*"error "*/,
                                          v319,
                                          (System_String_o *)StringLiteral_81/*" "*/,
                                          v320,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v321;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
LABEL_109:
        sub_B5D560(p_errorCode_5__6, v321, v322, v323, v324, v325, v326, v327);
LABEL_164:
        v9->fields._url_5__11 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v309, v310, v311, v312, v313, v314);
        p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)p_asyncOperater_5__12;
        v258 = 0LL;
        v9->fields._asyncOperater_5__12 = 0LL;
LABEL_165:
        sub_B5D560(p_errorLocalizeCode_5__7, v258, v251, v252, v253, v254, v255, v256);
        method = (const MethodInfo *)p_errorCode_5__6->klass;
        if ( p_errorCode_5__6->klass )
        {
          AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
          v402 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v402 = ManagerConfig_TypeInfo;
          }
          if ( v402->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v403 = _4__this->fields.data;
            if ( !v403 )
              goto LABEL_438;
            v404 = (CommonUI_o *)this;
            v405 = System_String__Concat_44581200(
                     (System_String_o *)StringLiteral_2129/*"AssetName : "*/,
                     v403->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     (System_String_o *)p_errorCode_5__6->klass,
                     0LL);
            v406 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v406, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v404 )
              goto LABEL_438;
            v8 &= 0xFFFFFFFF00000000LL;
            *(_DWORD *)&effectDistance.fields.has_value = v8;
            effectDistance.fields.value = 0LL;
            CommonUI__OpenWarningDialog(
              v404,
              (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
              v405,
              v406,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
LABEL_173:
            if ( _4__this->fields.isErrorDialog )
            {
              v597 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v597;
              sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v597, v2, v3, v4, v5, v6, v7);
              v186 = 2;
              goto LABEL_411;
            }
          }
          if ( v9->fields._isAutoRetry_5__4 )
          {
            autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
            v574 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v574 = ManagerConfig_TypeInfo;
            }
            DOWNLOAD_RETRY_DELAY_TIME = v574->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
            v576 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v576, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v576;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B5D560(p__2__current, (System_Int32_array **)v576, v577, v578, v579, v580, v581, v582);
            v572 = 3;
LABEL_413:
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v572;
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
            if ( !byte_42E5AE3 )
            {
              sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
              byte_42E5AE3 = 1;
            }
            v407 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v407 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v407->static_fields->isDuringStartup;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
            v411 = (CommonUI_o *)Instance;
            v412 = (System_String_o *)StringLiteral_1/*""*/;
            if ( isDuringStartup )
            {
              if ( errorLocalizeCode_5__7 )
                v413 = v9->fields._errorLocalizeCode_5__7;
              else
                v413 = (System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v414 = LocalizationManager__Get(v413, 0LL);
              v415 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v415, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v411 )
                goto LABEL_438;
              CommonUI__OpenRetryBootDialog(v411, v412, v414, v415, 1, 0LL);
            }
            else
            {
              if ( errorLocalizeCode_5__7 )
                v416 = v9->fields._errorLocalizeCode_5__7;
              else
                v416 = (System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v417 = LocalizationManager__Get(v416, 0LL);
              v418 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v418, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v411 )
                goto LABEL_438;
              CommonUI__OpenRetryDialog(v411, v412, v417, v418, 1, 0LL);
            }
LABEL_201:
            if ( _4__this->fields.isErrorDialog )
            {
              v583 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v583;
              sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v583, v2, v3, v4, v5, v6, v7);
              v186 = 4;
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
        if ( !byte_42E5FA0 )
        {
          sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
          byte_42E5FA0 = 1;
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
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v584, v585, v586, v587, v588, v589);
          _4__this->fields.readData = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v590,
            v591,
            v592,
            v593,
            v594,
            v595);
          return 0;
        }
        if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
          goto LABEL_348;
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v420, v421, v422, v423, v424, v425);
          _4__this->fields.readData = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v426,
            v427,
            v428,
            v429,
            v430,
            v431);
        }
        if ( v9->fields._isCrcError_5__5 )
          break;
LABEL_340:
        v9->fields._errorCode_5__6 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v518,
          v519,
          v520,
          v521,
          v522,
          v523);
        v9->fields._wait_5__10 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._wait_5__10, 0LL, v524, v525, v526, v527, v528, v529);
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
            v557 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
            sub_B5D560(v557, LoadRequest, v558, v559, v560, v561, v562, v563);
            this = (AssetLoader__LoadDataCR_d__29_o *)v557->klass;
            if ( !v557->klass )
              goto LABEL_438;
            v564 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
            v9->fields.__2__current = (Il2CppObject *)v564;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B5D560(p__2__current, v564, v566, v567, v568, v569, v570, v571);
            v572 = 11;
          }
          else
          {
            v626 = AssetLoader___c_TypeInfo;
            if ( (BYTE3(AssetLoader___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v626 = AssetLoader___c_TypeInfo;
            }
            v627 = v626->static_fields;
            _9__29_0 = v627->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( (BYTE3(v626->vtable._0_Equals.methodPtr) & 4) != 0 && !v626->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v626);
                v627 = AssetLoader___c_TypeInfo->static_fields;
              }
              v629 = (Il2CppObject *)v627->__9;
              _9__29_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__29_0,
                v629,
                Method_AssetLoader___c__LoadDataCR_b__29_0__,
                (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
              v630 = AssetLoader___c_TypeInfo->static_fields;
              v630->__9__29_0 = _9__29_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v630->__9__29_0,
                (System_Int32_array **)_9__29_0,
                v631,
                v632,
                v633,
                v634,
                v635,
                v636);
            }
            v637 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v637, _9__29_0, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v637;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B5D560(p__2__current, (System_Int32_array **)v637, v638, v639, v640, v641, v642, v643);
            v572 = 10;
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
        v531 = _4__this->fields.data;
        if ( !v531 )
          goto LABEL_438;
        if ( v531->fields.entryCount >= 1 )
        {
          v532 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v9->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v533 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1),
                  *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v533)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v533 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v532;
              if ( !*v532 )
                goto LABEL_438;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_438;
              v534 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v534
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v534 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_438;
              }
            }
            v535 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v536 = (System_Int32_array **)UnityEngine_AssetBundle__LoadFromMemoryAsync(v535, 0LL);
            v9->fields._req_5__13 = (struct UnityEngine_AssetBundleCreateRequest_o *)v536;
            sub_B5D560((BattleServantConfConponent_o *)&v9->fields._req_5__13, v536, v537, v538, v539, v540, v541, v542);
            this = *v532;
            if ( !*v532 )
              goto LABEL_438;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v532 = 0LL;
            sub_B5D560(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              0LL,
              v543,
              v544,
              v545,
              v546,
              v547,
              v548);
            req_5__13 = (System_Int32_array **)v9->fields._req_5__13;
            v9->fields.__2__current = (Il2CppObject *)req_5__13;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              req_5__13,
              v550,
              v551,
              v552,
              v553,
              v554,
              v555);
            v186 = 12;
            goto LABEL_411;
          }
          if ( !this )
            goto LABEL_438;
          v644 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v531, v644, 0LL);
        }
LABEL_37:
        v190 = _4__this->fields.loader;
        if ( v190 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v190, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v191, v192, v193, v194, v195, v196);
        }
        _4__this->fields.readData = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v9->fields._url_5__11,
        ConfigFileAddress,
        v433,
        v434,
        v435,
        v436,
        v437,
        v438);
LABEL_221:
      v439 = *p_url_5__11;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v439, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_438;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v447 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_B5D560(
        (BattleServantConfConponent_o *)&_4__this->fields.loader,
        (System_Int32_array **)this,
        v441,
        v442,
        v443,
        v444,
        v445,
        v446);
      v448 = UnityEngine_Time__get_unscaledTime(0LL);
      v449 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v449 = ManagerConfig_TypeInfo;
      }
      v450 = v449->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      v9->fields._requestTime_5__8 = v448 + v450;
      this = *v447;
      if ( !*v447 )
        goto LABEL_438;
      v451 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                      0LL);
      v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v451;
      v188 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
        v451,
        v452,
        v453,
        v454,
        v455,
        v456,
        v457);
LABEL_230:
      this = *v188;
      if ( !*v188 )
        goto LABEL_438;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = *v188;
        if ( !*v188 )
          goto LABEL_438;
        v464 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v465 = v9->fields._loadProgress_5__9;
        v466 = v464;
        v467 = UnityEngine_Time__get_unscaledTime(0LL);
        v295 = v466 == v465;
        v468 = v467;
        if ( !v295 )
        {
          v648 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v648 = ManagerConfig_TypeInfo;
          }
          v649 = v648->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
          v9->fields._requestTime_5__8 = v468 + v649->TIMEOUT;
          if ( !this )
            goto LABEL_438;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_437;
        }
        if ( v467 < v9->fields._requestTime_5__8 )
        {
LABEL_437:
          v650 = (System_Int32_array **)v9->fields._wait_5__10;
          v9->fields.__2__current = (Il2CppObject *)v650;
          sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v650, v458, v459, v460, v461, v462, v463);
          v186 = 5;
          goto LABEL_411;
        }
      }
      v9->fields._errorCode_5__6 = 0LL;
      v469 = &v9->fields._errorCode_5__6;
      sub_B5D560((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v458, v459, v460, v461, v462, v463);
      if ( !_4__this )
        goto LABEL_438;
      v470 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v470 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v470, 0LL);
        v515 = &StringLiteral_2142/*"AssetStorageList download time over"*/;
        goto LABEL_377;
      }
      v471 = UnityEngine_Networking_UnityWebRequest__get_error(*v470, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v471, 0LL);
      if ( !*v470 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v598 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__get_error(*v470, 0LL);
        *v469 = (System_String_o *)v598;
        goto LABEL_378;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v470, 0LL);
      if ( !this )
        goto LABEL_438;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v473 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v473, 0LL) )
      {
        v515 = &StringLiteral_2140/*"AssetStorageList download error"*/;
        goto LABEL_377;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_438;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v473 )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim(v473, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_438;
      v480 = (System_String_o *)this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_24010/*"~"*/, 0LL) )
        goto LABEL_332;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v481 = (int)this->fields.__2__current;
      if ( !v481 )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = 13;
      if ( v481 == 1 )
        goto LABEL_295;
      WORD1(this->fields.__4__this) = 10;
      v482 = System_String__IndexOfAny(v480, (System_Char_array *)this, 0LL);
      if ( v482 < 2 )
        goto LABEL_332;
      v483 = v482;
      v484 = System_String__Substring_44641524(v480, 1, v482 - 1, 0LL);
      v485 = System_String__Substring(v480, v483 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_438;
      v486 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v485,
                                    this->klass[1]._1.nestedTypes);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v487 = Crc32__Compute(v486, 0LL);
      if ( System_UInt32__Parse(v484, 0LL) != v487 )
      {
LABEL_332:
        v515 = &StringLiteral_2139/*"AssetStorageList download data error"*/;
LABEL_377:
        v598 = (System_Int32_array **)*v515;
        *v469 = (System_String_o *)*v515;
LABEL_378:
        sub_B5D560(
          (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
          v598,
          v474,
          v475,
          v476,
          v477,
          v478,
          v479);
        if ( *v470 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v470, 0LL);
          *v470 = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v599, v600, v601, v602, v603, v604);
        }
        if ( *v469 )
        {
          v605 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v605 = ManagerConfig_TypeInfo;
          }
          if ( v605->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v606 = _4__this->fields.data;
            if ( !v606 )
              goto LABEL_438;
            v607 = (CommonUI_o *)this;
            v608 = System_String__Concat_44581200(
                     (System_String_o *)StringLiteral_2129/*"AssetName : "*/,
                     v606->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     *v469,
                     0LL);
            v609 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v609, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v607 )
              goto LABEL_438;
            effectDistancea.fields.value = 0LL;
            *(_DWORD *)&effectDistancea.fields.has_value = 0;
            CommonUI__OpenWarningDialog(
              v607,
              (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
              v608,
              v609,
              1,
              0,
              -1.0,
              1,
              effectDistancea,
              0LL);
LABEL_388:
            if ( _4__this->fields.isErrorDialog )
            {
              v610 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v610;
              sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v610, v2, v3, v4, v5, v6, v7);
              v186 = 6;
              goto LABEL_411;
            }
          }
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_42E5AE3 )
          {
            sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
            byte_42E5AE3 = 1;
          }
          v611 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v611 = ManagementManager_TypeInfo;
          }
          v612 = v611->static_fields->isDuringStartup;
          v613 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v612 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v614 = LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v615 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v615, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v613 )
              goto LABEL_438;
            CommonUI__OpenRetryBootDialog(v613, (System_String_o *)StringLiteral_1/*""*/, v614, v615, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v616 = LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v617 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v617, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v613 )
              goto LABEL_438;
            CommonUI__OpenRetryDialog(v613, (System_String_o *)StringLiteral_1/*""*/, v616, v617, 0, 0LL);
          }
LABEL_409:
          if ( _4__this->fields.isErrorDialog )
          {
            v618 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)v618;
            sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v618, v2, v3, v4, v5, v6, v7);
            v186 = 7;
            goto LABEL_411;
          }
        }
        v619 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v619, 1.0, 0LL);
        v9->fields.__2__current = (Il2CppObject *)v619;
        p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
        sub_B5D560(p__2__current, (System_Int32_array **)v619, v620, v621, v622, v623, v624, v625);
        v572 = 8;
        goto LABEL_413;
      }
      v654 = v9;
      if ( !v485 )
      {
LABEL_312:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_42E5AE3 )
        {
          sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v474, v475);
          byte_42E5AE3 = 1;
        }
        v508 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v508 = ManagementManager_TypeInfo;
        }
        v509 = v508->static_fields->isDuringStartup;
        v510 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v509 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v511 = &StringLiteral_9371/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v511 = &StringLiteral_9370/*"NETWORK_ERROR_ASSET_UPDATE"*/;
        }
        v512 = LocalizationManager__Get((System_String_o *)*v511, 0LL);
        v513 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v513, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
        if ( !v510 )
          goto LABEL_438;
        CommonUI__OpenErrorDialog(v510, (System_String_o *)StringLiteral_1/*""*/, v512, v513, 0, 0LL);
        return 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v488 = (int)this->fields.__2__current;
      if ( !v488 || (LOWORD(this->fields.__4__this) = 13, v488 == 1) )
      {
LABEL_295:
        v501 = sub_B5D6C8(this);
        sub_B5D668(v501, 0LL);
      }
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44638572(v485, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_438;
      v489 = this->fields.__2__current;
      v490 = this;
      if ( (int)v489 < 1 )
        goto LABEL_312;
      v491 = 0;
      while ( 1 )
      {
        v492 = (System_String_o *)*((_QWORD *)&v490->fields.__4__this + (int)v491);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_438;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_295;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v492 )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split(v492, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_438;
        v493 = this->fields.__2__current;
        v494 = this;
        if ( (int)v493 < 1 )
          break;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1560/*"@"*/,
                                                    0LL);
        if ( !LODWORD(v494->fields.__2__current) )
          goto LABEL_295;
        v495 = (char)this;
        this = (AssetLoader__LoadDataCR_d__29_o *)v494->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        if ( (v495 & 1) != 0 )
        {
          v496 = System_String__Substring((System_String_o *)this, 1, 0LL);
          p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
          if ( SLODWORD(v494->fields.__2__current) > 1 )
            p_resourceNames = (System_String_o **)&v494->fields.resourceNames;
          v498 = *p_resourceNames;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v496, v498, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_312;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_24010/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v494->fields.__2__current) )
              goto LABEL_295;
            this = (AssetLoader__LoadDataCR_d__29_o *)v494->fields.__4__this;
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v493 = v494->fields.__2__current;
              break;
            }
          }
        }
LABEL_293:
        if ( (int)++v491 >= (int)v489 )
          goto LABEL_312;
        if ( v491 >= LODWORD(v490->fields.__2__current) )
          goto LABEL_295;
      }
      if ( (_DWORD)v493 != 5 )
        goto LABEL_312;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v494->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_438;
      v499 = System_String__Trim_44565120((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v499, 0LL);
      if ( LODWORD(v494->fields.__2__current) <= 4 )
        goto LABEL_295;
      v500 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v494->fields._errorCode_5__6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_293;
      v502 = _4__this->fields.data;
      if ( !v502 )
        goto LABEL_438;
      if ( v500 != v502->fields.crc )
        goto LABEL_312;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_42E5AE3 )
      {
        sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v474, v475);
        byte_42E5AE3 = 1;
      }
      v503 = ManagementManager_TypeInfo;
      v9 = v654;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v503 = ManagementManager_TypeInfo;
      }
      v504 = v503->static_fields->isDuringStartup;
      v505 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v504 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v506 = LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v507 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v507, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( v505 )
        {
          CommonUI__OpenRetryBootDialog(v505, (System_String_o *)StringLiteral_1/*""*/, v506, v507, 1, 0LL);
          goto LABEL_338;
        }
        goto LABEL_438;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v516 = LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v517 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v517, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
      if ( !v505 )
        goto LABEL_438;
      CommonUI__OpenRetryDialog(v505, (System_String_o *)StringLiteral_1/*""*/, v516, v517, 1, 0LL);
LABEL_338:
      if ( !_4__this->fields.isErrorDialog )
      {
        v9->fields._url_5__11 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v2, v3, v4, v5, v6, v7);
        goto LABEL_340;
      }
      v596 = (System_Int32_array **)v9->fields._wait_5__10;
      v9->fields.__2__current = (Il2CppObject *)v596;
      sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v596, v2, v3, v4, v5, v6, v7);
      v186 = 9;
LABEL_411:
      v9->fields.__1__state = v186;
      return 1;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v177 = v9->fields._req_5__13;
      v9->fields.__1__state = -1;
      if ( !v177 )
        goto LABEL_36;
      if ( !_4__this )
        goto LABEL_438;
      v178 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(v177, 0LL);
      if ( !v178 )
        goto LABEL_438;
      v179 = (System_Int32_array **)AssetData__SetAssetBundleData(
                                      v178,
                                      (UnityEngine_AssetBundle_o *)this,
                                      v9->fields.resourceNames,
                                      0LL);
      v9->fields.__2__current = (Il2CppObject *)v179;
      sub_B5D560((BattleServantConfConponent_o *)&v9->fields.__2__current, v179, v180, v181, v182, v183, v184, v185);
      v186 = 13;
      goto LABEL_411;
    case 0xD:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v9->fields.__1__state = -1;
LABEL_36:
      this->klass = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7518 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader___c_TypeInfo, v1, v2, v3);
    byte_42E7518 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AssetLoader___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssetLoader___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7519 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7519 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return BYTE4(Instance[1].monitor) == 0;
}